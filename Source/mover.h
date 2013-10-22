
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



#ifndef MOVER_H
#define MOVER_H

#define MOVER_MESSAGE 'MVMO'
#define MM_COORD "coord"
#define MM_VIEW "view"

#include <InterfaceKit.h>

class Mover : public BView
{
public:
	Mover(BRect r,uint32 resizingMode,bool vertical);
	~Mover();
	
	virtual void Draw(BRect);
	virtual void MouseUp(BPoint);
	virtual void MouseDown(BPoint);
	virtual void MouseMoved(BPoint,uint32,const BMessage*);

private:
	bool vertical;
	bool moving;
	BPoint clickPoint;
	BRect limits;
};

#endif //MOVER_H
