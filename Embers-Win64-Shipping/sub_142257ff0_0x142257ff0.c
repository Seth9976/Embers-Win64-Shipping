// 函数: sub_142257ff0
// 地址: 0x142257ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg3.d
int128_t zmm6 = zx.o(0)
int128_t zmm7 = arg2
int128_t zmm8 = arg4

if (not(0f < arg7[3]) && not(0f < arg7[2]))
    zmm6 = arg5

if (not(zmm7.d f>= zmm4 f+ zmm6.d))
    int64_t* rdx_1 = *(arg1 + 8)
    arg3 = *(arg6 + 4)
    arg2 = *(arg6 + 8)
    arg4 = *arg6 ^ 0x80000000
    *(arg1 + 8) = &rdx_1[0xa]
    *(rdx_1 + 0x4e) = 0
    arg3 ^= 0x80000000
    *rdx_1 = 0
    arg2 ^= 0x80000000
    rdx_1[1].d = 0
    rdx_1[2].d = arg4.d
    *(rdx_1 + 0x14) = arg3.d
    rdx_1[3].d = arg2.d
    rdx_1[4] = 0
    rdx_1[5].d = 0
    rdx_1[6].d = arg4.d
    *(rdx_1 + 0x34) = arg3.d
    rdx_1[7].d = arg2.d
    *(rdx_1 + 0xc) = (zmm4 f- zmm7.d) * -4f
    sub_142256e20(arg1, rdx_1, arg7)

float result = zmm8.d f- zmm6.d

if (zmm7.d f<= result)
    return result

int64_t* rdx_2 = *(arg1 + 8)
zmm8.d = zmm8.d f- zmm7.d
zmm8.d = zmm8.d f* 4f
*(arg1 + 8) = &rdx_2[0xa]
*(rdx_2 + 0x4e) = 0
*rdx_2 = 0
rdx_2[1].d = 0
rdx_2[2].d = *arg6
*(rdx_2 + 0x14) = *(arg6 + 4)
rdx_2[3].d = *(arg6 + 8)
rdx_2[4] = 0
rdx_2[5].d = 0
rdx_2[6].d = *arg6
*(rdx_2 + 0x34) = *(arg6 + 4)
rdx_2[7].d = *(arg6 + 8)
*(rdx_2 + 0xc) = zmm8.d
return sub_142256e20(arg1, rdx_2, arg7)
