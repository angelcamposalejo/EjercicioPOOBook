#pragma once

/**************************************************************************

   THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
   ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO
   THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
   PARTICULAR PURPOSE.  I ACCEPT NO LIABILITY FOR ANY DAMAGE OR LOSS
   OF BUSINESS THAT THIS SOFTWARE MAY CAUSE.

   Wintempla.h 
 
   © Copyright 2000 - 2016 Sergio Ledesma.  All Rights Reserved.

   THIS CODE IS PROTECTED BY COPYRIGHT LAW AND INTERNATIONAL TREATIES.
	UNAUTHORIZED REPRODUCTION OR DISTRIBUTION OF THIS CODE, OR ANY PORTION
	OF IT, MAY RESULT IN SEVERE CIVIL AND CRIMINAL PENALTIES, AND WILL BE
	PROSECUTED TO THE MAXIMUM EXTENT POSSIBLE UNDER THE LAW.

	ESTE CODIGO ESTA PROTEGIDO POR LAS LEYES Y TRATADOS DE DERECHO AUTOR
	INTERNACIONALES.  LA REPRODUCCION SIN AUTORIZACION O LA DISTRIBUCION
	DE ESTE CODIGO, O CUALQUIER PARTE DE ESTE, RESULTARA EN SEVERA
	PENALIDAD CIVIL Y CRIMINAL, Y SERA PERSEGUIDA HASTA SU MAXIMA 
	EXTENSION BAJO LO QUE PERMITA LA LEY.
***************************************************************************/

// Requires this before including windows.h
//_________________________________________________________________ WIN_SOCKETS_SUPPORT
#ifdef WIN_SOCKETS_SUPPORT
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <winsock2.h> //Normal socket
#include <mstcpip.h>//Normal socket
//
#define  SECURITY_WIN32
#include <security.h> //Secure socket
#include <schannel.h> //Secure socket
#include <Wincrypt.h> //Secure socket
//#include <ws2tcpip.h> //Secure socket
//#include <ntdsapi.h>//Secure socket
//#include <rpc.h>
//_________________ Normal socket
#pragma comment(lib, "ws2_32.lib")
//_________________ Secure socket
#pragma comment(lib, "Secur32.lib")
#pragma comment(lib, "Crypt32.Lib")
//#pragma comment(lib, "fwpuclnt.lib")
//#pragma comment(lib, "ntdsapi.lib")
////
//#define RECV_DATA_BUF_SIZE 256
#define WSOCK_IO_BUFFER_SIZE 0x10000
#define WSOCK_OK 0
#define WSOCKERR_NULL_SERVERNAME 12000L
#define WSOCKERR_DNS_CANNOT_SOLVE_NAME 12001L
#define WSOCKERR_INVALID_IP_ADDRESS 12002L
////___________________________________________________ Wininet
//#include "Wininet.h"
//#pragma comment(lib, "Wininet.lib")
//
#endif
//
#define SOCKET_DISCONNECTED 0
#define HTTP_DEBUG_NONE 0
#define HTTP_DEBUG_STATUSLINE 1
#define HTTP_DEBUG_HEADER 2
#define HTTP_DEBUG_FULL 3
//
#define WEBSERVICE_VARIABLE_INT 0
#define WEBSERVICE_VARIABLE_DOUBLE 1 
#define WEBSERVICE_VARIABLE_BOOL 2
#define WEBSERVICE_VARIABLE_TEXT 3
#define WEBSERVICE_VARIABLE_OTHER 4
//
#define WIN_THREAD_STARTING 1
#define WIN_THREAD_STARTED 2
#define WIN_THREAD_READY 3
#define WIN_THREAD_STOPPING 4
#define WIN_THREAD_STOPPED 5
#define WIN_THREAD_PROGRESS 6
#define WEBSERVER_INDIVIDUAL_WORK_ID 200

//_____________________________________________________________________ Windows
#include <windows.h>

#define GET_X_LPARAM(lp)                        ((int)(short)LOWORD(lp))
#define GET_Y_LPARAM(lp)                        ((int)(short)HIWORD(lp))

#ifdef WIN_GDI_PLUS_ON
	#include <gdiplus.h>
	#pragma comment(lib, "gdiplus.lib")
#endif

//____________________________________ STL Support of min and max
#undef max     
#undef min

#ifndef MAXIMUM
#define MAXIMUM(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef MINIMUM
#define MINIMUM(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#define ISFOLDER(x) ((x.attrib & _A_SUBDIR) != 0)
#define ISFILE(x) ((x.attrib & _A_SUBDIR) == 0)
#define EXCLUDE_FILE(x) ((x.name[0] == '.' && x.name[1]== '\0') || (x.name[0] == '.' && x.name[1] == '.'  && x.name[2] == '\0'))

#define IS_SEPARATOR(x) (c < (unsigned char)'\'' || ((unsigned char)'\'' < c && c < (unsigned char)'A') || ((unsigned char)'Z' < c && c < (unsigned char)'a') || ((unsigned char)'z' < c && c < (unsigned char)'À'))

#ifndef SS_WINNORMAL
	#define SS_WINNORMAL 0x0000L
#endif

#ifndef CBS_WINNORMALCASE
	#define CBS_WINNORMALCASE 0x0000L
#endif

#ifndef LBS_WINNORMAL
	#define LBS_WINNORMAL 0x0000L
#endif

#ifndef LBS_WINSINGLESEL
	#define LBS_WINSINGLESEL 0x0000L
#endif

#ifndef ES_WINNORMALCASE
	#define ES_WINNORMALCASE 0x0000L
#endif

#ifndef UDS_WINVERT
	#define UDS_WINVERT 0x0000L
#endif

//#define SYS_SOCKET_DATABUFFERSIZE 512
#ifndef WM_SOCKETNOTIFY
	#define WM_SOCKETNOTIFY (WM_USER+10)
#endif
//
#ifndef WM_SOCKETHOSTNAME
	#define WM_SOCKETHOSTNAME (WM_USER+11)
#endif
//
#define WIN_SMTP_BOUNDARY "XYZ0K4L6UFD23QWEasdfkjlEERRE7899ZCKIUHW87YTW"

#define UPDATE_VALUE 1
#define UPDATE_TEXT 2
#define WM_WINADDCHILD (WM_USER+14)
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES 1
#endif
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
//
#define GRAPHICS_SETPIXEL(g, x, y, color) g.bits[(x) + g.width*(g.height - (y) -1)] = (color)
#include "httpext.h"  //_______________________________________Web
//
#define HTML_BARCHART 100
#define HTML_BUTTON 101
#define HTML_CHECKBOX 102
#define HTML_CHECKBOXLIST 103
#define HTML_CUSTOMCONTROL 104
#define HTML_DATETIMEBOX 105
#define HTML_DATEVIEW 106
#define HTML_DROPDOWNLIST 107
#define HTML_HIDDENVALUE 108
#define HTML_HISTOGRAM 109
#define HTML_IMAGE 110
#define HTML_IMAGELINK 111
#define HTML_LABEL 112
#define HTML_LISTBOX 113
#define HTML_LISTVIEW 114
#define HTML_PARENTNODE 115
#define HTML_PIECHART 116
#define HTML_PLUGIN 117
#define HTML_POLARCHART 118
#define HTML_RADIOBUTTON 119
#define HTML_WEBSERVICE 120
#define HTML_TEXTBOX 121
#define HTML_TEXTLINK 122
#define HTML_XYCHART 123
#define HTML_FIRST HTML_BARCHART
#define HTML_LAST HTML_XYCHART
//
#define HTML_PAGE 150
//_____________________________________ TEXT NODE
#define HTML_TND_SPAN 300
#define HTML_TND_P 301
#define HTML_TND_SMALL 302
#define HTML_TND_PRE 303
#define HTML_TND_TT 304
#define HTML_TND_B 305
#define HTML_TND_I 306
#define HTML_TND_U 307
#define HTML_TND_STRIKE 308
#define HTML_TND_Q 309
#define HTML_TND_H1 310
#define HTML_TND_H2 311
#define HTML_TND_H3 312
#define HTML_TND_H4 313
#define HTML_TND_H5 314
#define HTML_TND_H6 315
#define HTML_TND_NONE 316
//_____________________________________ PARENT NODE
#define HTML_PND_TABLE 400
#define HTML_PND_SPAN 401
#define HTML_PND_UL 402
#define HTML_PND_OL 403
#define HTML_PND_DL 404
#define HTML_PND_NONE 405
//____________________________________ OTHER HTML TAGS
#define HTML_TD 450
#define HTML_TR 451
#define HTML_TH 452
#define HTML_DIV 453
#define HTML_LI 454
#define HTML_DD 455
#define HTML_FORM 456
#define HTML_BODY 457
#define HTML_HEAD 458
#define HTML_INPUT 459
#define HTML_BR 460
#define HTML_HR 461
#define HTML_SELECTX 462
#define HTML_TEXTAREA 463
#define HTML_META 464
#define HTML_HTML 465
#define HTML_DOCTYPE 466
#define HTML_TITLE 467
#define HTML_LINK 468
#define HTML_SCRIPT 469
#define HTML_IMG 470
#define HTML_A 471
#define HTML_OPTION 472
#define HTML_OBJECT 473
#define HTML_COMMENT 474
//
#define HTML_BROWSER_UNKNOWN 700
#define HTML_BROWSER_IE 701
#define HTML_BROWSER_SAFARI 702
#define HTML_BROWSER_CHROME 703
#define HTML_BROWSER_OPERA 704
#define HTML_BROWSER_FIREFOX 705
//___________________________________________________ CONTENT TYPE 
#define HTML_CONTENT_TYPE_TEXT_HTML 800
#define HTML_CONTENT_TYPE_TEXT_XML 801
#define HTML_CONTENT_TYPE_APPLICATION_XML 802
#define HTML_CONTENT_TYPE_SOAP1_1 803
#define HTML_CONTENT_TYPE_SOAP1_2 804
#define HTML_CONTENT_TYPE_IMAGE_GIF 805
#define HTML_CONTENT_TYPE_IMAGE_PNG 806
#define HTML_CONTENT_TYPE_IMAGE_XPNG 807
#define HTML_CONTENT_TYPE_IMAGE_JPG 808
//
#define HTML_SIZE_AUTO -100000
#define CSS_COLOR_AUTO 0x1000000
#define HTML_FORM_METHOD_GET 0 
#define HTML_FORM_METHOD_POST 1
//__________________________________________________ Sys::Graphics
#define RGBX(r,g,b)          ((COLORREF)(((BYTE)(b)|((WORD)((BYTE)(g))<<8))|(((DWORD)(BYTE)(r))<<16)))
#define GetBValueX(rgb)      (LOBYTE(rgb))
#define GetGValueX(rgb)      (LOBYTE(((WORD)(rgb)) >> 8))
#define GetRValueX(rgb)      (LOBYTE((rgb)>>16))
//__________________________________________________ Sys::TextAssistant
#define SYS_GETWORDLIST_ASCII 0
#define SYS_GETWORDLIST_UNICODE 1
#define SYS_GETWORDLIST_UTF8 2
//
#define COHEN_SUTHERLAND_INSIDE 0
#define COHEN_SUTHERLAND_LEFT 1
#define COHEN_SUTHERLAND_RIGHT 2
#define COHEN_SUTHERLAND_TOP 4
#define COHEN_SUTHERLAND_BOTTOM 8
//
#define GRAPHICS_TYPE_LINE 0x01
#define GRAPHICS_TYPE_ANTIALISING_LINE 0x02
#define GRAPHICS_TYPE_SOLID_TRIANGLE 0x04
#define GRAPHICS_TYPE_ANTIALISING_TRIANGLE 0x08
#define GRAPHICS_TYPE_GOURAUD_TRIANGLE 0x10
//
#define GRAPHICS_MAX_VALUE 10.0
//
//_____________________________________________________________ IIR
#define ACG_LENGTH 32768
#define ACG_MAX_VAL 22000
#define IIR_MAX_R 0.999
#define IIR_MAX_K0 1.0
//#define IIR_MAX_ANGLE 1.99*M_PI
#define IIR_BITS_PER_VARIABLE 16
#define IIR_VARIABLE_RES 32767
//______________________________________________________________ PDF
#define PDF_PAPER_SIZE_LETTER 0
#define PDF_PAPER_SIZE_LEGAL 1
//
#define PDF_PAGE_ORIENTATION_PORTRAIT 0
#define PDF_PAGE_ORIENTATION_LANDSCAPE 1
//
#define PDF_FIRST_CHAR 32
#define PDF_LAST_CHAR 255
#define PDF_CHAR_COUNT (PDF_LAST_CHAR - PDF_FIRST_CHAR +1)
//
#define PDF_FONT_NONE 0
#define PDF_FONT_ARIAL 1
#define PDF_FONT_COURIER_NEW 2
#define PDF_FONT_TIMES_NEW_ROMAN 3
#define PDF_FONT_SYMBOL 4
//
#define PDF_VALUE_NULL 0
#define PDF_VALUE_DATA 1
#define PDF_VALUE_NAME 2
#define PDF_VALUE_LITERALSTRING 3
#define PDF_VALUE_HEXSTRING 4
#define PDF_VALUE_ARRAY 5
#define PDF_VALUE_REFERENCE 6
#define PDF_VALUE_DICTIONARY 7
//_____________________________________________________________ XML
#define WXML_ERROR 1
#define WXML_OPENING_TAG 2
#define WXML_VALUE 3
#define WXML_CLOSING_TAG 4
#define WXML_COMMENT 5
//_____________________________________________________________ NLP
#define WNLP_SORTTEXT 2
#define WNLP_SORTFREQ 4
#define WNLP_SORTWORD_ID 8
#define WNLP_SORTCATEGORY_ID 16
//
typedef DWORD (WINAPI * HTTP_EXTENSION_PROC)(EXTENSION_CONTROL_BLOCK*);
typedef BOOL (WINAPI * TERMINATE_EXTENSION)(DWORD);
typedef BOOL  (WINAPI * GET_EXTENSION_VERSION)(HSE_VERSION_INFO*);

#include <pshpack1.h> // Property Sheets and Wizards
//
#include <tchar.h>
#include <set>
#include <regex>
#include <iostream>
#include <cmath>
#include <string>  //example: wstring name;
#include <vector>
#include <list>
#include <valarray> //example:valarray<double> x(10);  #undef max     #undef min
#include <algorithm>
#include <complex> //example:complex<double> z(1.0, 3.5);
#include <iterator>
#include <numeric>
#include <deque>
#include<unordered_map>
#include <map>
#include <stack> // for Virtual Machine
#include <random>   //tr1 random for Neural Networks
#include <limits> // std::numeric_limits<double>::max 
//
#include <process.h> // for Multithread:  Project Properties- >C/C++-> Code Generation -> Runtime Library -> Multithread
#include <atlbase.h> //#include <atlstr.h>
#include <io.h>

#include <stdexcept>
//#include <ctime> //For DateAndTime
//#include <ocidl.h> // For SvgReader
//
//#include "htmlhelp.h"  // for help system
//#pragma comment(lib, "htmlhelp.lib")
using namespace std;
#include <sqlucode.h> 
#define WINCOM_MAX_ERROR 512
#define WINSQL_EXCEPT_MAX (2*(SQL_MAX_MESSAGE_LENGTH))
#define SQL_BINDCOL_MAX 256
#define SQL_NAME_MAX 256
#define MT_DEQUE_MAX_SIZE 2048
#define SIMANNEAL_INITIAL_ERROR 1.0e30
#define WT_MATH_CONJGRAD 0
#define WT_MATH_VARMETRIC 1
//
//
#define DATA_GZIP_CHUNK 16384
#define DATA_PARSING_MAX 32
#define DATA_FIRST_CODE 1
#define DATA_LAST_CODE 255
#define DATA_SVG_FILE 1
#define DATA_SVG_RES 2
#define DATA_SVG_NONE 3
#define DATA_HTML_MAX 1024
#define WIN_MULTIPLICATION_SIGN 0x00D7
#define WIN_DIVISION_SIGN 0x00F7
#define WIN_MINUS_SIGN 0x2212
#define WIN_DRAWARROW_NORTH 0
#define WIN_DRAWARROW_EAST 1
#define WIN_DRAWARROW_SOUTH 2
#define WIN_DRAWARROW_WEST 3
#define REMEZ_DENSITY 16
#define REMEZ_TYPE_I_FIR 1
#define REMEZ_TYPE_II_FIR 2
#define REMEZ_TYPE_III_FIR 3
#define REMEZ_TYPE_IV_FIR 4
#define REMEZ_BANDPASS 1
#define REMEZ_HILBERT 2
#define REMEZ_DIFFERENTIATOR 4
//
//________________________________________________ Neural Networks definitions
//________________ Nn namespace
#define NN_NEURAL_LAB_VERSION 4
#define NN_NEURAL_LAB_SUBVERSION 3
#define NN_AF_TABLE_LENGTH 2048
#define NN_AF_TANHLIM 5
#define NN_AF_LIM 0.999999999999
#define NN_LAYERNET_WEIGHTMAX 20.0
#define NN_LAYERNET_TEXTMAX 256
#define NN_LAYERNET_ON 0.9
#define NN_LAYERNET_OFF -0.9
#define NN_LAYERNETC_ON 0.64
#define NN_LAYERNETC_OFF -0.64
#define NN_MIN_VARIANCE 0.0001
#define NN_BITS_PER_WEIGHT 16
#define NN_WEIGHT_RES 32767
#define NN_KOHONET_NORM_MULTIPLICATIVE 1
#define NN_KOHONET_NORM_ZAXIS 2
#define NN_KOHONET_TRAIN_ADDITIVE 1
#define NN_KOHONET_TRAIN_SUBTRACTIVE 2
//
#define MATH_MATRIX_TEXTDOUBLE 32
#define TIME_PREDICTOR_LENGTH 32
#include <limits>
//
#include <shlobj.h>
#include <shlwapi.h>
#pragma comment(lib, "shlwapi.lib")
#include "shellapi.h" // for the tray
//
#define SYS_INSTBUFF 1024
#define SYS_INSTALL_LVINDEX 10000
#define WIN_FILEREADER_SIZE 16384
// Your must include Remove<ProductName>.exe in the package, that is in the final product folder
#define FORMAT _snwprintf_s(sz, SYS_INSTBUFF, _TRUNCATE, L
//
//vector<valarray<double> > x(rows , valarray<double>(cols) );
#define MATRIX vector<valarray<double> >
#define MATRIXC vector<valarray<complex<double> > >

//________________ Cpl namespace (Compiler)
#define LEX_ISI_METHOD 0
#define LEX_ISI_ARGUMENT 1
#define LEX_ISI_METHOD_ARG 2
#define LEX_ISI_LAST_ARGUMENT 3
#define LEX_ISI_ARGUMENT_SEL 4
#define LEX_ISI_LAST_ARGUMENT_SEL 5
//
#define LEX_STRINGMAX 256
#define LEX_ERROR_UNRECOGNIZED_CHAR -1
#define LEX_ERROR_STRING_TOO_LONG -2
#define LEX_ERROR_MISSING_COMMENT_TERMINATOR -3
#define LEX_ERROR_MISSING_STRING_TERMINATOR -4
//___________________________ Binary operators
#define LEX_PLUS 0
#define LEX_MINUS 1
#define LEX_ASTERISK 2
#define LEX_DIVISION 3
#define LEX_EQUAL 4
#define LEX_PERCENT_SIGN 5
//___________________________ Unary operators
#define LEX_MINUS_SIGN 100
#define LEX_PLUS_PLUS 101
#define LEX_MINUS_MINUS 102
//___________________________ Binary expressions
#define LEX_PLUS_EQUAL 200
#define LEX_MINUS_EQUAL 201
#define LEX_PRODUCT_EQUAL 202
#define LEX_DIVISION_EQUAL 203
//_____________________________ Separator
#define LEX_LEFT_PARENTHESIS 300
#define LEX_RIGHT_PARENTHESIS 301
#define LEX_LEFT_BRACKET 302
#define LEX_RIGHT_BRACKET 303
#define LEX_LEFT_CURLY_BRACKET 304
#define LEX_RIGHT_CURLY_BRACKET 305
#define LEX_COMMA 306
#define LEX_DOT 307
#define LEX_SEMICOLON 308
#define LEX_COLON 309
//____________________________ Relation
#define LEX_IS_BIGGER 400
#define LEX_IS_BIGGER_EQ 401
#define LEX_IS_LESS 402
#define LEX_IS_LESS_EQ 403
#define LEX_IS_EQUAL 405
#define LEX_IS_DIFFERENT 406 
//_____________________________ Stream Opertors
#define LEX_INSERTION_OPERATOR 410
#define LEX_EXTRACTION_OPERATOR 411
//____________________________ Boolean operators
#define LEX_OR 500
#define LEX_AND 501
//____________________________ Control
#define LEX_IF 600
#define LEX_ELSE 601
#define LEX_FOR 602
#define LEX_WHILE 603
#define LEX_BREAK 604
#define LEX_CONTINUE 605
#define LEX_DO 606
#define LEX_SWITCH 607
#define LEX_CASE 608
#define LEX_DEFAULT 609
#define LEX_TRY 610
#define LEX_CATCH 611
#define LEX_FINALLY 613
#define LEX_RETURN 614
//_________________________ General
#define LEX_STRUCT 615
#define LEX_NULL 616
#define LEX_THIS 617
#define LEX_CLASS 618
#define LEX_PRIVATE 619
#define LEX_PROTECTED 620
#define LEX_PUBLIC 621
#define LEX_STATIC 622
#define LEX_NAMESPACE 623
#define LEX_NEW 624
#define LEX_DELETE 625
#define LEX_INLINE 626
#define LEX_VIRTUAL 627
#define LEX_USING 628
#define LEX_CONST 629
#define LEX_UNSIGNED 630
#define LEX_TRUE 631
#define LEX_FALSE 632
#define LEX_NUMBER_SIGN 633
#define LEX_AMPERSAND 634
#define LEX_AT 635
#define LEX_APOSTROPHE 636
#define LEX_REVERSE_SOLIDUS 637
#define LEX_TILDE 638
#define LEX_QUESTION_MARK 639
#define LEX_EXCLAMATION_MARK 640
#define LEX_POINTER_ARROW 641
#define LEX_DEFINE 642
#define LEX_INCLUDE 643
#define LEX_PRAGMA 644
#define LEX_IFDEF 645
#define LEX_IFNDEF 646
#define LEX_UNDEF 647
#define LEX_ENDIF 648
#define LEX_DOLLAR_SIGN 649
#define LEX_ASM 650
#define LEX_IMPORTLIB 651
#define LEX_HELPSTRING 652
#define LEX_STDMETHODIMP 653
#define LEX_STDMETHODIMP_ 654
#define LEX_STDMETHOD 655
#define LEX_BEGIN_COM_MAP 656
#define LEX_COM_INTERFACE_ENTRY 657
#define LEX_COM_INTERFACE_ENTRY2 658
#define LEX_END_COM_MAP 659
#define LEX_BROKEN_BAR 660
//_____________________________ Datatype
#define LEX_DATATYPE_BOOL 700
#define LEX_DATATYPE_INTEGER 701
#define LEX_DATATYPE_DOUBLE 702
#define LEX_DATATYPE_VOID 703
#define LEX_DATATYPE_VECTOR 704
#define LEX_DATATYPE_MATRIX 705
#define LEX_DATATYPE_COMPLEX 706
#define LEX_DATATYPE_COMPLEX_VECTOR 707
#define LEX_DATATYPE_COMPLEX_MATRIX 708
#define LEX_DATATYPE_LAYERNET 709
#define LEX_DATATYPE_LAYERNETC 710
#define LEX_DATATYPE_KOHONET 711
#define LEX_DATATYPE_PROBNET 712
#define LEX_DATATYPE_COUNT (LEX_DATATYPE_PROBNET-LEX_DATATYPE_BOOL+1)
#define LEX_DATATYPE_CONTROL 713 // For special use only
#define LEX_DATATYPE_CHAR 714
#define LEX_DATATYPE_WCHAR_T 715
#define LEX_DATATYPE_OBJECT 716
#define LEX_DATATYPE_DWORD 717
#define LEX_DATATYPE_WINDOWS_LONG 718
#define LEX_DATATYPE_COLORREF 719
#define LEX_DATATYPE_STL_VALARRAY 720
#define LEX_DATATYPE_STL_WSTRING 721
#define LEX_DATATYPE_STL_VECTOR 722
#define LEX_DATATYPE_STL_COMPLEX 723
#define LEX_DATATYPE_STL_MAP 724
#define LEX_DATATYPE_REFIID 725
#define LEX_DATATYPE_CLSID 726
#define LEX_DATATYPE_HWND 727
#define LEX_DATATYPE_LRESULT 728
#define LEX_DATATYPE_WINDOWS_BOOL 729
#define LEX_DATATYPE_LOGFONT 730
#define LEX_DATATYPE_VARIANT_T 731
#define LEX_DATATYPE_COCLASS 732
#define LEX_DATATYPE_UUID 733
#define LEX_DATATYPE_UUIDOF 734
#define LEX_DATATYPE_HRESULT 735
#define LEX_DATATYPE_IUNKNOWN 736
#define LEX_DATATYPE_IDISPATCH 737
#define LEX_DATATYPE_ICLASSFACTORY 738
#define LEX_DATATYPE_INTERFACE 739
#define LEX_DATATYPE_SHORT 740
#define LEX_DATATYPE_LONG 741
#define LEX_DATATYPE_ALL 799
//______________________________ Value
//#define LEX_CONST_VALUE_BOOL 801
#define LEX_CONST_VALUE_INTEGER 802
#define LEX_CONST_VALUE_DOUBLE 803
#define LEX_CONST_VALUE_STRING 804
//_____________________________________  FUNCTION SUBTYPE
#define LEX_FUNC_SIN 900
#define LEX_FUNC_COS 901
#define LEX_FUNC_TAN 902
#define LEX_FUNC_ASIN 903
#define LEX_FUNC_ACOS 904
#define LEX_FUNC_ATAN 905
#define LEX_FUNC_SINH 906
#define LEX_FUNC_COSH 907
#define LEX_FUNC_TANH 908
#define LEX_FUNC_SQRT 909
#define LEX_FUNC_LOG10 910
#define LEX_FUNC_LOG 911
#define LEX_FUNC_EXP 912
#define LEX_FUNC_POW 913
#define LEX_FUNC_ABS 914
#define LEX_FUNC_SINC 915
#define LEX_FUNC_TRIANG 916
#define LEX_FUNC_SAW 917
#define LEX_FUNC_RECT 918
#define LEX_FUNC_CEIL 919
#define LEX_FUNC_FLOOR 920
#define LEX_FUNC_TOINT 921
#define LEX_FUNC_FFT 922
#define LEX_FUNC_FFTNORM 923
#define LEX_FUNC_IFFT 924
#define LEX_FUNC_REALFFT 925
#define LEX_FUNC_REALFFTNORM 926
#define LEX_FUNC_IREALFFT 927
#define LEX_FUNC_SPECTRUM 928
#define LEX_FUNC_CONVOLUTION 929
#define LEX_FUNC_SHORT_CONVOLUTION 930
#define LEX_FUNC_COMPUTE_MSE 931
#define LEX_FUNC_MAKE_COMPLEX 932
#define LEX_FUNC_CONFUSION_MATRIX 933
#define LEX_FUNC_COVARIANCE_MATRIX 934
#define LEX_FUNC_CORRELATION_MATRIX 935
#define LEX_FUNC_EIGENSYSTEM 936
#define LEX_FUNC_RAND 937
//____________________________________ Integer functions
#define LEX_FUNC_RANDI 938
#define LEX_FUNC_ISPRIME 939
//#define LEX_FUNC_BESSELJ0 940
//#define LEX_FUNC_BESSELJ1 941
//#define LEX_FUNC_BESSELY0 942
//#define LEX_FUNC_BESSELY1 943
//_____________________________________ ID
#define LEX_ID 1000
#define LEX_HTML_TEXT 1001
#define LEX_END_OF_FILE 1002
//
#define LEX_FUNC_LAYERNET_CREATE 1100
#define LEX_FUNC_LAYERNET_LOAD 1101
#define LEX_FUNC_LAYERNET_SAVE 1102
#define LEX_FUNC_LAYERNET_SET_WEIGHTS 1103
#define LEX_FUNC_LAYERNET_GET_WEIGHTS 1104
#define LEX_FUNC_LAYERNET_GET_INPUT_COUNT 1105
#define LEX_FUNC_LAYERNET_GET_OUTPUT_COUNT 1106
#define LEX_FUNC_LAYERNET_GET_HIDD1_NEU_COUNT 1107
#define LEX_FUNC_LAYERNET_GET_HIDD2_NEU_COUNT 1108
#define LEX_FUNC_LAYERNET_GET_LAYER_COUNT 1109
#define LEX_FUNC_LAYERNET_DELETE 1110
#define LEX_FUNC_LAYERNET_UNLEARN 1111
#define LEX_FUNC_LAYERNET_AUTO_SET_INPUT_SCALER 1112
#define LEX_FUNC_LAYERNET_AUTO_SET_OUTPUT_SCALER 1113
#define LEX_FUNC_LAYERNET_SET_INPUT_SCALER 1114
#define LEX_FUNC_LAYERNET_SET_OUTPUT_SCALER 1115
#define LEX_FUNC_LAYERNET_GET_INPUT_SCALER 1116
#define LEX_FUNC_LAYERNET_GET_OUTPUT_SCALER 1117
#define LEX_FUNC_LAYERNET_SET_TRAINING_SET 1118
#define LEX_FUNC_LAYERNET_TRAIN_GENETIC 1119
#define LEX_FUNC_LAYERNET_TRAIN_SIMULATE_ANNEALING 1120
#define LEX_FUNC_LAYERNET_TRAIN_CONJUGATE_GRADIENT 1121
#define LEX_FUNC_LAYERNET_TRAIN_VARIABLE_METRIC 1122
#define LEX_FUNC_LAYERNET_TRAIN_LEVENBERG_MARQUARDT 1123
#define LEX_FUNC_LAYERNET_TRAIN_REGRESSION 1124
#define LEX_FUNC_LAYERNET_GET_MIN_NUM_TRAIN_CASES 1125
#define LEX_FUNC_LAYERNET_RUN 1126
//
#define LEX_FUNC_LAYERNETC_CREATE 1150
#define LEX_FUNC_LAYERNETC_LOAD 1151
#define LEX_FUNC_LAYERNETC_SAVE 1152
#define LEX_FUNC_LAYERNETC_SET_WEIGHTS 1153
#define LEX_FUNC_LAYERNETC_GET_WEIGHTS 1154
#define LEX_FUNC_LAYERNETC_GET_INPUT_COUNT 1155
#define LEX_FUNC_LAYERNETC_GET_OUTPUT_COUNT 1156
#define LEX_FUNC_LAYERNETC_GET_HIDD1_NEU_COUNT 1157
#define LEX_FUNC_LAYERNETC_DELETE 1158
#define LEX_FUNC_LAYERNETC_UNLEARN 1159
#define LEX_FUNC_LAYERNETC_AUTO_SET_INPUT_SCALER 1160
#define LEX_FUNC_LAYERNETC_AUTO_SET_OUTPUT_SCALER 1161
#define LEX_FUNC_LAYERNETC_SET_INPUT_SCALER 1162
#define LEX_FUNC_LAYERNETC_SET_OUTPUT_SCALER 1163
#define LEX_FUNC_LAYERNETC_GET_INPUT_SCALER 1164
#define LEX_FUNC_LAYERNETC_GET_OUTPUT_SCALER 1165
#define LEX_FUNC_LAYERNETC_SET_TRAINING_SET 1166
#define LEX_FUNC_LAYERNETC_TRAIN_GENETIC 1167
#define LEX_FUNC_LAYERNETC_TRAIN_SIMULATE_ANNEALING 1168
#define LEX_FUNC_LAYERNETC_TRAIN_CONJUGATE_GRADIENT 1169
#define LEX_FUNC_LAYERNETC_TRAIN_VARIABLE_METRIC 1170
//#define LEX_FUNC_LAYERNETC_TRAIN_LEVENBERG_MARQUARDT 1123
#define LEX_FUNC_LAYERNETC_GET_MIN_NUM_TRAIN_CASES 1171
#define LEX_FUNC_LAYERNETC_RUN 1172
//
#define LEX_FUNC_KOHONET_CREATE 1201
#define LEX_FUNC_KOHONET_LOAD 1202
#define LEX_FUNC_KOHONET_SAVE 1203
#define LEX_FUNC_KOHONET_SET_WEIGHTS 1204
#define LEX_FUNC_KOHONET_GET_WEIGHTS 1205
#define LEX_FUNC_KOHONET_GET_INPUT_COUNT 1206
#define LEX_FUNC_KOHONET_GET_OUTPUT_COUNT 1207
#define LEX_FUNC_KOHONET_DELETE 1208
#define LEX_FUNC_KOHONET_UNLEARN 1209
#define LEX_FUNC_KOHONET_AUTO_SET_INPUT_SCALER 1210
#define LEX_FUNC_KOHONET_SET_INPUT_SCALER 1211
#define LEX_FUNC_KOHONET_GET_INPUT_SCALER 1212
#define LEX_FUNC_KOHONET_SET_TRAINING_SET 1213
#define LEX_FUNC_KOHONET_TRAIN_ADDITIVE 1214
#define LEX_FUNC_KOHONET_TRAIN_SUBTRACTIVE 1215
#define LEX_FUNC_KOHONET_COMPUTE_WINNER 1216
#define LEX_FUNC_KOHONET_RUN 1217
//
#define LEX_FUNC_PROBNET_LOAD 1300
#define LEX_FUNC_PROBNET_SAVE 1301
#define LEX_FUNC_PROBNET_TRAIN_CONJUGATE_GRADIENT 1302
#define LEX_FUNC_PROBNET_TRAIN_VARIABLE_METRIC 1303
#define LEX_FUNC_PROBNET_SET_WEIGHTS 1304
#define LEX_FUNC_PROBNET_GET_WEIGHTS 1305
#define LEX_FUNC_PROBNET_GET_INPUT_COUNT 1306
#define LEX_FUNC_PROBNET_GET_OUTPUT_COUNT 1307
#define LEX_FUNC_PROBNET_DELETE 1308
#define LEX_FUNC_PROBNET_RUN 1309
//
#define LEX_FUNC_MATRIX_CREATE 1500
#define LEX_FUNC_MATRIX_CREATE_RANDOM 1501
#define LEX_FUNC_MATRIX_SAVE 1502
#define LEX_FUNC_MATRIX_LOAD 1503
#define LEX_FUNC_MATRIX_APPEND_RIGHT 1504
#define LEX_FUNC_MATRIX_APPEND_DOWN 1505
#define LEX_FUNC_MATRIX_DELETE_ROW 1506
#define LEX_FUNC_MATRIX_DELETE_COL 1507
#define LEX_FUNC_MATRIX_INSERT_ROW 1508
#define LEX_FUNC_MATRIX_INSERT_COL 1509
#define LEX_FUNC_MATRIX_DELETE 1510
#define LEX_FUNC_MATRIX_GET_ROW_COUNT 1511
#define LEX_FUNC_MATRIX_GET_COL_COUNT 1512
#define LEX_FUNC_MATRIX_GET_SUM 1513
#define LEX_FUNC_MATRIX_GET_DIAGONAL_SUM 1514
#define LEX_FUNC_MATRIX_GET_MEAN 1515
#define LEX_FUNC_MATRIX_GET_VARIANCE 1516
#define LEX_FUNC_MATRIX_GET_MINIMUM 1517
#define LEX_FUNC_MATRIX_GET_MAXIMUM 1518
#define LEX_FUNC_MATRIX_GET_MIN_POS 1519
#define LEX_FUNC_MATRIX_GET_MAX_POS 1520
#define LEX_FUNC_MATRIX_GET_SUM_SQUARES 1521
#define LEX_FUNC_MATRIX_GET_ROWS 1522
#define LEX_FUNC_MATRIX_GET_COLS 1523
#define LEX_FUNC_MATRIX_DELETE_ROWS 1524
#define LEX_FUNC_MATRIX_DELETE_COLS 1525
#define LEX_FUNC_MATRIX_GET_CLASS 1526
#define LEX_FUNC_MATRIX_TRANSPOSE 1527
#define LEX_FUNC_MATRIX_PREDICTION 1528
#define LEX_FUNC_MATRIX_NORM_ROWS 1529
#define LEX_FUNC_MATRIX_NORM_COLS 1530
#define LEX_FUNC_MATRIX_ROWS_VAR 1531
#define LEX_FUNC_MATRIX_COLS_VAR 1532
#define LEX_FUNC_MATRIX_ROWS_MEAN 1533
#define LEX_FUNC_MATRIX_COLS_MEAN 1534
#define LEX_FUNC_MATRIX_ROWS_MIN 1535
#define LEX_FUNC_MATRIX_COLS_MIN 1536
#define LEX_FUNC_MATRIX_ROWS_MAX 1537
#define LEX_FUNC_MATRIX_COLS_MAX 1538
#define LEX_FUNC_MATRIX_GET_ROW 1539
#define LEX_FUNC_MATRIX_GET_COL 1540
//
#define LEX_FUNC_VECTOR_CREATE 1600
#define LEX_FUNC_VECTOR_CREATE_SERIES 1601
#define LEX_FUNC_VECTOR_CREATE_RANDOM 1602
#define LEX_FUNC_VECTOR_CREATE_BINARY 1603
#define LEX_FUNC_VECTOR_SAVE 1604
#define LEX_FUNC_VECTOR_LOAD 1605
#define LEX_FUNC_VECTOR_INSERT_CELL 1606
#define LEX_FUNC_VECTOR_DELETE_CELL 1607
#define LEX_FUNC_VECTOR_DELETE 1608
#define LEX_FUNC_VECTOR_GET_SIZE 1609
#define LEX_FUNC_VECTOR_GET_SUM 1610
#define LEX_FUNC_VECTOR_GET_MEAN 1611
#define LEX_FUNC_VECTOR_GET_VARIANCE 1612
#define LEX_FUNC_VECTOR_GET_MINIMUM 1613
#define LEX_FUNC_VECTOR_GET_MAXIMUM 1614
#define LEX_FUNC_VECTOR_GET_MIN_POS 1615
#define LEX_FUNC_VECTOR_GET_MAX_POS 1616
#define LEX_FUNC_VECTOR_GET_SQUARED_SUM 1617
#define LEX_FUNC_VECTOR_CREATE_LOW_PASS_IMP_RESP 1618
#define LEX_FUNC_VECTOR_CREATE_LOW_PASS_FREQ_RESP 1619
#define LEX_FUNC_VECTOR_CREATE_HIGH_PASS_IMP_RESP 1620
#define LEX_FUNC_VECTOR_CREATE_HIGH_PASS_FREQ_RESP 1621
#define LEX_FUNC_VECTOR_CREATE_KAISER 1622
#define LEX_FUNC_VECTOR_CREATE_RANDOM_SET 1623
#define LEX_FUNC_VECTOR_WRAP 1624
#define LEX_FUNC_VECTOR_LINE_FIT 1625
//_____________________________ SQL DATATYPE
#define LEX_SQLTYPE_BIT 1700
//
#define LEX_SQLTYPE_INTEGER 1701
#define LEX_SQLTYPE_SMALLINT 1702
#define LEX_SQLTYPE_BIGINT 1703
#define LEX_SQLTYPE_TINYINT 1704
#define LEX_SQLTYPE_INT 1705
//
#define LEX_SQLTYPE_DOUBLE 1706
#define LEX_SQLTYPE_DECIMAL 1707
#define LEX_SQLTYPE_REAL 1708
#define LEX_SQLTYPE_NUMERIC 1709
#define LEX_SQLTYPE_MONEY 1710
#define LEX_SQLTYPE_SMALLMONEY 1711
//
#define LEX_SQLTYPE_VARCHAR2 1712
#define LEX_SQLTYPE_VARCHAR 1713
#define LEX_SQLTYPE_CHAR 1714
#define LEX_SQLTYPE_TEXT 1715
#define LEX_SQLTYPE_NVARCHAR 1716
#define LEX_SQLTYPE_NCHAR 1717
#define LEX_SQLTYPE_NTEXT 1718
//
#define LEX_SQLTYPE_DATETIME 1719
#define LEX_SQLTYPE_DATETIME2 1720
#define LEX_SQLTYPE_SMALLDATETIME 1721
#define LEX_SQLTYPE_DATE 1722
#define LEX_SQLTYPE_TIME 1723
#define LEX_SQLTYPE_TIMESTAMP 1724
//_____________________________ SQL MAIN
#define LEX_SQL_CREATE 1800
#define LEX_SQL_INSERT 1801
#define LEX_SQL_UPDATE 1802
#define LEX_SQL_SELECT 1803
#define LEX_SQL_DELETE 1804
#define LEX_SQL_DROP 1805
#define LEX_SQL_GRANT 1806
#define LEX_SQL_REVOKE 1807
#define LEX_SQL_ROLLBACK 1808
#define LEX_SQL_SAVEPOINT 1809
#define LEX_SQL_USE 1810
#define LEX_SQL_ALTER 1811
//_____________________________ SQL OBJECTS
#define LEX_SQL_TABLE 1900
#define LEX_SQL_VIEW 1901
#define LEX_SQL_TRIGGER 1902
#define LEX_SQL_INDEX 1903
#define LEX_SQL_PROCEDURE 1904
#define LEX_SQL_DATABASE 1905
#define LEX_SQL_CURSOR 1906
//_____________________________ SQL KEYWORDS
#define LEX_SQL_WHERE 2000
#define LEX_SQL_FROM 2001
#define LEX_SQL_AS 2002
#define LEX_SQL_GROUP 2003
#define LEX_SQL_ORDER 2004
#define LEX_SQL_CONSTRAINT 2005
#define LEX_SQL_IDENTITY 2006
#define LEX_SQL_AUTO_INCREMENT 2007
#define LEX_SQL_INNER 2008
#define LEX_SQL_JOIN 2009
#define LEX_SQL_ON 2010
#define LEX_SQL_UNIQUE 2011
#define LEX_SQL_BY 2012
#define LEX_SQL_HAVING 2013
#define LEX_SQL_UNION 2014
#define LEX_SQL_INTERSECT 2015
#define LEX_SQL_INTO 2016
#define LEX_SQL_VALUES 2017
#define LEX_SQL_REPLACE 2018
#define LEX_SQL_PRIMARY 2019
#define LEX_SQL_FOREIGN 2020
#define LEX_SQL_KEY 2021
#define LEX_SQL_REFERENCES 2022
#define LEX_SQL_CASCADE 2023
#define LEX_SQL_AND 2024
#define LEX_SQL_OR 2025
#define LEX_SQL_NOT 2026
#define LEX_SQL_BEGIN 2027
#define LEX_SQL_END 2028
#define LEX_SQL_DISTINCT 2029
#define LEX_SQL_LIKE 2030
#define LEX_SQL_CHECK 2031
#define LEX_SQL_READ 2032
#define LEX_SQL_ONLY 2033
#define LEX_SQL_READ_ONLY 2034
#define LEX_SQL_OPTION 2035
#define LEX_SQL_TRANSACTION 2036
#define LEX_SQL_COMMIT 2037
#define LEX_SQL_SET 2038
#define LEX_SQL_IF 2039
#define LEX_SQL_WITH 2040
#define LEX_SQL_RAISERROR 2041
#define LEX_SQL_GO 2042
#define LEX_SQL_DECLARE 2043
#define LEX_SQL_FOR 2044
#define LEX_SQL_OPEN 2045
#define LEX_SQL_CLOSE 2046
#define LEX_SQL_WHILE 2047
#define LEX_SQL_NEXT 2048
#define LEX_SQL_FETCH 2049
#define LEX_SQL_DEALLOCATE 2050
#define LEX_SQL_RETURN 2051
#define LEX_SQL_CASE 2052
#define LEX_SQL_FETCH_STATUS 2053
#define LEX_SQL_EXISTS 2054
#define LEX_SQL_DBO 2055
#define LEX_SQL_DEFAULT 2056
#define LEX_SQL_NULL 2057
//_____________________________ SQL FUNCTIONS
#define LEX_SQL_ABS 2100
#define LEX_SQL_MOD 2101
#define LEX_SQL_TRUNCATE 2102
#define LEX_SQL_POWER 2103
#define LEX_SQL_ROUND 2104
#define LEX_SQL_AVG 2105
#define LEX_SQL_MIN 2106
#define LEX_SQL_MAX 2107
#define LEX_SQL_SUM 2108
#define LEX_SQL_NVL 2109
#define LEX_SQL_TO_NUMBER 2110
#define LEX_SQL_TO_CHAR 2111
#define LEX_SQL_TO_DATE 2112
#define LEX_SQL_DATEFORMAT 2113
#define LEX_SQL_DATEPART 2114
#define LEX_SQL_DATEDIFF 2115
#define LEX_SQL_ISDATE 2116
#define LEX_SQL_CONVERT 2117
#define LEX_SQL_CAST 2118
#define LEX_SQL_GETDATE 2119
#define LEX_SQL_DB_NAME 2120
//____________________________________ HTML tags
#define LEX_HTML_HTML 2400
#define LEX_HTML_BODY 2401
#define LEX_HTML_HEAD 2402
#define LEX_HTML_TITLE 2403
#define LEX_HTML_META 2404
#define LEX_HTML_STYLE 2405
#define LEX_HTML_A 2406
#define LEX_HTML_SPAN 2407
#define LEX_HTML_P 2408
#define LEX_HTML_DIV 2409
#define LEX_HTML_TABLE 2410
#define LEX_HTML_TR 2411
#define LEX_HTML_TD 2412
#define LEX_HTML_OL 2413
#define LEX_HTML_UL 2414
#define LEX_HTML_LI 2415
#define LEX_HTML_IMG 2416
#define LEX_HTML_SELECT 2417
#define LEX_HTML_TEXTAREA 2418
#define LEX_HTML_B 2419
#define LEX_HTML_I 2420
#define LEX_HTML_U 2421
#define LEX_HTML_FORM 2422
#define LEX_HTML_HR 2423
#define LEX_HTML_BR 2424
#define LEX_HTML_H1 2425
#define LEX_HTML_H2 2426
#define LEX_HTML_H3 2427
#define LEX_HTML_H4 2428
#define LEX_HTML_H5 2429
#define LEX_HTML_H6 2430
#define LEX_HTML_SCRIPT 2431
#define LEX_HTML_INPUT 2432
//___________________________________ HTML tag properties
#define LEX_HTML_HREF 2500
#define LEX_HTML_TARGET 2501
#define LEX_HTML_CLASS 2502
#define LEX_HTML_TYPE 2503
#define LEX_HTML_NAME 2504
#define LEX_HTML_SRC 2505
#define LEX_HTML_ALT 2506
#define LEX_HTML_METHOD 2507
#define LEX_HTML_ID 2508
#define LEX_HTML_WIDTH 2509
#define LEX_HTML_HEIGHT 2510
#define LEX_HTML_ALIGN 2511
#define LEX_HTML_VALIGN 2512
#define LEX_HTML_BORDER 2513
#define LEX_HTML_CELLPADDING 2514
#define LEX_HTML_CELLSPACING 2515
//___________________________________ HTML javascript events
#define LEX_HTML_ONKEYDOWN 2600
#define LEX_HTML_ONKEYPRESS 2601
#define LEX_HTML_ONKEYUP 2602
#define LEX_HTML_ONCLICK 2603
#define LEX_HTML_ONDBLCLICK 2604
#define LEX_HTML_ONDRAG 2605
#define LEX_HTML_ONDRAGEND 2606
#define LEX_HTML_ONDRAGENTER 2607
#define LEX_HTML_ONDRAGLEAVE 2608
#define LEX_HTML_ONDRAGOVER 2609
#define LEX_HTML_ONDRAGSTART 2610
#define LEX_HTML_ONDROP 2611
#define LEX_HTML_ONERROR 2612
#define LEX_HTML_ONLOAD 2613
#define LEX_HTML_ONMOUSEDOWN 2614
#define LEX_HTML_ONMOUSEMOVE 2615
#define LEX_HTML_ONMOUSEOUT 2616
#define LEX_HTML_ONMOUSEOVER 2617
#define LEX_HTML_ONMOUSEUP 2618
#define LEX_HTML_ONMOUSEWHEEL 2619
#define LEX_HTML_ONSCROLL 2620
#define LEX_HTML_ONBLUR 2621
#define LEX_HTML_ONCHANGE 2622
#define LEX_HTML_ONCONTEXTMENU 2623
#define LEX_HTML_ONFOCUS 2624
#define LEX_HTML_ONINPUT 2625
#define LEX_HTML_ONINVALID 2626
#define LEX_HTML_ONSELECT 2627
//
#define LEX_HTML_EVENT_FIRST LEX_HTML_ONKEYDOWN
#define LEX_HTML_EVENT_LAST LEX_HTML_ONSELECT
#define LEX_HTML_EVENT_COUNT (LEX_HTML_EVENT_LAST - LEX_HTML_EVENT_FIRST +1)
//___________________________________ HTML Page javascript events
//#define LEX_HTML_ONAFTERPRINT 2700
//#define LEX_HTML_BEFOREPRINT 2701
//#define LEX_HTML_BEFOREUNLOAD 2702
//#define LEX_HTML_ERROR 2703
//#define LEX_HTML_HASCHANGE 2704
//#define LEX_HTML_LOAD 2705
//#define LEX_HTML_MESSAGE 2706
//#define LEX_HTML_OFFLINE 2707
//#define LEX_HTML_ONLINE 2708
//#define LEX_HTML_PAGEHIDE 2709
//#define LEX_HTML_PAGESHOW 2710
//#define LEX_HTML_POPSTATE 2711
//#define LEX_HTML_REDO 2712
//#define LEX_HTML_RESIZE 2713
//#define LEX_HTML_STORAGE 2714
//#define LEX_HTML_UNDO 2715
//#define LEX_HTML_UNLOAD 2716
//#define LEX_HTML_FORMCHANGE 2717
//#define LEX_HTML_FORMINPUT 2718
//#define LEX_HTML_SUBMIT 2719
//#define LEX_HTML_RESET 2720
////
//#define LEX_HTML_PAGE_EVENT_FIRST LEX_HTML_ONAFTERPRINT
//#define LEX_HTML_PAGE_EVENT_LAST LEX_HTML_RESET
//#define LEX_HTML_PAGE_EVENT_COUNT (LEX_HTML_PAGE_EVENT_LAST - LEX_HTML_PAGE_EVENT_FIRST +1)
//___________________________________ HTML Media javascript events
#define LEX_HTML_ONABORT 2800
#define LEX_HTML_ONCANPLAY 2801
#define LEX_HTML_ONCANPLAYTHROUGH 2802
#define LEX_HTML_ONDURATIONCHANGE 2803
#define LEX_HTML_ONEMPTIED 2804
#define LEX_HTML_ONENDED 2805
#define LEX_HTML_ONERROR_MEDIA 2806
#define LEX_HTML_ONLOADEDDATA 2807
#define LEX_HTML_ONLOADEDMETADATA 2808
#define LEX_HTML_ONLOADSTART 2809
#define LEX_HTML_ONPAUSE 2810
#define LEX_HTML_ONPLAY 2811
#define LEX_HTML_ONPLAYING 2812
#define LEX_HTML_ONPROGRESS 2813
#define LEX_HTML_ONRATECHANGE 2814
#define LEX_HTML_ONREADYSTATECHANGE 2815
#define LEX_HTML_ONSEEKED 2816
#define LEX_HTML_ONSEEKING 2817
#define LEX_HTML_ONSTALLED 2818
#define LEX_HTML_ONSUSPEND 2819
#define LEX_HTML_ONTIMEUPDATE 2820
#define LEX_HTML_ONVOLUMECHANGE 2821
#define LEX_HTML_ONWAITING 2822
//
#define LEX_HTML_MEDIA_EVENT_FIRST LEX_HTML_ONABORT
#define LEX_HTML_MEDIA_EVENT_LAST LEX_HTML_ONWAITING
#define LEX_HTML_MEDIA_EVENT_COUNT (LEX_HTML_MEDIA_EVENT_LAST - LEX_HTML_MEDIA_EVENT_FIRST +1)
//________________________________________________ HTML SPECIAL
#define LEX_TAG_CLOSING 2900
#define LEX_MONO_TAG_CLOSING 2901
#define LEX_HTML_SPECIAL_SYMBOL 2902
//________________________________________________ PDF
#define LEX_PDF_NAME 3000
#define LEX_PDF_DATA 3001
//
#define LEX_PDF_OBJ 3002
#define LEX_PDF_ENDOBJ 3003
#define LEX_PDF_STREAM 3004
#define LEX_PDF_ENDSTREAM 3005
#define LEX_PDF_XREF 3006
#define LEX_PDF_TRAILER 3007
#define LEX_PDF_STARTXREF 3008
#define LEX_PDF_BSLASH_BSLASH 3009
#define LEX_PDF_BSLASH_LPARENTHESIS 3010
#define LEX_PDF_BSLASH_RPARENTHESIS 3011
#define LEX_PDF_BSLASH_LBRACKET 3012
#define LEX_PDF_BSLASH_RBRACKET 3013
#define LEX_PDF_BSLASH_LESS 3014
#define LEX_PDF_BSLASH_BIGGER 3015
#define LEX_PDF_BSLASH_DIAGONAL 3016
//_______________________ Virtual Machine
#define VM_ERROR 10000 
#define VM_CREATE 10001 
#define VM_VALUE 10002
#define VM_REFVALUE 10003
#define VM_SETVALUE 10004
#define VM_SET_VECTORCELL 10005
#define VM_SET_MATRIXCELL 10006
//#define VM_SETREF_VECTORCELL 10007
//#define VM_SETREF_MATRIXCELL 10008
#define VM_VECTOR_CELL 10009
#define VM_MATRIX_CELL 10010
#define VM_OPER 10011
#define VM_OPER_MONO 10012
#define VM_OPER_BINA 10013
#define VM_FUNC 10014
#define VM_OBJFUNC 10015
#define VM_GOTO 10016
#define VM_GOFALSE 10017
#define VM_GOTRUE 10018
#define VM_GUITYPE_LISTVIEW 11000
#define VM_GUITYPE_DROPDOWN 11001
//___________________
#define STERRORMAX 256
//_______________________ Error description
#define ERROR_SYNTAX 1
#define ERROR_VARIABLE_ALREADY_DEFINED 2
#define ERROR_VARIABLE_NOEXISTS 3
#define ERROR_INVALID_OBJECT_FUNC 4
#define ERROR_VARIABLE_UNINIT 5
#define ERROR_INVALID_PARAM 6
#define ERROR_MISSING_TOKEN 7
#define ERROR_INCOMPLETE_COMMAND 8
#define ERROR_MISSING_VARIABLE 9
#define ERROR_LEX 10
#define ERROR_INVALID_VALUE -1

//________________ for com support
#include <comdef.h> 
#include <comdefsp.h>
#include <exdisp.h>


//___________________________________________________________________ Unknown
#define IUNKNOWN_BEGIN(x) private: Com::LifeCycle cycle; public: \
	STDMETHOD_(ULONG, AddRef) () { return cycle.Inc(); } \
	STDMETHOD_(ULONG, Release) () { const int n = cycle.Dec(); if (n == 0) delete this; return n; } \
	STDMETHOD(QueryInterface) (REFIID iid, void**ppvObject){ *ppvObject = NULL; \
		if (iid == IID_IUnknown) *ppvObject = (IUnknown*)(x*)this;

#define QUERY_INTERFACE(x, y) else if (iid == x) *ppvObject = (y*)this;
#define IUNKNOWN_END if (*ppvObject != NULL){AddRef();return S_OK;}return E_NOINTERFACE;}

//___________________________________________________________________ Create Object with ClassFactory Template
#define FACTORY_CREATE(x) Com::ClassFactory<x>* p = new Com::ClassFactory<x>; \
if (p == NULL) return E_OUTOFMEMORY; \
if (FAILED(p->QueryInterface(riid, ppv))) delete p;

//___________________________________________________________________ IDistpatch Implementation
#define IDISPATCH_IMPL(libid, iid, version, subversion) Com::DispInfo dispInfo; \
	void Initialize() { dispInfo.isInitialized = true; ITypeLib * typeLib = NULL; \
	dispInfo.hr = LoadRegTypeLib(libid, version, subversion, LANG_NEUTRAL, &typeLib); \
	if (SUCCEEDED(dispInfo.hr)) {dispInfo.hr = typeLib->GetTypeInfoOfGuid(iid, &dispInfo.typeInfo); \
	typeLib->Release(); } } \
	STDMETHODIMP GetTypeInfoCount(UINT *pctinfo){ if (dispInfo.isInitialized == false) Initialize(); \
	*pctinfo = 1; return S_OK; }\
	STDMETHODIMP GetTypeInfo(UINT iTInfo, LCID lcid, ITypeInfo **ppTInfo) \
	{ if (dispInfo.isInitialized == false) Initialize(); const HRESULT hr = dispInfo.hr; \
	if (FAILED(hr)) return hr; *ppTInfo = dispInfo.typeInfo; dispInfo.typeInfo->AddRef(); return S_OK; }\
	STDMETHODIMP GetIDsOfNames(REFIID riid, LPOLESTR *rgszNames, UINT cNames, LCID lcid, DISPID *rgDispId) \
	{ if (dispInfo.isInitialized == false) Initialize();  return DispGetIDsOfNames(dispInfo.typeInfo, rgszNames, cNames, rgDispId); }\
	STDMETHODIMP  Invoke(DISPID dispIdMember, REFIID riid, LCID lcid, WORD wFlags, DISPPARAMS *pDispParams, VARIANT *pVarResult, EXCEPINFO *pExcepInfo, UINT *puArgErr) \
	{ if (dispInfo.isInitialized == false) Initialize();\
	return DispInvoke(this, dispInfo.typeInfo, dispIdMember, wFlags, pDispParams, pVarResult, pExcepInfo, puArgErr);}
//____________________________________________________________________________________ COM INTERFACES
_COM_SMARTPTR_TYPEDEF(IUnknown, __uuidof(IUnknown));
_COM_SMARTPTR_TYPEDEF(IOleObject, __uuidof(IOleObject));
_COM_SMARTPTR_TYPEDEF(IOleControl, __uuidof(IOleControl));
_COM_SMARTPTR_TYPEDEF(IOleInPlaceObject, __uuidof(IOleInPlaceObject));
_COM_SMARTPTR_TYPEDEF(IOleInPlaceObjectWindowless, __uuidof(IOleInPlaceObjectWindowless));
_COM_SMARTPTR_TYPEDEF(IViewObject, __uuidof(IViewObject));
_COM_SMARTPTR_TYPEDEF(IViewObject2, __uuidof(IViewObject2));
_COM_SMARTPTR_TYPEDEF(IViewObjectEx, __uuidof(IViewObjectEx));
_COM_SMARTPTR_TYPEDEF(IAdviseSink, __uuidof(IAdviseSink));
_COM_SMARTPTR_TYPEDEF(IDataObject, __uuidof(IDataObject));
_COM_SMARTPTR_TYPEDEF(IWebBrowser2, __uuidof(IWebBrowser2));
_COM_SMARTPTR_TYPEDEF(IBindCtx, __uuidof(IBindCtx));
_COM_SMARTPTR_TYPEDEF(IPersistStreamInit, __uuidof(IPersistStreamInit)); 
_COM_SMARTPTR_TYPEDEF(IPersistPropertyBag, __uuidof(IPersistPropertyBag));
_COM_SMARTPTR_TYPEDEF(IPersistPropertyBag2, __uuidof(IPersistPropertyBag2));
//_COM_SMARTPTR_TYPEDEF(IShellDispatch, __uuidof(IShellDispatch));
_COM_SMARTPTR_TYPEDEF(Folder, IID_Folder);
//_COM_SMARTPTR_TYPEDEF(FolderItems, IID_FolderItems);

#define MAX_PENDING_IO_REQS 4  
// Microsoft Common Object Model
//_____________________________________________________________________ Com::Ini
namespace Com 
{

//_____________________________________________________________________ Base
// It has a set of functions to implement a COM server
class Base
{
private:
	Base();
	~Base();
public:
	static DWORD Begin(HINSTANCE hInstance, ULONG reason);
	static void IncreaseObjectCount();
	static void DecreaseObjectCount();
	static void IncreaseLockCount();
	static void DecreaseLockCount();
	static bool CanUnloadNow();
	//
	// clsidString = L"{808FAFE1-1B3C-4013-B0BC-2B02AB788807}"
	// companyName = L"MyCompany"
	// version = 1
	static HRESULT RegisterComClass(HINSTANCE hInstance, const wchar_t* libidString, const wchar_t* clsidString, const wchar_t* companyName, const wchar_t* className, int version);
	static HRESULT RegisterComClass(const wchar_t* libidString, const wchar_t* clsidString, const wchar_t* companyName, const wchar_t* className, int version);
	//
	static HRESULT RegisterComClass(HINSTANCE hInstance, REFIID libid, REFCLSID clsid, const wchar_t* companyName, const wchar_t* className, int version);
	static HRESULT RegisterComClass(REFIID libid, REFCLSID clsid, const wchar_t* companyName, const wchar_t* className, int version);
	//
	static HRESULT UnRegisterComClass(const wchar_t* libidString, const wchar_t* clsidString);
	static HRESULT UnRegisterComClass(REFIID libid, REFCLSID clsid);
	//
	static HRESULT RegisterTypeLib(HINSTANCE hInstance, const wchar_t* libidString, int version, int subversion);
	static HRESULT RegisterTypeLib(const wchar_t* libidString, int version, int subversion);
	//
	static HRESULT RegisterTypeLib(HINSTANCE hInstance, REFIID libid, int version, int subversion);
	static HRESULT RegisterTypeLib(REFIID libid, int version, int subversion);
	//
	static HRESULT UnRegisterTypeLib(const wchar_t* libidString, int version, int subversion);
	static HRESULT UnRegisterTypeLib(REFIID libid, int version, int subversion);
private:
	static HINSTANCE hInstance;
	static int lockCount;
	static int objectCount;
};

//_____________________________________________________________________ DispInfo
class DispInfo
{
public:
	DispInfo();
	~DispInfo();
	HRESULT hr;
	ITypeInfo* typeInfo;
	bool isInitialized;
};

//_____________________________________________________________________ LifeCycle
// It provides support to implement IUnknown
class LifeCycle
{
public:
	LifeCycle();
	~LifeCycle();
	int Inc();
	int Dec();
private:
	int refCount;
};	

//___________________________________________________________________ ClassFactory
template <class MyClass>
// It implements IClassFactory
class ClassFactory : public IClassFactory
{
public:
	ClassFactory()
	{
		refCount = 0;
		Com::Base::IncreaseObjectCount();
	}
	~ClassFactory(void)
	{
		Com::Base::DecreaseObjectCount();
	}
	//______________________________________________ IUnknown
	STDMETHOD_(ULONG, AddRef) ()
	{
		refCount++;
		return refCount;
	}
	STDMETHOD_(ULONG, Release) ()
	{
		refCount--;
		if (refCount == 0) delete this;
		return refCount;
	}
	STDMETHOD (QueryInterface) (REFIID iid, void**ppvObject)
	{
		*ppvObject = NULL;
		if (iid == IID_IUnknown)
		{
			*ppvObject = (IUnknown*)this;
		}
		else if (iid == IID_IClassFactory)
		{
			*ppvObject = (IClassFactory*)this;
		}
		if (*ppvObject != NULL)
		{
			AddRef();
			return S_OK;
		}
		return E_NOINTERFACE;
	}
	//_________________________________________ IClassFactory
	STDMETHODIMP LockServer(BOOL fLock)
	{
		if (fLock)
		{
			Com::Base::IncreaseLockCount();
		}
		else
		{
			Com::Base::DecreaseLockCount();
		}
		return S_OK;
	}
	STDMETHODIMP CreateInstance(LPUNKNOWN pUnkOuter, REFIID riid, void** ppv)
	{
		if (pUnkOuter != NULL) return CLASS_E_NOAGGREGATION;
		MyClass* newObject = new MyClass;
		if (newObject == NULL) return E_OUTOFMEMORY;
		HRESULT hr = newObject->QueryInterface(riid, ppv);
		if (FAILED(hr)) delete newObject;
		return hr;
	}
private:
	int refCount;
};

//___________________________________________________________________ Param
class Param
{
public:
	Param();
	Param(int count);
	bool Create(int count);
	void SetMissing(int index);
	~Param();
	_variant_t& operator[](long index);
	const _variant_t& operator[](long index) const;
	//
	void PrepareInvoke(int dispatch_type);
	//
	DISPPARAMS dispparam;
	int GetRequiredParamCount(); 
private:
	void Constructor();
	_variant_t * variantx;
	DISPID dispid[1];
};

//___________________________________________________________________ Array
//To complete this class see the file Wintempla/Com/MS Excel/SAFEARRAY.cpp
//class Array : public _variant_t
//{
//public:
//	Array();
//	Array(int rows);
//	Array(int rows, int cols);
//	~Array();
//	//
//	long GetRowCount() throw();
//	long GetColCount() throw();
//	HRESULT Create(int count);
//	HRESULT Create(int rows, int cols);
//	void Destroy();
//private:
//	void Constructor();
//	SAFEARRAYBOUND bound[5];
//};

//___________________________________________________________________ ClassInfo
class ClassInfo
{
public:
	ClassInfo();
	~ClassInfo();
	TYPEKIND typeKind;
	CLSID clsid;
	bool isDefault;
	void Clear();
};

//___________________________________________________________________ Enum
class Enum
{
public:
	Enum();
	~Enum();
	wstring name;
	_variant_t value;
	void Clear();
};

//class TypeInfoData;
//___________________________________________________________________ FuncParam
class FuncParam
{
public:
	FuncParam();
	~FuncParam();
	void Clear();
	wstring name;
	VARTYPE datatype; //VT_VOID, VT_EMPTY, VT_NULL, ...
	//
	// These three variables are used only for links that make reference to other object: VT_USERDEFINED and/or typeKind = TKIND_COCLASS
	IID iidLink;
	TYPEKIND typeKindLink;
	wstring descrLink;
	bool isValid;
	//
	static bool AreCompatible(Com::FuncParam& param1, Com::FuncParam& param2);
};

//___________________________________________________________________ FuncInfo
class FuncInfo
{
public:
	FuncInfo();
	~FuncInfo();
	//bool AreParametersValid();
	wstring name;
	int dispatch_type; // DISPATCH_METHOD, DISPATCH_PROPERTYGET, DISPATCH_PROPERTYPUT, DISPATCH_PROPERTYPUTREF
	vector<Com::FuncParam> param;
	int numOptionalParameters; // The last parameter may be optional;
	Com::FuncParam returnType;
	int callConv; // CC_FASTCALL	, CC_CDECL, CC_MSCPASCAL, CC_PASCAL, CC_MACPASCAL	, CC_STDCALL...
	MEMBERID memid;
	wstring helpString;
	bool isNameValidForProperty;
	bool HasProperty(list<Com::FuncInfo>& fi);
	void Clear();
	static wchar_t* GetFuncCallConvText(int callConv);
	static wchar_t* GetParamTypeText(WORD vt, bool cppTypes);
	static wchar_t* GetParamTypeText(WORD vt);
	static void GetParamTypeText(bool isReturn, const wchar_t* nameSpace, bool earlyBinding, bool isIDispatch, Com::FuncParam& param, wstring& output);
	static wchar_t* GetVariantText(WORD vt);
	static wchar_t* GetVariantVT(WORD vt);
	static bool IsIUnknownFunction(const wchar_t* functionName);
	static bool IsIDispatchFunction(const wchar_t* functionName);
	static wchar_t* GetFuncTypeText(int dispatch_type);
	wchar_t* GetFuncTypeText();
	void RenderFuncDeclaration(const wchar_t* nameSpace, bool earlyBinding, bool isIDispatch, bool includeAllParameters, wstring& output);
	void RenderFuncDefinition(const wchar_t* nameSpace, bool earlyBinding, bool isIDispatch, const wchar_t* className, bool includeAllParameters, wstring& output);
	void RenderProperty(const wchar_t* nameSpace, bool earlyBinding, bool isIDispatch, list<Com::FuncInfo>& fi, wstring& output);
	void RenderParameter(int paramIndex, wstring& output);
	void RenderReturnedValue(const wstring& returnParamText, wstring& output);
	bool IsDataTypeObject(Com::FuncParam& param);
	bool IsEnumUserDefined(Com::FuncParam& param);
	bool IsReturnedValueBool();
	bool RequiresConversion(int datatype);
	bool HasPutProperty(list<Com::FuncInfo>& fi);
	bool HasGetProperty(list<Com::FuncInfo>& fi);
	bool ExludeFunction(bool includeAllParameters);
	bool operator<(const FuncInfo& fi);
};

//___________________________________________________________________ TypeInfoData
// It stores data for the ITypeInfo interface
class TypeInfoData
{
public:
	TypeInfoData();
	~TypeInfoData();
	wstring name;
	TYPEKIND kind;
	IID iid;
	list<Com::Enum> enumList; // TKIND_ENUM
	list<Com::FuncInfo> funcList; //TKIND_DISPATCH
	list<Com::ClassInfo> classList; // TKIND_COCLASS

	void Clear();
};

//__________________________________________________________________ TypeLibData
// It stores data for the ITypeLib interface
class TypeLibData
{
public:
	TypeLibData();
	~TypeLibData();
	vector<Com::TypeInfoData> tid;
	wstring name;
	wstring description;
	wstring helpFile;
	wstring progID;
	void Clear();
	bool IsNameValid(const wstring& name);
};

//___________________________________________________________________ FuncBasicInfo
struct FuncBasicInfo
{
	int dispatch_type; // DISPATCH_PROPERTYGET, INVOKE_PROPERTYPUT, INVOKE_PROPERTYPUTREF, INVOKE_FUNC
	vector<VARTYPE> paramType;
	VARTYPE returnType; //VT_VOID, VT_EMPTY, VT_NULL, ...
	MEMBERID memid;
	int numOptionalParameters;
};

//___________________________________________________________________ InvokeInfo
struct InvokeInfo
{
	wstring name;
	int dispatch_type; // DISPATCH_METHOD, DISPATCH_PROPERTYGET, DISPATCH_PROPERTYPUT, DISPATCH_PROPERTYPUTREF
	bool operator<(const InvokeInfo& init) const
	{
		if (name == init.name)
		{
			return (dispatch_type < init.dispatch_type);
		}
		return (name < init.name);
	}
	bool operator==(const InvokeInfo& init) const
	{
		return (name == init.name && dispatch_type == init.dispatch_type);
	}
};

//_______________________________________________________________ Boot
// It automatically calls CoInitialize(NULL) and CoUninitialize()
class Boot
{
public:
	Boot()
	{
		::CoInitialize(NULL);
	}
	~Boot()
	{
		::CoUninitialize();
	}
};

//_______________________________________________________________ ProgInfo
// Represents a registry key: HKEY_CLASSES_ROOT\CLSID
class ProgInfo
{
public:
	ProgInfo();
	~ProgInfo();
	wstring clsid;
	wstring descr;
	wstring ProgID;
	wstring VersionIndependentProgID;
	bool operator<(const ProgInfo& input) const;
	//
	// Converts the clsid string to CLSID
	bool GetClsid(CLSID& output); 
};

//_______________________________________________________________ Assistant
// It provides helper functions for COM
class Assistant
{
public:
	// Given a ProgID it creates a list of the interfaces, and enums in the library
	// Each interface has a list of functions (Each function has a vector of parameters)
	// Each enum has a list of values
	static HRESULT ReadTypeLibFromProgID(const wchar_t* progID, Com::TypeLibData& out_data);
	//
	// Given a tlb, old, or dll file it creates a list of the interfaces, and enums in the library
	// Each interface has a list of functions (Each function has a vector of parameters)
	// Each enum has a list of values
	static HRESULT ReadTypeLibFromFile(const wchar_t* filename, Com::TypeLibData& out_data);
	//
	// Given a ITypeLib interface it creates a list of the interfaces, and enums in the library
	// Each interface has a list of functions (Each function has a vector of parameters)
	// Each enum has a list of values
	static HRESULT GetTypeLibData(ITypeLibPtr typeLib, Com::TypeLibData& out_data);
	//
	// Fills the tid.iid and tid.enumList
	static HRESULT ReadEnum(ITypeInfoPtr typeInfo, Com::TypeInfoData& tid);
	//
	// Fills the tid.iid and tid.funcList
	static HRESULT ReadDispatch(ITypeInfoPtr typeInfo, Com::TypeInfoData& tid);
	//
	// Fills the tid.iid
	static HRESULT ReadRecord(ITypeInfoPtr typeInfo, Com::TypeInfoData& tid);
	//
	// Fills the tid.iid
	static HRESULT ReadCoClass(ITypeInfoPtr typeInfo, Com::TypeInfoData& tid);
	//
	// Replace known name conflicts in the string
	static void ReplaceNameConflicts(wstring& in_out);
	//
	// Returns the help string and help file associated with a TypeLib
	static HRESULT GetTypeLibHelp(REFCLSID clsidTypeLib, WORD version, WORD subversion, wstring& out_help, wstring& out_helpFile);
	//
	// Returns a list of ProgID reading: HKEY_CLASSES_ROOT\CLSID
	static int GetProgInfo(vector<Com::ProgInfo>& info, bool controlsOnly);
	//
	// Returns the list of functions from a IDispatch interface
	static HRESULT GetTypeInfoData(IDispatchPtr dispatch, Com::TypeInfoData& tid);
	//
	// Returns text representing the list of functions and enums from a IDispatch interface (name is for display purposes only)
	static HRESULT GetTypeInfoText(const wchar_t* name, IDispatchPtr dispatch, list<wstring>& result);
	//
	// Creates a class (header file and source file) from a IDispatch interface (name is for display purposes only)
	static HRESULT CreateClassFiles(const wchar_t* name, IDispatchPtr dispatch, const wchar_t* nameSpace);
	//
	// Creates a class (header file and source file) from a progID
	// path is the path where the header and source files will be created
	// out_libName returns the name of the library
	static HRESULT ImportComLibraryFromProgID(const wchar_t* path, const wchar_t* progID, wstring& out_libName);
	//
	// Creates a class (header file and source file) from a tlb, olb or dll file
	// path is the path where the header and source files will be created
	// out_libName returns the name of the library
	static HRESULT ImportComLibraryFromFile(const wchar_t* path, const wchar_t* filename, wstring& out_libName);
	//
	// Creates a class (header file and source file) from a Com::TypeLibData object
	// path is the path where the header and source files will be created
	// out_libName returns the name of the library
	static HRESULT ImportComLibrary(const wchar_t* path, Com::TypeLibData& typeLibData);
	//
	// Appends the header file text and source file text from a TypeInfoData
	static void RenderFuncText(const wchar_t* nameSpace, bool earlyBinding, bool isIDispatch, TypeInfoData& typeInfoData, wstring& headerContent, wstring& sourceContent);
	//
	// Appends the header file text from a TypeInfoData
	static void RenderEnumText(TypeInfoData& typeInfoData, wstring& headerContent);
	//
	// Given a ProgID or a ClassID in the format {...}, it returns the list of functions and enums
	static bool GetTypeInfoData(HWND hWnd, const wchar_t* progId, Com::TypeInfoData& tid);
	//
	// Given a ITypeInfo interface returns if it is an enum or an IDispatch and the name
	static HRESULT GetUserDefinedInfo(ITypeInfoPtr typeInfo, HREFTYPE hreftype, Com::FuncParam& param);
	//
	static bool FindNameFromIid(TypeLibData& typeLibData, REFIID iid, wstring& out_name);
	static bool FindNameFromClsid(TypeLibData& typeLibData, REFCLSID clsid, wstring& out_name);
	static bool IsInterfaceName(TypeLibData& typeLibData, const wstring& name);
	static bool IsCoClassName(TypeLibData& typeLibData, const wstring& name);
	//
	// if clsidString = L"AcroPDF.PDF.1", the function returns true if the Acrobar Reader ActiveX is installed
	static bool IsComLibraryInstalled(const wchar_t* clsidString);
	//
	// If input begins with underscore, it will remove the underscore and add an X at the end
	static void CreateClassName(const wstring& input, wstring& output);
	//
	~Assistant();
private:
	Assistant();
	//
	static HRESULT ReadParamInfo(ITypeInfoPtr typeInfo, TYPEDESC& typedesc, Com::FuncParam& param);
	static bool Copy(HRESULT hr, _bstr_t& source, wstring& destination);
	//

};

//___________________________________________________________________ Property
class Property
{
public:
	Property();
	Property(const wstring& name, const wstring& value);
	~Property();
	std::wstring name;
	std::wstring value;
};

//___________________________________________________________________ PersistPropertyBag
class PersistPropertyBag : 
	public IPropertyBag, 
	public IPropertyBag2
{
public:
	PersistPropertyBag();
	HRESULT Create(vector<Property>& properties, IUnknownPtr& unknown);
	~PersistPropertyBag();
	//______________________________________________ IUnknown
	STDMETHOD (QueryInterface) (REFIID iid, void**ppvObject);
	STDMETHOD_(ULONG, AddRef) ();
	STDMETHOD_(ULONG, Release) ();
	//__________________________________________ IPropertyBag
	STDMETHOD (Read ) (LPCOLESTR pszPropName, VARIANT *pVar, IErrorLog *pErrorLog);
	STDMETHOD (Write) (LPCOLESTR pszPropName, VARIANT *pVar);
	//__________________________________________ IPropertyBag2         
	STDMETHOD (Read) (ULONG cProperties, PROPBAG2 *pPropBag, IErrorLog *pErrLog, VARIANT *pvarValue, HRESULT *phrError);
	STDMETHOD (Write) (ULONG cProperties, PROPBAG2 *pPropBag, VARIANT *pvarValue);
	STDMETHOD (CountProperties) (ULONG *pcProperties);
	STDMETHOD (GetPropertyInfo) (ULONG iProperty, ULONG cProperties, PROPBAG2 *pPropBag, ULONG *pcProperties);    
	STDMETHOD (LoadObject) (LPCOLESTR pstrName, DWORD dwHint, IUnknown *pUnkObject, IErrorLog *pErrLog);
private:
	vector<Property>* properties;
	int refCount;
};

//____________________________________________________ Exception
class Exception
{
public:
	Exception();
	Exception(HRESULT hr, wchar_t* info);
	Exception(HRESULT hr, wchar_t* info, EXCEPINFO excepInfo, int argError);
	Exception(const Exception& init);
	void ok(const wchar_t* info, HRESULT hr);
	void ThrowNullPointer(const wchar_t* info);
	virtual ~Exception(void);
	void GetErrorText(wchar_t* buffer, int buffer_len);
	void Display(HWND hWnd, const wchar_t* caption);
	static void GetErrorText(_com_error& input_error, wchar_t* buffer, int buffer_len);
	static void Display(HWND hWnd, _com_error& input_error, const wchar_t* caption);
	static wchar_t* GetErrorDescr(HRESULT hr);
protected:
	HRESULT _hr;
	EXCEPINFO _excepInfo;
	int _argError;
	wstring _info;
};

//____________________________________________________ Object
// It encapsulates IDispatch
class Object
{
public:
	Object(void);
	Object(const Object& init);
	Object(const _variant_t& init);
	Object(IDispatch* init);
	virtual ~Object(void);
	//__________________________________ From _variant_t
	Object& operator=(const _variant_t& init);
	//
	Object& operator=(const Com::Object& init);
	//
	// progID may be a ProgId or {clsidString}
	HRESULT CreateInstance(const wchar_t* progID, bool checkParameters); 
	//
	// progID may be a ProgId or {clsidString}
	HRESULT CreateInstance(const wchar_t* progID, bool checkParameters, DWORD clsContext);
	//
	HRESULT CreateInstance(CLSID clsid, bool checkParameters);
	HRESULT CreateInstance(CLSID clsid, bool checkParameters, DWORD clsContext);
	//
	void Release();
	// It releases the interface and deletes all memory allocation for this object
	void Destroy(bool all);
	//
	IDispatchPtr dispatch;
	//
	// You must call this function, after dispatch has been returned
	// You must not call this function, if CreateInstance has been called
	HRESULT RefreshFuncInfo();
	//
	//HRESULT GetFuncInfo(list<Com::FuncInfo>& result);
	HRESULT CreateClassFiles(const wchar_t* nameSpace);
	//
	HRESULT Invoke(wchar_t* name, Com::Param& param, Com::Object& returnedObject, WORD flags);
	HRESULT Invoke(wchar_t* name, Com::Param& param, _variant_t& returnedValue, WORD flags);
	HRESULT Invoke(int paramCount, DISPID dispid, wchar_t* name, Com::Param& param, Com::Object& returnedObject, WORD flags);
	HRESULT Invoke(int paramCount, DISPID dispid, wchar_t* name, Com::Param& param, _variant_t& returnedValue, WORD flags);
	//___________________________________________________________________________________________________ GET
	HRESULT Get(wchar_t* name, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, _variant_t& returnedValue);
	HRESULT Get(wchar_t* name, Com::Param& param, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, Com::Param& param, _variant_t& returnedValue);
	//
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t& returnedValue);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t& returnedValue);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t& returnedValue);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t& returnedValue);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t& returnedValue);
	//
	HRESULT Get(wchar_t* name, _variant_t param1, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, Com::Object& returnedObject);
	HRESULT Get(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5, Com::Object& returnedObject);
	//___________________________________________________________________________________________________ PUT
	HRESULT Put(wchar_t* name, _variant_t input);
	HRESULT Put(wchar_t* name, Com::Param& param, _variant_t& returnedValue);
	HRESULT Put(wchar_t* name, Com::Param& param, Com::Object& returnedObject);
	//
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t& returnedValue);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t& returnedValue);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t& returnedValue);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t& returnedValue);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t& returnedValue);
	//
	HRESULT Put(wchar_t* name, _variant_t param1, Com::Object& returnedObject);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, Com::Object& returnedObject);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, Com::Object& returnedObject);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, Com::Object& returnedObject);
	HRESULT Put(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5, Com::Object& returnedObject);
	//___________________________________________________________________________________________________ PUTREF
	HRESULT PutRef(wchar_t* name, _variant_t input);
	HRESULT PutRef(wchar_t* name, Com::Param& param, _variant_t& returnedValue);
	HRESULT PutRef(wchar_t* name, Com::Param& param, Com::Object& returnedObject);
	//
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t& returnedValue);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t& returnedValue);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t& returnedValue);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t& returnedValue);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t& returnedValue);
	//
	HRESULT PutRef(wchar_t* name, _variant_t param1, Com::Object& returnedObject);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, Com::Object& returnedObject);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, Com::Object& returnedObject);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, Com::Object& returnedObject);
	HRESULT PutRef(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5, Com::Object& returnedObject);
	//___________________________________________________________________________________________________ METHOD
	HRESULT Method(wchar_t* name, Com::Param& param, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, Com::Param& param, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, Com::Param& param);
	//
	HRESULT Method(wchar_t* name, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name);
	//
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, _variant_t param19, _variant_t& returnedValue);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, _variant_t param19, _variant_t param20, 
					_variant_t& returnedValue);
	//
	HRESULT Method(wchar_t* name, _variant_t param1, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, _variant_t param19, Com::Object& returnedObject);
	HRESULT Method(wchar_t* name, _variant_t param1, _variant_t param2, _variant_t param3, _variant_t param4, _variant_t param5,
					_variant_t param6, _variant_t param7, _variant_t param8, _variant_t param9, _variant_t param10,
					_variant_t param11, _variant_t param12, _variant_t param13, _variant_t param14, _variant_t param15,
					_variant_t param16, _variant_t param17, _variant_t param18, _variant_t param19, _variant_t param20, Com::Object& returnedObject);
	const wchar_t* GetObjectName();
protected:
	HRESULT CheckParam(wchar_t * name, int dispatch_type, Com::Param& param, Com::FuncBasicInfo& bfi, wchar_t *buffer, int buffer_len);
	HRESULT CheckParam(wchar_t * name, int dispatch_type, _variant_t& input, Com::FuncBasicInfo& bfi, wchar_t *buffer, int buffer_len);
	HRESULT GetFuncBasicInfo();
	void GetFuncText(wchar_t* name, int dispath_type, int parameterIndex, wstring& result);
	void Private_Copy(const Com::Object& init);
	//_________________ Variables
	map<Com::InvokeInfo, Com::FuncBasicInfo> funcBasicInfo;
	CLSID _clsid;
	wchar_t name[32];
	bool _checkParameters;
	void CopyFromVariant(const _variant_t& init);
};

} //___________________________________________________ namespace Com::End


// System
namespace Sys //________________________________________ namespace Sys::Ini
{

//_____________________________________________________________________ ISelect
// This interface is used to simplify Web or desktop applications with SQL
class ISelect
{
	//When toGui is true, the GUI is updated from the storage
	//When toGui is false, the value from the Gui is updated to the storage
public:
	virtual void SqlUpdate(bool toGui) = 0;
};

//_____________________________________________________________________ ISelectString
// This interface is used to simplify Web or desktop applications with SQL
class ISelectString : public Sys::ISelect
{
public:
	virtual wstring& SqlGetString() = 0;
};

class SqlTime;
class Time;
//_____________________________________________________________________ ISelectSystime
// This interface is used to simplify Web or desktop applications with SQL
class ISelectTime : public Sys::ISelect
{
public:
	virtual Sys::SqlTime& SqlGetTime() = 0;
	virtual Sys::Time& SqlGetSysTime() = 0;
};

//_____________________________________________________________________ ISelectInt
// This interface is used to simplify Web or desktop applications with SQL
class ISelectInt : public Sys::ISelect
{
public:
	virtual LPARAM& SqlGetInt() = 0;
};

//_____________________________________________________________________ ISelectDouble
// This interface is used to simplify Web or desktop applications with SQL
class ISelectDouble : public Sys::ISelect
{
public:
	virtual double& SqlGetDouble() = 0;
};

//_____________________________________________________________________ ISelectBool
// This interface is used to simplify Web or desktop applications with SQL
class ISelectBool : public Sys::ISelect
{
public:
	virtual bool& SqlGetBool() = 0;
};

//_____________________________________________________________________ Sys::IError
class IError
{
public:
	virtual void ReportError(bool error, wchar_t* description)=0;
};

//_____________________________________________________________________ Sys::IColorMapDataProvider
class IColorMapDataProvider
{
public:
	virtual void GetDataRowZ(const int row, const int in_countX, const double* in_x, const double in_y, double* out_z) = 0;
};

//_____________________________________________________________________ Sys::Sample8
struct Sample8
{
	__int8 channel_1;
	__int8 channel_2;
};

//_____________________________________________________________________ Sys::Sample16
struct Sample16
{
	__int16 channel_1;
	__int16 channel_2;
};

//____________________________________________________________________ Sys::FileInfo
struct FileInfo
{
	_tfinddata_t findData;
	wstring path;
};

//____________________________________________________________________ Sys::HSLColor
struct HSLColor
{
	double hue; // [0 360]
	double saturation; // [0 1]
	double luminance; // [0 1]
};

//____________________________________________________________________ Sys::ColorText
struct ColorText
{
	COLORREF color;
	wstring text;
};

//_____________________________________________________________________ Sys::CharInfo
class CharInfo
{
public:
	CharInfo()
	{
		Clear();
	}
	~CharInfo()
	{
	}
	void Clear()
	{
		character = ' ';
		char_width = 0;
		x = 0;
		color = RGB(0, 0, 0);
		userData = 0;
	}
	wchar_t character;
	LONG char_width;
	int x;
	COLORREF color;
	//
	//The user can store custom data
	__int8 userData;
};


//_____________________________________________________________________ Sys::SocketStatus
class SocketStatus
{
public:
	SocketStatus();
	~SocketStatus();
	void Delete();
	bool isError;
	bool isConnected;
	int bytesTransferred;
};

//____________________________________________________________________ Sys::DriveInformation
struct DriveInformation
{
	wchar_t id; // A, B, C, D, E, ...
	wchar_t name[MAX_PATH];
	wchar_t type[MAX_PATH];  //L"NTFS", L"FAT", L"FAT32",...
	DWORD serialNumber; // A number asigned when the drive was formatted
	DWORD maximumComponentLen; // Maximum name length
	DWORD fileSystemFlags; // FILE_CASE_PRESERVED_NAMES, FILE_CASE_SENSITIVE_SEARCH, FILE_READ_ONLY_VOLUME,...
	DriveInformation()
	{
		id = '\0';
		name[0] = '\0';
		type[0] = '\0';
		serialNumber = 0;
		maximumComponentLen = 0;
		fileSystemFlags = 0;
	}
};

//_____________________________________________________________________ Sys::IListFileDirectory
class IListFileDirectory
{
public:
	virtual bool Enumerate(_tfinddata_t& findData)=0; //return false to stop enumerating
};

//_____________________________________________________________________ Sys::IListFileDirRecursive
class IListFileDirRecursive
{
public:
	virtual bool Enumerate(const wchar_t* path, _tfinddata_t& findData)=0; //return false to stop enumerating
};

//_____________________________________________________________________ Sys::ITextWriterA
class ITextWriterA
{
public:
	virtual bool WriteText(const string& source)=0;
};

//_____________________________________________________________________ Sys::ITextWriterW
class ITextWriterW
{
public:
	virtual bool WriteText(const wstring& source) = 0;
};

//_____________________________________________________________________ Sys::IStorer
class IStorer
{
public:
	// returns the actual number of bytes that were read, or -1 if error
	virtual int Read(void *out_buffer, int bufferSizeInBytes) = 0;  
	//
	// returns the actual number of bytes that were written, or -1 if error	
	virtual int Write(const void* in_buffer, int bufferSizeInBytes) = 0; 
};

//_____________________________________________________________________ Sys::IChannel
class IChannel
{
public:
	// returns the actual number of bytes that were received, or -1 if error
	virtual int Receive(char *out_buffer, int bufferSizeInBytes) = 0; 
	//
	// returns the actual number of bytes that were sent, or -1 if error	
	virtual int Send(const char* in_buffer, int bufferSizeInBytes) = 0;
};

//_____________________________________________________________________ Sys::IVisualStudio
class IVisualStudio
{
public:
	virtual bool GetActiveDocumentFileName(wstring& out_fileName) = 0;
	virtual bool SaveAll(HWND hWnd) = 0;
	virtual bool SetProjectDebugInfo(HWND hWnd, const wchar_t* path, const wchar_t* activeProjectName) = 0;
	virtual bool SetFileText(HWND hWnd, const wchar_t* fileName, const wchar_t* fileText) = 0;
	virtual bool GetFileText(HWND hWnd, const wchar_t* fileName, wstring& fileText) = 0;
	virtual bool AddFileToProject(HWND hWnd, const wstring& projectName, const wstring& fileName) = 0;
	//virtual bool AddFilesToProject(HWND hWnd, const wstring& projectName, const vector<wstring>& fileName) = 0;
};

//_____________________________________________________________________ Sys::IEnumerator
// This interface is used to move data between classes
class IEnumerator
{
public:
	virtual void Enumerate(wchar_t** data, int colCount, int rowIndex)=0;
};

//_____________________________________________________________________ Sys::IWindow
class IWindow
{
public:
	virtual HWND GetHWND() = 0;
	virtual int MessageBox(const wchar_t * text, const wchar_t * caption, UINT type) = 0;
	virtual int MessageBox(const wstring& text, const wstring& caption, UINT type) = 0;
	virtual void EndDialog(int result) = 0;
};

//_____________________________________________________________________ Sys::IObject
class IObject
{
public:
	//____________________________________________________________ Text
	virtual wstring& GetText() = 0;
	virtual void SetText(const wstring& text) = 0;
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	virtual void SetVisible(bool visible) = 0;
	virtual bool IsVisible() = 0;
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	virtual void SetEnabled(bool enabled) = 0;
	virtual bool IsEnabled() = 0;
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
};

//_____________________________________________________________________ Sys::IButton
class IButton : public Sys::IObject, public Sys::ISelectBool
{
public:
	//______________________________________________________________ Checked
	virtual void SetChecked(bool checked) = 0;
	virtual bool IsChecked() = 0;
	__declspec( property( get=IsChecked, put=SetChecked) ) bool Checked;
};

//_____________________________________________________________________ Sys::ITextbox
class ITextbox : public Sys::IObject, public Sys::ISelectString
{
public:
	//______________________________________________________________ DoubleValue
	virtual void SetDoubleValue(double value) = 0;
	virtual double GetDoubleValue() = 0;
	__declspec( property( get=GetDoubleValue, put=SetDoubleValue) ) double DoubleValue;
	//______________________________________________________________ IntValue
	virtual void SetIntValue(int value) = 0;
	virtual int GetIntValue() = 0;
	__declspec( property( get=GetIntValue, put=SetIntValue) ) int IntValue;
	//______________________________________________________________ Password
	virtual void SetPassword(bool isPassword) = 0;
	virtual bool IsPassword() = 0;
	__declspec( property ( get=IsPassword, put=SetPassword ) ) bool Password;
	//______________________________________________________________ ReadOnly
	virtual void SetReadOnly(bool readOnly) = 0;
	virtual bool IsReadOnly() = 0;
	__declspec( property( get=IsReadOnly, put=SetReadOnly) ) bool ReadOnly;
	//______________________________________________________________ MaxTextLength
	virtual void SetMaxTextLength(int maxTextLength) = 0;
	virtual int GetMaxTextLength() = 0;
	__declspec( property( get=GetMaxLength, put=SetMaxLength) ) int MaxTextLength;
	//____________________________________________________________ Multiline
	virtual void SetMultiline(bool isMultiline) = 0;
	virtual bool IsMultiline() = 0;
	__declspec( property ( get=IsMultiline, put=SetMultiline ) ) bool Multiline;
	//______________________________________________________________ BallonTip
	virtual void ShowBalloonTip(const wchar_t* caption, const wchar_t* text, int icon) = 0;
	virtual void ShowBalloonTip(const wstring& caption, const wstring& text, int icon) = 0; 
	virtual void HideBalloonTip() = 0;
};

//_____________________________________________________________________ Sys::IDropDownList
class IDropDownList : public Sys::IObject, public Sys::ISelectInt, public Sys::IEnumerator
{
public:
	virtual int GetItemCount() = 0;
	//_______________________________________________________ Add
	virtual void AddItem(const wchar_t* text, LPARAM data) = 0;
	virtual void AddItem(const wstring& text, LPARAM data) = 0;
	//_______________________________________________________ Delete
	virtual bool DeleteItem(int index) = 0;
	virtual void DeleteAllItems() = 0;
	//_______________________________________________________ Text
	virtual bool GetItemText(int index, wstring& out_text) = 0;
	virtual bool GetItemText(int index, wchar_t* buffer, int buffer_length) = 0;
	//_______________________________________________________ Data
	virtual LPARAM GetItemData(int index) = 0;
	virtual bool SetItemData(int index, const LPARAM data) = 0;
	//_______________________________________________________ SelectedIndex
	virtual int GetSelectedIndex() = 0;
	virtual bool SetSelectedIndex(int index) = 0;
	__declspec( property( get=GetSelectedIndex, put=SetSelected ) ) int SelectedIndex;
	//_______________________________________________________ SelectedData
	virtual bool GetSelectedData(LPARAM& out_data) = 0;
	virtual bool SetSelectedByData(LPARAM data) = 0;
};

//_____________________________________________________________________ Sys::IListBox
class IListBox : public Sys::IDropDownList
{
public:
	//________________________________________________________ Multiple Selection
	// If index is -1, it will affect all items
	virtual bool SetSelection(int index, bool selected) = 0;
	virtual bool IsItemSelected(int index) = 0;
};

//_____________________________________________________________________ Sys::IListView
class IListView : public Sys::IEnumerator, public Sys::IObject 
{
public:
	//________________________________________________________________________ COLUMNS
	virtual int GetColumnCount() = 0;
	//_____________________________________________________ Add
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	virtual void AddColumn(int format, int width, const wchar_t* text) = 0;
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	virtual void AddColumn(int format, int width, const wstring& text) = 0;
	//_____________________________________________________ Delete
	virtual bool DeleteColumn(int index) = 0;
	virtual void DeleteAllColumns() = 0;
	//_____________________________________________________ Text
	virtual bool GetColumnText(int index, wstring& out_text) = 0;
	virtual bool GetColumnText(int index, wchar_t* buffer, int buffer_length) = 0;
	virtual bool SetColumnText(int index, const wstring& text) = 0;
	virtual bool SetColumnText(int index, const wchar_t* text) = 0;
	//_____________________________________________________ Format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	virtual bool GetColumnFormat(int index, int& format) = 0;
	virtual bool SetColumnFormat(int index, int format) = 0;
	//_____________________________________________________ Width
	virtual bool GetColumnWidth(int index, int& width) = 0;
	virtual bool SetColumnWidth(int index, int width) = 0;
	//_________________________________________________________________________ ITEMS
	virtual int GetItemCount() = 0;
	//_____________________________________________________ Add
	virtual void AddItem(const wchar_t* text, LPARAM data) = 0;
	virtual void AddItem(const wstring& text, LPARAM data) = 0;
	//_____________________________________________________ Delete
	virtual bool DeleteItem(int row) = 0;
	virtual void DeleteAllItems() = 0;
	virtual void Delete() = 0;
	//_____________________________________________________ Text
	virtual bool GetItemText(int row, int column, wstring& out_text) = 0;
	//
	// It returns the number of characters
	virtual int GetItemText(int row, int column, wchar_t* buffer, int buffer_length) = 0;
	virtual bool SetItemText(int row, int column, const wstring& text) = 0;
	virtual bool SetItemText(int row, int column, const wchar_t* text) = 0;
	//_____________________________________________________ Data
	virtual bool GetItemData(int row, LPARAM& out_data) = 0;
	virtual bool SetItemData(int row, const LPARAM data) = 0;
	//_____________________________________________________ Selection
	virtual int GetSelectedIndex() = 0;
	virtual bool SetSelectedIndex(int row) = 0;
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//
	virtual bool GetSelectedData(LPARAM& out_data) = 0;
	virtual bool SetSelectedByData(LPARAM data) = 0;
	virtual bool IsItemSelected(int row) = 0;
	//______________________________________________________ Multiple Selection
	virtual int GetSelectedCount() = 0;
	// The first time the function is called, row must -1. The next calls row must be set to the value returned on the previous function call.
	// The function is called until it returns -1
	virtual int GetNextSelectedIndex(int row) = 0;
	//
	// Selects or un-select the specified item (Indexes start at 0. Use row =-1 to affect all rows)
	virtual bool SetSelection(int row, bool selected) = 0;
	//_______________________________________________________ ItemChecked
	virtual bool IsItemChecked(int row) = 0;
	virtual void SetItemChecked(int row, bool checked) = 0;
};

//_____________________________________________________________________ Sys::Format
/* int - %d
   wchar_t - %c
   wchar_t* - %s
   double - %g
   double - %f */
//   wstring - %s  passing myString.c_str()
static wstring& Format(wstring& text, const wchar_t* format, ...)
{
	va_list arglist;
	va_start(arglist, format);
	int result = -1;
	int len = 0;
	for(register const wchar_t* p = format; *p != NULL; p++)
	{
		len++;
		if (*p == '%') len += 15;
	}
	int bufferSize = MAXIMUM(64, len);
	do
	{
		text.resize(bufferSize);
		result = _vsnwprintf_s((wchar_t*)text.data(), bufferSize, _TRUNCATE, format, arglist);
		bufferSize*=2;
	}
	while(result==-1);
	text.resize(result);
	va_end(arglist);
	return text;
}

static string& Format(string& text, const char* format, ...)
{
	va_list arglist;
	va_start(arglist, format);
	int result = -1;
	int len = 0;
	for (register const char* p = format; *p != NULL; p++)
	{
		len++;
		if (*p == '%') len += 15;
	}
	int bufferSize = MAXIMUM(64, len);
	do
	{
		text.resize(bufferSize);
		result = _vsnprintf_s((char*)text.data(), bufferSize, _TRUNCATE, format, arglist);
		bufferSize*=2;
	}
	while(result==-1);
	text.resize(result);
	va_end(arglist);
	return text;
}

//_____________________________________________________________________ Sys::GetLastErrorInformation
static void GetLastErrorInformation(wchar_t *buffer, int bufferSize)
{
	LPVOID lpMsgBuf;
	::FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM | 
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		::GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR) &lpMsgBuf,
		0,
		NULL 
	);

	lstrcpyn(buffer, (wchar_t*)lpMsgBuf, bufferSize);
	buffer[bufferSize-1]='\0';
	::LocalFree( lpMsgBuf );
}

//_____________________________________________________________________ Sys::GetLastErrorInformation
static void GetLastErrorInformation(wstring& errorInformation)
{
	LPVOID lpMsgBuf;
	::FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM | 
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		::GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR) &lpMsgBuf,
		0,
		NULL 
	);

	errorInformation = (wchar_t*)lpMsgBuf;
	::LocalFree( lpMsgBuf );
}

//_____________________________________________________________________ Sys::DisplayLastError
static void DisplayLastError(HWND hWndParent, const wchar_t* caption)
{
	if (caption==NULL) caption = L"Error";
	LPVOID lpMsgBuf;
	::FormatMessage( 
		FORMAT_MESSAGE_ALLOCATE_BUFFER | 
		FORMAT_MESSAGE_FROM_SYSTEM | 
		FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL,
		::GetLastError(),
		MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Default language
		(LPTSTR) &lpMsgBuf,
		0,
		NULL 
	);
	::MessageBox(hWndParent, (const wchar_t *)lpMsgBuf, caption, MB_OK | MB_ICONERROR);
	::LocalFree( lpMsgBuf );
}

//_____________________________________________________________________ Sys::DisplayLastError
static void DisplayLastError(HWND hWndParent, const wstring& caption)
{
	DisplayLastError(hWndParent, caption.c_str());
}

//_____________________________________________________________________ Sys::Point
struct Point
{
	int x;
	int y; 
};

//_____________________________________________________________________ Sys::Point16
struct Point16
{
	__int16 x;
	__int16 y; 
};

//_____________________________________________________________________ Sys::PointF
struct PointF
{
	double x;
	double y; 
};

//_____________________________________________________________________ Sys::Point2D
struct Point2D
{
	float x;
	float y; 
};

//_____________________________________________________________________ Sys::Point3D16
struct Point3D16
{
	__int16 x;
	__int16 y; 
	__int16 z; 
};

//_____________________________________________________________________ Sys::Point3D
struct Point3D
{
	double x;
	double y; 
	double z;
	COLORREF color;
	bool draw;
};

//_____________________________________________________________________ Sys::SphericalPoint
struct SphericalPoint
{
	double r;
	double theta;
	double phi;
};

//_____________________________________________________________________ Sys::Line3D
struct Line3D
{
	float x1;
	float y1; 
	float z1; 
	float x2;
	float y2; 
	float z2;
	COLORREF color; //Use RGBX instead of RGB
};

//_____________________________________________________________________ Sys::Object3DInfo
struct Object3DInfo
{
	__int16 x1;
	__int16 y1; 
	__int16 x2; 
	__int16 y2;
	__int16 x3; 
	__int16 y3;
	__int8 type; //GRAPHICS_TYPE_LINE, GRAPHICS_TYPE_ANTIALISING_LINE, ...
	bool draw;
	COLORREF color1; //Use RGBX instead of RGB
	COLORREF color2; //Use RGBX instead of RGB
	COLORREF color3; //Use RGBX instead of RGB
	double view_distance;
	bool operator<(const Sys::Object3DInfo& init)
	{
		return view_distance < init.view_distance;
	}
};

//_____________________________________________________________________ Sys::HorizontalLine
struct HorizontalLine
{
	int x_start; // x coordinate of the leftmost pixel in line
	int x_end; // y coordinate of the rightmost pixel in line 
};

//_____________________________________________________________________ Sys::HorizontalLineList
struct HorizontalLineList
{
	//int lineCount;
	int y_start; // y coordinate of topmost line
	vector<HorizontalLine> horizontalLine;
};

//_____________________________________________________________________ Sys::Triangle3D
struct Triangle3D
{
	float x1;
	float y1; 
	float z1; 
	float x2;
	float y2; 
	float z2;
	float x3;
	float y3; 
	float z3; 
	COLORREF color; //Use RGBX instead of RGB
};

//_____________________________________________________________________ Sys::XmlAttribute
//class XmlAttribute
//{
//public:
//	XmlAttribute();
//	XmlAttribute(const wstring& name, const wstring& value);
//	~XmlAttribute();
//	void Clear();
//	wstring name;
//	wstring value;
//};

class IirPolarCoeff;
//_____________________________________________________________________ Sys::IirCoeff
// (1 + a * z^-1 + b * z ^-2) / (1 + c * z^-1 + d * z ^-2)
class IirCoeff  
{
public:
	IirCoeff();
	IirCoeff(const Sys::IirPolarCoeff& init);
	~IirCoeff();
	void Clear();
	double a;
	double b;
	double c;
	double d;
	//_________________________ Conversions
	Sys::IirCoeff& operator=(const Sys::IirPolarCoeff& init);
private:
	void Copy(const Sys::IirPolarCoeff& init);
};

//_____________________________________________________________________ Sys::IirPolarCoeff
// Andrew G. Deczky 1972 Eq. 10
// (z - zeroR * exp(j * zeroAngle) ) / (z - poleR *exp (j * poleAngle) )
class IirPolarCoeff  
{
public:
	IirPolarCoeff();
	IirPolarCoeff(const Sys::IirCoeff& init);
	~IirPolarCoeff();
	void Clear();
	double zeroR; // alpha
	double zeroAngle; // alpha
	double poleR; // beta
	double poleAngle; // beta
	//_________________________ Conversions
	Sys::IirPolarCoeff& operator=(const Sys::IirCoeff& init);
private:
	void Copy(const Sys::IirCoeff& init);
};

//_____________________________________________________________________ Sys::FrequencyMagnitude
struct FrequencyMagnitude
{
	double radFrequency;
	double magnitude;
	double w; //priority: [0 1]
	double alpha; // Do not use
	double tao;  // Do not use
};

//_____________________________________________________________________ Sys::Bound2D
// Stores a 2D Point and additional information (dx and dy) that it is used internally for quick collision detection
// A line segment requires two Bound2D objects
// An irregular shape requires a set of Bound2D objects, the first and the last Bound2D object must be equal
class Bound2D
{
public:
	Bound2D();
	~Bound2D();
	float x;
	float y; 
	float dx;
	float dy;
	static bool DoIntersect(vector<Sys::Bound2D>& bounds1, vector<Sys::Bound2D>& bounds2);	
	static bool DoIntersect(Sys::Bound2D& b1, Sys::Bound2D& b2, Sys::Bound2D& b3, Sys::Bound2D& b4);
	static bool DoIntersect(vector<Sys::Bound2D>& bounds1, vector<Sys::Bound2D>& bounds2, Sys::Point2D& out_intersection);	
	static bool DoIntersect(Sys::Bound2D& b1, Sys::Bound2D& b2, Sys::Bound2D& b3, Sys::Bound2D& b4, Sys::Point2D& out_intersection);
	static float ShortestDistance(Sys::Point2D& p1, Sys::Point2D& p2, vector<Sys::Bound2D>& bounds);
	static float Distance(Sys::Point2D& p1, Sys::Point2D& p2);
};


class Rectangle;
//_____________________________________________________________________ Sys::RotatedRectangle
class RotatedRectangle
{
public:
	RotatedRectangle();
	~RotatedRectangle();
	Sys::Point2D p1;
	Sys::Point2D p2;
	Sys::Point2D p3;
	Sys::Point2D p4;
	bool IsInsideRegion(const vector<Rectangle>& regionBig) const;
};

//_____________________________________________________________________ Sys::Rectangle
class Rectangle
{
public:
	Rectangle();
	~Rectangle();
	float left;
	float top;
	float right;
	float bottom;
	bool IsInside(const RotatedRectangle& rectSmall) const;
	bool IsInside(const Rectangle& rectSmall) const;
	bool IsInside(const Sys::Point2D& point) const;
	bool IsIntersected(const Rectangle& rect) const;
	bool IsInsideRegion(const vector<Rectangle>& regionBig) const;
};

#ifdef WIN_GDI_PLUS_ON
//_____________________________________________________________________ Sys::ImageStream
//#undef INTERFACE
//#define INTERFACE ImgStream
class ImageStream: public IStream
{
public:
	static int ImageStream::GetEncoderClsid(const wchar_t* format, CLSID* pClsid);
	//
	STDMETHOD (QueryInterface) (THIS_ REFIID riid, LPVOID FAR *ppv);
	STDMETHOD_ (ULONG, AddRef) (THIS);
	STDMETHOD_ (ULONG, Release) (THIS);
	//
	STDMETHOD (Read) (THIS_ void *pv, ULONG cb, ULONG *pcbRead);
	STDMETHOD (Write) (THIS_ const void *pv, ULONG cb, ULONG *pcbWritten);
	STDMETHOD (Seek) (THIS_ LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
	STDMETHOD (SetSize) (THIS_ ULARGE_INTEGER libNewSize);
	STDMETHOD (CopyTo) (THIS_ IStream *pstm, ULARGE_INTEGER cb, 
		ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
	STDMETHOD (Commit) (THIS_ DWORD grfCommitFlags);
	STDMETHOD (Revert) (THIS_);
	STDMETHOD (LockRegion)(THIS_ ULARGE_INTEGER libOffset, ULARGE_INTEGER cb,
		DWORD dwLockType);
	STDMETHOD (UnlockRegion)(THIS_ ULARGE_INTEGER libOffset, ULARGE_INTEGER cb,
		DWORD dwLockType);
	STDMETHOD (Stat)(THIS_ STATSTG *pstatstg, DWORD grfStatFlag);
	STDMETHOD (Clone)(THIS_ IStream **ppstm);
	//
	string *data; // Image data is stored here
#ifndef CINTERFACE
public:
	ImageStream();
	virtual ~ImageStream();
	static IStream* CreateAllocator(string* data);
private:
	ULONG m_nRefCount;
	STATSTG m_sta;
	FILETIME m_filetimeCreation;
	FILETIME m_filetimeLastWrite;
	FILETIME m_filetimeLastRead;
	ULARGE_INTEGER m_cb;
#endif
};
#endif

//_____________________________________________________________________ Sys::Buffer
class Buffer : public Sys::IStorer, public Sys::IChannel
{
public:
	Buffer();
	~Buffer();
	operator char*(); // Use to this cast the buffer to char*
	operator const char*() const; // Use to this cast the buffer to const char*
	//
	// It is used to reserve space and improve performance
	bool Reserve(size_t size);
	//___________________________________ Copy Constructor and operator=
	Buffer(const Sys::Buffer& ini);
	Buffer& operator=(const Sys::Buffer& ini);
	//
	// It returns the number of bytes stored in the buffer
	size_t GetSize() const;
	//
	bool CreateFromText(const char* in_text);
	bool CreateFromText(const string& in_text);
	//
	// It returns the text stored in the buffer. 
	// As the buffer can store of data, you must call this function when you know that there is text in the buffer
	void GetText(string& out_text);
	//
	// It returns the text stored in the buffer and converts the text to wstring. 
	// If isUtf8 is true, it is assumed that the buffer has UTF-8 text
	// As the buffer can store of data, you must call this function when you know that there is text in the buffer
	void GetText(wstring& out_text, bool isUtf8);
	//
	// It changes the size of the buffer preserving the current data
	bool SetSize(size_t size);
	__declspec( property( get=GetSize, put=SetSize) ) size_t Size;
	//____________________________________
	bool SaveToFile(const wchar_t* filename);
	bool SaveToFile(const wstring& filename);
	bool CreateFromFile(const wchar_t* filename);
	bool CreateFromFile(const wstring& filename);
	bool Create(const Sys::Buffer& in_buffer, size_t position1, size_t position2);
	//bool Create(Sys::IChannel& ichannel);
	//
	//It resets the reading position.
	void ResetRead();
	//
	// It deletes the content of the buffer
	void Delete();
	//
	//It returns true, if current position is at the end
	bool Feof();
	//
	//It returns true, if error
	bool Ferror();
	//_____________________________________________________ Sys::Storer
	//It returns the actual number of bytes that were read, or -1 if error
	int Read(void *out_buffer, int bufferSizeInBytes);  
	//
	//It returns the actual number of bytes that were written, or -1 if error	
	int Write(const void* in_buffer, int bufferSizeInBytes); 
	//____________________________________________________ Sys::IChannel
	//It returns the actual number of bytes that were received, or -1 if error
	int Receive(char *out_buffer, int bufferSizeInBytes); 
	//
	//It returns the actual number of bytes that were sent, or -1 if error	
	int Send(const char* in_buffer, int bufferSizeInBytes);
	//
	//It returns the position of \r\n\r\n or -1, if not found 
	int GetHttpHeadEndPosition();
private:
	void Constructor();
	void Copy(const Sys::Buffer& ini);
	char* buffer;
	size_t readPosition;
	size_t bufferSize;
	size_t bytesUsed;
	bool isError;
	bool CheckMemory(unsigned int size);
	static int GetRecommendeSize(int input);
};
//_____________________________________________________________________ Sys::Stopwatch
// It provides support to measure time with high resolution and precision
class Stopwatch
{
public:
	Stopwatch(void)
	{
		QueryPerformanceFrequency(&frequency);
		QueryPerformanceCounter(&startTime);
	}

	void Start()
	{
		QueryPerformanceCounter(&startTime);
	}

	LARGE_INTEGER GetMicroseconds()
	{
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		LARGE_INTEGER delta;
		delta.QuadPart = now.QuadPart - this->startTime.QuadPart;
		delta.QuadPart *= 1000000;
		delta.QuadPart /= frequency.QuadPart;
		return delta;
		//return (((now.QuadPart - this->startTime.QuadPart)*1000000)/frequency.QuadPart);
	}

	wstring GetMicrosecondsText()
	{
		wchar_t text[32];
		_snwprintf_s(text, 32, _TRUNCATE, L"%I64i microseconds", (__int64)GetMicroseconds().QuadPart);
		return text;
	}

	LARGE_INTEGER GetMilliseconds()
	{
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		LARGE_INTEGER delta;
		delta.QuadPart = now.QuadPart - this->startTime.QuadPart;
		delta.QuadPart *= 1000;
		delta.QuadPart /= frequency.QuadPart;
		return delta;
		//return (((now.QuadPart - this->startTime.QuadPart)*1000)/frequency.QuadPart);
	}

	wstring GetMillisecondsText()
	{
		wchar_t text[32];
		_snwprintf_s(text, 32, _TRUNCATE, L"%I64i milliseconds", (__int64)GetMilliseconds().QuadPart);
		return text;
	}

	double GetSeconds()
	{
		LARGE_INTEGER now;
		QueryPerformanceCounter(&now);
		//LARGE_INTEGER delta = now.QuadPart - this->startTime.QuadPart;
		const double diff = (double)(now.QuadPart - this->startTime.QuadPart);
		return diff/(double)(frequency.QuadPart);
	}

	virtual ~Stopwatch(void)
	{
	}

private:
	LARGE_INTEGER frequency;
	LARGE_INTEGER startTime;
};

//_____________________________________________________________________ Sys::Performance
// It measures the time spent in each part of a program
class Performance
{
public:
	Performance(int index);
	~Performance();
	static void Display(HWND hWnd);
private:
	int index;
	DWORD initialTime;
	static DWORD data[16];
	static bool firstTime;
};

//__________________________________________ Sys::Pipe
class Pipe
{
public:
	Pipe(void);
	~Pipe(void);
	bool Create();
	bool Create(SECURITY_ATTRIBUTES& securityAttributes);
	//
	void ReadClose();
	void WriteClose();
	//
	bool IsReadOpen();
	bool IsWriteOpen();
	//
	HANDLE GetReadHandle();
	HANDLE GetWriteHandle();
	//
	// When it is used to write to an anonymous pipe, the write operation is not completed until 
	// all bytes are written. If the pipe buffer is full before all bytes are written, Write does not return 
	// until another process or thread uses Read to make more buffer space available.
	bool Write(LPCVOID lpBuffer, DWORD nNumbOfBytesToWrite, LPDWORD lpNumbOfBytesWritten);
	//
	// It returns when one of the following is true: a write operation completes on the write end of the pipe, 
	// the number of bytes requested has been read, or an error occurs.
	bool Read(LPVOID lpBuffer, DWORD nNumbOfBytesToRead, LPDWORD lpNumbOfBytesRead);
protected:
	HANDLE handleRead;
	HANDLE handleWrite;
};

//________________________________________ Process
// It runs another program from a program.  It is possible to have access to the output produced by this other program
// It is also possible to write to the standard input of the program
class Process
{
public:
	Process(void);
	virtual ~Process(void);
	//
	// Terminates the specified process and all of its threads #TerminateProcess+Win32
	bool Terminate(UINT returnCode);
	//
	Sys::Pipe pipeStandardInput;
	Sys::Pipe pipeStandardOutput;
	//
	STARTUPINFO startupInfo;
	PROCESS_INFORMATION processInformation;
	//
	// It calls a command line program, the output of the program is read using pipeStandardOutput
	// if standardInput is true, then the standard input of the program can be written using pipeStandardInput
	// workingDirectory may be NULL
	// char text[1024]; DWORD dwRead;
	// while(process.pipeStandardOutput.Read(text, 1023, &dwRead) == true && dwRead != 0) { text[dwRead] = '\0'; ... }
	// process.pipeStandardOutput.ReadClose();
	// if rectWindow isEmpty, the window is not shown
	bool Execute(const wchar_t* programName, bool standardInput, const wchar_t* workingDirectory, const RECT& rectWindow);
	//
	// It calls a command line program. workingDirectory may be NULL. The output produced by the program is stored in output.
	// if standardInput is true, then the standard input of the program can be written using pipeStandardInput
	bool Execute(const wchar_t* programName, bool standardInput, const wchar_t* workingDirectory, const RECT& rectWindow, wstring& output);
	//
	// It calls a command line program.  workingDirectory may be NULL.  
	// if standardInput is true, then the standard input of the program can be written using pipeStandardInput
	// The output produced by the program is discarded
	bool NonOutputExecute(const wchar_t* programName, bool standardInput, const wchar_t* workingDirectory, const RECT& rectWindow);
	//
	// It calls a command line program.  workingDirectory may be NULL.  
	// The program does not receive any input
	// The output produced by the program is discarded
	bool NonOutputExecute(const wchar_t* programName, const wchar_t* workingDirectory, const RECT& rectWindow);
	//
	// It calls a command line program.  The output produced by the program is stored in output.
	bool Execute(const wchar_t* programName, wstring& output);
	//
	// It calls a command line program.  The output produced by the program is stored in output.
	bool Execute(const wstring& programName, wstring& output);
	//
	void CloseProcessHandles();
	//
	static  const wchar_t* GetErrorDesc(HINSTANCE result);
	//
	// You may use this function by itself to run the default program that opens the specified file
	static bool OpenFile(const wchar_t* filename);
	//
	// You may use this function by itself to run the default program that opens the specified file
	static bool OpenFile(HWND hWnd, const wchar_t* filename);
	//
	// You may use this function by itself to run the default program that opens the specified file
	static bool OpenFile(const wchar_t* filename, const wchar_t* workingDirectory);
	//
	// You may use this function by itself to run the default program that opens the specified file
	static bool OpenFile(const wstring& filename);
	//
	// You may use this function by itself to run the default program that opens the specified file
	static bool OpenFile(const wstring& filename, const wstring& workingDirectory);
	// You may use this function by itself to run the default program that opens the specified file
	//
	static bool PrintFile(const wchar_t* filename);
	static bool PrintFile(const wchar_t* filename, const wchar_t* workingDirectory);
	static bool PrintFile(const wstring& filename);
	static bool PrintFile(const wstring& filename, const wstring& workingDirectory);
	//
	// You may use this function by itself to run Microsoft Internet Explorer
	static HWND OpenInternetExplorer(const wchar_t* url);
	//
	// You may use this function by itself to run Microsoft Internet Explorer
	static HWND OpenInternetExplorer(const wstring& url);
private:
	bool ExecuteWithNoPipes(const wchar_t* programName, const wchar_t* workingDirectory, const RECT& rectWindow);
};

//________________________________________ Sys::Install
// It provides functions to install software. It changes the Windows Registry and the File System
class Install
{
public:
	struct ProductInfo
	{
		bool allUsers;
		wchar_t *companyName;
		wchar_t *productName;  // (no spaces are allowed)
		unsigned int versionMayor;  // For Version 5.4 -> versionMayor = 5
		unsigned int versionMinor; // For Version 5.4 -> versionMinor = 4
		wchar_t *fileExtension;  //Required only for file association (starts with a dot followed by three letters)
		wchar_t *objectType;  //Required only for file association  (no spaces are allowed)
		wchar_t *objectDescription;  
		wchar_t *helpLink; //i.e. http://yahoo.com.mx
		wchar_t *description; //i.e. Provides templates to deploy applications
		unsigned int objectIconIndex; //Required only for file association i.e. 0, 1, etc.
	};
	Install(void);
	virtual ~Install(void);
	bool CanAccessRegistry();
	bool InstallSoftware(Sys::Install::ProductInfo& pi, Sys::IError& ierror);
	bool RemoveSoftware(Sys::Install::ProductInfo& pi, Sys::IError& ierror);
	wchar_t* CopyFileToApplicationFolder(Sys::Install::ProductInfo&pi, HINSTANCE hInst, int resourceId, const wchar_t* destinationFile);
	wchar_t *CopyFileTo(HINSTANCE hInst, int resource_id, const wchar_t* destinationFile);
	wchar_t *CopyDeleteFile(HINSTANCE hInst, int resource_id, const wchar_t* destinationFile, Sys::IError& ierror, bool isInstall);
	wchar_t* CopyFileToWindowsFolder(Sys::Install::ProductInfo&pi, HINSTANCE hInst, int resourceId, const wchar_t* destinationFile);
	bool CopyFileToApplicationFolder(Sys::Install::ProductInfo& pi, const wchar_t* sourceFile, const wchar_t* destinationFile);
	bool DeleteFileFromApplicationFolder(Sys::Install::ProductInfo& pi, const wchar_t* destinationFile);
	static bool RegistrySetStringValue(HKEY hkey, PCTSTR pszValueName, PCTSTR pszString);
	const wchar_t* RegistryReadString(HKEY hkey, LPCTSTR pszPathAndName, LPCTSTR pszValueName);
	const wchar_t* GetProgramFilesPath(void);
	const wchar_t* GetDesktopPath(void);
	const wchar_t* GetMyDocumentsPath(void);
	const wchar_t* GetStartupMenuProgramsPath(void);
	const wchar_t* GetCurrentDirectory_(void);
	const wchar_t* GetDestinationDirectory(const wchar_t* productName);
	const wchar_t* GetWindowsFolder();
	//
	//Sys::Install::CreateShortCut(L"C:\\Program Files\\Corel\\Corel Graphics 12\\Programs\\CorelPP.exe", L"Photo Paint", L"C:\\PhotPaint.lnk", L"C:\\Program Files\\Corel\\Corel Graphics 12\\Programs\\CorelPP.exe", 0);
	//Sys::Install::CreateShortCut(L"C:\\Program Files\\Corel\\Corel Graphics 12\\Programs\\CorelPP.exe", L"Photo Paint", L"C:\\PhotPaint.lnk", L"C:\\Program Files\\", NULL, 0);
	static bool CreateShortCut(const wchar_t* destinationFilename,  const wchar_t* description, 
		const wchar_t* shortcutFilename, const wchar_t* workingDirectory, const wchar_t* filenameIco_exe, int iIcon);
	bool InstallSoftware1(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool InstallSoftware2(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool InstallSoftware3(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool InstallSoftware4(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall, const wchar_t* fileNameIco_exe, int iIcon);
	bool InstallSoftware5(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool InstallSoftware6(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool ApplicationFolder(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool ApplicationShortcut(Sys::Install::ProductInfo& pi, Sys::IError& ierror, bool isInstall);
	bool RemoveShortcut(const wchar_t* productName);
private:
	wchar_t buffer[SYS_INSTBUFF];
};

//_____________________________________________________________________ Sys::RegistryKey
// It provides support to read and modify the Windows Registry
class RegistryKey
{
public:
	RegistryKey();
	~RegistryKey();
	//
	// parentKey: HKEY_LOCAL_MACHINE, HKEY_CURRENT_USER, HKEY_CLASSES_ROOT
	// access: KEY_READ, KEY_WRITE, KEY_SET_VALUE, KEY_CREATE_SUB_KEY, KEY_EXECUTE, KEY_ALL_ACCESS
	// keyName must be NULL to open: HKEY_LOCAL_MACHINE, HKEY_CURRENT_USER, HKEY_CLASSES_ROOT
	bool Open(HKEY parentKey, const wchar_t* keyName, REGSAM access);
	bool OpenClasesRoot(REGSAM access);
	//
	// access: KEY_READ, KEY_WRITE, KEY_SET_VALUE, KEY_CREATE_SUB_KEY, KEY_EXECUTE, KEY_ALL_ACCESS
	bool Open(Sys::RegistryKey& parentKey, const wchar_t* keyName, REGSAM access);
	//
	// access: KEY_READ, KEY_WRITE, KEY_SET_VALUE, KEY_CREATE_SUB_KEY, KEY_EXECUTE, KEY_ALL_ACCESS
	bool CreateSubKey(const wchar_t* childKeyName, REGSAM access, Sys::RegistryKey& out_subKey);
	bool Close();
	//
	// The value is returned in buffer, name must be L"" or NULL to read the default value
	// The key MUST be open using: KEY_READ
	bool ReadStringValue(const wchar_t* name, wchar_t* buffer, unsigned long buffer_size);
	//
	// name must be L"" or NULL to set the default value
	bool RegistryKey::SetValue(const wchar_t* name, const wchar_t* value);
	//
	// name must be L"" or NULL to set the default value
	bool RegistryKey::SetValue(const wchar_t* name, const DWORD value);
	//
	// name must be L"" or NULL to set the default value
	bool RegistryKey::DeleteSubKey(const wchar_t* name);
	//
	// wchar_t * buffer[256];
	// int i = 0;
	// while (key.Enumerate(i++, buffer, 256) == true)
	//{
	//}
	bool Enumerate(int index, wchar_t* buffer, DWORD buffer_size);
private:
	HKEY _hkey;
};

//_____________________________________________________________________ Sys::Key
class Key
{
public:
	Key(HKEY type, Sys::IError& ierror); //HKEY_LOCAL_MACHINE, HKEY_CURRENT_USER, HKEY_CLASSES_ROOT
	Key(HKEY type); 
	~Key(void);
	bool Create(wchar_t* name);
	bool Open(wchar_t* name);
	bool Open(wchar_t* name, REGSAM access); //KEY_READ, KEY_WRITE, KEY_SET_VALUE, KEY_CREATE_SUB_KEY, KEY_EXECUTE, KEY_ALL_ACCESS
	bool Close();
	bool Set(wchar_t* name, wchar_t* value);// To set the default use L"" or NULL in the name
	bool DeleteSubkey(wchar_t* name);// To delete the default use L"" or NULL in the name
	bool Set(wchar_t* name, DWORD value);// To set the default use L"" or NULL in the name
	wchar_t* ReadStringValue(const wchar_t* valueName);
	wchar_t* Enumerate(int index);
private:
	HKEY type;
	HKEY hkey;
	wchar_t name[SYS_INSTBUFF];
	Sys::IError * ierror;
};

//bool WizEnd::InstallSoftware(void)
//{
//	Sys::Install setup;
//	Sys::Install::ProductInfo pi;
//	::memset(&pi, 0, sizeof(Sys::Install::ProductInfo));
//	pi.allUsers =true;
//	pi.companyName =_T("Sergio Ledesma");
//	pi.fileExtension = NULL;  //_T(".txs");
//	pi.objectDescription = NULL;  //_T("Sergio object");
//	pi.objectType = NULL; //_T("SergioObject");
//	pi.productName = _T("Wintempla");
//	pi.versionMayor = 1;
//	pi.versionMinor = 0;
//	pi.helpLink = _T("http://www.fimee.ugto.mx");
// pi.objectIconIndex = 1;  // Edit the resource.h and Product.rc files, 0 is the proyect icon, 1 is the second icon in these files
//   To know the icon index you can create a shortcut and change the icon using the Product.exe file
//
//	const wchar_t *error = setup.InstallSoftware(pi);
//	if (error) 
//	{
//		this->MessageBox(error, _T("WizEnd::InstallSoftware"), MB_OK | MB_ICONERROR);
//	}
//	else
//	{
//		setup.CopyFileToApplicationFolder(pi, _T("Wintempla.ex_"), _T("Wintempla.exe"));
//		setup.CopyFileToApplicationFolder(pi, _T("Wintempla.ch_"), _T("Wintempla.chm"));
//	}
//
//	return true;
//}
//_____________________________________________________________________ Sys::FileDirectory
// It allows listing the contents of a folder
class FileDirectory
{
public:
	static int GetFileList(const wchar_t* path, Sys::IListFileDirectory* ilfd);

	//vector<_tfinddata_t> filelist;
	//Sys::FileDirectory::GetFileList(L"C:\\*.txt", filelist);
	// use the macros ISFOLDER(x), ISFILE(x) and EXCLUDE_FILE(x)
	static int GetFileList(const wchar_t* path, vector<_tfinddata_t>& out_filelist);
	//
	// path: L"C:\\Users\\John"
	// filter: L"*.txt"
	// fileList vector<Sys::FileInfo>
	static int GetFileListRecursive(const wchar_t* path, const wchar_t* filter, Sys::IListFileDirRecursive* ilfd);
	//
	// path: L"C:\\Users\\John"
	// filter: L"*.txt"
	// fileList vector<Sys::FileInfo>
	static int GetFileListRecursive(const wchar_t* path, const wchar_t* filter, vector<Sys::FileInfo>& fileList);
	static bool IsDirectory(_tfinddata_t& fd);
	static bool CopyFolderStructure(const wchar_t* sourcePath, const wchar_t* destinationPath); 
	static bool DeleteFolder(const wchar_t* folder);
	static bool IsDriveAvailable(wchar_t drive); // drive: A, B, C, D, ...
	static void GetDrivesInformation(vector<Sys::DriveInformation>& output);
	//
	static bool WildcardMatch(wchar_t* pattern, wchar_t* input);
	//
	// It create a directory (folder) #CreateDirectory+Win32+GDI
	static bool CreateFolder(const wchar_t* pathName);
};


//_____________________________________________________________________ Sys::Time
// It provides support to manage Time
class Time : public SYSTEMTIME
{
public:
	Time();
	Time(SYSTEMTIME st);
	~Time();
	Time(const Sys::Time& init);
	Time& operator=(const Sys::Time& init);
	void SetToLocalTime();
	void SetToUtcTime();
	void Set(int day, int month, int year, int hour, int minute, int second, int milliseconds);

	//Since January 1, 1601.
	double GetSeconds() const ;
	Sys::Time& AddSeconds(double seconds);
	Sys::Time& AddMinutes(double minutes);
	Sys::Time& AddHours(double hours);
	Sys::Time& AddDays(double days);

	static Sys::Time Now();
	
	bool operator==(const Sys::Time& st) const;
	bool operator!=(const Sys::Time& st) const;
	bool operator<(const Sys::Time& st) const;
	bool operator<=(const Sys::Time& st) const;
	bool operator>(const Sys::Time& st) const;
	bool operator>=(const Sys::Time& st) const;
};

//_____________________________________________________________________ Sys::SqlTime
class SqlTime
{
public:
	SqlTime();
	~SqlTime();
	WORD year;
	WORD month;
	WORD day;
	WORD hour;
	WORD minute;
	WORD second;
	WORD milliseconds;
	WORD empty;
	operator Sys::Time&();
private:
	Sys::Time systime;
};

//_____________________________________________________________________ Sys::IDateTime
class IDateTime : public Sys::IObject, public Sys::ISelectTime
{
public:
	virtual Sys::Time GetSelectedDateTime() = 0;
	virtual bool SetSelectedDateTime(Sys::Time& systime) = 0;
	__declspec( property( get=GetSelectedDateTime, put=SetSelectedDateTime) ) Sys::Time SelectedDateTime;
	//
	virtual bool GetCurrentSelection(int& month, int& day, int& year) = 0;
	virtual bool SetCurrentSelection(int month, int day, int year) = 0;
};

//_____________________________________________________________________ Sys::LowResStopwatch
// It measures duration
class LowResStopwatch
{
public:
	LowResStopwatch();
	~LowResStopwatch();
	void Start();
	double GetSeconds();
private:
	Sys::Time start;
};

//______________________________________________________________________ Sys::EMail
// It stores an email
class EMail
{
public:
	EMail()
	{
		isHtmlFormat = false;
		sent = false;
	}
	~EMail()
	{
	}
	wstring fromName;
	wstring fromEmail;
	wstring toName;
	wstring toEmail;
	wstring subject;
	wstring body;
	wstring attachmentFileName;
	bool isHtmlFormat;
	bool sent;
};

#ifdef WIN_SOCKETS_SUPPORT

//_____________________________________________________________________ Sys::SecurityCertificate
class SecuritySupportProvider;
class SecurityCertificate
{
public:
	SecurityCertificate();
	~SecurityCertificate();
	void GetDisplayInfo(bool isLocal, wstring& out_displayInfo);
	//
	int Verify(const wchar_t* serverName, DWORD certFlags);
	const wchar_t* GetErrorDesc(int error);
private:
	void Clear();
	PCCERT_CONTEXT certContext;
	friend class SecuritySupportProvider;
};
//_____________________________________________________________________ Sys::SecuritySupportProvider
class SecuritySupportProvider
{
public:
	SecuritySupportProvider();
	~SecuritySupportProvider();
	//
	int Send(Sys::IChannel& ichannel, const char* data, int dataLength);
	int Send(Sys::IChannel& ichannel, const char* data);
	//
	//
	SECURITY_STATUS Receive(Sys::IChannel& ichannel, string& data);
	int ExtractCode(const string& data);
	int ReceiveCode(Sys::IChannel& ichannel);
	int ReceiveCode(Sys::IChannel& ichannel, string& response);
	//
	SECURITY_STATUS GetCertificate(Sys::SecurityCertificate& certificate);
	void GetConnectionInfo(wstring& out_connectionInfo);
	//
	// protocol: SP_PROT_TLS1, SP_PROT_PCT1, SP_PROT_SSL2, SP_PROT_SSL3
	// keyExchange: 0, CALG_RSA_KEYX, CALG_DH_EPHEM, ...
	SECURITY_STATUS CreateCredentials(const wchar_t* username, DWORD protocol, ALG_ID keyExchange);
	//
	// protocol: SP_PROT_TLS1, SP_PROT_PCT1, SP_PROT_SSL2, SP_PROT_SSL3
	// keyExchange: 0, CALG_RSA_KEYX, CALG_DH_EPHEM, ...
	SECURITY_STATUS CreateCredentials(DWORD protocol, ALG_ID keyExchange);
	//
	// protocol: SP_PROT_TLS1, SP_PROT_PCT1, SP_PROT_SSL2, SP_PROT_SSL3
	SECURITY_STATUS CreateCredentials(DWORD protocol);
	//
	SECURITY_STATUS ClientHandshake(Sys::IChannel& ichannel, const wchar_t* serverName);
	//
	static const wchar_t* GetErrorDescr(SECURITY_STATUS status);
	SECURITY_STATUS DisconnectFromServer(Sys::IChannel& ichannel);
private:
	SecurityFunctionTable * securityFunctionTable;
	HCERTSTORE hCertStore;
	CredHandle credHandle;
	bool isCredHandleValid;
	void Clear();
	CtxtHandle ctxtHandle;
	bool isCtxtHandleValid;
	SECURITY_STATUS ClientHandshakeLoop(Sys::IChannel& ichannel, SecBuffer& extraData);
	void GetNewClientCredentials();
	SECURITY_STATUS CreateInputOutputBuffer();
	int inputOutputBufferLength;
	SecPkgContext_StreamSizes sizes; 
	PBYTE inputOutputBuffer;
	//SecBuffer *pDataBuffer;
};

//______________________________________________________________________ Sys::Socket
class Socket : public Sys::IChannel
{
public:
	Socket(void);
	virtual ~Socket(void);
	void Attach(SOCKET& inputSocket, unsigned int port);
	char* GetStatus();
	char* GetVersion();
	int GetMaxMessageSize();
	//
	// It establishes a connection to a specified socket
	// If no error occurs, it returns zero.
	// If error occurs, it returns SOCKET_ERROR call socket.GetLastErrorDesc() to get error description
	int Connect(SOCKADDR_IN& sockAddr);
	//
	// It establishes a connection to a specified socket
	// If no error occurs, it returns zero.
	// If error occurs, it returns SOCKET_ERROR call socket.GetLastErrorDesc() to get error description
	int Connect(unsigned short port, const wchar_t* ipAddress);
	//
	// It establishes a connection to a specified socket
	// If no error occurs, it returns zero.
	// If error occurs, it returns SOCKET_ERROR call socket.GetLastErrorDesc() to get error description
	int Connect(const wchar_t* serverName, unsigned short port);
	//
	// It establishes a connection to a specified socket
	// If no error occurs, it returns zero.
	// If error occurs, it returns SOCKET_ERROR call socket.GetLastErrorDesc() to get error description
	int Connect(const wstring& serverName, unsigned short port);
	//
	// Asyncronous connect, it will send WM_SOCKETNOTIFY to hWnd
	wchar_t* ConnectAsync(HWND hWnd, SOCKADDR_IN& sockAddr);
	//
	// Asyncronous connect, it will send WM_SOCKETNOTIFY to hWnd
	wchar_t* ConnectAsync(HWND hWnd, unsigned short port, const wchar_t* ipAddress);
	//
	 // Asyncronous connect, it will send WM_SOCKETNOTIFY to hWnd
	wchar_t* ConnectAsync(HWND hWnd, const wchar_t* serverName, unsigned short port);
	wchar_t* ConnectAsyncServer(HWND hWnd, unsigned short port, int numbClients);
	wchar_t* StartServer(unsigned short port, int numbClients);
	wchar_t* ConnectAsyncClient(HWND hWnd, unsigned short port, const wchar_t* ipAddress);
	//
	// It disables sends on a socket #Win32+socket+shutdown
	void ShutdownSend();
	//
	// It disables receives on a socket #Win32+socket+shutdown
	void ShutdownReceive();
	//
	// It disables both sends and receives on a socket #Win32+socket+shutdown
	void ShutdownBoth();
	//
	// It closes an existing socket #Win32+socket+closesocket
	virtual void Disconnect();
	//
	// It permits an incoming connection attempt on a socket. If no error occurs,
	// it returns a value of type SOCKET that is a descriptor for the new socket.
	// This returned value is a handle for the socket on which the actual connection is made.
	// Otherwise, a value of INVALID_SOCKET is returned, and a specific error code can be 
	// retrieved by calling Sys::GetLastErrorInformation #Win32+socket+accept
	SOCKET Accept();
	//
	// It breaks the data into small blocks and send each block until all data have been sent.  
	// If out_socketStatus.isError is true, call socket.GetLastErrorDesc() to get error description
	// blockSize: 1024, 2048, ... , 8192 #Win32+socket+send
	void SendLargeBlock(Sys::SocketStatus& out_socketStatus, const char *data, int totalBytes, const int blockSize);
	//
	// It returns: the total number of bytes sent, SOCKET_DISCONNECTED, or SOCKET_ERROR
	// If SOCKET_ERROR is returned, you may call socket.GetLastErrorDesc() to get error description.
	// BE AWARE that this function will send data until the NULL character is found #Win32+socket+send
	int Send(const char *buffer);
	//
	// It returns: the total number of bytes sent, SOCKET_DISCONNECTED, or SOCKET_ERROR
	// If SOCKET_ERROR is returned, you may call socket.GetLastErrorDesc() to get error description. #Win32+socket+send
	int Send(const char *buffer, int bufferSize, int flags);
	//
	//
	// It returns: the total number of bytes received, SOCKET_DISCONNECTED, or SOCKET_ERROR
	// If SOCKET_ERROR is returned, you may call socket.GetLastErrorDesc() to get error description. #Win32+socket+recv
	int Receive(char* buffer, int bufferSize, int flags);
	//
	// Returns the first number in the line received #Win32+socket+recv
	int ReceiveCode();
	//
	int ReceiveCodeAsync();
	//
	// It receives until it finds \r\n
	// If out_socketStatus.isError is true, call socket.GetLastErrorDesc() to get error description #Win32+socket+recv
	void ReceiveLine(Sys::SocketStatus& out_socketStatus, string& output);
	//
	LPHOSTENT GetHostByName(const wchar_t* serverName);
	LPSTR GetIpAddressByName(const wchar_t* serverName);
	int GetServicePortByName(const wchar_t* serviceName);
	//
	operator SOCKET();
	static void RemoveReturn(char* text);
	static const wchar_t* GetErrorDescr(WORD error);
	const wchar_t* GetLastErrorDesc();
	//_____________________________________________________________________ Sys::IStorer
	// returns the actual number of bytes that were read, or -1 if error
	int Read(void *out_buffer, int bufferSizeInBytes);  
	//
	// returns the actual number of bytes that were written, or -1 if error
	int Write(const void* in_buffer, int bufferSizeInBytes); 
	//_____________________________________________________________________ Sys::IChannel
	// returns the actual number of bytes that were received, or -1 if error
	int Receive(char *out_buffer, int bufferSizeInBytes);
	//
	// returns the actual number of bytes that were sent, or -1 if error	
	int Send(const char* inbuffer, int bufferSizeInBytes);
	//
	int GetPortNumber();
protected:
	static WSADATA wsadata;
	SOCKET hsocket;
private:
	int _portNumber;
	static int objectCount;
	int _error;
};

#endif

//_____________________________________________________________________ Sys::Brushes
class Brushes
{
public:
	static HBRUSH WhiteBrush();
	static HBRUSH DkGrayBrush();
	static HBRUSH HollowBrush();
	static HBRUSH LtGrayBrush();
	static HBRUSH GrayBrush();
	static HBRUSH BlackBrush();
	static HBRUSH NullBrush();
};

//_____________________________________________________________________ Sys::Colors
// It provides access to the standard color used in the computer
class Colors
{
public:
	static COLORREF WindowColor();
	static COLORREF ActiveBorderColor();
	static COLORREF ActiveCaptionColor();
	static COLORREF AppWorkspaceColor();
	static COLORREF BackgroundColor();
	static COLORREF BtnFaceColor();
	static COLORREF BtnShadowColor();
	static COLORREF BtnTextColor();
	static COLORREF BtnHighLightColor();
	static COLORREF ThreeDDkShadowColor();
	static COLORREF ThreeDLightColor();
	static COLORREF InfoTextColor();
	static COLORREF InfoBkColor();
	static COLORREF CaptionTextColor();
	static COLORREF InactiveCaptionTextColor() ;
	static COLORREF GrayTextColor();
	static COLORREF HighLightColor();
	static COLORREF HighLightTextColor();
	static COLORREF InactiveBorderColor();
	static COLORREF InactiveCaptionColor() ;
	static COLORREF MenuColor();
	static COLORREF MenuTextColor();
	static COLORREF ScrollbarColor();
	static COLORREF WindowFrameColor();
	static COLORREF WindowTextColor();
	static COLORREF HotLightColor();
	static COLORREF GradientActiveCatpionColor();
	static COLORREF GradientInactiveCaptionColor();
};

//_____________________________________________________________________ Sys::Metrics
// It provides system information about the computer
class Metrics
{
public:
	static int GetMinimizedWindowType();
	static int GetSystemStartedType(); //0 Normal boot,1 Fail-safe boot, 2 Fail-safe with network boot
	static int GetMonitorCount();
	static int GetMouseButtonsCount();
	static int GetWindowBorderWidth();
	static int GetWindow3DBorderWidth();
	static int GetCursorWidth();
	static int GetDoubleClickWidth();
	static int GetDragWidth();
	static int GetFixedFrameThickness();
	static int GetFocusBorderWidth();
	static int GetFullScreenWidth();
	static int GetScreenWidth();
	static int GetHScrollWidth();
	static int GetHScrollThumbWidth();
	static int GetIconWidth();
	static int GetIconSpacingWidth();
	static int GetMaximinizedWindowWidth();
	static int GetMaxTrackWidth();
	static int GetMenuCheckWidth();
	static int GetMenuWidth();
	static int GetMinWindowWidth();
	static int GetMinimizedWindowWidth();
	static int GetMinSpacingWidth();
	static int GetMinTrackWidth();
	//static int GetPaddedBorderWidth();
	static int GetTitleBarButtonWidth();
	static int GetSizeFrameWidth();
	static int GetSmallIconWidth();
	static int GetSmallCaptionButtonWidth();
	static int GetVirtualScreenWidth();
	static int GetVScrollWidth();
	static int GetWindowBorderHeight();
	static int GetWindow3DBorderHeight();
	static int GetCaptionHeight();
	static int GetCursorHeight();
	static int GetDlgFrameHeight();
	static int GetDoubleClickHeight();
	static int GetDragHeight();
	static int GetFixedFrameHeight();
	static int GetFocusBorderHeight();
	static int GetFullScreenHeight();
	static int GetHScrollHeight();
	static int GetIconHeight();
	static int GetIconSpacingHeight();
	static int GetKanjiWindowHeight();
	static int GetMaximinzedWindowHeight();
	static int GetMaxTrackHeight();
	static int GetMenuHeight();
	static int GetMenuCheckHeight();
	static int GetMenuSizeHeight();
	static int GetMinWindowHeight();
	static int GetMinimizedWindowHeight();
	static int GetMinSpacingHeight();
	static int GetMinTrackHeight();
	static int GetScreenHeight();
	static int GetTitleBarHeight();
	static int GetSizeFrameHeight();
	static int GetSmallCaptionHeight();
	static int GetSmallIconHeight();
	static int GetSmallCaptionButtonHeight();
	static int GetVirtualScreenHeight();
	static int GetVScrollHeight();
	static int GetVScroolThumbHeight();
	static bool IsShuttingDown();
	static void GetTextMetricsFromDisplay(const wchar_t* fontname, int fontsize, TEXTMETRIC& result);
	static void GetTextMetricsFromDisplay(const wstring& fontname, int fontsize, TEXTMETRIC& result);
	static void GetTextMetricsFromDisplay(TEXTMETRIC& result);
	static bool GetLanguage(wchar_t* buffer, int buffer_size);
	static bool IsEnglishLanguage();
	static bool IsFrenchLanguage();
	static bool IsGermanLanguage();
	static bool IsSpanishLanguage();
	static bool IsLanguage(wchar_t char2, wchar_t char3);
};

//_____________________________________________________________________ Sys::BinarySearch
template <class type> int BinarySearch(type data[], type value, int left, int right) 
{
	int middle;
	while (left <= right)
	{
		middle = (left + right) / 2;
		if (data[middle] == value)
			return middle;
		else if (data[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return -left;
}

//_____________________________________________________________________ Sys::Array
template <typename T> class Array
{
public:
	Array()
	{
		_size = 0;
		_reserved = 4;
		_data = new T[_reserved];
		//__________________________
		if (_data == NULL) _reserved = 0;
	}

	explicit Array(int size)
	{
		_size = 0;
		_reserved = 0;
		_data = NULL;
		//__________________________
		SetSize(size);
	}

	Array(const Array& init) //Copy constructor
	{
		_size = 0;
		_reserved = 0;
		_data = NULL;
		Copy(init);
	}

	Array<T>& operator=(const Array& init) // Assignment operator
	{
		if (&init == this) return *this;
		Delete();
		Copy(init);
		return *this;
	}

	virtual ~Array()
	{
		Delete();
	}

	void Delete(void)
	{
		if (_data != NULL) delete[] _data;
		//__________________________
		_size = 0;
		_reserved = 0;
		_data = NULL;
	}

	bool SetSize(int size)
	{
		if (size <= 0)
		{
			Delete();
			return true;
		}
		if (_reserved == size)
		{
			_size = size;
		}
		else
		{
			Delete();
			_data = new T[size];
			if (_data == NULL) return false;
			_size = size;
			_reserved = size;
		}
		return true;
	}

	int GetSize()
	{
		return _size;
	}

	bool Reserve(int size)
	{
		_size = 0;
		if (_reserved <= 0)
		{
			Delete();
			return true;
		}
		if (_reserved == size) return true; // Nothing to do
		if (_data != NULL) delete [] _data;
		_data = new T[size];
		if (_data == NULL)
		{
			_reserved = 0;
			return false;
		}
		_reserved = size;
		return true;
	}

	void Set(int index, const T& value)
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		_data[index] = value;
	}

	T& Get(int index)
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		return _data[index];
	}

	T& operator[](int index) // Subscript operator
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		return _data[index];
	}

	const T& operator[](int index) const// Subscript operator
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		return _data[index];
	}

	void Insert(int index, const T& value)
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		int i, j;
		//______________________________ Grow
		if (_size + 1 > _reserved)
		{
			_reserved = (int)(_reserved*1.5+0.5);
			T* p = new T[_reserved];
			if (p == NULL) return false;
			//_____________________________ Copy
			for(i = 0, j = 0; i < _size; i++)
			{
				if (i == index) p[j++] = value;
				p[j++] = _data[i];
			}
			//_____________________________ Change pointer
			delete [] _data;
			_data = p;
		}
		else
		{
			for (int i = 0; i<size - index - 1; i++) _data[size - 1 - i] = _data[size - 1 - i - 1];
			_data[index] = value;
		}
		_data[_size] = value;
		_size++;
		return true;
	}

	bool InsertAtEnd(const T& value)
	{
		//______________________________ Grow
		if (_size + 1 > _reserved)
		{
			_reserved = (int)(_reserved*1.5+0.5);
			T* p = new T[_reserved];
			if (p == NULL) return false;
			//_____________________________ Copy
			for(int i = 0; i < _size; i++) p[i] = _data[i];
			//::memcpy(p, _data, sizeof(T)*_size);
			//_____________________________
			delete [] _data;
			_data = p;
		}
		_data[_size] = value;
		_size++;
		return true;
	}

	void Erase(int index)
	{
#ifdef _DEBUG
		if (index < 0) throw out_of_range ("Invalid negative index");
		if (index >= _size) throw out_of_range("Index too large");
#endif
		if (index == _size -1)
		{
			EraseLastOne();
			return;
		}
		for(int i = index; i < _size; i++)
		{
			_data[index] = _data[index + 1];
		}
		_size -= 1;
		return;
	}

	void EraseLastOne()
	{
		if (_size > 0) _size--;
	}

	//bool Resize(int newSize)
	//{
	//	if (_size == newSize) return true;
	//	T* p = new T[_newSize];
	//	if (p == NULL) return false;
	//	if (newSize < size) // shrink
	//	{
	//		::memcpy(p, _data, newSize*sizeof(T));
	//	}
	//	else // expand
	//	{
	//		memcpy(p, _data, size*sizeof(T));
	//		::memset(&p[size], 0, (newSize - size)*sizeof(T));
	//	}
	//	Delete();
	//	_data = p;
	//	size = newSize;
	//	return true;
	//}

	//bool SaveToFile(HANDLE hFile)
	//{
	//	DWORD toWrite = sizeof(int);
	//	DWORD written;
	//	//_____________________________ write size
	//	::WriteFile(hFile, &_size, toWrite, &written, NULL);
	//	if (toWrite != written) return false;
	//	//
	//	if (_size == 0 || _data == NULL) return true;
	//	//_____________________________ write data
	//	toWrite = _size*sizeof(T);
	//	::WriteFile(hFile, _data, toWrite, &written, NULL);
	//	if (toWrite != written) return false;
	//	return true;
	//}

	//bool CreateFromFile(HANDLE hFile)
	//{
	//	Delete();
	//	DWORD toRead = sizeof(int);
	//	DWORD read;
	//	int new_size;
	//	//_____________________________ read size
	//	::ReadFile(hFile, &new_size, toRead, &read, NULL);
	//	if (toRead != read) return false;
	//	if (new_size == 0) return true;
	//	if (SetSize(new_size) == false) return false;
	//	//_____________________________ read data
	//	toRead = _size*sizeof(T);
	//	::ReadFile(hFile, _data, toRead, &read, NULL);
	//	if (toRead != read) return false;
	//	return true;
	//}

protected:
	void Copy(const Array& init)
	{
		if (init._data == NULL) return; // Nothing to copy
		//_____________________________
		_data = new T[init._reserved];
		if (_data == NULL)
		{
			_size = 0;
			_reserved = 0;
		}
		else
		{
			_size = init._size;
			_reserved = init._reserved;
			//::memcpy(_data, _init._data, size*sizeof(T));
			for(int i = 0; i < _size; i++)
			{
				_data[i] = init._data[i];
			}
		}
	}
	int _size;
	int _reserved;
	T* _data;
	
	//bool CheckMemory(int increaseCount)
	//{
	//	bool increaseSize = false;
	//	while(_reserved < _size + increaseCount)
	//	{
	//		_reserved = (int)(_reserved*1.5+0.5);
	//		increaseSize = true;
	//	}
	//	if (increaseSize == false) return true;
	//	T * p = new T[capacity];
	//	if (p == NULL) return false;
	//	memcpy(p, data, size*sizeof(T));
	//	lstrcpy(p, m_psz);
	//	delete [] data;
	//	data = p;
	//	return true;
	//}
};

//Sys::Array<double> a(10);
//    //a.SetSize(20);
//for(int i=0; i<10; i++)
//{
//	a[i]= 2.5*i;
//	this->MessageBox_(a[i]);
//}

//_____________________________________________________________________ Sys::Matrix
template <class T> class Matrix
{
public:
	Matrix()
	{
		data = NULL;
		_rowCount = 0;
		_colCount = 0;
	}
	Matrix(int rowCount, int colCount)
	{
		data = NULL;
		_rowCount = 0;
		_colCount = 0;
		this->Create(rowCount, colCount);
	}
	Matrix(const Matrix& init)
	{
		data = NULL;
		_rowCount = 0;
		_colCount = 0;
		this->Create(init._rowCount, init._colCount);
		if (data)
		{
			const size_t byteRowCount = _colCount*sizeof(T);
			for (int i = 0; i < _rowCount; i++)
			{
				::memcpy(data[i], init.data[i], byteRowCount);
			}
		}
	}
	~Matrix()
	{
		Delete();
	}
	Matrix& operator=(const Matrix& init)
	{
		if (_rowCount == 0 && init._rowCount == 0) return *this;
		if (_colCount == 0 && init._colCount == 0) return *this;
		if (Create(init._rowCount, init._colCount) == false) return *this;
		const size_t byteRowCount = _colCount*sizeof(T);
		for (int i = 0; i < _rowCount; i++) ::memcpy(data[i], init.data[i], byteRowCount);
		return *this;
	}

	bool Create(int rowCount, int colCount)
	{
		if (rowCount == 0 || colCount == 0)
		{
			Delete();
			return true;
		}
		if (rowCount == _rowCount && colCount == _colCount)
		{
			this->SetToZero();
			return true;
		}
		Delete();
		data = new T*[rowCount];
		if (data == NULL) return false;
		for (int i = 0; i< rowCount; i++)
		{
			data[i]=new T[colCount];
			if (data[i] == NULL) return false;
		}
		_rowCount = rowCount;
		_colCount = colCount;
		this->SetToZero();
		return true;
	}

	bool LoadFromFile(HANDLE hFile)
	{
		DWORD dwRead;
		DWORD dwToRead;
		int numRows, numCols;
		//_______________________________________Read the number of rows
		dwToRead = sizeof(int);
		::ReadFile(hFile, &numRows, dwToRead, &dwRead, NULL);
		if (dwToRead != dwRead) return false;
		//_______________________________________Read the number of cols
		::ReadFile(hFile, &numCols, dwToRead, &dwRead, NULL);
		if (dwToRead != dwRead) return false;
		
		if (numRows == 0 || numCols == 0)
		{
			Delete();
			return true;
		}
		if (this->Create(numRows, numCols)==false) return false;
		//_______________________________________Read data
		dwToRead = _colCount*sizeof(T);
		for (int i = 0; i < _rowCount; i++)
		{
			::ReadFile(hFile, data[i], dwToRead, &dwRead, NULL);
			if (dwToRead != dwRead) return false;
		}
		return true;
	}
	bool SaveToFile(HANDLE hFile)
	{
		DWORD dwWritten;
		DWORD dwWrite;
		//_______________________________________Write the number of rows
		dwWrite = sizeof(int);
		::WriteFile(hFile, &_rowCount, dwWrite, &dwWritten, NULL);
		if (dwWrite!=dwWritten) return false;
		//_______________________________________Write the number of columns
		::WriteFile(hFile, &_colCount, dwWrite, &dwWritten, NULL);
		if (dwWrite!=dwWritten) return false;
		//_______________________________________Write data
		dwWrite = _colCount*sizeof(T);
		for (int i = 0; i < _rowCount; i++)
		{
			::WriteFile(hFile, ppData[i], dwWrite, &dwWritten, NULL);
			if (dwWrite!=dwWritten) return false;
		}
		return true;
	}
	int GetColCount()
	{ 
		return _colCount; 
	}
	int GetRowCount()
	{ 
		return this->rowCount; 
	}
	void SetToZero(void)
	{
		if (data)
		{
			int i, j;
			for (i = 0; i < _rowCount; i++)
			for (j = 0; j < _colCount; j++)
				::memset(data[i], 0, sizeof(T));
		}
	}
	void Delete()
	{
		if (data != NULL)
		{
			for (int i = 0; i < _rowCount; i++) if (data[i] != NULL) delete[] data[i];
			_rowCount = 0;
			_colCount = 0;
			delete[] data;
			data=NULL;
		}
	}
	T GetMaximum()
	{
		if (_rowCount <= 0) return 0;
		if (_colCount <= 0) return 0;
		int i, j;
		T maximum = data[0][0];
		T value;
		for (i = 0; i < _rowCount; i++)
		{
			for (j = 0; j < _colCount; j++)
			{
				value = data[i][j];
				if (value > maximum) maximum = value;
			}
		}
		return maximum;
	}
	T GetMinimum()
	{
		if (_rowCount <= 0) return 0;
		if (_colCount <= 0) return 0;
		int i, j;
		T minimum = data[0][0];
		T value;
		for (i = 0; i < _rowCount; i++)
		{
			for (j = 0; j < _colCount; j++)
			{
				value = data[i][j];
				if (value < minimum) minimum = value;
			}
		}
		return minimum;
	}
	bool ExpandColumns(int newColCount)
	{
		if (newColCount == _colCount) return true;
		int i, j;
		double* p;
		const size_t byteRowCount = colCount*sizeof(T);
		for (i = 0; i < _owCount; i++)
		{
			if (data[i])
			{
				p = new T[newColCount];
				if (p == NULL) return false;
				::memcpy(p, data[i], byteRowCount);
				delete[] data[i];
				data[i] = p;
			}
		}
		for (i = 0; i < _rowCount; i++)
		{
			for (j = colCount; j < newColCount; j++) data[i][j] = 0.0;
		}
		_colCount = newColCount;	
		return true;
	}
//	//
	//It indicates if memory allocation was successful
	bool IsOk()
	{
		if (data == NULL) return false;
		for (int i = 0; i < _rowCount; i++)
		{
			if (data[i]==NULL) return false;
		}
		return true;
	}
#ifdef _DEBUG
	class Row
	{
	public:
		Row(){ _colCount = 0; data = NULL; };
		~Row(){};
		inline T& operator[](int col)
		{
			if (col < 0 || col >= _colCount) throw std::out_of_range("Sys::Matrix::Row::operator[] invalid column");
			return data[col];
		}
		inline T& operator[](int col) const
		{
			if (col < 0 || col >= _colCount) throw std::out_of_range("Sys::Matrix::Row::operator[] invalid column");
			return data[col];
		}
	private:
		int _colCount;
		T *data;
		friend class Sys::Matrix;
	};
#else
	inline T* operator[](int row)
	{
		return data[row];
	}
#endif

	inline T* GetRow(int row)
	{
#ifdef _DEBUG
		if (row < 0 || row >= _rowCount) throw std::out_of_range("Sys::Matrix::operator[] invalid row");
#endif
		return data[row];
	}

#ifdef _DEBUG
	//inline Data::Matrix::Row& operator[](int row)
	inline Row& operator[](int row)
	{
		if (row < 0 || row >= _rowCount) throw std::out_of_range("Sys::Matrix::operator[] invalid row");
		this->row._colCount = _colCount;
		this->row.data = data[row];
		return this->row;
	}
#endif

	inline void Set(int row, int col, T value)
	{
#ifdef _DEBUG
		if (row < 0 || row >= _rowCount || col < 0 || col >= _colCount)
			throw std::out_of_range("Sys::Matrix::Set invalid row or col");
#endif
		data[row][col] = value;
	}

	inline T Get(int row, int col)
	{
#ifdef _DEBUG
		if (row < 0 || row >= _rowCount || col < 0 || col >= _colCount)
			throw std::out_of_range("Sys::Matrix::Get invalid row or col");
#endif
		return data[row][col];
	}

protected:
	T** data;
private:
	int _rowCount;
	int _colCount;
#ifdef _DEBUG
	Row row;
#endif
};

//_____________________________________________________________________ Sys::GlobalMemory
class GlobalMemory
{
public:
	GlobalMemory();
	GlobalMemory(HGLOBAL hGlobal);
	~GlobalMemory();
	//
	// It allocates the specified number of bytes from the heap #GlobalAlloc+Win32+GDI
	// uFlags: GHND, GMEM_FIXED, GMEM_MOVEABLE, GMEM_ZEROINIT, GPTR
	bool Allocate(UINT uFlags, SIZE_T dwBytes);
	//
	// It changes the size or attributes of a specified global memory object. The size can increase or decrease #GlobalReAlloc+Win32+GDI
	bool ReAllocate(SIZE_T dwBytes, UINT uFlags);
	//
	// It frees the specified global memory object and invalidates its handle. #GlobalFree+Win32+GDI
	void FreeMemory();
	//
	// It locks a global memory object and returns a pointer to the first byte of the object's memory block #GlobalLock+Win32+GDI
	LPVOID Lock();
	//
	// It decrements the lock count associated with a memory object that was allocated with GMEM_MOVEABLE. 
	// This function has no effect on memory objects allocated with GMEM_FIXED #GlobalUnlock+Win32+GDI
	int Unlock();
	//
	// It prevents from freeing the global memory when the object gets destroyed
	void DoNotFree();
	//
	// It returns the handle the holds the global memory
	HGLOBAL GetHandle();
	//
	// It returns true if the memory handle is valid
	bool IsValid();
protected:
	HGLOBAL hGlobal;
	int lockCount;
	bool freeMemory;
};

//_____________________________________________________________________ Sys::Grid
// It is a 3D Grid to be drawn in a Sys::Graphics object
class Grid
{
public:
	Grid();
	~Grid();
	bool Create(int countX, int countY);
	bool Create(double minX, double maxX, int countX, double minY, double maxY, int countY);
	bool CreateRadial(double minAngle, double maxAngle, double minR, double maxR, int countAngle, int countR);
	bool CreateRadial(int countAngle, int countR);
	void Delete();
	Sys::Point3D** point; // We store here the original points
	Sys::Point3D** rotated; // To improve performance: we store here the points after rotation
	Sys::Point** transformed; // To improve performance: we store here the points after rotation, projection and shift
	//bool** drawPoint; // By default all points in the grid are drawn, use this variable to prevent some points from drawing 
	int GetCountX() const;
	int GetCountY() const;
	int type; // GRAPHICS_TYPE_LINE, GRAPHICS_TYPE_ANTIALISING_LINE, ...
	int  GetObject3DCount();
private:
	bool InternalCreate(int countX, int countY);
	bool _isRadial;
	int _countX;
	int _countY;
};

//_____________________________________________________________________ Sys::Graphics
// It is a Device Dependent Bitmap that can be created by bits
// After setting the bits, you must call CreateBitmap();
class Graphics
{
public:
	Graphics();
	~Graphics();
	//
	Graphics(const Sys::Graphics& init);
	Sys::Graphics& operator=(const Sys::Graphics& init);
	//
	bool Create(int width, int height);
	HDC hdc;
	void CreateBitmap();
	//
	//These variables are public to improve performance
	// Use the macro GRAPHICS_SETPIXEL(graphics, x, y, color)
	unsigned __int32 * bits;
	int width;
	int height;
	//
	int GetWidth() const;
	int GetHeight() const;
	void GetInfo(int& width, int& height, HDC& hdc) const;
	//
	bool CopyToClipboard(HWND hWnd) const;
	//_____________________________________________________________________________ Pixel
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void SetPixel(int x, int y, COLORREF color);
	void SetPixel(int x, int y, unsigned __int8& red, unsigned __int8& green, unsigned __int8& blue);
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used GetRValueX, GetGValueX and GetBValueX instead of GetRValue, GetGValue and GetBValue
	COLORREF GetPixel(int x, int y) const;
	void GetPixel(int x, int y, unsigned __int8& out_red, unsigned __int8& _out_green, unsigned __int8& _out_blue) const;
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void SetAllPixels(COLORREF color);
	//_____________________________________________________________________________ Line
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void BresenhamLine(int x1, int y1, int x2, int y2, COLORREF color);
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void Line(__int16 x1, __int16 y1, __int16 x2, __int16 y2, COLORREF color);
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void LineUnclipped(__int16 x1, __int16 y1, __int16 x2, __int16 y2, COLORREF color);
	//_____________________________________________________________________________ Filled Shapes
	bool Polygon(vector<Sys::Point>& vertices, COLORREF color,int positionX, int positionY);
	//
	void Delete();
protected:
	void Constructor();
	void Copy(const Sys::Graphics& init);
	//________________________________ Line
	bool CohenSutherlandClipping(__int16& x1, __int16& y1, __int16& x2, __int16& y2);
	//________________________________ Polygon
	void DrawHorizontalLineList(HorizontalLineList& lineList, COLORREF color);
	void ScanEdge(int x1, int y1, int x2, int y2, bool set_x_start, bool skipFirst, vector<Sys::HorizontalLine>::iterator& line);
	//
	void TriangleAliasingV(int x1, int y1, int x2, int y2, int x3, int y3, COLORREF color);
	//void DrawVerticalLine(double y1, double y2, int x, COLORREF color);
	void DrawVerticalLine(double& start_y, double& end_y, int& x, 
		unsigned char& start_red, unsigned char& start_green, unsigned char& start_blue,
		unsigned char& end_red, unsigned char& end_green, unsigned char& end_blue);
	//
	HBITMAP hbitmap;
	//________________________________ For BresenhamLine
	void Octant0(int x1, int y1, int deltaX, int deltaY, int directionX, COLORREF color);
	void Octant1(int x1, int y1, int deltaX, int deltaY, int directionX, COLORREF color);
	//________________________________ For Line
	void DrawVerticalRun(unsigned __int32** pBits, int xAdvance, int runLength, COLORREF color);
	void DrawHorizontalRun(unsigned __int32** pBits, int xAdvance, int runLength, COLORREF color);
};

//_____________________________________________________________________ Sys::GraphicsX
// It is a Device Dependent Bitmap that can be created by bits
// After setting the bits, you must call CreateBitmap();
class GraphicsX : public Sys::Graphics
{
public:
	GraphicsX();
	~GraphicsX();
	//
	void SetPixel(int x, int y, unsigned __int8& red, unsigned __int8& green, unsigned __int8& blue, unsigned __int8& alpha);
	//
	// Remember that Red and Blue are exchanged, thus 
	// you must used RGBX(red, green, blue) instead of RGB(red, green, blue)
	void WuLineUnclipped(__int16 x1, __int16 y1, __int16 x2, __int16 y2, COLORREF color);
	//
	// Use RGBX(red, green, blue) to set the color (line with Cohen–Sutherland Clipping)
	void WuLineCS(__int16 x1, __int16 y1, __int16 x2, __int16 y2, COLORREF color);
	//
	// Gouraud Triangle. See TriangleFillers.htm
	void Triangle(int x1, int y1, COLORREF color1, int x2, int y2, COLORREF color2, int x3, int y3, COLORREF color3);
	//
	//________________________________ Triangle
	void DrawHorizontalLine(double x1, double x2, int y, COLORREF color);
	void DrawHorizontalLine(double& start_x, double& end_x, int& y,
		unsigned char& start_red, unsigned char& start_green, unsigned char& start_blue,
		unsigned char& end_red, unsigned char& end_green, unsigned char& end_blue);
	void DrawHorizontalLine(double x1, double x2, int y, COLORREF color, unsigned __int8 red, unsigned __int8 green, unsigned __int8 blue); // With aliasing
	void DrawVerticalLine(double y1, double y2, int x, COLORREF color, unsigned __int8 red, unsigned __int8 green, unsigned __int8 blue); // With aliasing
	//
	//__________________________________________________ Fill Shapes
	void Triangle(int x1, int y1, int x2, int y2, int x3, int y3, COLORREF color, bool aliasing); // See TriangleFillers.htm
	//________________________________ Performance Variables
	static unsigned __int8 ***mix; // Stores the cube with color combinations with a resolution of 255 levels
	//
	//GraphicsX(const Sys::GraphicsX& init);
	//Sys::Graphics& operator=(const Sys::GraphicsX& init);
	//
private:
	static int _objectCount;
};

//_____________________________________________________________________ Sys::Convert
// It provides a set of helper functions to perform data conversion
class Convert
{
public:
	//___________________________________________________ ToInt
	static int ToInt(const wchar_t* input);
	static int ToInt(const wstring& input);
	static int ToInt(const char* input);
	static int ToInt(const string& input);
	//___________________________________________________ ToDouble
	static double ExtractDouble(int& position, const wchar_t* input, int input_length);
	static double ExtractDouble(int& position, const char* input, int input_length);
	static double ToDouble(const wchar_t* input);
	static double ToDouble(const char* input);
	static double ToDouble(const wstring& input);
	static double ToDouble(const string& input);
	//___________________________________________________ ToBool
	static bool ToBool(const wchar_t* input);
	static bool ToBool(const wstring& input);
	//___________________________________________________ To Complex
	static complex<double> ExtractComplex(int& position, const wchar_t* input, int input_length);
	static complex<double> ExtractComplex(int& position, const char* input, int input_length);
	static complex<double> ToComplex(const wchar_t* input);
	static complex<double> ToComplex(const wstring& input);
	static complex<double> ToComplex(const char* input);
	static complex<double> ToComplex(const string& input);
	//____________________________________________________ ToMatrix
	static bool ToMatrix(const wchar_t* input, MATRIX& output);
	static bool ToMatrix(const wstring& input, MATRIX& output);
	static bool ToMatrix(const char* input, MATRIX& output);
	static bool ToMatrix(const string& input, MATRIX& output);
	static bool ToMatrix(const valarray<double>& input, MATRIX& output);
	static bool ToMatrix(const wchar_t* input, MATRIXC& output);
	static bool ToMatrix(const wstring& input, MATRIXC& output);
	static bool ToMatrix(const char* input, MATRIXC& output);
	static bool ToMatrix(const string& input, MATRIXC& output);
	static bool ToMatrix(const valarray<complex<double> >& input, MATRIXC& output);
	//____________________________________________________ ToVector
	static bool ToVector(const wchar_t* input, valarray<double>& output);
	static bool ToVector(const wstring& input, valarray<double>& output);
	static bool ToVector(const char* input, valarray<double>& output);
	static bool ToVector(const string& input, valarray<double>& output);
	//
	static bool ToVector(const wchar_t* input, vector<double>& output);
	static bool ToVector(const wstring& input, vector<double>& output);
	static bool ToVector(const char* input, vector<double>& output);
	static bool ToVector(const string& input, vector<double>& output);
	//
	static wchar_t* ToVector(const MATRIX& input, int col_index, valarray<double>& output);
	static bool ToVector(const wchar_t* input, valarray<complex<double> >& output);
	static bool ToVector(const wstring& input, valarray<complex<double> >& output);
	static bool ToVector(const char* input, valarray<complex<double> >& output);
	static bool ToVector(const string& input, valarray<complex<double> >& output);
	static wchar_t* ToVector(const MATRIXC& input, int col_index, valarray<complex<double> >& output);
	//_________________________________________________ To Time
	static Sys::Time& ToTime(const wchar_t* input, Sys::Time& output);
	static Sys::Time& ToTime(const wstring& input, Sys::Time& output);
	static void SqlTimeToSysTime(const Sys::SqlTime& input, Sys::Time& output);
	static void SysTimeToSqlTime(const Sys::Time& input, Sys::SqlTime& output);
	static void time_tToFiletime(time_t input, FILETIME& filetime);
	static Sys::Time VariantToTime(const _variant_t& input);
	static _variant_t TimeToVariant(const Sys::Time& input);
#ifdef WIN_SOCKETS_SUPPORT
	static Sys::Time& InternetTimeToSystemTime(unsigned int inputNetworkTime, Sys::Time& output);
#endif
	static int ToYear(wstring& text);
	static int ToMonth(wstring& text);
	static int ToMonthDay(wstring& text);
	//_____________________________________________ ToString: int and bool
	static wstring ToString(int input);
	static wstring ToString(unsigned int input);
	static wstring ToString(__int64 input);
	static const wchar_t* ToString(bool input);
	//_____________________________________________ ToString: double
	static wstring ToString(double input);
	static wstring ToString(double input, const wchar_t* format);
	//
	// It returns the number of characters in the output string
	// if replaceWithMinusSign is true, it replaces hyphen by the character 0x2212
	static int ToString(double input, wchar_t* out_buffer, int out_buffer_size, bool compactFormat, bool replaceWithMinusSign);
	//
	// It returns the number of characters in the output string
	static int ToString(double input, char* out_buffer, int out_buffer_size, bool compactFormat);
	//
	// It returns the number of characters in the output string
	static int ToString(double input, const wchar_t* format, wchar_t* output, int out_buffer_size);
	//____________________________________________ ToString: complex
	//
	// It returns the number of characters in the output string
	// if replaceWithMinusSign is true, it replaces hyphen by the character 0x2212
	static int ToString(const complex<double>& input, wchar_t* out_buffer, int out_buffer_size, bool compactFormat, bool replaceWithMinusSign);
	//
	// It returns the number of characters in the output string
	static int ToString(const complex<double>& input, char* out_buffer, int out_buffer_size, bool compactFormat);
	//
	static void ToString(int input, wchar_t* out_buffer, int out_buffer_size);
	static wstring ToStringCommaSeparated(int input);
	static void ToStringCommaSeparated(int input, wchar_t* out_buffer, int out_buffer_size);
	//
	static wstring ToStringUsingCurrencyFormat(double input);
	static void ToStringUsingCurrencyFormat(double input, wchar_t* out_buffer, int out_buffer_size);
	//_____________________________________________ ToString: MATRIX
	static wstring& ToString(const MATRIX& input, wstring& output);
	static string& ToString(const MATRIX& input, string& output);
	static wstring& ToString(const MATRIXC& input, wstring& output);
	static string& ToString(const MATRIXC& input, string& output);
	//_____________________________________________ ToString: valarray
	static wstring& ToString(const valarray<double>& input, wstring& output);
	static string& ToString(const valarray<double>& input, string& output);
	static wstring& ToString(const valarray<complex<double> >& input, wstring& output);
	static string& ToString(const valarray<complex<double> >& input, string& output);
	//_____________________________________________ ToString: vector
	static wstring& ToString(const vector<double>& input, wstring& output);
	static string& ToString(const vector<double>& input, string& output);
	static wstring& ToString(const vector<complex<double> >& input, wstring& output);
	static string& ToString(const vector<complex<double> >& input, string& output);
	//_____________________________________________ ToString: _variant_t
	static wstring& ToString(const _variant_t& input, wstring& output);
	//
	// format day: d, dd, ddd  or dddd
	// format month: M, MM, MMM or MMMM
	// format year: y, yy, yyy or yyyy
	// format:  L"ddd',' MMM dd yyyy"
	static wstring& DateToString(const Sys::Time& input, const wchar_t* format, wstring& output);
	//
	// format day: d, dd, ddd  or dddd
	// format month: M, MM, MMM or MMMM
	// format year: y, yy, yyy or yyyy
	// format:  L"ddd',' MMM dd yyyy"
	static wstring ToString(const Sys::Time& input, const wchar_t* format);

	// format: L"hh':'mm':'ss tt"
	static wstring& TimeToString(const Sys::Time& input, const wchar_t* format, wstring& output);
	//
	static void ClsidToString(REFCLSID clsid, wstring& output);
	static void GuidToString(REFGUID guid, wstring& output);
	//
	static string& WstringToString(const wchar_t* input, string& output);
	static void WstringToString(const wchar_t* input, Sys::Buffer& output);
	static string& WstringToString(const wstring& input, string& output);
	static void WstringToString(const wstring& input, Sys::Buffer& output);
	static wstring& StringToWstring(const char* input, wstring& output);
	static void StringToWstring(const Sys::Buffer& input, wstring& output);
	static wstring& StringToWstring(const string& input, wstring& output);
	//__________________________________________________ The input string has several lines
	static vector<wstring>& ToVectorOfStrings(const wchar_t* input, vector<wstring>& output);
	static vector<wstring>& ToVectorOfStrings(const wstring& input, vector<wstring>& output);
	static vector<string>& ToVectorOfStrings(const char* input, vector<string>& output);
	static vector<string>& ToVectorOfStrings(const string& input, vector<string>& output);
	//
	static vector<wstring>& ToVectorOfStrings(const wchar_t* input, wchar_t separator, vector<wstring>& output);
	static vector<wstring>& ToVectorOfStrings(const wstring& input, wchar_t separator, vector<wstring>& output);
	//
	static void ToSet(const wchar_t* input, wchar_t separator, set<wstring>& output);
	//
	static bool WstringToUTF8(const wstring& input, string& output);
	static bool WstringToUTF8(const wstring& input, Sys::Buffer& output);
	static bool UTF8ToWstring(const string& input, wstring& output);
	static bool UTF8ToWstring(const Sys::Buffer& input, wstring& output);
	//
	// From: 0, 1, 2, 3, ... 9, A, B, C, D, E, F to integer
	static int HexToInteger(wchar_t input);
	static bool HexRequiresCoding(char input); 
	static bool HexRequiresCoding(wchar_t input); 
	static int HexComputeLength(const char* input);
	static int HexComputeLength(const wchar_t* input);
	//
	//i.e.:  input: a_b  output: a%XXb
	static bool UTF8ToHex(const char* input, string& output);
	//
	// it converts a hexadecimal string to its equivalent  UTF8
	// i.e.:  input: a%XXb  output: a_b
	static bool HexToUTF8(const char* input, string& output);
	//
	// it converts a hexadecimal string to its equivalent  UTF8
	// i.e.:  input: a%XXb  output: a_b
	static bool HexToUTF8(const wchar_t* input, string& output);
	//
	//i.e.:  input: a_b  output: a%XXb
	static bool WstringToHex(const wchar_t* input, wstring& output); 
	//
	static int FontPointToLogicUnits(double fontPoints);
	static int FontPointToLogicUnits(HDC hdc, double fontPoints);
	static double LogicUnitsToFontPoint(int logicUnits);
	static double LogicUnitsToFontPoint(HDC hdc, int logicUnits);
	//
	static int DlgUnitToPixelX(int dialogUnits);
	static int PixelToDlgUnitX(int pixels);
	static int DlgUnitToPixelY(int dialogUnits);
	static int PixelToDlgUnitY(int pixels);
	//
	static bool HiMetricToPixel(const SIZEL& inputHiMetric, SIZEL& resultPix);
	static bool PixelToHiMetric(const SIZEL& inputPix, SIZEL& resultHiMetric);
	//
	static COLORREF OleColorToColorRef(const OLE_COLOR input);
	static OLE_COLOR ColorRefToOleColor(const COLORREF input);
	//
	static COLORREF TextToColorRef(const wchar_t* text);
	static COLORREF TextToColorRef(const wstring& text);
	static void CharInfoToColorText(const list<Sys::CharInfo>& input, list<Sys::ColorText>& output);
	//
	// It converts a HSL space color to a RGB color
	// H[0 360], S[0 1], L[0 1]
	// R[0 255], G[0 255], B[0 255]
	static COLORREF HSLColorToRgb(const Sys::HSLColor& hslColor);
	//
	// It converts a RGB color to a HSL space color  
	// R[0 255], G[0 255], B[0 255]
	// H[0 360], S[0 1], L[0 1]
	static void RgbToHSLColor(const COLORREF input, Sys::HSLColor& output);
	//
	// value [0    1535]
	static COLORREF IntToColorRef(int value, bool isStandardFormat);
	//
	// value [0     1]
	// numColors =  2: Blue  > Cyan
	// numColors =  3: Blue  > Cyan > Green 
	// numColors =  4: Blue  > Cyan > Green > Yellow
	// numColors =  5: Blue  > Cyan > Green > Yellow > Red
	// numColors =  6: Blue  > Cyan > Green > Yellow > Red > Purple
	// numColors =  7: Blue  > Cyan > Green > Yellow > Red > Purple > Black
	static COLORREF DoubleToColorRef(double value, bool isStandardFormat, int numColors);
	static COLORREF DoubleToColorRef(double value, bool isStandardFormat);
	//
	static double MseToGrade(const double mse); //Mean squared error to Grade [0 to 100]
	//
	static void CppToHtml(const wchar_t* input_cppLine, wstring& output_html, bool indent, bool includeNeuralLabVariables);
	static void CppToHtml(wstring& in_out, bool indent, bool includeNeuralLabVariables);
	static wchar_t* ToHtml(wchar_t c);
	static void ToHtml(const wchar_t * input, wstring& output);
	static void HtmlToText(wstring& in_out);
	//
	static wchar_t* ToXml(wchar_t c);
	static void ToXml(const wchar_t * input, wstring& output);
	static void ToXml(const wstring& input, wstring& output);
	static void FromXml(wstring& in_out);
	//
	static void SqlToHtml(const wchar_t* input_sqlLine, wstring& output_html, bool indent);
	static void SqlToHtml(wstring& in_out, bool indent);
	//
	static bool ValarrayToVectorInt(const valarray<double>& input, valarray<int>& output);
	//
	static bool IsBase64(unsigned char input);
	static bool Base64BitEncode(const char* input, const int inputLen, string& output);
	static bool Base64BitDecode(const char* input, const int inputLen, string& output);
	//
	static void QuotedSqlToHtml(const wchar_t* input_sqlLine, const wchar_t* cssStyle, wstring& output_html);
	static void QuotedCppToHtml(const wchar_t* input_sqlLine, const wchar_t* cssStyle, wstring& output_html);
	//
	// It converts a relative path  (i.e., ..\..\documents) to an absolute path (i.e., c:\Users\John\documents )
	static bool RelativePathToAbsolutePath(const wchar_t* in_basePath, const wchar_t* in_relativePath, wstring& out_absolutePath);
	//
	// It converts an absolute path (i.e., c:\Users\John\documents ) to a relative path such (i.e., ..\..\documents ) 
	static bool AbsolutePathToRelativePath(const wchar_t* in_basePath, const wchar_t* in_absolutePath, wstring& out_relativePath);
private:
	static unsigned char Mag(double a, double b, double hue);
	Convert();
	~Convert();
};

//_____________________________________________________________________ Sys::Information
// It provides information about the system
class Information
{
public:
static int getSystemWindowsDirectory(wstring& result);

static void getSystemInfo(SYSTEM_INFO& si)
{
	::GetSystemInfo(&si);
}

static int getSystemDirectory(wstring& result);
static BOOL getSystemPowerStatus(SYSTEM_POWER_STATUS& sps)
{
	return ::GetSystemPowerStatus(&sps);
}

static void getSystemTimeAsFileTime(FILETIME& ft)
{
	::GetSystemTimeAsFileTime(&ft);
}

static int getCurrentDirectory(wstring& result);
static int getWindowsDirectory(wstring& result);

static const wchar_t* getCommandLine()
{
	return ::GetCommandLine();
}

//::GetComputerNameEx();
//::GetCompressedFileSize();
//::GetCurrencyFormat();
//::GetDateFormat();
//::GetDesktopWindow();
//::GetDiskFreeSpaceEx();
//::GetEnvironmentStrings();
//::GetEnvironmentVariable();
//::GetFileAttributes();
//::GetFullPathName();
//::GetGuiResources();
//::GetLocaleInfo();
//::GetLocalTime();
//::GetLogicalDrives();
//::GetModuleFileName();
//::GetNumberFormat();
//::GetPath();
//::GetSaveFileName();
//::GetTempFileName();
//::GetTempPath();
//::GetTickCount();
//::GetTimeFormat();
//::GetTitleBarInfo();
//::GetUserName();
//::GetUser

static int getEnvironmentVariable(const wchar_t* variableName, wstring& result)
{
	int size = ::GetEnvironmentVariable(variableName, NULL, 0);
	result.resize(size);
	::GetEnvironmentVariable(variableName, (wchar_t*)result.data(), size);
	result.resize(size-1);
	return size;
}

static int getEnvironmentVariable(wstring& variableName, wstring& result)
{
	return Sys::Information::getEnvironmentVariable(variableName.c_str(), result);
}

static int getAllUsersProfilePath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"ALLUSERSPROFILE", result);
}

// It is possible to also  use HKEY_LOCAL_MACHINE/Software/Microsoft/Windows/CurrentVersion/ProgramFilesDir
// It is possible to also  use HKEY_LOCAL_MACHINE/Software/Microsoft/Windows/CurrentVersion/Explorer/ShellFolders
static int getComputerName(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"COMPUTERNAME", result);
}

static int getHomeDrive(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"HOMEDRIVE", result);
}

static int getHomePath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"HOMEPATH", result);
}

static int getProgramFilesPath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"ProgramFiles", result);
}

static int getTempPath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"TEMP", result);
}

static int getUserDomain(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"USERDOMAIN", result);
}

static int getUserName(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"USERNAME", result);
}

static int getUserProfilePath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"USERPROFILE", result);
}

static int getWindowsPath(wstring& result)
{
	return Sys::Information::getEnvironmentVariable(L"windir", result);
}

static BOOL setCurrentDirectory(const wchar_t* newDirectory)
{
	return ::SetCurrentDirectory(newDirectory);
}

static BOOL setCurrentDirectory(const wstring& newDirectory)
{
	return ::SetCurrentDirectory(newDirectory.c_str());
}

// It returns the path and name of an executable or a DLL
static int getProgramFileName(HMODULE hInstance, wstring& output);

// It returns the path and name of the current Program
static int getCurrentProgramFileName(wstring& output);

static const wchar_t* getLicense()
{
	return L"THIS CODE AND INFORMATION IS PROVIDED \"AS IS\" WITHOUT\r\n"\
		L"WARRANTY OF ANY KIND, EITHER EXPRESSED OR IMPLIED,\r\n"\
		L"INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES\r\n"\
		L"OF MERCHANTABILITY OR NON - INFRINGEMENT.  I ACCEPT NO\r\n" \
		L"LIABILITY FOR ANY DAMAGE OR LOSS OF BUSINESS THAT THIS\r\n" \
		L"SOFTWARE AND INFORMATION MAY CAUSE.";
}

static WORD getCacheLineSize();

};

//_____________________________________________________________________ Sys::Region
class Region
{
public:
	Region();
	~Region();
	void Delete();
	bool CreatePolygon(LPPOINT lpPoints, int count, int mode); 
	bool CreatePolyPolygon(const POINT *lppt, const int *polyCounts, int count, int polyFillMode);
	bool CreateElliptic(int x1, int y1, int x2, int y2);
	bool CreateRect(int x1, int y1, int x2, int y2);
	bool CreateRoundRect(int x1, int y1, int x2, int y2, int x3, int y3);
	bool CreateFromPath(HDC hdc);
private:
	HRGN hrgn;	
};

//_____________________________________________________________________ Sys::TextBufferA
class TextBufferA : public Sys::ITextWriterA
{
public:
	TextBufferA();
	~TextBufferA();
	string buffer;
	bool WriteText(const string& source);
};

//_____________________________________________________________________ Sys::TextBufferW
class TextBufferW : public Sys::ITextWriterW
{
public:
	TextBufferW();
	~TextBufferW();
	wstring buffer;
	bool WriteText(const wstring& source);
};

//_____________________________________________________________________ Sys::Gzip
class Gzip 
{
public:
	static int inf(FILE *source, FILE *dest);
	static int def(FILE *source, FILE *dest, int level);
	static int def(Sys::Buffer& source, Sys::Buffer& destination);
	virtual ~Gzip();
protected:
	static void zerr(int ret);
private:
	Gzip();
};

//_____________________________________________________________________ Sys::FileReader
// It provides support to read a file without loading the full file in memory
class FileReader
{
public:
	~FileReader(void);
	void Close();
	//
	// The file is automatically closed, when the end of file has been reached
	bool IsOpen();
	//
	size_t GetSizeInBytes();
protected:
	FileReader(void);
	bool PrivateOpen(const wchar_t* filename);
	HANDLE hFile;
	DWORD dwRead;
	size_t position;
	DWORD numBytes;
};

//_____________________________________________________________________ Sys::FileReaderAscii
// It provides support to read an ASCII file without loading the full file in memory
class FileReaderAscii : public Sys::FileReader
{
public:
	FileReaderAscii(void);
	~FileReaderAscii(void);
	//
	bool Open(const wchar_t* filename);
	bool Open(const wstring& filename);
	//
	bool Read(char& out_character);
	bool Read(unsigned char& out_character);
	//
	bool Peek(char& out_character);
	bool Peek(unsigned char& out_character);
	//
	// It avances the position until it finds the specified word
	bool MoveAfter(const char* thisWord);
	//
	// It avances the position until it finds the specified character
	bool MoveAfter(const char thisCharacter);
	//
	// It avances the position by one
	bool Advance();
	//
	// It returns the number of characters read including the NULL terminator
	// It returns -1 when the end of file has been reached
	// It returns -2 when the buffer is not large enough
	int GetLine(unsigned char* out_buffer, int bufferLength);
	//
	// It returns the number of characters read including the NULL terminator
	// It returns -1 when the end of file has been reached
	int GetLine(string& output);
	//
	// It returns the number of characters in the file
	size_t GetCharCount();
	//
	// It returns an integer value and moves the position after the number
	// If the end of the file has been reached, out_status is -1
	// if an error occurs, out_status is 1
	// otherwise out_status is 0
	int ReadNumber(int& out_status);
protected:
	bool FillBuffer();
	unsigned char* buffer;
	unsigned char next;
	bool isNextValid;
};

//_____________________________________________________________________ Sys::FileReaderW
// It provides support to read an UNICODE file without loading the full file in memory
class FileReaderW : public Sys::FileReader
{
public:
	FileReaderW(void);
	~FileReaderW(void);
	//
	bool Open(const wchar_t* filename);
	bool Open(const wstring& filename);
	//
	bool Read(wchar_t& out_character);
	bool Peek(wchar_t& out_character);
	//
	// It advances the position until it finds the specified word
	bool MoveAfter(const wchar_t* thisWord);
	//
	// It advances the position until it finds the specified character
	bool MoveAfter(const wchar_t thisCharacter);
	//
	// It advances the position by one
	bool Advance();
	//
	// It returns the number of characters read including the NULL terminator
	// It returns -1 when the end of file has been reached
	// It returns -2 when the buffer is not large enough
	int GetLine(wchar_t* out_buffer,int bufferLength);
	//
	// It returns the number of characters read including the NULL terminator
	// It returns -1 when the end of file has been reached
	int GetLine(wstring& output);
	//
	// It returns the number of characters in the file
	size_t GetCharCount();
	//
	//
	// It returns the number of characters read
	// It returns -1 when the end of file has been reached
	// It returns -2 when the buffer is not large enough
	int ReadNumber(int& out_status);
protected:
	bool FillBuffer();
	wchar_t* buffer;
	wchar_t next;
	bool isNextValid;
};

//_____________________________________________________________________ Sys::File
// It allows writing and reading files
class File : public Sys::IStorer, public Sys::IChannel, public Sys::ITextWriterA, public Sys::ITextWriterW
{
public:
	File(void);
	~File(void);
	HANDLE Create(const wchar_t* filename, DWORD desiredAccess, DWORD shareMode, LPSECURITY_ATTRIBUTES securityAttributes, 
		DWORD creationDisposition, DWORD flagsAndAttributes, HANDLE templateFile);
	bool CreateForWritting(const wchar_t* filename);
	bool CreateForReading(const wchar_t* filename);
	bool CreateForWritting(const wstring& filename);
	bool CreateForReading(const wstring& filename);
	void Close();
	bool IsOpen();
	bool Flush();
	void SetTime(FILETIME& creation, FILETIME& access, FILETIME& write);
	void GetTime(FILETIME& creation, FILETIME& access, FILETIME& write);
	static bool SetFileTime(const wchar_t* filename, FILETIME& creation, FILETIME& access, FILETIME& write);
	//
	bool SetPointer(LARGE_INTEGER distanceToMove, PLARGE_INTEGER newFilePointer, DWORD moveMethod);
	bool SetEnd();
	size_t GetSizeInBytes();
	bool GetSize(LARGE_INTEGER& size);
	HANDLE GetHandle(); 
	bool WriteText(const wchar_t* source);
	bool WriteText(const char* source);
	//_______________________________________________ Sys::IStorer
	// returns the actual number of bytes that were written, or -1 if error
	int Write(const void* in_buffer, int  bufferSizeInBytes);
	//
	// returns the actual number of bytes that were read, or -1 if error
	int Read(void *out_buffer, int  bufferSizeInBytes);
	//_______________________________________________ Sys::IChannel
	// returns the actual number of bytes that were received, or -1 if error
	int Receive(char *out_buffer, int bufferSizeInBytes);
	//
	// returns the actual number of bytes that were sent, or -1 if error	
	int Send(const char * in_buffer, int bufferSizeInBytes);
	//_______________________________________________Sys::ITextWriterA
	bool WriteText(const string& source);
	//_______________________________________________Sys::ITextWriterW
	bool WriteText(const wstring& source);
	//_______________________________________________ char
	bool Write(char data);
	bool Read(char& data);
	//_______________________________________________ unsigned char
	bool Write(unsigned char data);
	bool Read(unsigned char& data);
	//_______________________________________________ __int16
	bool Write(__int16 data);
	bool Read(__int16& data);
	//_______________________________________________ unsigned __int16
	bool Write(unsigned __int16 data);
	bool Read(unsigned __int16& data);
	//_______________________________________________ __int32
	bool Write(__int32 data);
	bool Read(__int32& data);
	//_______________________________________________ unsigned __int32
	bool Write(unsigned __int32 data);
	bool Read(unsigned __int32& data);
	//_______________________________________________ double
	bool Write(double data);
	bool Read(double& data);
	//_______________________________________________ wstring
	bool Write(const wstring& data);
	bool Read(wstring& data);
	//_______________________________________________ bool
	bool Write(bool data);
	bool Read(bool& data);
	//_______________________________________________ Sys::Time
	bool Write(const Sys::Time& data);
	bool Read(Sys::Time& data);
protected:
	HANDLE hFile;
};

//____________________________________________________________ CG::GammaCorrection
// It correct photometric distortions in images
// Example:
// GammaCorrection gc;
// unsigned char = gc.Transform[inputValue];
class GammaCorrection
{
public:
	GammaCorrection();
	~GammaCorrection();
	//__________________________________ Gamma
	void SetGamma(double gamma);
	double GetGamma();
	__declspec(property(get=GetGamma, put=SetGamma)) double Gamma;
	//__________________________________ Example: a = gammCorrection.Transform[2];
	unsigned char Transform[256];
private:
	double _gamma;
};

//____________________________________________________________ CG::PortablePixMap
// An PPM file to load a portable PixMap Image (only P6 is supported)
class PortablePixMap: protected Sys::FileReaderAscii
{
public:
	PortablePixMap();
	~PortablePixMap();
	//
	const wchar_t* Save(const wchar_t* filename, const Sys::Graphics& input_graphics);
	const wchar_t* Save(const wstring& filename, const Sys::Graphics& input_graphics);
	//
	const wchar_t* Load(const wchar_t* filename, Sys::Graphics& out_graphics);
	const wchar_t* Load(const wstring& filename, Sys::Graphics& out_graphics);
	//
	int GetWidth();
	int GetHeight();
	bool IsBinary();
	int GetMaxColor();
	void Clear();
	double brightness;
	//_______________________________________________________________ Gamma
	void SetGamma(double gamma);
	double GetGamma();
	__declspec(property(get=GetGamma, put=SetGamma)) double Gamma;
private:
	Sys::GammaCorrection gc;
	bool ReadInteger(int& result);
	int _width;
	int _height;
	int _maxColor;
	bool _isBinary;
};

//_____________________________________________________________________ Sys::TextAssistant
// It provides a set of helper functions to manipulate text
class TextAssistant
{
public:
	// Deletes all occurrences of the string that begins with start and ends with end
	static int SmartDelete(wstring& in_out, const wstring& start, const wstring& end);
	static int SmartDelete(string& in_out, const string& start, const string& end);

	// Deletes the text after the provided character
	static int DeleteAfter(wstring& in_out, const wchar_t character);
	static int DeleteAfter(string& in_out, const unsigned char character);
	//
	static wstring& TruncateToFit(HDC hdc, const wstring& input, wstring& output, int width, bool appendEllipses);
	static string& TruncateToFit(HDC hdc, const string& input, string& output, int width, bool appendEllipses);

	static void FirstUppercase(wchar_t* in_out);
	static void FirstUppercase(unsigned char* in_out);
	static wstring& FirstUppercase(wstring& in_out);
	static string& FirstUppercase(string& in_out);

	static void ToUpper(wchar_t* in_out);
	static void ToUpper(unsigned char* in_out);
	static void ToUpper(const wchar_t* in, wchar_t* out);
	static void ToUpper(const unsigned char* in, unsigned char* out);
	static wstring& ToUpper(wstring& in_out);
	static string& ToUpper(string& in_out);
	static wchar_t ToUpper(wchar_t c);
	static unsigned char ToUpper(unsigned char c);

	static void ToLower(wchar_t* in_out);
	static void ToLower(unsigned char* in_out);
	static void ToLower(const wchar_t* in, wchar_t* out);
	static void ToLower(const unsigned char* in, unsigned char* out);
	static wstring& ToLower(wstring& in_out);
	static string& ToLower(string& in_out);
	static wchar_t ToLower(wchar_t c);
	static unsigned char ToLower(unsigned char c);

	static bool IsLowerCase(wchar_t c);
	static bool IsLowerCase(unsigned char c);
	static bool IsUpperCase(wchar_t c);
	static bool IsUpperCase(unsigned char c);

	static void ReplaceAccents(wchar_t* in_out);
	static void ReplaceAccents(unsigned char* in_out);
	static void ReplaceAccents(const wchar_t* in, wchar_t* out);
	static void ReplaceAccents(const unsigned char* in, unsigned char* out);
	static wstring& ReplaceAccents(wstring& in_out);
	static string& ReplaceAccents(string& in_out);
	static wchar_t ReplaceAccents(wchar_t c);
	static unsigned char ReplaceAccents(unsigned char c);
	//
	// It returns a number from 0 to 255 when c is: a, á, ä, ... b, c, ...
	static unsigned int StringCompareWithAccents(unsigned char c);
	//
	// It returns zero, when string1 is identical to string2
	// It returns -1, when string1 is less than string2
	// It returns 1, when string1 is greater than string2
	static int StringCompareWithAccents(const wchar_t* string1, const wchar_t * string2);
	//
	// It returns zero, when string1 is identical to string2
	// It returns -1, when string1 is less than string2
	// It returns 1, when string1 is greater than string2
	static int StringCompareWithAccents(const unsigned char* string1, const unsigned char* string2);
	//
	// It delete spaces, tabs, line returns or line carriage at the beginning and at the end
	static wstring& RemoveTrailingSpaces(wstring& in_out);
	//
	// It delete spaces, tabs, line returns or line carriage at the beginning and at the end
	static string& RemoveTrailingSpaces(string& in_out);
	//
	// Removes carriage returns, tabs and extra spaces
	static wstring& RemoveExtraSpaces(wstring& in_out);
	//
	// Removes carriage returns, tabs and extra spaces
	static string& RemoveExtraSpaces(string& in_out);
	
	static int DeleteChar(wstring& in_out, wchar_t remove);
	static int DeleteChar(string& in_out, char remove);
	static int DeleteChar(wchar_t* in_out, wchar_t remove);

	static int ReplaceChar(wstring& in_out, wchar_t oldChar, wchar_t newChar);
	static int ReplaceChar(string& in_out, char oldChar, char newChar);
	static int ReplaceChar(wchar_t* in_out, wchar_t oldChar, wchar_t newChar);
	static int ReplaceChar(unsigned char* in_out, unsigned char oldChar, unsigned char newChar);

	static int Delete(wstring& in_out, const wchar_t* deleteThisText, bool matchWholeWord);
	//
	// The function finds some text in an input string. If the text is found, it replaces the text.
	// The function returns the number of replacements
	static int Replace(wstring& in_out, const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord);
	//
	// The function finds some text in an input string. If the text is found, it replaces the text.
	// The function returns the number of replacements
	static int Replace(wstring& in_out, const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//
	// The function finds some text in an input string. If the text is found, it replaces the text.
	// The function returns the number of replacements.  This is a high performance function!
	static int Replace(const wchar_t* input, wstring& output, const wchar_t* findThis, const wchar_t* replaceWithThis, bool matchWholeWord, bool matchCase);
	//
	static int ReplaceBiggerLessThan(const wchar_t* input, wstring& output);

	static int Delete(string& in_out, const char* deleteThisText, bool matchWholeWord);
	static int Replace(string& in_out, const char* findThis, const char* replaceWithThis, bool matchWholeWord);
	static int ExpandEscapeSequences(const wstring& input, wstring& output);

	//IDF_NAME    BIN    "items\\thread.txt"
	static bool LoadFromResource(HINSTANCE hInst, int resource_id, wstring& output);
	static bool LoadFromResource(HINSTANCE hInst, int resource_id, string& output);

	static bool IsUnicode(const void* input, int inputSize);
	//
	static bool IsSeparator(const wstring& input, int index);
	static bool IsSeparator(const string& input, int index);
	//
	// It returns the number of ocurrences of findThis that are in the variable input
	static int GetFindCount(const wstring& input, const wstring& findThis, bool matchWholeWord);
	//
	// It returns the number of ocurrences of findThis that are in the variable input
	static int GetFindCount(const string& input, const string& findThis, bool matchWholeWord);
	//
	// It returns the number of ocurrences of findThis that are in the variable input
	static int GetFindCount(const wchar_t* input, const wchar_t* findThis, bool matchWholeWord, bool matchCase);
	//
	// The function finds a whole word in an input string starting the search at positionStart
	// if the word is found, it returns the position of the word.  Otherwise, it returns -1
	// Note that the search is case sensitive
	static int FindWholeWord(const wchar_t* input, size_t positionStart, const wchar_t* findThisWord);
	//
	// The function finds some text in an input string starting the search at positionStart
	// if the text is found, it returns the position of the word.  Otherwise, it returns -1
	// Note that the search is case sensitive
	static int Find(const wchar_t* input, size_t positionStart, const wchar_t* findThis);
	//
	// The function finds some text in an input string starting the search at positionStart
	// if the text is found, it returns the position of the word.  Otherwise, it returns -1
	static int Find(const wchar_t* input, size_t positionStart, const wchar_t* findThis, bool matchWholeWord, bool matchCase);
	//
	static bool IsDigit(wchar_t input);
	static bool IsDigit(unsigned char input);
	static bool IsIntegerNumber(const wchar_t* input);
	static bool IsIntegerNumber(const unsigned char* input);
	static bool IsSeparator(wchar_t input);
	static bool IsSeparator(unsigned char input);
	static bool IsChar(wchar_t input);
	static bool IsChar(unsigned char input);
	static bool IsCharAccent(wchar_t input);
	static bool IsCharAccent(unsigned char input);
	static bool IsValidIdChar(wchar_t letter);
	static bool IsValidIdChar(unsigned char letter);
	static bool GetDouble(const wchar_t* input, double& output);
	static bool GetDouble(const unsigned char* input, double& output);
	static bool GetMantissa(const unsigned char* input, int& output);
	static bool GetMantissa(const wchar_t* input, int& output);
	static bool GetInteger(const unsigned char* input, int& output);
	static bool GetInteger(const wchar_t* input, int& output);
	static bool IsEmailAddress(const wchar_t* text);
	static bool IsEmailAddressChar(wchar_t c);
	//
	// input: fileName with full path,  bufferSize
	// output: the filename with (or without) its extension in the buffer
	static bool ExtractFileName(const wchar_t* input, bool keepFileExt, wchar_t * buffer, int bufferSize);
	static bool ExtractFileName(const wchar_t* input, bool keepFileExt, wstring& output);
	static bool SeparateFilePathAndFilename(const wchar_t* input, wstring& out_path, wstring& out_filename);
	//
	// input: fileName with full path
	// output: the file path in the buffer
	static bool ExtractFilePath(const wchar_t* input, wchar_t * buffer, int bufferSize);
	static bool ExtractFilePath(const wchar_t* input, wstring& output);
	//
	// input: fileName with full path
	//Output: file extension in buffer (in lowercase)
	static bool ExtractFileExt(const wchar_t* input, wchar_t * buffer, int bufferSize);
	//
	static bool CopyTruncate(const wchar_t* source, wchar_t* destination, int destination_len); 
	//
	static bool AreSimilar(const wchar_t* text1, const wchar_t* text2);
	static bool AreSimilar(const wstring& text1, const wstring& text2);
	//
	// Example: input = "Uno-Two-Three-Four" separator = '-'  will produce
	// procout_tokens[0] = "Uno", procout_tokens[1] = "Two", ...
	static int GetTokens(const wchar_t* input, wchar_t separator, vector<wstring>& out_tokens);
	//
	// It gets a set of the most common words in English
	static void GetStopWordsInEnglish(set<wstring>& output);
	//
	// It gets a set of the most common words in Spanish
	static void GetStopWordsInSpanish(set<wstring>& output);
	//
	// It gets the list of words in some text
	static void GetWordList(const wchar_t* input, set<wstring>& output);
	//
	// It gets the list of words in the files in the folder and subfolders
	// folder: C:\\Users\\Mike
	// filter: *.txt
	// textEncoding:  SYS_GETWORDLIST_ASCII, SYS_GETWORDLIST_UNICODE, SYS_GETWORDLIST_UTF8
	static void GetWordList(const wchar_t* folder, const wchar_t* filter, int textEncoding, set<wstring>& output);
	//
	// It gets the list of words in some text
	static void GetWordList(const wchar_t* input, vector<wstring>& output);
	//__________________________________________________________________ STL: Upper case same as Lower case characters <
	struct NoCase_Less_wchar_t : public std::binary_function<wchar_t, wchar_t, bool>
	{
		bool operator () (wchar_t x, wchar_t y) const
		{
			return toupper(x) < toupper(y);
		}
	};

	struct NoCaseLess : public std::binary_function<wstring, wstring, bool>
	{
		bool operator () (const wstring& x, const wstring& y) const
		{
			return std::lexicographical_compare(x.begin(), x.end(), y.begin(), y.end(), NoCase_Less_wchar_t());
		}
	};

	//__________________________________________________________________ STL: Accent Compare
	struct AccentCompare_wchar_t: public std::binary_function<wchar_t, wchar_t, bool>
	{
		bool operator () (wchar_t x, wchar_t y) const
		{
			return Sys::TextAssistant::StringCompareWithAccents((unsigned char)x) < Sys::TextAssistant::StringCompareWithAccents((unsigned char)y);
		}
	};

	struct AccentCompare: public std::binary_function<wstring, wstring, bool>
	{
		bool operator () (const wstring& x, const wstring& y) const
		{
			return std::lexicographical_compare(x.begin(), x.end(), y.begin(), y.end(), AccentCompare_wchar_t());
		}
	};

private:
	TextAssistant(void);
	~TextAssistant(void);
};

//_____________________________________________________________________ Sys::String
class String
{
public:
	String()
	{
		data = NULL;
		size = 0;
	}
	String(const Sys::String& init)
	{
		data = NULL;
		size = 0;
		Copy(init);
	}
	String(const unsigned char* init)
	{
		data = NULL;
		size = 0;
		Set(init);
	}
	~String()
	{
		Delete();
	}
	bool Set(const unsigned char* text)
	{
		const size_t len = strlen((char*)text)+1;
		if (size != len)
		{
			size = 0;
			if (data != NULL) delete[] data;
			data = new unsigned char[len];
			if (data == NULL) return false;
			size = len;
		}
		::memcpy_s(data, size, text, size);
		return true;
	}
	bool Append(const unsigned char* text)
	{
		if (data == NULL) return Set(text);
		size_t input_length = strlen((char*)text);
		if (input_length == 0) return true;
		const size_t new_length = input_length + size;
		unsigned char *p = new unsigned char[new_length];
		if (p == NULL) return false;
		strcpy_s((char*)p, size, (char*)data);
		strcat_s((char*)p, new_length, (char*)text);
		if (data) delete[] data;
		data = p;
		return true;
	}
	bool Append(unsigned char c)
	{
		if (data == NULL)
		{
			data = new unsigned char[2];
			if (data == NULL) return false;
			data[0] = c;
			data[1] = '\0';
			size = 2;
		}
		const size_t new_length = 1 + size;
		unsigned char *p = new unsigned char[new_length];
		if (p == NULL) return false;
		strcpy_s((char*)p, size, (char*)data);
		p[size] = c;
		p[size+1] = '\0';
		if (data) delete[] data;
		data = p;
		return true;
	}
	Sys::String& operator+=(unsigned char c)
	{
		Append(c);
		return *this;
	}
	Sys::String& operator+=(unsigned char* text)
	{
		Append(text);
		return *this;
	}
	Sys::String& operator+=(const unsigned char* text)
	{
		Append(text);
		return *this;
	}
	void SetSize(size_t size)
	{
		if (this->size == size) return;
		if (data != NULL) delete[] data;
		data = new unsigned char[size];
		this->size = size;
	}
	size_t GetSize() const
	{
		return size;
	}
	size_t GetTextLength() const
	{
		return (size-1);
	}
	unsigned char& operator[](long index)
	{
		return data[index];
	}
	const unsigned char& operator[](long index) const
	{
		return data[index];
	}
	void Delete()
	{
		if (data) delete[] data;
		data = NULL;
		size = 0;
	}
	Sys::String& operator=(const Sys::String& init)
	{
		Delete();
		Copy(init);
		return *this;
	}
	bool operator==(const Sys::String& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) == 0);
		//return (strcmp(data, init.data) == 0);
	}
	bool operator<(const Sys::String& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) < 0);
		//return (strcmp(data, init.data) < 0);
	}
	bool operator>(const Sys::String& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) > 0);
		//return (strcmp(data, init.data) > 0);
	}
	unsigned char * data;
private:
	size_t size;
	void Copy(const Sys::String& init)
	{
		Delete();
		if (init.data != NULL) Set(init.data);
	}
};

//_____________________________________________________________________ Sys::Wstring
class Wstring
{
public:
	Wstring()
	{
		data = NULL;
		size = 0;
	}
	Wstring(const Sys::Wstring& init)
	{
		data = NULL;
		size = 0;
		Copy(init);
	}
	Wstring(const wchar_t* init)
	{
		data = NULL;
		size = 0;
		Set(init);
	}
	~Wstring()
	{
		Delete();
	}
	bool Set(const wchar_t* text)
	{
		const size_t len = wcslen(text)+1;
		if (size != len)
		{
			size = 0;
			if (data != NULL) delete[] data;
			data = new wchar_t[len];
			if (data == NULL) return false;
			size = len;
		}
		wcscpy_s(data, len, text);
		return true;
	}
	bool Append(const wchar_t* text)
	{
		if (data == NULL) return Set(text);
		size_t input_length = wcslen(text);
		if (input_length == 0) return true;
		const size_t new_length = input_length + size;
		wchar_t *p = new wchar_t[new_length];
		if (p == NULL) return false;
		wcscpy_s(p, size, data);
		wcscat_s(p, new_length, text);
		if (data) delete[] data;
		data = p;
		return true;
	}
	bool Append(wchar_t c)
	{
		if (data == NULL)
		{
			data = new wchar_t[2];
			if (data == NULL) return false;
			data[0] = c;
			data[1] = '\0';
			size = 2;
		}
		const size_t new_length = 1 + size;
		wchar_t *p = new wchar_t[new_length];
		if (p == NULL) return false;
		wcscpy_s(p, size, data);
		p[size] = c;
		p[size+1] = '\0';
		if (data) delete[] data;
		data = p;
		return true;
	}
	Sys::Wstring& operator+=(wchar_t c)
	{
		Append(c);
		return *this;
	}
	Sys::Wstring& operator+=(wchar_t* text)
	{
		Append(text);
		return *this;
	}
	Sys::Wstring& operator+=(const wchar_t* text)
	{
		Append(text);
		return *this;
	}
	void SetSize(size_t size)
	{
		if (this->size == size) return;
		if (data != NULL) delete[] data;
		data = new wchar_t[size];
		this->size = size;
	}
	size_t GetSize() const
	{
		return size;
	}
	size_t GetTextLength() const
	{
		return (size-1);
	}
	wchar_t& operator[](long index)
	{
		return data[index];
	}
	const wchar_t& operator[](long index) const
	{
		return data[index];
	}
	void Delete()
	{
		if (data) delete[] data;
		data = NULL;
		size = 0;
	}
	Sys::Wstring& operator=(const Sys::Wstring& init)
	{
		Delete();
		Copy(init);
		return *this;
	}
	bool operator==(const Sys::Wstring& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) == 0);
		//return (wcscmp(data, init.data) == 0);
	}
	bool operator<(const Sys::Wstring& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) < 0);
		//return (wcscmp(data, init.data) < 0);
	}
	bool operator>(const Sys::Wstring& init) const
	{
		if (init.data == NULL) return false;
		if (data == NULL) return false;
		return (Sys::TextAssistant::StringCompareWithAccents(data, init.data) > 0);
		//return (wcscmp(data, init.data) > 0);
	}
	wchar_t * data;
private:
	size_t size;
	void Copy(const Sys::Wstring& init)
	{
		Delete();
		if (init.data != NULL) Set(init.data);
	}
};

////_____________________________________________________________________ Sys::StringCompare
//// It compares two strings taking into consideration accents. It can be used to sort words with accents
//class StringCompare
//{
//public:
//	StringCompare();
//	~StringCompare();
//	//
//	// It returns zero, when string1 is identical to string2
//	// It returns -1, when string1 is less than string2
//	// It returns 1, when string1 is greater than string2
//	int Compare(const unsigned char* string1, const unsigned char* string2);
//	//
//	// It returns zero, when string1 is identical to string2
//	// It returns -1, when string1 is less than string2
//	// It returns 1, when string1 is greater than string2
//	int Compare(const wchar_t* string1, const wchar_t * string2);
//private:
//	unsigned int data[256];
//};

//_____________________________________________________________________ Sys::PrintLine
// Sys::PrintLine(__LINE__, __FUNCIONW__, L"Test %d", 5);
static void PrintLine(int line, const wchar_t* func_name, const wchar_t* format, ...)
{
	wstring text;
	Sys::Format(text, L"%d:%s ", line, func_name);
	OutputDebugStringW(text.c_str());
	//_________________________________________________
	va_list arglist;
	va_start(arglist, format);
	int result = -1;
	int len = 0;
	for (register const wchar_t* p = format; *p != NULL; p++)
	{
		len++;
		if (*p == '%') len += 15;
	}
	int bufferSize = MAXIMUM(64, len);
	do
	{
		text.resize(bufferSize);
		result = _vsnwprintf_s((wchar_t*)text.data(), bufferSize, _TRUNCATE, format, arglist);
		bufferSize*=2;
	}
	while (result==-1);
	text.resize(result);
	va_end(arglist);
	OutputDebugStringW(text.c_str());
	OutputDebugStringW(L"\r\n");
}

//_____________________________________________________________________ Sys::PrintLine
// Sys::PrintLine( L"Test %d", 5);
static void PrintLine(const wchar_t* format, ...)
{
	wstring text;
	//_________________________________________________
	va_list arglist;
	va_start(arglist, format);
	int result = -1;
	int len = 0;
	for (register const wchar_t* p = format; *p != NULL; p++)
	{
		len++;
		if (*p == '%') len += 15;
	}
	int bufferSize = MAXIMUM(64, len);
	do
	{
		text.resize(bufferSize);
		result = _vsnwprintf_s((wchar_t*)text.data(), bufferSize, _TRUNCATE, format, arglist);
		bufferSize*=2;
	}
	while (result==-1);
	text.resize(result);
	va_end(arglist);
	OutputDebugStringW(text.c_str());
	OutputDebugStringW(L"\r\n");
}

//_____________________________________________________________________ Sys::SerialAssistant
class SerialAssistant
{
public:
	static bool Save(Sys::IStorer& destination, double source);
	static bool Load(Sys::IStorer& source, double& destination);
	//
	static bool Save(Sys::IStorer& destination, int source);
	static bool Load(Sys::IStorer& source, int& destination);
	//
	static bool Save(Sys::IStorer& destination, const wstring& source);
	static bool Save(Sys::IStorer& destination, const string& source);
	static bool Load(Sys::IStorer& source, wstring& destination);
	static bool Load(Sys::IStorer& source, string& destination);
	//
	// It returns the number of bytes to serialize the variable
	static __int32 GetByteCount(const wstring& text);
	//
	// It returns the number of bytes to serialize the variable
	static __int32 GetByteCount(const string& text);
	//
	static bool Save(Sys::IStorer& destination, const MATRIX& source);
	static bool Save(Sys::IStorer& destination, const valarray<double>& source);
	static bool Load(Sys::IStorer& source, MATRIX& destination);
	static bool Load(Sys::IStorer& source, valarray<double>& destination);
	//______________________________complex
	static bool Save(Sys::IStorer& destination, const MATRIXC& source);
	static bool Save(Sys::IStorer& destination, const valarray<complex<double> >& source);
	static bool Load(Sys::IStorer& source, MATRIXC& destination);
	static bool Load(Sys::IStorer& source, valarray<complex<double> >& destination);
private:
	SerialAssistant(void);
	~SerialAssistant(void);
};

//_____________________________________________________________________ Sys::FileAssistant
// It provides a set of helper functions to manipulate files
class FileAssistant
{
public:
	static bool DoesFileExist(const wchar_t* filename);
	static bool DoesFileExist(const wstring& filename);
	//
	// It creates a file using the content in a BIN Resource
	static bool CreateFileFromResource(HINSTANCE hInstance, int resource_id, const wchar_t* destinationFileName);
	//
	// It creates a file using the content in a BIN Resource
	static bool CreateFileFromResource(HINSTANCE hInstance, int resource_id, const wstring& destinationFileName);
	//
	// It returns 1 if the file is UNICODE. It returns 0 if the file is not UNICODE.  It returns -1 if error.
	static int IsTextFileUnicode(const wchar_t* filename);
	static int IsTextFileUnicode(const wstring& filename);
	//
	static bool Save(const wchar_t* filename, const wstring& input);
	static bool Save(const wstring& filename, const wstring& input);
	static bool Save(const wchar_t* filename, const string& input);
	static bool Save(const wstring& filename, const string& input);
	static bool Load(const wchar_t* filename, wstring& output);
	static bool Load(const wstring& filename, wstring& output);
	static bool Load(const wchar_t* filename, string& output);
	static bool Load(const wstring& filename, string& output);
	//
	static bool TextSave(const wchar_t* filename, const wstring& input, bool writeOrderByte);
	static bool TextSave(const wstring& filename, const wstring& input, bool writeOrderByte);
	static bool TextSave(const wchar_t* filename, const string& input);
	static bool TextSave(const wstring& filename, const string& input);
	static bool TextLoad(const wchar_t* filename, wstring& output);
	static bool TextLoad(const wstring& filename, wstring& output);
	static bool TextLoad(const wchar_t* filename, string& output);
	static bool TextLoad(const wstring& filename, string& output);
	//
	static bool Save(const wchar_t* filename, const MATRIX& input);
	static bool Save(const wstring& filename, const MATRIX& input);
	static bool Save(const wchar_t* filename, const valarray<double>& input);
	static bool Save(const wstring& filename, const valarray<double>& input);
	static bool Load(const wchar_t* filename, MATRIX& output);
	static bool Load(const wstring& filename, MATRIX& output);
	static bool Load(const wchar_t* filename, valarray<double>& output);
	static bool Load(const wstring& filename, valarray<double>& output);
	//
	static bool CsvSave(const wchar_t* filename, const MATRIX& input, const char* format);
	static bool CsvSave(const wstring& filename, const MATRIX& input, const char* format);
	static bool CsvSave(const wchar_t* filename, const MATRIX& input);
	static bool CsvSave(const wstring& filename, const MATRIX& input);
	static bool CsvSave(const wchar_t* filename, const valarray<double>& input, bool isRow);
	static bool CsvSave(const wstring& filename, const valarray<double>& input, bool isRow);
	static bool CsvLoad(const wchar_t* filename, MATRIX& output);
	static bool CsvLoad(const wstring& filename, MATRIX& output);
	static bool CsvLoad(const wchar_t* filename, valarray<double>& output);
	static bool CsvLoad(const wstring& filename, valarray<double>& output);
	static bool CsvIsComplex(const wchar_t* filename); // Returns true when the data in the CSV file is complex
	static bool CsvIsComplex(const wstring& filename); // Returns true when the data in the CSV file is complex
	//_________________________________________ complex
	static bool Save(const wchar_t* filename, const MATRIXC& input);
	static bool Save(const wstring& filename, const MATRIXC& input);
	static bool Save(const wchar_t* filename, const valarray<complex<double> >& input);
	static bool Save(const wstring& filename, valarray<complex<double> >& input);
	static bool Load(const wchar_t* filename, MATRIXC& output);
	static bool Load(const wstring& filename, MATRIXC& output);
	static bool Load(const wchar_t* filename, valarray<complex<double> >& output);
	static bool Load(const wstring& filename, valarray<complex<double> >& output);
	//
	static bool CsvSave(const wchar_t* filename, const MATRIXC& input);
	static bool CsvSave(const wstring& filename, const MATRIXC& input);
	static bool CsvSave(const wchar_t* filename, valarray<complex<double> >& input, bool isRow);
	static bool CsvSave(const wstring& filename, valarray<complex<double> >& input, bool isRow);
	static bool CsvLoad(const wchar_t* filename, MATRIXC& output);
	static bool CsvLoad(const wstring& filename, MATRIXC& output);
	static bool CsvLoad(const wchar_t* filename, valarray<complex<double> >& output);
	static bool CsvLoad(const wstring& filename, valarray<complex<double> >& output);
	//
	static bool CreateEmptyZipFile(const wchar_t* filename);
	static bool CreateEmptyZipFile(const wstring& filename);
	static bool ZipFile(const wchar_t* inputFileName, const wchar_t* outputFileName);
	static bool ZipFile(const wstring& inputFileName, const wstring& outputFileName);
	static bool ZipFolder(const wchar_t* inputFolderName, const wchar_t* outputFileName);
	static bool ZipFolder(const wstring& inputFolderName, const wstring& outputFileName);
	//
	// It returns 1, if files are equal
	// It returns 0, if files are different
	// It returns -1, if error
	static int CompareFiles(const wchar_t* filenameA, const wchar_t* filenameB);
	static int CompareFilesIOCP(const wchar_t* filenameA, const wchar_t* filenameB);
	static bool CopyFileIOCP(const wchar_t* source_filename, const wchar_t* destination_filename);
	static bool CopyFile(const wchar_t* source_filename, const wchar_t* destination_filename);
	static bool CopyFile(const wstring& source_filename, const wstring& destination_filename);
	static bool DeleteFile(const wchar_t* filename);
	static bool DeleteFile(const wstring& filename);
	//
	// It returns the path of the specified file, if it exists.  The routine tries:
	// 1. At the same folder as the executable
	// 2. At the current directory
	// 3. At a fixed location
	static bool FindFilePath(HINSTANCE hInstance, const wchar_t* foldername, const wchar_t* filename, const wchar_t* fixed_location, wstring& out_path);
private:
	FileAssistant(void);
	~FileAssistant(void);
};

//_____________________________________________________________________ Sys::DLLibrary
// It provides support for loading dynamic link libraries
class DLLibrary
{
public:
	DLLibrary(void);
	virtual ~DLLibrary(void);
	bool Load(const wchar_t* dllName);
	bool Load(const wstring& dllName);
	void Free(void);
	FARPROC GetProcAddress(LPCSTR functionName);
	HINSTANCE GetHinstance();
protected:
	HINSTANCE hLibrary;
};

//_____________________________________________________________________ Sys::EncryptedFile
class EncryptedFile
{
public:
	EncryptedFile(void);
	virtual ~EncryptedFile(void);
	bool Encrypt(const wchar_t * lpOriginalFile, const wchar_t * lpDestinationFile, const char* pszKey);
	bool DeEncrypt(const wchar_t * lpOriginalFile, const wchar_t * lpDestinationFile, const char* pszKey);
protected:
	unsigned char Code(unsigned char nOneLetter);
private:
	bool m_bRestore;
	int m_nKey;
	int m_nKeySize;
	char* m_pszKey;
	bool Encryption(const wchar_t * lpOriginalFile, const wchar_t * lpDestinationFile, const char* pszKey);
	void Clear();
};

//_____________________________________________________________________ Sys::NamedPipe
class NamedPipe
{
public:
	NamedPipe(void);

	// lpName = L"\\\\.\\pipe\\TimeService");
	// lpName = L"\\\\ServerName\\pipe\\TimeService");
	// nTimeout = 1000 millisec
	// nBufferSize = sizeof(struct to move through the pipe)
	// You may implement a Server as a Service
	bool CreateServer(const wchar_t * lpName, DWORD nBufferSize, DWORD nTimeout);
	virtual ~NamedPipe(void);
	bool Connect();
	bool Flush();
	bool Disconnect();
	void Close();
	bool Write(LPCVOID lpBuffer, DWORD nNumbOfBytesToWrite, LPDWORD lpNumbOfBytesWritten);
	bool Read(LPVOID lpBuffer, DWORD nNumbOfBytesToRead, LPDWORD lpNumbOfBytesRead);
	operator HANDLE();
	bool IsOpen();
	HANDLE GetHandle();
protected:
	HANDLE handle;
	OVERLAPPED m_o;
};
// To create a pipe client
//wchar_t buffer[256];
//HANDLE pipe = ::CreateFile(L"\\\\.\\pipe\\TimeService", GENERIC_READ, 0, NULL,
//					 OPEN_EXISTING, 0, NULL);
//if (pipe != INVALID_HANDLE_VALUE)
//{
//	Sys::Time st;
//	DWORD bytesLeidos = 0;
//	::ReadFile(pipe, &st, sizeof(st), &bytesLeidos, NULL);
//	// Do something with st
//	wstring fecha;
//	Sys::Convert::DateToString(st, NULL, fecha);
//	this->Text = fecha;
//	
//	::CloseHandle(pipe);
//}
//else
//{
//	Sys::DisplayLastError(hWnd, L"Time client");
//}

//_____________________________________________________________________ Sys::SvgReader
// It provides support for reading a Scalable Vector Graphics file
class SvgReader
{
public:
	SvgReader(void);
	virtual ~SvgReader(void);
	bool CreateFromFile(const wstring& fileName);
	bool CreateFromResource(HINSTANCE hInst, int resource_id);
	void CreateFromText(const wchar_t* svgText);
	//
	bool GetBezierPoints(const wchar_t* svg_id, vector<Sys::Point2D>& out_points); // Do not include straigh lines in the path
	bool GetPolylinePoints(const wchar_t* svg_id, vector<Sys::Point2D>& out_points); 
	bool GetPolygonPoints(const wchar_t* svg_id, vector<Sys::Point2D>& out_points); 
	bool GetRectangle(const wchar_t* svg_id, Sys::Point2D& out_position, Sys::Point2D& out_size);
private:
	wstring svgText;
	size_t FindSvgObject(const wchar_t* type, const wchar_t* beginToken, const wchar_t* svg_id);
	bool GetPoints(size_t begin, vector<Sys::Point2D>& out_points);
	bool IsNumericValid(wchar_t c);
	double GetDouble(size_t& begin, size_t end, const wchar_t* key);
	void ProcessValue(bool isRelative, double value, int count, Sys::Point2D& point, Sys::Point2D& origin, bool& storePoint, vector<Sys::Point2D>& out_points);
};
// You can use Corel Draw to create SVG files
// In Corel Draw XV create the document in inches and export the document to millimeters to obtain
// a convenient scaling
// To assign a name to each object use Corel Draw > Tools > Object Data Manager 
//**************************************************** Bezier
// It does not work with straigh lines
//void SvgTest::Window_Open(Win::Event& e)
//{
//	svg.CreateFromFile(L"two.svg");
//	vector<Sys::Point2D> pointf;
//	svg.GetBezierPoints(L"dos", pointf);
//	count = pointf.size();
//	const double scale = 100.0;
//	point = new POINT[count]; // Member variable
//	for(int i = 0; i<count; i++)
//	{
//		point[i].x = (int)(scale * pointf[i].x + 0.5);
//		point[i].y = (int)(scale * pointf[i].y + 0.5);
//	}
//}

//void SvgTest::Window_Paint(Win::Event& e)
//{
//	Win::Gdi gdi(hWnd, true, false);
//	gdi.PolyBezier(point, count); 
//}


//********************************************** Polyline
//void SvgTest::Window_Open(Win::Event& e)
//{
//	svg.CreateFromFile(L"two.svg");
//	vector<Sys::Point2D> pointf;
//	svg.GetPolylinePoints(L"bonita", pointf);
//	count = pointf.size();
//	const double scale = 100.0;
//	point = new POINT[count]; // Member variable
//	for(int i = 0; i<count; i++)
//	{
//		point[i].x = (int)(scale * pointf[i].x + 0.5);
//		point[i].y = (int)(scale * pointf[i].y + 0.5);
//	}
//}
//
//void SvgTest::Window_Paint(Win::Event& e)
//{
//	Win::Gdi gdi(hWnd, true, false);
//	gdi.Polyline(point, count);
//}

//********************************************** Polygon
//void SvgTest::Window_Open(Win::Event& e)
//{
//	svg.CreateFromFile(L"two.svg");
//	vector<Sys::Point2D> pointf;
//	svg.GetPolygonPoints(L"pentagono", pointf);
//	count = pointf.size();
//	const double scale = 100.0;
//	point = new POINT[count]; // Member Variable
//	for(int i = 0; i<count; i++)
//	{
//		point[i].x = (int)(scale * pointf[i].x + 0.5);
//		point[i].y = (int)(scale * pointf[i].y + 0.5);
//	}
//}
//
//void SvgTest::Window_Paint(Win::Event& e)
//{
//	Win::Gdi gdi(hWnd, true, false);
//	gdi.Polygon(point, count);
//}


//***************************************************** Filling Beziers (GDI+)
//void SvgTest::Window_Open(Win::Event& e)
//{
//	svg.CreateFromFile(L"two.svg");
//	vector<Sys::Point2D> pointf;
//	svg.GetBezierPoints(L"dos", pointf);
//	count = pointf.size();
//	const double scale = 100.0;
//	point = new POINT[count]; // Member variable
//	for(int i = 0; i<count; i++)
//	{
//		point[i].x = (int)(scale * pointf[i].x + 0.5);
//		point[i].y = (int)(scale * pointf[i].y + 0.5);
//	}
//}
//
//void SvgTest::Window_Paint(Win::Event& e)
//{
//	Win::Gdi gdi(hWnd, true, true);
//	SolidBrush solidBrush(Color(255, 255, 0, 0));
//	Pen pen(Color(255, 0, 0, 255), 1);
//	Gdiplus::GraphicsPath path;
//
//   gdi.plus.graphics.SetSmoothingMode(SmoothingModeHighQuality);
//
//   Gdiplus::PointF* point = new Gdiplus::PointF[m_nCount];
//	for(int i = 0; i<m_nCount; i++)
//	{
//		point[i].X= m_ppf[i].x ;
//		point[i].Y = m_ppf[i].y;
//	}
//
//	path.AddBeziers(point, m_nCount);
//	gdi.plus.graphics.FillPath(&solidBrush, &path);
//
//	delete [] point;
//}


//***************************************************** Filling Beziers (GDI)
//void SvgTest::Window_Open(Win::Event& e)
//{
//	svg.CreateFromFile(L"two.svg");
//	vector<Sys::Point2D> pointf;
//	svg.GetBezierPoints(L"dos", pointf);
//	count = pointf.size();
//	const double scale = 100.0;
//	point = new POINT[count]; // Member variable
//	for(int i = 0; i<count; i++)
//	{
//		point[i].x = (int)(scale * pointf[i].x + 0.5);
//		point[i].y = (int)(scale * pointf[i].y + 0.5);
//	}
//}
//
//void SvgTest::Window_Paint(Win::Event& e)
//{
//	Win::Gdi gdi(hWnd, true, false);
//	CG::Brush brush(RGB(100, 100, 244));
//	gdi.FillPolyBezier(point, count, brush);
//	gdi.PolyBezier(point, count);
//}

//_____________________________________________________________________ Sys::Xml
// It provides support for reading and writing XML files
class Xml : public Sys::IEnumerator
{
public:
	Xml(void);
	virtual ~Xml(void);
	//
	list<Sys::Xml> child;
	wstring name;
	wstring value;
	map<wstring, wstring> attribute;
	bool utf_8;  // UTF-8: utf_8 = true,  UTF-16: utf_8 = false
	//
	// It returns the text length of the longer value
	int GetMaxValueLength() const;
	//
	bool CreateFromString(const wstring& input_data);
	bool CreateFromString(const wchar_t* input_data);
	bool CreateFromUtf8String(const char* input_data);
	bool CreateFromUtf8(const Sys::Buffer& input);
	bool Load(const wchar_t* filename);
	bool Load(const wstring& filename);
	//
	void GetXmlText(wstring& output_data);
	void GetXmlText(string& output_data);
	void GetXmlText(Sys::ITextWriterW& output_data);
	void GetHtml(wstring& output_html);
	//
	bool Save(const wchar_t* filename);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const Sys::Xml& child);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wchar_t* name);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wstring& name);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wchar_t* name, const wchar_t* value);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wstring& name, const wstring& value);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wchar_t* name, const wchar_t* value, const map<wstring, wstring>& attribute);
	//
	// It returns a reference to the new child
	Sys::Xml& AddChild(const wstring& name, const wstring& value, const map<wstring, wstring>& attribute);
	//
	bool GetChild(const wchar_t* child_name, list<Sys::Xml>::iterator& out_child);
	bool GetChild(const wstring& child_name, list<Sys::Xml>::iterator& out_child);
	bool GetChild(int child_index, list<Sys::Xml>::iterator& out_child);
	//
	bool GetChildByNoPrefixName(const wchar_t* child_noPrefix_name, list<Sys::Xml>::iterator& out_child);
	bool GetChildByNoPrefixName(const wstring& child_noPrefix_name, list<Sys::Xml>::iterator& out_child);
	//
	bool SetChildValue(const wchar_t* child_name, const wchar_t* child_value);
	bool SetChildValue(const wstring& child_name, const wstring& child_value);
	bool SetChildValue(int child_index, const wchar_t* child_value);
	bool SetChildValue(int child_index, const wstring& child_value);
	//
	bool GetChildValue(const wchar_t* child_name, wstring& out_child_value) const;
	bool GetChildValue(const wstring& child_name, wstring& out_child_value) const;
	bool GetChildValue(int child_index, wstring& out_child_value) const;
	//
	void Delete();
	//
	// i.e. out_name will be product for <so:product xmlns="http://www.com">
	bool GetNameWithoutPrefix(wstring& out_name) const;
	//
	void SetAttribute(const wchar_t* attribute_name, const wchar_t* attribute_value);
	void SetAttribute(const wstring& attribute_name, const wstring& attribute_value);
	//
	bool GetAttribute(const wchar_t* attribute_name, wstring& out_attribute_value) const;
	bool GetAttribute(const wstring& attribute_name, wstring& out_attribute_value) const;
	//
	// It returns the text of the name that is before the colon 
	// Example:  <so:product xmlns="http://www.com"> prefix=so
	bool GetPrefix(wstring& out_prefix) const;
	//
	// You must call this function using the root node (the main node) to find the xmlns of a specific node
	// If you insert or delete nodes, you must call RefreshNodeIDs before calling Get_xmlns()
	bool Get_xmlns(const Sys::Xml& childNode, wstring& out_xmlns) const;
	//
	// It returns true if the input is an XML document
	static bool IsXml(const char* input);
	//
	// It returns true if the input is an XML document
	static bool IsXml(const wchar_t* input);
	//
	// It copies the content of the object to an object that implement the Sys::IEnumerator interface
	bool CopyTo(Sys::IEnumerator& num) const;
	//
	// It returns an automatic generated node ID
	// You may use the node ID to find the xmlns of the node
	int GetNode_ID() const;
	//
	// You must call this function to update the IDs of all nodes
	// You must call this function after making changes in the XML object (insertions or deletions)
	// This function must be called using the root node (the main node) 
	void RefreshNodeIDs();
	//________________________________________________________________ Sys::IEnumerator
	// We use the first dummy node to create the rest of the nodes,
	// otherwise automatic names will be generated
	virtual void Enumerate(wchar_t** data, int colCount, int rowIndex);
private:
	// Returns: XML_ERROR, XML_OPENING_TAG,XML_VALUE, XML_CLOSING_TAG, XML_COMMENT
	int LookAhead(const wstring& data, size_t position);
	//
	bool Comment(const wstring& data, size_t& position);
	bool CheckName(const wstring& data, size_t& position);
	bool CompareName(const wstring& newName);
	bool LoadName(const wstring& data, size_t& position, bool& out_isMonoTag);
	bool LoadAttribute(const wstring& data, size_t& position);
	bool LoadAttributeName(const wstring& data, size_t& position, bool& found, wstring& out_name);
	bool LoadAttributeValue(const wstring& data, size_t& position, bool& found, wstring& out_value);
	bool IsMonoTag(const wstring& data, size_t& position);
	bool LoadValue(const wstring& data, size_t& position);
	bool LoadHead(const wchar_t* data, size_t& position);
	bool LoadData(const wstring& data);
	bool OpeningTag(const wstring& data, size_t& position, bool& isMonoTag);
	bool ClosingTag(const wstring& data, size_t& position);
	bool TagBody(const wstring& data, size_t& position);
	void PrivateGetXmlText(wstring& data, int& indent) const;
	void PrivateGetXmlText(Sys::ITextWriterW& data, int& indent) const;
	void PrivateGetXmlTextAsHtml(wstring& data, int& indent) const;
	//
	void PrivateRefreshNodeID(int& id);
	bool PrivateRecursion_xmlns_prefix(const int child_node_id, const wchar_t* xmlns_tofind, wstring& out_xmlns) const;
	void PrivateRecursion_xmlns(const int child_node_id, wstring& out_xmlns) const;
	int node_id;
};

//_____________________________________________________________________ Sys::SoapEnvelope
class SoapEnvelope : public Sys::Xml
{
public:
	SoapEnvelope(void);
	virtual ~SoapEnvelope(void);
	//
	int majorVersion;
	int minorVersion;
	//
	bool GetResponse(list<Sys::Xml>::iterator& out_response);
	bool GetBody(list<Sys::Xml>::iterator& out_body);
	//
	wstring GetActionXmlns();
	bool SetActionXmlns(const wstring name);
	__declspec(property(get = GetActionXmlns, put = SetActionXmlns)) wstring ActionXmlns;
	//
	wstring GetActionName();
	bool SetActionName(const wstring name);
	__declspec(property(get = GetActionName, put = SetActionName)) wstring ActionName;
	//
	bool DeleteAllParameters();
	//
	bool AddParameter(const wchar_t* name, const wchar_t* value);
	bool AddParameter(const wstring& name, const wstring& value);
	bool AddParameter(const wchar_t* name, const int value);
	bool AddParameter(const wstring& name, const int value);
	bool AddParameter(const wchar_t* name, const double value);
	bool AddParameter(const wstring& name, const double value);
	bool AddParameter(const wchar_t* name, const bool value);
	bool AddParameter(const wstring& name, const bool value);
	//
	bool SetParameterName(int index, const wchar_t* name);
	bool SetParameterName(int index, const wstring& name);
	bool GetParameterName(int index, wstring& out_name);
	//
	bool SetParameterValue(int index, const wchar_t* value);
	bool SetParameterValue(int index, const wstring& value);
	bool SetParameterValue(const wchar_t* name, const wchar_t* value);
	bool SetParameterValue(const wstring& name, const wstring& value);
	bool SetParameterValue(const wchar_t* name, const int value);
	bool SetParameterValue(const wstring& name, const int value);
	bool SetParameterValue(const wchar_t* name, const double value);
	bool SetParameterValue(const wstring& name, const double value);
	bool SetParameterValue(const wchar_t* name, const bool value);
	bool SetParameterValue(const wstring& name, const bool value);
	//
	bool GetParameterValue(const wchar_t* name, wstring& out_value);
	bool GetParameterValue(const wstring& name, wstring& out_value);
	bool GetParameterValue(const wchar_t* name, int& out_value);
	bool GetParameterValue(const wstring& name, int& out_value);
	bool GetParameterValue(const wchar_t* name, double& out_value);
	bool GetParameterValue(const wstring& name, double& out_value);
	bool GetParameterValue(const wchar_t* name, bool& out_value);
	bool GetParameterValue(const wstring& name, bool& out_value);
	bool GetParameterValue(int index, wstring& out_value);
	bool GetParameterValue(int index, int& out_value);
	bool GetParameterValue(int index, double& out_value);
	bool GetParameterValue(int index, bool& out_value);
	//
	bool GetParameterIterator(const wchar_t* name, list<Sys::Xml>::iterator& out_parameter);
	bool GetParameterIterator(int parameter_index, list<Sys::Xml>::iterator& out_parameter);
	//________________________________________________________________ Sys::IEnumerator
	virtual void Enumerate(wchar_t** data, int colCount, int rowIndex);
private:

	void Constructor();
};

//_____________________________________________________________________ Sys::BoolArray
// It stores a set of bool values
class BoolArray
{
public:
	BoolArray(void);
	BoolArray(const BoolArray& init); // Copy constructor
	BoolArray(int bitCount);
	~BoolArray(void);
	bool Create(int bitCount);
	bool GetBit(int bitIndex) const;
	void SetBit(int bitIndex, bool value);
	void FlipBit(int bitIndex);
	bool CopyBits(const BoolArray& source, int indexStart, int indexEnd);
	int GetActiveBitCount();
	virtual void Show(HWND hWnd, const wchar_t* caption);
	bool operator==(const Sys::BoolArray& vector) const;
	BoolArray& operator =(const BoolArray& init); //Operator =
	
	int GetCount() const;
	void GetString(wchar_t* buffer, int bufferSize);
	bool IsOk();
	void Delete(void);
	__int8 GetInt8(int arrayIndex) const;
	__int16 GetInt16(int arrayIndex) const;
	__int32 GetInt32(int arrayIndex) const;
	__int64 GetInt64(int arrayIndex) const;
	//
	void SetInt8(int arrayIndex, __int8 value);
	void SetInt16(int arrayIndex, __int16 value);
	void SetInt32(int arrayIndex, __int32 value);
	void SetInt64(int arrayIndex, __int64 value);
protected:
	void Copy(const BoolArray &init);
	int count;
	char* data;
};

//______________________________________________________________________ Sys::HhpFile
// It provides support for creating Microsoft HTML Help Workshop files (*.hhp)
class HhpFile
{
public:
	HhpFile();
	~HhpFile();
	bool Create(const wchar_t* path, const wchar_t* productName, const wchar_t* title, bool includeIndexFile);
	bool Create(const wstring& path, const wstring& productName, const wstring& title, bool includeIndexFile);
	void AddItem(const wchar_t* filename);
	void AddItem(const wstring& filename);
protected:
	Sys::File file;
};

//______________________________________________________________________ Sys::HhcFile
// It provides support for creating Microsoft HTML Help Workshop files (content file *.hhc)
class HhcFile
{
public:
	HhcFile();
	~HhcFile();
	bool Create(const wchar_t* filename, bool useFolderImage);
	bool Create(const wstring& filename, bool useFolderImage);
	//
	// AddFolder > AddFolderItem >AddFolderItem... > CloseFolder
	void AddFolder(const wchar_t* name);
	//
	// AddFolder > AddFolderItem >AddFolderItem... > CloseFolder
	// imageIndex: 0, 1, 2, 3, ..., 42
	void AddFolder(const wchar_t* name, int imageIndex);
	//
	// AddFolder > AddFolderItem >AddFolderItem... > CloseFolder
	void AddFolderItem(const wchar_t* name, const wchar_t* filename);
	//
	// AddFolder > AddFolderItem >AddFolderItem... > CloseFolder
	// imageIndex: 0, 1, 2, 3, ..., 42
	void AddFolderItem(const wchar_t* name, const wchar_t* filename, int imageIndex);
	void CloseFolder();
protected:
	Sys::File file;
	void HhcFile::AddTabs();
	int indentLevel;
};

//______________________________________________________________________ Sys::HhkFile
// It provides support for creating Microsoft HTML Help Workshop files (index file *.hhk)
class HhkFile
{
public:
	HhkFile();
	~HhkFile();
	set<wstring> englishWords;
	set<wstring> spanishWords;
	bool IsValidKeyword(const wstring& input);
	void AppendKeywordObject(const wstring& docText, wstring& whtml);
};

//_____________________________________________________________________ Sys::Cursor
class Cursor
{
public:
	Cursor(void);
	void CreateDragDrop(HINSTANCE hInstance);
	void CreateHorzSplit(HINSTANCE hInstance);
	void CreateVertSplit(HINSTANCE hInstance);
	HCURSOR Load(HINSTANCE hinst, LPCTSTR lpszName, int cxDesired, int cyDesired, UINT fuLoad);
	HCURSOR Load(HINSTANCE hinst, int cursor_id);
	HCURSOR Load(LPCTSTR lpszName);
	~Cursor(void);
	HCURSOR GetHCursor();
	void Delete();
	operator HCURSOR();
private:
	HCURSOR hcursor;
	bool deleteCursor;
};

//_____________________________________________________________________ Sys::Icon
class Icon
{
public:
	Icon();
	~Icon();
	Icon(const Sys::Icon& init);
	Sys::Icon& operator=(const Sys::Icon& init);
	HICON Load(HINSTANCE hInstance, LPCTSTR lpszName, int cxDesired, int cyDesired, UINT fuLoad);
	HICON Load(HINSTANCE hInstance, int icon_id);
	HICON LoadApplicationIcon(HINSTANCE hInstance);
	HICON LoadHandIcon(HINSTANCE hInstance);
	HICON LoadQuestionIcon(HINSTANCE hInstance);
	HICON LoadExclamationIcon(HINSTANCE hInstance);
	HICON LoadAsteriskIcon(HINSTANCE hInstance);
	HICON LoadWinLogoIcon(HINSTANCE hInstance);
	HICON GetHIcon();
	operator HICON();
	void Delete();
	bool GetInformation(int& out_width, int& out_height, int& out_bitsPerPixel);
private:
	HICON hIcon;
	void Copy(const Sys::Icon& init);
};

//____________________________________________________________________ Sys::Bitmap
class Bitmap
{
public:
	Bitmap();
	~Bitmap();
	HBITMAP Load(HINSTANCE hinst, LPCTSTR lpszName, int cxDesired, int cyDesired, UINT fuLoad);
	HBITMAP Load(HINSTANCE hinst, int bitmap_id);
	HBITMAP GetHBitmap();
	operator HBITMAP();
private:
	HBITMAP hbitmap;
};

//#ifdef WIN_SOCKETS_SUPPORT
////____________________________________________________________________ Sys::WinINet
//class WinINet
//{
//public:
//	WinINet();
//	WinINet(const wchar_t* agent, DWORD accessType, const wchar_t* proxyName, const wchar_t* proxyBypass, DWORD flags);
//	~WinINet();
//	//
//	// It opens an File Transfer Protocol (FTP) or HTTP session for a given site #InternetConnect+Win32
//	HINTERNET Connect(const wchar_t* serverName, INTERNET_PORT serverPort, const wchar_t* username, const wchar_t* password,
//		DWORD service, DWORD flags, DWORD_PTR context);
//	//
//	// It opens an File Transfer Protocol (FTP) session for a given site #InternetConnect+Win32
//	HINTERNET ConnectFtp(const wchar_t* serverName, INTERNET_PORT serverPort, const wchar_t* username, const wchar_t* password);
//	//
//	// It opens an HTTP session for a given site #InternetConnect+Win32
//	HINTERNET ConnectHttp(const wchar_t* serverName, INTERNET_PORT serverPort, const wchar_t* username, const wchar_t* password);
//	void CloseSession();
//	void CloseConnection();
//	void CloseAll();
//	HINTERNET GetConnection();
//	HINTERNET GetSession();
//protected:
//	HINTERNET hSession;
//	HINTERNET hConnection;
//};
//
////____________________________________________________________________ Sys::HttpRequest
//class HttpRequest
//{
//public:
//	HttpRequest();
//	~HttpRequest();
//	// It creates an HTTP request handle #HttpOpenRequest+Win32
//	HINTERNET Create(Sys::WinINet& wininet, const wchar_t* verb, const wchar_t* objectName, const wchar_t* version, const wchar_t* referer,
//		const wchar_t** acceptType, DWORD flags, DWORD_PTR context);
//	//
//	// It sends the specified request to the HTTP server #HttpSendRequest+Win32
//	bool Send(const wchar_t* header, DWORD headersLength, LPVOID optional, DWORD optionalLength);
//	//
//	// It displays a dialog box for the error that is passed to InternetErrorDlg, if an appropriate dialog box exists #InternetErrorDlg+Win32
//	// The function returns: ERROR_SUCCESS, ERROR_CANCELLED, ERROR_INTERNET_FORCE_RETRY, ERROR_INVALID_HANDLE 
//	DWORD ErrorDlg(HWND  hWnd, DWORD dwError, DWORD flags, LPVOID *lppvData);
//	//
//	// It retrieves header information of the HTTP request #HttpQueryInfo+Win232
//	bool QueryInfo(DWORD infoLevel, LPVOID buffer, LPDWORD bufferLength, LPDWORD index);
//	//
//	// It sets an Internet option #InternetSetOption+Win32
//	bool SetOption(DWORD option, LPVOID buffer, DWORD bufferLength);
//	bool SetUsername(const wchar_t* username);
//	bool SetPassword(const wchar_t* password);
//	bool SetProxyUsername(const wchar_t* username);
//	bool SetProxyPassword(const wchar_t* password);
//	//
//	// It reads data #InternetReadFile+Win32
//	bool Read(LPVOID buffer, DWORD numberOfBytesToRead, LPDWORD numberOfBytesRead);
//	void Close();
//protected:
//	HINTERNET hHttpRequest;
//};
//#endif

} //____________________________________________________ namespace Sys::End

// Multithread
namespace Mt //________________________________________ namespace Mt::Ini
{
//____________________________________________________________OverlappedE
// It provides support for asynchronous programming in multithread applicacions
class OverlappedE : public OVERLAPPED
{
public:
	OverlappedE(void)
	{
		this->hEvent=::CreateEvent(NULL, TRUE, FALSE, NULL);
		this->Internal=0;
		this->InternalHigh=0;
		this->Offset=0;
		this->OffsetHigh=0;
		this->Pointer=NULL;
		if (this->hEvent==NULL)
		{
			Sys::DisplayLastError(NULL, L"Mt::OverlappedE unabled to create event");
		}
	}
	~OverlappedE(void)
	{
		if (this->hEvent) ::CloseHandle(this->hEvent);
	}
	 
	HANDLE GetEventHandle(void)
   {
	   return hEvent;
   }

	void ResetEvent(void)
	{
		::ResetEvent(this->hEvent);
	}
};

//___________________________________________________________Deque
class Deque
{
public:
	Deque(void)
	{
		::InitializeCriticalSection(&cs);
	}

	~Deque(void)
	{
		::DeleteCriticalSection(&cs);
	}

	int GetSpaceFree()
	{
		int size=0;
		::EnterCriticalSection(&cs);
		size = MT_DEQUE_MAX_SIZE-(int)queue.size();
		::LeaveCriticalSection(&cs);
		return (size<0) ? 0 : size;
	}

	int GetSpaceUsed()
	{
		int size=0;
		::EnterCriticalSection(&cs);
		size = (int)queue.size();
		::LeaveCriticalSection(&cs);
		return size;
	}

	int Insert(char c)
	{
		int value = -1;
		::EnterCriticalSection(&cs);
		if (queue.size()<MT_DEQUE_MAX_SIZE)
		{
			queue.push_back(c);
			value = c & 0xff;
		}
		::LeaveCriticalSection(&cs);
		return value;
	}

	int Insert(char *data, int count);
	int Extract(char *data, int max);
	int Peek(char *data, int max);
	int Extract(); //Extracts one letter
	void Clear()
	{
		::EnterCriticalSection(&cs);
		queue.clear();
		::LeaveCriticalSection(&cs);
	}
private:
	CRITICAL_SECTION cs;
	std::deque<char> queue;
};

//____________________________________________________________EventI
// An event, use for multithreading
class EventI 
{
public:
	EventI() 
   { 
      handleEvent = ::CreateEvent(NULL, FALSE, FALSE, NULL); 
   }

   ~EventI() 
   { 
      if (handleEvent) ::CloseHandle(handleEvent); 
   }
   
   BOOL Set() 
   { 
	   return ::SetEvent(handleEvent); 
   }

    BOOL Reset() 
   { 
	   return ::ResetEvent(handleEvent); 
   }

    HANDLE GetHandle(void)
   { 
	   return handleEvent;
   }

	 //Waits until the event is in the signaled state or the time-out interval elapses #WaitForSingleObject+Win32
	 DWORD Wait(DWORD milliseconds)
	 {
		  return ::WaitForSingleObject(handleEvent, milliseconds);
	 }

	 //Waits until the event is in the signaled state #WaitForSingleObject+Win32
	 DWORD Wait()
	 {
		  return ::WaitForSingleObject(handleEvent, INFINITE);
	 }

private:
    HANDLE handleEvent;
};

static void DisplayLastError(HWND hWnd, wchar_t* pWhere);
//____________________________________________________________CriticalSection
class CriticalSection
{
public:
	CriticalSection(void)
	{
		::InitializeCriticalSection(&cs);
	}
	virtual ~CriticalSection(void)
	{
		::DeleteCriticalSection(&cs);
	}
	void Enter()
	{
		::EnterCriticalSection(&cs);
	}
	void Leave()
	{
		::LeaveCriticalSection(&cs);
	}
	bool Try()
	{
		return (::TryEnterCriticalSection(&cs)!=0);
	}
protected:
	CRITICAL_SECTION cs;
};

//____________________________________________________________Gate
class Gate 
{
public:
	Gate() 
   { 
      m_hevt = ::CreateEvent(NULL, FALSE, TRUE, NULL); 
   }
   
	Gate(BOOL fInitiallyOpen) 
   { 
      m_hevt = ::CreateEvent(NULL, FALSE, fInitiallyOpen, NULL); 
   }

   Gate(BOOL fInitiallyOpen, PCTSTR pszName) 
   { 
      m_hevt = ::CreateEvent(NULL, FALSE, fInitiallyOpen, pszName); 
   }

   ~Gate() 
   { 
      ::CloseHandle(m_hevt); 
   }

   DWORD WaitToOpen(DWORD dwTimeout = INFINITE, BOOL fAlertable = FALSE) 
   {
      return(::WaitForSingleObjectEx(m_hevt, dwTimeout, fAlertable)); 
   }
   
   BOOL Open() 
   { 
	   return ::SetEvent(m_hevt); 
   }

private:
    HANDLE m_hevt;
};

////____________________________________________________________MultipleObjects
//class MultipleObjects
//{
//public:
//	MultipleObjects(int objectCount)
//	{
//		this->objectCount = objectCount;
//		handle = new HANDLE[objectCount];
//	}
//	~MultipleObjects(void)
//	{
//	}
//	inline DWORD WaitFor(BOOL bWaitAll, DWORD dwMilliseconds)
//	{
//		return ::WaitForMultipleObjects(objectCount, handle, bWaitAll, dwMilliseconds);
//	}
//
//	inline HANDLE& operator[](long index) // Subscript operator
//	{
//		return handle[index];
//	}
//
//	inline const HANDLE& operator[](long index) const// Subscript operator
//	{
//		return handle[index];
//	}
//private:
//	HANDLE * handle;
//	int objectCount;
//};

//____________________________________________________________LongTs
//long Thread Safe
class LongTs 
{
public:
	LongTs(void)
	{
		value = 0;
	}
	~LongTs(void)
	{
	}
	LONG Add(LONG increment)
	{
		return ::InterlockedExchangeAdd(&value, increment);
	}
	LONG value;
};

//____________________________________________________________Bool
//bool Thread Safe
class BoolTs
{
public:
	BoolTs(void)
	{
		value = false;
		::InitializeCriticalSection(&cs);
	}
	~BoolTs(void)
	{
		::DeleteCriticalSection(&cs);
	}
	void Set(bool value)
	{
		::EnterCriticalSection(&cs);
		this->value = value;
		::LeaveCriticalSection(&cs);
	}

	bool Get(void)
	{
		bool b;
		::EnterCriticalSection(&cs);
		b=value;
		::LeaveCriticalSection(&cs);
		return b;
	}

	bool SetTry(bool value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		this->value = value;
		::LeaveCriticalSection(&cs);
		return true;
	}
	bool GetTry(bool& value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		value=this->value;
		::LeaveCriticalSection(&cs);
		return true;
	}

	Mt::BoolTs& operator=(const bool init)
	{
		::EnterCriticalSection(&cs);
		value = init;
		::LeaveCriticalSection(&cs);
		return *this;
	}

	bool operator==(const bool init)
	{
		bool result = false;
		::EnterCriticalSection(&cs);
		result = (init == value);
		::LeaveCriticalSection(&cs);
		return result;
	}

private:
	bool value;
	CRITICAL_SECTION cs;
};

//____________________________________________________________Double
//double Thread Safe
class DoubleTs
{
public:
	DoubleTs(void)
	{
		value = 0.0;
		::InitializeCriticalSection(&cs);
	}
	~DoubleTs(void)
	{
		::DeleteCriticalSection(&cs);
	}
	void Set(double value)
	{
		::EnterCriticalSection(&cs);
		this->value = value;
		::LeaveCriticalSection(&cs);
	}
	double Get(void)
	{
		double b;
		::EnterCriticalSection(&cs);
		b=value;
		::LeaveCriticalSection(&cs);
		return b;
	}
	bool SetTry(double value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		this->value = value;
		::LeaveCriticalSection(&cs);
		return true;
	}
	bool GetTry(double& value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		value=this->value;
		::LeaveCriticalSection(&cs);
		return true;
	}

	Mt::DoubleTs& operator=(const double init)
	{
		Set(init);
		return *this;
	}

	double operator=(const Mt::DoubleTs& init)
	{
		return Get();
	}

	bool operator==(const double init)
	{
		return (Get()==init);
	}

	operator double()
	{
		return Get();
	}
private:
	double value;
	CRITICAL_SECTION cs;
};

//____________________________________________________________Int
//int Thread Safe
class IntTs
{
public:
	IntTs(void)
	{
		value = 0;
		::InitializeCriticalSection(&cs);
	}
	~IntTs(void)
	{
		::DeleteCriticalSection(&cs);
	}
	void Set(int value)
	{
		::EnterCriticalSection(&cs);
		this->value = value;
		::LeaveCriticalSection(&cs);
	}
	int Get(void)
	{
		int b;
		::EnterCriticalSection(&cs);
		b=value;
		::LeaveCriticalSection(&cs);
		return b;
	}
	bool SetTry(int value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		this->value = value;
		::LeaveCriticalSection(&cs);
		return true;
	}
	bool GetTry(int& value)
	{
		if (::TryEnterCriticalSection(&cs)==0) return false;
		value=this->value;
		::LeaveCriticalSection(&cs);
		return true;
	}

	Mt::IntTs& operator=(const int init)
	{
		Set(init);
		return *this;
	}

	int operator=(const Mt::IntTs& init)
	{
		return Get();
	}

	bool operator==(const int init)
	{
		return (Get()==init);
	}

	operator int()
	{
		return Get();
	}

private:
	int value;
	CRITICAL_SECTION cs;
};
//InterlockedExchange and InterlockedExchangePointer

//____________________________________________________________String
//wchar_t* Thread Safe
class StringTs
{
public:
	StringTs(void);
	~StringTs(void);
	bool Set(const wchar_t* text);
	int GetLength();
	bool CopyData(wchar_t* buffer, int bufferSize);
	int CreateCopyData(wchar_t** buffer); //It allocates new memory that must be released manually
	int ExtractCopyData(wchar_t** buffer); //It allocates new memory that must be released manually
private:
	wchar_t* pData;
	CRITICAL_SECTION cs;
};

//____________________________________________________________ WstringTs
//wstring Thread Safe
class WstringTs
{
public:
	WstringTs(void);
	~WstringTs(void);
	void Set(const wstring& text);
	void Concat(const wstring& text);
	void Get(wstring& out_text);
	void GetAndClear(wstring& out_text);
	//
	bool SetTry(const wstring& text);
	bool ConcatTry(const wstring& text);
	bool GetTry(wstring& out_text);
	bool GetAndClearTry(wstring& out_text);
private:
	wstring data;
	CRITICAL_SECTION cs;
};

//____________________________________________________________IOCport
// It provides support to use an Input Output Completion Port
class IOCport 
{
public:
	IOCport() 
	{ 
		handleIOCP = NULL; 
		Create(0);
	}

	IOCport(int maxConcurrency) 
	{ 
		handleIOCP = NULL; 
		if (maxConcurrency != -1)
		{
			Create(maxConcurrency);
		}
	}

	~IOCport() 
	{ 
		if (handleIOCP != NULL)
		{
			::CloseHandle(handleIOCP); 
		}
	}

	BOOL AssociateDevice(HANDLE hDevice, ULONG_PTR compKey) 
	{
		return (::CreateIoCompletionPort(hDevice, handleIOCP, compKey, 0) == handleIOCP);
	}

	BOOL AssociateSocket(SOCKET hSocket, ULONG_PTR compKey) 
	{
		return (::CreateIoCompletionPort((HANDLE)hSocket, handleIOCP, compKey, 0) == handleIOCP);
		//return(AssociateDevice((HANDLE) hSocket, compKey));
	}

	BOOL PostStatus(ULONG_PTR compKey) 
	{
		return ::PostQueuedCompletionStatus(handleIOCP, 0, compKey, NULL);
	}

	BOOL PostStatus(ULONG_PTR compKey, DWORD numBytes) 
	{
		return ::PostQueuedCompletionStatus(handleIOCP, numBytes, compKey, NULL);
	}

	BOOL PostStatus(ULONG_PTR compKey, DWORD numBytes, OVERLAPPED& overlapped) 
	{
		return ::PostQueuedCompletionStatus(handleIOCP, numBytes, compKey, &overlapped);
	}

	BOOL GetStatus(ULONG_PTR& compKey) 
	{
		DWORD numBytes;
		OVERLAPPED** ppOverlapped;
		return ::GetQueuedCompletionStatus(handleIOCP, &numBytes, &compKey, ppOverlapped, INFINITE);
	}

	BOOL GetStatus(ULONG_PTR& compKey, DWORD& numBytes) 
	{
		OVERLAPPED** ppOverlapped;
		return ::GetQueuedCompletionStatus(handleIOCP, &numBytes, &compKey, ppOverlapped, INFINITE);
	}

	BOOL GetStatus(ULONG_PTR& compKey, DWORD& numBytes, OVERLAPPED** ppOverlapped) 
	{
		return ::GetQueuedCompletionStatus(handleIOCP, &numBytes, &compKey, ppOverlapped, INFINITE);
	}

	BOOL GetStatus(ULONG_PTR& compKey, DWORD& numBytes, OVERLAPPED** ppOverlapped, DWORD milliseconds) 
	{
		return ::GetQueuedCompletionStatus(handleIOCP, &numBytes, &compKey, ppOverlapped, milliseconds);
	}

private:
	HANDLE handleIOCP;
	BOOL Create(int maxConcurrency) 
	{
		handleIOCP = ::CreateIoCompletionPort(INVALID_HANDLE_VALUE, NULL, 0, maxConcurrency);
		return(handleIOCP != NULL);
	}
};

//____________________________________________________________IOCportTimer
// It provides support to use an Input Output Completion Port Timer
class IOCportTimer
{
public:
	struct group_
	{
		bool running;
		IOCport* iocp;
		ULONG_PTR completionKey;
		HANDLE handle;
	};
	IOCportTimer(void);
	virtual ~IOCportTimer(void);
	bool Start(Mt::IOCport* iocp, ULONG_PTR completionKey, int iniMillisec, int repeatMillisec);
	void Stop();
	static void DisplayLastError(const wchar_t* pszWhere, bool bServiceNotification);
private:
	HANDLE m_h;
	void Destructor();
	group_ m_group;
	static void Repeat(PVOID pvoid);
};

//____________________________________________________________ InputOutputRequest
class InputOutputRequest : public OVERLAPPED 
{
public:
	InputOutputRequest() 
	{
		Internal = InternalHigh = 0;   
		Offset = OffsetHigh = 0;   
		hEvent = NULL;
		bufferSize = 0;
		data = NULL;
	}

	~InputOutputRequest() 
	{
		if (data != NULL) ::VirtualFree(data, 0, MEM_RELEASE);
	}

	bool AllocBuffer(SIZE_T bufferSize) 
	{
		if (data != NULL) ::VirtualFree(data, 0, MEM_RELEASE);
		this->bufferSize = 0;
		//
		data = ::VirtualAlloc(NULL, bufferSize, MEM_COMMIT, PAGE_READWRITE);
		bool ok = (data != NULL);
		this->bufferSize = bufferSize;
		return ok;
	}

	bool Read(HANDLE hDevice) 
	{
		return (::ReadFile(hDevice, data, (DWORD)bufferSize, NULL, this) == TRUE);
	}

	bool Read(HANDLE hDevice, LARGE_INTEGER offset ) 
	{
		Offset  = offset.LowPart;
		OffsetHigh = offset.HighPart;
		return (::ReadFile(hDevice, data, (DWORD)bufferSize, NULL, this) == TRUE);
	}

	bool Write(HANDLE hDevice) 
	{
		return (::WriteFile(hDevice, data, (DWORD)bufferSize, NULL, this) == TRUE);
	}

	bool Write(HANDLE hDevice, LARGE_INTEGER offset) 
	{
		Offset = offset.LowPart;
		OffsetHigh = offset.HighPart;
		return (::WriteFile(hDevice, data, (DWORD)bufferSize, NULL, this) == TRUE);
	}
private:
	SIZE_T bufferSize;
	PVOID  data;
};

//____________________________________________________________ InputOutputRequestX
class InputOutputRequestX : public OVERLAPPED 
{
public:
	InputOutputRequestX();
	~InputOutputRequestX();
	bool AllocBuffer(SIZE_T bufferSize);
	bool ReadA(HANDLE hDevice, LARGE_INTEGER offset);
	bool ReadB(HANDLE hDevice, LARGE_INTEGER offset); 
	int CompareAandB();
	DWORD bytesA;
	DWORD bytesB;
private:
	SIZE_T bufferSize;
	//char *dataA;
	//char *dataB;
	PVOID dataA;
	PVOID dataB;
	int sizeint;
};

//____________________________________________________________Service
// It provides support to implement Windows Services
// They run in the background and start when the computer starts
class Service
{
public:
	Service(void);
	virtual ~Service(void);
	virtual wchar_t* GetName(); //Implement this fuction
	virtual wchar_t* GetDisplayName(); //Implement this fuction
	virtual wchar_t* GetDescription(); //Implement this function
	virtual void Run(const wchar_t* pszUserName, const wchar_t* pszPassword, wchar_t* lpCmdLine, LPSERVICE_MAIN_FUNCTION pServiceFunction);
	enum CompletionKey
	{ 
		Control, 
		Server
	};
	void WINAPI ServiceMain(DWORD dwArgc, PTSTR* pszArgv);
	static void DisplayLastError(const wchar_t* pszWhere, bool bServiceNotification);
protected:
	static DWORD WINAPI HandlerEx(DWORD control, DWORD type, PVOID pData, PVOID pContext);
	DWORD OnControlStop(DWORD type, PVOID pData);
	DWORD OnControlPause(DWORD type, PVOID pData);
	DWORD OnControlContinue(DWORD type, PVOID pData);
	DWORD OnControlShutdown(DWORD type, PVOID pData);
	DWORD OnControlInterrogate(DWORD type, PVOID pData);
	DWORD OnControlParamChange(DWORD type, PVOID pData);
	DWORD OnControlDeviceEvent(DWORD type, PVOID pData);
	DWORD OnControlHardwareProfileChange(DWORD type, PVOID pData);
	DWORD OnControlPowerEvent(DWORD type, PVOID pData);
	virtual void OnStart(DWORD dwArgc, PTSTR* pszArgv);
	virtual void OnStop();
	virtual void OnPause();
	virtual void OnContinue();
	virtual void OnRequestProcessing();  // This is where the actual work is done
	void DisplayLastError_(const wchar_t* pszWhere);
	SERVICE_STATUS m_ServiceStatus;
	SERVICE_STATUS_HANDLE m_hss;
	Mt::IOCport inputOutputCompletionPort;
	DWORD m_type;
	PVOID m_pData;
private:
	bool Install(const wchar_t* pszUserName, const wchar_t* pszPassword);
	bool Remove();
	static int m_nObjectCount;
	bool m_bDebug;
	static bool m_bFirstService;
	Mt::Gate m_gate;
};

//____________________________________________________________ IThread
class IThread
{
public:
	// Write your thread code inside this function stopping when running is false, report the thread progress (0.0 to 100.0) using the progress variable.
	virtual DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime)=0; 
};

//____________________________________________________________ ISuspendedThread
class ISuspendedThread
{
public:
	virtual DWORD ThreadFunc()=0;
};

//____________________________________________________________ ThreadObject
// It provides support to create an additional thread
class ThreadObject
{
public:
	ThreadObject(void);
	~ThreadObject(void);
	//
	// This functions starts a new thread,  when the thread completes it will post a message to the
	// window specified by hWnd,  If hWnd is NULL, the message will not be posted
	// When the message is posted, the WPARAM will be the thread returned value, and the LOWORD of LPARAM 
	// will be the respective work_id  (work_id must be set to a value greater than zero) #_beginthreadex+Win32
	bool StartThread(HWND hWnd, UINT uMsg, LPARAM work_id, IThread& ithread);
	//
	// Wait until this funcion completes to verify that the thread has finished #WaitForSingleObject+Win32
	void WaitForExit();
	//
	Mt::BoolTs running;  // use this to stop the thread
	Mt::DoubleTs progress; // use this to report progress: 0.0 to 100.0
	Mt::BoolTs resetTime; // use this to reset the remaining time
	//
	double GetProgressInfo(wchar_t* buffer, int buffer_len);
protected:
	static unsigned WINAPI PrivateThreadFunc(LPVOID param);
	HANDLE hThread;
	unsigned int threadId;
	Sys::LowResStopwatch stopwatch;
	Mt::IThread* ithread;
	int dotCount;
	HWND hWnd;
	UINT message;
	LPARAM work_id;
};

//____________________________________________________________ SuspendedThread
// It provides support to create a thread that can be suspended
// You should not destroy an object of this class if the thread is busy
class SuspendedThread
{
public:
	SuspendedThread(void);
	~SuspendedThread(void);
	bool IsBusy();
	//
	// Call this function to wake up the thread so that the it can complete some work
	// A message uMsg (i.e. WM_USER) will be sent to the window specified by hWnd when
	// the work with work_id is completed by the thread (work_id must be greater than zero)
	bool WakeUpAndWork(HWND hWnd, UINT uMsg, LPARAM work_id, ISuspendedThread& ithread);
protected:
	static unsigned WINAPI PrivateThreadFunc(LPVOID param);
	HANDLE hThread;
	unsigned int threadId;
	Mt::ISuspendedThread* ithread;
	Mt::EventI eventRequest;
	Mt::BoolTs terminate;
	HWND hWnd;
	Mt::BoolTs busy;
	LPARAM work_id;
	UINT message;
};

#ifdef WIN_SOCKETS_SUPPORT

//_____________________________________________ Smtp
// It provides support to send email using SMTP in a multithread program
class Smtp : public Mt::IThread
{
public:
	Smtp();
	virtual ~Smtp();
	const wchar_t* TestConnection(const wchar_t* smtpServerName);
	//
	// For normal SMTP use port 25
	// For SSL mail such as smtp.gmail.com use port 465 and protocol SP_PROT_TLS1
	void Setup(const wchar_t* smtpServerName, const wchar_t* username, const wchar_t* password, int port, bool isSSL, DWORD protocol);
	wchar_t* GetErrorDescr();
	//
	// Use this to verify which mails were sent
	vector<Sys::EMail> emailList; 
	//
	static void GetTimeHeader(char* buffer, int bufferSize);
	static void GetTimeHeader(wchar_t* buffer, int bufferSize);
	//_______________________________________________________ Mt::IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime);
protected:
	DWORD SendMail(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime);
	DWORD SSLSendMail(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime);
	//
	int _port;
	bool _isSSL;
	DWORD _protocol;
	wchar_t errorDescr[256];
	//______________________________________________________________________ Regular Socket
	bool IsOk(const wchar_t* errorDescription, Sys::Socket& skt, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool SendHELO(Sys::Socket& skt);
	bool SendAUTH(Sys::Socket& skt);
	bool SendUsername(Sys::Socket& skt);
	bool SendPassword(Sys::Socket& skt);
	bool SendMAILFrom(Sys::Socket& skt, const Sys::EMail& email);
	bool SendRCPTTo(Sys::Socket& skt, const Sys::EMail& email);
	bool SendTimeHeader(Sys::Socket& skt);
	bool SendFrom(Sys::Socket& skt, const Sys::EMail& email);
	bool SendSender(Sys::Socket& skt, const Sys::EMail& email);
	bool SendReplyTo(Sys::Socket& skt, const Sys::EMail& email);
	bool SendSubject(Sys::Socket& skt, const Sys::EMail& email);
	bool SendTo(Sys::Socket& skt, const Sys::EMail& email);
	bool SendMime(Sys::Socket& skt, const Sys::EMail& email);
	bool SendMultipartMixed(Sys::Socket& skt, const Sys::EMail& email);
	bool SendBodyFrontier(Sys::Socket& skt, const Sys::EMail& email);
	bool SendBodyContentType(Sys::Socket& skt, const Sys::EMail& email);
	bool SendBlankLine(Sys::Socket& skt);
	bool SendDATA(Sys::Socket& skt);
	bool SendBody(Sys::Socket& skt, const Sys::EMail& email);
	bool SendDATAEnd(Sys::Socket& skt);
	bool SendAttachmentFrontier(Sys::Socket& skt, const Sys::EMail& email);
	bool SendAttachmentContentType(Sys::Socket& skt, const Sys::EMail& email);
	bool SendAttachmentContentDisposition(Sys::Socket& skt, const Sys::EMail& email);
	bool SendAttachmentTransferEncoding(Sys::Socket& skt, const Sys::EMail& email);
	bool SendAttachment(Sys::Socket& skt, const Sys::EMail& email);
	bool SendAttachmentEnd(Sys::Socket& skt, const Sys::EMail& email);
	bool SendQuit(Sys::Socket& skt);
	//______________________________________________________________________ SSL
	bool IsOk(const wchar_t* errorDescription, const string& response, Sys::Socket& skt, Mt::BoolTs& running, Mt::DoubleTs& progress, Sys::SecuritySupportProvider& ssp);
	bool SendHELO(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendAUTH(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendUsername(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendPassword(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendMAILFrom(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendRCPTTo(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendTimeHeader(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendFrom(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendSender(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendReplyTo(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendSubject(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendTo(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendMime(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendMultipartMixed(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendBodyFrontier(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendBodyContentType(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendBlankLine(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendDATA(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendBody(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendDATAEnd(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	bool SendAttachmentFrontier(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendAttachmentContentType(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendAttachmentContentDisposition(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendAttachmentTransferEncoding(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendAttachment(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendAttachmentEnd(Sys::Socket& skt, const Sys::EMail& email, Sys::SecuritySupportProvider& ssp);
	bool SendQuit(Sys::Socket& skt, Sys::SecuritySupportProvider& ssp);
	//
	string username;
	string password;
	string serverName;
	int state;
};
//_____________________________________________ SmtpAsync
//class SmtpAsync : public Smtp
//{
//public:
//	SmtpAsync();
//	virtual ~SmtpAsync();
//	wchar_t* TestConnection(HWND hWnd, const wchar_t* smtpServerName);
//	bool SendEmail(HWND hWnd, const vector<Sys::EMail>& emailList, const wchar_t* smtpServerName, const wchar_t* username, const wchar_t* password);
//	//
//	int OnSocketNotify(LPARAM lParam);// Call this on Window_SocketNotify(Win::Event& e)
//	bool OnSocketHostname();// Call this on Window_SocketHostname(Win::Event& e)
//private:
//	bool OnFdConnect();
//	bool OnFdRead(int code);
//	bool OnFdWrite(bool write);
//	int state;
//	Sys::Socket sock;
//	int messageIndex;
//	HWND hWnd;
//	char buffer[MAXGETHOSTSTRUCT];
//};

#endif

} //____________________________________________________ namespace Mt::End

// Mathematics
namespace Math //________________________________________ namespace Math::Ini
{

//_____________________________________________________________________ IFunction
// A function of one variable
// double EvaluateFunc(const double x)
class IFunction
{
public:
	virtual double EvaluateFunc(const double x)=0;
};

//_____________________________________________________________________ IFunctionC
// A function of one complex variable
// complex<double> EvaluateFunc(const double x)
class IFunctionC
{
public:
	virtual complex<double> EvaluateFunc(const double x)=0;
};

//_____________________________________________________________________ IFunctionD
// A function of one variable and its derivative
// double EvaluateFunc(const double x)
// void EvaluateFuncAndDeriv(const double x, double& Fx, double& dFx)
class IFunctionD : public Math::IFunction   
{
public:
	// The function must compute F(x) and dFx/dx
	virtual void EvaluateFuncAndDeriv(const double x, double& Fx, double& dFx)=0; 
};

//_____________________________________________________________________ IMultiVarFunc
// A function of several variables
// double EvaluateFunc(const valarray<double>& x);
class IMultiVarFunc 
{
public:
	virtual double EvaluateFunc(const valarray<double>& x)=0;
};

//_____________________________________________________________________ IMultiVarFuncD
// A function of several variables and its gradient
// double EvaluateFunc(const valarray<double>& x);
// void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient);
class IMultiVarFuncD : public Math::IMultiVarFunc 
{
public:
	// The function must compute F(x) and its gradient
	virtual void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient)=0;
};

//_____________________________________________________________________ Point
struct Point
{
	double x;
	double y;
};

//_____________________________________________________________________ DPoint
struct DPoint
{
	double x;
	double y;
	double dy;
};

//_____________________________________________________________________ ISimmAnneal
// The general interface to use Simulated Annealing Optimization
class ISimAnneal
{
public:
	virtual void SimAnnealInitialize()=0; //Initialize the solution
	virtual void SimAnnealPerturb(Math::ISimAnneal& original, double temperature, double initialTemperature)=0; //Perturb the solution
	virtual double SimAnnealGetError()=0; //Return the solution error
	virtual void SimAnnealCopy(const Math::ISimAnneal& source) = 0;  // Copy the solution 
};

//_____________________________________________________________________ SimAnnealParam
class SimAnnealParam
{
public:
	SimAnnealParam();
	~SimAnnealParam();
	int numTemps;
	int numIterations;
	double initialTemp;
	double finalTemp;
	bool isCoolingScheduleLinear;
	int cycles;
	double goal;
};

//_____________________________________________________________________ IGenetic
// The general interface to use Genetic Algorithm Optimization
class IGenetic
{
public:
	//Initialize one individual
	virtual void GeneticInitialize(Sys::BoolArray& bits)=0;
	//
	// It returns the individual error in the range from 0 to 1
	virtual double GeneticGetError()=0;
	//
	// It converts the input bits to the specific variables of the problem
	virtual void GeneticSetFromBits(const Sys::BoolArray& bits) = 0;
};

//_____________________________________________________________________ GeneticParam
class GeneticParam
{
public:
	GeneticParam();
	~GeneticParam();
	int initPopulationSize;
	int numGenerations;
	double overPopulation;
	double mutationProbability;
	double crossoverProbability;
	double goal;
};

//_____________________________________________________________________ Oper
// A set of functions to perform Vector and Matrix operations
class Oper
{
public:
	static bool IsPrime(int x);
	//
	// It returns an angle from 0 to 2pi
	// ArcTangent(1, 1) =  0.785398 radians (45 degrees)
	// ArcTangent(1, -1) = 2.35619 radians (135 degrees)
	// ArcTangent(-1, -1) = 3.9270 radians (225 degrees)
	// ArcTangent(-1, 1) = 5.4978 radians (315 degrees)
	static double ArcTangent(double y, double x);
	static double Round(double value, int decimalCount);
	static double DotProduct(const valarray<double>& input_a, const valarray<double>& input_b);

	// returns a negative value if error
	static double ComputeMse(const MATRIX& input_a, const MATRIX& input_b);
	static wchar_t *ConfusionMatrix(const MATRIX& output, const MATRIX& target, MATRIX& confusionMatrix, double threshold);
	static wchar_t *ConfusionMatrix(const MATRIXC& output, const MATRIXC& target, MATRIX& confusionMatrix, double threshold);
	static int GetClass(const valarray<double>& inputRow, double threshold);
	static int GetClass(const valarray<complex<double> >& inputRow, double threshold);
	static wchar_t* GetClass(const MATRIX input, valarray<int>& classes, double threshold);
	static wchar_t* GetClass(const MATRIX input, valarray<double>& classes, double threshold);
	static wchar_t* GetClass(const MATRIXC input, valarray<double>& classes, double threshold);
	//
	static void AddValue(MATRIX& in_out, double value);
	static void MultiplyBy(MATRIX& in_out, double value);
	static void DivideBy(MATRIX& in_out, double value);
	static bool CopyToClipboard(HWND hWnd, const MATRIX& input);
	static bool CopyColToClipboard(HWND hWnd, const MATRIX& input, int col_index);
	static bool CopyRowToClipboard(HWND hWnd, const MATRIX& input, int row_index);
	static wchar_t* Product(const MATRIX& input_a, const valarray<double>& input_b, valarray<double>& output);
	static wchar_t* Product(const MATRIXC& input_a, const valarray<complex <double> >& input_b, valarray<complex <double> >& output);
	static wchar_t* Product(const MATRIX& input_a, const valarray<double>& input_b, MATRIX& output);
	static wchar_t* Product(const MATRIX& input_a, const MATRIX& input_b, MATRIX& output);
	static wchar_t* Product(const MATRIXC& input_a, const MATRIXC& input_b, MATRIXC& output);
	static wchar_t* Product(const valarray<double>& input_a, const MATRIX& input_b, int rowb_index, MATRIX& output);
	static wchar_t* Product(const valarray<complex<double> >& input_a, const MATRIXC& input_b, int rowb_index, MATRIXC& output);
	static bool Transpose(const MATRIX& input, MATRIX& output);
	static bool Transpose(const MATRIXC& input, MATRIXC& output);
	static bool GetMinMax(const MATRIXC& input, double& out_min, double& out_max);
	static bool GetMinMax(const MATRIX& input, double& out_min, double& out_max);
	static double GetMinimum(const MATRIX& input);
	static double GetMaximum(const MATRIX& input);

	//
	static void SetTo(MATRIX& in_out, double value);
	static void SetTo(valarray<double>& in_out, double value);
	static bool CreateMatrix(MATRIX& in_out, int rowCount, int colCount);
	static bool InsertRow(MATRIX& in_out, int rowIndex);
	static bool InsertCol(MATRIX& in_out, int colIndex);
	static bool InsertCell(valarray<double>& in_out, int index);
	static bool InsertCell(valarray<complex<double> >& in_out, int index);
	static bool DeleteRow(MATRIX& in_out, int rowIndex);
	static bool DeleteCol(MATRIX& in_out, int colIndex);
	static bool DeleteCell(valarray<double>& in_out, int index);
	static bool DeleteCell(valarray<complex<double> >& in_out, int index);
	static bool AppendDown(MATRIX& in_out, const MATRIX& in_B);
	static bool AppendRight(MATRIX& in_out, const MATRIX& in_B);
	static void NormalizeRows(MATRIX& in_out);
	static void NormalizeCols(MATRIX& in_out);
	static bool AreTheyEqual(const MATRIX& a, const MATRIX& b);
	static bool AreTheyEqual(const MATRIXC& a, const MATRIXC& b);
	//
	static bool CreateMatrix(MATRIXC& in_out, int rowCount, int colCount);
	static bool InsertRow(MATRIXC& in_out, int rowIndex);
	static bool InsertCol(MATRIXC& in_out, int colIndex);
	static bool DeleteRow(MATRIXC& in_out, int rowIndex);
	static bool DeleteCol(MATRIXC& in_out, int colIndex);
	static bool AppendDown(MATRIXC& in_out, const MATRIXC& in_B);
	static bool AppendRight(MATRIXC& in_out, const MATRIXC& in_B);
	//
	static bool GetRows(const MATRIX& input, MATRIX& output, const valarray<int> indexes);
	static bool GetCols(const MATRIX& input, MATRIX& output, const valarray<int> indexes);
	static bool DeleteRows(MATRIX& input, const valarray<int> indexes);
	static bool DeleteCols(MATRIX& input, const valarray<int> indexes);
	static bool DeleteRows(const MATRIX& input, MATRIX& output, const valarray<int> indexes);
	static bool DeleteCols(const MATRIX& input, MATRIX& output, const valarray<int> indexes);
	static bool GetRow(const MATRIX& input, valarray<double>& output, int index);
	static bool GetCol(const MATRIX& input, valarray<double>& output, int index);
	//
	static bool GetRows(const MATRIXC& input, MATRIXC& output, const valarray<int> indexes);
	static bool GetCols(const MATRIXC& input, MATRIXC& output, const valarray<int> indexes);
	static bool DeleteRows(MATRIXC& input, const valarray<int> indexes);
	static bool DeleteCols(MATRIXC& input, const valarray<int> indexes);
	static bool DeleteRows(const MATRIXC& input, MATRIXC& output, const valarray<int> indexes);
	static bool DeleteCols(const MATRIXC& input, MATRIXC& output, const valarray<int> indexes);
	static bool GetRow(const MATRIXC& input, valarray<complex<double> >& output, int index);
	static bool GetCol(const MATRIXC& input, valarray<complex<double> >& output, int index);
	//
	static double Sign(const double &a, const double &b);
	static double LineFitting(const valarray<double>& in_x, const valarray<double>& in_y, double &out_m, double &out_b);
	//
	static bool CreateRandomSet(valarray<double>& in_out, int length, int maxValue);
	static bool CreateRandom(MATRIX& in_out, int rowCount, int colCount, double minValue, double maxValue);
	static bool CreateRandom(valarray<double>& in_out, int length, double minValue, double maxValue);
	static bool WrapVector(const valarray<double>& input, int colCount, MATRIX& output);
	static bool WrapVector(const valarray<complex<double> >& input, int colCount, MATRIXC& output);
	Oper();
private:
	~Oper();
};

//____________________________________________________________ SimulatedAnnealing
// It provides support to perform Simulated Annealing Optimization
class SimulatedAnnealing : public Math::SimAnnealParam, public Mt::IThread
{
public:
	SimulatedAnnealing(void);
	~SimulatedAnnealing(void);
	void SetSimulationParameters(const Math::SimAnnealParam& in_param);
	void GetSimulationParameters(Math::SimAnnealParam& out_param);
	bool stopWhenDone;
	void Setup(Mt::DoubleTs& error, ISimAnneal& solution, ISimAnneal& work1, ISimAnneal& work2);
	//_____ IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
private:
	//double GetTemperature(int index);
	//bool IsAcceptedByMetropolis(double temperature, double deltaError, double k);
	double EstimateK(int N, Mt::BoolTs& running);
	ISimAnneal *solution;
	ISimAnneal *work1; 
	ISimAnneal *work2;
	Mt::DoubleTs *error; 
	
};

//____________________________________________________________ GeneticIndividual
// It represents one individual in a Genetic Algorithm Optimization
class GeneticIndividual
{
public:
	GeneticIndividual();
	~GeneticIndividual();
	Sys::BoolArray bits;
	double error;
	double fitness;
	GeneticIndividual(const GeneticIndividual& init);
	GeneticIndividual& operator=(const GeneticIndividual& init);
	void Copy(const GeneticIndividual &init);
	bool operator<(const GeneticIndividual& input) const;
};

//____________________________________________________________ GeneticAlgorithm
// It provides support to perform Genetic Algorithm Optimization
class GeneticAlgorithm : public Math::GeneticParam, public Mt::IThread
{
public:
	GeneticAlgorithm();
	~GeneticAlgorithm();
	bool Setup(Mt::DoubleTs& error, int bitsPerIndividual, Math::IGenetic& igenetic);
	void Delete();
	//int blockSize; // The algorithm will perform crossover using complete blocks of this size
	GeneticIndividual bestIndividual;
	//
	void ListIndividuals(HWND hWnd);
	bool stopWhenDone;
	//____________________________________ IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
protected:
	vector<Math::GeneticIndividual> poolA;
	vector<Math::GeneticIndividual> poolB;
	list<Math::GeneticIndividual> poolOverPop;
	//
	virtual void CreateNewGeneration(vector<Math::GeneticIndividual>& parents, vector<Math::GeneticIndividual>& children);
	virtual void ComputeFitness(vector<Math::GeneticIndividual>& pool);
	virtual void ComputeChoices(vector<Math::GeneticIndividual>& pool);
	virtual void Reproduce(const Math::GeneticIndividual& mother, const Math::GeneticIndividual& father, Math::GeneticIndividual& out_child, bool isFirstChild);
	virtual void SelectParents (int &count,  int &out_motherIndex, int &out_fatherIndex);
private:
	Math::IGenetic* igenetic;
	vector<int> selection;
	Mt::DoubleTs *error;
};

//_____________________________________________________________________FindMinimum
// It finds the minimum of a function of one variable, i.e. y = f(x)
class FindMinimum
{
public:
	FindMinimum(void);
	//
	// Given a function y = f(x), and two distinct initial values of x: a and b 
	// Bracketing searches the downhill direction to return:
	//     - three values of x:  a, b, c that bracket a minimum of the function
	//     - three values of y: ya = f(a), yb = f(b), and yc = f(c).
	static void Bracketing(Math::IFunction& func, Math::Point& a, Math::Point& b, Math::Point& c);
	//
	// It computes the value of x that minimizes y = f(x)
	// given the values of a, b and c returned by the funcion Bracketing()
	// The function returns the y = f(x) and out_minX where out_minX is value of x that produces the minimum value of y 
	static double FindMinimum::Brent(Math::IFunction& func, const double a, const double b, const double c, const double tol, double &out_minX);
	//
	// It computes the value of x that minimizes y = f(x)
	// given the values of a, b and c returned by the funcion Bracketing()
	// The function returns the y = f(x) and min_out_x where min_out_x is value of x that produces the minimum value of y 
	static double BrentWithDerivative(Math::IFunctionD& func, const double a, const double b, const double c, const double tol, double &out_minX);
private:
	virtual ~FindMinimum(void);
};

//_____________________________________________________________________ FindMinimumMV
// It finds the minimum of a multivariable function, i.e. y = f(x0, x2, ..., xn)
// It requires the computation of:  f(x0, x2, ..., xn) and its derivative
class FindMinimumMV : public Mt::IThread, public Math::IFunctionD
{
public:
	FindMinimumMV();
	virtual ~FindMinimumMV();
	//
	// method: WT_MATH_CONJGRAD, WT_MATH_VARMETRIC
	bool Setup(Mt::DoubleTs& error, Math::IMultiVarFuncD& ifunc, const valarray<double>& startingPoint, int numIterations, double goal, int method);
	bool stopWhenDone;
	valarray<double> solution;
	//____________________________________ IFunctionD
	double EvaluateFunc(const double x);
	void EvaluateFuncAndDeriv(const double x, double& Fx, double& dFx); //double EvaluateDeri(const double x);
	//____________________________________ IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
protected:
	int method;
	double ConjugateGradient(Mt::BoolTs& running, Mt::DoubleTs& progress);
	double VariableMetric(Mt::BoolTs& running, Mt::DoubleTs& progress);
	double MoveAlongDirection();
	valarray<double> xtmp, dertmp; // To reduce periodic memory allocation
	valarray<double> derivative;
	valarray<double> derg;
	valarray<double> derh;
	Math::IMultiVarFuncD* ifunc;
	Mt::DoubleTs *error;
	int numIterations;
	double goal;
	//______________________ Variable Metric
	MATRIX hessian;
	valarray<double> g;
};

//_____________________________________________________________________ PowellFindMinMV
// It finds the minimum of a multivariable function, i.e. y = f(x0, x2, ..., xn)
// This function is set when calling Setup(error, *this, startingPoint, 200)
// It requires only the computation of:  f(x0, x2, ..., xn)
class PowellFindMinMV : public Mt::IThread, public Math::IFunction
{
public:
	PowellFindMinMV();
	virtual ~PowellFindMinMV();
	bool Setup(Mt::DoubleTs& error, Math::IMultiVarFunc& ifunc, const valarray<double>& startingPoint, int numIterations);
	bool stopWhenDone;
	valarray<double> solution;
	//
	// You may call to this function to release memory, but you dont have to
	void Delete();
	//____________________________________ Mt::IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
private:
	//____________________________________ Math::IFunction
	double EvaluateFunc(const double x);
	Math::IMultiVarFunc* ifunc;
	Mt::DoubleTs *error;
	int numIterations;
	MATRIX xi;
	valarray<double> ptt;
	valarray<double> xit;
	double MoveAlongDirection();
};

//_____________________________________________________________________ SingValDecompos
// It performs a singular value decomposition
class SingValDecompos
{
public:
	~SingValDecompos();
	static wchar_t* Decompose(MATRIX& in_out_a, valarray<double>& out_s, MATRIX& out_v); 
	static wchar_t* Decompose(const MATRIX& in_a, MATRIX& out_u, valarray<double>& out_s, MATRIX& out_v); 
	static bool BackSubstitution(const MATRIX& u, const valarray<double>& s, const MATRIX& v, const valarray<double>& b, valarray<double>& x); 
private:
	static double Module(double a, double b); 
	static double Sign(double a, double b);
	SingValDecompos();
};

//_____________________________________________________________________ Remez
// Filter Design:  Low Pass, High Pass, Band Passs, Hilbert, Differentiator
//Given a set of bands, it computes the Finite Impulse Response of a filter: h[n]. 
class Remez // The Parks-McClellan Algorithm: Oppenheim & Schafer: section 7.6.3
{
public:
	struct Band
	{
		double w1; // Frequency 1 in radians:  0 to pi
		double w2; // Frequency 2 in radians:  0 to pi
		double gain; // Band gain: 0 to 1  (Oppenheim & Schafer: Hd) 
		double priory; // Band priority:  0 to 1 (Oppenheim & Schafer: W) 
	};
	static double ComputeImpulseResponse(const vector<Math::Remez::Band>& in_band, int length, valarray<double>& out_impulseResponse); // Low Pass, High Pass or Band Pass
	static double ComputeHilbertImpulseResponse(int length, valarray<double>& out_impulseResponse);
	static double ComputeDifferentiatorImpulseResponse(int length, valarray<double>& out_impulseResponse);
	~Remez();
private:
	static double ImpulseResponse(const vector<Math::Remez::Band>& in_band, int length, int remezType, valarray<double>& out_impulseResponse);//, valarray<double>& error, valarray<double>& freq);
private:
	struct BandPoint
	{
		double w; // Frequency in radians:  0 to pi
		double gain; // Gain: 0 to 1  (Oppenheim & Schafer: Hd) 
		double priority; // Priority:  0 to 1 (Oppenheim & Schafer: W) 
		double error;
		double x;
		bool isExtrema;
	};
	struct Extrema
	{
		int index;
		double error;
		bool operator<(const Extrema& extrema) const
		{
			return (fabs(error) < fabs(error));
		}
	};
	static void CreatePerformanceData(const vector<Math::Remez::Band> in_band, int firType, int numExtrema, vector<BandPoint>& out_perfomanceData);
	static void AdjustPerformanceData(vector<BandPoint>& in_performanceData, int firType);
	static void CreateInitialExtremaIndex(vector<BandPoint>& in_performanceData, int numExtrema, set<int>& out_extremaIndex);
	static double ComputeDelta(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, valarray<double>& in_b);
	static void ComputeErrors(vector<BandPoint>& in_performanceData,  set<int>& in_extremaIndex, valarray<double>& in_C, valarray<double>& in_d);
	static void ComputeB(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, valarray<double>& out_b);
	static double ComputeA(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, double w, valarray<double>& in_C, valarray<double>& in_d);
	static void ComputeA(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, valarray<double>& in_C, valarray<double>& in_d, valarray<double>& out_A);
	static void ComputeC(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, double delta, valarray<double>& out_C);
	static void ComputeD(vector<BandPoint>& in_performanceData, set<int>& in_extremaIndex, valarray<double>& in_b, valarray<double>& out_d);
	static void UpdateExtremaIndex(vector<BandPoint>& in_performanceData, int numExtrema, set<int>& out_newExtremaIndex);
	static bool IsExtrema(double w, int index, int numPoints);
	static double ComputeMaxError(vector<BandPoint>& in_performanceData);
	static int ComputeFirType(int M, int remezType);
	static int ComputeL(int M, int firType);
	static void FreqToTime(int length, const valarray<double>& in_A, valarray<double>& out_h, int firType);
	Remez();
};

//_____________________________________________________________________ Dsp
// It provides a set of functions for Digital Signal Processing
class Dsp
{
public:
	static void Autocorrelation(const valarray<double>& input, valarray<double>& output);
	static void Autocorrelation(const valarray<complex<double> >& input, valarray<complex<double> >& output);
	//
	static bool Convolution(const valarray<double>& input_x, const valarray<double>& input_y, valarray<double>& result);
	static bool Convolution(const valarray<complex<double> >& input_x, const valarray<complex<double> >& input_y, valarray<complex<double> >& result);
	static bool ShortConvolution(const valarray<double>& input_x, const valarray<double>& input_y, valarray<double>& result);
	static bool ShortConvolution(const valarray<complex<double> >& input_x, const valarray<complex<double> >& input_y, valarray<complex<double> >& result);
	static bool SymmetricConvolution(const valarray<double>& symmetricInput, const valarray<double>& input_y, valarray<double>& result);
	static bool SymmetricConvolution(const valarray<complex<double> >& symmetricInput, const valarray<complex<double> >& input_y, valarray<complex<double> >& result);
	static bool SymmetricConvolution(const valarray<complex<double> >& symmetricInput, const valarray<double>& input_y, valarray<complex<double> >& result);
	//
	static bool IsPowerOfTwo(int input);
	static int FindNextPowerOfTwo(int input);
	static int FindPreviousPowerOfTwo(int input);
	//
	static bool FourierTransform(const valarray<complex<double> >& input, valarray<complex<double> >& output, bool inverse);
	static bool FourierTransform(const MATRIXC& input, MATRIXC& output, bool inverse);
	//
	static bool FourierTransformRe(const valarray<double>& input, valarray<complex<double> >& output);
	static bool FourierTransformRe(const MATRIX& input, MATRIXC& output);
	//
	static bool InverseFourierTransformRe(const valarray<complex<double> >& input, valarray<double>& output);
	static bool InverseFourierTransformRe(const MATRIXC& input, MATRIX& output);
	//
	static void PhaseNormalization(valarray<double>& in_out);
	static void PhaseNormalization(MATRIX& in_out);
	static void PhaseNormalization(valarray<complex<double> >& in_out);
	static void PhaseNormalization(MATRIXC& in_out);
	//
	// output[0] is the lowest frequency (offset)
	// pi/m, 2pi/m, 3pi/m, ...pi,.....,2pi-3pi/m, 2pi-2pi/m, 2pi-pi/m
	// Let m = input.size()
	// Then output[m/2] is output[PI]
	// And output[m-1] is output[2PI - PI/m]
	// For real domain series output is conjugate symmetric, i.e.,  10, 8+3j, 2+4j, 5-6j, 0, 5+6j, 2-4j, 8-3j
	static const wchar_t* Fft(valarray<complex<double> >& in_out, bool inverse);
	static const wchar_t* Fft(const valarray<complex<double> >& input, valarray<complex<double> >& output, bool inverse);
	static const wchar_t* Fft(const valarray<double>& input, valarray<complex<double> >& output, bool inverse);
	static const wchar_t* Fft(MATRIXC& in_out, bool inverse);
	static const wchar_t* Fft(const MATRIX& input, MATRIXC& output, bool inverse);
	static const wchar_t* Fft(const MATRIXC& input, MATRIXC& output, bool inverse);
	//
	// FFT optimized for real domain series, output is conjugate symmetric, i.e.,  10, 8+3j, 2+4j, 5-6j, 0, 5+6j, 2-4j, 8-3j
	static const wchar_t* RealFft(const valarray<double>& input, valarray<complex<double> >& output);
	//
	static const wchar_t* TwoFft(const valarray<double>& input1, const valarray<double>& input2, valarray<complex <double> >& out_fft1, valarray<complex <double> >& out_fft2);
	static const wchar_t* TwoIfft(const valarray<complex<double> >& input_fft1, const valarray<complex<double> >& input_fft2, valarray<double>& output1, valarray<double>& output2);
	//
	static const wchar_t* Fft2D(const MATRIX& input, MATRIXC& output);
	static const wchar_t* Fft2D(const MATRIXC& input, MATRIXC& output);
	static const wchar_t* IFft2D(bool isInputSymmetric, const MATRIXC& input, MATRIXC& output);
	//
	// input: x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]
	// output: x[4], x[5], x[6], x[7], x[0], x[1], x[2], x[3]
	static void SpectrumFold(valarray<complex<double> >& in_out);
	static void SpectrumUnfold(valarray<complex<double> >& in_out);
	//
	// input: x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]
	// output: x[4], x[5], x[6], x[7], x[0], x[1], x[2], x[3]
	static bool SpectrumFold(const valarray<complex<double> >& input, valarray<complex<double> >& output);
	static bool SpectrumUnfold(const valarray<complex<double> >& input, valarray<complex<double> >& output);
	//
	// input: x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]
	// output: x[4], x[5], x[6], x[7], x[0], x[1], x[2], x[3]
	static void SpectrumFold(valarray<double>& in_out);
	static void SpectrumUnfold(valarray<double>& in_out);
	//
	// input: x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]
	// output: x[4], x[5], x[6], x[7], x[0], x[1], x[2], x[3]
	static bool SpectrumFold(const valarray<double>& input, valarray<double>& output);
	static bool SpectrumUnfold(const valarray<double>& input, valarray<double>& output);
	//
	// Real and Imaginary parts are stored sequencially
	static const wchar_t* RealFft(valarray<double>& in_out, bool inverse);
	//
	// Real and Imaginary parts are stored sequencially
	static const wchar_t* RealFft(const valarray<double>& input, valarray<double>& output, bool inverse);
	//
	// Real and Imaginary parts are stored sequencially
	static const wchar_t* RealFft(MATRIX& in_out, bool inverse);
	//
	// Real and Imaginary parts are stored sequencially
	static const wchar_t* RealFft(const MATRIX& input, MATRIX& output, bool inverse);
	//
	// It returns false, if not enough memory
	static bool DiscreteCosineTransform(const valarray<double>& input, valarray<double>& output);
	static bool InvDiscreteCosineTransform(const valarray<double>& input, valarray<double>& output);
	static bool DiscreteCosineTransform_II(const valarray<double>& input, valarray<double>& output);
	static bool InvDiscreteCosineTransform_II(const valarray<double>& input, valarray<double>& output);
	//
	static const wchar_t* Spectrum(const valarray<double>& input, valarray<double>& output);
	static const wchar_t* Spectrum(const valarray<complex<double>>& input, valarray<double>& output);
	static const wchar_t* Spectrum(const MATRIX& input, MATRIX& output);
	static const wchar_t* Spectrum(const MATRIXC& input, MATRIX& output);
	//
	static const wchar_t* Periodogram(const valarray<complex<double> >& input, valarray<double>& output);
	static void GetModulus(const valarray<complex<double> >& input, valarray<double>& output);
	
	// n is the discrete time d[n-delay]
	static double Impulse(int n, int delay);

	// n is the discrete time u[n-delay]
	static double Step(int n, int delay);

	// n is the discrete time Sin(kn-delay)
	static double Sin(int n, double k, int delay);

	// n is the discrete time Sin(kn-delay)
	static double Sinc(int n, double k, int delay);
	static double Sinc(double x);
	static double Sgn(double x);
	static double Step(double x);
	static double Sawtooth(double x, double period);
	static double Triangular(double x, double period);
	static double Rectangular(double x, double period);
	static double Pi(int n, int delay, int duration);
	static double Rect(double x);
	static double Delta(double x);
	static double Circ(double x);
	static double AngleRotate(double x);
	static double AngleRotate2(double x);
	//
	static void KaiserWindow(double beta, int length, valarray<double>& out_window);
	static double Kaiser(double beta, double x);
	static void WelchWindow(int length, valarray<double>& out_window);

	// cutFreqRad is in radians
	// cutFreqRad = 2 * pi * fc / fs;
	static void ImpulRespLowPass(double beta, int length, double cutFreqRad, valarray<double>& out_h);
	static void ImpulRespHighPass(double beta, int length, double cutFreqRad, valarray<double>& out_h);
	static void ImpulRespLowPass(double sampFreqHz, double cutFreqHz, double stopBandGaindB, double transitionWidthHz, valarray<double>& out_h);
	static void ImpulRespHighPass(double sampFreqHz, double cutFreqHz, double stopBandGaindB, double transitionWidthHz, valarray<double>& out_h);
	static void FreqRespLowPass(double beta, int length, double cutFreqRad, valarray<double>& out_H);
	static void FreqRespHighPass(double beta, int length, double cutFreqRad, valarray<double>& out_H);
	//
	static void ImpulRespHilbertTransform(double beta, int length, valarray<double>& out_h);
	static void ImpulRespHilbertTransform(double sampFreqHz, double rippleErrordB, double transitionWidthHz, valarray<double>& out_h);
	static void FreqRespHilbertTransform(double beta, int length, valarray<double>& out_H);
	static void FreqRespHilbertTransform(double sampFreqHz, double rippleErrordB, double transitionWidthHz, valarray<double>& out_H);
	//
	static bool LowPass(const valarray<double>& input, valarray<double>& output, double cutFreqRad);  
	static bool HighPass(const valarray<double>& input, valarray<double>& output, double cutFreqRad);
	//
	static double ComputeBeta(double stopBandGaindB);
	static int ComputeM(double stopBandGaindB, double transitionWidthRad);
	~Dsp();
private:
	static bool _convolution(const valarray<double>& input_x, const valarray<double>& input_y, valarray<double>& result, bool shortEvaluation);
	static bool _convolution(const valarray<complex<double> >& input_x, const valarray<complex<double> >& input_y, valarray<complex<double> >& result, bool shortEvaluation);
	Dsp();
};

//_____________________________________________________________________ Interpolation
// It provides a set of functions to interpolate a function of: one variable f(x) or two variables f(x, y)
class Interpolation
{
public:
	~Interpolation();
	//
	// The input matrix x_fx must have two columns: x and f(x)
	// It returns the value of f(x) for the given value of x
	static double Lagrange(const MATRIX& x_fx, const double x);
	//
	// The input matrix x_fx must have two columns: x and f(x)
	// It returns the value of f(x) for the given value of x
	static double Neville(const MATRIX& x_fx, const double x);
	//
	// The input matrix x_fx must have two columns: x and f(x)
	// It returns the value of f(x) for the given value of x
	// It also returns the error
	static double Neville(const MATRIX& x_fx, const double x, double&out_error);
	//
	// It fits y = mx + b to the data given by the matrix x_fx,
	// The x_fx matrix must have two columns: x and f(x)
	// The function returns the value of chi-square to measure how well the line fits the data
	static double Linear(const MATRIX& x_fx, double& out_m, double& out_b);
	//
	// The size of x must be equal to the number of rows of fxy
	// The size of y must be equal to the number of columns of fxy
	// x must contain a set of values for x. i.e., {0, 0.11, 0.2, 0.3, 0.4, 0.6}
	// y must contain a set of values for y. i.e., {1, 2, 3, 4, 5}
	// fxy must contain a set of values for f(x, y)
	// The function returns the interpolation of f(x, y)
	static double Lagrange2D(const valarray<double>& vx, const valarray<double>& vy, const MATRIX& fxy, const double x, const double y);
	//
	// The size of x must be equal to the number of rows of fxy
	// The size of y must be equal to the number of columns of fxy
	// x must contain a set of values for x. i.e., {0, 0.11, 0.2, 0.3, 0.4, 0.6}
	// y must contain a set of values for y. i.e., {1, 2, 3, 4, 5}
	// fxy must contain a set of values for f(x, y)
	// The function returns the interpolation of f(x, y)
	static double Neville2D(const valarray<double>& vx, const valarray<double>& vy, const MATRIX& fxy, const double x, const double y);
	//
	// The size of x must be equal to the number of rows of fxy
	// The size of y must be equal to the number of columns of fxy
	// x must contain a set of values for x. i.e., {0, 0.11, 0.2, 0.3, 0.4, 0.6}
	// y must contain a set of values for y. i.e., {1, 2, 3, 4, 5}
	// fxy must contain a set of values for f(x, y)
	// The function returns the interpolation of f(x, y)
	static double Bilinear(const valarray<double>& vx, const valarray<double>& vy, const MATRIX& fxy, const double x, const double y);
private:
	Interpolation();
};

//_____________________________________________________________________ SplineInterpolation
// It interpolates a value for f(x) given a  value of x and a table with the values of: x and f(x)
class SplineInterpolation
{
public:
	SplineInterpolation();
	~SplineInterpolation();
	//
	// i.e. x: 0, 2, 5, 10, 20   y: f(0), f(2), f(5), f(10), f(20)
	bool Create(const valarray<double>& x, const valarray<double>& fx);
	double Interpolate(const double x);
private:
	valarray<double> secondDerivative;
	valarray<double> table_x;
	valarray<double> table_fx;
};

//_____________________________________________________________________ SplineInterpolation2D
// It interpolates a value for f(x, y) given a value of x, y and a table with the values of: x, y and f(x, y)
class SplineInterpolation2D
{
public:
	SplineInterpolation2D();
	~SplineInterpolation2D();
	//
	// The size of x must be equal to the number of rows of fxy
	// The size of y must be equal to the number of columns of fxy
	// x must contain a set of values for x. i.e., {0, 0.11, 0.2, 0.3, 0.4, 0.6}
	// y must contain a set of values for y. i.e., {1, 2, 3, 4, 5}
	// fxy must contain a set of values for f(x, y)
	bool Create(const valarray<double>& x, const valarray<double>& y, const MATRIX& fxy);
	//
	// The function returns the interpolation of f(x, y)
	double Interpolate(const double x, const double y);
private:
	valarray<Math::SplineInterpolation> si;
	valarray<double> table_x;
	//valarray<double> table_y;
};

//_____________________________________________________________________ GaborTransform
class GaborTransform 
{
public:
	GaborTransform();
	~GaborTransform();
	bool Create(int numFreq); // phi0 < 0.25
	bool Create(int delta_n, int numFreq); // delta_n: 1, 2, 3, 4, ...
	bool Transform(const valarray<double>& input, MATRIXC& output);
	//
	double GetDeltaT();
	double GetDeltaF();
	double GetSigma();
private:
	double _deltaT;
	double _deltaF;
	double _sigma;
	int _delta_n;
	//double _phi0;
	MATRIXC filterBank;
};

//_____________________________________________________________________ TimeDependentFT
// Time-dependent Fourier Transform
class TimeDependentFT 
{
public:
	TimeDependentFT();
	~TimeDependentFT();
	bool Create(int windowWidth, int numFrequencies, double beta);
	bool Transform(const valarray<double>& input, MATRIXC& output);
private:
	MATRIXC filterBank;
};

//_____________________________________________________________________ PidController
// It implements a proportional integral derivative controller
class PidController 
{
public:
	PidController(void);
	~PidController(void);
	double Create(double kp, double ki, double kd, double targetValue, double minControlValue, double maxControlValue);
	double GetControlValue(double measuredValue);
	double GetControlValue(double measuredValue, double amortiguamiento);
private:
	double kp;
	double ki;
	double kd;
	double error;
	double prev_error;
	double targetValue;
	double minControlValue;
	double maxControlValue;
	double controlValue;
	//
	double integral;
};

//_____________________________________________________________________ IIR
// It provides support to implement an infinite impulse response filters
class IIR
{
public:
	IIR(void);
	~IIR(void);
	bool SetOrder(int order);
	//
	bool GetCoeff(vector<Sys::IirCoeff>& out_coeff);
	bool SetCoeff(const vector<Sys::IirCoeff>& coeff);
	vector<Sys::IirPolarCoeff> polarCoeff;
	//
	bool GetZeros(vector<complex<double> >& out_zeros);
	bool GetPoles(vector<complex<double> >& out_poles);
	//
	double k0;
	//
	double GetMagnitude(double radFrequency);
	double GetGroupDelay(double radFrequency);
	//
	// Estimates the value of k0 so that the maximum gain is 0 dB 
	double Estimatek0(const int pointCount);
protected:
	double PrivateGetMagnitude(double radFrequency);
	//
	// input:  A*s*s + B*s + C
	// output:  a  + b * z^-1 + c * z^-2
	// using: s = 2 * (1 - z^-1) / (1 + z^-1)
	static void BilinearTransformation_LowPass(double A, double B, double C, double& out_a, double& out_b, double& out_c);
	//
	// input:  A*s*s + B*s + C
	// output:  a  + b * z^-1 + c * z^-2
	// using: s = 2 * (1 - z^-1) / (1 + z^-1)
	static void BilinearTransformation_HighPass(double A, double B, double C, double& out_a, double& out_b, double& out_c);
};

//_____________________________________________________________________ IIRButterworth
class IIRButterworth : public Math::IIR
{
public:
	IIRButterworth();
	~IIRButterworth();
	bool CreateLowPass(double cutFrequency_radians, double passBand_dB, double stopFrequency_radians, double stopBand_dB);
	bool CreateHighPass(double cutFrequency_radians, double passBand_dB, double stopFrequency_radians, double stopBand_dB);
private:
	bool Create(double cutFrequency_radians, double passBand_dB, double stopFrequency_radians, double stopBand_dB);
	int type;
};

//_____________________________________________________________________ IIRChebyshev
class IIRChebyshev : public Math::IIR
{
public:
	IIRChebyshev();
	~IIRChebyshev();
	bool CreateLowPass(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
	bool CreateHighPass(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
private:
	bool Create(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
	int type;
};

//_____________________________________________________________________ IIRElliptic
class IIRElliptic : public Math::IIR
{
public:
	IIRElliptic();
	~IIRElliptic();
	bool CreateLowPass(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
	bool CreateHighPass(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
private:
	bool Create(double cutFrequency_radians, double passBandRipples_dB, double stopFrequency_radians, double stopBand_dB);
	int type;
};

//_____________________________________________________________________ IIRFilterDesigner
// It provides support to design infinite impulse response filters
class IIRFilterDesigner: public Math::IIR, public Math::IGenetic, public Math::ISimAnneal, public Math::IMultiVarFuncD
{
public:
	IIRFilterDesigner(void);
	~IIRFilterDesigner(void);
	vector<Sys::FrequencyMagnitude> desiredFrequencyResponse;
	//
	void OptimizeGenetic(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::GeneticParam& param);
	void OptimizeSimAnneal(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::SimAnnealParam& param);	
	void OptimizeConjugateGradient(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	void OptimizeVariableMetric(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	void OptimizePowell(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs);
	//____________________________________________________________ IGenetic
	void GeneticInitialize(Sys::BoolArray& bits);
	double GeneticGetError();
	void GeneticSetFromBits(const Sys::BoolArray& bits);
	//____________________________________________________________ ISimmAnneal
	void SimAnnealInitialize();
	void SimAnnealPerturb(Math::ISimAnneal& original, double temperature, double initialTemperature);
	double SimAnnealGetError();
	void SimAnnealCopy(const Math::ISimAnneal& source);
	//____________________________________________________________ IMultiVarFuncD
	double EvaluateFunc(const valarray<double>& x);
	void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient);
private:
	double F(const double& radius, const double& angle, const double frequency);
	//vector<Sys::IirPolarCoeff> _coeff;
	void OptimizeCGVM(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal, int method);
	void CopyPointToThis(const valarray<double>& point);
	void CopyThisToPoint(valarray<double>& point) const;
	double ComputeError();
};

//_____________________________________________________________________ IIRBiquadratic
// A second order infinite impulse response filter
class IIRBiquadratic
{
public:	
	IIRBiquadratic(void);
	virtual ~IIRBiquadratic(void);
	//
	//Call this function for each input value
	double GenerateOutput(double input);
	//
	//Call this function for each input value when b0 = 1
	double GenerateOutputB(double input);
	//
	double a1;
	double a2;
	double b0;
	double b1;
	double b2;
	void Reset();
private:
	double w0;
	double w1;
	double w2;
	int n;
};

//_____________________________________________________________________ IIRFilter
// An infinite impulse response filter
class IIRFilter
{
public:	
	IIRFilter(void);
	virtual ~IIRFilter(void);
	bool Create(valarray<double>& numerator, valarray<double>& denominator);
	double GenerateOutput(double input); //Call this function for each input value
private:
	int currentIndex;
	valarray<double> vectDelay;
	int order;
	valarray<double> numerator;
	valarray<double> denominator;
	int GoNext(int n);
	int GoPrevious(int n);
};

//_____________________________________________________________________ FIRFilter
// An finite impulse response filter
class FIRFilter
{
public:
	virtual ~FIRFilter(void);
		FIRFilter(void);
		bool Create(valarray<double>& impulseResponse);
		double GenerateOutput(double input); //Call this function for each input value
		void ClearTaps();
private:
	int currentIndex;
	valarray<double> taps;
	int order;
	valarray<double> impulseResponse;
};

//_____________________________________________________________________ FIRFilter16
// An finite impulse response filter of 16 bits
class FIRFilter16
{
public:
	virtual ~FIRFilter16(void);
		FIRFilter16(void);
		bool Create(valarray<double>& impulseResponse);
		__int16 GenerateOutput(__int16 input); //Call this function for each input value
		__int16 GenerateOutputSymmetric(__int16 input); //Call this function for each input value
		__int16 GenerateOutputAntisymmetric(__int16 input); //Call this function for each input value
		void ClearTaps();
private:
	int currentIndex;
	valarray<__int16> taps;
	int order;
	valarray<__int16> impulseResponse;
};

//_____________________________________________________________________ NumericDerivative
// It provides a set of functions to compute the derivative of a function
class NumericDerivative
{
public:
	virtual ~NumericDerivative(void);
	static void FirstDerivative(double deltaX, const valarray<double>& in_y, valarray<double>& out_dy);
	static void SecondDerivative(double deltaX, const valarray<double>& in_y, valarray<double>& out_dy);
	static void ThirdDerivative(double deltaX, const valarray<double>& in_y, valarray<double>& out_dy);
private:
	NumericDerivative(void);
};
//valarray<double> y(11);
//for(int x = 0; x<= 11; x++)
//{
//	y[x] = 5.0*x*x*x+6.0*x*x-7*x-10;
//}
//valarray<double> dy;
//Math::NumericDerivative::FirstDerivative(1.0, y, dy);

//_____________________________________________________________________ NumericIntegration
// It provides a set of functions to perform numeric integration
class NumericIntegration
{
public:
	virtual ~NumericIntegration(void);
	// steps will be approximated to next multiple of 4
	static double Simpson(Math::IFunction& function, double a, double b, int steps, double& resultingError);
	//
	// steps will be approximated to next multiple of 4
	static double Simpson(Math::IFunction& function, double a, double b, double& resultingError);
	//
	// steps will be approximated to next multiple of 3
	static double Simpson3_8(Math::IFunction& function, double a, double b, int steps);
	//
	static double ClenshawCurtis(Math::IFunction& function, double a, double b, int N);
	static double ClenshawCurtis(Math::IFunction& function, double a, double b);
	//
	static complex<double> Simpson(Math::IFunctionC& function, double a, double b, int steps, double& resultingError);
	static complex<double> Simpson(Math::IFunctionC& function, double a, double b, double& resultingError);
	//
private:
	//
	static double helper(Math::IFunction& function, double a, double b, int n);
	static complex<double> helper(Math::IFunctionC& function, double a, double b, int n);
	NumericIntegration(void);
};

//class Sin :
//	public Math::Integral
//{
//public:
//	Sin(void){};
//	~Sin(void){};
//	double Function(double x)
//	{
//		return sin(x);
//	}
//};


//_____________________________________________________________________ TimePredictor
// It estimates how long will take for a task to complete
class TimePredictor
{
public:
	TimePredictor(void);
	~TimePredictor(void);
	void AddValue(double value);
	int GetPredictionInSeconds(double targetValue);
	void Reset(void);
private:
	double data[TIME_PREDICTOR_LENGTH];
	int index;
	DWORD whenLast;
	double valueLast;
};

//_____________________________________________________________________ BinaryConverter
// It provides support to handle binary data
class BinaryConverter
{
public:
	BinaryConverter(void);
	~BinaryConverter(void);
	int Convert(int value); //Returns the number of bits
	bool GetBit(int bitIndex); //Returns the bit for that bitIndex
	static int Convert(const int value, const int bitCount, valarray<int>& output);
	static int Convert(const int value, const int bitCount, valarray<double>& output);
private:
	bool * data;
	int bitCount;
};

//_____________________________________________________________________Statistics
// It provides a set of functions in Statistics
class Statistics
{
public:
	virtual ~Statistics(void);
	static std::tr1::mt19937 random_generator;
	//
	static complex<double> GetMagnitudeMin(valarray<complex<double> >& input, int& position); // It also returns the position of the minimum
	static complex<double> GetMagnitudeMin(MATRIXC& input, int& row, int& col);// It also returns the position of the minimum
	//
	static complex<double> GetMagnitudeMax(valarray<complex<double> >& input, int& position);
	static complex<double> GetMagnitudeMax(MATRIXC& input, int& row, int& col);
	//
		//
	static double GetMinimum(const MATRIX& input, int& row, int& col); // It also returns the position of the minimum
	static double GetMinimum(const MATRIXC& input, int& row, int& col);// It also returns the position of the minimum
	static double GetMaximum(const MATRIX& input, int& row, int& col);// It also returns the position of the maximum
	static double GetMaximum(const MATRIXC& input, int& row, int& col);// It also returns the position of the maximum
	//
	static double GetMinimum(const valarray<double>& input, int& position); // It also returns the position of the minimum
	static double GetMinimum(const valarray<complex<double> >& input, int& position);// It also returns the position of the minimum
	static double GetMaximum(const valarray<double>& input, int& position);// It also returns the position of the maximum
	static double GetMaximum(const valarray<complex<double> >& input, int& position);// It also returns the position of the maximum
	//
	static double MeanValue(valarray<double>& input);
	static complex<double> MeanValue(valarray<complex<double> >& input);
	static double MeanValue(MATRIX& input);
	static complex<double> MeanValue(MATRIXC& input);
	static double GetSum(valarray<double>& input);
	static complex<double> GetSum(valarray<complex<double> >& input);
	static double GetSum(MATRIX& input);
	static complex<double> GetSum(MATRIXC& input);
	static double GetDiagonalSum(MATRIX& input);
	static complex<double> GetDiagonalSum(MATRIXC& input);
	static double GetSumOfSquares(valarray<double>& input);
	static double GetSumOfSquares(valarray<complex<double> >& input);
	static double GetSumOfSquares(MATRIX& input);
	static double GetSumOfSquares(MATRIXC& input);
	static double Bias(valarray<double>& exact, valarray<double>& approx);
	static double Bias(valarray<double>& approx, double exact);
	static bool MovingAverage(const valarray<double>& input, const int windowLength, valarray<double>& output);
	static bool MovingVariance(const valarray<double>& input, const int windowLength, valarray<double>& output);
	static bool MovingAverageAndVariance(const valarray<double>& input, const int windowLength, valarray<double>& out_average, valarray<double>& out_variance);
	static double Variance(const valarray<double>& input);
	static complex<double> Variance(const valarray<complex<double> >& input);
	static double Variance(const MATRIX& input);
	static complex<double> Variance(const MATRIXC& input);
	static void ColumnVariance(const MATRIX& input, valarray<double>& output);
	static void RowVariance(const MATRIX& input, valarray<double>& output);
	static void ColumnMean(const MATRIX& input, valarray<double>& output);
	static void RowMean(const MATRIX& input, valarray<double>& output);
	static void ColumnMinimum(const MATRIX& input, valarray<double>& output);
	static void ColumnMaximum(const MATRIX& input, valarray<double>& output);
	static void RowMinimum(const MATRIX& input, valarray<double>& output);
	static void RowMaximum(const MATRIX& input, valarray<double>& output);
	static const wchar_t* CovarianceMatrix(const MATRIX& input, MATRIX& output);
	static const wchar_t* CorrelationMatrix(const MATRIX& input, MATRIX& output);
	static double Covariance(const valarray<double>& input_x, const valarray<double>& input_y, bool bNormalDistr);
	static double Correlation(const valarray<double>& input_x, const valarray<double>& input_y);
	static double CorrelationCoeff(const valarray<double>& input_x, const valarray<double>& input_y);
	static double StandardDeviation(const valarray<double>& input);
	static double AbsoluteRelativeError(const valarray<double>& exact, const valarray<double>& approx);
	static double MeanAbsoluteError(const valarray<double>& exact, const valarray<double>& approx);
	static double RootMeanSquaredError(const valarray<double>& exact, const valarray<double>& approx);
	static double MeanSquaredError(const valarray<double>& exact, const valarray<double>& approx);
	static double RelativeRootMeanSquareError(const valarray<double>& exact, const valarray<double>& approx);
	static void AbsoluteRelativeError(const valarray<double>& exact, const valarray<double>& approx,
											valarray<double>& outRelativeError);
	static double TheilIndex(valarray<double>& input);
	static double TheilUInequalityIndex(valarray<double>& input_x, valarray<double>& input_y);
	static unsigned int Combinations(unsigned int n, unsigned int k);
private:
	Statistics(void);
};

//_____________________________________________________________________ Bessel
class Bessel
{
public:
	~Bessel(void);
	//
	// The first kind Bessel function of integer order 0, for any real x
	static double J0(double x);
	//
	// The first kind Bessel function of integer order 1, for any real x
	static double J1(double x);
	//
	// The first kind Bessel function of integer order n, for any real x
	static double Jn(int n, double x);
	//
	// The first kind modified Bessel function of integer order 0, for any real x
	static double I0(double x);
	//
	// The first kind modified Bessel function of integer order 1, for any real x
	static double I1(double x);
	//
	// The first kind modified Bessel function of integer order n, for any real x
	static double In(int n, double x);
private:
	Bessel(void);
};

//_____________________________________________________________________ Chebyshev
class Chebyshev
{
public:
	~Chebyshev(void);
	//
	//Polynomial of the first kind of integer order n
	static double Tn(const unsigned int n, double x);
	//
	//Polynomial of the second kind of integer order n
	static double Un(const unsigned int n, double x);
	//
	// Chebyshev Approximation coefficients in the interval [a b]
	// A method for numerical integration on an automatic computer.  C.W. Clenshaw and A. R. Curtis, Numerische Mathematik 1960
	static bool ComputeCoefficients_FirstKind(Math::IFunction& function, double a, double b, int N, valarray<double>& out_c);
	//
	// Chebyshev Approximation coefficients in the interval [a b]
	// A method for numerical integration on an automatic computer.  C.W. Clenshaw and A. R. Curtis, Numerische Mathematik 1960
	static bool ComputeCoefficients_SecondKind(Math::IFunction& function, double a, double b, int N, valarray<double>& out_c);
	//
	// The only difference between ComputeApproximation_FirstKind and ComputeApproximation_SecondKind
	// is that ComputeApproximation_SecondKind adds half of the last term in the approximation
	// a < x < b; m is the degree of the approximation f(x) = c_0/2 + SUM[c_n Tn(t)]; t = (2x - b - a)/(b - a); n goes from 1 to m-1 
	static double ComputeApproximation_FirstKind(double a, double b, const valarray<double>& in_c, int m, double x);
	//
	// a < x < b; f(x) = c_0/2 + SUM[c_n Tn(t)]; t = (2x - b - a)/(b - a); n goes from 1 to size_of_c-1 
	static double ComputeApproximation_FirstKind(double a, double b, const double* in_c, const int size_of_c, double x);
	//
	// The only difference between ComputeApproximation_FirstKindand ComputeApproximation_SecondKind
	// is that ComputeApproximation_SecondKind adds half of the last term in the approximation
	// a < x < b and m is the degree of the approximation
	static double ComputeApproximation_SecondKind(double a, double b, const valarray<double>& in_c, int m, double x);
private:
	Chebyshev(void);
};

//_____________________________________________________________________ Agc
// It implements an Automatic Gain Controller
class Agc
{
public:
	Agc(void);
	~Agc(void);
	struct Data
	{
		int value;
		int maximum;
	};
	int ComputeOutput(int input);
	void Reset();
	//
	double GetForwardGainSpeed();
	void SetForwardGainSpeed(double db_per_second);
	__declspec( property( get=GetForwardGainSpeed, put=GetForwardGainSpeed ) ) double ForwardGainSpeed;
	//
	double GetBackwardGainSpeed();
	void SetBackwardGainSpeed(double db_per_second);
	__declspec( property( get=GetBackwardGainSpeed, put=SetBackwardGainSpeed ) ) double BackwardGainSpeed;
	//
	double GetMaxGaindB();
	void SetMaxGaindB(double gain_dB);
	__declspec(property(get = GetMaxGaindB, put = SetMaxGaindB)) double MaxGaindB;
	//
private:
	Data *buffer;
	int position;
	double maximum;
	double forwardGain;
	double backwardGain;
	double maxGain;
};

//_____________________________________________________________________ Delay
// It implements a signal delay
class Delay
{
public:
	Delay(void);
	~Delay(void);
	bool SetDelay(int delay);
	int ComputeOutput(int input);
	void Reset();
private:
	int delay;
	int *buffer;
	int position;
};

//_____________________________________________________________________ Assessment
// It dinamically computes: the minimum, the maximum, the mean and the variance
class Assessment
{
public:
	Assessment()
	{
		reset();
	}
	~Assessment()
	{
	}
	void reset()
	{
		count = 0;
		sum = 0.0;
		sumsqr = 0.0;
		minimum = 0.0;
		maximum = 0.0;
	}
	void add(double value)
	{
		if (count==0) 
		{
			minimum = value;
			maximum = value;
		}
		else 
		{
			if (value<minimum) minimum = value;
			if (value>maximum) maximum = value;
		}
		sum+=value;
		sumsqr +=(value*value);
		count++;
	}
	double getMean()
	{
		return sum/count;
	}
	double getVariance()
	{
		if (count<=1) return 0.0;
		return sumsqr/(count-1) - (sum*sum)/(count*(count-1));
	}
	double getMinimum()
	{
		return minimum;
	}
	double getMaximum()
	{
		return maximum;
	}
protected:
	int count;
	double sum;
	double sumsqr;
	double minimum;
	double maximum;
};

//_____________________________________________________________________Normalization
// It normalizes a vector so that the mean is zero and the standard deviation is one
class Normalization
{
public:
	Normalization();
	~Normalization();
	void prestd(valarray<double>& values);
	void poststd(valarray<double>& values);
	double mean;
	double std;
};

//_____________________________________________________________________ Trender
// It eliminates trends in the data using a line: y = mx + b
class Trender 
{
public:
	Trender();
	~Trender();
	void pretrending(bool leastSquares, valarray<double>& source, valarray<double>& destination); //it calls CalculateMB internally
	void posttrending(valarray<double>& source, valarray<double>&  destination);
	double m;
	double b;
	void CalculateMB(bool bLeastSquares, valarray<double>& source);
};

//_____________________________________________________________________ SyntheticDiv
// It provides a set of functions to perform a synthetic division
class SyntheticDiv
{
public:
	virtual ~SyntheticDiv(void);
	static double Run(const valarray<double>& inputCoeff, valarray<double>& outputCoeff, double x);
	static double Run(const valarray<double>& inputCoeff, valarray<double>& outputCoeff, double x, double&out_dx);
	static double Newton(const valarray<double>& inputCoeff, valarray<double>& outputCoeff, double& int_out_x);
	//
	static complex<double> Run(const valarray<complex<double> >& inputCoeff, valarray<complex<double> >& outputCoeff, complex<double> x);
	static complex<double> Run(const valarray<complex<double> >& inputCoeff, valarray<complex<double> >& outputCoeff, complex<double> x, complex<double>&out_dx);
	static double Newton(const valarray<complex<double> >& inputCoeff, valarray<complex<double> >& outputCoeff, complex<double>& int_out_x);
private:
	SyntheticDiv(void);
};

//_____________________________________________________________________  EigenSystem
// It provides a set of functions to find the eigen-values and eigen-vectors
class EigenSystem
{
public:
	static const wchar_t* Jacobi(MATRIX& input, valarray<double>& eigen_value, MATRIX& eigen_vector);
private:
	static void Sort(valarray<double> &eigen_value, MATRIX& eigen_vector);
	static void EigenSystem::Rotate(MATRIX &a, const double s, const double u, const int i, const int j, const int k, const int m);
	EigenSystem();
	~EigenSystem();
};


} //____________________________________________________ namespace Math::End

// Neural Network
namespace Nn //________________________________________ namespace Nn::Ini
{

struct ScalingInfo
{
	double minimum;
	double maximum;
	//double processingIndex;
};

//_____________________________________________________________________ Scaler
// It provides support to scale the input of an artificial neural network
class Scaler
{
public:
	bool Create(int count);
	void Delete();
	int GetSize();
	bool Save(const wchar_t* filename);
	bool Load(const wchar_t* filename);
	bool Set(int index, double minimum, double maximum);
	bool Get(int index, double& minimum, double& maximum);
	wchar_t* ScaleToStandardRange(const MATRIX& input, MATRIX& output);
	wchar_t* ScaleToStandardRange(const MATRIXC& input, MATRIXC& output);
	//
	wchar_t* ScaleToStandardRange(const valarray<double>& input, valarray<double>& output);
	wchar_t* ScaleToStandardRange(const valarray<complex<double> >& input, valarray<complex<double> >& output);
	//
	wchar_t* ScaleFromStandardRange(const MATRIX& input, MATRIX& output);
	wchar_t* ScaleFromStandardRange(const MATRIXC& input, MATRIXC& output);
	//
	wchar_t* ScaleFromStandardRange(const valarray<double>& input, valarray<double>& output);
	wchar_t* ScaleFromStandardRange(const valarray<complex<double> >& input, valarray<complex<double> >& output);
	//
	wchar_t* ScaleTo11(const MATRIX& input, MATRIX& output); // This is for Kohonen networks
	wchar_t* ScaleTo11(const valarray<double>& input, valarray<double>& output);// This is for Kohonen networks
	//
	bool AutoSet(MATRIX& matrix);
	bool AutoSet(MATRIXC& matrix);
	//___________________________________
	Scaler();
	~Scaler();
	Scaler(const Scaler& init);
	Scaler& operator=(const Scaler& init);
	void Copy(const Scaler &init);
	void GetDescription(wchar_t* description, int length);
	bool Save(Sys::File& file);
	bool Load(Sys::File& file);
	bool Set(int index, ScalingInfo& si);
	bool GetScalingInfo(int index, ScalingInfo& si);
	bool operator==(const Scaler& init) const;
	bool operator!=(const Scaler& init) const;
	void GetText(int index, wchar_t* buffer, int buffer_length);
private:
	void Constructor();
	Nn::ScalingInfo* data;
	int size;
	//wchar_t errorDescr[256];
};

//__________________________________________________________________ Tanh
// High performance class to compute y = tanh(x) 
class Tanh
{
public:
	Tanh();
	~Tanh();
	double Func(double x);
	double GetExactValue(double x);
	double Derivative(double y);
	static double InverseFunc(double y);
	void ShowError(HWND hWnd);
	double GetNeuronOn();
	double GetNeuronOff();
	double GetClassificationThreshold();
private:
	static double scale;
	static double funcTable[NN_AF_TABLE_LENGTH];
	static double deriTable[NN_AF_TABLE_LENGTH];
};

//________________________________________________________ Layer
// One layer of an artificial neural network
class Layer
{
public:
	Layer(void);
	~Layer(void);
	Layer(const Layer& init);
	Layer& operator=(const Layer& init);
	void Copy(const Layer &init);
	void ComputeOutput(const MATRIX& input, int rowInputIndex);
	void Agitate(double perturbRatio, Nn::Layer& source);
	void Initialize();
	double OutputDerivative(const int index);
	MATRIX weight;
	MATRIX output;
	void Delete();
protected:
	Tanh activation; 
};

struct ComplexDerivative
{
	double real_real;
	double imag_imag;
	double real_imag;
	ComplexDerivative()
	{
		real_real = 0.0;
		imag_imag = 0.0;
		real_imag = 0.0;
	}
};

//________________________________________________________ LayerC
// One layer of an artificial neural network that works in the domain of the complex numbers
class LayerC
{
public:
	LayerC(void);
	~LayerC(void);
	LayerC(const LayerC& init);
	LayerC& operator=(const LayerC& init);
	void Copy(const LayerC &init);
	void ComputeOutput(const MATRIXC& input, int rowInputIndex);
	void Agitate(double perturbRatio, Nn::LayerC& source);
	void Initialize();
	void ComputeOutputAndDerivative(const MATRIXC& input, int rowInputIndex, valarray<Nn::ComplexDerivative>& out_derivative);
	MATRIXC weight;
	MATRIXC output;
	void Delete();
	void InverseActivationFunction(const complex<double>& output, complex<double>& input); 
protected:
	Tanh activation; 
};

//_____________________________________________________________________ LayerNet
// A multi-layer artificial neural network
class LayerNet : public Math::ISimAnneal, public Math::IGenetic, public Math::IMultiVarFuncD
{
public:
	LayerNet();
	~LayerNet();
	LayerNet(const LayerNet& init);
	LayerNet& operator=(const LayerNet& init);
	void Copy(const LayerNet &init);
	void GetDescription(wchar_t* description, int length);
	void Delete();
	bool Create(int inputCount, int hidden1Count, int hidden2Count, int outputCount);
	const wchar_t* Load(const wchar_t* filename);
	const wchar_t* Save(const wchar_t* filename);
	bool SetWeights(int layerIndex, const MATRIX& weights);
	bool GetWeights(int layerIndex, MATRIX& weights);
	void ComputeOutput(const MATRIX& input, int inputRowIndex, int layerCount);
	bool GetActivation(int layerIndex, valarray<double>& activation); 
	wchar_t* GetScaledOutput(MATRIX& scaledOutput);
	int GetInputCount() const;
	int GetOutputCount() const;
	int GetHidden1NeuronCount() const;
	int GetHidden2NeuronCount() const;
	int GetLayerCount() const;
	void Unlearn();
	bool AutoSetInputScaler(MATRIX& input);
	bool AutoSetOutputScaler(MATRIX& output);
	bool SetInputScaler(int index, double minimum, double maximum);
	bool SetOutputScaler(int index, double minimum, double maximum);
	bool GetInputScaler(int index, double& minimum, double& maximum);
	bool GetOutputScaler(int index, double& minimum, double& maximum);
	bool Run(const MATRIX& input, MATRIX& output);
	double ComputeTrueMse(const MATRIX& trainSet_in, const MATRIX& trainSet_target);
	double ComputeCurrentTrueMse();
	int GetMinNumTrainCases();
	//_______________________________________________________ training
	const wchar_t* SetTrainingSet(const MATRIX& trainSetIn, const MATRIX& trainSetTarget, bool ignoreWarnings);
	const wchar_t* TrainGenetic(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::GeneticParam& param);
	const wchar_t* TrainSimAnneal(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::SimAnnealParam& param);
	const wchar_t* TrainConjugateGradient(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	const wchar_t* TrainVariableMetric(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	const wchar_t* TrainLevenbergMarquardt(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal, bool stopWhenDone);
	const wchar_t* TrainRegression(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse);
	//____________________________________________________________ ISimAnneal
	void SimAnnealInitialize();
	void SimAnnealPerturb(Math::ISimAnneal& original, double temperature, double initialTemperature);
	double SimAnnealGetError();
	void SimAnnealCopy(const Math::ISimAnneal& source); 
	//____________________________________________________________ IGenetic
	void GeneticInitialize(Sys::BoolArray& bits);
	double GeneticGetError();
	void GeneticSetFromBits(const Sys::BoolArray& bits);
	//_____________________________________________________________________ IMultiVarFuncD
	double EvaluateFunc(const valarray<double>& x);
	//void EvaluateGrad(const valarray<double>& x, valarray<double>& outGrad);
	void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient);
	//_____________________________________________________________________ LevenbergMarquardt
	double LevenMarComputeHessianAndGradient(valarray<double>& hid2delta, valarray<double>& grad, 
								MATRIX& hessian, valarray<double>& beta, Mt::BoolTs& running);
	double LevenMar(MATRIX & input, int inputRow, 
								int idep, double target, 
								MATRIX& alpha, valarray<double>& beta, 
							valarray<double>& hid2delta, valarray<double>& grad);
	void LevenMarMove(double step, valarray<double>& direction);
	//____________________________________________________________________
	const wchar_t * ScaleInputDataSet(const MATRIX& input, MATRIX& scaledInput, bool ignoreWarnings);
	const wchar_t * ScaleOutputDataSet(const MATRIX& output, MATRIX& scaledOutput, bool ignoreWarnings);
	//____________________________________________________________________ Prediction Static Functions
	static bool IsPredictionOverfitting(int seriesLength, int numInputs, int numHid);
	static void ComputeBestPrediction(int seriesLength, const MATRIX& mse, int& out_row, int& out_col);
private:
	const wchar_t * TrainCGVM(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal, int method);
	int GetWeightCount() const;
	void CopyThisToPoint(valarray<double>& point) const;
	void CopyPointToThis(const valarray<double>& point);
	void Constructor();
	//LayerNetInfo netInfo;
	Nn::Layer layerHid1;
	Nn::Layer layerHid2;
	Nn::Layer layerOut;
	Nn::Scaler scalerInput;
	Nn::Scaler scalerOutput;
	bool AreMatrixSameSize(const MATRIX& a, const MATRIX& b);
	wchar_t text[NN_LAYERNET_TEXTMAX];
	//
	static MATRIX trainSetScaledIn;
	static MATRIX trainSetScaledTarget;
	bool hasTrainSet;
	//double gradError; 
	//____________________ for SVD in Simulated Annealing and Genetic
	static MATRIX svd_a;
	static MATRIX svd_u;
	static MATRIX svd_v;
	static MATRIX svd_y;
	valarray<double> svd_s;
	bool SvdCreate();
	void SvdDelete();
	//___________________ For Conjugate Gradient and Variable Metric
	static valarray<double> deltaOutput;
	static valarray<double> deltaHidden2;
	bool DeltaCreate();
	void DeltaDelete();
};

//_____________________________________________________________________ LayerNetC
// A multi-layer artificial neural network with inputs and outputs in the domain of the complex numbers
class LayerNetC : public Math::ISimAnneal, public Math::IGenetic, public Math::IMultiVarFuncD
{
public:
	LayerNetC();
	~LayerNetC();
	LayerNetC(const LayerNetC& init);
	LayerNetC& operator=(const LayerNetC& init);
	void Copy(const LayerNetC &init);
	void GetDescription(wchar_t* description, int length);
	void Delete();
	bool Create(int inputCount, int hidden1Count, int outputCount);
	const wchar_t* Load(const wchar_t* filename);
	const wchar_t* Save(const wchar_t* filename);
	bool SetWeights(int layerIndex, const MATRIXC& weights);
	bool GetWeights(int layerIndex, MATRIXC& weights);
	void ComputeOutput(const MATRIXC& input, int inputRowIndex, int layerCount);
	bool GetActivation(int layerIndex, valarray<complex<double> >& activation); 
	wchar_t* GetScaledOutput(MATRIXC& scaledOutput);
	int GetInputCount() const;
	int GetOutputCount() const;
	int GetHidden1NeuronCount() const;
	int GetLayerCount() const;
	void Unlearn();
	bool AutoSetInputScaler(MATRIXC& input);
	bool AutoSetOutputScaler(MATRIXC& output);
	bool SetInputScaler(int index, double minimum, double maximum);
	bool SetOutputScaler(int index, double minimum, double maximum);
	bool GetInputScaler(int index, double& minimum, double& maximum);
	bool GetOutputScaler(int index, double& minimum, double& maximum);
	bool Run(const MATRIXC& input, MATRIXC& output);
	double ComputeTrueMse(const MATRIXC& trainSet_in, const MATRIXC& trainSet_target);
	double ComputeCurrentTrueMse();
	int GetMinNumTrainCases();
	//_______________________________________________________ training
	const wchar_t* SetTrainingSet(const MATRIXC& trainSetIn, const MATRIXC& trainSetTarget, bool ignoreWarnings);
	const wchar_t* TrainGenetic(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::GeneticParam& param);
	const wchar_t* TrainSimAnneal(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, Math::SimAnnealParam& param);
	const wchar_t* TrainConjugateGradient(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	const wchar_t* TrainVariableMetric(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal);
	//const wchar_t* TrainLevenbergMarquardt(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal, bool stopWhenDone);
	//____________________________________________________________ ISimAnneal
	void SimAnnealInitialize();
	void SimAnnealPerturb(Math::ISimAnneal& original, double temperature, double initialTemperature);
	double SimAnnealGetError();
	void SimAnnealCopy(const Math::ISimAnneal& source); 
	//____________________________________________________________ IGenetic
	void GeneticInitialize(Sys::BoolArray& bits);
	double GeneticGetError();
	void GeneticSetFromBits(const Sys::BoolArray& bits);
	//_____________________________________________________________________ IMultiVarFuncD
	double EvaluateFunc(const valarray<double>& x);
	//void EvaluateGrad(const valarray<double>& x, valarray<double>& outGrad);
	void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient);
	//_____________________________________________________________________ LevenbergMarquardt
	//double LevenMarComputeHessianAndGradient(valarray<double>& hid2delta, valarray<double>& grad, 
	//							MATRIX& hessian, valarray<double>& beta, Mt::BoolTs& running);
	//double LevenMar(MATRIX & input, int inputRow, 
	//							int idep, double target, 
	//							MATRIX& alpha, valarray<double>& beta, 
	//						valarray<double>& hid2delta, valarray<double>& grad);
	//void LevenMarMove(double step, valarray<double>& direction);
	//____________________________________________________________________
	const wchar_t * ScaleInputDataSet(const MATRIXC& input, MATRIXC& scaledInput, bool ignoreWarnings);
	const wchar_t * ScaleOutputDataSet(const MATRIXC& output, MATRIXC& scaledOutput, bool ignoreWarnings);
private:
	const wchar_t * TrainCGVM(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, int epochs, double goal, int method);
	int GetWeightCount() const;
	void CopyThisToPoint(valarray<double>& point) const;
	void CopyPointToThis(const valarray<double>& point);
	void Constructor();
	//LayerNetInfo netInfo;
	Nn::LayerC layerHid1;
	Nn::LayerC layerOut;
	Nn::Scaler scalerInput;
	Nn::Scaler scalerOutput;
	bool AreMatrixSameSize(const MATRIXC& a, const MATRIXC& b);
	wchar_t text[NN_LAYERNET_TEXTMAX];
	//
	static MATRIXC trainSetScaledIn;
	static MATRIXC trainSetScaledTarget;
	bool hasTrainSet;
	//double gradError; 
	//____________________ for SVD in Simulated Annealing and Genetic
	static MATRIX svd_a;
	static MATRIX svd_u;
	static MATRIX svd_v;
	static MATRIX svd_y;
	static valarray<double> svd_b;
	valarray<double> svd_s;
	bool SvdCreate();
	void SvdDelete();
	//___________________ For Conjugate Gradient and Variable Metric
	static valarray<complex<double> > deltaOutput;
	static valarray<Nn::ComplexDerivative> out_derivative;
	static valarray<Nn::ComplexDerivative> hid_derivative;
	bool DeltaCreate();
	void DeltaDelete();
};

//_____________________________________________________________________ KohoNet
// An artificial neural network without supervision (Kohonen ANN)
class KohoNet
{
public:
	KohoNet();
	~KohoNet();
	bool Create(int numInputs, int numOutputs, int inputNormType);// inputNormType: NN_KOHONET_NORM_MULTIPLICATIVE, NN_KOHONET_NORM_ZAXIS
	KohoNet(const KohoNet& init);
	KohoNet& operator=(const KohoNet& init);
	void Copy(const KohoNet &init);
	void Delete();
	void Unlearn();
	void GetDescription(wchar_t* description, int length);
	//
	const wchar_t* Load(const wchar_t* filename);
	const wchar_t* Save(const wchar_t* filename);
	//
	bool SetWeights(const MATRIX& weights);
	void GetWeights(MATRIX& weights);
	void GetNormalizedInput(MATRIX& normInput);
	//________________________
	int GetInputCount() const;
	int GetOutputCount() const;
	//
	bool SetInputScaler(int index, double minimum, double maximum);
	bool GetInputScaler(int index, double& minimum, double& maximum);
	bool AutoSetInputScaler(MATRIX& input);
	//
	const wchar_t* Run(const MATRIX& input, MATRIX& output);
	const wchar_t* ComputeWinner(const MATRIX& input, valarray<double>& output);
	const wchar_t* ComputeWinner(const MATRIX& input, valarray<int>& output);
	int ComputeWinner(int trainCaseIndex); // It uses the training set that was given using the SetTrainingSet function
	//_______________________________________________________ training
	const wchar_t* SetTrainingSet(const MATRIX& trainSetIn, bool ignoreWarnings);
	const wchar_t* TrainAdditive(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& error, double learningRate, int numIterations);
	const wchar_t* TrainSubtractive(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& error, double learningRate, int numIterations);
	//
	const wchar_t * ScaleInputDataSet(const MATRIX& input, MATRIX& scaledInput, bool ignoreWarnings);
	//
	bool stopWhenDone;
private:
	int Run(int trainCaseIndex, valarray<double>& output);
	const wchar_t* Train(int trainMethod, Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& error, const double learningRate, int numIterations);
	double ComputeMaxErrorAndCorrection(int trainMethod, double learningRate, MATRIX& correction, valarray<int>& neuronWinCount, valarray<double> next_weight);
	void Constructor();
	MATRIX weights;
	Nn::Scaler scalerInput;
	wchar_t text[NN_LAYERNET_TEXTMAX];
	MATRIX normInput;
	bool hasTrainSet;
	int inputNormType; //NN_KOHONET_NORM_MULTIPLICATIVE, NN_KOHONET_NORM_ZAXIS
	//
	void ForceNeuronToWin(valarray<int>& neuronWinCount, valarray<double>& output);
	double ApplyCorrection(int trainMethod, MATRIX& correction, valarray<int>& neuronWinCount);
	static double SumSquares(const valarray<double>& input);
	static void InitializeWeights(MATRIX& weights, int inputNormType);
	static void NormalizeWeights(valarray<double>& weights, int inputNormType);
};

//_____________________________________________________________________ ProbNet
// A probabilistic artificial neural network
class ProbNet : public Math::IMultiVarFuncD, public Math::IFunctionD
{
public:
	ProbNet();
	~ProbNet();
	ProbNet(const ProbNet& init);
	ProbNet& operator=(const ProbNet& init);
	void Copy(const ProbNet &init);
	int GetInputCount();
	int GetOutputCount();
	void GetWeights(valarray<double>& weights);
	void SetWeights(const valarray<double>& weights);
	void Delete();
	void GetDescription(wchar_t* description, int length);
	//
	const wchar_t* TrainConjugateGradient(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, const MATRIX& trainSetInput, const MATRIX& trainSetTarget, int epochs, double goal);
	const wchar_t* TrainVariableMetric(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, const MATRIX& trainSetInput, const MATRIX& trainSetTarget, int epochs, double goal);
	const wchar_t* Run(const MATRIX& trainSetInput, const MATRIX& trainSetTarget, const MATRIX& input, MATRIX& output);
	//
	const wchar_t* Load(const wchar_t* filename);
	const wchar_t* Save(const wchar_t* filename);
	//_____________________________________________________________________ IMultiVarFuncD
	double EvaluateFunc(const valarray<double>& x);
	void EvaluateFuncAndGrad(const valarray<double>& x, double& Fx, valarray<double>& gradient); //void EvaluateGrad(const valarray<double>& x, valarray<double>& outGrad);
	//_____________________________________________________________________ IFunctionD
	double EvaluateFunc(const double x);
	void EvaluateFuncAndDeriv(const double x, double& Fx, double& dFx);//double EvaluateDeri(const double x);
private:
	wchar_t text[NN_LAYERNET_TEXTMAX];
	double ComputeCurrentMse();
	void Constructor();
	valarray<double> weight;
	int numOutputs;
	int numTrainCases;
	void Run(const MATRIX& trainSetInput, const MATRIX& trainSetTarget, const valarray<double>& input, valarray<double>& output);
	void Run(const MATRIX& trainSetInput, const MATRIX& trainSetTarget, int inputIndex, valarray<double>& output);
	const wchar_t* Train(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::DoubleTs& mse, const MATRIX& trainSetInput, const MATRIX& trainSetTarget, int epochs, double goal, int method);
	//______________ Used for training only
	MATRIX trainSetInput;
	MATRIX trainSetTarget;
	valarray<double> out;
};

}//________________________________________ namespace Nn::End

// Compiler
namespace Cpl //________________________________________ namespace Cpl::Ini
{
//_____________________________________________________________________ LexicalAnalyzer
// It provides support to separate text in tokens
class LexicalAnalyzer
{
public:
	LexicalAnalyzer(void);
	~LexicalAnalyzer(void);
	struct Token
	{
		int type;
		int int_value;
		double double_value;
		wchar_t string_value[LEX_STRINGMAX];
		int line_number;
	};
	// To Run:
	// 1. Call Create
	// 2. Call GetNextToken repeatealy until the token.type be LEX_END_OF_FILE
	bool Create(const wchar_t* inputString);
	bool Create(HWND hWndInput);
	virtual void GetNextToken(Cpl::LexicalAnalyzer::Token& token);
	//
	// To Debug:
	// 1. Call Create
	// 2. Call Debug()
	void Debug(wstring& outputDebugString);
	void GetNextText(wchar_t* buffer, int buffer_len);
	bool Next(Cpl::LexicalAnalyzer::Token& token);
	//
	// A static function to get all tokens from inputString and store them in output
	static bool GetTokens(const wchar_t* inputString, vector<Cpl::LexicalAnalyzer::Token>& output);
	//
	// A static function to get all tokens from inputString and store them in output
	static bool GetTokens(HWND hWndInput, vector<Cpl::LexicalAnalyzer::Token>& output);
	//
	static wchar_t * GetTokenText(int type);
	static const wchar_t * GetTokenConstant(int type);
	static bool IsError(LexicalAnalyzer::Token& token);
	static void GetErrorText(LexicalAnalyzer::Token& token, wstring& out_text);
protected:
	unordered_map<wstring, int> keyword;
	// 
	virtual void FillKeywords(unordered_map<wstring, int>& keyword);
	//
	// It handles: // This is a comment and /*  This is a multiline comment */
	virtual bool ProcessComments(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	// It handles any custom character sequence
	virtual bool ProcessCharSequence(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	// It handles:  "this is some quoted text" 
	// deliminator can be: " or '
	virtual bool ProcessQuotedString(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	// It handles values such as: 123, 344, 34.33, 3.3e4, ...
	virtual void ProcessNumericValues(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	// It handles variables, function names, IDs, ...
	virtual void ProcessString(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	// It returns true when the token.string_value is a keyword
	virtual bool ProcessKeywords(Cpl::LexicalAnalyzer::Token& token);
	//
	// It handles: +, =, <=, !=, ... 
	virtual bool ProcessSeparator(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	//
	bool CheckToken(LexicalAnalyzer::Token& token, const int first, const int last);
	bool CheckTokenNoCase(LexicalAnalyzer::Token& token, const int first, const int last);
	bool CheckToken(LexicalAnalyzer::Token& token, const wchar_t c, const wchar_t match, int lex_type);
	bool CheckToken(LexicalAnalyzer::Token& token, const wchar_t c, const wchar_t match1, const wchar_t match2, int lex_type);
	void Destroy();
	wchar_t* GetTokenDesc(int type);
	//
	void ExtractInt(wchar_t& c, int& index, int &i, Cpl::LexicalAnalyzer::Token& token);
	int index;
	int line_number;
	size_t length;
	wchar_t * inputString;
	wchar_t constTextDeliminator;
};

//_____________________________________________________________________ Compiler
// Given a set of tokens produced by the lexical analyzer, it produces machine code that can be executed
class Compiler
{
public:
	Compiler(void);
	~Compiler(void);
	
	struct VariableInfo
	{
		int datatype; //LEX_DATATYPE_BOOL, LEX_DATATYPE_DOUBLE, ...
		int index;
	};

	struct FuncInfo
	{
		int id;
		wchar_t name[LEX_STRINGMAX];
		bool operator<(const FuncInfo& init)
		{
			return (wcscmp(name, init.name) < 0);
		}
	};

	//VM_CREATE: name, subtype = datatype, int_value = index
	//VM_VALUE: subtype = datatype, [int_value, double_value, name = text_value]
	//VM_REFVALUE: name, subtype = datatype, int_value = index
	//VM_OPER: subtype = operation_type, int_value = operant_count
	//VM_FUNC: subtype = func_type, int_value = argument_count
	//VM_OBJFUNC: int_value = argument_count
	//VM_GOTO: int_value = instruction_index
	//VM_GOFALSE: int_value = instruction_index
	//VM_GOTRUE: int_value = instruction_index
	struct Instruction
	{
		int type; //VM_CREATE, VM_VALUE, VM_OPER, ....
		int subtype; // datatype, operation_type, func_type
		int line_number; 
		int int_value;
		double double_value;
		wchar_t name[LEX_STRINGMAX];
	};

	struct Variable
	{
		VariableInfo vi;
		bool isReference; 
		bool bool_value; // LEX_DATATYPE_BOOL
		double double_value; // LEX_DATATYPE_DOUBLE
		int int_value; // LEX_DATATYPE_INTEGER
		MATRIX matrix_value; // LEX_DATATYPE_MATRIX
		valarray<double> vector_value; // LEX_DATATYPE_VECTOR
		valarray<complex<double> > vectorC_value; // LEX_DATATYPE_COMPLEX_VECTOR
		MATRIXC matrixC_value; // LEX_DATATYPE_COMPLEX_MATRIX
	};

	class IntelliSenseInfo
	{
	public:
		IntelliSenseInfo(){}
		~IntelliSenseInfo(){}
		wstring name;
		int func_id;
		int type; //LEX_ISI_METHOD, LEX_ISI_ARGUMENT, LEX_ISI_METHOD_ARG, LEX_ISI_LAST_ARGUMENT, LEX_ISI_ARGUMENT_SEL, LEX_ISI_LAST_ARGUMENT_SEL
		bool operator<(const IntelliSenseInfo& init)
		{
			return name<init.name;
		}
	};
	int memInfo[LEX_DATATYPE_COUNT];
	map<wstring, VariableInfo> variableInfo;
	bool Compile(const wchar_t* inputString, vector<Cpl::Compiler::Instruction>& outputMachineCode);
	bool Compile(HWND hWnd, vector<Cpl::Compiler::Instruction>& outputMachineCode);
	bool Debug(const wchar_t* inputString, wstring& outputDebugString);
	bool Debug(HWND hWnd, wstring& outputDebugString);
	void ListCode(vector<Compiler::Instruction>& inputMachineCode, wstring& outputDebugString);
	list<IntelliSenseInfo> intelliSenseInfo; // Provides object: list of functions and list of parameters
	//
	static void GetFunctionDisplay(int func_id, wstring& help);
	static bool GetFunctionHelp(const wchar_t* function_name, const wchar_t* separator, wstring& help);
	static wchar_t* GetFunctionDescr(int func_id);
	static wchar_t* GetFunctionDescr(int datatype, int func_id);
	static wchar_t* GetFunctionName(int datatype, int func_id);
	static int GetObjectFuncIndex(int datatype, const wchar_t* text);
	static int GetObjectFuncParamType(int func_id, int paramIndex);
	static wchar_t* GetObjectFuncParamName(int func_id, int paramIndex);
	static int GetFuncParamCount(int func_id);
	static int GetObjectFuncReturnType(int datatype, int func_id);
	static void ListMethods(int datatype, list<Cpl::Compiler::FuncInfo>& out_funcInfo);
private:
	bool InternalCompile(vector<Compiler::Instruction>& outputMachineCode);
	void AddError(vector<Compiler::Instruction>& outputMachineCode, LexicalAnalyzer::Token& token, int error_type, int correct_token_type);
	LexicalAnalyzer lex;
	void Clean(vector<Compiler::Instruction>& machineCode);
	wchar_t* GetInstructionText(Compiler::Instruction& inst);
	LexicalAnalyzer::Token lookahead;
	void Next(vector<Compiler::Instruction>& machine_code);
	void Match(vector<Compiler::Instruction>& machine_code, int type);
	//void Match(vector<Compiler::Instruction>& machine_code, int type, int func_id, int datatype, int parameterIndex);
	bool IsValidId(LexicalAnalyzer::Token& token);
	Compiler::VariableInfo GetVariableInfo(LexicalAnalyzer::Token& token);
	void CreateVariable(vector<Compiler::Instruction>& machine_code, LexicalAnalyzer::Token& tokenDataType, LexicalAnalyzer::Token& tokenID);
	//
	void DataType(vector<Compiler::Instruction>& machineCode);
	void If(vector<Compiler::Instruction>& machineCode, bool isLoop, vector<int>& index_break, vector<int>& index_continue);
	void For(vector<Compiler::Instruction>& machineCode);
	void While(vector<Compiler::Instruction>& machineCode);
	void Do(vector<Compiler::Instruction>& machineCode);
	void Switch(vector<Compiler::Instruction>& machineCode);
	void VariableId(vector<Compiler::Instruction>& machineCode);
	void Statement(vector<Compiler::Instruction>& machineCode);
	void Expression(vector<Compiler::Instruction>& machineCode);
	void Factor(vector<Compiler::Instruction>& machineCode);
	void FactorId(vector<Compiler::Instruction>& machineCode);
	void Term(vector<Compiler::Instruction>& machineCode);
	void VariableSet(vector<Compiler::Instruction>& machineCode, LexicalAnalyzer::Token& tokenVariableId);
	void ObjectFunction(vector<Compiler::Instruction>& machineCode, LexicalAnalyzer::Token& tokenVariableId, VariableInfo vi);
	void VariableArray(vector<Compiler::Instruction>& machineCode, LexicalAnalyzer::Token& tokenVariableId, VariableInfo vi);
	void FunctionCall(vector<Compiler::Instruction>& machineCode);
	void OperMono(vector<Compiler::Instruction>& machineCode, LexicalAnalyzer::Token& tokenVariableId, VariableInfo vi);
	void OperBina(vector<Compiler::Instruction>& machineCode, LexicalAnalyzer::Token& tokenVariableId, VariableInfo vi);
	//
	void Block(vector<Compiler::Instruction>& machineCode, bool isLoop, vector<int>& index_break, vector<int>& index_continue);
	void Block_MultiLine(vector<Compiler::Instruction>& machineCode, bool isLoop, vector<int>& index_break, vector<int>& index_continue);
	void Block_SingleLine(vector<Compiler::Instruction>& machineCode, bool isLoop, vector<int>& index_break, vector<int>& index_continue);
	//
	static int GetInitialFuncId(int datatype);
	void ListMethods(int func_id, int datatype, wchar_t* next_text, int parameterIndex);
	void ListParameters(int func_id, int datatype, int parameterIndex);
	//
	struct IntelliSenseFuncInfo
	{
		int func_id;
		int datatype;
		int parameterIndex;
	};
	stack<IntelliSenseFuncInfo> sisfi;
};

//_____________________________________________________________________ VirtualMachine
// It executes the machine code produced by the compiler
class VirtualMachine : public Mt::IThread
{
public:
	VirtualMachine(void);
	~VirtualMachine(void);
	bool checkIndex; // If true, it will check the indexes for Vector and Matrix
	struct Memory
	{
		int datatype; //LEX_DATATYPE_BOOL, LEX_DATATYPE_DOUBLE, LEX_DATATYPE_INTEGER, ...
		//bool isReference;
		bool bool_value; 
		double double_value; 
		int int_value; 
		MATRIX matrix_value; 
		valarray<double> vector_value; 
		complex<double> complex_value; 
		valarray<complex<double> > vectorC_value; 
		MATRIXC matrixC_value;
		wstring string_value;
	};

	void Setup(map<wstring, Cpl::Compiler::VariableInfo>& ids, vector<Cpl::Compiler::Instruction>& machineCode, const wchar_t* path);
	void GetMemoryInfo(HWND hWnd, int gui_type, int datatype, bool showMatrixVectorSize);  // gui_type:  VM_GUITYPE_LISTVIEW, VM_GUITYPE_DROPDOWN
	void SafeGetMemoryIntInfo(HWND hWnd, int gui_type);  // gui_type:  VM_GUITYPE_LISTVIEW, VM_GUITYPE_DROPDOWN
	Mt::IntTs line;
	Mt::DoubleTs progress;
	Mt::DoubleTs mse;
	wchar_t* GetErrorDescr();
	//
	vector<int> memIntegerExchange; // memInteger is copied to this variable at times so that we can monitor these values in another thread using the next critical section
	Mt::CriticalSection csIntegerExchange;
	//
	wstring GetVariableName(int datatype, int index);
	//
	vector<bool> memBool;
	vector<double> memDouble;
	vector<int> memInteger;
	vector<MATRIX> memMatrix;
	vector<valarray<double> > memVector;
	vector<complex<double> > memComplex;
	vector<valarray<complex<double> > >memVectorC;
	vector<MATRIXC> memMatrixC;
	vector<Nn::LayerNet> memLayerNet;
	vector<Nn::LayerNetC> memLayerNetC;
	vector<Nn::KohoNet> memKohoNet;
	vector<Nn::ProbNet> memProbNet;
	void ClearMemory();
	set<wstring> variableName; //prevent a variable from being created more than once at run time
	//______ IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime);
private:
	wchar_t errorDescr[STERRORMAX];
	int instructionIndex;
	Mt::DoubleTs value;
	map<wstring, Compiler::VariableInfo> variableInfo;
	vector<Compiler::Instruction> machineCode;
	bool Execute(Compiler::Instruction& inst, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool VmCreate(Compiler::Instruction& inst);
	bool VmValue(Compiler::Instruction& inst);
	bool VmRefValue(Compiler::Instruction& inst);
	bool VmSetValue(Compiler::Instruction& inst);
	bool VmSetVectorCell(Compiler::Instruction& inst);
	bool VmSetMatrixCell(Compiler::Instruction& inst);
	//bool VmSetRefVectorCell(Compiler::Instruction& inst);
	//bool VmSetRefMatrixCell(Compiler::Instruction& inst);
	bool VmVectorCell(Compiler::Instruction& inst);
	bool VmMatrixCell(Compiler::Instruction& inst);
	bool VmOper(Compiler::Instruction& inst);
	bool VmOperMono(Compiler::Instruction& inst);
	bool VmOperBina(Compiler::Instruction& inst);
	bool VmFunc(Compiler::Instruction& inst);
	bool VmObjFunc(Compiler::Instruction& inst, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool VmGoto(Compiler::Instruction& inst);
	bool VmGoFalse(Compiler::Instruction& inst);
	bool VmGoTrue(Compiler::Instruction& inst);	
	//
	bool OperBinary(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	bool OperBool(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	bool OperRelational(Compiler::Instruction& inst, VirtualMachine::Memory& operator1, VirtualMachine::Memory& operator2);
	//
	bool FuncComplex(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object);
	bool FuncMatrix(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, bool isComplex);
	bool FuncVector(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, bool isComplex);
	bool FuncLayerNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool FuncLayerNetC(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool FuncKohoNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& running, Mt::DoubleTs& progress);
	bool FuncProbNet(Compiler::Instruction& objectFunction, Cpl::VirtualMachine::Memory* param, int paramCount, Cpl::VirtualMachine::Memory& object, Mt::BoolTs& running, Mt::DoubleTs& progress);
	//
	stack<VirtualMachine::Memory> stack;
	//
	bool Convert(VirtualMachine::Memory& input_output, int datatypeTarget, wchar_t* caption);
	int GetResultingDatatype(int datatype1, int datatype2, int operation);
	void ReportConversionError(int datatypeFrom, int datatypeTo, wchar_t* caption);
	//
	wchar_t path[4*MAX_PATH];
};

//_____________________________________________________________________ VariableInfo
// It stores the information of a variable
//class VariableInfo
//{
//public:
//	VariableInfo();
//	~VariableInfo();
//	wstring datatype;
//	wstring name;
//	void Clear();
//};

//_____________________________________________________________________ PropertyInfo
// It stores the information of a class property
//class PropertyInfo
//{
//public:
//	PropertyInfo();
//	~PropertyInfo();
//	wstring datatype;
//	wstring name;
//	int line;
//	void Clear();
//	bool operator<(const Cpl::PropertyInfo& init);
//};

//_____________________________________________________________________ FunctionInfo
 //It stores the information of a function
class FunctionInfo
{
public:
	FunctionInfo();
	~FunctionInfo();
	wstring name;
	int line;
	wstring helpString;
	void Clear();
	bool operator<(const Cpl::FunctionInfo& init);
};

//_____________________________________________________________________ ClassInfo
// It stores the information of a class
class ClassInfo
{
public:
	ClassInfo();
	~ClassInfo();
	wstring name;
	wstring baseClass;
	vector<wstring> prop;
	vector<Cpl::FunctionInfo> func;
	int line;
	wstring helpString;
	void Clear();
	bool operator<(const Cpl::ClassInfo& init);
};

//_____________________________________________________________________ NamespaceInfo
// It stores the information of a Namespace
class NamespaceInfo
{
public:
	NamespaceInfo();
	~NamespaceInfo();
	wstring name;
	vector<Cpl::FunctionInfo> func;
	vector<Cpl::ClassInfo> classi;
	int line;
	wstring helpString;
	void Clear();
	bool operator<(const Cpl::NamespaceInfo& init);
};

//_____________________________________________________________________ HeaderFileCompiler
// It extracts class information from a header file (*.h)
class HeaderFileCompiler
{
public:
	HeaderFileCompiler();
	~HeaderFileCompiler();
	bool GetClassList(const wchar_t* headerFilename, vector<Cpl::NamespaceInfo>& output);
	wstring errorString;
private:
	void GelClassHelpString(vector<wstring>& lines, vector<Cpl::ClassInfo>& classi);
	void GelHelpString(vector<wstring>& lines, int line_number, wstring& out_helpString);
	bool IsComment(wstring text);
	//
	bool Namespace(vector<Cpl::NamespaceInfo>& output);
	bool NamespaceContent(Cpl::NamespaceInfo& output);
	//
	bool IsProperty(const wstring& text);
	bool IsFunction(const wstring& text);
	bool GetFunctionOrProperty(int line_number, const wstring& text, Cpl::ClassInfo& ci);
	bool GetFunction(const wstring& text, Cpl::FunctionInfo& fi);
	bool GetProperty(const wstring& text, wstring& out_property);
	bool Class(vector<Cpl::ClassInfo>& classi);
	bool ClassContent(Cpl::ClassInfo& ci);
	bool Struct();
	bool StaticFunction(Cpl::FunctionInfo& output);
	//
	Cpl::LexicalAnalyzer lexer;
	Cpl::LexicalAnalyzer::Token lookahead;
};

} //____________________________________________________ namespace Cpl::End

namespace Pdf //________________________________________ namespace Pdf::Ini
{

class DictionaryItem;
//_____________________________________________________________________ Value
class Value
{
public:
	Value();
	~Value();
	//
	//PDF_VALUE_EMPTY, PDF_VALUE_DATA, PDF_VALUE_NAME, 
	//PDF_VALUE_LITERALSTRING, PDF_VALUE_HEXSTRING, PDF_VALUE_ARRAY, 
	//PDF_VALUE_REFERENCE, PDF_VALUE_DICTIONARY
	int type;
	unsigned char* data;
	size_t length;
	//_____________________________ type = PDF_VALUE_EMPTY
	// data is NULL and length is zero
	//_____________________________ type = PDF_VALUE_DATA (Boolean, Integer or Float)
	bool GetInteger(int &output);
	void SetInteger(int value);
	//
	bool GetDouble(double & output);
	void SetDouble(double value);
	//
	bool GetBoolean(bool & output);
	void SetBoolean(bool value);
	// data is not NULL and length > 0
	//_____________________________ type = PDF_VALUE_NAME
	// data is not NULL and length > 0
	//_____________________________ type = PDF_VALUE_LITERALSTRING
	// data is not NULL and length > 0
	//_____________________________ type = PDF_VALUE_HEXASTRING
	// data is not NULL and length > 0
	//_____________________________ type = PDF_VALUE_ARRAY
	vector<Pdf::Value> value;
	//_____________________________ type = PDF_VALUE_REFERENCE
	int ref_id;
	int ref_generation_number;
	//_____________________________ type = PDF_VALUE_DICTIONARY
	vector<Pdf::DictionaryItem> dictionary;
	//
	const wchar_t* GetText();
	void GetText(wstring& output);
	//
	bool SetData(const unsigned char* input, size_t input_length);
	//
	Value(const Pdf::Value& init);
	void Delete();
	Pdf::Value& operator=(const Pdf::Value& init);
private:
	void PrivateGetText(wstring& output, size_t& indentationLevel);
	void GetWchar(wstring& output);
	void Copy(const Pdf::Value& init);
	bool IsLineReturn(wstring& text);
};

//_____________________________________________________________________ DictionaryItem
class DictionaryItem
{
public:
	DictionaryItem();
	~DictionaryItem();
	void Delete();
	string name;
	Pdf::Value value;
};

//_____________________________________________________________________ Object	
class Object
{
public:
	Object();
	~Object();
	int id;
	int generation_number;
	Pdf::Value value;
	char* stream;
	size_t stream_length;
	//
	Object(const Pdf::Object& init);
	Pdf::Object& operator=(const Pdf::Object& init);
	void Delete();
private:
	void Copy(const Pdf::Object& init);
};

//_____________________________________________________________________ Pdf::Token
class Token
{
public:
	Token();
	~Token();
	bool SetText(const char* text);
	void GetText(wstring& output);
	const wchar_t* GetTypeText();
	int type;
	unsigned char* data;
	int line_number;
	size_t length; // It includes the NULL terminator in strings
	//
	Token(const Pdf::Token& init);
	Pdf::Token& operator=(const Pdf::Token& init);
	void Delete();
	//
	// It returns true if the token stores only digits
	bool IsID();
private:
	void Copy(const Pdf::Token& init);
	void Constructor();
};

//_____________________________________________________________________ Pdf::LexicalAnalyzer
// A lexical analyzer for PDF
class LexicalAnalyzer : public Sys::FileReaderAscii
{
public:
	LexicalAnalyzer(void);
	~LexicalAnalyzer(void);
	//
	// To Run:
	// 1. Call Create
	// 2. Call GetNextToken repeatealy until the token.type be LEX_END_OF_FILE
	bool Create(const wchar_t* filename);
	//
	// To Run:
	// 1. Call Create
	// 2. Call GetNextToken repeatealy until the token.type be LEX_END_OF_FILE
	void GetNextToken(Pdf::Token& token);
	//
	// It returns the token that will be returned in the next call to GetNextToken
	void Peek1Token(Pdf::Token& token);
	//
	// It returns the token that will be returned in the second call to GetNextToken
	void Peek2Token(Pdf::Token& token);
	//
	int majorVersion;
	int minorVersion;
	//
	void Delete();
protected:
	void PrivateGetNextToken(Pdf::Token& token);
	unordered_map<wstring,int> keyword;
	void ProcessName(char c, Pdf::Token& token);
	void FillKeywords(unordered_map<wstring, int>& keyword);
	bool ProcessSeparator(Pdf::Token& token);
	bool ProcessComments(char c, Pdf::Token& token);
	void ProcessData(Pdf::Token& token);
	bool Stream(Pdf::Token& token);
	bool ProcessKeywords(Pdf::Token& token);
	bool CheckToken(Pdf::Token& token, const char c, const char match, int lex_type);
	bool CheckToken(Pdf::Token& token, const char c, const char match1, const char match2, int lex_type1, int lex_type2);
	int IsStreamEnd(const char* streamEndText, size_t len);
	int line_number;
	Pdf::Token tokenA;
	Pdf::Token tokenB;
	bool isTokenANext;
};

//______________________________________________________________________ Pdf::Reader
class Reader
{
public:
	Reader();
	~Reader();
	bool Load(const wchar_t* filename);
	vector<Pdf::Object> object;
	int majorVersion;
	int minorVersion;
	void Delete();
	int offsetToXref;
private:
	bool LoadObject(Pdf::LexicalAnalyzer& lex, Pdf::Token& token);
	bool LoadXref(Pdf::LexicalAnalyzer& lex, Pdf::Token& token);
	bool LoadStartxref(Pdf::LexicalAnalyzer& lex, Pdf::Token& token);
	bool readingXref;
	bool LoadValue(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueName(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueLiteralString(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueHexadecimalString(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueArray(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueDictionary(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueReference(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueData(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
	bool ValueDataOrReference(Pdf::LexicalAnalyzer& lex, Pdf::Token& token, Pdf::Value& value);
};

//_____________________________________________________________________ Pdf::Font
class Document;
class Font
{
public:
	Font();
	~Font();
	//
	//pdfFont: PDF_FONT_ARIAL, PDF_FONT_COURIER_NEW, PDF_FONT_TIMES_NEW_ROMAN, PDF_FONT_SYMBOL
	void Create(int fontType);
	void Create(HWND hWnd, int fontType);
	//
	double GetAscent(double fontSize);
	double GetCapEmHeight(double fontSize);
	double GetDescent(double fontSize);
	void GetFontBox(Sys::Rectangle& out_rect, double fontSize);
	double GetItalicAngle(double fontSize);
	double GetAveCharWidth(double fontSize);
	double GetHeight(double fontSize);
	double GetMaxCharWidth(double fontSize);
	double GetLeading(double fontSize);
	double GetXHeight(double fontSize);
	double GetCharWidth(wchar_t character, double fontSize);
	double GetTextWidth(const wchar_t* text, double fontSize);
	double GetTextWidth(const wstring& text, double fontSize);
	int GetWidth(int index);
	//
	const wchar_t* GetFontName();
	static const wchar_t* PdfFontName(int pdfFont);
	const char* GetBaseFont();
	void ClearPdfObject();
	int GetPdfFont();
private:
	int objFont;
	int objFontWidths;
	int objFontDescriptor;
	int nFont;
	int nFontWidth;
	int nFontDescriptor;
	//___________________________________ Text Metrics
	int ascent;
	int capEmHeight;
	int descent;
	int flags;
	RECT fontBox;
	int italicAngle;
	int aveCharWidth;
	int height;
	int maxCharWidth;
	int leading;
	int xHeight;
	int _pdfFont;
	void Clear();
	ABC abc[PDF_CHAR_COUNT];
	friend class Document;
};

//_____________________________________________________________________ Pdf::Page
class Document;
class Page
{
public:
	Page();
	~Page();
	vector<wstring> stream;
	double GetWidth();
	double GetHeight();
	//
	void BeginText();
	void EndText();
	void MoveText(double x, double y);
	void ShowText(const wchar_t* text);
	void ShowText(const wstring& text);
	//
	//pdfFont: PDF_FONT_ARIAL, PDF_FONT_COURIER_NEW, PDF_FONT_TIMES_NEW_ROMAN, PDF_FONT_SYMBOL
	void Font(int pdfFont, double fontSize);
	//
	//PDF_PAPER_SIZE_LETTER, PDF_PAPER_SIZE_LEGAL
	int paperSize;
	//
	//PDF_PAGE_ORIENTATION_PORTRAIT, PDF_PAGE_ORIENTATION_LANDSCAPE
	int pageOrientation; 
	//
	// c: Append a cubic Bézier curve to the current path. The curve shall extend from the current point to the point (x3, y3), 
	// using (x1, y1) and (x2, y2) as the Bezier control points
	void CurveTo(double x1, double y1, double x2, double y2, double x3, double y3);
	//
	// x, y is the left top point
	void Ellipse(double x, double y, double width, double height);
	void Circle(double centerX, double centerY, double radius);
	//
	// cm: Modify the current transformation matrix (CTM) by concatenating the specified matrix
	void Concat(double a, double b, double c, double d, double e, double f);
	//
	// d: Control the pattern of dashes and gaps used to stroke paths. It shall be specified by a dash array and a dash phase. 
	// The dash array’s elements shall be numbers that specify the lengths of alternating dashes and gaps; the numbers shall 
	// be nonnegative and not all zero. The dash phase shall specify the distance into the dash pattern at which to start the dash.
	// pattern = L"[] 0" for no Dash, pattern = L"[3] 0" for three units on, three units off, pattern = L"[1] 2" for 1 on, 2 off, 2 on, 2 off
	void LineDashPattern(const wchar_t * pattern);
	//
	// j:  Specify the shape to be used at the corners of paths that are stroked
	void LineJoinStyleMiter();
	//
	// J: Specify the shape to be used at the ends of open subpaths when they are stroked: 0 Butt cap, 1 Round cap, 3 Projecting square cap
	void LineCapStyle(int capStyle);
	//
	// M: When two line segments meet at a sharp angle and mitered joins have been specified as the line join style, 
	// it is possible for the miter to extend far beyond the thickness of the line stroking the path. 
	// The miter limit shall impose a maximum on the ratio of the miter length to the line
	void MiterLimit(double value);
	//
	// m: Begin a new subpath by moving the current point to coordinates (x, y), omitting any connecting line segment
	void MoveTo(double x, double y);
	//
	// l: Append a straight line segment from the current point to the point (x, y). The new current point shall be (x, y).
	void LineTo(double x, double y);
	void Line(double x1, double y1, double x2, double y2);
	//
	void Rectangle(const RECT& rect);
	void PolyLine(const POINT* point, const int numPoints);
	//
	// RG: RGB color for stroking operations such as lines and borders
	void StrokeColor(COLORREF color);
	//
	void StrokePath();
	void CloseAndStrokePath();
	void CloseFillAndStrokePath();
	void FillAndStrokePath();
	void CloseEvenOddFillAndStrokePath();
	void EvenOddFillAndStrokePath();
	void FillPath();
	void FillGray(double value);
	void StrokeGray(double value);
	void ClosePath();
	void EndPathWithoutFillOrStroke();
	//
	void SaveGraphicsState();
	void RestoreGraphicsState();
	//
	// rg: RGB color for fill operations
	void FillColor(COLORREF color);
	//
	// w: Specify the thickness of the line used to stroke a path
	void LineWidth(double lineWidth);
private:
	set<int> pdfFontSet;
	int objID;
	friend class Document;
};

//_____________________________________________________________________ Pdf::Document
class Document
{
public:
	Document();
	~Document();
	wstring author;
	bool Save(const wchar_t* filename);
	//
	// This function is still under development
	bool Load(const wchar_t* filename);
	//
	bool GetPdf(const wchar_t* filename, string& out_pdf);
	vector<Pdf::Page> page;
	vector<Pdf::Font> font;
	void AddFont(HWND hWnd, int pdfFont);
private:
	vector<int> offset;
	void RenderVersion(string& text, string& out);
	void RenderInfo(const wchar_t* filename, string& text, string& out);
	void RenderCatalog(string& text, string& out);
	void RenderFont(Pdf::Font& pdfFont, string& text, string& out);
	void RenderPages(string& text, string& out);
	void RenderPage(int parentObjId, int pageIndex, string& text, string& out);
	void RenderXref(string& text, string& out);
	void RenderTrailer(string& text, string& out);
	void ToHex(const wstring& input, string& out_buffer);
};

} //____________________________________________________ namespace Pdf::End


// SQL 
namespace Sql //________________________________________ namespace Sql::Ini
{
//_____________________________________________________________________ LexicalAnalyzer
// A lexical analyzer for SQL
class LexicalAnalyzer : public Cpl::LexicalAnalyzer
{
public:
	LexicalAnalyzer(void);
	~LexicalAnalyzer(void);
	static bool GetTokens(const wchar_t* inputString, vector<Cpl::LexicalAnalyzer::Token>& output);
protected:
	void FillKeywords(unordered_map<wstring, int>& keyword);
	bool ProcessComments(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	bool ProcessKeywords(Cpl::LexicalAnalyzer::Token& token);
};

//_____________________________________________________________________ Column
class Column
{
public:
	Column();
	~Column();
	wchar_t name[SQL_NAME_MAX];
	bool isPK;
	bool allowsNull;
	wchar_t check[SQL_NAME_MAX];
	int type;  //LEX_SQLTYPE_INTEGER, LEX_SQLTYPE_DOUBLE
	wchar_t refTable[SQL_NAME_MAX];
	wchar_t refPK[SQL_NAME_MAX];
	wchar_t table_name[SQL_NAME_MAX]; // So that each control has access to the name of the table
	int size;
};


//_____________________________________________________________________ Table
class Table
{
public:
	Table();
	~Table();
	wchar_t name[SQL_NAME_MAX];
	vector<Sql::Column> column;
	bool selected;
};

//_____________________________________________________________________ Compiler
// A compiler for SQL
class Compiler
{
public:
	Compiler();
	~Compiler();
	bool Compile(const wchar_t* inputString, vector<Sql::Table>& output);
private:
	void AddError(vector<Sql::Table>& output, Cpl::LexicalAnalyzer::Token& token, int error_type, int correct_token_type);
	LexicalAnalyzer::Token lookahead;
	Sql::LexicalAnalyzer lex;
	void Next(vector<Sql::Table>& output);
	void Match(vector<Sql::Table>& output, int type);
	void Block_SingleLine(vector<Sql::Table>& output);
	//
	void Create(vector<Sql::Table>& output);
	void Insert(vector<Sql::Table>& output);
	void Update(vector<Sql::Table>& output);
	void Select(vector<Sql::Table>& output);
	void Delete(vector<Sql::Table>& output);
	void Drop(vector<Sql::Table>& output);
	void Grant(vector<Sql::Table>& output);
	void Revoke(vector<Sql::Table>& output);
	void Rollback(vector<Sql::Table>& output);
	void SavePoint(vector<Sql::Table>& output);
	void Use(vector<Sql::Table>& output);
	void Alter(vector<Sql::Table>& output);
	//
	void Table(vector<Sql::Table>& output);
	void View(vector<Sql::Table>& output);
	void Trigger(vector<Sql::Table>& output);
	void Index(vector<Sql::Table>& output);
	void Procedure(vector<Sql::Table>& output);
	void Database(vector<Sql::Table>& output);
	void Cursor(vector<Sql::Table>& output);
	//
	void Columns(vector<Sql::Table>& output);
	void Column(vector<Sql::Table>& output);
	void Constraint(vector<Sql::Table>& output);
	void References(vector<Sql::Table>& output);
	void Primary(vector<Sql::Table>& output);
	void Not(vector<Sql::Table>& output);
	void Null(vector<Sql::Table>& output);
	void Check(vector<Sql::Table>& output);
	void Identity(vector<Sql::Table>& output);
	void Auto_Increment(vector<Sql::Table>& output);
	void On(vector<Sql::Table>& output);
	void Unique(vector<Sql::Table>& output);
	void Default(vector<Sql::Table>& output);
	//
	bool IsColumnParam(Cpl::LexicalAnalyzer::Token& token);
	bool IsDataType(Cpl::LexicalAnalyzer::Token& token);
	bool RequiresSize(int datatype);
	bool RequiresDoubleSize(int datatype);
};

//_____________________________________________________________________ Tools
class Tools
{
public:
	~Tools();
	static bool ImportFromText(const wchar_t* inputSqlText, vector<Sql::Table>& output);
	static bool ImportFromFile(const wchar_t* fileName, vector<Sql::Table>& output);
private:
	Tools();
};

//_____________________________________________________________________ StringBuilder
// It provides support to simplify the execution of SQL commands in a SQL application
class StringBuilder
{
public:
	StringBuilder(const wchar_t * table_name, const wchar_t * primary_key_name, int primary_key_value);
	~StringBuilder();
	const wchar_t* GetString();
	//
	int BindInt(const wchar_t* column_name, int value);
	double BindDouble(const wchar_t* column_name, double value);
	bool BindBool(const wchar_t* column_name, bool value);
	Sys::Time BindDateTimeMicrosoft(const wchar_t* column_name, Sys::Time& value);
	Sys::Time BindDateTimeOracle(const wchar_t* column_name, Sys::Time& value);
	Sys::Time BindDateTimeMySql(const wchar_t* column_name, Sys::Time& value);
	const wchar_t* BindString(const wchar_t* column_name, const wchar_t* value);
	const wchar_t* BindString(const wchar_t* column_name, const wstring& value);
	//
	LPARAM Bind(const wchar_t* column_name, Sys::ISelectInt& control);
	bool Bind(const wchar_t* column_name, Sys::ISelectBool& control);
	Sys::Time BindMicrosoft(const wchar_t* column_name, Sys::ISelectTime& control);
	Sys::Time BindOracle(const wchar_t* column_name, Sys::ISelectTime& control);
	Sys::Time BindMySql(const wchar_t* column_name, Sys::ISelectTime& control);
	const wchar_t* Bind(const wchar_t* column_name, Sys::ISelectString& control);
private:
	int primary_key_value;
	wstring primary_key_name;
	wstring sqlCommand;
	wstring sqlValues;
	wstring query;
	bool isFirstTime;
};

//____________________________________________________ SqlExceptInfo
struct SqlExceptInfo
{
	HENV henv;
	HDBC hdbc;
	HSTMT hstmt;
	RETCODE retcode;
};

//____________________________________________________ SqlException
class SqlException
{
public:
	SqlException(Sql::SqlExceptInfo& exceptInfo, const wchar_t* statement, const wchar_t* funcName);
	SqlException(const SqlException& init);
	virtual ~SqlException(void);
	wchar_t* GetDescription(void);
protected:
	RETCODE retcode;
	wchar_t description[WINSQL_EXCEPT_MAX];
};

//____________________________________________________ SqlConnection
// It provides support to connect with SQL databases
class SqlConnection
{
public:
	SqlConnection();
	virtual ~SqlConnection();
	int ExecuteSelect(const wchar_t *statement);
	int ExecuteSelect(const wstring& statement);
	//
	// It sends data to any object that implements the Sys::IEnumerator interface (A list view control, a drop down list, a Sys::Xml object, ...)
	// A list view control must have columns before calling ExecuteSelect
	// A Sys::Xml object must have one node that will be used as sample to insert all data
	RETCODE ExecuteSelect(const wchar_t *statement, unsigned int maxNumberOfChar, Sys::IEnumerator& num);
	//
	// It sends data to any object that implements the Sys::IEnumerator interface (A list view control, a drop down list, a Sys::Xml object, ...)
	// A list view control must have columns before calling ExecuteSelect
	// A Sys::Xml object must have one node that will be used as sample to insert all data
	RETCODE ExecuteSelect(const wstring& statement, unsigned int maxNumberOfChar, Sys::IEnumerator& num);
	//
	// It returns a matrix of wstrings
	RETCODE ExecuteSelect(const wchar_t *statement, unsigned int maxNumberOfChar, vector<vector<wstring> >& output);
	//
	// It returns a matrix of wstrings
	RETCODE ExecuteSelect(const wstring& statement, unsigned int maxNumberOfChar, vector<vector<wstring> >& output);
	//
	// It is used to perform: an INSERT, a UPDATE, or a DELETE
	// It returns the number of rows affected
	int ExecuteNonQuery(const wchar_t* statement);
	//
	// It is used to perform: an INSERT, a UPDATE, or a DELETE
	// It returns the number of rows affected
	int ExecuteNonQuery(const wstring& statement);
	//
	// It returns the number of rows affected
	int ExecDirect(const wchar_t* statement);
	//
	// It returns the number of rows affected
	int ExecDirect(const wstring& statement);
	//
	RETCODE BindParameter(SQLUSMALLINT ipar, SQLSMALLINT fParamType, SQLSMALLINT fCType, SQLSMALLINT fSqlType,
		SQLULEN cvColDef, SQLSMALLINT ibScale, SQLPOINTER rgbValue, SQLLEN cbValueMax, SQLLEN* pcvValue);

	RETCODE BindInputParameter(int parameterNumber, double& parameter);
	RETCODE BindOutputParameter(int parameterNumber, double& parameter);
	RETCODE BindInputParameter(int parameterNumber, int& parameter);
	RETCODE BindOutputParameter(int parameterNumber, int& parameter);
	RETCODE BindInputParameter(int parameterNumber, Sys::SqlTime& parameter);
	RETCODE BindOutputParameter(int parameterNumber, Sys::SqlTime& parameter);
	RETCODE BindInputParameter(int parameterNumber, const wchar_t* parameter);
	RETCODE BindOutputParameter(int parameterNumber, wchar_t* parameter, int maxNumberOfChar);
	RETCODE CreateStatement();
	RETCODE CloseCursor();
	void DestroyStatement();
	int GetColumCount(const wchar_t* statement);
	void BindClear();
	RETCODE BindColumn(int columnNumber, bool &value);
	RETCODE BindColumn(int columnNumber, int &value);
	RETCODE BindColumn(int columnNumber, double &value);
	RETCODE BindColumn(int columnNumber, Sys::SqlTime &value);
	RETCODE BindColumn(int columnNumber, wchar_t* value, int bufferLength);
	RETCODE BindColumn(int columnNumber, Sys::ISelectString& control, int bufferLength);
	RETCODE BindColumn(int columnNumber, Sys::ISelectTime& control);
	RETCODE BindColumn(int columnNumber, Sys::ISelectInt& control);
	RETCODE BindColumn(int columnNumber, Sys::ISelectDouble& control);
	RETCODE BindColumn(int columnNumber, Sys::ISelectBool& control);
	bool Fetch(void);
	RETCODE GetString(const wchar_t* statement, wchar_t* buffer, int bufferLength);
	RETCODE GetString(const wstring& statement, wchar_t* buffer, int bufferLength);
	RETCODE GetString(const wstring& statement, wstring& buffer, int bufferLength);
	RETCODE GetColumn(const wchar_t* statement, int columnIndex, SQLSMALLINT targetType, SQLPOINTER targetValue, SQLINTEGER bufferLength);
	int GetInt(const wchar_t* statement);
	int GetInt(const wstring& statement);
	bool GetBool(const wchar_t* statement);
	bool GetBool(const wstring& statement);
	Sys::Time GetDate(const wchar_t* statement);
	Sys::Time GetDate(const wstring& statement);
	double GetDouble(const wchar_t* statement);
	double GetDouble(const wstring& statement);
	//
	//SQL with ODBC
	RETCODE OpenSession(const wchar_t* dsn, const wchar_t* username, const wchar_t* password);
	//
	//SQL with ODBC
	RETCODE OpenSession(const wstring& dsn, const wstring& username, const wstring& password);
	//
	//SQL with conexion string
	RETCODE OpenSession(HWND hWnd, const wchar_t* connectionString);
	//
	//SQL with conexion string
	RETCODE OpenSession(HWND hWnd, const wstring& connectionString);
	//
	//SQL with conexion string
	RETCODE OpenSession(Sys::IWindow& window, const wchar_t* connectionString);
	//
	//SQL with conexion string
	RETCODE OpenSession(Sys::IWindow& window, const wstring& connectionString);
	//
	//SQL with conexion string
	void CloseSession();
	//wchar_t* GetErrorInformation(RETCODE retcode);
	static bool IsOk(RETCODE retcode)
	{
		return ((retcode==SQL_SUCCESS) || (retcode==SQL_SUCCESS_WITH_INFO));
	}
	static int GetAttributeCount(const wchar_t* statement);
	static int GetAttributeNames(const wchar_t* statement, vector<wstring>& output);
private:
	HENV henv;
	HDBC hdbc;
	HSTMT hstmt;
	bool bConnected;
	SQLLEN bindColStr[SQL_BINDCOL_MAX];
	Sys::ISelect* iselect[SQL_BINDCOL_MAX];
};

} //____________________________________________________ namespace Sql::End

// Web
namespace Web //________________________________________ namespace Web::Ini
{

//_____________________________________________________________________ ServiceVariable
class ServiceVariable
{
public:
	ServiceVariable();
	~ServiceVariable();
	const wchar_t* GetTypeText();
	wstring name;
	wstring value;
	int type; //WEBSERVICE_VARIABLE_INT, WEBSERVICE_VARIABLE_DOUBLE, WEBSERVICE_VARIABLE_BOOL, WEBSERVICE_VARIABLE_TEXT
};

//_____________________________________________________________________ LexicalAnalyzer
// Given an html text, it creates a list of tokens
class LexicalAnalyzer : public Cpl::LexicalAnalyzer
{
public:
	LexicalAnalyzer(void);
	~LexicalAnalyzer(void);
	virtual void GetNextToken(Cpl::LexicalAnalyzer::Token& token);
	static bool GetTokens(const wchar_t* inputString, vector<Cpl::LexicalAnalyzer::Token>& output);
protected:
	bool isInsideTag;
	//
	// It handles:  &nbsp;  and all ampersand ... semicolon sequences
	virtual bool ProcessCharSequence(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	virtual void FillKeywords(unordered_map<wstring, int>& keyword);
	virtual bool ProcessComments(wchar_t& c, Web::LexicalAnalyzer::Token& token);
	virtual bool ProcessSeparator(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	virtual void ProcessString(wchar_t& c, Cpl::LexicalAnalyzer::Token& token);
	bool ContinueString(wchar_t c);
};

//_____________________________________________________________________ HtmlToColorText
// It convert HTML text to a list of Sys::ColorText
class HtmlToColorText
{
public:
	HtmlToColorText();
	~HtmlToColorText();
	void Convert(const wchar_t* input, list<Sys::ColorText>& output);
	void Convert(const wstring& input, list<Sys::ColorText>& output);
	COLORREF colorText;
	COLORREF colorTagName;
	COLORREF colorTagProperty;
	COLORREF colorTag;
	COLORREF colorEqualSign;
	COLORREF colorError;
	COLORREF colorID;
	COLORREF colorSpecialSymbol;
	COLORREF colorQuotedText;
};

//__________________________________________________  CssType
class CssType
{
public:
	~CssType();
	//____________________________________________ Position
	enum Position//MB1: X000 0000
	{
		PositionAuto = 0x00000000, 
		PositionAbsolute = 0x10000000, 
		PositionRelative = 0x20000000
	};

	//____________________________________________ FontFamily
	enum FontFamily //MB1: 0XX0 0000
	{
		FontFamilyAuto = 0x00000000, 
		FontFamilyArial = 0x00100000, 
		FontFamilyCourier = 0x00200000, 
		FontFamilyTimesNewRoman = 0x00400000
	};

	//____________________________________________ TextAlign
	enum TextAlign //MB1: 000X 0000
	{
		TextAlignAuto = 0x00000000, 
		TextAlignCenter = 0x00010000, 
		TextAlignJustify = 0x00020000, 
		TextAlignLeft = 0x00040000, 
		TextAlignRight = 0x00080000
	};

	//____________________________________________ VerticalAlign
	enum VerticalAlign //MB1: 0000 XX00
	{
		VerticalAlignAuto = 0x00000000, 
		VerticalAlignBaseline = 0x00000100, 
		VerticalAlignBottom = 0x00000200, 
		VerticalAlignMiddle = 0x00000400, 
		VerticalAlignSub = 0x00000800, 
		VerticalAlignSuper = 0x00001000, 
		VerticalAlignTextBottom = 0x00002000, 
		VerticalAlignTextTop = 0x00004000, 
		VerticalAlignTop = 0x00008000
	};

	//____________________________________________ TextDecoration
	enum TextDecoration //MB1: 0000 00XX
	{
		TextDecorationAuto = 0x00000000, 
		TextDecorationBlink = 0x00000001, 
		TextDecorationLineThrough = 0x00000002, 
		TextDecorationNone = 0x00000004,
		TextDecorationOverline = 0x00000008, 
		TextDecorationUnderline = 0x00000010
	};

	//____________________________________________ Visibility
	enum Visibility//MB2: X000 0000
	{
		VisibilityAuto = 0x00000000, 
		VisibilityHidden = 0x10000000, 
		VisibilityVisible = 0x20000000
	};

	//____________________________________________ BorderStyle
	enum BorderStyle//MB2: 0XX0 0000
	{
		BorderStyleAuto = 0x00000000, 
		BorderStyleDotted = 0x00100000, 
		BorderStyleGroove = 0x00200000, 
		BorderStyleInset = 0x00400000,
		BorderStyleNone = 0x00800000, 
		BorderStyleOutset = 0x01000000, 
		BorderStyleRidge = 0x02000000,
		BorderStyleSolid = 0x04000000
	};

	//____________________________________________ Display
	enum Display //MB2: 000X 0000
	{
		DisplayAuto = 0x00000000, 
		DisplayBlock = 0x00010000, 
		DisplayInline = 0x00020000, 
		DisplayListItem = 0x00040000,
		DisplayNone = 0x00080000
	};

	//____________________________________________ Cursor
	enum Cursor//MB2: 0000 XXXX
	{
		CursorAuto = 0x00000000, 
		CursorCrosshair = 0x00000001, 
		CursorDefault = 0x00000002, 
		CursorEResize = 0x00000004, 
		CursorHelp = 0x00000008, 
		CursorMove = 0x00000010, 
		CursorNeResize = 0x00000020, 
		CursorNResize = 0x00000040, 
		CursorNwResize = 0x00000080, 
		CursorPointer = 0x00000100, 
		CursorSeResize = 0x00000200, 
		CursorSResize = 0x00000400, 
		CursorSwResize = 0x00000800, 
		CursorText = 0x00001000, 
		CursorWait = 0x00002000,  
		CursorWResize = 0x00004000 	
	};

	//____________________________________________ OverflowX
	enum OverflowX//MB3: XX00 0000
	{
		OverflowXNone = 0x00000000, 
		OverflowXVisible = 0x01000000, 
		OverflowXHidden = 0x02000000, 
		OverflowXScroll = 0x04000000, 
		OverflowXAuto = 0x08000000, 
		OverflowXInherit = 0x10000000, 
	};

	//____________________________________________ OverflowY
	enum OverflowY//MB3: 00XX 0000
	{
		OverflowYNone = 0x00000000, 
		OverflowYVisible = 0x00010000, 
		OverflowYHidden = 0x00020000, 
		OverflowYScroll = 0x00040000, 
		OverflowYAuto = 0x00080000, 
		OverflowYInherit = 0x00100000, 
	};

	//____________________________________________ FontWeight
	enum FontWeight//MB3: 0000 XXXX
	{
		FontWeightAuto = 0x00000000,
		FontWeightNormal = 0x00000001,
		FontWeightBold = 0x00000002,
		FontWeightBolder = 0x00000004,
		FontWeightLighter = 0x00000008,
		FontWeight100 = 0x00000010,
		FontWeight200 = 0x00000020,
		FontWeight300 = 0x00000040,
		FontWeight400 = 0x00000080,
		FontWeight500 = 0x00000100,
		FontWeight600 = 0x00000200,
		FontWeight700 = 0x00000400,
		FontWeight800 = 0x00000800,
		FontWeight900 = 0x00001000,
		FontWeightInitial = 0x00002000
	};
	private:
	CssType();
};

//__________________________________________________ Helper
class Helper
{
public:
	~Helper();
	static wchar_t* GetControlClass(int type_id);
	static wchar_t * GetControlCaption(int type_id);
	static wchar_t* GetControlDescr(int type_id);
	//
	static wchar_t* GetTagDesc(int type);
	static wchar_t* GetTag(int type);
	static wchar_t* GetTagName(int type);
	static wchar_t* GetNodeTypeText(int type); //For:  Label and ParentNode
	static bool RequiresClosingTag(int type);
	//_________________________________________________ CSS
	//_______________________________________________ Look up functions
	static wchar_t* GetPositionDescr(Web::CssType::Position position);
	static wchar_t* GetFontFamilyDescr(Web::CssType::FontFamily font_family);
	static wchar_t* GetTextAlignDescr(Web::CssType::TextAlign text_align);
	static wchar_t* GetVerticalAlignDescr(Web::CssType::VerticalAlign vertical_align);
	static wchar_t* GetTextDecorationDescr(Web::CssType::TextDecoration text_decoration);
	static wchar_t* GetVisibilityDescr(Web::CssType::Visibility visibility);
	static wchar_t* GetBorderStyleDescr(Web::CssType::BorderStyle border_style);
	static wchar_t* GetDisplayDescr(Web::CssType::Display display);
	static wchar_t* GetCursorDescr(Web::CssType::Cursor cursor);
	//_______________________________________________ Look up Values
	static wchar_t* GetPositionValue(Web::CssType::Position position);
	static wchar_t* GetFontFamilyValue(Web::CssType::FontFamily font_family);
	static wchar_t* GetTextAlignValue(Web::CssType::TextAlign text_align);
	static wchar_t* GetVerticalAlignValue(Web::CssType::VerticalAlign vertical_align);
	static wchar_t* GetTextDecorationValue(Web::CssType::TextDecoration text_decoration);
	static wchar_t* GetVisibilityValue(Web::CssType::Visibility visibility);
	static wchar_t* GetBorderStyleValue(Web::CssType::BorderStyle border_style);
	static wchar_t* GetDisplayValue(Web::CssType::Display display);
	static wchar_t* GetCursorValue(Web::CssType::Cursor cursor);
	static wchar_t* GetOverflowXValue(Web::CssType::OverflowX overflowX);
	static wchar_t* GetOverflowYValue(Web::CssType::OverflowY overflowY);
	static wchar_t* GetFontWeightValue(Web::CssType::FontWeight font_weight);
	//_______________________________________________ Look up Enums
	static wchar_t* GetPositionEnum(Web::CssType::Position position);
	static wchar_t* GetFontFamilyEnum(Web::CssType::FontFamily font_family);
	static wchar_t* GetTextAlignEnum(Web::CssType::TextAlign text_align);
	static wchar_t* GetVerticalAlignEnum(Web::CssType::VerticalAlign vertical_align);
	static wchar_t* GetTextDecorationEnum(Web::CssType::TextDecoration text_decoration);
	static wchar_t* GetVisibilityEnum(Web::CssType::Visibility visibility);
	static wchar_t* GetBorderStyleEnum(Web::CssType::BorderStyle border_style);
	static wchar_t* GetDisplayEnum(Web::CssType::Display display);
	static wchar_t* GetCursorEnum(Web::CssType::Cursor cursor);
	static wchar_t* GetOverflowXEnum(Web::CssType::OverflowX overflowX);
	static wchar_t* GetOverflowYEnum(Web::CssType::OverflowY overflowY);
	static wchar_t* GetFontWeightEnum(Web::CssType::FontWeight font_weight);
	//_______________________________________________ Reverse Look up functions
	static Web::CssType::Position GetPositionType(const wchar_t* text);
	static Web::CssType::FontFamily GetFontFamilyType(const wchar_t* text);
	static Web::CssType::TextAlign GetTextAlignType(const wchar_t* text);
	static Web::CssType::VerticalAlign GetVerticalAlignType(const wchar_t* text);
	static Web::CssType::TextDecoration GetTextDecorationType(const wchar_t* text);
	static Web::CssType::Visibility GetVisibilityType(const wchar_t* text);
	static Web::CssType::BorderStyle GetBorderStyleType(const wchar_t* text);
	static Web::CssType::Display GetDisplayType(const wchar_t* text);
	static Web::CssType::Cursor GetCursorType(const wchar_t* text);
	static Web::CssType::OverflowX GetOverflowXType(const wchar_t* text);
	static Web::CssType::OverflowY GetOverflowYType(const wchar_t* text);
	static Web::CssType::FontWeight GetFontWeightType(const wchar_t* text);
	//_______________________________________________ Read Values
	//static Web::CssType::Position ReadPositionValue(const wchar_t* text);
	//static Web::CssType::FontFamily ReadFontFamilyValue(const wchar_t* text);
	//static Web::CssType::TextAlign ReadTextAlignValue(const wchar_t* text);
	//static Web::CssType::VerticalAlign ReadVerticalAlignValue(const wchar_t* text);
	//static Web::CssType::TextDecoration ReadTextDecorationValue(const wchar_t* text);
	static Web::CssType::Visibility ReadVisibilityValue(const wchar_t* text);
	//static Web::CssType::BorderStyle ReadBorderStyleValue(const wchar_t* text);
	//static Web::CssType::Display ReadDisplayValue(const wchar_t* text);
	static Web::CssType::Cursor ReadCursorValue(const wchar_t* text);
	//static Web::CssType::OverflowX ReadOverflowXValue(const wchar_t* text);
	//static Web::CssType::OverflowY ReadOverflowYValue(const wchar_t* text);
	//static Web::CssType::FontWeight ReadFontWeightValue(const wchar_t* text);
private:
	Helper();
};

//__________________________________________________ Http
class Http
{
public:
	Http();
	~Http();
	//_______________________________ GetHeaderValue
	bool GetHeaderValue(const wchar_t* in_name, wstring& out_value);
	bool GetHeaderValue(const wstring& in_name, wstring& out_value);
	//
	// It creates a HTTP Response or Request from XML
	void Create(Sys::Xml& xml);
	//
	// It creates a HTTP Response or Request from a Soap Envelope
	void Create(Sys::SoapEnvelope& soapEnvelope);
	//
	//It returns the Content-Length value or -1 if not found
	int GetContentLength();
#ifdef WIN_SOCKETS_SUPPORT
	//
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool Create(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket);
	//
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool Send(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket);
	//
	// It sends a file to a socket
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool SendFile(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket, const wstring& filename);
	//
	// It sends a file to a socket
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool SendFile(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket, const wchar_t* filename);
	//
	// It receives a file from a socket
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool ReceiveFile(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket, const wstring& filename);
	//
	// It receives a file from a socket
	// If out_socketStatus.isError is true, call socket.GetLastErrorDescr() to get error information
	bool ReceiveFile(Sys::SocketStatus& out_socketStatus, Sys::Socket& socket, const wchar_t* filename);
#endif
	void GetHeadHtml(bool includeDate, wstring& out_html);
	void GetHeadText(wstring& out_text);
	void GetBodyText(wstring& out_text);
	void GetText(wstring& out_text);
	void GetTextToBeSent(wstring& out_text);
	//______________________________
	int majorVersion; // 1
	int minorVersion; // 0
	//______________________________
	//unordered_map<wstring, wstring, std::hash<wstring>, Sys::TextAssistant::NoCaseLess, std::allocator<std::pair<const wstring, wstring> >  > head;
	map<wstring, wstring, Sys::TextAssistant::NoCaseLess> head;
	Sys::Buffer body;
	void Delete();
	bool IsUtf8();
	bool DoKeepConnectionAlive();
	//
	// It sets the username and password > Authorization: 
	void SetUsernameAndPassword(const wchar_t* username, const wchar_t* password);
	//
	// It sets the username and password > Authorization: 
	void SetUsernameAndPassword(const wstring& username, const wstring& password);
	//
	// It extracts the username and password from Authorization: 
	bool GetUsernameAndPassword(wstring& out_username, wstring& out_password);
	//
	// It extracts the username and password from Authorization: 
	bool GetUsernameAndPassword(string& out_username, string& out_password);
	//
	// It returns the Current Date in a Http Response
	static void GetDateHeader(char* buffer, int bufferSize);
	//
	// It returns the Current Date in a Http Response
	static void GetDateHeader(wchar_t* buffer, int bufferSize);
	//
	static const wchar_t* GetMimeContentType(const wchar_t* fileExtension);
	//
	virtual void CreateFromCode(int code, const wchar_t* caption) = 0;
protected:
	virtual bool PrepareSendFile(const wchar_t* filename, int& out_fileSize, bool& mustSend) = 0;
	virtual bool CanSaveFile() = 0;
	//
	void RenderHeadText(wstring& out_text, int content_length);
	bool CreateHead(const char* in_buffer, const size_t bufferSize);
	bool ReadHeadName(size_t& position, const char* in_buffer, const size_t bufferSize, wstring& out_name);
	bool ReadHeadValue(size_t& position, const char* in_buffer, const size_t bufferSize, wstring& out_value);
	bool IsBlankLine(size_t& position, const char* in_buffer, const size_t bufferSize);
	bool ReadBody(size_t& position, const char* in_buffer, const size_t bufferSize);
	//
	virtual void PrivateDelete() = 0;
	virtual bool ReadStatusLine(size_t& position, const char* in_buffer, const size_t bufferSize) = 0;
	virtual void WriteStatusLine(wstring& text) = 0;
	virtual void RenderCustomHead(wstring& text) = 0; // Used only while sending http
	//
	bool DoesBodyHaveText(bool& isUtf8);
	virtual bool IsRequiredToReceiveBody() = 0;
};

//__________________________________________________ HttpRequest
class HttpRequest : public Web::Http
{
public:
	HttpRequest();
	~HttpRequest();
	//
	wstring method;
	wstring resource;
	wstring resourceFileName;
	wstring resourceFileExtension;
	wstring resourcePath;
	string query_string;
	wstring query_wstring;
	//
	// It returns wwwroot\images\hellen.png
	void GetRequestedFileName(const wchar_t* wwwroot, wstring& out_filename);
	//
	// It returns wwwroot\images\hellen.png
	void GetRequestedFileName(const wstring& wwwroot, wstring& out_filename);
	//
	void CreateFromCode(int code, const wchar_t* caption);
private:
	bool PrepareSendFile(const wchar_t* filename, int& out_fileSize, bool& mustSend);
	bool CanSaveFile();
	//
	void PrivateDelete();
	bool ReadStatusLine(size_t& position, const char* in_buffer, const size_t bufferSize);
	void WriteStatusLine(wstring& text);
	void RenderCustomHead(wstring& text);
	bool ReadResourceComponents();
	bool IsRequiredToReceiveBody();
};

//__________________________________________________ HttpResponse
class HttpResponse : public Web::Http
{
public:
	HttpResponse();
	~HttpResponse();
	int code; //100, 101, 200, ...
	//
	// code = 100, 101, 200, ...
	static const char* GetCodeDescrChar(int code);
	//
	// code = 100, 101, 200, ...
	static const wchar_t* GetCodeDescr(int code);
	//
	// input: in_location = http://www.hello.com/?abcdef
	// output: out_servername = www.hello.com
	// output: out_resource = /?abcdef
	static bool SeparateLocation(const wchar_t* in_location, wstring& out_servername, wstring& out_resource);
	//
	// input: in_location = http://www.hello.com/?abcdef
	// output: out_servername = www.hello.com
	// output: out_resource = /?abcdef
	static bool SeparateLocation(const wstring& in_location, wstring& out_servername, wstring& out_resource);
	//
	void CreateFromCode(int code, const wchar_t* caption);
private:
	bool PrepareSendFile(const wchar_t* filename, int& out_fileSize, bool& mustSend);
	bool CanSaveFile();
	//
	void PrivateDelete();
	bool ReadStatusLine(size_t& position, const char* in_buffer, const size_t bufferSize);
	void WriteStatusLine(wstring& text);
	void RenderCustomHead(wstring& text);
	bool IsRequiredToReceiveBody();
};

//__________________________________________________ HttpConnector
// It provides support to handle the HTTP protocol
class HttpConnector : public Sys::ITextWriterW
{
public:
	HttpConnector(EXTENSION_CONTROL_BLOCK* pECB);
	~HttpConnector();
	bool WriteText(const wstring& source);
	wchar_t* GetWindowID();
	bool CheckEvent(const wstring& ID, int notification);
	DWORD SendResponse(EXTENSION_CONTROL_BLOCK* pECB);
	static const char * GetContentTypeDescription(int content_type);
	wstring url;
	bool HasRequestBeenHandled();
	void SetRequestEvent();
	void NavigateTo(const wchar_t* windowID);
	bool GetServerVariable(const char* variableName, char* buffer, DWORD bufferLen);
	bool GetServerVariable(const char* variableName, string& out_value);
	bool GetServerVariable(const char* variableName, wstring& out_value);
	bool GetServerVariable(const wchar_t* variableName, wstring& out_value);
	bool GetServerVariable(const wstring& variableName, wstring& out_value);
	bool GetClientIP_Address(wstring& out_clientIP);
	multimap<wstring, wstring> value; // the list of variables and their values
	//
	char* postData; // This can be used to upload files to the server
	DWORD postDataNumberBytes; // The actual size of postData;
	//
	string responseData; // Use by: BarChart, PieChart, PolarChart and XyChart
	int GetExplorerID(); // returns: HTML_BROWSER_UNKNOWN, HTML_BROWSER_IE, ...
	int ContentType; //HTML_CONTENT_TYPE_TEXT_HTML, HTML_CONTENT_TYPE_TEXT_XML, ...
	int httpCode; //100, 101, 200, 201, 202, ...
	//
	//______________________________________________________ FirstTime
	bool IsFirstTime();
	__declspec( property ( get=IsFirstTime) ) bool FirstTime;
	//______________________________________________________ IsAjax
	bool IsAjax();
	__declspec( property ( get=IsAjax) ) bool Ajax;
	//
	void AddVariable(const wchar_t* variableName, const wchar_t* variableValue);
	bool SetVariable(const wchar_t* variableName, const wchar_t* variableValue);
	//
	bool GetVariable(const wchar_t* variableName, wstring& out_variableValue);
	bool GetVariable(const wstring& variableName, wstring& out_variableValue);
	//
	bool GetVariable(const wchar_t*  variableName, double& out_variableValue);
	bool GetVariable(const wstring& variableName, double& out_variableValue);
	//
	bool GetVariable(const wchar_t*  variableName, int& out_variableValue);
	bool GetVariable(const wstring& variableName, int& out_variableValue);
	//
	bool GetVariable(const wchar_t*  variableName, bool& out_variableValue);
	bool GetVariable(const wstring& variableName, bool& out_variableValue);
	//
	// It returns the name of the Server variable
	// Call this function several times using index= 0, 1, 2, 3, ... until you get a NULL value returned
	static const wchar_t* GetServerVariableName(int index);
	//
	Sys::Xml ajaxHttpRequest;
	//
	// If found, it returns an iterator to the Control node
	bool GetAjaxControlIterator(const wchar_t* ID, list<Sys::Xml>::const_iterator& control) const;
	//
	wstring soapXmlError;
protected:
	void ReadQueryString();
	bool ReadPostData();
	void ReadVariables(const char* data, DWORD len);
	void ReadVariablesFromSoapXml(const char* data, DWORD len);
	bool _hasRequestBeenHandled;
	wstring html;
	wchar_t windowID[64];
	EXTENSION_CONTROL_BLOCK* pECB;
	void UpdateUrl(); 
	bool isSoap;
	bool _isAjax;
};

#ifdef WIN_SOCKETS_SUPPORT

//__________________________________________________ ConnectionHandle
// It provides support to develop a Web server
class ConnectionHandle : public Mt::IThread
{
public:
	ConnectionHandle();
	~ConnectionHandle();
	Sys::Socket socket;
	//
	// The root folder were the Web site files are located
	wstring wwwroot;
	//
	//HTTP_DEBUG_NONE, HTTP_DEBUG_STATUSLINE, HTTP_DEBUG_HEADER, HTTP_DEBUG_FULL
	int httpDebug;
	//_______________________________ Mt::IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
protected:
	bool keepConnection;
	Web::HttpRequest httpRequest;
	//
	// You may override this function to create your own Web Server
	virtual bool ProcessRequest(Sys::SocketStatus& out_socketStatus);
	bool SendErrorCode(Sys::SocketStatus& out_socketStatus, int code, const wchar_t* details);
	bool SendFile(Sys::SocketStatus& out_socketStatus);
	bool ExecuteDll(Sys::SocketStatus& out_socketStatus);
	static int CopyValue(const wstring& input, char* buffer, int bufferSize);
	int CopyFromHead(const wstring& name, char* buffer, int bufferSize);
	bool LoadDLL(Sys::DLLibrary& dll);
	//________________________________Microsoft IIS Interface
	static BOOL WINAPI ServerSupportFunction_(HCONN hConn, 
								   DWORD dwHSERequest, LPVOID lpvBuffer, LPDWORD lpdwSize, LPDWORD lpdwDataType);
	static BOOL WINAPI WriteClient_(HCONN hConn, LPVOID lpvBuffer, LPDWORD lpdwBytes, DWORD dwReserved);
	static BOOL WINAPI ReadClient_ (HCONN hConn, LPVOID lpvBuffer, LPDWORD lpdwSize);
	static BOOL WINAPI GetServerVariable_ ( HCONN hConn, LPSTR lpszVariableName, LPVOID lpvBuffer, LPDWORD lpdwSize);
};

//__________________________________________________ Server
// A test web server
class Server : public Mt::IThread
{
public:
	Server();
	~Server();
	// The server will post a WM_USER message to notify: WIN_THREAD_STARTED, WIN_THREAD_READY and WIN_THREAD_STOPPED
	HWND hWndNotify;
	//
	// The server will start trying to find a socket available at the minimumPortNumber and 
	// will stop trying at the maximumPortNumber
	// Do not modify this value while the server is running
	int minimumPortNumber;
	//
	// The server will start trying to find a socket available at the minimumPortNumber and 
	// will stop trying at the maximumPortNumber
	// Do not modify this value while the server is running
	int maximumPortNumber;
	//
	// Do not modify this value while the server is running
	int numThreads;
	//
	// Do not modify this value while the server is running
	wstring wwwroot;
	//
	// Do not modify this value while the server is running
	//HTTP_DEBUG_NONE, HTTP_DEBUG_STATUSLINE, HTTP_DEBUG_HEADER, HTTP_DEBUG_FULL
	int httpDebug;
	//
	// It returns the port number where the server is operating
	int GetPortNumber();
	//
	bool Stop(Mt::ThreadObject& threadObject);
	//____________________________________________________________ IThread
	DWORD ThreadFunc(Mt::BoolTs& running, Mt::DoubleTs& progress, Mt::BoolTs& resetTime); 
protected:
	Sys::Socket socketListen;
	Mt::IntTs _portNumber;
	//
	wchar_t* Run(Mt::BoolTs& running);
};
#endif

//________________________________________________________ JavascriptEvent
class JavascriptEvent
{
public:
	JavascriptEvent();
	~JavascriptEvent();
	//_______________________________________________________________ KEYBOARD EVENTS
	void Set_onkeydown(bool fireEvent);
	bool Get_onkeydown();
	__declspec(property(get = Get_onkeydown, put = Set_onkeydown)) bool onkeydown;
	//
	void Set_onkeypress(bool fireEvent);
	bool Get_onkeypress();
	__declspec(property(get = Get_onkeypress, put = Set_onkeypress)) bool onkeypress;
	//
	void Set_onkeyup(bool fireEvent);
	bool Get_onkeyup();
	__declspec(property(get = Get_onkeyup, put = Set_onkeyup)) bool onkeyup;
	//_______________________________________________________________ MOUSE EVENTS
	void Set_onclick(bool fireEvent);
	bool Get_onclick();
	__declspec(property(get = Get_onclick, put = Set_onclick)) bool onclick;
	//
	void Set_ondblclick(bool fireEvent);
	bool Get_ondblclick();
	__declspec(property(get = Get_ondblclick, put = Set_ondblclick)) bool ondblclick;
	//
	void Set_ondrag(bool fireEvent);
	bool Get_ondrag();
	__declspec(property(get = Get_ondrag, put = Set_ondrag)) bool ondrag;
	//
	void Set_ondragend(bool fireEvent);
	bool Get_ondragend();
	__declspec(property(get = Get_ondragend, put = Set_ondragend)) bool ondragend;
	//
	void Set_ondragenter(bool fireEvent);
	bool Get_ondragenter();
	__declspec(property(get = Get_ondragenter, put = Set_ondragenter)) bool ondragenter;
	//
	void Set_ondragleave(bool fireEvent);
	bool Get_ondragleave();
	__declspec(property(get = Get_ondragleave, put = Set_ondragleave)) bool ondragleave;
	//
	void Set_ondragover(bool fireEvent);
	bool Get_ondragover();
	__declspec(property(get = Get_ondragover, put = Set_ondragover)) bool ondragover;
	//
	void Set_ondragstart(bool fireEvent);
	bool Get_ondragstart();
	__declspec(property(get = Get_ondragstart, put = Set_ondragstart)) bool ondragstart;
	//
	void Set_ondrop(bool fireEvent);
	bool Get_ondrop();
	__declspec(property(get = Get_ondrop, put = Set_ondrop)) bool ondrop;
	//
	void Set_onerror(bool fireEvent);
	bool Get_onerror();
	__declspec(property(get = Get_onerror, put = Set_onerror)) bool onerror;
	//
	void Set_onload(bool fireEvent);
	bool Get_onload();
	__declspec(property(get = Get_onload, put = Set_onload)) bool onload;
	//
	void Set_onmousedown(bool fireEvent);
	bool Get_onmousedown();
	__declspec(property(get = Get_onmousedown, put = Set_onmousedown)) bool onmousedown;
	//
	void Set_onmousemove(bool fireEvent);
	bool Get_onmousemove();
	__declspec(property(get = Get_onmousemove, put = Set_onmousemove)) bool onmousemove;
	//
	void Set_onmouseout(bool fireEvent);
	bool Get_onmouseout();
	__declspec(property(get = Get_onmouseout, put = Set_onmouseout)) bool onmouseout;
	//
	void Set_onmouseover(bool fireEvent);
	bool Get_onmouseover();
	__declspec(property(get = Get_onmouseover, put = Set_onmouseover)) bool onmouseover;
	//
	void Set_onmouseup(bool fireEvent);
	bool Get_onmouseup();
	__declspec(property(get = Get_onmouseup, put = Set_onmouseup)) bool onmouseup;
	//
	void Set_onmousewheel(bool fireEvent);
	bool Get_onmousewheel();
	__declspec(property(get = Get_onmousewheel, put = Set_onmousewheel)) bool onmousewheel;
	//
	void Set_onscroll(bool fireEvent);
	bool Get_onscroll();
	__declspec(property(get = Get_onscroll, put = Set_onscroll)) bool onscroll;
	//_______________________________________________________________ MOUSEFORM EVENTS
	void Set_onblur(bool fireEvent);
	bool Get_onblur();
	__declspec(property(get = Get_onblur, put = Set_onblur)) bool onblur;
	//
	void Set_onchange(bool fireEvent);
	bool Get_onchange();
	__declspec(property(get = Get_onchange, put = Set_onchange)) bool onchange;
	//
	void Set_oncontextmenu(bool fireEvent);
	bool Get_oncontextmenu();
	__declspec(property(get = Get_oncontextmenu, put = Set_oncontextmenu)) bool oncontextmenu;
	//
	void Set_onfocus(bool fireEvent);
	bool Get_onfocus();
	__declspec(property(get = Get_onfocus, put = Set_onfocus)) bool onfocus;
	//
	void Set_oninput(bool fireEvent);
	bool Get_oninput();
	__declspec(property(get = Get_oninput, put = Set_oninput)) bool oninput;
	//
	void Set_oninvalid(bool fireEvent);
	bool Get_oninvalid();
	__declspec(property(get = Get_oninvalid, put = Set_oninvalid)) bool oninvalid;
	//
	void Set_onselect(bool fireEvent);
	bool Get_onselect();
	__declspec(property(get = Get_onselect, put = Set_onselect)) bool onselect;
	//
	static const wchar_t* GetHelp(int index);
	static const wchar_t* GetID(int index);
	void Render(const wchar_t* ctrlID, Sys::ITextWriterW& out_html, const wchar_t* url);
private:
	void Set(bool fireEvent, unsigned __int32 flag)
	{
		if (fireEvent == true)
		{
			_data |= flag;
		}
		else
		{
			_data &= (~flag);
		}
	}
	unsigned __int32 _data;
};

//________________________________________________________  JavascriptMediaEvent
class JavascriptMediaEvent
{
public:
	JavascriptMediaEvent();
	~JavascriptMediaEvent();
	//
	void Set_onabort(bool fireEvent);
	bool Get_onabort();
	__declspec(property(get = Get_onabort, put = Set_onabort)) bool onabort;
	//
	void Set_oncanplay(bool fireEvent);
	bool Get_oncanplay();
	__declspec(property(get = Get_oncanplay, put = Set_oncanplay)) bool oncanplay;
	//
	void Set_oncanplaythrough(bool fireEvent);
	bool Get_oncanplaythrough();
	__declspec(property(get = Get_oncanplaythrough, put = Set_oncanplaythrough)) bool oncanplaythrough;
	//
	void Set_ondurationchange(bool fireEvent);
	bool Get_ondurationchange();
	__declspec(property(get = Get_ondurationchange, put = Set_ondurationchange)) bool ondurationchange;
	//
	void Set_onemptied(bool fireEvent);
	bool Get_onemptied();
	__declspec(property(get = Get_onemptied, put = Set_onemptied)) bool onemptied;
	//
	void Set_onended(bool fireEvent);
	bool Get_onended();
	__declspec(property(get = Get_onended, put = Set_onended)) bool onended;
	//
	void Set_onerror(bool fireEvent);
	bool Get_onerror();
	__declspec(property(get = Get_onerror, put = Set_onerror)) bool onerror;
	//
	void Set_onloadeddata(bool fireEvent);
	bool Get_onloadeddata();
	__declspec(property(get = Get_onloadeddata, put = Set_onloadeddata)) bool onloadeddata;
	//
	void Set_onloadedmetadata(bool fireEvent);
	bool Get_onloadedmetadata();
	__declspec(property(get = Get_onloadedmetadata, put = Set_onloadedmetadata)) bool onloadedmetadata;
	//
	void Set_onloadstart(bool fireEvent);
	bool Get_onloadstart();
	__declspec(property(get = Get_onloadstart, put = Set_onloadstart)) bool onloadstart;
	//
	void Set_onpause(bool fireEvent);
	bool Get_onpause();
	__declspec(property(get = Get_onpause, put = Set_onpause)) bool onpause;
	//
	void Set_onplay(bool fireEvent);
	bool Get_onplay();
	__declspec(property(get = Get_onplay, put = Set_onplay)) bool onplay;
	//
	void Set_onplaying(bool fireEvent);
	bool Get_onplaying();
	__declspec(property(get = Get_onplaying, put = Set_onplaying)) bool onplaying;
	//
	void Set_onprogress(bool fireEvent);
	bool Get_onprogress();
	__declspec(property(get = Get_onprogress, put = Set_onprogress)) bool onprogress;
	//
	void Set_onratechange(bool fireEvent);
	bool Get_onratechange();
	__declspec(property(get = Get_onratechange, put = Set_onratechange)) bool onratechange;
	//
	void Set_onreadystatechange(bool fireEvent);
	bool Get_onreadystatechange();
	__declspec(property(get = Get_onreadystatechange, put = Set_onreadystatechange)) bool onreadystatechange;
	//
	void Set_onseeked(bool fireEvent);
	bool Get_onseeked();
	__declspec(property(get = Get_onseeked, put = Set_onseeked)) bool onseeked;
	//
	void Set_onseeking(bool fireEvent);
	bool Get_onseeking();
	__declspec(property(get = Get_onseeking, put = Set_onseeking)) bool onseeking;
	//
	void Set_onstalled(bool fireEvent);
	bool Get_onstalled();
	__declspec(property(get = Get_onstalled, put = Set_onstalled)) bool onstalled;
	//
	void Set_onsuspend(bool fireEvent);
	bool Get_onsuspend();
	__declspec(property(get = Get_onsuspend, put = Set_onsuspend)) bool onsuspend;
	//
	void Set_ontimeupdate(bool fireEvent);
	bool Get_ontimeupdate();
	__declspec(property(get = Get_ontimeupdate, put = Set_ontimeupdate)) bool ontimeupdate;
	//
	void Set_onvolumechange(bool fireEvent);
	bool Get_onvolumechange();
	__declspec(property(get = Get_onvolumechange, put = Set_onvolumechange)) bool onvolumechange;
	//
	void Set_onwaiting(bool fireEvent);
	bool Get_onwaiting();
	__declspec(property(get = Get_onwaiting, put = Set_onwaiting)) bool onwaiting;
	//
	static const wchar_t* GetHelp(int index);
	static const wchar_t* GetID(int index);
	void Render(const wchar_t* ctrlID, Sys::ITextWriterW& out_html, const wchar_t* url);
private:
	void Set(bool fireEvent, unsigned __int32 flag)
	{
		if (fireEvent == true)
		{
			_data |= flag;
		}
		else
		{
			_data &= (~flag);
		}
	}
	unsigned __int32 _data;
};

//________________________________________________________  JavascriptPageEvent
//class JavascriptPageEvent
//{
//public:
//	JavascriptPageEvent();
//	~JavascriptPageEvent();
//	//
//	void Set_onafterprint(bool fireEvent);
//	bool Get_onafterprint();
//	__declspec(property(get = Get_onafterprint, put = Set_onafterprint)) bool onafterprint;
//	//
//	void Set_onbeforeprint(bool fireEvent);
//	bool Get_onbeforeprint();
//	__declspec(property(get = Get_onbeforeprint, put = Set_onbeforeprint)) bool onbeforeprint;
//	//
//	void Set_onbeforeunload(bool fireEvent);
//	bool Get_onbeforeunload();
//	__declspec(property(get = Get_onbeforeunload, put = Set_onbeforeunload)) bool onbeforeunload;
//	//
//	void Set_onerror(bool fireEvent);
//	bool Get_onerror();
//	__declspec(property(get = Get_onerror, put = Set_onerror)) bool onerror;
//	//
//	void Set_onhaschange(bool fireEvent);
//	bool Get_onhaschange();
//	__declspec(property(get = Get_onhaschange, put = Set_onhaschange)) bool onhaschange;
//	//
//	void Set_onload(bool fireEvent);
//	bool Get_onload();
//	__declspec(property(get = Get_onload, put = Set_onload)) bool onload;
//	//
//	void Set_onmessage(bool fireEvent);
//	bool Get_onmessage();
//	__declspec(property(get = Get_onmessage, put = Set_onmessage)) bool onmessage;
//	//
//	void Set_onoffline(bool fireEvent);
//	bool Get_onoffline();
//	__declspec(property(get = Get_onoffline, put = Set_onoffline)) bool onoffline;
//	//
//	void Set_ononline(bool fireEvent);
//	bool Get_ononline();
//	__declspec(property(get = Get_ononline, put = Set_ononline)) bool ononline;
//	//
//	void Set_onpagehide(bool fireEvent);
//	bool Get_onpagehide();
//	__declspec(property(get = Get_onpagehide, put = Set_onpagehide)) bool onpagehide;
//	//
//	void Set_onpageshow(bool fireEvent);
//	bool Get_onpageshow();
//	__declspec(property(get = Get_onpageshow, put = Set_onpageshow)) bool onpageshow;
//	//
//	void Set_onpopstate(bool fireEvent);
//	bool Get_onpopstate();
//	__declspec(property(get = Get_onpopstate, put = Set_onpopstate)) bool onpopstate;
//	//
//	void Set_onredo(bool fireEvent);
//	bool Get_onredo();
//	__declspec(property(get = Get_onredo, put = Set_onredo)) bool onredo;
//	//
//	void Set_onresize(bool fireEvent);
//	bool Get_onresize();
//	__declspec(property(get = Get_onresize, put = Set_onresize)) bool onresize;
//	//
//	void Set_onstorage(bool fireEvent);
//	bool Get_onstorage();
//	__declspec(property(get = Get_onstorage, put = Set_onstorage)) bool onstorage;
//	//
//	void Set_onundo(bool fireEvent);
//	bool Get_onundo();
//	__declspec(property(get = Get_onundo, put = Set_onundo)) bool onundo;
//	//
//	void Set_onunload(bool fireEvent);
//	bool Get_onunload();
//	__declspec(property(get = Get_onunload, put = Set_onunload)) bool onunload;
//	//
//	void Set_onformchange(bool fireEvent);
//	bool Get_onformchange();
//	__declspec(property(get = Get_onformchange, put = Set_onformchange)) bool onformchange;
//	//
//	void Set_onforminput(bool fireEvent);
//	bool Get_onforminput();
//	__declspec(property(get = Get_onforminput, put = Set_onforminput)) bool onforminput;
//	//
//	void Set_onsubmit(bool fireEvent);
//	bool Get_onsubmit();
//	__declspec(property(get = Get_onsubmit, put = Set_onsubmit)) bool onsubmit;
//	//
//	void Set_onreset(bool fireEvent);
//	bool Get_onreset();
//	__declspec(property(get = Get_onreset, put = Set_onreset)) bool onreset;
//	//
//	static const wchar_t* GetHelp(int index);
//	static const wchar_t* GetID(int index);
//	void Render(Sys::ITextWriterW& out_html, const wchar_t* url);
//private:
//	void Set(bool fireEvent, unsigned __int32 flag)
//	{
//		if (fireEvent == true)
//		{
//			_data |= flag;
//		}
//		else
//		{
//			_data &= (~flag);
//		}
//	}
//	unsigned __int32 _data;
//};

//________________________________________________________ Css
// It encapsulates Cascade Style Sheets
class Css
{
public:
	Css(void);
	virtual ~Css(void);
	//____________________________________________ Position MB1: X000 0000
	void SetPosition(Web::CssType::Position position);
	Web::CssType::Position GetPosition();
	__declspec( property( get=GetPosition, put=SetPosition) ) Web::CssType::Position position;
	//____________________________________________ FontFamily MB1: 0XX0 0000
	void SetFontFamily(Web::CssType::FontFamily font);
	Web::CssType::FontFamily GetFontFamily();
	__declspec( property( get=GetFontFamily, put=SetFontFamily) ) Web::CssType::FontFamily font_family;
	//____________________________________________ TextAlign MB1: 000X 0000
	void SetTextAlign(Web::CssType::TextAlign text_align);
	Web::CssType::TextAlign GetTextAlign();
	__declspec( property( get=GetTextAlign, put=SetTextAlign) ) Web::CssType::TextAlign text_align;
	//____________________________________________ VerticalAlign MB1: 0000 XX00
	void SetVerticalAlign(Web::CssType::VerticalAlign vertical_align);
	Web::CssType::VerticalAlign GetVerticalAlign();
	__declspec( property( get=GetVerticalAlign, put=SetVerticalAlign) ) Web::CssType::VerticalAlign vertical_align;
	//____________________________________________ TextDecoration MB1: 0000 00XX
	void SetTextDecoration(Web::CssType::TextDecoration text_decoration);
	Web::CssType::TextDecoration GetTextDecoration();
	__declspec( property( get=GetTextDecoration, put=SetTextDecoration) ) Web::CssType::TextDecoration text_decoration;
	//____ First memory block
	//____________________________________________ Visibility MB2: X000 0000
	void SetVisibility(Web::CssType::Visibility visibility);
	Web::CssType::Visibility GetVisibility();
	__declspec( property( get=GetVisibility, put=SetVisibility) ) Web::CssType::Visibility visibility;
	//____________________________________________ BorderStyle MB2: 0XX0 0000
	void SetBorderStyle(Web::CssType::BorderStyle border_style);
	Web::CssType::BorderStyle GetBorderStyle();
	__declspec( property( get=GetBorderStyle, put=SetBorderStyle) ) Web::CssType::BorderStyle border_style;
	//____________________________________________ Display MB2: 000X 0000
	void SetDisplay(Web::CssType::Display display);
	Web::CssType::Display GetDisplay();
	__declspec( property( get=GetDisplay, put=SetDisplay) ) Web::CssType::Display display;
	//____________________________________________ Cursor MB2: 0000 XXXX
	void SetCursor(Web::CssType::Cursor cursor);
	Web::CssType::Cursor GetCursor();
	__declspec( property( get=GetCursor, put=SetCursor) ) Web::CssType::Cursor cursor;
	//____________________________________________ OverflowX MB3: XX00 0000
	void SetOverflowX(Web::CssType::OverflowX overflowX);
	Web::CssType::OverflowX GetOverflowX();
	__declspec( property( get=GetOverflowX, put=SetOverflowX) ) Web::CssType::OverflowX overflow_x;
	//____________________________________________ OverflowY MB3: 00XX 0000
	void SetOverflowY(Web::CssType::OverflowY overflowY);
	Web::CssType::OverflowY GetOverflowY();
	__declspec( property( get=GetOverflowY, put=SetOverflowY) ) Web::CssType::OverflowY overflow_y;
	//____________________________________________ FontWeight MB3: 0000 XXXX
	void SetFontWeight(Web::CssType::FontWeight font_weight);
	Web::CssType::FontWeight GetFontWeight();
	__declspec(property(get = GetFontWeight, put = SetFontWeight)) Web::CssType::FontWeight font_weight;
	//
	COLORREF background_color;
	COLORREF border_color;
	COLORREF color; 
	wstring additionalStyles;
	int font_size;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int width;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int height;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int border_width;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int padding_left;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int padding_right;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int padding_top;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int padding_bottom;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int margin_left;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int margin_top;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int margin_right;
	//
	// Positive is in pixels, Negative is in percent, or HTML_SIZE_AUTO
	int margin_bottom;
	//
	void GetHtml(Sys::ITextWriterW& out_html);
	void GetXml(Web::HttpConnector& httpConnector, Web::Css& cssInitial, bool visibilityOnly);
	void LoadState(bool visibilityOnly, list<Sys::Xml>::const_iterator control);
private:
	void PrivateGetHtml(wstring& out_html);
	void WriteXmlColor(Web::HttpConnector& httpConnector, COLORREF original_color, COLORREF new_color, const wchar_t* name);
	void WriteXmlInteger(Web::HttpConnector& httpConnector, int original_value, int new_value, const wchar_t* name);
	bool RenderColor(bool semicolon, const wchar_t* name, COLORREF color, wstring& out_html);
	bool RenderInteger(bool semicolon, const wchar_t* name, int value, wstring& out_html);
	int ReadInteger(const wstring& input);
	unsigned __int32 memoryBlock1;
	unsigned __int32 memoryBlock2;
	unsigned __int32 memoryBlock3;
};

//________________________________________________________ Object
// The most basic object in a Web application
class Object
{
public:
	Object(void);
	virtual ~Object(void);
	wstring BeginHtml;
	wstring EndHtml;
	wstring ID;
	virtual void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector) = 0;
	virtual void GetXml(Web::HttpConnector& httpConnector) = 0;
	virtual void LoadState(Web::HttpConnector& httpConnector) = 0;	
	virtual void OnNavigateAway(Web::HttpConnector& httpConnector) = 0;	
	virtual bool IsEvent(Web::HttpConnector& httpConnector, int notification);
	//
	bool isBrowserView;
protected:
	virtual wchar_t* GetTag() = 0;
	//
	wchar_t* RenderTagAndId(Sys::ITextWriterW& out_html);
	//void RenderHiddenValue(bool increaseIndent, int& indentCount, const wchar_t* value, Sys::ITextWriterW& out_html);
	void RenderPair(const wchar_t* name, wstring& value, Sys::ITextWriterW& out_html);
	void RenderPair(const wchar_t* name, const wchar_t* value, Sys::ITextWriterW& out_html);
	void RenderPair(const wchar_t* name, int value, Sys::ITextWriterW& out_html);
};

//________________________________________________________ VisibleObject
class VisibleObject : public Web::Object
{
public:
	VisibleObject(void);
	virtual ~VisibleObject(void);
	wstring cssClass;
	Web::Css css;
	//_______________________________________________________________ Text
	virtual wstring& GetText();
	virtual void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	virtual void SetVisible(bool visible); 
	virtual bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	virtual void SetEnabled(bool enabled); 
	virtual bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	Web::JavascriptEvent javascript;
protected:
	bool LoadState(Web::HttpConnector& httpConnector, bool visibilityOnly, list<Sys::Xml>::const_iterator& out_control);
	void RenderClassAndStyle(Sys::ITextWriterW& out_html);
	void RenderName(Sys::ITextWriterW& out_html);
	unsigned __int32 memoryBlock;
	// Visible:                                                             memoryBlock: 0000 0000 0000 0000 00000 1000 0000 0000
	// Enabled:                                                           memoryBlock: 0000 0000 0000 0000 00000 0100 0000 0000
	// _originalEnabled:                                             memoryBlock: 0000 0000 0000 0000 00000 0010 0000 0000
	// RadioButton, CheckBox: originalChecked     memoryBlock: 0000 0000 0000 0000 00000 0001 0000 0000
	// Button:Submit:                                                 memoryBlock: 0000 0000 0000 0000 00000 0000 0100 0000
	// TextBox:Password:                                          memoryBlock: 0000 0000 0000 0000 00000 0000 0010 0000
	// TextBox:ReadOnly:                                         memoryBlock: 0000 0000 0000 0000 00000 0000 0001 0000
	
	//
	Web::Css _originalCss;
	wstring _originalText;
	wstring _text;
	bool GetOriginalEnabled();
	void SetOriginalEnabled(bool enabled);
	void CreateXmlNode(Web::HttpConnector& httpConnector, const wchar_t* id, wchar_t* node_name, bool visibilityOnly);
};

//________________________________________________________ Button
class Button : public Web::VisibleObject, public Sys::IObject
{
public:
	Button();
	~Button();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________ Submit
	void SetSubmit(bool isSubmit);
	bool IsSubmit();
	__declspec( property ( get=IsSubmit, put=SetSubmit ) ) bool Submit;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
};

//________________________________________________________ Textbox
class Textbox : public Web::VisibleObject, public Sys::ITextbox
{
public:
	Textbox();
	~Textbox();
	int ColCount;
	int RowCount;
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//______________________________________________________________ DoubleValue
	void SetDoubleValue(double value, const wchar_t* format);
	void SetDoubleValue(double value);
	double GetDoubleValue();
	__declspec( property( get=GetDoubleValue, put=SetDoubleValue) ) double DoubleValue;
	//_______________________________________________________________ IntValue
	int GetIntValue(void);
	void SetIntValue(int value);
	__declspec( property( get=GetIntValue, put=SetIntValue) ) int IntValue;
	//_______________________________________________________________ Password
	void SetPassword(bool isPassword);
	bool IsPassword();
	__declspec( property ( get=IsPassword, put=SetPassword ) ) bool Password;
	//_______________________________________________________________ ReadOnly
	void SetReadOnly(bool readOnly);
	bool IsReadOnly();
	__declspec( property ( get=IsReadOnly, put=SetReadOnly ) ) bool ReadOnly;
	//______________________________________________________________ MaxTextLength
	void SetMaxTextLength(int maxTextLength);
	int GetMaxTextLength();
	__declspec( property( get=GetMaxTextLength, put=SetMaxTextLength) ) int MaxTextLength;
	//____________________________________________________________ Multiline
	void SetMultiline(bool isMultiline);
	bool IsMultiline();
	__declspec( property ( get=IsMultiline, put=SetMultiline ) ) bool Multiline;
	//______________________________________________________________ BallonTip
	//
	//icon: TTI_INFO, TTI_WARNING, TTI_ERROR
	void ShowBalloonTip(const wchar_t* caption, const wchar_t* text, int icon);
	//
	//icon: TTI_INFO, TTI_WARNING, TTI_ERROR
	void ShowBalloonTip(const wstring& caption, const wstring& text, int icon); 
	void HideBalloonTip();
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//_____________________________________________________________________ Sys::ISelectString
	wstring& SqlGetString();
	void SqlUpdate(bool toGui);
	//
	//operator wstring&();
protected:
	int _maxTextLength;
	wchar_t* GetTag();
	wstring _balloonCaption;
	wstring _balloonText;
	int _balloonIcon;
	void RenderBalloon(Sys::ITextWriterW& out_html);
	bool _originalReadonly;
	static const wchar_t* GetTooltipHexColor(int balloon_icon);
};

//_____________________________________________________________________ Service
// Web Service with Simple Object Access Protocol
class Service : public Web::VisibleObject
{
public:
	Service(void);
	virtual ~Service(void);
	wstring Text;
	//
	int GetIntParameter(Web::HttpConnector& httpConnector, const wchar_t* name);
	int GetIntParameter(Web::HttpConnector& httpConnector, const wstring& name);
	//
	double GetDoubleParameter(Web::HttpConnector& httpConnector, const wchar_t* name);
	double GetDoubleParameter(Web::HttpConnector& httpConnector, const wstring& name);
	//
	bool GetBoolParameter(Web::HttpConnector& httpConnector, const wchar_t* name);
	bool GetBoolParameter(Web::HttpConnector& httpConnector, const wstring& name);
	//
	wstring GetStringParameter(Web::HttpConnector& httpConnector, const wchar_t* name);
	wstring GetStringParameter(Web::HttpConnector& httpConnector, const wstring& name);
	bool GetStringParameter(Web::HttpConnector& httpConnector, const wchar_t* name, wstring& out_value);
	bool GetStringParameter(Web::HttpConnector& httpConnector, const wstring& name, wstring& out_value);
	//
	vector<Web::ServiceVariable> parameter;
	Sys::SoapEnvelope soapEnvelope;
	//______________________________________________________________ Web::Object
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	void SoapSample(const wstring& resource, const int response_len, Sys::SoapEnvelope& sample, bool isHttpPost, Sys::ITextWriterW& out_html);
	wchar_t* GetTag();
};

class DropDownList;
class ListBox;
//_____________________________________________________________________ ListItem
class ListItem
{
public:
	ListItem();
	~ListItem();
	bool Selected;
	wstring Text;
	wstring Data;
	bool operator==(const ListItem& init) const;
	bool operator!=(const ListItem& init) const;
	void Clear();
};

//_____________________________________________________________________ ListItemCollection
class ListItemCollection
{
public:
	ListItemCollection(void);
	virtual ~ListItemCollection(void);
	//
	void Add(const wchar_t* text, const wchar_t* data);
	void Add(const wstring& text, const wstring& data);
	//
	bool Delete(int index);
	void DeleteAll();
	//
	int GetCount();
	__declspec( property( get=GetCount ) ) int Count;	
	//
	// It returns the zero-based index of the matching item. If the search is unsuccessful, it returns -1
	int GetIndex(const wstring& text);
	//
	// It returns the zero-based index of the matching item. If the search is unsuccessful, it returns -1
	int GetIndex(const wchar_t* text);
	Web::ListItem& operator[](long index);
	//
	vector<ListItem> storage;
	bool operator==(const ListItemCollection& init) const;
	bool operator!=(const ListItemCollection& init) const;
private:
	friend class Web::DropDownList;
	friend class Web::ListBox;
	//int _selectedIndex;
	//int GetLoadItemIndex(const wchar_t* data);
	set<wstring> _selectedData;
};

class Page;

//________________________________________________________ DropDownList
class DropDownList : public Web::VisibleObject, public Sys::IDropDownList
{
public:
	DropDownList();
	~DropDownList();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	virtual int GetItemCount();
	//_______________________________________________________________ Add
	virtual void AddItem(const wchar_t* text, LPARAM data);
	virtual void AddItem(const wstring& text, LPARAM data);
	//______________________________________________________________ Delete
	virtual bool DeleteItem(int index);
	virtual void DeleteAllItems();
	//_______________________________________________________________ ItemText
	virtual bool GetItemText(int index, wstring& out_text);
	virtual bool GetItemText(int index, wchar_t* buffer, int buffer_length);
	//_______________________________________________________________ ItemData
	// It returns CB_ERR on error
	virtual LPARAM GetItemData(int index); 
	virtual bool SetItemData(int index, const LPARAM data);
	//_______________________________________________________________ SelectedIndex
	virtual int GetSelectedIndex();
	virtual bool SetSelectedIndex(int index);
	__declspec( property(get=GetSelectedIndex, put=SetSelectedIndex) ) int SelectedIndex;
	//_______________________________________________________________ SelectedData
	virtual bool GetSelectedData(LPARAM& out_data);
	virtual bool SetSelectedByData(LPARAM data);
		//_______________________________________________________________ SelectedTextData
	wstring GetSelectedTextData();
	bool SetSelectedByTextData(const wstring& data);
	__declspec( property(get=GetSelectedTextData, put=SetSelectedByTextData) ) wstring SelectedTextData;
	//
	bool SetSelected(const wchar_t* text);
	//
	ListItemCollection Items;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//_____________________________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//_____________________________________________________________________ Sys::ISelectInt
	LPARAM& SqlGetInt();
	void SqlUpdate(bool toGui);
protected:
	//virtual void RenderInvisible(int& indentCount, Sys::ITextWriterW& out_html);
	wchar_t* GetTag();
	int _rowCount;
	LPARAM _sqlData;
	virtual void RenderMultipleSelection(Sys::ITextWriterW& out_html);
	friend class Web::Page;
};

//________________________________________________________ ListBox
class ListBox : public Web::DropDownList, public Sys::IListBox
{
public:
	ListBox();
	~ListBox();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	int GetItemCount();
	//_______________________________________________________________ Add
	void AddItem(const wchar_t* text, LPARAM data);
	void AddItem(const wstring& text, LPARAM data);
	//______________________________________________________________ Delete
	bool DeleteItem(int index);
	void DeleteAllItems();
	//_______________________________________________________________ ItemText
	bool GetItemText(int index, wstring& out_text);
	bool GetItemText(int index, wchar_t* buffer, int buffer_length);
	//_______________________________________________________________ ItemData
	// It returns CB_ERR on error
	LPARAM GetItemData(int index); 
	bool SetItemData(int index, const LPARAM data);
	//_______________________________________________________________ SelectedIndex
	int GetSelectedIndex();
	bool SetSelectedIndex(int index);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//_______________________________________________________________ SelectedData
	bool GetSelectedData(LPARAM& out_data);
	bool SetSelectedByData(LPARAM data);
	//_______________________________________________________________ Multiple Selection
	// If index is -1, it will affect all items
	bool SetSelection(int index, bool selected);
	bool IsItemSelected(int index);
	//________________________________________________________ MultipleSelection
	void SetMultipleSelection(bool multipleSelection);
	bool GetMultipleSelection();
	__declspec( property ( get=GetMultipleSelection, put=SetMultipleSelection ) ) bool MultipleSelection;
	//________________________________________________________ Height
	void SetHeight(int height);
	int GetHeight();
	__declspec( property ( get=GetHeight, put=SetHeight ) ) int Height;
	//_____________________________________________________________________ Sys::ISelectInt
	LPARAM& SqlGetInt();
	void SqlUpdate(bool toGui);
	//_____________________________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
protected:
	//void RenderInvisible(int& indentCount, Sys::ITextWriterW& out_html);
	void RenderMultipleSelection(Sys::ITextWriterW& out_html);
	bool _multipleSelection;
};

class ListView;
class CheckBoxList;

//_____________________________________________________________________ ListViewItem
class ListViewItem
{
public:
	ListViewItem();
	~ListViewItem();
	bool Selected;
	wstring Data;
	vector<wstring> Text;
	bool operator==(const ListViewItem& init) const;
	bool operator!=(const ListViewItem& init) const;
	void Clear();
};

//_____________________________________________________________________ CheckBoxItem
class CheckBoxItem
{
public:
	CheckBoxItem();
	~CheckBoxItem();
	bool Checked;
	wstring Data;
	vector<wstring> Text;
	bool operator==(const 	CheckBoxItem& init) const;
	bool operator!=(const 	CheckBoxItem& init) const;
};

//_____________________________________________________________________ ListViewColumn
struct ListViewColumn
{
	int format;//LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	int width;
	wstring Text;
};

//_____________________________________________________________________ CheckBoxColumnn
struct CheckBoxColumn
{
	int format;//LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	wstring Text;
};

//_____________________________________________________________________ ListViewItemCollection
class ListViewItemCollection
{
public:
	ListViewItemCollection(void);
	virtual ~ListViewItemCollection(void);
	//
	void Add(const wchar_t* text, const wchar_t* data);
	void Add(const wstring& text, const wstring& data);
	//
	bool Delete(int index);
	void DeleteAll();
	//
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	//
	// It returns the zero-based index of the matching item. If the search is unsuccessful, it returns -1
	int GetIndex(const wstring& text);
	//
	// It returns the zero-based index of the matching item. If the search is unsuccessful, it returns -1
	int GetIndex(const wchar_t* text);
	//
	Web::ListViewItem& operator[](long index);
	//
	vector<ListViewItem> storage;
	bool operator==(const ListViewItemCollection& init) const;
private:
	friend class Web::ListView;
	vector<Web::ListViewColumn>* colsCollection;
	set<wstring> _selectedData;
};

//_____________________________________________________________________ CheckBoxItemCollection
class CheckBoxItemCollection
{
public:
	CheckBoxItemCollection(void);
	virtual ~CheckBoxItemCollection(void);
	//
	void Add(const wchar_t* text, const wchar_t* data);
	void Add(const wstring& text, const wstring& data);
	//
	bool Delete(int index);
	void DeleteAll();
	//
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	//
	int GetIndex(const wchar_t* text);
	Web::CheckBoxItem& operator[](long index);
	//
	vector<CheckBoxItem> storage;
	bool operator==(const CheckBoxItemCollection& init) const;
private:
	friend class Web::CheckBoxList;
	vector<Web::CheckBoxColumn>* colsCollection;
	//int GetLoadItemIndex(const wchar_t* data);
	set<wstring> _selectedData;
};

//_____________________________________________________________________ ListViewColCollection
class ListViewColCollection
{
public:
	ListViewColCollection(void);
	virtual ~ListViewColCollection(void);
	//
	// format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool Add(int format, int width, const wchar_t* text);
	bool Add(int format, int width, wstring& text);
	//
	bool Delete(int index);
	void DeleteAll(void);
	//
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	//
	Web::ListViewColumn& operator[](long index);
	vector<Web::ListViewColumn> storage;
	//
	int GetTotalWidth();
	void RenderColumn(const wstring& text, vector<Web::ListViewColumn>::iterator& col, const wchar_t * space, wstring& truncated, Sys::ITextWriterW& out_html);
	//
	void GetHtml(int fontSize, int width, const wstring& ID, Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(const wstring& ID, Web::HttpConnector& httpConnector);
	void LoadState(bool ajax, const wstring& ID, Web::HttpConnector& httpConnector);
protected:
	void CreateFromValue(const wstring& input);
};

//_____________________________________________________________________ CheckBoxColCollection
class CheckBoxColCollection
{
public:
	CheckBoxColCollection(void);
	virtual ~CheckBoxColCollection(void);
	//
	// format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool Add(int format, const wchar_t* text);
	bool Add(int format, wstring& text);
	//
	bool Delete(int index);
	void DeleteAll(void);
	//
	__declspec( property( get=GetCount ) ) int Count;
	int GetCount();
	//
	Web::CheckBoxColumn& operator[](long index);
	vector<Web::CheckBoxColumn> storage;
};

//________________________________________________________ ListView
class ListView : public Web::VisibleObject, public Sys::IListView
{
public:
	ListView();
	~ListView();
	int Height;
	int FontSize;
	bool MultipleSelection;
	//
	Web::ListViewColCollection Cols;
	Web::ListViewItemCollection Items;
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	void SetVisible(bool visible);
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________________ COLUMNS
	int GetColumnCount();
	//_____________________________________________________ Add
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wchar_t* text);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wstring& text);
	//_____________________________________________________ Delete
	bool DeleteColumn(int index);
	void DeleteAllColumns();
	//_____________________________________________________ Text
	bool GetColumnText(int index, wstring& out_text);
	bool GetColumnText(int index, wchar_t* buffer, int buffer_length);
	bool SetColumnText(int index, const wstring& text);
	bool SetColumnText(int index, const wchar_t* text);
	//_____________________________________________________ Format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool GetColumnFormat(int index, int& out_format);
	bool SetColumnFormat(int index, int format);
	//_____________________________________________________ Width
	bool GetColumnWidth(int index, int& out_width);
	bool SetColumnWidth(int index, int width);
	//_________________________________________________________________________ ITEMS
	int GetItemCount();
	//_____________________________________________________ Add
	void AddItem(const wchar_t* text, LPARAM data);
	void AddItem(const wstring& text, LPARAM data);
	//_____________________________________________________ Delete
	bool DeleteItem(int row);
	void DeleteAllItems();
	void Delete();
	//_____________________________________________________ Text
	bool GetItemText(int row, int column, wstring& out_text);
	//
	// It returns the number of characters
	int GetItemText(int row, int column, wchar_t* buffer, int buffer_length);
	bool SetItemText(int row, int column, const wstring& text);
	bool SetItemText(int row, int column, const wchar_t* text);
	//_____________________________________________________ Data
	bool GetItemData(int row, LPARAM& out_data);
	bool SetItemData(int row, const LPARAM data);
	//_____________________________________________________ Selection
	int GetSelectedIndex();
	bool SetSelectedIndex(int row);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//
	bool GetSelectedData(LPARAM& out_data);
	bool SetSelectedByData(LPARAM data);
	bool IsItemSelected(int row);
	//______________________________________________________ Multiple Selection
	int GetSelectedCount();
	// The first time the function is called, row must -1. The next calls row must be set to the value returned on the previous function call.
	// The function is called until it returns -1
	int GetNextSelectedIndex(int row);
	//
	// Selects or un-select the specified item (Indexes start at 0. Use row =-1 to affect all rows)
	bool SetSelection(int row, bool selected);
	//_______________________________________________________ ItemChecked
	//
	// Not implemented
	bool IsItemChecked(int row);
	//
	// Not implemented
	void SetItemChecked(int row, bool checked);
	//_____________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//
	bool SetSelected(const wchar_t* text);
	//
	bool SetSelectedByTextData(const wstring data);
	wstring GetSelectedTextData();
	__declspec( property ( get=GetSelectedTextData, put=SetSelectedByTextData ) ) wstring SelectedTextData;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	bool CreateTextVector(const wstring& input, vector<wstring>& output);
	void RenderItem(Web::ListViewItem& item, const wchar_t * space, Sys::ITextWriterW& out_html);
	wchar_t* GetTag();
	//
	friend class Web::Page;
};

//________________________________________________________ RadioButton
class RadioButton : public Web::VisibleObject, public Sys::IButton
{
public:
	RadioButton();
	~RadioButton();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//_______________________________________________________________ Checked
	bool IsChecked();
	void SetChecked(bool checked);
	__declspec( property( get=IsChecked, put=SetChecked) ) bool Checked;
	wstring Data;
	//
	//You must assign the same Name to all the radio buttons in a group
	wstring Name;
	wstring AccessKey;
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//_____________________________________________________________________ Sys::ISelectBool
	bool& SqlGetBool();
	void SqlUpdate(bool toGui);
protected:
	wchar_t* GetTag();
	bool _checked;
	void SetOriginalChecked(bool checked); // Used for AJAX
	bool GetOriginalChecked(); // Used for AJAX
};

//________________________________________________________ CheckBox
class CheckBox : public Web::VisibleObject, public Sys::IButton
{
public:
	CheckBox();
	~CheckBox();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//_______________________________________________________________ Checked
	void SetChecked(bool checked);
	bool IsChecked();
	__declspec( property( get=IsChecked, put=SetChecked) ) bool Checked;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//_____________________________________________________________________ Sys::ISelectBool
	bool& SqlGetBool();
	void SqlUpdate(bool toGui);
protected:
	wchar_t* GetTag();
	bool _checked;
	void SetOriginalChecked(bool checked); // Used for AJAX
	bool GetOriginalChecked(); // Used for AJAX
};

//________________________________________________________ HiddenValue
class HiddenValue : public Web::Object
{
public:
	HiddenValue();
	~HiddenValue();
	wstring Data;
	//_______________________________________________________________ IntData
	int GetIntData();
	void SetIntData(int value);
	__declspec( property( get=GetIntData, put=SetIntData) ) int IntData;
	//_______________________________________________________________ DoubleData
	double GetDoubleData();
	void SetDoubleData(double value);
	__declspec( property( get=GetDoubleData, put=SetDoubleData) ) double DoubleData;
	//_______________________________________________________________ BoolData
	bool GetBoolData();
	void SetBoolData(bool value);
	__declspec( property( get=GetBoolData, put=SetBoolData) ) bool BoolData;
	//_______________________________________________________________ TextData
	wstring& GetTextData();
	void SetTextData(const wstring& value);
	__declspec( property( get=GetTextData, put=SetTextData) ) wstring TextData;
	//
	Web::HiddenValue& operator=(const int data);
	Web::HiddenValue& operator=(const double data);
	Web::HiddenValue& operator=(const bool data);
	Web::HiddenValue& operator=(const wchar_t* data);
	Web::HiddenValue& operator=(const wstring& data);
	//
	operator int const();
	operator double const();
	operator bool const();
	operator const wchar_t* const();
	operator wchar_t* const();
	operator wstring const();
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
};

//________________________________________________________ Image
class Image : public Web::VisibleObject
{
public:
	Image();
	~Image();
	wstring Text; //alt;
	wstring src;
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
};

//________________________________________________________ ImageLink
class ImageLink : public Web::VisibleObject
{
public:
	ImageLink();
	~ImageLink();
	wstring Text; //alt
	wstring src; 
	wstring href; //http://www.yahoo.com, mailto:system@hotmail.com, ftp://ugto.mx, ftp://username:password@ugto.mx, windowID
	wstring targetWindowName;
	wstring AccessKey;
	wstring tabIndex;
	//Web::Css imageCss;
	wstring imageCssClass;
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	bool HrefNavigateTo(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	wchar_t* GetTag();
};

//________________________________________________________ TextLink
class TextLink : public Web::VisibleObject
{
public:
	TextLink();
	~TextLink();
	wstring Text; //alt
	wstring href; //http://www.yahoo.com, mailto:system@hotmail.com, ftp://ugto.mx, ftp://username:password@ugto.mx, windowID
	wstring targetWindowName;
	wstring AccessKey;
	wstring tabIndex;
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
	bool HrefNavigateTo(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
};

#ifdef WIN_GDI_PLUS_ON
//________________________________________________________ DynamicImage
// It creates a dynamic image in a Web application
class DynamicImage : public Web::VisibleObject
{
public:
	DynamicImage();
	~DynamicImage();
	COLORREF LineColor;
	wstring Text;
	bool WhiteAndBlack;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);	
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//
	void RenderImage(string& data);
	virtual void BuildBitmap(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::Pen& penLine, Gdiplus::Pen& penText) = 0; 
	virtual void Sync(Web::HttpConnector& h) = 0;
	void BasicSync(Web::HttpConnector& h);
protected:
	bool ColorSync(Web::HttpConnector& h, const wchar_t* red, const wchar_t* green, const wchar_t* blue, COLORREF& color);
	void RenderProperties(Web::DynamicImage& di, wstring& text);
	virtual void GetSource(wstring& source, const wchar_t* url) = 0;
	wchar_t* GetTag();
	void RenderValue(const wchar_t* name, wstring& value, wstring& output);
	void RenderValue(const wchar_t* name, double value, wstring& output);
	void RenderValue(const wchar_t* name, int value, wstring& output);
	void RenderValue(const wchar_t* name, bool value, wstring& output);
	wstring encodedText;
};
#endif


//________________________________________________________ Bar
class Bar
{
public:
	Bar();
	~Bar();
	wstring Text;
	COLORREF Color;
	double Value;
	bool operator<(const Web::Bar& bar) const;
};

//_________________________________________________________ BarCollection
class BarCollection
{
public:
	BarCollection();
	~BarCollection();
	void Add(const wstring& text, COLORREF color, double value);
	void DeleteAll();
	//
	Web::Bar& operator[](long index);
	//
	int GetCount();
	__declspec( property( get=GetCount) ) int Count; 
	//
	vector<Web::Bar> storage;
};

#ifdef WIN_GDI_PLUS_ON
//________________________________________________________ BarChart
class BarChart : public Web::DynamicImage
{
public:
	BarChart();
	~BarChart();
	//
	Web::BarCollection Bars;
	int DivYCount;
	double MaxY; // To set the maximum value of Y you must set Autoscale to false
	bool AutoScale;
	//
	void BuildBitmap(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::Pen& penLine, Gdiplus::Pen& penText);
	void Sync(Web::HttpConnector& h);
protected:
	void GetSource(wstring& source, const wchar_t* url);
	double GetMaxY();
	void ComputeBox(Gdiplus::RectF& box);
};
#endif

//________________________________________________________ CheckBoxList
class CheckBoxList  : public Web::VisibleObject, public Sys::IListView
{
public:
	CheckBoxList();
	~CheckBoxList();
	//____________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//____________________________________________________________ Visible
	void SetVisible(bool visible);
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//____________________________________________________________ Enabled
	void SetEnabled(bool enabled);
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________________ COLUMNS
	int GetColumnCount();
	//_____________________________________________________ Add
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wchar_t* text);
	//
	//format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	void AddColumn(int format, int width, const wstring& text);
	//_____________________________________________________ Delete
	bool DeleteColumn(int index);
	void DeleteAllColumns();
	//_____________________________________________________ Text
	bool GetColumnText(int index, wstring& out_text);
	bool GetColumnText(int index, wchar_t* buffer, int buffer_length);
	bool SetColumnText(int index, const wstring& text);
	bool SetColumnText(int index, const wchar_t* text);
	//_____________________________________________________ Format: LVCFMT_LEFT, LVCFMT_CENTER, LVCFMT_RIGHT
	bool GetColumnFormat(int index, int& out_format);
	bool SetColumnFormat(int index, int format);
	//_____________________________________________________ Width
	bool GetColumnWidth(int index, int& out_width);
	bool SetColumnWidth(int index, int width);
	//_________________________________________________________________________ ITEMS
	int GetItemCount();
	//_____________________________________________________ Add
	void AddItem(const wchar_t* text, LPARAM data);
	void AddItem(const wstring& text, LPARAM data);
	//_____________________________________________________ Delete
	bool DeleteItem(int row);
	void DeleteAllItems();
	void Delete();
	//_____________________________________________________ Text
	bool GetItemText(int row, int column, wstring& out_text);
	//
	// It returns the number of characters
	int GetItemText(int row, int column, wchar_t* buffer, int buffer_length);
	bool SetItemText(int row, int column, const wstring& text);
	bool SetItemText(int row, int column, const wchar_t* text);
	//_____________________________________________________ Data
	bool GetItemData(int row, LPARAM& out_data);
	bool SetItemData(int row, const LPARAM data);
	//_____________________________________________________ Selection
	int GetSelectedIndex();
	bool SetSelectedIndex(int row);
	__declspec( property( get=GetSelectedIndex, put=SetSelectedIndex ) ) int SelectedIndex;
	//
	bool GetSelectedData(LPARAM& out_data);
	bool SetSelectedByData(LPARAM data);
	bool IsItemSelected(int row);
	//______________________________________________________ Multiple Selection
	int GetSelectedCount();
	// The first time the function is called, row must -1. The next calls row must be set to the value returned on the previous function call.
	// The function is called until it returns -1
	int GetNextSelectedIndex(int row);
	//
	// Selects or un-select the specified item (Indexes start at 0. Use row =-1 to affect all rows)
	bool SetSelection(int row, bool selected);
	//_______________________________________________________ ItemChecked
	bool IsItemChecked(int row);
	void SetItemChecked(int row, bool checked);
	//
	Web::CheckBoxColCollection Cols;
	Web::CheckBoxItemCollection Items;
	//_____________________________________________________ Sys::IEnumerator
	void Enumerate(wchar_t** data, int colCount, int rowIndex);
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//
protected:
	wchar_t* GetTag();
	void RenderState(Sys::ITextWriterW& out_html);
	void RenderData(Sys::ITextWriterW& out_html);
	//
	friend class Web::Page;
};

//________________________________________________________ DateTimeBox
class DateTimeBox : public Web::VisibleObject, public Sys::IDateTime
{
public:
	DateTimeBox();
	~DateTimeBox();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________ SelectedDateTime
	Sys::Time GetSelectedDateTime();
	bool SetSelectedDateTime(Sys::Time& systime);
	__declspec( property( get=GetSelectedDateTime, put=SetSelectedDateTime) ) Sys::Time SelectedDateTime;
	//____________________________________________________________ SelectedDateTime
	bool GetCurrentSelection(int& month, int& day, int& year);
	bool SetCurrentSelection(int month, int day, int year);
	//
	void SetCurrentSelection(const wchar_t* text);
	void SetCurrentSelection(const wstring& text);
	//
	//_____________________________________________________ JanFebMarAprMayJunJulAugSepOctNovDic
	wstring GetMonthsText();
	//
	//_____________________________________________________ JanFebMarAprMayJunJulAugSepOctNovDic
	void SetMonthsText(const wstring monthsText);
	__declspec(property(get = GetMonthsText, put = SetMonthsText)) wstring MonthsText;
	//
	//_____________________________________________________ SunMonTueWedThuFriSat
	wstring GetDaysText();
	//
	//_____________________________________________________ SunMonTueWedThuFriSat
	void SetDaysText(const wstring daysText);
	__declspec(property(get = GetDaysText, put = SetDaysText)) wstring DaysText;
	//
	virtual void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//
	void GetCalendarWindowHtml(const wstring& destinationDateTimeBoxID, const wstring& monthsText, const wstring& daysText, string& out_html);
	void CreateMonthsName(const string& monthsText, vector<string>& out_month);
	void CreateDaysName(const string& daysText, vector<string>& out_days);
	//_________________________________________________________ Sys::ISelectTime
	Sys::SqlTime& SqlGetTime();
	Sys::Time& SqlGetSysTime();
	void SqlUpdate(bool toGui);
protected:
	void GetText(wchar_t* buffer, int bufferLength);
	wchar_t* GetTag();	
	Sys::SqlTime _sqltime;
	wchar_t _monthsText[37];
	wchar_t _daysText[22];
	int GetMonth(wchar_t* text);
	Sys::Time _selectedDate;
	Sys::Time _originalDate;
};

//________________________________________________________ DateView
class DateView : public Web::DateTimeBox
{
public:
	DateView();
	~DateView();
		//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//________________________________________________________________ SelectedDateTime
	Sys::Time GetSelectedDateTime();
	bool SetSelectedDateTime(Sys::Time& systime);
	__declspec( property( get=GetSelectedDateTime, put=SetSelectedDateTime) ) Sys::Time SelectedDateTime;
	//____________________________________________________________ SelectedDateTime
	bool GetCurrentSelection(int& month, int& day, int& year);
	bool SetCurrentSelection(int month, int day, int year);
	//
	void SetCurrentSelection(const wchar_t* text);
	void SetCurrentSelection(const wstring& text);
//_________________________________________________________ Sys::ISelectTime
	Sys::SqlTime& SqlGetTime();
	Sys::Time& SqlGetSysTime();
	void SqlUpdate(bool toGui);
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
};

struct ObjectParam
{
	wstring name;
	wstring value;
};

//________________________________________________________ PlugIn
// An object tag for: Flash Player, The Java PlugIn, ...
class PlugIn : public Web::VisibleObject
{
public:
	PlugIn();
	~PlugIn();
	wstring Type;
	wstring Data;
	vector<Web::ObjectParam> param;
	void AddParam(const wchar_t* name, const wchar_t* value);
	void AddParam(const wstring& name, const wstring& value);
	void GetPreview(int& indentCount, Sys::ITextWriterW& out_html, bool isBrowserView);
	Web::JavascriptMediaEvent javascriptMedia;
	//
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
};

//<object type="application/x-shockwave-flash" width="400" height="220" 
//	wmode="transparent" data="flvplayer.swf?file=movies/holiday.flv">
//	<param name="movie" value="flvplayer.swf?file=movies/holiday.flv" />
//	<param name="wmode" value="transparent" />
//</object>

//________________________________________________________ Pie
class Pie
{
public:
	Pie();
	~Pie();
	wstring Text;
	COLORREF Color;
	double Value;
	bool operator<(const Web::Pie& pie) const;
};

//_________________________________________________________ PieCollection
class PieCollection
{
public:
	PieCollection();
	~PieCollection();
	void Add(const wstring& text, COLORREF color, double value);
	void DeleteAll();
	//
	Web::Pie& operator[](long index);
	//
	int GetCount();
	__declspec( property( get=GetCount) ) int Count; 
	//
	vector<Web::Pie> storage;
};


#ifdef WIN_GDI_PLUS_ON

//_____________________________________________________________________Graph
class Graph
{
public:
	enum Type {TypeDot = 0, TypeLine, TypeCross, TypeCircle, TypeSquare, TypeHistogram};
	Graph();
	virtual ~Graph();
	COLORREF color;
	int penWidth;
	wstring caption;
	Graph::Type type;
	vector<Sys::PointF> point;
	//
	double GetMaxX();
	double GetMaxY();
};

//_____________________________________________________________________ GraphCollection
class GraphCollection
{
public:
	GraphCollection();
	~GraphCollection();
	int Add(int graphPointCount);
	int Add();
	void Delete(long index);
	void DeleteAll();
	Web::Graph& operator[](long index);
	int GetCount();
	__declspec( property( get=GetCount) ) int Count;
	vector<Web::Graph> storage;
};

//________________________________________________________ PieChart
class PieChart : public Web::DynamicImage
{
public:
	PieChart();
	~PieChart();
	Web::PieCollection Pies;
	void BuildBitmap(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::Pen& penLine, Gdiplus::Pen& penText);
	void Sync(Web::HttpConnector& h);
protected:
	void GetSource(wstring& source, const wchar_t* url);
};

//________________________________________________________ PolarChart
class PolarChart : public Web::DynamicImage
{
public:
	PolarChart();
	~PolarChart();
	Web::GraphCollection Graphs;
	double MinRadius;
	double MaxRadius;
	bool AutoScale;
	bool ShowSubgrid;
	COLORREF SubgridColor;
	//
	void BuildBitmap(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::Pen& penLine, Gdiplus::Pen& penText);
	void Sync(Web::HttpConnector& h);
protected:
	void GetSource(wstring& source, const wchar_t* url);
	virtual void OnPaintScaleR(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::PointF& center, double value); //Overwrite this functions to chante the scale
	void PaintGraphs(Gdiplus::Graphics& graphics);
	virtual void DrawGraph(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen, int graphIndex);
	void Line(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen, double angle, double radius);
	void ShortLine(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen, double angle, double radius);
private:
	int TransformToScreenCoordinatesX(double tetha, double r) 
	{
		r -= MinRadius;
		if (r>0)
			return (int)(r * _scale*cos(tetha) + _centerX+0.5);
		else
			return (int)(r * _scale*cos(tetha+M_PI)+ _centerX+0.5);
	}	
	int TransformToScreenCoordinatesY(double tetha, double r) 
	{
		r -= MinRadius;
		if (r>0)
			return (int)(-r* _scale*sin(tetha)+ _centerY+0.5);
		else
			return (int)(-r* _scale*sin(tetha+M_PI)+ _centerY+0.5);
	}
	double _scale;
	double _centerX;
	double _centerY;
};

//________________________________________________________ XyChart
class XyChart : public Web::DynamicImage
{
public:
	XyChart();
	~XyChart();
	//
	Web::GraphCollection Graphs;
	double MinX;
	double MaxX;
	double MinY;
	double MaxY;
	int DivisionCountX;
	int DivisionCountY;
	int SubDivisionCountX;
	int SubDivisionCountY;
	wstring CaptionX;
	wstring CaptionY;
	bool LogScaleX;
	bool LogScaleY;
	COLORREF SubgridColor;
	bool AutoScaleX;
	bool AutoScaleY;
	//
	void BuildBitmap(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::SolidBrush& brushFont, Gdiplus::Pen& penLine, Gdiplus::Pen& penText);
	void Sync(Web::HttpConnector& h);
protected:
	double _minX;
	double _maxX;
	double _minY;
	double _maxY;
	double _originX;
	double _originY;
	double _scaleX;
	double _scaleY;
	void GetSource(wstring& source, const wchar_t* url);
	double TransformFromScreenCoordinatesX(int x);
	double TransformFromScreenCoordinatesY(int y); 
	void PaintCaptionX(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush);
	void PaintCaptionY(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush);
	void PaintScaleX(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush, double deltaX);
	void PaintScaleY(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush, double deltaY);
	void PaintDivX(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen);
	void PaintDivY(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen);
	void PaintSubDivX(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen);
	void PaintSubDivY(Gdiplus::Graphics& graphics, Gdiplus::Pen& pen);
	void PaintGraphs(Gdiplus::Graphics& graphics, Gdiplus::Font& font);
	virtual void OnPaintScaleX(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush, int index, double delta, double value);
	virtual void OnPaintScaleY(Gdiplus::Graphics& graphics, Gdiplus::Font& font, Gdiplus::Brush& brush, int index, double delta, double value);
	virtual void DrawGraph(Gdiplus::Graphics& graphics, int graphIndex);

	Gdiplus::REAL TransformToScreenCoordinatesX(double x) 
	{
		return (Gdiplus::REAL)((x - _minX)* _scaleX + _originX);
	}
	Gdiplus::REAL TransformToScreenCoordinatesY(double y) 
	{
		return (Gdiplus::REAL)(( y - _minY)* _scaleY +  _originY);
	}
	void _AutoScaleX();
	void _AutoScaleY();
	double _boxCaptionHeight;
	void OnSizePrivate();
	RECT _rcMain;
};

//________________________________________________________ Histogram
class Histogram : public Web::XyChart
{
public:
	Histogram();
	~Histogram();
	void SetData(valarray<double>& data, int resolution, bool percentDisplay);
};

#endif

//________________________________________________________ ProgressBar
class ProgressBar
{
public:
	ProgressBar();
	~ProgressBar();
	void RenderImage(string& data);
};

//________________________________________________________ Label
class Label : public Web::VisibleObject, public Sys::IObject
{
public:
	Label();
	~Label();
	//_______________________________________________________________ Text
	wstring& GetText();
	void SetText(const wstring& text);
	__declspec( property( get=GetText, put=SetText) ) wstring Text;
	//_______________________________________________________________ Visible
	void SetVisible(bool visible); 
	bool IsVisible();
	__declspec( property( get=IsVisible, put=SetVisible) ) bool Visible;
	//_______________________________________________________________ Enabled
	void SetEnabled(bool enabled); 
	bool IsEnabled();
	__declspec( property( get=IsEnabled, put=SetEnabled) ) bool Enabled;
	//
	int Type; // HTML_TND_SPAN, HTML_TND_P, HTML_TND_SMALL, HTML_TND_PRE,...
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
protected:
	wchar_t* GetTag();
};

//________________________________________________________ ParentNode
class ParentNode : public Web::VisibleObject
{
public:
	ParentNode();
	~ParentNode();
	int cellpadding;
	int cellspacing;
	int Type; //  HTML_PND_TABLE, HTML_PND_UL, HTML_PND_OL, HTML_PND_DL,...
	void AddChild(Web::Object& object);
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	void GetPreHtml(Sys::ITextWriterW& out_html);
	void GetPostHtml(Sys::ITextWriterW& out_html);
protected:
	void Indent(int indentCount);
	list<Web::Object*> child;
	wchar_t* GetTag();
};

//________________________________________________________ MessageBoxInfo
struct MessageBoxInfo
{
	wstring text;
	wstring caption;
	int iconType;
};

//________________________________________________________ Page
class Page: public Sys::IWindow
{
public:
	Page(void);
	virtual ~Page(void);
	//
	//____________________________________________________ Sys::IWindow
	HWND GetHWND();
	//
	// iconType: MB_ICONWARNING  MB_ICONERROR, MB_ICONINFORMATION
	int MessageBox(const wchar_t * text, const wchar_t * caption, UINT iconType);
	//
	// iconType: MB_ICONWARNING  MB_ICONERROR, MB_ICONINFORMATION
	int MessageBox(const wstring& text, const wstring& caption, UINT iconType);
	//
	void EndDialog(int result);
	//
	Web::Css css;
	wstring Title;
	wstring CssFile;
	wstring JavascriptFile;
	wstring Author;
	wstring Keywords;
	wstring WebSiteIcon; // PNG Image of a Web Site of 16 x 16 pixels or 32 x 32 pixels
	wstring Refresh;
	wstring Description;
	wstring ID;
	//
	// HTML_FORM_METHOD_GET, HTML_FORM_METHOD_POST
	int formMethod;
	//
	//
	void AddChild(Web::Object& object);
	void Run(Web::HttpConnector& httpConnector);
	virtual void EventHandler(Web::HttpConnector& h);
	virtual void InitializeGui();
	virtual void Window_Open(Web::HttpConnector& h);
	//__________________________________ 
	void GetHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	void GetXml(Web::HttpConnector& httpConnector);
	void GetWebServiceXml(Web::HttpConnector& httpConnector);
	void LoadState(Web::HttpConnector& httpConnector);
	void OnNavigateAway(Web::HttpConnector& httpConnector);
	//
	void HeadItem(wstring& variable, const wchar_t* tagini, const wchar_t* tagend, Sys::ITextWriterW& out_html);
	//
	//Web::JavascriptPageEvent javascript;
	//
	void GetPreHtml(Sys::ITextWriterW& out_html, bool isBrowserView);
	void GetPostHtml(Sys::ITextWriterW& out_html, Web::HttpConnector& httpConnector);
	//
	bool isPreview;
	//
	// It displays in the Web Page a list of all the Server Variables with their respective values
	// You may use this variable to Debug a Web page and correct errors
	bool showAllServerVariables;
private:
	list<Web::Object*> child;
	wstring script_name;
	vector<MessageBoxInfo> _msgbox;
	void RenderServerVariables(Web::HttpConnector& httpConnector, Sys::ITextWriterW& out_html);
	void RenderMessages(Sys::ITextWriterW& out_html);
	void RenderXmlMessages(Web::HttpConnector& httpConnector);
	//
	bool GZipEncoding;
};


} //____________________________________________________ namespace Web::End


