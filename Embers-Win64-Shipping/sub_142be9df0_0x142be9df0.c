// 函数: sub_142be9df0
// 地址: 0x142be9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
uint64_t r12 = zx.q(arg3)
uint64_t rax_1 = zx.q(*(*(arg1 + 0x478) + (zx.q(arg2) << 2)))
*arg6 = 0
void* rcx_2 = zx.q((rax_1 << 2).d) + *(arg1 + 0x460)
uint32_t rbp_6 = ((zx.d(*(rcx_2 + 8)) << 8 | zx.d(*(rcx_2 + 9))) << 8 | zx.d(*(rcx_2 + 0xa))) << 8
    | zx.d(*(rcx_2 + 0xb))

if (arg3 u<= *(arg1 + 0x10))
    while (true)
        int32_t rcx_3 = *(arg1 + 0x4cc)
        
        if (rbp_6 u< rcx_3 && rcx_3 - rbp_6 u>= ((r12 << 2) + 0xc).d)
            int32_t rax_6 = sub_142b97060(arg4, rbp_6 + 4 + (r12 << 2).d + *(arg1 + 0x4c8), arg5)
            
            if (rax_6 != 0)
                return rax_6
            
            rax_6 = sub_142b96500(arg4, rax_6 + 8)
            
            if (rax_6 != 0)
                return rax_6
            
            int32_t rax_7 = sub_142b96720(arg4)
            int32_t rax_8 = sub_142b96720(arg4)
            sub_142b96620(arg4)
            
            if (rax_7 == rax_8)
                return 0x9d
            
            if (rax_7 u<= rax_8)
                int32_t r14_2 = rax_8 - rax_7
                
                if (r14_2 u>= 8 && *(arg1 + 0x4cc) - rbp_6 u>= rax_8)
                    rax_6 = sub_142b97060(arg4, rax_7 + rbp_6 + *(arg1 + 0x4c8), arg5)
                    
                    if (rax_6 == 0)
                        rax_6 = sub_142b96500(arg4, r14_2)
                        
                        if (rax_6 == 0)
                            uint16_t rax_11 = sub_142b967c0(arg4)
                            uint16_t rax_12 = sub_142b967c0(arg4)
                            int32_t rax_14 = sub_142b96720(arg4)
                            int32_t rdi_2
                            int32_t* r15_2
                            
                            if (rax_14 == 0x64757065)
                                if (r13 s>= 4)
                                    rdi_2 = 3
                                else
                                    r12 = zx.q(sub_142b967c0(arg4))
                                    sub_142b96620(arg4)
                                    r13 += 1
                                    
                                    if (r12.d u> *(arg1 + 0x10))
                                        break
                                    
                                    continue
                                
                                r15_2 = arg6
                            else if (rax_14 == 0x6a706720)
                                rdi_2 = 2
                                r15_2 = arg6
                            else if (rax_14 == 0x706e6720)
                                r15_2 = arg6
                                int32_t rax_19
                                rax_19, arg5 = sub_142be6a30(*(arg1 + 0x78), 0, 0, 0x20, r15_2, 
                                    arg4[6], arg4[7], rax_8 - rax_7 - 8, 1, arg7)
                                rdi_2 = rax_19
                            else if (rax_14 == 0x7267626c || rax_14 == 0x74696666)
                                rdi_2 = 2
                                r15_2 = arg6
                            else
                                rdi_2 = 7
                                r15_2 = arg6
                            
                            sub_142b96620(arg4)
                            
                            if (rdi_2 == 0)
                                int16_t arg_10
                                int16_t arg_18
                                sub_142be3ca0(arg1, 0, r12.d, &arg_18, arg5, &arg_10)
                                uint32_t rcx_20 = zx.d(arg_10)
                                *(r15_2 + 6) = *r15_2 - rax_12
                                r15_2[1].w = rax_11
                                r15_2[2].w = (divs.dp.d(
                                    sx.q(zx.d(*(*(arg1 + 0x80) + 0x18)) * rcx_20), 
                                    zx.d(*(arg1 + 0x112)))).w
                            
                            return rdi_2
                    
                    return rax_6
        
        return 3

return 6
