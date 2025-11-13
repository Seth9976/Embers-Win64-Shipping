// 函数: sub_142be57e0
// 地址: 0x142be57e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x18)
uint32_t rdi = 0
uint32_t r9_1 = *arg2 + 1
uint32_t result = 0
uint32_t rbx_2 = zx.d(*(r11 + 6)) << 8 | zx.d(*(r11 + 7))
uint32_t r10_2 = zx.d(*(r11 + 8)) << 8 | zx.d(*(r11 + 9))

if (r9_1 u< 0x10000)
    uint32_t r8_1 = rbx_2
    
    if (r9_1 u>= rbx_2)
        r8_1 = r9_1
    
    uint32_t r9_3 = r8_1 - rbx_2
    
    if (r9_3 u< r10_2)
        void* rdx_1 = zx.q(r9_3 * 2) + r11 + 9
        
        while (true)
            uint32_t rax = zx.d(*(rdx_1 + 1))
            rdx_1 += 2
            result = rax << 8 | zx.d(*rdx_1)
            
            if (result != 0)
                rdi = r8_1
                break
            
            if (r8_1 u>= 0xffff)
                return 0
            
            r8_1 += 1
            r9_3 += 1
            
            if (r9_3 u>= r10_2)
                *arg2 = 0
                return result
    
    *arg2 = rdi

return result
