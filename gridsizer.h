#include <wx/wx.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class GridSizer : public wxFrame
{
public:
  GridSizer(const wxString& title);

  wxBoxSizer *sizer;
  wxGridSizer *gs;
  wxTextCtrl *display;

  void onCls (wxCommandEvent&);
  void onClose (wxCommandEvent&);
  void onBack(wxCommandEvent&);
  void onBt0 (wxCommandEvent&);
  void onBt1 (wxCommandEvent&);
  void onBt2 (wxCommandEvent&);
  void onBt3 (wxCommandEvent&);
  void onBt4 (wxCommandEvent&);
  void onBt5 (wxCommandEvent&);
  void onBt6 (wxCommandEvent&);
  void onBt7 (wxCommandEvent&);
  void onBt8 (wxCommandEvent&);
  void onBt9 (wxCommandEvent&);
  void onBtSum (wxCommandEvent&);
  void onBtRes (wxCommandEvent&);
  void onBtMul (wxCommandEvent&);
  void onBtDiv (wxCommandEvent&);
  void onBtIgual (wxCommandEvent&);

private:
  int total;
  int cantidad;
  int cantidad1;
  int identificador = 0;
  string letrastotal;
  int numeroscontables1 = 0;
  int numeroscontables2 = 0;
  char primeralista[10000000]={};
  char segundalista[10000000]={};
  DECLARE_EVENT_TABLE()
};
