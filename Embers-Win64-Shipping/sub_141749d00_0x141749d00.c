// 函数: sub_141749d00
// 地址: 0x141749d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0x28)
uint128_t zmm0
zmm0.d = zmm2.d f* *(arg1 + 0x1c)
int64_t var_28 = arg9
uint128_t zmm1
zmm1.d = zmm2.d f* *(arg1 + 0x20)
zmm0.d = zmm0.d f+ *(arg1 + 0x10)
zmm2.d = zmm2.d f* *(arg1 + 0x24)
zmm1.d = zmm1.d f+ *(arg1 + 0x14)
zmm2.d = zmm2.d f+ *(arg1 + 0x18)
int32_t var_18 = zmm0.d
int32_t var_14 = zmm1.d
int32_t var_10 = zmm2.d
return sub_14174bd50(*(arg1 + 0x2c), *(arg1 + 0x28), arg1 + 0x1c, arg1 + 0x10, &var_18, arg2, arg3, 
    arg4, arg5.d, arg6, arg7, arg8)
