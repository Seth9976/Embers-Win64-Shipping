// 函数: sub_141c34980
// 地址: 0x141c34980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d
float (* r14)[0x4] = *arg1
int32_t rbp_1 = rsi & 0xfffffffc
int32_t i_5 = rsi & 3
int128_t zmm6 = data_143a12bac
float result[0x4] = expf(zmm6.d * arg2 * 0.100000001f)
float zmm7[0x4] = 0x3f800000
float result_1[0x4] = result
float temp0[0x4] = _mm_shuffle_ps(result_1, result_1, 0)
zmm7[0] = 1f f/ zmm6.d
zmm6 = 0x41200000
zmm7[0] = zmm7[0] * 10f
float temp0_1[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0)

if (rbp_1 s> 0)
    float (* rbx_1)[0x4] = r14
    uint64_t i_2 = zx.q(((rbp_1 - 1) u>> 2) + 1)
    uint64_t i
    
    do
        float var_68[0x4] = _mm_max_ps(*rbx_1, temp0)
        result, zmm6, zmm7 = sub_141c46b90(&var_68)
        result = _mm_mul_ps(result, temp0_1)
        rbx_1 = &rbx_1[1]
        rbx_1[-1] = result
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_5 != 0)
    uint64_t i_4 = zx.q(i_5)
    
    if (0 s< i_4)
        void* rbx_2 = &(*r14)[sx.q(rbp_1)]
        int64_t i_3 = i_4
        int64_t i_1
        
        do
            result = logf(_mm_max_ss((*rbx_2)[0], result_1[0])[0])
            result[0] = result[0] f* zmm6.d
            rbx_2 += 4
            result[0] = result[0] * zmm7[0]
            *(rbx_2 - 4) = result[0]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

return result
