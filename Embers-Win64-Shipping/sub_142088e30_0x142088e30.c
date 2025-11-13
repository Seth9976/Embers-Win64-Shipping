// 函数: sub_142088e30
// 地址: 0x142088e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7

if (*(arg1 + 0x40) != 0)
    void* rax_27 = *(arg1 + 0x38)
    void* rbx_7 = *(rax_27 + 0x20)
    void* rdi_2 = *(rax_27 + 0x28)
    int128_t zmm0_5
    int512_t zmm7_1
    zmm0_5, zmm7_1 = sub_1420894a0(*(rax_27 + 0x18), arg3, arg4)
    zmm7_1.o = zmm0_5
    int128_t zmm0_6
    int512_t zmm6_1
    zmm0_6, zmm6_1 = sub_1420894a0(rbx_7, arg3, arg4)
    zmm6_1.o = zmm0_6
    float zmm0_7
    zmm0_7, zmm6, zmm7 = sub_1420894a0(rdi_2, arg3, arg4)
    *arg2 = (_mm_unpacklo_ps(zmm7, zmm6[0].q)).q
    arg2[1].d = zmm0_7
else
    int64_t rdx = sx.q(*(arg1 + 0x90))
    float rax_1
    
    if (rdx.d != 0)
        int32_t* r8
        
        if (rdx.d s>= 2)
            r8 = *(arg1 + 0x88)
        
        uint64_t var_118
        float var_108
        int32_t var_f8
        int64_t var_e8
        int64_t arg_8
        
        if (rdx.d s< 2 || arg4[0] f<= *r8)
            int64_t rax_7 = **(arg1 + 0xa0)
            arg_8 = rax_7
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(rax_7.d, 0) == 0
            
            if ((arg_8:4.d != 0 | rcx_8.b) == 0 || arg3 == 0)
            label_142089405:
                void* rax_26 = *(arg1 + 0x88)
                int32_t rcx_20 = *(rax_26 + 0xc)
                *arg2 = *(rax_26 + 4)
                arg2[1].d = rcx_20
            else
                int64_t* rbx_2 = *(arg3 + 0x20)
                int64_t rdi_1
                
                if (rbx_2 == 0)
                    rdi_1 = 0
                else
                    int64_t rax_10 = (*(*rbx_2 + 0x260))(rbx_2)
                    rbx_2 = *(arg3 + 0x20)
                    rdi_1 = rax_10
                
                int64_t* rax_12 = sub_14208af70(rbx_2[4], sub_140b63b70(&arg_8, &var_e8))
                int64_t rcx_12 = var_e8
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                if (rdi_1 == 0 || rax_12 == 0)
                    goto label_142089405
                
                if ((*(*rax_12 + 0x260))(rax_12) == 0)
                    goto label_142089405
                
                void* rax_16 = (*(*rax_12 + 0x260))(rax_12)
                void* rbx_5 = rax_16
                
                if (rax_16 != 0)
                    void* rax_17 = sub_14256a090()
                    void* rcx_15 = *(rbx_5 + 0x10)
                    int64_t rdx_9 = sx.q(*(rax_17 + 0x38))
                    
                    if (rdx_9.d s<= *(rcx_15 + 0x38)
                            && *(*(rcx_15 + 0x30) + (rdx_9 << 3)) == rax_17 + 0x30)
                        void* rax_19 = *(rbx_5 + 0x250)
                        
                        if (rax_19 != 0)
                            rbx_5 = rax_19
                
                void* rbx_6 = *(rbx_5 + 0x130)
                int32_t rax_23
                uint128_t zmm0
                
                if (rbx_6 == 0)
                    zmm0 = zx.o(data_143dbb208)
                    rax_23 = data_143dbb210
                else
                    float zmm1_3[0x4] = *(rbx_6 + 0x1c0)
                    uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_6 + 0x180), zmm1_3, 4))
                    float var_d8[0x4] = zmm1_3
                    
                    if (temp0_4 != 0)
                        *(rbx_6 + 0x180) = zmm1_3
                        int32_t* rax_21 = sub_140adf5d0(&var_d8, &var_108)
                        *(rbx_6 + 0x190) = *rax_21
                        *(rbx_6 + 0x198) = rax_21[2]
                    
                    zmm0 = zx.o(*(rbx_6 + 0x190))
                    rax_23 = *(rbx_6 + 0x198)
                
                var_e8 = zmm0.q
                var_f8.q = var_e8
                int32_t var_f0_1 = rax_23
                int32_t* rax_25 = sub_140ad3dc0(&var_f8, &var_118)
                int32_t rcx_19 = rax_25[2]
                *arg2 = *rax_25
                arg2[1].d = rcx_19
        else
            int32_t rbx_1
            
            if (not(arg4[0] f>= r8[rdx * 0xb - 0xb]))
                rbx_1 = 1
            
            float var_110
            
            if (arg4[0] f>= r8[rdx * 0xb - 0xb] || rdx.d s<= 1)
            label_142088efc:
                sub_142093410(arg1, arg3, (rdx - 1).d, &arg_8, &var_118, nullptr, nullptr)
                rax_1 = var_110
                *arg2 = var_118
            else
                int64_t rcx_1 = 1
                void* rax_2 = &r8[0xb]
                
                while (not(arg4[0] f< *rax_2))
                    rbx_1 += 1
                    rcx_1 += 1
                    rax_2 += 0x2c
                    
                    if (rcx_1 s>= rdx)
                        goto label_142088efc
                
                int32_t zmm1 = r8[sx.q(rbx_1) * 0xb - 0xb]
                zmm6 = *(sx.q(rbx_1) * 0x2c + r8)
                zmm6[0] = zmm6[0] f- zmm1
                char rax_5
                
                if (not(zmm6[0] <= 0f))
                    rax_5 = r8[sx.q(rbx_1) * 0xb - 1].b
                
                if (zmm6[0] <= 0f || rax_5 == 2)
                    sub_142093410(arg1, arg3, rbx_1 - 1, &arg_8, &var_118, nullptr, nullptr)
                    rax_1 = var_110
                    *arg2 = var_118
                else
                    arg4[0] = arg4[0] f- zmm1
                    int32_t* r9_2 = &arg_8
                    arg4[0] = arg4[0] / zmm6[0]
                    float arg_20 = arg4[0]
                    float var_104
                    float var_100
                    
                    if (rax_5 != 0)
                        sub_142093410(arg1, arg3, rbx_1 - 1, r9_2, &var_e8, nullptr, &var_118)
                        zmm6 = sub_142093410(arg1, arg3, rbx_1, &arg_8, &var_f8, &var_108, nullptr)
                        float zmm3_1 = var_108
                        zmm7 = var_118.d
                        float zmm8_1 = var_118:4.d
                        arg4[0] = arg4[0] * arg4[0]
                        zmm3_1 = zmm3_1 * zmm6[0]
                        float zmm4_2 = var_104 * zmm6[0]
                        arg4[0] = arg4[0] * arg4[0]
                        arg4[0] = arg4[0] * 3f
                        float zmm10[0x4] = var_f8
                        arg4[0] = arg4[0] - arg4[0]
                        float zmm5_2 = var_100 * zmm6[0]
                        zmm7[0] = zmm7[0] * zmm6[0]
                        arg4[0] = arg4[0] + arg4[0]
                        zmm8_1 = zmm8_1 * zmm6[0]
                        float zmm9_1 = var_110 * zmm6[0]
                        arg4[0] = arg4[0] * zmm4_2
                        arg4[0] = arg4[0] + arg4[0]
                        arg4[0] = arg4[0] - arg4[0]
                        float zmm1_2[0x4] = var_e8:4.d
                        arg4[0] = arg4[0] - arg4[0]
                        arg4[0] = arg4[0] + arg_20
                        arg4[0] = arg4[0] - arg4[0]
                        int32_t var_e0
                        float zmm2_2[0x4] = var_e0
                        zmm10[0] = zmm10[0] * arg4[0]
                        zmm4_2 = arg4[0]
                        int32_t var_f4
                        int128_t zmm14
                        zmm14.d = var_f4.d f* arg4[0]
                        arg4[0] = arg4[0] + 1f
                        arg_8.d = zmm10[0]
                        arg4[0] = arg4[0] * zmm3_1
                        int32_t var_f0
                        int128_t zmm13
                        zmm13.d = var_f0.d f* arg4[0]
                        float zmm0_3[0x4] = var_e8.d
                        zmm3_1 = arg4[0] * zmm7[0]
                        arg4[0] = arg4[0] * zmm9_1
                        zmm0_3[0] = zmm0_3[0] * arg4[0]
                        zmm1_2[0] = zmm1_2[0] * arg4[0]
                        zmm2_2[0] = zmm2_2[0] * arg4[0]
                        zmm3_1 = zmm3_1 + zmm0_3[0]
                        zmm4_2 = zmm4_2 * zmm8_1 + zmm1_2[0]
                        arg4[0] = arg4[0] * zmm5_2
                        arg4[0] = arg4[0] + zmm2_2[0]
                        arg4[0] = arg4[0] + zmm3_1
                        arg4[0] = arg4[0] + zmm4_2
                        arg4[0] = arg4[0] + arg4[0]
                        zmm0_3 = arg_8.d
                        zmm14.d = zmm14.d f+ arg4[0]
                        zmm13.d = zmm13.d f+ arg4[0]
                        zmm0_3[0] = zmm0_3[0] + arg4[0]
                        rax_1 = zmm13.d
                        *arg2 = (_mm_unpacklo_ps(zmm0_3, zmm14.q)).q
                    else
                        sub_142093410(arg1, arg3, rbx_1 - 1, r9_2, &var_108, nullptr, nullptr)
                        sub_142093410(arg1, arg3, rbx_1, &arg_8, &var_118, nullptr, nullptr)
                        float zmm5_1[0x4] = var_108
                        float zmm0_2[0x4] = var_110
                        int64_t zmm4_1 = var_104
                        float zmm2_1 = var_118.d
                        zmm0_2[0] = zmm0_2[0] - var_100
                        zmm2_1 = zmm2_1 - zmm5_1[0]
                        float zmm1_1 = var_118:4.d f- zmm4_1.d
                        zmm0_2[0] = zmm0_2[0] * arg4[0]
                        float zmm3 = var_100 + zmm0_2[0]
                        zmm1_1 = zmm1_1 * arg4[0]
                        zmm5_1[0] = zmm5_1[0] + zmm2_1 * arg4[0]
                        zmm4_1.d = zmm4_1.d f+ zmm1_1
                        rax_1 = zmm3
                        *arg2 = (_mm_unpacklo_ps(zmm5_1, zmm4_1)).q
            arg2[1].d = rax_1
    else
        rax_1 = data_143dbb200
        *arg2 = data_143dbb1f8.q
        arg2[1].d = rax_1

return arg2
