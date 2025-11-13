// 函数: sub_141a81aa0
// 地址: 0x141a81aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg2
int32_t* rcx = *arg1
float zmm4[0x4] = *(arg2 + 4)
uint128_t zmm6 = *(arg2 + 8)
zmm5[0] = zmm5[0] f- *rcx
int64_t r13 = sx.q(arg1[1].d)
uint128_t zmm0
zmm0.d = zmm6.d f- rcx[2]
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
uint128_t zmm10
uint128_t var_78 = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
zmm5[0] = zmm5[0] * zmm5[0]
zmm4[0] = zmm4[0] f- rcx[1]
zmm0.d = zmm0.d f* zmm0.d
arg3[0] = arg3[0] * arg3[0]
zmm4[0] = zmm4[0] * zmm4[0]
zmm4[0] = zmm4[0] + zmm5[0]
zmm4[0] = zmm4[0] f+ zmm0.d
float result

if (zmm4[0] <= arg3[0])
    int64_t* r14_1 = (r13 - 1) * 0x38
    zmm4[0] = zmm4[0] f- *(r14_1 + rcx + 4)
    zmm5[0] = zmm5[0] f- *(r14_1 + rcx)
    zmm6.d = zmm6.d f- *(r14_1 + rcx + 8)
    zmm4[0] = zmm4[0] * zmm4[0]
    zmm5[0] = zmm5[0] * zmm5[0]
    zmm6.d = zmm6.d f* zmm6.d
    zmm4[0] = zmm4[0] + zmm5[0]
    zmm4[0] = zmm4[0] f+ zmm6.d
    
    if (_mm_sqrt_ss(zx.o(0).d, zmm4[0]).d f<= arg4[0])
        result.b = 0
    else
        int32_t rdi_1 = 0
        *(r14_1 + rcx) = *arg2
        *(r14_1 + rcx + 8) = *(arg2 + 8)
        int64_t r8_1 = *arg1
        int32_t* r9_1 = (r13 - 2) * 0x38
        float zmm1[0x4]
        
        do
            int32_t rax_1 = rdi_1
            rdi_1 += 1
            
            if (rax_1 s>= arg5)
                break
            
            int64_t i = r13 - 2
            
            if (r13 - 2 s> 0)
                zmm11 = zx.o(0)
                zmm11[0] = 0x3f000000
                int32_t* rdx = r9_1
                
                do
                    uint128_t* rcx_2 = *arg1
                    i -= 1
                    zmm10.d = (*(rcx_2 + rdx)).d f- *(rcx_2 + rdx + 0x38)
                    zmm9 = *(rcx_2 + rdx + 4)
                    zmm9[0] = zmm9[0] f- *(rcx_2 + rdx + 0x3c)
                    zmm8 = *(rcx_2 + rdx + 8)
                    zmm8[0] = zmm8[0] f- *(rcx_2 + rdx + 0x40)
                    zmm0.d = zmm10.d f* zmm10.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm9[0] = zmm9[0] f+ zmm0.d
                    zmm9[0] = zmm9[0] + zmm8[0]
                    float temp0_4[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
                    zmm9[0] = zmm9[0] * 0.5f
                    zmm0.d = temp0_4.d f* temp0_4[0]
                    zmm9[0] = zmm9[0] f* zmm0.d
                    zmm11[0] = zmm11[0] - zmm9[0]
                    zmm0.d = temp0_4.d f* zmm11[0]
                    temp0_4[0] = temp0_4[0] f+ zmm0.d
                    temp0_4[0] = temp0_4[0] * temp0_4[0]
                    zmm9[0] = zmm9[0] * temp0_4[0]
                    zmm0.d = zmm11.d f- zmm9[0]
                    temp0_4[0] = temp0_4[0] f* zmm0.d
                    zmm0 = *(rcx_2 + rdx + 0x44)
                    temp0_4[0] = temp0_4[0] + temp0_4[0]
                    zmm10.d = zmm10.d f* temp0_4[0]
                    zmm9[0] = zmm9[0] * temp0_4[0]
                    zmm10.d = zmm10.d f* zmm0.d
                    zmm9[0] = zmm9[0] f* zmm0.d
                    zmm10.d = zmm10.d f+ *(rcx_2 + rdx + 0x38)
                    zmm8[0] = zmm8[0] * temp0_4[0]
                    zmm9[0] = zmm9[0] f+ *(rcx_2 + rdx + 0x3c)
                    zmm8[0] = zmm8[0] f* zmm0.d
                    zmm0 = _mm_unpacklo_ps(zmm10, zmm9[0].q)
                    zmm8[0] = zmm8[0] f+ *(rcx_2 + rdx + 0x40)
                    *(rcx_2 + rdx) = zmm0.q
                    *(rcx_2 + rdx + 8) = zmm8[0]
                    rdx -= 0x38
                while (i s> 0)
            
            int64_t i_1 = 1
            
            if (1 s< r13 - 1)
                zmm11 = zx.o(0)
                zmm11[0] = 0x3f000000
                int64_t rdx_1 = 0x38
                
                do
                    uint128_t* rcx_3 = *arg1
                    i_1 += 1
                    zmm10.d = (*(rcx_3 + rdx_1)).d f- *(rcx_3 + rdx_1 - 0x38)
                    zmm9 = *(rcx_3 + rdx_1 + 4)
                    zmm9[0] = zmm9[0] f- *(rcx_3 + rdx_1 - 0x34)
                    zmm8 = *(rcx_3 + rdx_1 + 8)
                    zmm8[0] = zmm8[0] f- *(rcx_3 + rdx_1 - 0x30)
                    zmm0.d = zmm10.d f* zmm10.d
                    zmm9[0] = zmm9[0] * zmm9[0]
                    zmm8[0] = zmm8[0] * zmm8[0]
                    zmm9[0] = zmm9[0] f+ zmm0.d
                    zmm9[0] = zmm9[0] + zmm8[0]
                    float temp0_6[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
                    zmm9[0] = zmm9[0] * 0.5f
                    zmm0.d = temp0_6.d f* temp0_6[0]
                    zmm9[0] = zmm9[0] f* zmm0.d
                    zmm11[0] = zmm11[0] - zmm9[0]
                    zmm0.d = temp0_6.d f* zmm11[0]
                    temp0_6[0] = temp0_6[0] f+ zmm0.d
                    temp0_6[0] = temp0_6[0] * temp0_6[0]
                    zmm9[0] = zmm9[0] * temp0_6[0]
                    zmm0.d = zmm11.d f- zmm9[0]
                    temp0_6[0] = temp0_6[0] f* zmm0.d
                    zmm0 = *(rcx_3 + rdx_1 + 0xc)
                    temp0_6[0] = temp0_6[0] + temp0_6[0]
                    zmm10.d = zmm10.d f* temp0_6[0]
                    zmm9[0] = zmm9[0] * temp0_6[0]
                    zmm10.d = zmm10.d f* zmm0.d
                    zmm9[0] = zmm9[0] f* zmm0.d
                    zmm10.d = zmm10.d f+ *(rcx_3 + rdx_1 - 0x38)
                    zmm8[0] = zmm8[0] * temp0_6[0]
                    zmm9[0] = zmm9[0] f+ *(rcx_3 + rdx_1 - 0x34)
                    zmm8[0] = zmm8[0] f* zmm0.d
                    zmm0 = _mm_unpacklo_ps(zmm10, zmm9[0].q)
                    zmm8[0] = zmm8[0] f+ *(rcx_3 + rdx_1 - 0x30)
                    *(rcx_3 + rdx_1) = zmm0.q
                    *(rcx_3 + rdx_1 + 8) = zmm8[0]
                    rdx_1 += 0x38
                while (i_1 s< r13 - 1)
            
            r8_1 = *arg1
            zmm1 = *arg2
            zmm0 = *(arg2 + 8)
            arg3 = *(arg2 + 4)
            zmm1[0] = zmm1[0] f- *(r9_1 + r8_1)
            arg3[0] = arg3[0] f- *(r9_1 + r8_1 + 4)
            zmm0.d = zmm0.d f- *(r9_1 + r8_1 + 8)
            zmm1[0] = zmm1[0] * zmm1[0]
            zmm0.d = zmm0.d f* zmm0.d
            arg3[0] = arg3[0] * arg3[0]
            arg3[0] = arg3[0] + zmm1[0]
            zmm1 = *(r8_1 + r14_1 + 0xc)
            arg3[0] = arg3[0] f+ zmm0.d
            zmm0 = _mm_sqrt_ss(0, arg3[0])
            zmm1[0] = zmm1[0] f- zmm0.d
            zmm1 = _mm_and_ps(zmm1, 0x7fffffff)
        while (zmm1[0] > arg4[0])
        zmm4 = zx.o(0)
        zmm4[0] = 0x3f000000
        uint64_t* rdx_3 = (r13 - 1) * 0x38 + r8_1
        int32_t* rcx_5 = (r13 - 2) * 0x38 + r8_1
        zmm6.d = (*rdx_3).d f- *rcx_5
        zmm7 = *(rdx_3 + 4)
        zmm7[0] = zmm7[0] f- rcx_5[1]
        zmm9 = rdx_3[1].d
        zmm9[0] = zmm9[0] f- rcx_5[2]
        zmm0.d = zmm6.d f* zmm6.d
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm9[0] = zmm9[0] * zmm9[0]
        zmm7[0] = zmm7[0] f+ zmm0.d
        zmm7[0] = zmm7[0] + zmm9[0]
        float temp0_10[0x4] = _mm_rsqrt_ss(zmm7[0], zmm7[0])
        zmm7[0] = zmm7[0] * 0.5f
        zmm0.d = temp0_10.d f* temp0_10[0]
        zmm7[0] = zmm7[0] f* zmm0.d
        zmm4[0] = zmm4[0] - zmm7[0]
        zmm0.d = temp0_10.d f* zmm4[0]
        arg3 = *(rdx_3 + 0xc)
        temp0_10[0] = temp0_10[0] f+ zmm0.d
        temp0_10[0] = temp0_10[0] * temp0_10[0]
        zmm7[0] = zmm7[0] * temp0_10[0]
        zmm4[0] = 0.5f - zmm7[0]
        zmm0.d = temp0_10.d f* zmm4[0]
        temp0_10[0] = temp0_10[0] f+ zmm0.d
        zmm0.d = temp0_10.d f* zmm6.d
        temp0_10[0] = temp0_10[0] * zmm7[0]
        temp0_10[0] = temp0_10[0] * zmm9[0]
        zmm0.d = zmm0.d f* arg3[0]
        temp0_10[0] = temp0_10[0] * arg3[0]
        zmm0.d = zmm0.d f+ *rcx_5
        temp0_10[0] = temp0_10[0] * arg3[0]
        temp0_10[0] = temp0_10[0] f+ rcx_5[1]
        temp0_10[0] = temp0_10[0] f+ rcx_5[2]
        *rdx_3 = (_mm_unpacklo_ps(zmm0, temp0_10[0].q)).q
        rdx_3[1].d = temp0_10[0]
        result.b = 1
else
    if (r13 s> 1)
        int64_t i_3 = r13 - 1
        int64_t rbx_1 = 0x38
        int64_t i_2
        
        do
            uint64_t* rcx_1 = *arg1
            zmm9 = *(arg2 + 4)
            zmm8 = *(arg2 + 8)
            zmm10.d = (*arg2).d f- *(rcx_1 + rbx_1 - 0x38)
            zmm9[0] = zmm9[0] f- *(rcx_1 + rbx_1 - 0x34)
            zmm8[0] = zmm8[0] f- *(rcx_1 + rbx_1 - 0x30)
            zmm0.d = zmm10.d f* zmm10.d
            zmm9[0] = zmm9[0] * zmm9[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm9[0] = zmm9[0] f+ zmm0.d
            zmm9[0] = zmm9[0] + zmm8[0]
            float temp0_1[0x4] = _mm_rsqrt_ss(zmm9[0], zmm9[0])
            arg3 = 0x3f000000
            zmm9[0] = zmm9[0] * 0.5f
            zmm0.d = temp0_1.d f* temp0_1[0]
            zmm9[0] = zmm9[0] f* zmm0.d
            arg3[0] = 0.5f - zmm9[0]
            zmm0.d = temp0_1.d f* arg3[0]
            temp0_1[0] = temp0_1[0] f+ zmm0.d
            temp0_1[0] = temp0_1[0] * temp0_1[0]
            zmm9[0] = zmm9[0] * temp0_1[0]
            zmm0.d = 0.5f - zmm9[0]
            temp0_1[0] = temp0_1[0] f* zmm0.d
            zmm0 = *(rcx_1 + rbx_1 + 0xc)
            temp0_1[0] = temp0_1[0] + temp0_1[0]
            zmm10.d = zmm10.d f* temp0_1[0]
            zmm9[0] = zmm9[0] * temp0_1[0]
            zmm10.d = zmm10.d f* zmm0.d
            zmm9[0] = zmm9[0] f* zmm0.d
            zmm10.d = zmm10.d f+ *(rcx_1 + rbx_1 - 0x38)
            zmm8[0] = zmm8[0] * temp0_1[0]
            zmm9[0] = zmm9[0] f+ *(rcx_1 + rbx_1 - 0x34)
            zmm8[0] = zmm8[0] f* zmm0.d
            zmm0 = _mm_unpacklo_ps(zmm10, zmm9[0].q)
            zmm8[0] = zmm8[0] f+ *(rcx_1 + rbx_1 - 0x30)
            *(rcx_1 + rbx_1) = zmm0.q
            *(rcx_1 + rbx_1 + 8) = zmm8[0]
            rbx_1 += 0x38
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    result.b = 1

return result
