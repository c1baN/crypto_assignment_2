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

//class Tema
//{
//public:
//	Asn1Sequence Tema_;
//	Asn1ObjectIdentifier domeniu;
//	Asn1UTF8String titlu;
//};
//
//class Nume
//{
//public:
//	Asn1Sequence Nume_;
//	Asn1PrintableString nume;
//	Asn1PrintableString prenume;
//};
//
//class Student
//{
//public:
//	Asn1Sequence Student_;
//	Asn1Integer varsta;
//	Nume nume;
//	Asn1Boolean cu_taxa;
//	Tema tema;
//};


int main()
{
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