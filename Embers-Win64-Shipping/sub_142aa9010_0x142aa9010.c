// 函数: sub_142aa9010
// 地址: 0x142aa9010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = *(arg1 + 0x10)
int32_t r11 = *(arg2 + 0x10)
int32_t r9 = 0
int16_t* r8 = nullptr

while (true)
    int32_t rax_1 = r11
    
    if (r10 s< r11)
        rax_1 = r10
    
    if (r9 s>= rax_1)
        if (r10 s< r11)
            return 0xffffffff
        
        int32_t rbx
        rbx.b = r10 s> r11
        return zx.q(rbx)
    
    int16_t rcx = *(r8 + *(arg1 + 8))
    int16_t rdx = *(r8 + *(arg2 + 8))
    
    if (rcx u< rdx)
        return 0xffffffff
    
    if (rcx u> rdx)
        break
    
    r9 += 1
    r8 = &r8[1]

return 1
