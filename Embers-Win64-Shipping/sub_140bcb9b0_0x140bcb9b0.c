// 函数: sub_140bcb9b0
// 地址: 0x140bcb9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0xc8)
EnterCriticalSection(rsi + 0x1c8)
void* rax = *(arg1 + 0x90)
void* r14 = arg1 + 0x88

if (rax != 0)
    r14 = rax

int64_t rbp = 0
int64_t r15 = sx.q(*(arg1 + 0x98)) << 2
void* result = r14 + r15
uint64_t r15_1 = r15 u>> 2

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        result = zx.q(*(rsi + 0x180))
        
        if (result.d != *(rsi + 0x1ac))
            void* rax_2 = *(rsi + 0x1b8)
            void* r10_1 = rsi + 0x1b0
            int64_t r9_1 = sx.q(*r14)
            int64_t r11_2 = sx.q(*(rsi + 0x1c0)) - 1
            
            if (rax_2 != 0)
                r10_1 = rax_2
            
            result = r9_1 & r11_2
            int32_t i = *(r10_1 + (result << 2))
            
            if (i != 0xffffffff)
                int64_t r8_1 = *(rsi + 0x178)
                
                do
                    int64_t i_1 = sx.q(i)
                    result = i_1 * 3
                    
                    if (*(r8_1 + (result << 2)) == r9_1.d)
                        int64_t rax_4 = i_1 * 3
                        int64_t rax_6 = sx.q(*(r8_1 + (rax_4 << 2) + 8)) & r11_2
                        void* rcx_1 = r10_1 + (rax_6 << 2)
                        int32_t j = *(r10_1 + (rax_6 << 2))
                        
                        while (j != 0xffffffff)
                            if (j == i)
                                *rcx_1 = *(r8_1 + (rax_4 << 2) + 4)
                                break
                            
                            int64_t j_1 = sx.q(j)
                            j = *(r8_1 + ((j_1 * 3 + 1) << 2))
                            rcx_1 = r8_1 + ((j_1 * 3 + 1) << 2)
                        
                        result = sub_14090a460(rsi + 0x178, i, 1)
                        break
                    
                    i = *(r8_1 + (result << 2) + 4)
                while (i != 0xffffffff)
        
        r14 += 4
        rbp += 1
    while (rbp != r15_1)

if (rsi != -0x1c8)
    result = LeaveCriticalSection(rsi + 0x1c8)

*(arg1 + 0x98) = 0

if (*(arg1 + 0x9c) s> 0xffffffff)
    return result

return sub_140bcf1d0(arg1 + 0x88, 0)
