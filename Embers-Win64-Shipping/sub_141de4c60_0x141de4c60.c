// 函数: sub_141de4c60
// 地址: 0x141de4c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg7
int32_t i_1 = 0
int32_t i_3 = rdi[1].d

if (i_3 != 0)
    int128_t* r10_1 = nullptr
    uint64_t i_2 = zx.q(i_3)
    int32_t* r11_1 = nullptr
    float zmm6[0x4]
    float var_28_1[0x4] = zmm6
    uint64_t i
    
    do
        int32_t zmm4 = *(r11_1 + *arg6)
        int64_t rax_1
        
        if (not(zmm4 f< 0.999989986f))
            int64_t rcx = *arg2
            rax_1 = *rdi
            *(r10_1 + rax_1) = *(r10_1 + rcx)
            arg5[0].o = *(r10_1 + rcx + 0x10)
            *(r10_1 + rax_1 + 0x10) = arg5[0].o
            *(r10_1 + rax_1 + 0x20) = *(r10_1 + rcx + 0x20)
        else if (zmm4 f<= 9.99999975e-06f)
            int64_t rdx = *arg1
            rax_1 = *rdi
            *(r10_1 + rax_1) = *(r10_1 + rdx)
            arg5[0].o = *(r10_1 + rdx + 0x10)
            *(r10_1 + rax_1 + 0x10) = arg5[0].o
            *(r10_1 + rax_1 + 0x20) = *(r10_1 + rdx + 0x20)
        else
            int64_t rax_2 = *arg1
            int64_t rcx_1 = *rdi
            float zmm0[0x4] = 0x3f800000
            zmm0[0] = 1f f- zmm4
            float zmm3[0x4] = *(r10_1 + rax_2)
            arg5[0].o = *(r10_1 + rax_2 + 0x10)
            arg7.d = zmm0[0]
            zmm0 = *(r10_1 + rax_2 + 0x20)
            float zmm2[0x4] = arg7.d
            float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
            float temp0_2[0x4] = _mm_mul_ps(zmm0, temp0_1)
            arg5[0].o = _mm_mul_ps(arg5[0].o, temp0_1)
            float temp0_4[0x4] = _mm_mul_ps(zmm3, temp0_1)
            *(r10_1 + rcx_1 + 0x20) = temp0_2
            *(r10_1 + rcx_1 + 0x10) = arg5[0].o
            arg7.d = zmm4
            zmm6 = arg7.d
            *(r10_1 + rcx_1) = temp0_4
            int64_t rcx_2 = *rdi
            int64_t rax_3 = *arg2
            float temp0_5[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            arg5[0].o = *(r10_1 + rcx_2)
            float temp0_6[0x4] = _mm_mul_ps(*(r10_1 + rax_3), temp0_5)
            arg5[0].o = _mm_mul_ps(arg5[0].o, temp0_6)
            float temp0_8[0x4] = _mm_sub_ps(zx.o(0), temp0_6)
            float temp0_9[0x4] = _mm_shuffle_ps(arg5[0].o, arg5[0].o, 0x4e)
            arg5[0].o = _mm_add_ps(arg5[0].o, temp0_9)
            *(r10_1 + rcx_2) = __addps_xmmps_memps(
                _mm_and_ps(
                    _mm_cmpeq_ps(zx.o(0), 
                        _mm_add_ps(_mm_shuffle_ps(arg5[0].o, arg5[0].o, 0x39), arg5[0].o), 2), 
                    temp0_8 ^ temp0_6) ^ temp0_8, 
                *(r10_1 + rcx_2))
            *(r10_1 + rcx_2 + 0x10) = __addps_xmmps_memps(
                _mm_mul_ps(*(r10_1 + rax_3 + 0x10), temp0_5), *(r10_1 + rcx_2 + 0x10))
            arg5[0].o = *(r10_1 + rax_3 + 0x20)
            arg5[0].o = _mm_mul_ps(arg5[0].o, temp0_5)
            arg5[0].o = __addps_xmmps_memps(arg5[0].o, *(r10_1 + rcx_2 + 0x20))
            *(r10_1 + rcx_2 + 0x20) = arg5[0].o
        r11_1 = &r11_1[1]
        r10_1 = &r10_1[3]
        i = i_2
        i_2 -= 1
    while (i != 1)

sub_141e451a0(rdi, arg5)
uint64_t result = sub_141deea30(arg8, arg3)

if (arg4[1].d s> 0)
    int32_t* rdx_2 = nullptr
    
    do
        result = *arg4
        
        if (*(rdx_2 + result + 4) != 0)
            int64_t rcx_5 = *arg8
            result = zx.q(*(rdx_2 + result))
            *(rdx_2 + rcx_5) = result.d
            *(rdx_2 + rcx_5 + 4) = 1
        
        i_1 += 1
        rdx_2 = &rdx_2[2]
    while (i_1 s< arg4[1].d)

return result
