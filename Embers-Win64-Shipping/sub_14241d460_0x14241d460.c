// 函数: sub_14241d460
// 地址: 0x14241d460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x268)
float zmm4[0x4] = zx.o(0)
float var_18[0x4]

if (rcx != 0)
    zmm4 = *sub_1422f0150(rcx, &var_18, arg3)
*arg2 = zmm4.q
arg2[1].d = _mm_bsrli_si128(zmm4, 8).d
float zmm0 = *arg2 + 1f
uint128_t zmm1
zmm1.d = (*(arg1 + 0x30)).d f* 0.5f
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xff)
zmm0 = zmm0 f* zmm1.d
zmm1.d = (*(arg1 + 0x34)).d f* 0.5f
*arg2 = zmm0
bool cond:0 = temp0_1[0] > 0f
*(arg2 + 4) = (1f - data_1439c7a1c * 1f f* *(arg2 + 4)) f* zmm1.d

if (not(cond:0))
    arg2[1].d = 0

return arg2
