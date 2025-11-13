// 函数: sub_142bdcac0
// 地址: 0x142bdcac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = *arg2
int32_t rbx = 0
char* r14 = *(arg2 + 8)
uint32_t r12 = 0
int32_t rdi = 0

if (r13 == 0)
    return 

int64_t r15_1 = 0

do
    if (rbx == 0)
        r12 = zx.d(*r14)
        rbx = 0x80
        r14 = &r14[1]
    
    if ((rbx & r12) != 0)
        int32_t* r11_2 = *(arg1 + 8) + r15_1
        
        if (rdi u< *arg1)
            uint64_t rax = zx.q(r11_2[4])
            
            if ((rax.b & 4) == 0)
                r11_2[4] = rax.d | 4
                int32_t i_1 = arg1[1]
                int64_t* r9_1 = *(arg1 + 0x18)
                *(r11_2 + 0x18) = 0
                
                if (i_1 != 0)
                    int32_t rsi_1 = *r11_2
                    int32_t i
                    
                    do
                        int32_t* r8_1 = *r9_1
                        int32_t rdx = *r8_1
                        
                        if (r11_2[1] + rsi_1 s>= rdx && rdx + r8_1[1] s>= rsi_1)
                            *(r11_2 + 0x18) = r8_1
                            break
                        
                        r9_1 = &r9_1[1]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                rax = zx.q(arg1[1])
                
                if (rax.d u< *arg1)
                    *(*(arg1 + 0x18) + (zx.q(rax.d) << 3)) = r11_2
                    arg1[1] += 1
    
    rbx s>>= 1
    rdi += 1
    r15_1 += 0x28
while (rdi u< r13)
