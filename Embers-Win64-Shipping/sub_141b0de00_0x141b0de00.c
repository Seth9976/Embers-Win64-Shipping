// 函数: sub_141b0de00
// 地址: 0x141b0de00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_98
sub_141af7840(&var_98, arg3)
int32_t rax = *(arg1 + 0x68)
arg2[0x10].b &= 0xfc
var_98 = &data_1430567c8
void*** rax_1 = sub_140a82f30(0x88, 8)
arg2[0x10].b |= 1
bool cond:0 = (arg2[0x10].b & 2) != 0
void*** rbx_1 = rax_1
*arg2 = rax_1

if (cond:0)
    rbx_1 = arg2

sub_141af7b50(rbx_1, &var_98)
rbx_1[0x10].d = rax
*rbx_1 = &data_1430567c8
sub_141afd590(&var_98)
return arg2
