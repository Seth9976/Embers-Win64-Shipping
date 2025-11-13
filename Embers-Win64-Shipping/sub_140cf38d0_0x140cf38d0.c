// 函数: sub_140cf38d0
// 地址: 0x140cf38d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int32_t r8 = *(arg1 + 0xa0)
int128_t zmm0 = *(arg1 + 0x88)
int64_t var_48 = *(arg1 + 0x78)
int32_t var_18 = r8
r8.b = not.b(r8.b)
int64_t var_40 = *(arg1 + 0x80)
int64_t var_20 = *(arg1 + 0x98)
void* var_38 = arg2
int128_t var_30 = zmm0
int32_t rax_4 = *(arg2 + 8)
int32_t result

if ((r8.b & 1) != 0)
    result = rax_4 - *(arg2 + 0x34)
else
    result = rax_4 - *(arg2 + 0x24)

if (result != 0)
    sub_140cfaf40(&var_48, 0, result)
    int32_t var_50_1 = 0
    int64_t* var_58 = &var_48
    result = sub_140ceec60(&var_48, &var_58)

__security_check_cookie(rax_1 ^ &var_78)
return result
