// 函数: sub_141299520
// 地址: 0x141299520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *(arg1 + 8)
int64_t* r13 = arg3
void* rsi = *(arg1 + (sx.q(arg4) << 3) + 0xfa0)

if (rsi != 0)
    float temp0_1[0x4] = __mulps_xmmps_memps(*(*(rsi + 0x20) + 0x30), data_142d3f630)
    *arg7 = temp0_1
    int64_t* rcx = *(rsi + 0x20)
    float var_d8[0x4] = temp0_1
    float zmm0[0x4]
    int128_t zmm1
    
    if ((*(rcx + 0x13a) & 1) != 0)
        int32_t* rax_3 = (*(*rcx + 0x110))(rcx, &var_d8)
        zmm0 = *arg7
        rcx = *(rsi + 0x20)
        zmm0[0] = zmm0[0] f* *rax_3
        *arg7 = zmm0[0]
        zmm1.d = rax_3[1].d f* (*arg7)[1]
        (*arg7)[1] = zmm1.d
        zmm0 = rax_3[2]
        zmm0[0] = zmm0[0] * (*arg7)[2]
        (*arg7)[2] = zmm0[0]
        zmm1.d = rax_3[3].d f* (*arg7)[3]
        (*arg7)[3] = zmm1.d
    
    zmm1 = rcx[0xc].d
    float zmm3[0x4] = rcx[8].d ^ 0x80000000
    zmm0 = rcx[0xa].d ^ 0x80000000
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    temp0_2[0] = zmm0[0]
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
    temp0_3[0] = (zmm1 ^ 0x80000000).d
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
    temp0_4[0] = 0
    arg7[1] = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
    int64_t* rbx_1 = *(rsi + 0x20)
    int32_t arg_8
    (*(*rbx_1 + 0x70))(rbx_1, &arg_8, zx.q(r15), zx.q(sub_14122cc00(rsi)), arg2[0x4f].d)
    zmm0 = arg5
    zmm1 = arg_8
    arg7[3][0] = zmm0[0]
    zmm1.d = zmm1.d f* zmm0[0]
    (*arg7)[0xd] = (zmm1 ^ 0x80000000).d
    (*arg7)[0xe] = *(*(rsi + 0x20) + 0xe4)
    
    if (arg6 != 0)
        int64_t rax_7 = sx.q(*(rsi + 0x28))
        
        if (rax_7.d s>= 0 && rax_7.d s< r13[1].d)
            int64_t r15_1 = rax_7 * 0x70
            int64_t r12_1 = *r13
            
            if (*(r15_1 + r12_1 + 0x18) s> 0)
                void* rbx_2 = **(r15_1 + r12_1 + 0x10)
                int64_t* rcx_4 = *(rbx_2 + 0x38)
                
                if (rcx_4 == 0)
                    rcx_4 = **(rbx_2 + 0x28)
                
                int64_t rcx_5 = *((*(*rcx_4 + 0x10))(rcx_4) + 0x14)
                uint128_t zmm10 = _mm_cvtepi32_ps(zx.o(rcx_5.d))
                void* rax_14 = *(rbx_2 + 0x38)
                uint128_t zmm7 = _mm_cvtepi32_ps(zx.o((rcx_5 u>> 0x20).d))
                arg7[0x15][0].q = *(rax_14 + 0x10)
                int128_t zmm8
                zmm8.d = 1f f/ zmm10.d
                int128_t zmm9
                zmm9.d = 1f f/ zmm7.d
                float zmm0_1 = sub_1414823c0(rbx_2)
                int32_t rcx_7 = 4
                _mm_shuffle_ps(zmm10, zmm10, 0xe1)
                zmm10.d = zmm7.d
                _mm_shuffle_ps(zmm10, zmm10, 0xc6)
                zmm10.d = zmm8.d
                _mm_shuffle_ps(zmm10, zmm10, 0x27)
                zmm10.d = zmm9.d
                int128_t zmm6
                zmm6.d = 1f / zmm0_1
                arg7[2] = _mm_shuffle_ps(zmm10, zmm10, 0x39)
                (*arg7)[7] = zmm6.d
                
                if (*(r15_1 + r12_1 + 0x18) s<= 4)
                    rcx_7 = *(r15_1 + r12_1 + 0x18)
                
                if (rcx_7 s> 0)
                    float* r14_1 = &arg7[4]
                    float* rdi_2 = &arg7[5]
                    int64_t i = 0
                    
                    do
                        void* rbx_3 = *(*(r15_1 + r12_1 + 0x10) + (i << 3))
                        float var_c8[0x4]
                        sub_14148bee0(rbx_3, &var_c8, arg2, *(rbx_3 + 0x540), *(rbx_3 + 0x544), 
                            *(rbx_3 + 0x548), *(rbx_3 + 0x54c))
                        r14_1 = &r14_1[1]
                        i += 1
                        *rdi_2 = var_c8
                        int128_t var_b8
                        *(rdi_2 + 0x10) = var_b8
                        float var_a8[0x4]
                        *(rdi_2 + 0x20) = var_a8
                        int128_t var_98
                        *(rdi_2 + 0x30) = var_98
                        rdi_2 = &rdi_2[0x10]
                        r14_1[-1] = *(rbx_3 + 0x3d4)
                    while (i s< sx.q(rcx_7))
                    
                    r13 = arg3

return sub_14125cd60(r13) __tailcall
