// 函数: sub_1427afb10
// 地址: 0x1427afb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18
char arg_8
int64_t result = sub_1427b2310(arg1 + 0x54, arg1 + 0x60, arg2, &arg2[3], &arg_8, &var_18)

if (arg_8 == 0)
    return result

uint64_t zmm3_1 = var_18.d
float zmm4_1 = var_18:4.d
*(arg1 + 0x90) = var_18
float var_10
*(arg1 + 0x98) = var_10
zmm4_1 = zmm4_1 f- *(arg1 + 0x58)
zmm3_1.d = zmm3_1.d f- *(arg1 + 0x54)
float zmm2_1 = var_10 f- *(arg1 + 0x5c)
uint64_t zmm0_1
zmm0_1.d = zmm3_1.d f* *(arg1 + 0x6c)
zmm3_1.d = zmm3_1.d f* *(arg1 + 0x78)
float zmm5_1 = (zmm4_1 f* *(arg1 + 0x70) f+ zmm0_1.d + zmm2_1 f* *(arg1 + 0x74)) f* *(arg1 + 0xac)
zmm0_1.d = (*(arg1 + 0xb0)).d f* (zmm4_1 f* *(arg1 + 0x7c) f+ zmm3_1.d + zmm2_1 f* *(arg1 + 0x80))
*(arg1 + 0xa4) = zmm5_1
*(arg1 + 0xa8) = zmm0_1.d
zmm0_1.d = zmm0_1.d f- *(arg1 + 0xa0)
zmm0_1.d = zmm0_1.d f+ *(arg1 + 0xc4)
arg_8.d = zmm5_1 f- *(arg1 + 0x9c) f+ *(arg1 + 0xc0)
int32_t arg_c = zmm0_1.d
int64_t* rcx_1

if (*(arg1 + 0x20) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x28)

return (*(*rcx_1 + 0x20))(rcx_1, &arg_8)
