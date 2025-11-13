// 函数: sub_141df20c0
// 地址: 0x141df20c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *arg2
int32_t rdx_2 = r8 u>> 0xa & 0x7ff
uint32_t r10_1 = r8 u>> 0x15
int32_t r8_1 = r8 & 0x3ff
int32_t zmm3 = (zx.o(0)).d
int128_t zmm6

if (r10_1 != 0)
    zmm6 = ((r10_1 & 0xfffffc00) << 5 | (r10_1 & 0x7f)) << 0x10
        | (((r10_1 u>> 7 & 7) << 0x17) + 0x3d800000)
else
    zmm6 = zx.o(0)

int32_t zmm5

if (rdx_2 != 0)
    zmm5 = ((rdx_2 & 0xfffffc00) << 5 | (rdx_2 & 0x7f)) << 0x10
        | (((rdx_2 u>> 7 & 7) << 0x17) + 0x3d800000)
else
    zmm5 = (zx.o(0)).d

float zmm4

if (r8_1 != 0)
    zmm4 = ((r8_1 & 0xfffffe00) << 5 | (r8_1 & 0x3f)) << 0x11
        | (((r8_1 u>> 6 & 7) << 0x17) + 0x3d800000)
else
    zmm4 = (zx.o(0)).d

float zmm2 = 1f - zmm6.d f* zmm6.d - zmm5 f* zmm5 - zmm4 * zmm4

if (not(zmm2 <= 0f))
    zmm3 = _mm_sqrt_ss(0, zmm2)

*arg1 = zmm6.d
arg1[1] = zmm5
arg1[2] = zmm4
arg1[3] = zmm3
return arg1
