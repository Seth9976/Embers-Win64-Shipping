// 函数: sub_142088800
// 地址: 0x142088800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
uint128_t zmm7
uint128_t var_38 = zmm7
float zmm15[0x4] = arg4
float rax_1

if (*(arg1 + 0x40) != 0)
    int64_t* rax_24 = *(arg1 + 0x38)
    void* rbx_6 = rax_24[1]
    void* rdi_2 = rax_24[2]
    int128_t zmm0_6
    int512_t zmm7_1
    zmm0_6, zmm7_1 = sub_1420894a0(*rax_24, arg3, zmm15)
    zmm7_1.o = zmm0_6
    int128_t zmm0_7
    int512_t zmm6_1
    zmm0_7, zmm6_1 = sub_1420894a0(rbx_6, arg3, zmm15)
    zmm6_1.o = zmm0_7
    float zmm0_8
    zmm0_8, zmm6, zmm7 = sub_1420894a0(rdi_2, arg3, zmm15)
    rax_1 = zmm0_8
    *arg2 = (_mm_unpacklo_ps(zmm7, zmm6.q)).q
else
    int64_t rdx = sx.q(*(arg1 + 0x78))
    
    if (rdx.d != 0)
        int32_t* r8
        
        if (rdx.d s>= 2)
            r8 = *(arg1 + 0x70)
        
        uint64_t var_c8
        int64_t arg_8
        uint128_t zmm1
        
        if (rdx.d s< 2 || zmm15[0] f<= *r8)
            int64_t rax_7 = **(arg1 + 0xa0)
            arg_8 = rax_7
            int32_t rcx_8
            rcx_8.b = sub_140b5b8a0(rax_7.d, 0) == 0
            
            if ((arg_8:4.d != 0 | rcx_8.b) == 0 || arg3 == 0)
            label_142088d98:
                void* rax_23 = *(arg1 + 0x70)
                zmm1 = zx.o(*(rax_23 + 4))
                rax_1 = *(rax_23 + 0xc)
            else
                int64_t* rbx_2 = *(arg3 + 0x20)
                int64_t rdi_1
                
                if (rbx_2 == 0)
                    rdi_1 = 0
                else
                    int64_t rax_10 = (*(*rbx_2 + 0x260))(rbx_2)
                    rbx_2 = *(arg3 + 0x20)
                    rdi_1 = rax_10
                
                int64_t* rax_12 = sub_14208af70(rbx_2[4], sub_140b63b70(&arg_8, &var_c8))
                uint64_t rcx_12 = var_c8
                
                if (rcx_12 != 0)
                    sub_140a74f90(rcx_12)
                
                if (rdi_1 == 0 || rax_12 == 0)
                    goto label_142088d98
                
                if ((*(*rax_12 + 0x260))(rax_12) == 0)
                    goto label_142088d98
                
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
                
                void* rax_20 = *(rbx_5 + 0x130)
                int32_t var_c0_1
                uint128_t zmm0_5
                
                if (rax_20 == 0)
                    int32_t rax_21 = data_143dbb200
                    var_c8 = data_143dbb1f8.q
                    var_c0_1 = rax_21
                else
                    zmm1 = *(rax_20 + 0x1d0)
                    var_c8.d = zmm1.d
                    zmm0_5 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                    var_c0_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa).d
                    var_c8:4.d = zmm0_5.d
                
                uint128_t zmm2_3 = zx.o(var_c8)
                zmm1.d = zmm2_3.d
                rax_1 = var_c0_1.d
                _mm_shuffle_ps(zmm1, zmm1, 0xe1)
                zmm0_5.d = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x55).d
                zmm1 = _mm_shuffle_ps(zmm0_5, zmm0_5, 0xe1)
            
            *arg2 = zmm1.q
        else
            int32_t rbx_1
            
            if (not(zmm15[0] f>= r8[rdx * 0xb - 0xb]))
                rbx_1 = 1
            
            uint64_t var_f8
            float var_f0
            
            if (zmm15[0] f>= r8[rdx * 0xb - 0xb] || rdx.d s<= 1)
            label_1420888cf:
                sub_142093060(arg1, arg3, (rdx - 1).d, &arg_8, &var_f8, nullptr, nullptr)
                rax_1 = var_f0
                *arg2 = var_f8
            else
                int64_t rcx_1 = 1
                void* rax_2 = &r8[0xb]
                
                while (not(zmm15[0] f< *rax_2))
                    rbx_1 += 1
                    rcx_1 += 1
                    rax_2 += 0x2c
                    
                    if (rcx_1 s>= rdx)
                        goto label_1420888cf
                
                zmm1 = r8[sx.q(rbx_1) * 0xb - 0xb]
                zmm6.d = (*(sx.q(rbx_1) * 0x2c + r8)).d f- zmm1.d
                char rax_5
                
                if (not(zmm6.d f<= 0f))
                    rax_5 = r8[sx.q(rbx_1) * 0xb - 1].b
                
                if (zmm6.d f<= 0f || rax_5 == 2)
                    sub_142093060(arg1, arg3, rbx_1 - 1, &arg_8, &var_f8, nullptr, nullptr)
                    rax_1 = var_f0
                    *arg2 = var_f8
                else
                    zmm15[0] = zmm15[0] f- zmm1.d
                    int64_t* r9_2 = &arg_8
                    zmm15[0] = zmm15[0] f/ zmm6.d
                    int32_t var_e8
                    int32_t var_e4
                    float var_e0
                    
                    if (rax_5 != 0)
                        sub_142093060(arg1, arg3, rbx_1 - 1, r9_2, &var_c8, nullptr, &var_f8)
                        int32_t var_d8
                        zmm6 = sub_142093060(arg1, arg3, rbx_1, &arg_8, &var_d8, &var_e8, nullptr)
                        float zmm8[0x4] = var_d8
                        int128_t zmm12 = var_e8
                        int128_t zmm9 = var_f8.d
                        int128_t zmm10 = var_f8:4.d
                        zmm15[0] = zmm15[0] * zmm15[0]
                        zmm12.d = zmm12.d f* zmm6.d
                        int128_t zmm13
                        zmm13.d = var_e4.d f* zmm6.d
                        float zmm4_2 = zmm15[0] * zmm15[0]
                        zmm15[0] = zmm15[0] * 3f
                        int128_t zmm14
                        zmm14.d = var_e0.d f* zmm6.d
                        float zmm1_2 = zmm4_2 - zmm15[0]
                        zmm9.d = zmm9.d f* zmm6.d
                        zmm10.d = zmm10.d f* zmm6.d
                        zmm15[0] = zmm15[0] + zmm15[0]
                        int128_t zmm11
                        zmm11.d = var_f0.d f* zmm6.d
                        float zmm5_2 = zmm4_2 + zmm4_2
                        zmm4_2 = zmm4_2 - zmm15[0]
                        zmm12.d = zmm12.d f* zmm1_2
                        int32_t var_c0
                        float zmm2_2[0x4] = var_c0
                        zmm13.d = zmm13.d f* zmm1_2
                        zmm15[0] = zmm15[0] - zmm5_2
                        zmm14.d = zmm14.d f* zmm1_2
                        zmm1_2 = var_c8:4.d
                        zmm4_2 = zmm4_2 + zmm15[0]
                        zmm5_2 = zmm5_2 - zmm15[0]
                        zmm8[0] = zmm8[0] * zmm15[0]
                        int32_t var_d4
                        zmm7.d = var_d4.d f* zmm15[0]
                        zmm5_2 = zmm5_2 + 1f
                        int32_t var_d0
                        zmm6.d = var_d0.d f* zmm15[0]
                        float zmm0_3[0x4] = var_c8.d
                        zmm9.d = zmm9.d f* zmm4_2
                        zmm0_3[0] = zmm0_3[0] * zmm5_2
                        zmm11.d = zmm11.d f* zmm4_2
                        zmm9.d = zmm9.d f+ zmm0_3[0]
                        zmm2_2[0] = zmm2_2[0] * zmm5_2
                        zmm10.d = zmm10.d f* zmm4_2
                        zmm11.d = zmm11.d f+ zmm2_2[0]
                        zmm12.d = zmm12.d f+ zmm9.d
                        zmm10.d = zmm10.d f+ zmm1_2 * zmm5_2
                        zmm14.d = zmm14.d f+ zmm11.d
                        zmm8[0] = zmm8[0] f+ zmm12.d
                        zmm13.d = zmm13.d f+ zmm10.d
                        zmm6.d = zmm6.d f+ zmm14.d
                        zmm7.d = zmm7.d f+ zmm13.d
                        rax_1 = zmm6.d
                        *arg2 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
                    else
                        sub_142093060(arg1, arg3, rbx_1 - 1, r9_2, &var_e8, nullptr, nullptr)
                        sub_142093060(arg1, arg3, rbx_1, &arg_8, &var_f8, nullptr, nullptr)
                        float zmm5_1[0x4] = var_e8
                        float zmm0_2[0x4] = var_f0
                        int64_t zmm4_1 = var_e4
                        float zmm2_1 = var_f8.d
                        zmm0_2[0] = zmm0_2[0] - var_e0
                        zmm2_1 = zmm2_1 - zmm5_1[0]
                        float zmm1_1 = var_f8:4.d f- zmm4_1.d
                        zmm0_2[0] = zmm0_2[0] * zmm15[0]
                        float zmm3 = var_e0 + zmm0_2[0]
                        zmm1_1 = zmm1_1 * zmm15[0]
                        zmm5_1[0] = zmm5_1[0] + zmm2_1 * zmm15[0]
                        zmm4_1.d = zmm4_1.d f+ zmm1_1
                        rax_1 = zmm3
                        *arg2 = (_mm_unpacklo_ps(zmm5_1, zmm4_1)).q
    else
        rax_1 = data_143dbb200
        *arg2 = data_143dbb1f8.q

arg2[1].d = rax_1
return arg2
