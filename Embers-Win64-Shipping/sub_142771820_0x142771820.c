// 函数: sub_142771820
// 地址: 0x142771820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = arg5
int32_t* var_70 = r8

if (arg2 == 0 || arg3 u< 2)
    *r8 = 0
    return 

uint64_t r11 = zx.q(*arg2)
char r12 = arg2[1]
uint64_t r10_2 = zx.q(*(arg1 + 0x20) * *(arg1 + 0x1c) * 2)

if (r11.d != 0 && r11.d s<= divs.dp.d(0:0xc000, r10_2.d))
    int32_t rbp = ((r11 << 1) + 2).d
    uint64_t rax
    int32_t r9
    
    if (rbp u<= arg3)
        rax = 0
        r9 = 0
        
        if (r11.d != 0)
            int64_t r8_1 = 0
            
            do
                int16_t rdx_1 = *(arg2 + 2 + (r8_1 << 1))
                
                if (rdx_1 u< rax.w)
                    goto label_1427719af
                
                r8_1 += 1
                uint32_t rcx_1 = zx.d(rdx_1) - zx.d(rax.w)
                rax = zx.q(rdx_1)
                r9 += rcx_1
            while (r8_1 s< r11)
            
            r8 = var_70
    
    int32_t rbx_1
    
    if (rbp u> arg3 || rbp u> arg3 || r9 + rbp u> arg3)
    label_1427719af:
        rbx_1 = 0
    else
        int32_t r14_1 = 0
        int16_t rcx_2 = 0
        rbx_1 = 0
        
        if (r11.d != 0)
            int64_t rdi_1 = 0
            
            while (*r8 - rbx_1 s>= (r10_2 * 3).d * 2)
                rax = zx.q(*(arg2 + 2 + (rdi_1 << 1)))
                
                if (rax.w != 0)
                    uint32_t rbp_2 = zx.d(rax.w) - zx.d(rcx_2)
                    int32_t rax_5 = opus_decode(*(arg1 + 0x28), &arg2[zx.q(rbp) + sx.q(r14_1)], 
                        zx.q(rbp_2), sx.q(rbx_1) + arg4, 0x780, 0)
                    
                    if (rax_5 s>= 0)
                        rbx_1 += (*(arg1 + 0x1c) * rax_5) << 1
                    else
                        opus_strerror(rax_5)
                    
                    rcx_2 = *(arg2 + 2 + (rdi_1 << 1))
                    r14_1 += rbp_2
                    r8 = var_70
                
                rdi_1 += 1
                
                if (rdi_1 s>= r11)
                    break
    
    *var_70 = rbx_1
    *(arg1 + 0x48) = r12
    return 

*r8 = 0
*(arg1 + 0x48) = r12
