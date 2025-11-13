// 函数: sub_1421c28d0
// 地址: 0x1421c28d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg2
int32_t zmm4 = arg4.d

if (r9 == 0)
    return 

int32_t zmm5 = 0x3f800000
int128_t zmm7
zmm7.d = (*(arg2 + 0xf4)).d f* *(r9 + 0x24)
zmm7.d = zmm7.d f* arg3.d

if (not(arg4.d f!= -1f))
    zmm4 = arg2[0x1e].d
    
    if (zmm4 f>= 0f)
        zmm4 = _mm_min_ss(zmm4, 0x3f800000)
    else
        zmm4 = (zx.o(0)).d

uint64_t rcx = zx.q(arg5)
int32_t var_2c_1 = 0
uint64_t rax_2 = zx.q(rcx.d) << 6
*(rax_2 + arg1 + 0x10) = *(arg2 + 0x70)
*(rax_2 + arg1 + 0x20) = *(arg2 + 0x80)
*(rax_2 + arg1 + 0x30) = *(arg2 + 0x90)
*(rax_2 + arg1 + 0x40) = *(arg2 + 0xa0)
*(rax_2 + arg1 + 0x110) = *(arg2 + 0x30)
*(rax_2 + arg1 + 0x120) = *(arg2 + 0x40)
*(rax_2 + arg1 + 0x130) = *(arg2 + 0x50)
*(rax_2 + arg1 + 0x140) = *(arg2 + 0x60)
arg3 = zx.o(*(r9 + 0x1c))
arg4 = zx.o(*(r9 + 0x20))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(r9 + 0x18)))
arg3 = _mm_cvtepi32_ps(arg3)
float var_38[0x4]
var_38[0] = zmm0.d
float temp0_4[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
temp0_4[0] = arg3.d
float temp0_5[0x4] = _mm_shuffle_ps(temp0_4, temp0_4, 0xc6)
temp0_5[0] = _mm_cvtepi32_ps(arg4).d
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc9)
*(arg1 + (rcx + 0x25) * 0x10) = temp0_7
temp0_7[2].q = 0
zmm0.d = zmm7.d
_mm_shuffle_ps(zmm0, zmm0, 0xe1)
zmm0.d = zmm4
*(arg1 + (rcx + 0x21) * 0x10) = _mm_shuffle_ps(zmm0, zmm0, 0xe1)

if ((*(arg2 + 0xfc) & 1) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = 0x3f800000

*(arg1 + (rcx + 0x29) * 0x10) = zmm0.d

if ((*(arg2 + 0xfc) & 2) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = 0x3f800000

uint64_t rcx_1 = rcx * 2
*(arg1 + (rcx_1 << 3) + 0x294) = zmm0.d

if ((*(arg2 + 0xfc) & 4) == 0)
    zmm5 = (zx.o(0)).d

*(arg1 + (rcx_1 << 3) + 0x298) = zmm5
