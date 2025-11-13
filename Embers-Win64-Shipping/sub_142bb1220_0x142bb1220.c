// 函数: sub_142bb1220
// 地址: 0x142bb1220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0xa0)
void* r15 = *(arg1 + 0x410)
int32_t* rdi = nullptr
int64_t r12 = rsi[6]
int32_t result_1 = 0
*(r15 + 0x30) = 1
int32_t arg_10
int32_t result = (*(arg1 + 0x2a0))(arg2, 0x61766172, rsi, &arg_10)
result_1 = result

if (result == 0)
    result = sub_142b96500(rsi, arg_10)
    result_1 = result
    
    if (result == 0)
        int32_t rax = sub_142b96720(rsi)
        int32_t rax_1 = sub_142b96720(rsi)
        
        if (rax == 0x10000 && rax_1 == **(r15 + 0x18))
            int16_t* rax_2 = sub_142b99a90(r12, 0x10, 0, rax_1, 0, &result_1)
            *(r15 + 0x38) = rax_2
            int16_t* rbx_2 = rax_2
            
            if (result_1 == 0)
                int32_t r14_1 = 0
                
                if (rax_1 s> 0)
                    while (true)
                        uint64_t r9_2 = zx.q(sub_142b967c0(rsi))
                        *rbx_2 = r9_2.w
                        
                        if ((r9_2 << 2).d u<= arg_10)
                            *(rbx_2 + 8) = sub_142b99a90(r12, 8, 0, r9_2.d, 0, &result_1)
                            
                            if (result_1 == 0)
                                int32_t i = 0
                                
                                if (0 u< *rbx_2)
                                    do
                                        *(rdi + *(rbx_2 + 8)) = sx.d(sub_142b967c0(rsi)) << 2
                                        rdi = &rdi[2]
                                        i += 1
                                        *(*(rbx_2 + 8) + rdi - 4) = sx.d(sub_142b967c0(rsi)) << 2
                                    while (i s< zx.d(*rbx_2))
                                    
                                    rdi = nullptr
                                
                                r14_1 += 1
                                rbx_2 = &rbx_2[8]
                                
                                if (r14_1 s>= rax_1)
                                    break
                                
                                continue
                        
                        int64_t rdi_1 = sx.q(r14_1 - 1)
                        
                        if (r14_1 - 1 s>= 0)
                            int64_t rbx_4 = rdi_1 << 4
                            int64_t temp0_1
                            
                            do
                                sub_142b99980(r12, *(*(r15 + 0x38) + rbx_4 + 8))
                                temp0_1 = rdi_1
                                rdi_1 -= 1
                                rbx_4 -= 0x10
                                *(*(r15 + 0x38) + rbx_4 + 0x18) = 0
                            while (temp0_1 - 1 s>= 0)
                        
                        sub_142b99980(r12, *(r15 + 0x38))
                        *(r15 + 0x38) = 0
                        break
        
        return sub_142b96620(rsi)

return result
