// 函数: sub_142be4bf0
// 地址: 0x142be4bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg2[6]
*(arg1 + 0x200) = arg2
int64_t arg_20 = rbx
void* r13 = arg1
int32_t arg_18
int32_t rax = (*(arg1 + 0x2a0))(arg3, 0x6e616d65, arg2, &arg_18)
int32_t arg_10 = rax

if (rax == 0)
    int32_t rax_1 = sub_1408e52d0(arg2)
    rax = sub_142b96aa0(arg2, &data_143698a98, arg1 + 0x1d8)
    arg_10 = rax
    
    if (rax == 0)
        int32_t r12_2 = arg_18 + rax_1
        int32_t r14_2 = ((zx.q(*(arg1 + 0x1dc) * 3) << 2) + 6).d + rax_1
        
        if (r14_2 u> r12_2)
            return 0x91
        
        if (*(arg1 + 0x1d8) != 1)
        label_142be4e03:
            *(arg1 + 0x1e8) = sub_142b99a90(rbx, 0x18, 0, *(arg1 + 0x1dc), 0, &arg_10)
            rax = arg_10
            
            if (rax == 0)
                rax = sub_142b96500(arg2, *(arg1 + 0x1dc) * 0xc)
                arg_10 = rax
                
                if (rax == 0)
                    int32_t i_1 = *(arg1 + 0x1dc)
                    void* rbx_2 = *(arg1 + 0x1e8)
                    
                    if (i_1 != 0)
                        int32_t i
                        
                        do
                            int32_t rax_10 = sub_142b96aa0(arg2, &data_143698ab0, rbx_2)
                            arg_10 = rax_10
                            
                            if (rax_10 == 0)
                                int16_t rdx_11 = *(rbx_2 + 8)
                                
                                if (rdx_11 != 0)
                                    int32_t rcx_15 = *(arg1 + 0x1e0) + *(rbx_2 + 0xc) + rax_1
                                    *(rbx_2 + 0xc) = rcx_15
                                    
                                    if (rcx_15 u>= r14_2 && zx.d(rdx_11) + rcx_15 u<= r12_2)
                                        if (*(arg1 + 0x1d8) != 1)
                                            rbx_2 += 0x18
                                        else
                                            int16_t rcx_16 = *(rbx_2 + 4)
                                            
                                            if (rcx_16 u< 0x8000)
                                                rbx_2 += 0x18
                                            else if (zx.d(rcx_16) - 0x8000 u< *(arg1 + 0x1f0) && *(
                                                    *(arg1 + 0x1f8)
                                                    + zx.q(zx.d(rcx_16) - 0x8000) * 0x10) != 0)
                                                rbx_2 += 0x18
                            
                            i = i_1
                            i_1 -= 1
                        while (i != 1)
                        r13 = arg1
                    
                    int64_t r8_4 = *(arg1 + 0x1e8)
                    int32_t rbx_6 = ((rbx_2 - r8_4) s/ 0x18).d
                    *(arg1 + 0x1e8) =
                        sub_142b99a90(arg_20, 0x18, *(arg1 + 0x1dc), rbx_6, r8_4, &arg_10)
                    *(arg1 + 0x1dc) = rbx_6
                    sub_142b96620(arg2)
                    *(r13 + 0x1d0) = *(arg1 + 0x1dc)
                    return arg_10
        else
            rax = sub_142b97060(arg2, r14_2, arg4)
            arg_10 = rax
            
            if (rax == 0)
                uint64_t r9_1 = zx.q(sub_142b96f00(arg2, &arg_10))
                rax = arg_10
                *(arg1 + 0x1f0) = r9_1.d
                
                if (rax == 0)
                    r14_2 = r14_2 + (r9_1 << 2).d + 2
                    *(arg1 + 0x1f8) = sub_142b99a90(rbx, 0x10, 0, r9_1.d, 0, &arg_10)
                    rax = arg_10
                    
                    if (rax == 0)
                        rax = sub_142b96500(arg2, *(arg1 + 0x1f0) << 2)
                        arg_10 = rax
                        
                        if (rax == 0)
                            void* rbx_1 = *(arg1 + 0x1f8)
                            void* rbp_3 = (zx.q(*(arg1 + 0x1f0)) << 4) + rbx_1
                            
                            if (rbx_1 u< rbp_3)
                                do
                                    int32_t rax_4 = sub_142b96aa0(arg2, &data_143698ae0, rbx_1)
                                    int32_t rdx_6 = *(arg1 + 0x1e0) + rax_1
                                    arg_10 = rax_4
                                    int32_t rdx_7 = rdx_6 + *(rbx_1 + 4)
                                    *(rbx_1 + 4) = rdx_7
                                    
                                    if (rdx_7 u< r14_2 || zx.d(*rbx_1) + rdx_7 u> r12_2)
                                        *rbx_1 = 0
                                    
                                    rbx_1 += 0x10
                                while (rbx_1 u< rbp_3)
                                
                                r13 = arg1
                            
                            sub_142b96620(arg2)
                            rbx = arg_20
                            arg_10 = sub_142b97060(arg2, rax_1 + 6, arg4)
                            goto label_142be4e03

return rax
