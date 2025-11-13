// 函数: sub_141e9fad0
// 地址: 0x141e9fad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_78
int64_t rax_2 = __security_cookie ^ &var_78
int32_t r8_1 = *(arg2 + 0xa0)
int128_t zmm0 = *(arg2 + 0x88)
int64_t var_48 = *(arg2 + 0x78)
int32_t var_18_1 = r8_1
r8_1.b = not.b(r8_1.b)
int64_t var_40_1 = *(arg2 + 0x80)
int64_t var_20_1 = *(arg2 + 0x98)
void* var_38_1 = arg1
int128_t var_30_1 = zmm0
int32_t rax_5 = *(arg1 + 8)
int32_t rax

if ((r8_1.b & 1) != 0)
    rax = rax_5 - *(arg1 + 0x34)
else
    rax = rax_5 - *(arg1 + 0x24)

if (rax != 0)
    sub_140cfaf40(&var_48, 0, rax)
    int32_t var_50_1 = 0
    int64_t* var_58 = &var_48
    sub_140ceec60(&var_48, &var_58)

__security_check_cookie(rax_2 ^ &var_78)
