// 函数: sub_141bba010
// 地址: 0x141bba010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int16_t var_150 = *(arg4 + 8)
uint128_t zmm1 = arg3[1]
char var_14e = *(arg4 + 0xa)
int32_t var_14c = *(arg4 + 0xc)
int64_t var_148 = *(arg4 + 0x10)
int64_t var_140 = *(arg4 + 0x18)
int64_t rax_7 = *(arg4 + 0x20)
int128_t var_118 = *arg3
int64_t var_138 = rax_7
void* rax_8 = *(arg4 + 0x28)
uint128_t var_108 = zmm1
int128_t var_f8 = arg3[2]
uint64_t var_e8 = arg3[3].q
void* var_130 = rax_8

if (rax_8 != 0)
    *(rax_8 + 8) += 1

int128_t zmm0 = *(arg4 + 0x38)
int32_t var_128 = *(arg4 + 0x30)
int32_t var_124 = *(arg4 + 0x34)
void** var_158 = &data_142ecfd58
int32_t var_120 = zmm0.d
void var_d8
sub_140e51550(arg2, sub_141c12760(arg1, &var_d8, &var_118, &var_158))
sub_140597700(&var_d8)
__security_check_cookie(rax_1 ^ &var_178)
return arg2
