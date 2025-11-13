// 函数: sub_140acf9d0
// 地址: 0x140acf9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm0
zmm0.d = (*arg2).d f- *arg3
int64_t zmm2
zmm2.d = (*(arg2 + 4)).d f- arg3[1]
int64_t zmm4
zmm4.d = (*arg4).d f- *arg3
float zmm5 = *(arg4 + 4) f- arg3[1]
int128_t zmm6
zmm6.d = arg4[1].d.d f- arg3[2]
zmm2.d = zmm2.d f* zmm5
zmm0.d = zmm0.d f* zmm4.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ (arg2[1].d f- arg3[2]) f* zmm6.d

if (not(zmm2.d f> 0f))
    int32_t rax = arg3[2]
    *arg1 = *arg3
    arg1[1].d = rax
    return arg1

zmm0.d = zmm4.d f* zmm4.d
float zmm3 = zmm5 * zmm5 f+ zmm0.d + zmm6.d f* zmm6.d

if (not(zmm3 f> zmm2.d))
    int32_t rax_2 = arg4[1].d
    *arg1 = *arg4
    arg1[1].d = rax_2
    return arg1

zmm2.d = zmm2.d f/ zmm3
zmm0 = zmm2
float zmm1 = zmm2.d
zmm2.d = zmm2.d f* zmm6.d
zmm0.d = zmm0.d f* zmm4.d
zmm2.d = zmm2.d f+ arg3[2]
zmm0.d = zmm0.d f+ *arg3
zmm1 = zmm1 * zmm5 f+ arg3[1]
arg1[1].d = zmm2.d
*arg1 = zmm0.d
*(arg1 + 4) = zmm1
return arg1
