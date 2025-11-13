// 函数: sub_141de7d80
// 地址: 0x141de7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg1[1].d - 1
int32_t rcx = arg1[5].d
int32_t r9_1 = arg1[3].d - 1

if (arg2 s<= rax_1)
    rax_1 = arg2

if (arg2 s<= r9_1)
    r9_1 = arg2

int64_t r11_1 = sx.q(r9_1) * 2
int64_t rdi = sx.q(rax_1) * 3
int64_t result
float zmm4[0x4]
int128_t zmm5

if (rcx s<= 0)
    int64_t rcx_2 = *arg1
    float zmm3[0x4] = data_143a2d250
    result = *(rcx_2 + (rdi << 2) + 8)
    zmm4 = *(rcx_2 + (rdi << 2))
    zmm5 = *(arg1[2] + (r11_1 << 3))
    float temp0_6[0x4] = _mm_unpacklo_ps(*(rcx_2 + (rdi << 2) + 4), 0)
    float temp0_7[0x4] = _mm_unpacklo_ps(zmm4, result)
    result = data_143a2d258
    float temp0_8[0x4] = _mm_unpacklo_ps(temp0_7, temp0_6[0].q)
    float temp0_9[0x4] = _mm_unpacklo_ps(data_143a2d254, 0)
    arg3[2] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, result), temp0_9[0].q)
    *arg3 = zmm5
    arg3[1] = temp0_8
    return result

int32_t rax_3 = rcx - 1
int64_t rcx_1 = *arg1

if (arg2 s<= rax_3)
    rax_3 = arg2

int64_t rdx = arg1[4]
result = *(rcx_1 + (rdi << 2) + 8)
zmm4 = *(rcx_1 + (rdi << 2))
float temp0[0x4] = _mm_unpacklo_ps(*(rcx_1 + (rdi << 2) + 4), 0)
float temp0_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm4, result), temp0[0].q)
int64_t r8 = sx.q(rax_3) * 3
result = *(rdx + (r8 << 2) + 8)
zmm5 = *(arg1[2] + (r11_1 << 3))
float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*(rdx + (r8 << 2)), result), 
    _mm_unpacklo_ps(*(rdx + (r8 << 2) + 4), 0)[0].q)
*arg3 = zmm5
arg3[2] = temp0_5
arg3[1] = temp0_2
return result
