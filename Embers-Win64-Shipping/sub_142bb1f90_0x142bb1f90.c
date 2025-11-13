// 函数: sub_142bb1f90
// 地址: 0x142bb1f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0xa0)
void* r15 = *(arg1 + 0x410)
int64_t rbp = rdi[6]
void arg_10
void* result = (*(arg1 + 0x2a0))(arg3, 0x4d564152, rdi, &arg_10)
int32_t arg_8 = result.d

if (result.d == 0)
    int32_t rax = sub_1408e52d0(rdi)
    result = sub_142b96f00(rdi, &arg_8)
    int16_t rbx_1 = result.w
    
    if (arg_8 == 0)
        result = sub_142b970b0(rdi, 2)
        arg_8 = result.d
        
        if (result.d == 0 && rbx_1 == 1)
            result = sub_142b99860(rbp, (result + 0x30).d, &arg_8)
            *(r15 + 0x60) = result
            
            if (arg_8 == 0)
                result = sub_142b970b0(rdi, 4)
                arg_8 = result.d
                
                if (result.d == 0)
                    result = sub_142b96f00(rdi, &arg_8)
                    **(r15 + 0x60) = result.w
                    
                    if (arg_8 == 0)
                        result = sub_142b96f00(rdi, &arg_8)
                        
                        if (arg_8 == 0)
                            int32_t rax_1 = sub_1408e52d0(rdi)
                            result =
                                sub_142bb1a90(arg1, zx.d(result.w) + rax, *(r15 + 0x60) + 8, arg2)
                            arg_8 = result.d
                            
                            if (result.d == 0)
                                result = sub_142b99a90(rbp, 0xc, 0, zx.d(**(r15 + 0x60)), 0, &arg_8)
                                *(*(r15 + 0x60) + 0x28) = result
                                
                                if (arg_8 == 0)
                                    result = sub_142b97060(rdi, rax_1, arg2)
                                    arg_8 = result.d
                                    
                                    if (result.d == 0)
                                        result = sub_142b96500(rdi, zx.d(**(r15 + 0x60)) << 3)
                                        arg_8 = result.d
                                        
                                        if (result.d == 0)
                                            int16_t* rbp_1 = *(r15 + 0x60)
                                            void* rbx_3 = *(rbp_1 + 0x28)
                                            void* r14_2 = rbx_3 + zx.q(*rbp_1) * 0xc
                                            
                                            if (rbx_3 u< r14_2)
                                                while (true)
                                                    *rbx_3 = sub_142b96720(rdi)
                                                    *(rbx_3 + 4) = sub_142b967c0(rdi)
                                                    uint16_t rax_6 = sub_142b967c0(rdi)
                                                    uint64_t rcx_18 = zx.q(*(rbx_3 + 4))
                                                    *(rbx_3 + 6) = rax_6
                                                    
                                                    if (rcx_18.d u>= *(rbp_1 + 8) || zx.d(rax_6)
                                                            u>= *(*(rbp_1 + 0x10) + rcx_18 * 0x18))
                                                        arg_8 = 8
                                                        break
                                                    
                                                    rbx_3 += 0xc
                                                    
                                                    if (rbx_3 u>= r14_2)
                                                        break
                                                    
                                                    continue
                                            
                                            result = sub_142b96620(rdi)
                                            
                                            if (arg_8 == 0)
                                                int16_t* rax_8 = *(r15 + 0x60)
                                                int32_t* i = *(rax_8 + 0x28)
                                                result = zx.q(*rax_8)
                                                
                                                for (void* r10_1 = &i[result * 3]; i u< r10_1; 
                                                        i = &i[3])
                                                    result = sub_142bb0eb0(arg1, *i)
                                                    
                                                    if (result != 0)
                                                        result = zx.q(*result)
                                                        i[2].w = result.w
                                                
                                                *(arg1 + 0x418) |= 0x100

return result
