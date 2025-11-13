// 函数: sub_140f494b0
// 地址: 0x140f494b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x2a8)
uint32_t zmm6[0x4] = *(arg3 + 4)
float zmm7[0x4] = *arg3
int64_t rbx = sx.q(arg2) * 0xd0
zmm7[0] = zmm7[0] f- *(rbx + rbp + 0x88)
zmm6[0] = zmm6[0] f- *(rbx + rbp + 0x8c)
void* rsi
void* rdi_1
uint32_t zmm0[0x4]

if (zmm7[0] != 0f || zmm6[0] f!= 0f)
    rdi_1 = rbp + 0x80 + rbx
    rsi = rdi_1
    float zmm1_1[0x4] = zx.o(0)
    zmm1_1[0] = sub_140a3f4a0(zmm6, zmm7)[0]
    zmm0, zmm6, zmm7 = __libm_sse2_sincosf_(zmm1_1)
    uint32_t zmm2_1[0x4] = 0x40000000
    uint32_t zmm8_1 = zmm0[0]
    uint32_t zmm9_1[0x4] = _mm_shuffle_ps(zmm0, zmm0, 1)
    uint32_t zmm1[0x4] = 0x40000000
    zmm1[0] = 2f f/ *(rbx + rbp + 0x98)
    zmm2_1[0] = 2f f/ *(rbx + rbp + 0x9c)
    zmm1[0] = zmm1[0] f* zmm9_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm8_1
    zmm1[0] = zmm1[0] f* zmm1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f+ zmm1[0]
    uint32_t zmm3_1[0x4] = zmm2_1
    float temp0_2[0x4] = _mm_rsqrt_ss(zmm2_1[0], zmm3_1[0])
    zmm2_1 = 0x3f000000
    zmm3_1[0] = zmm3_1[0] f* 0.5f
    zmm0 = temp0_2
    zmm0[0] = zmm0[0] f* temp0_2[0]
    zmm3_1[0] = zmm3_1[0] f* zmm0[0]
    zmm0 = temp0_2
    zmm2_1[0] = 0.5f f- zmm3_1[0]
    zmm0[0] = zmm0[0] f* zmm2_1[0]
    temp0_2[0] = temp0_2[0] f+ zmm0[0]
    zmm1 = temp0_2
    zmm0 = temp0_2
    zmm1[0] = zmm1[0] f* temp0_2[0]
    zmm3_1[0] = zmm3_1[0] f* zmm1[0]
    zmm1 = zmm7
    zmm1[0] = zmm1[0] f* zmm7[0]
    zmm0[0] = zmm0[0] f* (0.5f f- zmm3_1[0])
    temp0_2[0] = temp0_2[0] f+ zmm0[0]
    zmm6[0] = zmm6[0] f* zmm6[0]
    zmm1[0] = zmm1[0] f+ zmm6[0]
    zmm0 = temp0_2
    zmm0[0] = zmm0[0] f* temp0_2[0]
    
    if (not(zmm1[0] f<= zmm0[0]))
        zmm6 = temp0_2
        zmm7 = temp0_2
        zmm6[0] = zmm6[0] f* zmm8_1
        zmm7[0] = zmm7[0] f* zmm9_1[0]
else
    rdi_1 = rbp + 0x80 + rbx
    rsi = rdi_1

*rdi_1 = zmm7[0]
*(rsi + 4) = zmm6[0]
int64_t result = *(arg1 + 0x2a8)
zmm7 = *(rbx + result + 0x88)
zmm6 = *(rbx + result + 0x8c)
zmm0 = zmm7
zmm0[0] = zmm0[0] f+ *rdi_1
zmm6[0] = zmm6[0] f+ *(rdi_1 + 4)
uint32_t arg_8 = zmm0[0]
float arg_c = zmm6[0]
float zmm6_1 = sub_140f2ad60(arg1, &arg_8, rbp + 0xa0 + rbx, arg4)
result.b = 1
*rdi_1 = arg_8 - zmm7[0]
*(rsi + 4) = arg_c - zmm6_1
return result
