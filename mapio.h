///////////////////////////////////////////////////////////////////////////////
// Praktikum Informatik 1 MMXXVI
// Versuch 9
//////////////////////////////////////////////////////////////////////////////

#ifndef MAPIO_H
#define MAPIO_H

#include "abstractmap.h"

/// This class adds Cities and Streeds to a Map.
class MapIo
{
public:
    
    /// virtual Destructor
    virtual ~MapIo();
    
    /**
     * @brief This method adds cities and streets to the map.
     *
     * @param map The map that contains the city and street data.
     */
    virtual void fillMap(AbstractMap &map) = 0;
};

#endif // MAPIO_H
