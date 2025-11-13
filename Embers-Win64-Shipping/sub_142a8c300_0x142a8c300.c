// 函数: sub_142a8c300
// 地址: 0x142a8c300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 s<= 0)
    return 0

uint32_t r10 = zx.d(*arg1)
uint32_t rax = zx.d(*arg2)
uint32_t r9_1 = r10 - rax

if (r10 == rax)
    void* r11 = arg1 - arg2
    
    while (r10.w != 0)
        int32_t temp1_1 = arg3
        arg3 -= 1
        
        if (temp1_1 == 1)
            break
        
        uint32_t r9_2 = zx.d(*(r11 + arg2 + 2))
        arg2 = &arg2[1]
        r10 = zx.d(r9_2.w)
        uint32_t rcx = zx.d(*arg2)
        r9_1 = r9_2 - rcx
        
        if (r9_2 != rcx)
            break

return zx.q(r9_1)
