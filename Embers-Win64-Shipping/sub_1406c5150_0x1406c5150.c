// 函数: sub_1406c5150
// 地址: 0x1406c5150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
*arg1 = 0
arg1[1].d = 0x3c
*(arg1 + 0xc) = 0x11
void* arg_10 = &arg1[3]
arg1[3] = 0
arg1[4] = 0
sub_1405947f0(&arg1[3], 0xa)
int32_t rax = arg1[4].d + 0xa
arg1[4].d = rax

if (rax s> *(arg1 + 0x24))
    sub_140594770(&arg1[3])

UnDecorator::getReferenceType(arg1[3], u"ultrafast", 0x14)
arg_10 = &arg1[5]
arg1[5] = 0
arg1[6] = 0
sub_1405947f0(&arg1[5], 0xc)
int32_t rax_1 = arg1[6].d + 0xc
arg1[6].d = rax_1

if (rax_1 s> *(arg1 + 0x34))
    sub_140594770(&arg1[5])

UnDecorator::getReferenceType(arg1[5], u"zerolatency", 0x18)
arg1[7] = 0
arg1[8] = 0
arg1[9].d = 0x3f800000
return arg1
