// 函数: sub_140dd0320
// 地址: 0x140dd0320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
char* result = (**arg2)(arg2)

if (result.d s> 0)
    int32_t i = 0
    int64_t r15
    r15.b = 0
    float zmm7[0x4] = zx.o(0)
    float zmm12[0x4] = zx.o(0)
    int128_t zmm14 = zx.o(0)
    result = (**arg2)(arg2)
    
    if (result.d s> 0)
        int64_t* rsi_1 = nullptr
        float zmm6[0x4]
        float var_48_1[0x4] = zmm6
        char var_1c8
        float var_1b0[0x4]
        
        do
            void* rbx_1 = *(rsi_1 + arg2[2])
            char* rdi_2 = *(rbx_1 + 0x10) + 0x1a8
            
            if (*(rdi_2 + 0x10) != 0)
                int64_t* rcx_2 = *(rdi_2 + 8)
                
                if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
                    int64_t* rcx_3
                    
                    if (*(rdi_2 + 0x10) == 0)
                        rcx_3 = nullptr
                    else
                        rcx_3 = *(rdi_2 + 8)
                    
                    (*(*rcx_3 + 0x48))(rcx_3, &var_1c8)
                    *rdi_2 = var_1c8
            
            if (*rdi_2 != data_1439ae51d)
                r15.b = 1
                
                if (*(rbx_1 + 0x68) != 0)
                    int64_t* rcx_4 = *(rbx_1 + 0x60)
                    
                    if (rcx_4 != 0 && (*(*rcx_4 + 0x28))(rcx_4) != 0)
                        int64_t* rcx_5
                        
                        if (*(rbx_1 + 0x68) == 0)
                            rcx_5 = nullptr
                        else
                            rcx_5 = *(rbx_1 + 0x60)
                        
                        (*(*rcx_5 + 0x48))(rcx_5, &var_1b0)
                        *(rbx_1 + 0x48) = var_1b0
                
                bool cond:1_1 = *(rbx_1 + 0x28) != 1
                arg5 = *(rbx_1 + 0x54)
                arg5[0] = arg5[0] f+ *(rbx_1 + 0x4c)
                zmm7[0] = zmm7[0] + arg5[0]
                
                if (cond:1_1)
                    int64_t* rax_16 = &data_143dbb1f0
                    int64_t* rcx_9 = *(rbx_1 + 0x10) + 0x158
                    
                    if (rcx_9[1].b != 0)
                        rax_16 = rcx_9
                    
                    zmm6 = *(rax_16 + 4)
                    
                    if (*(rbx_1 + 0x80) != 0)
                        int64_t* rcx_10 = *(rbx_1 + 0x78)
                        
                        if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
                            int64_t* rcx_11
                            
                            if (*(rbx_1 + 0x80) == 0)
                                rcx_11 = nullptr
                            else
                                rcx_11 = *(rbx_1 + 0x78)
                            
                            (*(*rcx_11 + 0x48))(rcx_11)
                            *(rbx_1 + 0x70) = arg5[0]
                    
                    arg5 = *(rbx_1 + 0x70)
                    
                    if (not(arg5[0] <= 0f))
                        zmm6 = _mm_min_ss(zmm6[0], arg5[0])
                    
                    zmm7[0] = zmm7[0] + zmm6[0]
                else
                    if (*(rbx_1 + 0x40) != 0)
                        int64_t* rcx_6 = *(rbx_1 + 0x38)
                        
                        if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
                            int64_t* rcx_7
                            
                            if (*(rbx_1 + 0x40) == 0)
                                rcx_7 = nullptr
                            else
                                rcx_7 = *(rbx_1 + 0x38)
                            
                            (*(*rcx_7 + 0x48))(rcx_7)
                            *(rbx_1 + 0x30) = arg5[0]
                    
                    zmm14.d = zmm14.d f+ *(rbx_1 + 0x30)
            
            i += 1
            rsi_1 = &rsi_1[1]
            result = (**arg2)(arg2)
        while (i s< result.d)
        
        if (r15.b != 0)
            float (* r14_1)[0x4] = arg3
            int32_t i_1 = 0
            int128_t zmm11 = zx.o(0)
            float zmm13[0x4] = (*r14_1)[1]
            zmm13[0] = zmm13[0] - zmm7[0]
            float zmm8[0x4]
            float var_68_1[0x4] = zmm8
            uint128_t zmm9
            uint128_t var_78_1 = zmm9
            float zmm10[0x4]
            float var_88_1[0x4] = zmm10
            float temp0_2[0x4] = _mm_max_ss(zmm13[0], 0)
            
            for (; i_1 s>= 0; i_1 += 1)
                if (i_1 s>= arg2[3].d)
                    break
                
                void* rdi_3 = *(arg2[2] + (sx.q(i_1) << 3))
                char* rbx_3 = *(rdi_3 + 0x10) + 0x1a8
                
                if (*(rbx_3 + 0x10) != 0)
                    int64_t* rcx_14 = *(rbx_3 + 8)
                    
                    if (rcx_14 != 0 && (*(*rcx_14 + 0x28))(rcx_14) != 0)
                        int64_t* rcx_15
                        
                        if (*(rbx_3 + 0x10) == 0)
                            rcx_15 = nullptr
                        else
                            rcx_15 = *(rbx_3 + 8)
                        
                        (*(*rcx_15 + 0x48))(rcx_15, &var_1c8)
                        *rbx_3 = var_1c8
                
                char rbx_4 = *rbx_3
                zmm6 = zmm12
                
                if (rbx_4 != data_1439ae51d)
                    if (*(rdi_3 + 0x28) != 1)
                        int64_t* rax_29 = &data_143dbb1f0
                        int64_t* rcx_19 = *(rdi_3 + 0x10) + 0x158
                        
                        if (rcx_19[1].b != 0)
                            rax_29 = rcx_19
                        
                        zmm6 = *(rax_29 + 4)
                    else if (not(zmm14.d f<= zmm12[0]))
                        if (*(rdi_3 + 0x40) != 0)
                            int64_t* rcx_16 = *(rdi_3 + 0x38)
                            
                            if (rcx_16 != 0 && (*(*rcx_16 + 0x28))(rcx_16) != 0)
                                int64_t* rcx_17
                                
                                if (*(rdi_3 + 0x40) == 0)
                                    rcx_17 = nullptr
                                else
                                    rcx_17 = *(rdi_3 + 0x38)
                                
                                (*(*rcx_17 + 0x48))(rcx_17)
                                *(rdi_3 + 0x30) = arg5[0]
                        
                        zmm6 = temp0_2
                        zmm6[0] = zmm6[0] f* *(rdi_3 + 0x30)
                        zmm6[0] = zmm6[0] f/ zmm14.d
                    
                    if (*(rdi_3 + 0x80) != 0)
                        int64_t* rcx_20 = *(rdi_3 + 0x78)
                        
                        if (rcx_20 != 0 && (*(*rcx_20 + 0x28))(rcx_20) != 0)
                            int64_t* rcx_21
                            
                            if (*(rdi_3 + 0x80) == 0)
                                rcx_21 = nullptr
                            else
                                rcx_21 = *(rdi_3 + 0x78)
                            
                            (*(*rcx_21 + 0x48))(rcx_21)
                            *(rdi_3 + 0x70) = arg5[0]
                    
                    arg5 = *(rdi_3 + 0x70)
                    
                    if (not(arg5[0] <= zmm12[0]))
                        zmm6 = _mm_min_ss(arg5[0], zmm6[0])
                
                if (*(rdi_3 + 0x68) != 0)
                    int64_t* rcx_22 = *(rdi_3 + 0x60)
                    
                    if (rcx_22 != 0 && (*(*rcx_22 + 0x28))(rcx_22) != 0)
                        int64_t* rcx_23
                        
                        if (*(rdi_3 + 0x68) == 0)
                            rcx_23 = nullptr
                        else
                            rcx_23 = *(rdi_3 + 0x60)
                        
                        float var_180[0x4]
                        (*(*rcx_23 + 0x48))(rcx_23, &var_180)
                        *(rdi_3 + 0x48) = var_180
                
                float var_138[0x4] = *(rdi_3 + 0x48)
                float zmm2[0x4]
                
                if (arg1 != 1)
                    zmm2 = var_138[2]
                    zmm8 = var_138[0]
                else
                    zmm2 = var_138[0]
                    zmm8 = var_138[2]
                
                zmm9 = var_138[3]
                float zmm3 = zmm2[0]
                zmm7 = var_138[1]
                float zmm5_1[0x4] = zmm9
                float zmm1[0x4] = *r14_1
                zmm5_1[0] = zmm5_1[0] + zmm7[0]
                uint32_t rdx_4 = zx.d(*(rdi_3 + 0x20))
                zmm3 = zmm3 + zmm8[0]
                zmm5_1[0] = zmm5_1[0] + zmm6[0]
                void* r8
                
                if (arg1 != 1)
                label_140dd07c2:
                    
                    if (rdx_4 != 0)
                        goto label_140dd077e
                    
                    r8 = *(rdi_3 + 0x10)
                    zmm1[0] = zmm1[0] - zmm3
                else
                    if (rdx_4 != 1)
                        if (rdx_4 != 3)
                            goto label_140dd07c2
                        
                        rdx_4 -= 2
                        goto label_140dd077e
                    
                    rdx_4 = 3
                label_140dd077e:
                    r8 = *(rdi_3 + 0x10)
                    int64_t* rcx_26 = &data_143dbb1f0
                    zmm1[0] = zmm1[0] - zmm3
                    
                    if (*(r8 + 0x160) != 0)
                        rcx_26 = r8 + 0x158
                    
                    float temp0_5[0x4] = _mm_min_ss((*rcx_26)[0], zmm1[0])
                    
                    if (rdx_4 == 1)
                        zmm1 = temp0_5
                    else if (rdx_4 == 2)
                        zmm1[0] = zmm1[0] - temp0_5[0]
                        zmm1[0] = zmm1[0] * 0.5f
                        zmm1[0] = zmm1[0] + zmm8[0]
                        zmm8 = zmm1
                        zmm8[0] = zmm8[0] - zmm2[0]
                        zmm1 = temp0_5
                    else if (rdx_4 == 3)
                        zmm8 = zmm1
                        zmm8[0] = zmm8[0] - temp0_5[0]
                        zmm8[0] = zmm8[0] - zmm2[0]
                        zmm1 = temp0_5
                
                uint32_t rdx_7 = zx.d(*(rdi_3 + 0x21))
                arg5 = zmm5_1
                arg5[0] = arg5[0] - zmm5_1[0]
                
                if (rdx_7 != 0)
                    void* rcx_27 = &data_143dbb1f0
                    
                    if (*(r8 + 0x160) != 0)
                        rcx_27 = r8 + 0x158
                    
                    float temp0_6[0x4] = _mm_min_ss((*(rcx_27 + 4))[0], arg5[0])
                    
                    if (rdx_7 == 1)
                        arg5 = temp0_6
                    else if (rdx_7 == 2)
                        zmm5_1[0] = zmm5_1[0] - temp0_6[0]
                        zmm5_1[0] = zmm5_1[0] * 0.5f
                        zmm5_1[0] = zmm5_1[0] + zmm7[0]
                        zmm7 = zmm5_1
                        zmm7[0] = zmm7[0] f- zmm9.d
                        arg5 = temp0_6
                    else if (rdx_7 == 3)
                        zmm7 = zmm5_1
                        zmm7[0] = zmm7[0] - temp0_6[0]
                        zmm7[0] = zmm7[0] f- zmm9.d
                        arg5 = temp0_6
                
                bool cond:3_1 = data_143e20cf4 != 0
                zmm7[0] = zmm7[0] f+ zmm11.d
                float var_1c0 = zmm1[0]
                float var_1bc_1 = arg5[0]
                var_1b0[1] = zmm8[0]
                var_1b0[0] = 0x3f800000
                var_1b0[2] = zmm7[0]
                uint64_t var_128
                uint128_t var_118
                int64_t var_108
                char var_100_1
                char rcx_29
                uint128_t zmm0
                
                if (cond:3_1)
                    int128_t* rax_40 = sub_140e111c0(r8 + 0x1c8)
                    char rdx_11 = 0
                    
                    if (*(rax_40 + 0x18) == 0)
                        zmm1 = var_138
                    else
                        zmm0 = zx.o(rax_40[1].q)
                        rdx_11 = 1
                        zmm1 = *rax_40
                        var_128 = zmm0.q
                        var_128.d = (zmm0 ^ data_142d3f780).d
                    
                    rcx_29 = 0
                    var_100_1 = 0
                    
                    if (rdx_11 != 0)
                        var_108 = var_128
                        var_118 = zmm1
                        rcx_29 = 1
                        var_100_1 = 1
                else
                    int128_t* rax_39 = sub_140e111c0(r8 + 0x1c8)
                    rcx_29 = 0
                    var_100_1 = 0
                    
                    if (*(rax_39 + 0x18) != 0)
                        zmm1 = zx.o(rax_39[1].q)
                        var_118 = *rax_39
                        var_108 = zmm1.q
                        rcx_29 = 1
                        var_100_1 = 1
                
                int64_t* rdi_4
                int64_t r15_1
                
                if (rcx_29 == 0)
                    zmm6 = (*r14_1)[2]
                    var_118.q = var_1c0.q
                    var_138 = data_142d8c9b0
                    var_128.d = zmm8[0]
                    var_128:4.d = zmm7[0]
                    int32_t var_fc
                    zmm7, zmm8, zmm10, zmm11, zmm12 = sub_1408b8950(&var_fc, &var_138, &(*r14_1)[7])
                    arg5 = zmm7
                    r15_1 = *(rdi_3 + 0x10)
                    rdi_4 = *(rdi_3 + 0x18)
                    char var_e4
                    char rax_45 = var_e4 ^ (((*r14_1)[0xd].b ^ var_e4) & 1)
                    zmm8[0] = zmm8[0] * zmm6[0]
                    var_e4 = rax_45
                    arg5[0] = arg5[0] * zmm6[0]
                    var_118:8.d = zmm6[0]
                    var_108:4.d = zmm8[0]
                    var_100_1.d = zmm7[0]
                    zmm8[0] = zmm8[0] + (*r14_1)[3]
                    arg5[0] = arg5[0] + r14_1[1][0]
                    var_118:0xc.d = zmm8[0]
                    var_108.d = arg5[0]
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d += 1
                    
                    zmm6 = var_118
                    zmm7 = var_108.o
                    float var_f8[0x4]
                    zmm8 = var_f8
                    int64_t var_e8
                    zmm9 = zx.o(var_e8)
                else
                    uint64_t* rsi_3 = *(rdi_3 + 0x10) + 0x1f8
                    
                    if (rsi_3[3].d != 0)
                        int64_t* rcx_30 = rsi_3[2]
                        
                        if (rcx_30 != 0 && (*(*rcx_30 + 0x28))(rcx_30) != 0)
                            int64_t* rcx_31
                            
                            if (rsi_3[3].d == 0)
                                rcx_31 = nullptr
                            else
                                rcx_31 = rsi_3[2]
                            
                            int64_t var_194
                            (*(*rcx_31 + 0x48))(rcx_31, &var_194)
                            *rsi_3 = var_194
                    
                    zmm0 = zx.o(*rsi_3)
                    float var_1a0 = (*r14_1)[2][0]
                    var_138[0].q = zmm0.q
                    int32_t var_19c_1 = (*r14_1)[3].d
                    float var_198_1 = r14_1[1][0][0]
                    float var_170[0x4]
                    arg5, zmm10, zmm11, zmm12 = sub_140dd8200(&var_170, &var_1c0, &var_1b0, 
                        &var_118, &var_138, &var_1a0, &(*r14_1)[7])
                    r15_1 = *(rdi_3 + 0x10)
                    rdi_4 = *(rdi_3 + 0x18)
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d += 1
                    
                    zmm6 = var_170
                    float var_160[0x4]
                    zmm7 = var_160
                    float var_150[0x4]
                    zmm8 = var_150
                    int64_t var_140
                    zmm9 = zx.o(var_140)
                
                if (rdi_4 != 0)
                    int32_t rax_46 = rdi_4[1].d
                    rdi_4[1].d = rax_46
                    
                    if (rax_46 == 0)
                        (**rdi_4)(rdi_4)
                        int32_t temp6_1 = *(rdi_4 + 0xc)
                        *(rdi_4 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rdi_4 + 8))(rdi_4, 1)
                
                result = arg4
                
                if ((*result & rbx_4) == 0)
                    goto label_140dd0b09
                
                char* result_1 = &result[8]
                int64_t r14_2 = sx.q(*(result_1 + 0x128))
                int32_t rax_49 = (r14_2 + 1).d
                *(result_1 + 0x128) = rax_49
                
                if (rax_49 s> *(result_1 + 0x12c))
                    arg5 = sub_140dbcd70(result_1, r14_2.d)
                
                result = *(result_1 + 0x120)
                int64_t rcx_38 = r14_2 * 9
                
                if (result != 0)
                    result_1 = result
                
                *(result_1 + (rcx_38 << 3)) = zmm6
                *(result_1 + (rcx_38 << 3) + 0x10) = zmm7
                *(result_1 + (rcx_38 << 3) + 0x20) = zmm8
                *(result_1 + (rcx_38 << 3) + 0x30) = zmm9.q
                *(result_1 + (rcx_38 << 3) + 0x38) = r15_1
                *(result_1 + (rcx_38 << 3) + 0x40) = rdi_4
                
                if (rdi_4 != 0)
                    rdi_4[1].d += 1
                label_140dd0b09:
                    
                    if (rdi_4 != 0)
                        rdi_4[1].d -= 1
                        
                        if (rdi_4[1].d == 1)
                            result = (**rdi_4)(rdi_4)
                            int32_t temp8_1 = *(rdi_4 + 0xc)
                            *(rdi_4 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                result = (*(*rdi_4 + 8))(rdi_4, 1)
                
                if (rbx_4 != data_1439ae51d)
                    zmm11.d = zmm11.d f+ zmm10[0]
                
                r14_1 = arg3

__security_check_cookie(rax_1 ^ &var_208)
return result
