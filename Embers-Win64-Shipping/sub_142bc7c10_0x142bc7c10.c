// 函数: sub_142bc7c10
// 地址: 0x142bc7c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg1 + 8)
int32_t r8 = 0
int32_t* r15_2 = (zx.q(arg3) << 4) + *(r14 + 0x228)
int32_t rdx = *(r14 + 0x1f0)
int64_t* rsi = *(r14 + 0xa0)
int32_t* rdi = *(r14 + 0x1f8)

if (rdx != 0)
    do
        if (*rdi == zx.d(*(arg2 + 0x18)) && rdi[1] == zx.d(*(arg2 + 0x1a)))
            int32_t rcx_1 = rdi[2]
            uint32_t rdx_1 = (rcx_1 & 1) + 5
            
            if ((rcx_1.b & 2) == 0)
                rdx_1 = (rcx_1 & 1) + 4
            
            uint32_t arg_18 = rdx_1
            int32_t rdx_3 = *(r14 + 0x248) + rdi[6]
            uint32_t arg_8 = rcx_1 & 4
            int32_t rax_6 = sub_142b97060(rsi, rdx_3, arg5)
            int32_t rbx_1 = rax_6
            
            if (rax_6 == 0)
                uint32_t rax_7 = arg_18
                uint32_t rdx_4 = rax_7 + 1
                
                if (arg_8 == rbx_1)
                    rdx_4 = rax_7
                
                int32_t rax_8 = sub_142b96500(rsi, rdx_4 * rdi[7])
                rbx_1 = rax_8
                
                if (rax_8 == 0)
                    int32_t var_48
                    sub_142bc7400(rsi[7], rsi[8], rdi[7], &rdi[2], *r15_2, &var_48, &arg_18)
                    sub_142b96620(rsi)
                    uint32_t rdi_1 = arg_18
                    
                    if (rdi_1 == 0)
                        return 6
                    
                    int32_t r8_2 = *(r14 + 0x18c)
                    int32_t rdx_7 = *(r14 + 0x188)
                    uint32_t var_50 = 0
                    int32_t var_54 = 0
                    arg_8 = 0
                    arg_18 = 0
                    uint32_t var_58 = 0
                    uint32_t rax_10 = r15_2[1]
                    
                    if (r8_2 != rdx_7)
                        rax_10 = sub_142b93dd0(rax_10, rdx_7, r8_2)
                    
                    *(arg1 + 0x50) = rax_10
                    uint32_t rax_11 =
                        sub_142b93dd0(zx.d(*(arg2 + 0x18)) << 8, r15_2[1], *(r14 + 0x18c))
                    int32_t rdx_10 = *(r14 + 0x110) + var_48
                    uint32_t var_4c = rax_11
                    int32_t rax_12 = sub_142b97060(rsi, rdx_10, arg5)
                    rbx_1 = rax_12
                    
                    if (rax_12 == 0)
                        int32_t rax_13 = sub_142b96500(rsi, rdi_1)
                        rbx_1 = rax_13
                        
                        if (rax_13 == 0)
                            var_48.q = rsi[7]
                            int32_t var_88_1
                            var_88_1.q = &var_54
                            int32_t rax_15 = sub_142bc6ea0(&var_48, rsi[8], rax_11, &var_50, 
                                var_88_1, &arg_8, &arg_18, &var_4c, &var_58)
                            rbx_1 = rax_15
                            
                            if (rax_15 == 0)
                                uint32_t r15_4 = var_58
                                uint32_t rdx_13
                                uint32_t r8_5
                                
                                if (r15_4 == 0)
                                    rdx_13 = arg_18
                                    r8_5 = arg_8
                                    
                                    if ((rdx_13 * r8_5 + 7) u>> 3 u> rdi_1)
                                        sub_142b96620(rsi)
                                        return 8
                                else if (r15_4 == 1)
                                    rdx_13 = arg_18
                                    r8_5 = arg_8
                                    
                                    if (rdx_13 * r8_5 u> rdi_1 * 0xf)
                                        sub_142b96620(rsi)
                                        return 8
                                else
                                    if (r15_4 == 2)
                                        rdx_13 = arg_18
                                        r8_5 = arg_8
                                    
                                    if (r15_4 != 2 || rdx_13 * r8_5 u> ((rdi_1 + 1) u>> 1) * 0xff)
                                        sub_142b96620(rsi)
                                        return 8
                                
                                int32_t r10_1
                                
                                if (rdx_13 u<= 0x7fffffff)
                                    r10_1 = var_54
                                
                                if (rdx_13 u> 0x7fffffff || r10_1 s> 0x7fffffff - rdx_13)
                                    rbx_1 = 0x17
                                else
                                    uint32_t rcx_19 = var_50
                                    *(arg1 + 0x6c) = r8_5
                                    uint32_t r8_6 = r8_5 << 6
                                    *(arg1 + 0x34) = rdx_13 << 6
                                    *(arg1 + 0x38) = rcx_19 << 6
                                    *(arg1 + 0x3c) = r10_1 << 6
                                    int32_t rax_36 = (var_4c s>> 2) + 0x20
                                    *(arg1 + 0x30) = r8_6
                                    int32_t r9_3 = (r8_5 + 7) s>> 3
                                    *(arg1 + 0x40) = rax_36 & 0xffffffc0
                                    __builtin_strncpy(arg1 + 0x60, "stib", 4)
                                    *(arg1 + 0x68) = rdx_13
                                    *(arg1 + 0x70) = r9_3
                                    *(arg1 + 0x82) = 1
                                    *(arg1 + 0x44) = neg.d(r8_6) s>> 1
                                    *(arg1 + 0x48) = 0
                                    *(arg1 + 0x4c) = *(arg2 + 0x2c)
                                    *(arg1 + 0x94) = rdx_13 + r10_1
                                    *(arg1 + 0x90) = rcx_19
                                    
                                    if (arg4 == 0)
                                        int32_t rax_40 = sub_142b98ac0(arg1, rdx_13 * r9_3)
                                        rbx_1 = rax_40
                                        
                                        if (rax_40 == 0)
                                            var_88_1.q = arg1 + 0x68
                                            sub_142bc6d30(var_48.q, rsi[8], r15_4, 
                                                (*(r14 + 0x124) u>> 1).b & 1, var_88_1)
                                            sub_142b96620(rsi)
                                            return 0
                            
                            sub_142b96620(rsi)
            
            return zx.q(rbx_1)
        
        rdi = &rdi[0xa]
        r8 += 1
    while (r8 u< rdx)

return 6
