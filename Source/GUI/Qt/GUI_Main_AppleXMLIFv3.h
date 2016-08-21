// GUI_Main_AppleXMLIFv3 - 
// Copyright (C) 2009-2009 AudioVisual Preservation Solutions, dv@avpreserve.com
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public
// License as published by the Free Software Foundation; either
// version 2.1 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//
//
//
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

//---------------------------------------------------------------------------
#ifndef GUI_Main_AppleXMLIFv3H
#define GUI_Main_AppleXMLIFv3H
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
class Core;
#include <QTextEdit>
class QEvent;
//---------------------------------------------------------------------------

//***************************************************************************
// GUI_Main_AppleXMLIFv3
//***************************************************************************

class GUI_Main_AppleXMLIFv3 : public QTextEdit
{
    Q_OBJECT

public:
    //Constructor/Destructor
    GUI_Main_AppleXMLIFv3(Core* C, QWidget* parent);

    //Events
    bool event (QEvent *Event); 

private:
    //Internal
    Core* C;
};

#endif
