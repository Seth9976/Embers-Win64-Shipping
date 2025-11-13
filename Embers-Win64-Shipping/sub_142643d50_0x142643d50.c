// 函数: sub_142643d50
// 地址: 0x142643d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
*arg1 = &data_143455870
arg1[5] = &data_1434560d0
arg1[0x3e] = &data_143456100
arg1[0x81] = &data_143456158
arg1[0x82] = 0
arg1[0x83] = 0
*(arg1 + 0x14f) = 1
sub_142221760(&arg1[0x55], data_143f3a590)
sub_141f256b0(arg1, 0)
*(arg1 + 0x8a) |= 0xc
*(arg1 + 0x20f) = 2
uint128_t var_58
sub_141db75d0(&var_58)
int128_t var_28
__builtin_memcpy(&var_28, 
    "\x00\x00\x00\x00\x00\x00\x48\xc2\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x48\x42", 0x14)
int32_t var_14 = 0
sub_141dd7500(&var_58, sub_14269c0f0())
int64_t rsi = sx.q(arg1[0x83].d)
int32_t rax_1 = (rsi + 1).d
arg1[0x83].d = rax_1

if (rax_1 s> *(arg1 + 0x41c))
    sub_140775520(&arg1[0x82])

int64_t rax_2 = arg1[0x82]
int64_t rcx_5 = rsi * 9
*(rax_2 + (rcx_5 << 3)) = var_58
int128_t var_48
*(rax_2 + (rcx_5 << 3) + 0x10) = var_48
uint128_t var_38
*(rax_2 + (rcx_5 << 3) + 0x20) = var_38
*(rax_2 + (rcx_5 << 3) + 0x30) = var_28
int32_t var_18
*(rax_2 + (rcx_5 << 3) + 0x40) = var_18.q
return arg1
