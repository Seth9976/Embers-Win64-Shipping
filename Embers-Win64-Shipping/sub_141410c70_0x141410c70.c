// 函数: sub_141410c70
// 地址: 0x141410c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
arg1[4].d = *(arg2 + 0x254)
*(arg1 + 0x24) = *(arg2 + 0x258)
arg1[5].d = *(arg2 + 0x25c)
*(arg1 + 0x3c) = *(arg2 + 0x23c)
arg1[8].d = *(arg2 + 0x240)
int128_t* rax_5 = 0x224
*(arg1 + 0x44) = *(arg2 + 0x244)
arg1[1].d = *(arg2 + 0x1d8)
float zmm0[0x4] = *(arg2 + 0x1d8)
zmm0[0] = zmm0[0] f+ *(arg2 + 0x200)
*(arg1 + 0x14) = zmm0[0]
zmm0 = *(arg2 + 0x1f0)
zmm0[0] = zmm0[0] * 0.00100000005f
*(arg1 + 0xc) = zmm0[0]
zmm0 = *(arg2 + 0x1f4)
zmm0[0] = zmm0[0] * 0.00100000005f
arg1[2].d = zmm0[0]
arg1[3].d = *(arg2 + 0x1f8) * 0.00100000005f
zmm0 = *(arg2 + 0x1fc)
float zmm1 = -0.99000001f
zmm0[0] = zmm0[0] * 0.00100000005f
*(arg1 + 0x1c) = zmm0[0]

if (*(arg2 + 0x218) == 0)
    rax_5 = 0x204

*(arg1 + 0x2c) = *(rax_5 + arg2)
arg1[0xb] = *(arg2 + 0x218)
zmm0 = *(arg2 + 0x220)
zmm0[0] = zmm0[0] * 0.0174532924f
arg1[0xc].d = zmm0[0]
*(arg1 + 0x64) = *(arg2 + 0x234)
arg1[0xd].d = *(arg2 + 0x238)
*(arg1 + 0x6c) = *(arg2 + 0x260)
zmm0 = *(arg2 + 0x264)

if (not(zmm0[0] < -0.99000001f))
    zmm1 = __minss_xmmss_memss(zmm0[0], 0x3f7d70a4)[0]

arg1[0xe].d = zmm1
void var_18
*(arg1 + 0x74) = *sub_140acc920(&var_18, arg2 + 0x268)
float zmm0_1[0x4] = *(arg2 + 0x26c)
*(arg1 + 0x84) = zmm0_1
zmm1 = *(arg1 + 0x8c)
zmm0_1[0] = zmm0_1[0] * 9.99999975e-05f
float temp0_2[0x4] = _mm_max_ss(zmm0_1[0], 0)
float temp0_3 = _mm_max_ss(zmm1 * 9.99999975e-05f, 0)
*(arg1 + 0x84) = temp0_2[0]
zmm0_1 = arg1[0x11].d
*(arg1 + 0x8c) = temp0_3
zmm0_1[0] = zmm0_1[0] * 9.99999975e-05f
arg1[0x11].d = _mm_max_ss(zmm0_1[0], 0)[0]
*(arg1 + 0x94) = _mm_max_ss((*(arg2 + 0x27c))[0], 0)[0]
arg1[0x13].d = _mm_max_ss(*(arg2 + 0x280), 0)
*(arg1 + 0x9c) = _mm_max_ss((*(arg2 + 0x284))[0], 0)[0]
arg1[0x14].b = *(arg2 + 0x288)
return arg1
