// 函数: sub_140371760
// 地址: 0x140371760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r14 = *(arg1 + 0xa4)
int64_t r8 = *(arg1 + 0x50)
uint64_t rdi = zx.q(*(arg1 + 0x94))
char* r9 = r8 + rdi
int64_t result = sx.q(*(arg1 + 0xa0))
int32_t rsi = *(arg1 + 0xb8)
int32_t rbp = 0xfffffefa + *(arg1 + 0x44)
int32_t r11 = rbp

if (rdi.d u> rbp)
    r11 = rdi.d

int64_t r10 = *(arg1 + 0x60)
int32_t r12 = *(arg1 + 0x4c)
uint64_t rbx
rbx.b = r9[result - 1]
char var_59 = rbx.b
int64_t r15
r15.b = r9[result]
uint32_t rbp_2 = r14 u>> 2

if (result.d u< *(arg1 + 0xb4))
    rbp_2 = r14

int32_t r13 = *(arg1 + 0x9c)

if (rsi u> r13)
    rsi = r13

int32_t var_58 = r13

while (true)
    uint64_t r14_1 = zx.q(arg2)
    char* rsi_2 = r8 + r14_1
    int64_t rdi_3 = sx.q(result.d)
    
    if (rsi_2[rdi_3] == r15.b)
        rbx.b = var_59
        
        if (rsi_2[rdi_3 - 1] == rbx.b)
            rbx.b = *rsi_2
            
            if (rbx.b == *r9)
                rbx.b = rsi_2[1]
                
                if (rbx.b == r9[1])
                    void* r14_2 = r14_1 + r8 + 0xa
                    int64_t r13_1 = 0
                    int32_t r14_4
                    
                    while (true)
                        if (r9[r13_1 + 3] != *(r14_2 + r13_1 - 7))
                            r14_4 = r9.d + r13_1.d + 3
                            break
                        
                        if (r9[r13_1 + 4] != *(r14_2 + r13_1 - 6))
                            r14_4 = r9.d + r13_1.d + 4
                            break
                        
                        if (r9[r13_1 + 5] != *(r14_2 + r13_1 - 5))
                            r14_4 = r9.d + r13_1.d + 5
                            break
                        
                        if (r9[r13_1 + 6] != *(r14_2 + r13_1 - 4))
                            r14_4 = r9.d + r13_1.d + 6
                            break
                        
                        if (r9[r13_1 + 7] != *(r14_2 + r13_1 - 3))
                            r14_4 = r9.d + r13_1.d + 7
                            break
                        
                        if (r9[r13_1 + 8] != *(r14_2 + r13_1 - 2))
                            r14_4 = r9.d + r13_1.d + 8
                            break
                        
                        if (r9[r13_1 + 9] != *(r14_2 + r13_1 - 1))
                            r14_4 = r9.d + r13_1.d + 9
                            break
                        
                        int64_t rsi_3 = r13_1 + 8
                        
                        if (r13_1 + 0xa u<= 0x101)
                            bool cond:1_1 = r9[r13_1 + 0xa] == *(r14_2 + r13_1)
                            r13_1 = rsi_3
                            
                            if (cond:1_1)
                                continue
                        
                        r14_4 = r9.d + rsi_3.d + 2
                        break
                    
                    r13 = var_58
                    
                    if (0x102 - (rdi.d + r8.d + 0x102 - r14_4) s> result.d)
                        *(arg1 + 0x98) = arg2
                        
                        if (0x102 - (rdi.d + r8.d + 0x102 - r14_4) s>= rsi)
                            result = zx.q(0x102 - (rdi.d + r8.d + 0x102 - r14_4))
                            break
                        
                        result.b = r9[0x102 - sx.q(rdi.d + r8.d + 0x102 - r14_4) - 1]
                        var_59 = result.b
                        r15.b = r9[0x102 - sx.q(rdi.d + r8.d + 0x102 - r14_4)]
                        result = zx.q(0x102 - (rdi.d + r8.d + 0x102 - r14_4))
    
    arg2 = zx.d(*(r10 + ((zx.q(arg2) & zx.q(r12)) << 1)))
    
    if (r11 - rbp u>= arg2)
        break
    
    uint32_t temp0_1 = rbp_2
    rbp_2 -= 1
    
    if (temp0_1 == 1)
        break

if (result.d u> r13)
    return zx.q(r13)

return result
