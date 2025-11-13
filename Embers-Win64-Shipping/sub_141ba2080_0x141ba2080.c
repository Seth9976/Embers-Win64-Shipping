// 函数: sub_141ba2080
// 地址: 0x141ba2080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** var_98
sub_141af7840(&var_98, arg3)
int64_t rsi = sx.q(*(arg1 + 0x70))
int64_t rbx_1 = *(arg1 + 0x68)
var_98 = &data_14306e6a0
uint64_t var_18 = 0
int32_t var_10 = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&var_18, rsi.d, 0)
    memcpy(var_18, rbx_1, (rsi << 3).d)
else
    int32_t var_c_1 = 0

arg2[0x10].b &= 0xfe
sub_141b768b0(arg2, &var_98)
uint64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_141afd590(&var_98)
return arg2
