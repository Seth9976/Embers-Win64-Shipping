// 函数: sub_142bdbd80
// 地址: 0x142bdbd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *arg1
uint64_t result = *(arg1 + 0x28)
int32_t rbp = *((sx.q(arg2) + 1) * 0xcc + result)

if (i_1 != 0)
    int32_t* rbx_1 = *(arg1 + 8) + 0x38
    int32_t i
    
    do
        int32_t* rdi_1 = *(rbx_1 - 0x10)
        
        if (rdi_1 != 0)
            int32_t rax_2 = rbx_1[-7]
            
            if (test_bit(rax_2, 9))
                result = zx.q(rdi_1[2])
                *rbx_1 = result.d
            else if (not(test_bit(rax_2, 0xa)))
                int32_t rcx_1 = rbx_1[-2] - *rdi_1
                
                if (rcx_1 s> 0)
                    int32_t r8_1 = rdi_1[1]
                    
                    if (rcx_1 s< r8_1)
                        result = zx.q(sub_142b93dd0(rcx_1, rdi_1[3], r8_1) + rdi_1[2])
                        *rbx_1 = result.d
                    else
                        result = sub_142b93e80(rcx_1 - r8_1, rbp)
                        *rbx_1 = rdi_1[3] + result.d + rdi_1[2]
                else
                    result = zx.q(sub_142b93e80(rcx_1, rbp) + rdi_1[2])
                    *rbx_1 = result.d
            else
                result = zx.q(rdi_1[3] + rdi_1[2])
                *rbx_1 = result.d
            
            rbx_1[-7] |= 0x20
        
        rbx_1 = &rbx_1[0x10]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
