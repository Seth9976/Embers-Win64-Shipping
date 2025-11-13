// 函数: sub_141c468f0
// 地址: 0x141c468f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm0 = *arg2

if (zmm0 >= 0f)
    zmm0 = __minss_xmmss_memss(zmm0, 0x3f7ff972)
else
    zmm0 = (zx.o(0)).d

*(arg1 + 0x40) = zmm0
zmm0 = arg2[1]

if (zmm0 >= 0f)
    zmm0 = __minss_xmmss_memss(zmm0, 0x447a0000)
else
    zmm0 = (zx.o(0)).d

*(arg1 + 0x44) = zmm0
int32_t zmm1 = arg2[2]

if (zmm1 f>= 0f)
    zmm1 = __minss_xmmss_memss(zmm1, 0x3f7fff58)
else
    zmm1 = (zx.o(0)).d

float zmm7[0x4] = 0x38d1b717
*(arg1 + 0x48) = zmm1
zmm0 = arg2[3]

if (zmm0 >= 9.99999975e-05f)
    zmm0 = _mm_min_ss(zmm0, 0x3f800000)
else
    zmm0 = 9.99999975e-05f

*(arg1 + 0x4c) = zmm0
zmm1 = arg2[4]

if (zmm1 f>= 0f)
    zmm1 = __minss_xmmss_memss(zmm1, 0x3f7fff58)
else
    zmm1 = (zx.o(0)).d

*(arg1 + 0x50) = zmm1
float zmm6 = sub_141c33a20(arg1 + 0x38)
int32_t zmm0_1 = arg2[5]

if (zmm0_1 f>= zmm6)
    zmm0_1 = __minss_xmmss_memss(zmm0_1, 0x44fa0000)
else
    zmm0_1 = (zx.o(0)).d

*(arg1 + 0x14) = zmm0_1
*(arg1 + 0x18) = _mm_min_ss(arg2[6], zmm6)
float zmm1_1[0x4] = arg2[7]

if (zmm1_1[0] >= zmm6)
    zmm1_1 = __minss_xmmss_memss(zmm1_1[0], 0x3f7fff58)
else
    zmm1_1 = zx.o(0)

*(arg1 + 0x1c) = zmm1_1[0]
zmm0_1 = arg2[9]

if (zmm0_1 f>= zmm6)
    zmm0_1 = __minss_xmmss_memss(zmm0_1, 0x3f7fffef)
else
    zmm0_1 = (zx.o(0)).d

*(arg1 + 0x24) = zmm0_1
zmm0_1 = arg2[8]

if (zmm0_1 f>= zmm6)
    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
else
    zmm0_1 = (zx.o(0)).d

*(arg1 + 0x20) = zmm0_1
zmm1_1 = arg2[0xa]

if (not(zmm1_1[0] < 9.99999975e-05f))
    zmm7 = _mm_min_ss(zmm1_1[0], 0x3f800000)

*(arg1 + 0x28) = zmm7[0]
zmm0_1 = arg2[0xb]

if (zmm0_1 f>= zmm6)
    zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
else
    zmm0_1 = (zx.o(0)).d

*(arg1 + 0x2c) = zmm0_1
zmm1_1 = arg2[0xc]

if (not(zmm1_1[0] < zmm6))
    zmm6 = __minss_xmmss_memss(zmm1_1[0], 0x41200000)[0]

*(arg1 + 0x30) = zmm6
return sub_141c34170(arg1) __tailcall
