// 函数: sub_141fa4130
// 地址: 0x141fa4130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db5b80(arg1)
*arg1 = &data_14328d828
void arg_8
uint64_t rbx = *sub_140b58260(&arg_8, u"NewDecalComponent", 1)
int64_t* rax_1 = sub_14249b500()
void* rax_2 = sub_140cd9110(arg1, rbx, rax_1, rax_1, 1, 0)
int32_t var_10 = 0
int32_t var_20 = 0
int64_t var_28 = _mm_unpacklo_ps(0xc2b40000, 0)
arg1[0x44] = rax_2
sub_141f48c80(rax_2, &var_28, 0, 0, 0)
void* rax_3 = arg1[0x44]
*(rax_3 + 0x210) |= 1
arg1[0x26] = arg1[0x44]
sub_141dd7d00(arg1, 0)
return arg1
