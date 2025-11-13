// 函数: sub_142a93ce0
// 地址: 0x142a93ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = *arg1
int32_t r14 = 0
int32_t rbx = 0
int32_t r9 = 0
int32_t* r10 = arg3

if (r15 != 0)
    int64_t r13_1 = *(arg1 + 8)
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg2[rax_1] != 0)
    
    char i_1 = *arg2
    
    do
        int32_t r8 = 0
        int64_t rdx = 0
        char* r11_1 = *((zx.q(r9) << 4) + r13_1 + 8)
        
        if (i_1 == *r11_1)
            char i = i_1
            char* rax_4 = r11_1
            
            while (i != 0)
                i = *(arg2 - r11_1 + rax_4 + 1)
                rax_4 = &rax_4[1]
                r8 += 1
                rdx += 1
                
                if (i != *rax_4)
                    break
        
        if (r8 s> rbx && r11_1[rdx] == 0)
            if (sx.q(rax_1.d) == rdx)
                return zx.q(*(r13_1 + zx.q(r9) * 0x10))
            
            rbx = r8
            r14 = r9
        
        r9 += 1
    while (r9 u< r15)
    
    r10 = arg3

int64_t r9_1 = sx.q(rbx)
char rax_5 = arg2[r9_1]

if (rax_5 == 0x5f || rax_5 == 0x40)
    int64_t r8_2 = sx.q(r14) * 2
    
    if (*(r9_1 + *(*(arg1 + 8) + (r8_2 << 3) + 8)) == 0)
        *r10 = 0xffffff80
        return zx.q(*(*(arg1 + 8) + (r8_2 << 3)))

*r10 = 1
return zx.q(**(arg1 + 8))
