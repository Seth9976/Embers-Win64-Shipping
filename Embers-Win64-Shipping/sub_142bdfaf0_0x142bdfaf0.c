// 函数: sub_142bdfaf0
// 地址: 0x142bdfaf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r11 = *(arg1 + 0x18)
uint32_t result = 0
uint32_t rbx_6 = ((zx.d(*(r11 + 0xc)) << 8 | zx.d(*(r11 + 0xd))) << 8 | zx.d(*(r11 + 0xe))) << 8
    | zx.d(*(r11 + 0xf))
uint32_t r10_6 = ((zx.d(*(r11 + 0x10)) << 8 | zx.d(*(r11 + 0x11))) << 8 | zx.d(*(r11 + 0x12))) << 8
    | zx.d(*(r11 + 0x13))
int32_t rcx_6 = *arg2

if (rcx_6 u< 0xffffffff)
    uint32_t r8_1 = rbx_6
    
    if (rcx_6 + 1 u>= rbx_6)
        r8_1 = rcx_6 + 1
    
    uint32_t r9_2 = r8_1 - rbx_6
    
    if (r9_2 u< r10_6)
        void* rdx_1 = zx.q(r9_2 * 2) + r11 + 0x13
        
        do
            uint32_t rax = zx.d(*(rdx_1 + 1))
            rdx_1 += 2
            result = rax << 8 | zx.d(*rdx_1)
            
            if (result != 0)
                break
            
            if (r8_1 u>= 0xffffffff)
                return 0
            
            r8_1 += 1
            r9_2 += 1
        while (r9_2 u< r10_6)
    
    *arg2 = r8_1

return result
