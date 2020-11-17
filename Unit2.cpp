//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
	c1 = new Rs232();
}
//---------------------------------------------------------------------------
void __fastcall TForm2::connexionClick(TObject *Sender)
{
    if(c1->OpenPort())
	{
		Shape1->Brush->Color=clGreen;
	}else
	{
		Shape1->Brush->Color=clRed;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm2::DeconnexionClick(TObject *Sender)
{
    c1->ClosePort();
	Shape1->Brush->Color=clRed;
}
//---------------------------------------------------------------------------

void __fastcall TForm2::GaucheMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	char trame[9];

	trame[0]=0x81;
	trame[1]=0x01;
	trame[2]=0x06;
	trame[3]=0x01;
	trame[4]=0x05;
	trame[5]=0x05;
	trame[6]=0x01;
	trame[7]=0x03;
	trame[8]=0xFF;

	c1->WritePort(trame, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::GaucheMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
    char chaine[9];

	chaine[0]=0x81;
	chaine[1]=0x01;
	chaine[2]=0x06;
	chaine[3]=0x01;
	chaine[4]=0x05;
	chaine[5]=0x05;
	chaine[6]=0x03;
	chaine[7]=0x03;
	chaine[8]=0xFF;


	c1->WritePort(chaine,9);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::DroiteMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	char trame[9];

	trame[0]=0x81;
	trame[1]=0x01;
	trame[2]=0x06;
	trame[3]=0x01;
	trame[4]=0x05;
	trame[5]=0x05;
	trame[6]=0x02;
	trame[7]=0x03;
	trame[8]=0xFF;

    c1->WritePort(trame, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::neutreClick(TObject *Sender)
{
	char trame[5];

	trame[0]=0x81;
	trame[1]=0x01;
	trame[2]=0x06;
	trame[3]=0x04;
	trame[4]=0xFF;

	c1->WritePort(trame, 5);
}
//---------------------------------------------------------------------------


void __fastcall TForm2::DroiteMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	char chaine[9];

	chaine[0]=0x81;
	chaine[1]=0x01;
	chaine[2]=0x06;
	chaine[3]=0x01;
	chaine[4]=0x05;
	chaine[5]=0x05;
	chaine[6]=0x03;
	chaine[7]=0x03;
	chaine[8]=0xFF;

	c1->WritePort(chaine, 9);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::TrackBar1Change(TObject *Sender)
{

char trame[9];

	switch(this->TrackBar1->Position)
	{
		case 0:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x00;
			trame[6]=0x00;
			trame[7]=0x00;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		case 1:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x00;
			trame[6]=0x09;
			trame[7]=0x09;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		case 2:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x00;
			trame[6]=0x30;
			trame[7]=0x30;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		case 3:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x00;
			trame[6]=0x50;
			trame[7]=0x50;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		case 4:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x00;
			trame[6]=0x70;
			trame[7]=0x70;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		case 5:
			trame[0]=0x81;
			trame[1]=0x01;
			trame[2]=0x04;
			trame[3]=0x47;
			trame[4]=0x00;
			trame[5]=0x03;
			trame[6]=0x0F;
			trame[7]=0x0F;
			trame[8]=0xFF;
			c1->WritePort(trame,9);
			break;

		default:
			break;
	}

}
//---------------------------------------------------------------------------

