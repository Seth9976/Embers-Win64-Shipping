// 函数: sub_140acf930
// 地址: 0x140acf930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm5 = *arg3
int64_t zmm0
zmm0.d = (*arg2).d f- zmm5
int64_t zmm3
zmm3.d = (*arg4).d f- zmm5
int64_t zmm1
zmm1.d = (*(arg2 + 4)).d f- arg3[1]
float zmm4 = *(arg4 + 4) f- arg3[1]
zmm0.d = zmm0.d f* zmm3.d
zmm1.d = zmm1.d f* zmm4
zmm1.d = zmm1.d f+ zmm0.d

if (not(zmm1.d f> 0f))
    *arg1 = *arg3
    return arg1

zmm0.d = zmm3.d f* zmm3.d
float zmm2 = zmm4 * zmm4 f+ zmm0.d

if (not(zmm2 f> zmm1.d))
    *arg1 = *arg4
    return arg1

zmm1.d = zmm1.d f/ zmm2
zmm0 = zmm1
zmm1.d = zmm1.d f* zmm4
zmm0.d = zmm0.d f* zmm3.d
zmm1.d = zmm1.d f+ arg3[1]
zmm0.d = zmm0.d f+ zmm5
*(arg1 + 4) = zmm1.d
*arg1 = zmm0.d
return arg1
