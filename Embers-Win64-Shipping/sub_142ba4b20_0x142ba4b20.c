// 函数: sub_142ba4b20
// 地址: 0x142ba4b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15_1 = sx.q(arg4) * 0x898 + arg1
void* r14 = *(r15_1 + 0x40)
void* i = r14 + sx.q(*(r15_1 + 0x38)) * 0x48
int32_t rdi

if (arg2 == 0)
    rdi = 0
else
    rdi = *(arg3 + zx.q(arg2 - 1) * 0xc)

uint64_t rcx = zx.q(*(*(arg1 + 0x1170) + 0x38))
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((rcx << 3).d)
int32_t rbp_1 = ((temp2 & 0x7ff) + temp3) s>> 0xb

if (rbp_1 == 0)
    rbp_1 = 1

int32_t temp4
int32_t result_1
temp4:result_1 = sx.q(rcx.d * 0x1770)
uint64_t result = zx.q(result_1)
int32_t rsi_1 = ((temp4 & 0x7ff) + result.d) s>> 0xb

if (r14 u< i)
    char* r9_1 = r14 + 1
    
    do
        if (sx.d(*r9_1) == *(r15_1 + 0x58))
            void* r8 = r14 + 6
            
            do
                int32_t r10_1 = sx.d(*(r9_1 + 1))
                int32_t rcx_2 = sx.d(*(r8 - 4))
                
                if (sx.d(*r9_1) == neg.d(sx.d(*(r8 - 5))) && rcx_2 s> r10_1)
                    int32_t rax_9 = sx.d(*r8)
                    int32_t rdx_6 = sx.d(*(r9_1 + 5))
                    int32_t r11_1 = sx.d(*(r9_1 + 7))
                    
                    if (rdx_6 s< rax_9)
                        rdx_6 = rax_9
                    
                    int32_t rax_10 = sx.d(*(r8 + 2))
                    
                    if (r11_1 s> rax_10)
                        r11_1 = rax_10
                    
                    int32_t r11_2 = r11_1 - rdx_6
                    
                    if (r11_2 s>= rbp_1)
                        int32_t rcx_3 = rcx_2 - r10_1
                        
                        if (rdi != 0)
                            int32_t temp13_1
                            int32_t temp14_1
                            temp13_1:temp14_1 = sx.q(rcx_3 << 0xa)
                            
                            if (divs.dp.d(temp13_1:temp14_1, rdi) - 0x400 s> 0x2710)
                                rcx_3 = 0x7d00
                            else if (divs.dp.d(temp13_1:temp14_1, rdi) - 0x400 s<= 0)
                                rcx_3 = 0
                            else
                                rcx_3 = (divs.dp.d(temp13_1:temp14_1, rdi) - 0x400)
                                    * (divs.dp.d(temp13_1:temp14_1, rdi) - 0x400) s/ 0xbb8
                        
                        int32_t rax_19 = divs.dp.d(sx.q(rsi_1), r11_2) + rcx_3
                        
                        if (rax_19 s< *(r9_1 + 0x2f))
                            *(r9_1 + 0x2f) = rax_19
                            *(r9_1 + 0x1f) = r8 - 6
                        
                        if (rax_19 s< *(r8 + 0x2a))
                            *(r8 + 0x2a) = rax_19
                            *(r8 + 0x1a) = &r9_1[-1]
                
                r8 += 0x48
            while (r8 - 6 u< i)
        
        r9_1 = &r9_1[0x48]
        result = &r9_1[-1]
    while (result u< i)

if (r14 u< i)
    void* rcx_10 = r14 + 0x20
    
    do
        void* rdx_12 = *rcx_10
        
        if (rdx_12 != 0 && *(rdx_12 + 0x20) != rcx_10 - 0x20)
            *rcx_10 = 0
            *(rcx_10 + 8) = *(rdx_12 + 0x20)
        
        rcx_10 += 0x48
        result = rcx_10 - 0x20
    while (result u< i)

return result
