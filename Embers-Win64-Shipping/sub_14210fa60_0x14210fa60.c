// 函数: sub_14210fa60
// 地址: 0x14210fa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af98a0("Runtime\Engine\Classes\Materials/MaterialExpressionCustomOutput.h", 0x12, 
    Pure virtual not implemented (%s)", UMaterialExpressionCustomOutput::GetFunctionName")
sub_140afbb40()
*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0x10)
int32_t rax = arg2[1].d + 0x10
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"GetCustomOutput", 0x20)
return arg2
