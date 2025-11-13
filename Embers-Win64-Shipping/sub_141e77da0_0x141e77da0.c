// 函数: sub_141e77da0
// 地址: 0x141e77da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* r14 = arg4
float zmm6[0x4] = zx.o(0)
uint32_t zmm8[0x4] = data_143f39c10
float zmm0[0x4] = zmm8
zmm8 = __andps_xmmxud_memxud(zmm8, data_143f39c20)
int64_t rdi = sx.q(arg3)
zmm0[0].q = zx.o(0) u>> 0x40
float zmm9[0x4] = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)

if (rdi.d != 0xffffffff)
    char rax_1
    rax_1, arg4 = sub_140a80ea0()
    
    if (rax_1 == 0)
        if (rdi.d s< *(arg2 + 0x88))
            float (* rax_4)[0x4] = (rdi << 6) + *(arg2 + 0x80)
            zmm9 = *rax_4
            zmm6 = rax_4[1]
            zmm8 = rax_4[2]
    else if (rdi.d s< *(arg2 + 0x138))
        float (* rcx_2)[0x4] = rdi * 0xc0 + *(arg2 + 0x130)
        zmm9 = *rcx_2
        zmm6 = rcx_2[1]
        zmm8 = rcx_2[2]

float zmm15[0x4] = r14[1]
zmm0 = r14[2]
zmm15[0] = zmm15[0] - zmm6[0]
int128_t zmm14 = *r14
float var_148[0x4] = zmm0
float temp0_2[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
temp0_2[0] = temp0_2[0] - temp0_3[0]
float temp0_4[0x4] = _mm_shuffle_ps(zmm15, zmm15, 0xaa)
int32_t var_12c = 0
float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
temp0_4[0] = temp0_4[0] - temp0_5[0]
temp0_2[0] = temp0_2[0] * temp0_2[0]
zmm15[0] = zmm15[0] * zmm15[0]
temp0_4[0] = temp0_4[0] * temp0_4[0]
temp0_2[0] = temp0_2[0] + zmm15[0]
temp0_2[0] = temp0_2[0] + temp0_4[0]
float zmm7[0x4] = _mm_sqrt_ss(0, temp0_2[0])
float var_128 = zmm7[0]
float var_150
float rax_5

if (zmm7[0] <= 9.99999994e-09f)
    zmm0 = zx.o(data_143dbb1f8.q)
    rax_5 = data_143dbb200
else
    float zmm2[0x4] = 0x3f800000
    zmm2[0] = 1f / zmm7[0]
    zmm2[0] = zmm2[0] * temp0_4[0]
    zmm2[0] = zmm2[0] * zmm15[0]
    zmm2[0] = zmm2[0] * temp0_2[0]
    var_150 = zmm2[0]
    rax_5 = var_150
    zmm0 = _mm_unpacklo_ps(zmm2, zmm2[0].q)

arg4.b = 1
float var_124 = zmm7[0]
float var_130 = rax_5
int64_t var_138 = zmm0.q
int32_t var_158

if (sub_141e7dd40(arg2, rdi.d, &var_158, arg4.b) != 0)
    float zmm3_1[0x4] = var_158
    int32_t var_154
    float zmm2_1[0x4] = var_154
    zmm15[0] = zmm15[0] - zmm3_1[0]
    float zmm0_1[0x4] = var_150
    temp0_2[0] = temp0_2[0] - zmm2_1[0]
    temp0_4[0] = temp0_4[0] - zmm0_1[0]
    float temp0_8[0x4] = _mm_unpacklo_ps(zmm2_1, 0)
    float temp0_9[0x4] = _mm_unpacklo_ps(zmm3_1, zmm0_1[0].q)
    zmm15[0] = zmm15[0] * zmm15[0]
    temp0_2[0] = temp0_2[0] * temp0_2[0]
    temp0_4[0] = temp0_4[0] * temp0_4[0]
    temp0_2[0] = temp0_2[0] + zmm15[0]
    zmm6 = _mm_unpacklo_ps(temp0_9, temp0_8[0].q)
    temp0_2[0] = temp0_2[0] + temp0_4[0]
    zmm7 = _mm_sqrt_ss(0, temp0_2[0])
    var_128 = zmm7[0]

char rax_7 = *(arg5 + 0xb0)
float var_12c_1

if ((rax_7 & 1) == 0)
    if ((rax_7 & 4) != 0)
        zmm7[0] = zmm7[0] f- *(arg5 + 0x14)
        var_12c_1 = _mm_max_ss(zmm7[0], 0)[0]
else if (*(arg5 + 9) == 0 || (rax_7 & 4) != 0)
    zmm7[0] = zmm7[0] f- *(arg5 + 0x14)
    var_12c_1 = _mm_max_ss(zmm7[0], 0)[0]
*arg1 = var_138.o
arg1[1] = var_128.o
arg1[2] = zmm9
arg1[3] = zmm6
arg1[4] = zmm8
arg1[5] = zmm14
arg1[6] = zmm15
arg1[7] = var_148
arg1[8] = arg5.o
return arg1
