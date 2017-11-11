#include "gridsizer.h"
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

GridSizer::GridSizer(const wxString& title)
       : wxFrame(NULL, -1, title, wxPoint(-1, -1), wxSize(270, 220))
{
  sizer = new wxBoxSizer(wxVERTICAL);

  display = new wxTextCtrl(this, -1, wxT(""), wxPoint(-1, -1),
     wxSize(-1, -1), wxTE_RIGHT);

  sizer->Add(display, 0, wxEXPAND | wxTOP | wxBOTTOM, 4);
  gs = new wxGridSizer(5, 4, 3, 3);

  gs->Add(new wxButton(this, 1050, wxT("Clear")), 0, wxEXPAND);
  gs->Add(new wxButton(this, -1, wxT("Back")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3000, wxT("Close")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3009, wxT("7")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3008, wxT("8")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3007, wxT("9")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3010, wxT("/")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3006, wxT("4")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3005, wxT("5")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3004, wxT("6")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3002, wxT("*")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3003, wxT("1")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3022, wxT("2")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3001, wxT("3")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3003, wxT("-")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3012, wxT("0")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3004, wxT("=")), 0, wxEXPAND);
  gs->Add(new wxStaticText(this, -1, wxT("")), 0, wxEXPAND);
  gs->Add(new wxButton(this, 3021 , wxT("+")), 0, wxEXPAND);

  sizer->Add(gs, 1, wxEXPAND);
  SetSizer(sizer);
  SetMinSize(wxSize(270, 220));

  Centre();
}

void GridSizer::onCls (wxCommandEvent& WXUNUSED (event)) {
  total = 0;
  cantidad = 0;
  cantidad1 = 0;
  identificador = 0;
  letrastotal = "";
  numeroscontables1 = 0;
  numeroscontables2 = 0;
  primeralista[100]={};
  segundalista[500]={};
  display->Clear();
}

void GridSizer::onClose (wxCommandEvent& WXUNUSED (event)) {
  Destroy();
}

void GridSizer::onBt0 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("0");
  cout<<"0"
  if(identificador == 0){
    primeralista[numeroscontables1] = '0';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '0';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt1 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("1");
  cout<<"1"
  if(identificador == 0){
    primeralista[numeroscontables1] = '1';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '1';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt2 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("2");
  cout<<"2"
  if(identificador == 0){
    primeralista[numeroscontables1] = '2';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '2';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt3 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("3");
  cout<<"3"
  if(identificador == 0){
    primeralista[numeroscontables1] = '3';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '3';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt4 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("4");
  cout<<"4";
  if(identificador == 0){
    primeralista[numeroscontables1] = '4';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '4';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt5 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("5");
  cout<<"5"
  if(identificador == 0){
    primeralista[numeroscontables1] = '5';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '5';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt6 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("6");
  cout<<"6";
  if(identificador == 0){
    primeralista[numeroscontables1] = '6';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '6';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt7 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("7");
  cout<<"7";
  if(identificador == 0){
    primeralista[numeroscontables1] = '7';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '7';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt8 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("8");
  cout<<"8"
  if(identificador == 0){
    primeralista[numeroscontables1] = '8';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '8';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBt9 (wxCommandEvent& WXUNUSED (event)) {
  display->AppendText("9");
  cout<<"9";
  if(identificador == 0){
    primeralista[numeroscontables1] = '9';
    numeroscontables1 = numeroscontables1 + 1;
  }
  if(identificador != 0){
    segundalista[numeroscontables2] = '9';
    numeroscontables2 = numeroscontables2 + 1;
  }
}

void GridSizer::onBtSum (wxCommandEvent& WXUNUSED (event)) {
	identificador = 1;
  display->AppendText(" + ");
}

void GridSizer::onBtRes (wxCommandEvent& WXUNUSED (event)) {
  identificador = 2;
  display->AppendText(" - ");
}

void GridSizer::onBtDiv (wxCommandEvent& WXUNUSED (event)) {
	identificador = 3;
  display->AppendText(" / ");
}

void GridSizer::onBtMul (wxCommandEvent& WXUNUSED (event)) {
	identificador = 4;
  display->AppendText(" x ");
}

void GridSizer::onBtIgual (wxCommandEvent& WXUNUSED (event)) {
    cantidad = atoi(primeralista);
    cantidad1 = atoi(segundalista);
    if (identificador == 1) {
      total = cantidad + cantidad1;
    }
    if (identificador == 2) {
      total = cantidad - cantidad1;
    }
    if (identificador == 3) {
      total = cantidad / cantidad1;
    }
    if (identificador == 4) {
      total = cantidad * cantidad1;
    }

    stringstream convert;
    convert << total;
    letrastotal=convert.str();
    display->AppendText(" = " + letrastotal);

}

BEGIN_EVENT_TABLE(GridSizer, wxFrame)
    EVT_BUTTON(1050,  GridSizer::onCls)
    EVT_BUTTON(3000,  GridSizer::onClose)
    EVT_BUTTON(3012,  GridSizer::onBt0)
    EVT_BUTTON(3008,  GridSizer::onBt1)
    EVT_BUTTON(3022,  GridSizer::onBt2)
    EVT_BUTTON(3001,  GridSizer::onBt3)
    EVT_BUTTON(3006,  GridSizer::onBt4)
    EVT_BUTTON(3005,  GridSizer::onBt5)
    EVT_BUTTON(3004,  GridSizer::onBt6)
    EVT_BUTTON(3009,  GridSizer::onBt7)
    EVT_BUTTON(3008,  GridSizer::onBt8)
    EVT_BUTTON(3007,  GridSizer::onBt9)
    EVT_BUTTON(3021,  GridSizer::onBtSum)
    EVT_BUTTON(3003,  GridSizer::onBtRes)
    EVT_BUTTON(3002,  GridSizer::onBtMul)
    EVT_BUTTON(3010,  GridSizer::onBtDiv)
    EVT_BUTTON(3004,  GridSizer::onBtIgual)

END_EVENT_TABLE()
