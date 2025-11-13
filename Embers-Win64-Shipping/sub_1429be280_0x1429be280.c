// 函数: sub_1429be280
// 地址: 0x1429be280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg1 + 0x10)
int32_t result_2 = 0
int64_t rax
int64_t rdx
rdx:rax = muls.dp.q(0x2aaaaaaaaaaaaaab, *(arg1 + 0x18) - rsi)
int64_t rdi_1 = rdx s>> 2
uint64_t result = rdi_1 u>> 0x3f
int64_t rdi_2 = rdi_1 + result

if (rdi_1 == neg.q(result))
label_1429be346:
    result.b = 0
else
    result = 0
    
    while (true)
        uint64_t rax_2 = result * 3
        int32_t r9_1 = 0
        int64_t rbx_1 = *(rsi + (rax_2 << 3))
        int64_t rax_3
        int64_t rdx_1
        rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, *(rsi + (rax_2 << 3) + 8) - rbx_1)
        int64_t r10_2 = rdx_1 s>> 2
        uint64_t rax_5 = r10_2 u>> 0x3f
        
        if (r10_2 != neg.q(rax_5))
            uint64_t rax_6 = 0
            
            while (true)
                uint64_t rax_7 = rax_6 * 3
                int32_t result_1 = 0
                int64_t r8_1 = *(rbx_1 + (rax_7 << 3))
                int64_t rdx_4 = (*(rbx_1 + (rax_7 << 3) + 8) - r8_1) s>> 3
                
                if (rdx_4 != 0)
                    result = 0
                    
                    while (*(r8_1 + (result << 3)) u> 0)
                        result_1 += 1
                        result = zx.q(result_1)
                        
                        if (result u>= rdx_4)
                            goto label_1429be330
                    
                    result.b = 1
                    break
                
            label_1429be330:
                r9_1 += 1
                rax_6 = zx.q(r9_1)
                
                if (rax_6 u>= r10_2 + rax_5)
                    goto label_1429be33b
            
            break
        
    label_1429be33b:
        result_2 += 1
        result = zx.q(result_2)
        
        if (result u>= rdi_2)
            goto label_1429be346

return result
