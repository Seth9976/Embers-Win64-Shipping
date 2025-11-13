// 函数: sub_140908180
// 地址: 0x140908180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_142e1b600
__builtin_memcpy(&arg1[5], 
    "\x18\x00\x00\x00\x01\x00\x00\x00\x00\x00\xc8\x41\x00\x00\x80\x3f\x08\x00\x00\x00\x80\x00\x00\x00\x"
"00\x00\x80\x3f\x01", 
    0x1d)
arg1[9].d = 0
arg1[0xa] = 0
arg1[0xb] = 0
sub_1405947f0(&arg1[0xa], 6)
int32_t rax = arg1[0xb].d + 6
arg1[0xb].d = rax

if (rax s> *(arg1 + 0x5c))
    sub_140594770(&arg1[0xa])

UnDecorator::getReferenceType(arg1[0xa], u"proxy", 0xc)
arg1[0xc].b = 0
return arg1
