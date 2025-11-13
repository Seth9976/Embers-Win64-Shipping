// 函数: sub_142bc2920
// 地址: 0x142bc2920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = -1
uint64_t result = -1

do
    result += 1
while (arg1[result] != 0)

do
    r8 += 1
while (arg2[r8] != 0)

if (result.d s> r8.d)
    int32_t r11_1 = 1
    int64_t rdi_1 = sx.q(r8.d)
    
    if (rdi_1 s>= 1)
        int64_t rcx = sx.q(result.d)
        void* r9_2 = &arg1[-1 + rcx]
        int64_t r10_1 = 1
        
        while (*r9_2 == *(rdi_1 - rcx - arg1 + arg2 + r9_2))
            r11_1 += 1
            r10_1 += 1
            r9_2 -= 1
            
            if (r10_1 s> rdi_1)
                break
    
    if (r11_1 s> r8.d)
        result = zx.q(result.d - r8.d - 1)
        
        if (result.d s> 0)
            void* rdx_4 = &arg1[sx.q(result.d)]
            
            do
                uint64_t rcx_3
                rcx_3.b = *rdx_4 - 0x20
                
                if (rcx_3.b u> 0x3f)
                    break
                
                if (not(test_bit(-0x7fffffffffffd7ff, rcx_3)))
                    break
                
                rdx_4 -= 1
                result = zx.q(result.d - 1)
            while (neg.q(arg1) + rdx_4 s> 0)
            
            if (result.d s> 0)
                result = sx.q(result.d + 1)
                arg1[result] = 0

return result
