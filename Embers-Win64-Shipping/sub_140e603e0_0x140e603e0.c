// 函数: sub_140e603e0
// 地址: 0x140e603e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
uint64_t result = __security_cookie ^ &var_1f8
uint64_t result_2 = result
int64_t* rcx = *(arg1 + 0x1d0)

if (rcx != 0)
    result = (*(*rcx + 0x48))(rcx)
    
    if (result.b != 0)
        int64_t* rbx_1 = *(arg1 + 0x1e8)
        int64_t* rsi_1 = nullptr
        int64_t* var_1b0_1 = rbx_1
        
        if (rbx_1 != 0)
            result = zx.q(rbx_1[1].d)
            
            if (result.d == 0)
                rbx_1 = nullptr
            else
                result = zx.q(result.d + 1)
                rbx_1[1].d = result.d
            
            if (rbx_1 != 0)
                void* r15_1 = *(arg1 + 0x1e0)
                
                if (r15_1 != 0 && r15_1 == *arg2)
                    int64_t* rcx_1 = *(arg1 + 0x1d0)
                    int64_t* var_1a8
                    result = (*(*rcx_1 + 0x28))(rcx_1, &var_1a8)
                    int64_t* rdi_1 = var_1a8
                    
                    if (rdi_1 != 0)
                        if (rdi_1[0x37].d != 0)
                            int64_t* rcx_2 = rdi_1[0x36]
                            
                            if (rcx_2 != 0)
                                result = (*(*rcx_2 + 0x28))(rcx_2)
                                
                                if (result.b != 0)
                                    int64_t* rcx_3
                                    
                                    if (rdi_1[0x37].d == 0)
                                        rcx_3 = nullptr
                                    else
                                        rcx_3 = rdi_1[0x36]
                                    
                                    char result_1
                                    (*(*rcx_3 + 0x48))(rcx_3, &result_1)
                                    result = zx.q(result_1)
                                    rdi_1[0x35].b = result.b
                        
                        if ((rdi_1[0x35].b & 0x19) != 0)
                            int64_t* rdi_2 = data_143e29f28
                            void var_198
                            int64_t* rbx_2 = *sub_140e152a0(r15_1, &var_198)
                            (*(*rdi_2 + 0x48))(rdi_2)
                            (*(*rbx_2 + 0xf8))(rbx_2)
                            int128_t zmm12
                            zmm12.d = arg5.d f* arg5.d
                            int64_t* var_190
                            
                            if (var_190 != 0)
                                var_190[1].d -= 1
                                
                                if (var_190[1].d == 1)
                                    (**var_190)(var_190)
                                    int32_t temp5_1 = *(var_190 + 0xc)
                                    *(var_190 + 0xc) -= 1
                                    
                                    if (temp5_1 == 1)
                                        (*(*var_190 + 8))(var_190, 1)
                            
                            int64_t* rcx_9 = var_1a8
                            char var_170 = data_1439ae51f
                            char var_16f_1 = 1
                            int64_t var_168_1 = 0
                            int32_t var_160_1 = 0
                            (*(*rcx_9 + 0x1d8))(rcx_9, &var_170)
                            float zmm0[0x4] = sub_140e25880(var_1a8, zmm12, arg5)
                            int64_t* rcx_11 = *(arg1 + 0x1d0)
                            int64_t rbx_4 = *arg2
                            int128_t* rax_13 = (*(*rcx_11 + 0x30))(rcx_11, &var_198)
                            int128_t zmm9 = *rax_13
                            int128_t zmm11 = *(rax_13 + 4)
                            int64_t var_f0[0x7]
                            int64_t* rax_14 = sub_140e190b0(rbx_4, &var_f0, zmm0)
                            float zmm7_1 = *(rax_14 + 0x1c)
                            int128_t zmm10
                            zmm10.d = zmm9.d f- *(rax_14 + 0x2c)
                            float zmm2_1 = rax_14[6].d
                            zmm9.d = zmm9.d f- *(rax_14 + 0x2c)
                            float zmm5_1 = zmm7_1 f* rax_14[5].d - rax_14[4].d f* *(rax_14 + 0x24)
                            float zmm1_1 = zmm11.d - zmm2_1
                            int64_t zmm6_1
                            zmm6_1.d = 1f / zmm5_1
                            zmm11.d = zmm11.d f/ zmm5_1
                            zmm11.d = zmm11.d f- zmm2_1 f* zmm6_1.d
                            zmm10.d = zmm10.d f* zmm6_1.d f* rax_14[5].d
                            float zmm0_1 = zmm6_1.d f* *(rax_14 + 0x24)
                            zmm6_1.d = zmm6_1.d f* rax_14[4].d
                            zmm11.d = zmm11.d f* zmm7_1
                            zmm10.d = zmm10.d f- zmm1_1 * zmm0_1
                            zmm9.d = zmm9.d f* zmm6_1.d
                            zmm11.d = zmm11.d f- zmm9.d
                            zmm10.d = zmm10.d f* zmm12.d
                            zmm11.d = zmm11.d f* zmm12.d
                            int64_t* rax_15 = sub_140e13cf0(var_1a8, &var_198)
                            int32_t var_128 = (*rax_15).d
                            zmm1_1 = *(rax_15 + 4)
                            *arg4 += 1
                            char* rbx_6 = *arg2 + 0x190
                            char var_f4
                            char var_f4_1 = var_f4 & 0xfe
                            int32_t var_fc_1 = zmm10.d
                            int32_t var_f8_1 = zmm11.d
                            int32_t var_11c_1 = zmm10.d
                            int32_t var_118_1 = zmm11.d
                            int32_t var_114_1 = zmm10.d
                            int32_t var_110_1 = zmm11.d
                            float var_124_1 = zmm1_1
                            uint128_t var_10c_1 = data_142d8c9b0
                            int32_t var_120_1 = 0x3f800000
                            
                            if (*(rbx_6 + 0x10) != 0)
                                int64_t* rcx_14 = *(rbx_6 + 8)
                                
                                if (rcx_14 != 0 && (*(*rcx_14 + 0x28))(rcx_14) != 0)
                                    if (*(rbx_6 + 0x10) != 0)
                                        rsi_1 = *(rbx_6 + 8)
                                    
                                    *rbx_6 = (*(*rsi_1 + 0x48))(rsi_1)
                            
                            char r13_1 = *rbx_6
                            int64_t r14_1 = *arg2
                            int32_t zmm4_1 = data_14399f5c0:4.d
                            float zmm3_1 = data_14399f5c0.d
                            zmm5_1 = data_14399f5c0:8.d
                            zmm6_1 = data_14399f5c0:0xc.d
                            int64_t* r12_1 = var_1a8
                            int64_t rbx_7 = *rdi_2
                            uint128_t var_148_1 = data_14399f5c0
                            int32_t r15_2 = *arg4
                            uint128_t zmm0_2
                            zmm0_2.d = 0.600000024f f* zmm4_1
                            float var_138_1 = 0.600000024f * zmm3_1
                            int32_t var_134_1 = zmm0_2.d
                            zmm0_2.q = rdi_2[0x6b] f- rdi_2[0x6c]
                            float var_158 = zmm3_1
                            int32_t var_154_1 = zmm4_1
                            zmm7_1 = _mm_cvtpd_ps(zmm0_2)
                            float var_150_1 = zmm5_1
                            int32_t var_14c_1 = zmm6_1.d
                            float var_130_1 = 0.600000024f * zmm5_1
                            float var_12c_1 = 0.600000024f f* zmm6_1.d
                            int64_t* rax_21 = sub_140e15940(r14_1, &var_198)
                            int64_t* rax_22
                            int64_t zmm0_3
                            rax_22, zmm0_3 = sub_140e12970(r14_1, &var_170)
                            (*(rbx_7 + 0x50))(rdi_2)
                            result = sub_140e1f680(r12_1, 
                                sub_140dd8910(&var_f0, r14_1, sub_140e14f20(r14_1), *rax_21, 
                                    zmm0_3, zmm7_1), 
                                &var_128, rax_22, arg3, r15_2, &var_158, r13_1)
                    
                    int64_t* var_1a0
                    
                    if (var_1a0 != 0)
                        var_1a0[1].d -= 1
                        
                        if (var_1a0[1].d == 1)
                            result = (**var_1a0)(var_1a0)
                            int32_t temp3_1 = *(var_1a0 + 0xc)
                            *(var_1a0 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                result = (*(*var_1a0 + 8))(var_1a0, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                result = (**rbx_1)(rbx_1)
                int32_t temp1_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    result = (*(*rbx_1 + 8))(rbx_1, 1)

__security_check_cookie(result_2 ^ &var_1f8)
return result
