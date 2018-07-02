//############################################################################
//      dump tool
//############################################################################
 
#if !defined(DUMP_H)
#define DUMP_H
 
// ***************************************************************************
//      includes
// ***************************************************************************
 
#include <iostream>
#include <iomanip>
#include <string>
 
// ***************************************************************************
//      dump()
// ***************************************************************************
 
template<typename tType>
void dump(std::ostream& iOStream, char const* iTitle, tType const& iInstance)
{
    iOStream << std::setw(16+2) << std::setfill(' ') << std::left << iTitle;
    for (unsigned i=0; i < 16; ++i)
    {
        iOStream << " +" << std::hex << i;
    }
 
    unsigned char const* p=reinterpret_cast<unsigned char const*>(&iInstance);
    for (std::size_t i=0; i < sizeof(iInstance); ++i)
    {
        if ((i % 16) == 0)
        {
            iOStream << "n" << std::setw(16) << std::setfill(' ') << std::right;
            iOStream.operator<<(p) << " :";
        }
 
        iOStream << " " << std::hex << std::setw(2) << std::setfill('0');
        iOStream.operator<<(*p++);
    }
    iOStream << std::dec << "nn";
}
 
#endif  // DUMP_H