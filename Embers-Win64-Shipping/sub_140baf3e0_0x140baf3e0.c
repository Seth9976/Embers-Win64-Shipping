// 函数: sub_140baf3e0
// 地址: 0x140baf3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *(arg1 + 0x1d8)
EnterCriticalSection(rsi + 0x290)
int32_t* r14 = *(arg1 + 0x148)
int64_t rbp = 0
int64_t* result = &r14[sx.q(*(arg1 + 0x150))]
uint64_t r15_1 = sx.q(*(arg1 + 0x150)) << 2 u>> 2

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        result = zx.q(*(rsi + 0x248))
        
        if (result.d != *(rsi + 0x274))
            void* rax_1 = *(rsi + 0x280)
            void* r10_1 = rsi + 0x278
            int64_t r9_1 = sx.q(*r14)
            int64_t r11_2 = sx.q(*(rsi + 0x288)) - 1
            
            if (rax_1 != 0)
                r10_1 = rax_1
            
            result = r9_1 & r11_2
            int32_t i = *(r10_1 + (result << 2))
            
            if (i != 0xffffffff)
                int64_t r8_1 = *(rsi + 0x240)
                
                do
                    int64_t i_1 = sx.q(i)
                    result = i_1 * 3
                    
                    if (*(r8_1 + (result << 2)) == r9_1.d)
                        int64_t rax_3 = i_1 * 3
                        int64_t rax_5 = sx.q(*(r8_1 + (rax_3 << 2) + 8)) & r11_2
                        void* rcx_1 = r10_1 + (rax_5 << 2)
                        int32_t j = *(r10_1 + (rax_5 << 2))
                        
                        while (j != 0xffffffff)
                            if (j == i)
                                *rcx_1 = *(r8_1 + (rax_3 << 2) + 4)
                                break
                            
                            int64_t j_1 = sx.q(j)
                            j = *(r8_1 + ((j_1 * 3 + 1) << 2))
                            rcx_1 = r8_1 + ((j_1 * 3 + 1) << 2)
                        
                        result = sub_14090a460(rsi + 0x240, i, 1)
                        break
                    
                    i = *(r8_1 + (result << 2) + 4)
                while (i != 0xffffffff)
        
        r14 = &r14[1]
        rbp += 1
    while (rbp != r15_1)

if (rsi != -0x290)
    result = LeaveCriticalSection(rsi + 0x290)

*(arg1 + 0x150) = 0

if (*(arg1 + 0x154) s> 0xffffffff)
    return result

return sub_1405dadb0(arg1 + 0x148, 0)
