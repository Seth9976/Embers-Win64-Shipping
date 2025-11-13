// 函数: sub_140ad01c0
// 地址: 0x140ad01c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = arg1
uint128_t zmm4 = arg3
uint128_t zmm6 = arg2
int32_t rdx = *arg7
int32_t r11 = *arg8
uint128_t zmm3
zmm3.d = arg2.d f* zmm6.d
arg1 = _mm_cvtepi32_ps(zx.o(rdx))
zmm5[0] = zmm5[0] * zmm5[0]
int32_t arg_8 = arg1.d
arg1.d = zmm4.d f* zmm4.d
int128_t zmm15 = arg6
zmm5[0] = zmm5[0] f- arg1.d
uint128_t zmm14 = _mm_cvtepi32_ps(zx.o(r11 - rdx))
zmm5[0] = zmm5[0] f+ zmm3.d
zmm5[0] = zmm5[0] f* zmm3.d

if (not(zmm5[0] < 0f))
    zmm3.d = zmm3.d f+ zmm5[0]
    arg3 = 0x3f800000
    float temp0_2[0x4] = _mm_sqrt_ss(zmm5[0], zmm5[0])
    arg1.d = 1f f/ zmm3.d
    uint128_t zmm7
    zmm7.d = zmm5.d f* zmm4.d
    arg3[0] = 1f f/ zmm6.d
    uint128_t zmm9
    zmm9.d = zmm7.d f- temp0_2[0]
    zmm7.d = zmm7.d f+ temp0_2[0]
    zmm9.d = zmm9.d f* arg1.d
    zmm7.d = zmm7.d f* arg1.d
    arg1.d = zmm9.d f* zmm5[0]
    zmm3.d = zmm4.d f- arg1.d
    arg1.d = zmm7.d f* zmm5[0]
    uint128_t zmm10
    zmm10.d = zmm4.d f- arg1.d
    zmm3.d = zmm3.d f* arg3[0]
    zmm10.d = zmm10.d f* arg3[0]
    arg1.d = zmm3.d f* zmm4.d
    arg2 = zmm10
    arg2[0] = arg2[0] f* zmm4.d
    uint128_t zmm13
    zmm13.d = zmm6.d f- arg1.d
    zmm6.d = zmm6.d f- arg2[0]
    arg2 = 0x80000000
    int32_t rax_1
    
    if (zmm13.d f<= 0f)
        zmm9 = arg_8
    else
        zmm5 = *arg5
        zmm4 = *(arg5 + 4)
        arg1.d = zmm13.d f* zmm3.d
        arg3 = zmm4
        int32_t var_bc_1 = 0x3f800000
        int32_t arg_18 = zmm9.d
        arg1.d = arg1.d f/ zmm9.d
        zmm9 = arg_8
        arg1 ^= 0x80000000
        zmm5[0] = zmm5[0] f* arg1.d
        arg3[0] = arg3[0] f* arg1.d
        rax_1.b = arg_18 u>= 0x80000000
        zmm3.d = zmm5[0]
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = arg3[0]
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm13.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        uint128_t var_c8 = zmm3
        float temp0_7[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg4[3])
        arg1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), arg4[2])
        float temp0_11[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), arg4[1])
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_16[0x4] = _mm_add_ps(_mm_add_ps(temp0_7, arg1), 
            _mm_add_ps(temp0_11, __mulps_xmmps_memps(zmm3, *arg4)))
        arg2 = *(arg5 + 8)
        zmm5[0] = zmm5[0] * temp0_16[0]
        zmm4.d = zmm4.d f* _mm_shuffle_ps(temp0_16, temp0_16, 0x55).d
        arg1 = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
        arg2[0] = arg2[0] f* arg1.d
        float temp0_19[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xff)
        zmm5[0] = zmm5[0] f+ zmm4.d
        arg1.d = zmm14.d f+ zmm14.d
        zmm5[0] = zmm5[0] + arg2[0]
        arg2 = 0x80000000
        zmm5[0] = zmm5[0] / temp0_19[0]
        zmm5[0] = zmm5[0] f+ zmm15.d
        zmm5[0] = zmm5[0] * 0.5f
        zmm5[0] = zmm5[0] f* zmm15.d
        zmm5[0] = zmm5[0] f* arg1.d
        zmm5[0] = zmm5[0] f+ zmm9.d
        zmm5[0] = zmm5[0] f+ zmm9.d
        
        if (zmm15.d u>= 0x80000000 == rax_1.b)
            zmm5[0] = zmm5[0] - 0.5f
            rax_1 = int.d(zmm5[0]) s>> 1
            
            if (rax_1 s>= rdx)
                rdx = rax_1
            
            *arg7 = rdx
        else
            arg1.d = -0.5f - zmm5[0]
            rax_1 = neg.d(int.d(arg1.d) s>> 1)
            
            if (rax_1 s<= r11)
                r11 = rax_1
            
            *arg8 = r11
    
    if (not(zmm6.d f<= 0f))
        zmm5 = *arg5
        zmm14.d = zmm14.d f+ zmm14.d
        zmm4 = *(arg5 + 4)
        arg1.d = zmm6.d f* zmm10.d
        arg3 = zmm4
        int32_t var_bc_2 = 0x3f800000
        arg1.d = arg1.d f/ zmm7.d
        arg1 ^= arg2
        arg3[0] = arg3[0] f* arg1.d
        rax_1.b = zmm7.d u>= 0x80000000
        zmm5[0] = zmm5[0] f* arg1.d
        zmm3.d = zmm5[0]
        _mm_shuffle_ps(zmm3, zmm3, 0xe1)
        zmm3.d = arg3[0]
        _mm_shuffle_ps(zmm3, zmm3, 0xc6)
        zmm3.d = zmm6.d
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xc9)
        float temp0_24[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xff), arg4[3])
        float temp0_26[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0x55), arg4[1])
        arg1 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0xaa), arg4[2])
        zmm3 = __mulps_xmmps_memps(_mm_shuffle_ps(zmm3, zmm3, 0), *arg4)
        float temp0_33[0x4] = _mm_add_ps(_mm_add_ps(temp0_24, arg1), _mm_add_ps(temp0_26, zmm3))
        zmm3.d = _mm_shuffle_ps(temp0_33, temp0_33, 0x55).d f* zmm4.d
        float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xaa)
        temp0_35[0] = temp0_35[0] f* *(arg5 + 8)
        arg1.d = temp0_33.d f* zmm5[0]
        float temp0_36[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xff)
        zmm3.d = zmm3.d f+ arg1.d
        zmm3.d = zmm3.d f+ temp0_35[0]
        zmm3.d = zmm3.d f/ temp0_36[0]
        zmm3.d = zmm3.d f+ zmm15.d
        zmm3.d = zmm3.d f* 0.5f
        zmm3.d = zmm3.d f* zmm15.d
        zmm3.d = zmm3.d f* zmm14.d
        zmm3.d = zmm3.d f+ zmm9.d
        zmm3.d = zmm3.d f+ zmm9.d
        
        if (zmm15.d u>= 0x80000000 == rax_1.b)
            int32_t rax_6 = *arg7
            zmm3.d = zmm3.d f- 0.5f
            int32_t rcx_5 = int.d(zmm3.d) s>> 1
            
            if (rcx_5 s>= rax_6)
                rax_6 = rcx_5
            
            *arg7 = rax_6
        else
            int32_t rax_5 = *arg8
            int128_t zmm8
            zmm8.d = -0.5f f- zmm3.d
            int32_t rcx_3 = neg.d(int.d(zmm8.d) s>> 1)
            
            if (rcx_3 s<= rax_5)
                rax_5 = rcx_3
            
            *arg8 = rax_5

int32_t result
result.b = *arg7 s< *arg8
return result
