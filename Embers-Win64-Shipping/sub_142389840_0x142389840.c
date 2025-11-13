// 函数: sub_142389840
// 地址: 0x142389840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_ec8
uint64_t result = __security_cookie ^ &var_ec8
uint64_t result_1 = result

if (*(arg1 + 0x54) == 0)
    void* r8_1 = *arg2
    
    if (r8_1 != 0)
        int64_t* r13_1 = arg2[1]
        
        if (r13_1 != 0)
            *(r13_1 + 0x13) = *(arg1 + 8)
            result.b = r13_1[1].b - *(arg1 + 8)
            *(r8_1 + 0x3c) = result.b
            int64_t r14_1 = sx.q(*(arg1 + 0x100))
            int32_t var_58_1 = 0
            
            if (r14_1.d s< *(arg1 + 8))
                int64_t r12_1 = r14_1 << 3
                int64_t var_e88_1 = 0
                void var_e58
                
                do
                    void* rbx_1 = *(r12_1 + *r13_1)
                    int128_t zmm2
                    int128_t zmm3
                    zmm2, zmm3 = sub_14237cb00(rbx_1 + 0x30, &var_e58, arg3, arg4)
                    int32_t rcx_2 = var_58_1
                    void* rdi_1 = *(rbx_1 + 0xc8)
                    
                    if (rcx_2 u>= 0x70)
                        zmm2, zmm3 = sub_14198a900(&data_143f02b98, &var_e58, rcx_2, 1, zmm2, zmm3)
                        rcx_2 = 0
                    
                    uint64_t rax_4 = zx.q(rcx_2) << 5
                    var_58_1 = rcx_2 + 1
                    *(&var_e58 + rax_4) = 0
                    void var_e50
                    *(&var_e50 + rax_4) = rdi_1.o
                    *(rdi_1 + 8) += 1
                    void* rdi_2 = *(rbx_1 + 0xd0)
                    void var_e40
                    
                    if (rdi_2 != 0)
                        int32_t rcx_4 = var_58_1
                        
                        if (rcx_4 u>= 0x70)
                            zmm2, zmm3 =
                                sub_14198a900(&data_143f02b98, &var_e58, rcx_4, 1, zmm2, zmm3)
                            rcx_4 = 0
                        
                        uint64_t rax_6 = zx.q(rcx_4) << 5
                        var_58_1 = rcx_4 + 1
                        int64_t var_ea0_1 = 0
                        char var_e94_1 = 0
                        *(&var_e50 + rax_6) = rdi_2.o
                        *(&var_e58 + rax_6) = 2
                        *(&var_e40 + rax_6) = 0.q
                        *(rdi_2 + 8) += 1
                    
                    void* rdi_3 = *(rbx_1 + 0x108)
                    
                    if (rdi_3 != 0)
                        int32_t rcx_6 = var_58_1
                        
                        if (rcx_6 u>= 0x70)
                            zmm2, zmm3 =
                                sub_14198a900(&data_143f02b98, &var_e58, rcx_6, 1, zmm2, zmm3)
                            rcx_6 = 0
                        
                        uint64_t rax_8 = zx.q(rcx_6) << 5
                        var_58_1 = rcx_6 + 1
                        int64_t var_e78_1 = 0
                        *(&var_e58 + rax_8) = 0
                        *(&var_e50 + rax_8) = rdi_3.o
                        *(rdi_3 + 8) += 1
                    
                    void* rdi_4 = *(rbx_1 + 0x118)
                    
                    if (rdi_4 != 0)
                        int32_t rcx_8 = var_58_1
                        
                        if (rcx_8 u>= 0x70)
                            zmm2, zmm3 =
                                sub_14198a900(&data_143f02b98, &var_e58, rcx_8, 1, zmm2, zmm3)
                            rcx_8 = 0
                        
                        uint64_t rax_10 = zx.q(rcx_8) << 5
                        var_58_1 = rcx_8 + 1
                        int64_t var_ea0_2 = 0
                        char var_e94_2 = 0
                        *(&var_e50 + rax_10) = rdi_4.o
                        *(&var_e58 + rax_10) = 2
                        *(&var_e40 + rax_10) = 0.q
                        *(rdi_4 + 8) += 1
                    
                    int128_t zmm2_1
                    int128_t zmm3_1
                    zmm2_1, zmm3_1 = sub_14237c950(rbx_1 + 0x138, &var_e58, zmm2, zmm3)
                    void* rdi_5 = *(rbx_1 + 0x1d0)
                    
                    if (rdi_5 != 0)
                        int32_t rcx_11 = var_58_1
                        
                        if (rcx_11 u>= 0x70)
                            zmm2_1, zmm3_1 =
                                sub_14198a900(&data_143f02b98, &var_e58, rcx_11, 1, zmm2_1, zmm3_1)
                            rcx_11 = 0
                        
                        uint64_t rax_12 = zx.q(rcx_11) << 5
                        var_58_1 = rcx_11 + 1
                        int64_t var_e68_1 = 0
                        *(&var_e58 + rax_12) = 0
                        *(&var_e50 + rax_12) = rdi_5.o
                        *(rdi_5 + 8) += 1
                    
                    void* rdi_6 = *(rbx_1 + 0x1d8)
                    
                    if (rdi_6 != 0)
                        int32_t rcx_13 = var_58_1
                        
                        if (rcx_13 u>= 0x70)
                            zmm2_1, zmm3_1 =
                                sub_14198a900(&data_143f02b98, &var_e58, rcx_13, 1, zmm2_1, zmm3_1)
                            rcx_13 = 0
                        
                        uint64_t rax_14 = zx.q(rcx_13) << 5
                        var_58_1 = rcx_13 + 1
                        int64_t var_ea0_3 = 0
                        char var_e94_3 = 0
                        *(&var_e50 + rax_14) = rdi_6.o
                        *(&var_e58 + rax_14) = 2
                        *(&var_e40 + rax_14) = 0.q
                        *(rdi_6 + 8) += 1
                    
                    int128_t zmm2_2
                    int128_t zmm3_2
                    zmm2_2, zmm3_2 = sub_14237c540(rbx_1 + 0x10, &var_e58, zmm2_1, zmm3_1)
                    sub_14237c540(rbx_1 + 0x20, &var_e58, zmm2_2, zmm3_2)
                    result, arg3, arg4 = sub_14237c630(rbx_1 + 0x300, &var_e58)
                    r14_1 = zx.q(r14_1.d + 1)
                    r12_1 += 8
                while (r14_1.d s< *(arg1 + 8))
                
                if (var_58_1 != 0)
                    result = sub_14198a900(&data_143f02b98, &var_e58, var_58_1, 1, arg3, arg4)

__security_check_cookie(result_1 ^ &var_ec8)
return result
