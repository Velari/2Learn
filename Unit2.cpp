//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AplOk.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button1Click(TObject *Sender)
{
        Form1->ListBox1->Items->Add(Edit1->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
        Form2->Close();
}
//---------------------------------------------------------------------------

