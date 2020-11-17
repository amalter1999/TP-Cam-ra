//---------------------------------------------------------------------------

#ifndef Unit2H
#define Unit2H

//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "Rs232.h"
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// Composants g�r�s par l'EDI
	TButton *connexion;
	TButton *Deconnexion;
	TShape *Shape1;
	TButton *Gauche;
	TButton *Droite;
	TTrackBar *TrackBar1;
	TButton *neutre;
	void __fastcall connexionClick(TObject *Sender);
	void __fastcall DeconnexionClick(TObject *Sender);
	void __fastcall GaucheMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall GaucheMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall DroiteMouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall neutreClick(TObject *Sender);
	void __fastcall DroiteMouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall TrackBar1Change(TObject *Sender);
private:	// D�clarations utilisateur
	Rs232 *c1;
public:		// D�clarations utilisateur
	__fastcall TForm2(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif
