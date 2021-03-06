// criptolab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <openssl\asn1.h>
#include <vector>
#include <string.h>
#include "Asn1Tlv.h"
#include "Helper.h"
#include "Asn1Integer.h"
#include "Asn1PrintableString.h"
#include "Asn1Utf8String.h"
#include "Asn1Boolean.h"
#include "Asn1Sequence.h"
#include "Asn1ObjectIdentifier.h"

class TemaStruct
{
public:
	Asn1Sequence* TemaStruct_;
	Asn1ObjectIdentifier* domeniu_;
	Asn1UTF8String* titlu_;
	TemaStruct(char* titlu, char* values)
	{
		titlu_ = new Asn1UTF8String(titlu);
		domeniu_ = new Asn1ObjectIdentifier(NULL);
		TemaStruct_ = new Asn1Sequence();
		TemaStruct_->Add(titlu_);
		TemaStruct_->Add(domeniu_);
	}
};

class NumeStruct
{
public:
	Asn1Sequence* NumeStruct_;
	Asn1PrintableString* nume_;
	Asn1PrintableString* prenume_;
	NumeStruct(char* nume, char* prenume)
	{
		nume_ = new Asn1PrintableString(nume);
		prenume_ = new Asn1PrintableString(prenume);
		NumeStruct_ = new Asn1Sequence();
		NumeStruct_->Add(nume_);
		NumeStruct_->Add(prenume_);
	}
};

class Student
{
public:
	Asn1Sequence* Student_;
	Asn1Integer* varsta_;
	NumeStruct* nume_;
	Asn1Boolean* cu_taxa_;
	TemaStruct* tema_;
	Student(char* nume, char* prenume, int varsta, bool cu_taxa, char* domeniu, char* titlu)
	{
		varsta_ = new Asn1Integer(varsta);
		cu_taxa_ = new Asn1Boolean(cu_taxa);
		nume_ = new NumeStruct(nume, prenume);
		tema_ = new TemaStruct(titlu, domeniu);
		Student_ = new Asn1Sequence();
		Student_->Add(varsta_);
		Student_->Add(cu_taxa_);
		Student_->Add(nume_->NumeStruct_);
		Student_->Add(tema_->TemaStruct_);
		//...
	}
};


int main()
{
	//
	Asn1Integer intorin(178966);
	Asn1Tlv tlvito = intorin.GetTlv();
	Asn1Integer outorin(0);
	outorin.FillData(tlvito);
	//
	Student S((char*)"Popescu", (char*)"Ion", 20, true, (char*)"1.2.3.4.5", (char*)"Tema Asn1");
	Asn1Tlv tlv_ = S.Student_->GetTlv();//TODO = operator plox

	/*char* test2 = Helper::TextToHex((char*)"fghijklm");
	char* test3 = Helper::HexToText(test2);
	printf("test2: %s\ntest3: %s\n", test2, test3);
	int flag = 0;
	int rip = 0;
	char* merge_banda = Helper::WriteAsn1Length(342512, &rip);
	int come_back = Helper::ReadAsn1Length(merge_banda, &flag);
	printf("%d", come_back);
	Asn1Integer intorin(256);
	Asn1Tlv asiiin = intorin.GetTlv();*/
	
	return 0;
}