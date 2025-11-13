// 函数: sub_142a6b7a0
// 地址: 0x142a6b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0x17

if (*arg2 == 0xffffffff)
    return 0x17

int32_t* rbp = arg2
int64_t r14 = 0
int32_t* r15 = arg2

while (i == 0x17)
    int32_t rdi_1 = 0
    
    if (*rbp != 0xffffffff)
        int32_t j = *r15
        int64_t r11_1 = r14
        int32_t* rbx_1 = rbp
        
        do
            int32_t rcx = 0
            int64_t r8_1
            r8_1.b = j s>= 0x20
            
            if (arg2[r11_1 + r8_1] != 0xffffffff)
                int64_t rax_2 = r11_1 + r8_1
                void* r8_2 = &arg2[rax_2]
                int32_t k = arg2[rax_2]
                
                do
                    int32_t rax_4 = *(arg1 + (sx.q(k) << 2) + 0x80)
                    
                    if (rax_4 == 0)
                        goto label_142a6b86e
                    
                    if (rax_4 s> rcx)
                        rcx = rax_4
                    
                    k = *(r8_2 + 4)
                    r8_2 += 4
                while (k != 0xffffffff)
            
            if (rcx s> rdi_1)
                if (j s< 0x20)
                    i = j
                    rdi_1 = rcx
                else
                    j &= 0x1f
                    
                    if (j != 5 || *(arg1 + 0x90) s< *(arg1 + 0x94))
                        i = j
                        rdi_1 = rcx
                    else if (i == j)
                        rdi_1 = rcx
            
        label_142a6b86e:
            j = rbx_1[8]
            rbx_1 = &rbx_1[8]
            r11_1 += 8
        while (j != 0xffffffff)
    
    rbp = &rbp[0x60]
    r15 = &r15[0x60]
    r14 += 0x60
    
    if (*rbp == 0xffffffff)
        break

return zx.q(i)
