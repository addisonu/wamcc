/****************************************************************************
Prolog to Wam Compiler                     INRIA Rocquencourt - ChLoE Project
Version 2.2                                                Daniel Diaz - 1994

file : wamcc5.h
****************************************************************************/

#define NB_OF_PRIVATE_PREDS    44

static char    *module_name="wamcc5";
static int      module_nb;

static AtomInf *X5B5D;
static AtomInf *X616C6C6F636174696F6E5F7661727358;
static AtomInf *X616C6961736573;
static AtomInf *X616C69617365735F2461757831;
static AtomInf *X616C69617365735F2461757832;
static AtomInf *X63616C6C;
static AtomInf *X65786563757465;
static AtomInf *X616C696173657331;
static AtomInf *X616C6961736573315F2461757833;
static AtomInf *X72;
static AtomInf *X77;
static AtomInf *X63;
static AtomInf *X6164645F616C696173;
static AtomInf *X6164645F616C6961735F2461757834;
static AtomInf *X66696E645F616C69617365735F6F66;
static AtomInf *X66696E645F616C69617365735F6F665F2461757835;
static AtomInf *X72656D6F76655F616C69617365735F6F66;
static AtomInf *X72656D6F76655F616C69617365735F6F665F2461757836;
static AtomInf *X72656D6F76655F616C69617365735F6F665F2461757837;
static AtomInf *X72656D6F76655F616C69617365735F6F665F2461757838;
static AtomInf *X6372656174655F6C73745F746D70;
static AtomInf *X68616E646C655F6C73745F636F6465;
static AtomInf *X68616E646C655F6F6E655F636F6465;
static AtomInf *X68616E646C655F6F6E655F636F64655F2461757839;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783130;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783131;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783132;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783133;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783134;
static AtomInf *X68616E646C655F6F6E655F636F64655F246175783135;
static AtomInf *X636F6E73747261696E7473;
static AtomInf *X636F6E73747261696E74735F246175783136;
static AtomInf *X7570646174655F746D70;
static AtomInf *X746D70;
static AtomInf *X7570646174655F746D705F246175783137;
static AtomInf *X72656D6F76655F746D70;
static AtomInf *X72656D6F76655F746D705F246175783138;
static AtomInf *X6D616B655F696D706F7373;
static AtomInf *X6D616B655F696D706F73735F246175783139;
static AtomInf *X61737369676E5F6C73745F746D70;
static AtomInf *X61737369676E5F776973686573;
static AtomInf *X61737369676E5F7769736865735F246175783230;
static AtomInf *X636F6C6C617073655F746D7073;
static AtomInf *X636F6C6C617073655F746D70735F246175783231;
static AtomInf *X7472795F615F7768697368;
static AtomInf *X7472795F615F77686973685F246175783232;
static AtomInf *X61737369676E5F76616C756573;
static AtomInf *X66696E645F686F6C65;
static AtomInf *X66696E645F686F6C655F246175783233;
static AtomInf *X66696E645F686F6C655F246175783234;
static AtomInf *X636F64696669636174696F6E;
static AtomInf *X6765745F785F7661726961626C65;
static AtomInf *X6765745F785F76616C7565;
static AtomInf *X6765745F795F7661726961626C65;
static AtomInf *X6765745F795F76616C7565;
static AtomInf *X6765745F636F6E7374616E74;
static AtomInf *X6765745F696E7465676572;
static AtomInf *X6765745F6E696C;
static AtomInf *X6765745F6C697374;
static AtomInf *X6765745F737472756374757265;
static AtomInf *X7075745F785F7661726961626C65;
static AtomInf *X7075745F785F76616C7565;
static AtomInf *X7075745F795F7661726961626C65;
static AtomInf *X7075745F795F76616C7565;
static AtomInf *X7075745F795F756E736166655F76616C7565;
static AtomInf *X7075745F636F6E7374616E74;
static AtomInf *X7075745F696E7465676572;
static AtomInf *X7075745F6E696C;
static AtomInf *X7075745F6C697374;
static AtomInf *X7075745F737472756374757265;
static AtomInf *X756E6966795F785F7661726961626C65;
static AtomInf *X756E6966795F785F76616C7565;
static AtomInf *X756E6966795F785F6C6F63616C5F76616C7565;
static AtomInf *X2F;
static AtomInf *X6765745F785F62635F726567;
static AtomInf *X6375745F78;
static AtomInf *X6D6174685F6C6F61645F785F76616C7565;
static AtomInf *X6D6174685F6C6F61645F795F76616C7565;
static AtomInf *X66756E6374696F6E5F31;
static AtomInf *X66756E6374696F6E5F32;
static AtomInf *X6275696C74696E5F31;
static AtomInf *X6275696C74696E5F32;
static AtomInf *X6275696C74696E5F33;
static AtomInf *X637265655F6C697374655F72;
static AtomInf *X64756D6D795F696E737472756374696F6E;

static SwtTbl   Swt_Table_Name(X68616E646C655F6F6E655F636F6465,7,1,stc);
static SwtTbl   Swt_Table_Name(X636F64696669636174696F6E,2,1,stc);
static SwtTbl   Swt_Table_Name(X64756D6D795F696E737472756374696F6E,1,1,stc);
