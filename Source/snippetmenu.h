
/*//-----------------------------------------------------------------------------
	Niue Development Environment
	Copyright 2008 T. Lansbergen, All Rights Reserved.

	Redistribution and use in source and binary forms, with or without
	modification, are permitted for non-commercial use only.
	
	This software is provided ``as is'' and any express or implied warranties,
	including, but not limited to, the implied warranties of merchantability and
	fitness for a particular purpose are disclaimed. In no event shall
	authors be liable for any direct, indirect, incidental, special,
	exemplary, or consequential damages (including, but not limited to,
	procurement of substitute goods or services; loss of use, data, or profits;
	or business interruption) however caused and on any theory of liability,
	whether in contract, strict liability, or tort (including negligence or
	otherwise) arising in any way out of the use of this software, even if
	advised of the possibility of such damage. 

*///-----------------------------------------------------------------------------



#ifndef SNIPPETMENU_H
#define SNIPPETMENU_H

#include <Application.h>
#include <InterfaceKit.h>
#include <StorageKit.h>
#include <String.h>

#define		SNIP_ADD_ITEM	'SNAI'

class snippetmenu : public BPopUpMenu {

	public:
						snippetmenu(const char *name);

	private:
	
		BMenu*			mnuSnippets;
		BMenu*			mnuInterfaceElements;
		BMenu*			mnuLoopsStatements;
		BMenu*			mnuCommonCode;
		BMenu*			mnuUserCode;
};

class NSnipMenuItem : public BMenuItem {
	public:
		
						NSnipMenuItem(const char *label, BMessage *message, BString code);
						~NSnipMenuItem();
		BString			CodeToInsert;

	private:		
};

#endif
