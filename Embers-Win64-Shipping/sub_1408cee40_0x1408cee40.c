// 函数: sub_1408cee40
// 地址: 0x1408cee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* r15 = arg4

if (data_143983bb0 == 1)
    int64_t* rdx = *(arg1 + 0x28)
    int64_t* rdi_1 = rdx
    void* rcx = &rdx[sx.q(*(arg1 + 0x30))]
    
    if (rdx != rcx)
        do
            if (*rdi_1 == arg3)
                int64_t rdi_3 = (rdi_1 - rdx) s>> 3
                
                if (rdi_3.d != 0xffffffff)
                    void* var_60_1 = nullptr
                    int32_t var_58_1 = 0
                    int32_t var_54_1 = 1
                    void* rax_3 = sub_142591550()
                    void* const rbp_1
                    
                    if (rax_3 == 0)
                        rbp_1 = nullptr
                    else
                        void* rax_4 = sub_142459c10()
                        
                        if (rax_4 == 0)
                            rbp_1 = nullptr
                        else
                            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                            
                            if (rax_5.d s> *(rax_3 + 0x38))
                                rbp_1 = nullptr
                            else
                                rbp_1 = rax_3
                                
                                if (*(*(rax_3 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                                    rbp_1 = nullptr
                    
                    void var_68
                    void* r8 = &var_68
                    
                    if (rbp_1 != sub_142459c10())
                        sub_1408cd230(arg2, rax_3, r8)
                    else
                        sub_1408cd020(arg2, rax_3, r8)
                    
                    int64_t* rbp_2 = *(*(arg1 + 0x38) + (sx.q(rdi_3.d) << 3))
                    
                    if (rbp_2[0x20] != 0)
                        int64_t r13_1 = sx.q(rbp_2[6].d)
                        int32_t rax_9 = (r13_1 + 1).d
                        rbp_2[6].d = rax_9
                        
                        if (rax_9 s> *(rbp_2 + 0x34))
                            sub_1405a4d70(&rbp_2[5])
                        
                        *(rbp_2[5] + (r13_1 << 3)) = arg2
                        int64_t rbx_2 = sx.q(rbp_2[8].d)
                        int32_t rax_11 = (rbx_2 + 1).d
                        rbp_2[8].d = rax_11
                        
                        if (rax_11 s> *(rbp_2 + 0x44))
                            sub_1405c4fe0(&rbp_2[7])
                        
                        int64_t rsi_1 = rbp_2[7]
                        char* rbx_3 = rbx_2 << 6
                        int64_t var_90_1 = rsi_1
                        *(rbx_3 + rsi_1) = 0
                        *(rbx_3 + rsi_1 + 8) = 0
                        __builtin_memset(&rbx_3[rsi_1 + 0x1c], 0, 0x24)
                        *(rbx_3 + rsi_1 + 0x14) = -1
                        *(rbx_3 + rsi_1 + 0x10) = 0xffffffff
                        *(rbx_3 + rsi_1 + 8) = sub_1408d7510(rbp_2[0x1f], arg2)
                        int64_t* r14_2 = &rbx_3[0x30 + rsi_1]
                        sub_1407473e0(r14_2, r15)
                        char var_a8 = 1
                        char rax_12 = sub_1408ce1c0(rbp_2, r13_1.d, &var_a8)
                        rbx_3[rsi_1 + 1] = rax_12
                        void* r12_1 = &var_68
                        rbx_3[rsi_1] = rax_12
                        
                        if (var_60_1 != 0)
                            r12_1 = var_60_1
                        
                        int64_t r8_2 = 0
                        int64_t var_a0_1 = 0
                        int64_t rdx_8 = sx.q(var_58_1) << 3
                        uint64_t rdx_9 = rdx_8 u>> 3
                        
                        if (r12_1 u> r12_1 + rdx_8)
                            rdx_9 = 0
                        
                        if (rdx_9 != 0)
                            void* r15_1 = &rbx_3[rsi_1]
                            int64_t rdx_14
                            
                            do
                                int64_t r14_3 = sx.q(rbp_2[0xa].d)
                                int64_t* rsi_2 = *r12_1
                                int32_t rax_13 = (r14_3 + 1).d
                                rbp_2[0xa].d = rax_13
                                
                                if (rax_13 s> *(rbp_2 + 0x54))
                                    sub_1405a4f90(&rbp_2[9])
                                
                                int64_t rax_14 = rbp_2[9]
                                int64_t rcx_14 = r14_3 * 2
                                *(rax_14 + (rcx_14 << 3) + 0xc) = 0
                                *(rax_14 + (rcx_14 << 3) + 8) = r13_1.d
                                *(rax_14 + (rcx_14 << 3)) = rsi_2
                                int64_t rax_15 = *rsi_2
                                *(rsi_2 + 0x3a) &= 0xfd
                                (*(rax_15 + 0x340))(rsi_2, 0)
                                rsi_2[0xb5].b |= 0x10
                                int64_t rsi_3 = sx.q(*(r15_1 + 0x28))
                                int32_t r14_5 = rbp_2[0xa].d - 1
                                int32_t rax_16 = (rsi_3 + 1).d
                                *(r15_1 + 0x28) = rax_16
                                
                                if (rax_16 s> *(r15_1 + 0x2c))
                                    sub_1405a4cf0(r15_1 + 0x20)
                                
                                *(*(r15_1 + 0x20) + (rsi_3 << 2)) = r14_5
                                rsi_1 = var_90_1
                                sub_1408d07a0(rbp_2, rbx_3[rsi_1], r13_1.d)
                                r12_1 += 8
                                rdx_14 = var_a0_1 + 1
                                r8_2 = 0
                                var_a0_1 = rdx_14
                            while (rdx_14 != rdx_9)
                            rax_12 = rbx_3[rsi_1]
                            r15 = arg4
                        
                        if (*(zx.q(rax_12) * 0xa0 + rbp_2[0xb]) != 0)
                            int64_t rax_20 = sx.q(*(rbx_3 + rsi_1 + 0x14))
                            
                            if (rax_20.d != 0xffffffff)
                                *(rbp_2[0x19] + rax_20 * 0x30) = 1
                                r8_2 = sx.q(*(rbx_3 + rsi_1 + 0x14)) * 6
                                *(rbp_2[0x19] + (r8_2 << 3) + 8) = rbp_2[0x26].d
                        
                        sub_1408ce460(r14_2, zx.q(zx.d(rdi_3.b) << 0x18) | zx.q(r13_1.d), r8_2)
                    
                    if (var_60_1 != 0)
                        sub_140a74f90(var_60_1)
                
                break
            
            rdi_1 = &rdi_1[1]
        while (rdi_1 != rcx)

uint64_t result = sub_140745b20(r15)
__security_check_cookie(rax_1 ^ &var_c8)
return result
