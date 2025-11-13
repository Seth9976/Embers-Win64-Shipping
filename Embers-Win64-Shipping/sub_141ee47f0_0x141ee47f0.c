// 函数: sub_141ee47f0
// 地址: 0x141ee47f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x168)

if (result != 0)
    int64_t r13_1 = *(result + 0x78)
    
    if (r13_1 != 0)
        int32_t i = 0
        
        if (arg2[1].d s> 0)
            int32_t rsi_1 = 1
            int64_t* r14_1 = nullptr
            float zmm6[0x4]
            float var_38_1[0x4] = zmm6
            int128_t zmm7
            int128_t var_48_1 = zmm7
            int128_t zmm8
            int128_t var_58_1 = zmm8
            int128_t zmm9
            int128_t var_68_1 = zmm9
            
            do
                if ((arg4 & rsi_1) != 0)
                    zmm8 = *(arg1 + 0x15c)
                    zmm9 = *(arg1 + 0x160)
                    void* rdi_1 = *(r14_1 + *arg2)
                    int128_t zmm0
                    
                    if ((*(arg1 + 0x190) & 1) != 0 && not(1f f== *(rdi_1 + 0x2bc)))
                        float temp0_1[0x4] =
                            __minss_xmmss_memss((*(rdi_1 + 0x294))[0], *(rdi_1 + 0x280))
                        
                        if (not(temp0_1[0] == 0f))
                            float var_a8[0x4]
                            float (* rax_1)[0x4] = sub_1422f9c00(rdi_1, &var_a8, arg1 + 0x150)
                            zmm0.d = (*(arg1 + 0x164)).d f/ temp0_1[0]
                            zmm0.d = zmm0.d f* (*rax_1)[3]
                            
                            if (not(zmm0.d f>= 1f))
                                zmm8.d = zmm8.d f* zmm0.d
                                zmm9.d = zmm9.d f* zmm0.d
                    
                    int128_t var_d8 = *(arg1 + 0x180)
                    char rax_2 = sub_14076deb0(arg1)
                    int32_t zmm4 = data_14399f5c0:0xc.d
                    int32_t zmm5 = data_14399f5c0:8.d
                    zmm6 = data_14399f5c0:4.d
                    zmm7 = data_14399f5c0.d
                    
                    if (rax_2 != 0 || (*(arg1 + 0x36) & 2) != 0)
                        void* rax_3 = data_143f5b298
                        void* rcx_2 = rax_3 + 0x964
                        
                        if (*(rax_3 + 0x974) == 0)
                            rcx_2 = rax_3 + 0x934
                        
                        int128_t zmm3 = *(rax_3 + 0x9a8)
                        float zmm1 = zmm3.d f* *(rcx_2 + 4)
                        zmm0.d = zmm3.d f* *(rcx_2 + 8)
                        float zmm2 = zmm3.d f* *rcx_2
                        zmm3.d = zmm3.d f* *(rcx_2 + 0xc)
                        zmm0.d = zmm0.d f* 10f
                        zmm0.d = zmm0.d f+ zmm5
                        zmm3.d = zmm3.d f* 10f
                        var_d8:8.d = zmm0.d
                        zmm3.d = zmm3.d f+ zmm4
                        var_d8:4.d = zmm1 * 10f + zmm6[0]
                        var_d8.d = zmm2 * 10f f+ zmm7.d
                        var_d8:0xc.d = zmm3.d
                    
                    if ((*(arg1 + 0x190) & 2) != 0)
                        int128_t var_b8
                        sub_140acc920(&var_b8, &data_14399f638)
                        zmm4 = data_14399f5c0:0xc.d
                        zmm5 = data_14399f5c0:8.d
                        zmm6 = data_14399f5c0:4.d
                        zmm7 = data_14399f5c0.d
                        var_d8 = var_b8
                    
                    uint8_t r8_1 = *(arg1 + 0x36)
                    int64_t* rcx_5 = arg5 + 0x50
                    int32_t var_c8_1 = zmm7.d
                    float var_c4_1 = zmm6[0]
                    int32_t var_c0_1 = zmm5
                    int64_t* rax_4 = rcx_5[2]
                    int32_t var_bc_1 = zmm4
                    
                    if (rax_4 != 0)
                        rcx_5 = rax_4
                    
                    int64_t* r11_1 = *(rcx_5 + r14_1)
                    
                    if ((r8_1 & 4) == 0)
                    label_141ee4a92:
                        r8_1 u>>= 4
                    else
                        int64_t* r10_1 = *(arg1 + 0x70)
                        int64_t* rcx_6 = r10_1
                        void* rdx_1 = &r10_1[sx.q(*(arg1 + 0x78))]
                        
                        if (r10_1 == rdx_1)
                        label_141ee4a92_1:
                            r8_1 u>>= 4
                        else
                            while (*rcx_6 != *(rdi_1 + 0x240))
                                rcx_6 = &rcx_6[1]
                                
                                if (rcx_6 == rdx_1)
                                    goto label_141ee4a92_2
                            
                            if (((rcx_6 - r10_1) s>> 3).d == 0xffffffff)
                            label_141ee4a92_2:
                                r8_1 u>>= 4
                            else
                                r8_1 = *(arg1 + 0x37)
                    
                    result = (*(*r11_1 + 0x28))(r11_1, arg1 + 0x150, zmm8.d, zmm9, r13_1, &var_d8, 
                        r8_1 & 7, *(arg1 + 0x170), (*(arg1 + 0x174)).d, *(arg1 + 0x178), 
                        (*(arg1 + 0x17c)).d, 1)
                
                i += 1
                rsi_1 = rol.d(rsi_1, 1)
                r14_1 = &r14_1[1]
            while (i s< arg2[1].d)

return result
