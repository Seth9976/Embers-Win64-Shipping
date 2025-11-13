// 函数: sub_14147b970
// 地址: 0x14147b970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* result = arg3
int64_t* result_1 = result
uint64_t rbp = arg2

if (*(arg1 + 0x3b0) s>= 3)
    int32_t r14_1 = 0
    int32_t i = 0
    
    if (arg3[1].d s> 0)
        int64_t* rcx = nullptr
        int64_t* var_b8_1 = nullptr
        
        do
            void* rbx_1 = *(rcx + *result)
            
            if (*(rbx_1 + 0x40) != 0 || *(rbx_1 + 0x610) s> 0 || *(rbx_1 + 0x84c) s> 0
                    || *(rbx_1 + 0x660) s> 0)
                int64_t rsi_1 = sx.q(*(arg1 + 0x338))
                int32_t rax_6 = (rsi_1 + 1).d
                *(arg1 + 0x338) = rax_6
                
                if (rax_6 s> *(arg1 + 0x33c))
                    sub_14149c2e0(arg1 + 0x330, rsi_1.d)
                
                int64_t rax_7 = *(arg1 + 0x330)
                int64_t rcx_7 = rsi_1 * 9
                char var_c0_1 = 0
                char var_c8_1 = 0
                char var_d0_1 = 1
                *(rax_7 + (rcx_7 << 3) + 0x20) = 0
                *(rax_7 + (rcx_7 << 3) + 0x28) = 0
                *(rax_7 + (rcx_7 << 3) + 0x2c) = 4
                *(rax_7 + (rcx_7 << 3) + 0x30) = 0
                *(rax_7 + (rcx_7 << 3) + 0x38) = 0
                *(rax_7 + (rcx_7 << 3) + 0x40) = 0
                int64_t rax_8 = sx.q(*(arg1 + 0x338))
                wchar16 const* const var_58_1 = u"UnknownTextureCube"
                wchar16 const* const var_d8_1 = u"CubeShadowDepthZ"
                int16_t var_60_1 = 0
                int64_t rax_9 = *(arg1 + 0x330)
                int16_t var_4f_1 = 0
                int128_t var_98 = data_1439c7b38
                int32_t var_7c_1 = 0
                void* rsi_2 = rax_9 + rax_8 * 0x48
                int32_t var_78_1 = 1
                int32_t rcx_9 = *(rbx_1 + 0x548)
                int32_t var_88_1 = data_1439c7b48
                int32_t var_84_1 = rcx_9
                int32_t var_80_1 = rcx_9
                int32_t var_68_1 = data_143ed3420
                int32_t var_74_1 = 0x10100
                int16_t var_70_1 = 1
                int32_t var_6c_1 = 0xc
                int32_t var_64_1 = 0x200000c
                char var_50_1 = 0
                sub_1419a0ce0(&data_1439c9260, rbp, &var_98, rsi_2 - 0x18, var_d8_1, var_d0_1, 
                    var_c8_1, var_c0_1)
                
                if (*(rbx_1 + 0x40) == 1)
                    void* r9_3 = *(arg1 + 8)
                    int32_t* rcx_15
                    
                    if (*(r9_3 + 0x1ac0) == *(r9_3 + 0x1aec))
                    label_14147bc74:
                        rcx_15 = nullptr
                    else
                        void* r8_3 = r9_3 + 0x1af0
                        void* rdx_6 = *(r8_3 + 8)
                        int64_t r10_2 = sx.q(*(*(rbx_1 + 0x5c0) + 0x28))
                        
                        if (rdx_6 != 0)
                            r8_3 = rdx_6
                        
                        int32_t rax_14 = *(r8_3 + (((sx.q(*(r9_3 + 0x1b00)) - 1) & r10_2) << 2))
                        
                        if (rax_14 == 0xffffffff)
                        label_14147bc74_1:
                            rcx_15 = nullptr
                        else
                            while (true)
                                rcx_15 = sx.q(rax_14) * 0x290 + *(r9_3 + 0x1ab8)
                                
                                if (*rcx_15 == r10_2.d)
                                    break
                                
                                rax_14 = rcx_15[0xa0]
                                
                                if (rax_14 == 0xffffffff)
                                    goto label_14147bc74_2
                            
                            if (rax_14 == 0xffffffff)
                            label_14147bc74_2:
                                rcx_15 = nullptr
                    
                    sub_141476540(&rcx_15[0x90], rsi_2 - 0x48)
                
                *(rbx_1 + 0x570) |= 1
                *(rbx_1 + 0x540) = 0
                int64_t r15_1 = sx.q(*(rsi_2 - 0x20))
                *(rbx_1 + 0x30) = 0
                
                if (*(rbx_1 + 0x34) != r15_1.d)
                    sub_14083ad10(rbx_1 + 0x28, r15_1.d)
                    r14_1 = *(rbx_1 + 0x30)
                
                int32_t rax_15 = r15_1.d + r14_1
                *(rbx_1 + 0x30) = rax_15
                
                if (rax_15 s> *(rbx_1 + 0x34))
                    sub_14083a440(rbx_1 + 0x28, r14_1)
                
                memset(*(rbx_1 + 0x28) + (sx.q(r14_1) << 3), 0, r15_1 << 3)
                r14_1 = 0
                int64_t r8_6 = 0
                
                if (r15_1.d s> 0)
                    do
                        void* rax_17 = *(rsi_2 - 0x28)
                        void* rdx_10 = rsi_2 - 0x48
                        
                        if (rax_17 != 0)
                            rdx_10 = rax_17
                        
                        *(*(rbx_1 + 0x28) + (r8_6 << 3)) = *(rdx_10 + (r8_6 << 3))
                        r8_6 += 1
                    while (r8_6 s< r15_1)
                
                rbp = arg2
                *(rbx_1 + 0x38) = *(rsi_2 - 0x18)
                sub_1414a2f50(rbx_1, rbp, arg1)
                int64_t rdi_2 = sx.q(*(rsi_2 - 8))
                int32_t rax_20 = (rdi_2 + 1).d
                *(rsi_2 - 8) = rax_20
                
                if (rax_20 s> *(rsi_2 - 4))
                    sub_14083a310(rsi_2 - 0x10, rdi_2.d)
                
                *(*(rsi_2 - 0x10) + (rdi_2 << 3)) = rbx_1
            else
                void* r9_1 = *(arg1 + 8)
                int32_t* rdx_2
                
                if (*(r9_1 + 0x1ac0) == *(r9_1 + 0x1aec))
                label_14147baa4:
                    rdx_2 = nullptr
                else
                    void* r8 = r9_1 + 0x1af0
                    void* rdx = *(r8 + 8)
                    int64_t r10_1 = sx.q(*(*(rbx_1 + 0x5c0) + 0x28))
                    
                    if (rdx != 0)
                        r8 = rdx
                    
                    int32_t rax_5 = *(r8 + (((sx.q(*(r9_1 + 0x1b00)) - 1) & r10_1) << 2))
                    
                    if (rax_5 == 0xffffffff)
                    label_14147baa4_1:
                        rdx_2 = nullptr
                    else
                        while (true)
                            rdx_2 = sx.q(rax_5) * 0x290 + *(r9_1 + 0x1ab8)
                            
                            if (*rdx_2 == r10_1.d)
                                break
                            
                            rax_5 = rdx_2[0xa0]
                            
                            if (rax_5 == 0xffffffff)
                                goto label_14147baa4_2
                        
                        if (rax_5 == 0xffffffff)
                        label_14147baa4_2:
                            rdx_2 = nullptr
                
                *(rbx_1 + 0x570) |= 1
                *(rbx_1 + 0x540) = 0
                sub_141483fe0(rbx_1 + 0x28, &rdx_2[0x90])
            
            result = result_1
            rcx = &var_b8_1[1]
            i += 1
            var_b8_1 = rcx
        while (i s< result[1].d)

__security_check_cookie(rax_1 ^ &var_f8)
return result
