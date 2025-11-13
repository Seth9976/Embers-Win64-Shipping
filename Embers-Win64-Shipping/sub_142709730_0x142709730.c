// 函数: sub_142709730
// 地址: 0x142709730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4 = arg3[2]
int64_t result = 0x7f7fffff
int32_t zmm1

if (zmm4 <= 0f)
    zmm1 = 0x7f7fffff
else
    zmm1 = *arg3

int32_t zmm2 = arg2[1].d

if (not(zmm2 f<= 0f))
    result = *arg2

if (zmm1 f<= result.d || not(zmm2 f>= zmm4))
    *arg2 = *arg3
    *(arg2 + 4) = arg3[1]
    arg2[1].d = arg3[2]
    *(arg2 + 0xc) = *(arg3 + 0xc)
    *(arg2 + 0x14) = arg3[5]
    result = *(arg3 + 0x18)
    arg2[3] = result
    arg2[4].d = arg3[8]
    *(arg2 + 0x24) = *(arg3 + 0x24)
    *(arg2 + 0x2c) = arg3[0xb].b
    arg2[6] = *(arg3 + 0x30)
    arg2[7].d ^= (arg2[7].d ^ arg3[0xe]) & 1
    int32_t rcx_3 = ((arg2[7].d ^ arg3[0xe]) & 2) ^ arg2[7].d
    arg2[7].d = rcx_3
    arg2[7].d = ((rcx_3 ^ arg3[0xe]) & 4) ^ rcx_3

return result
