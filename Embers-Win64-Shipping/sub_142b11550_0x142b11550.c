// 函数: sub_142b11550
// 地址: 0x142b11550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rdi = *(arg1 + 0x18)
int64_t r11 = *(arg1 + 0x50) + (sx.q(arg2) << 3)

while (true)
    int32_t r9_1 = arg3 + 1 + *r11
    int32_t rax_2
    
    if (rdi s< 0)
        rax_2 = *(arg1 + 0x1c)
    else
        rax_2 = sx.d(rdi) s>> 5
    
    int16_t rcx_1
    
    if (r9_1 u>= rax_2)
        rcx_1 = -1
    else
        void* rcx = arg1 + 0x1a
        
        if ((rdi.b & 2) == 0)
            rcx = *(arg1 + 0x28)
        
        rcx_1 = *(rcx + (sx.q(r9_1) << 1))
    
    if (arg4 != rcx_1)
        break
    
    arg2 += 1
    r11 += 8

return zx.q(arg2)
