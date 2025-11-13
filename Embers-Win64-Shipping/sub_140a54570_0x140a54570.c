// 函数: sub_140a54570
// 地址: 0x140a54570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = arg1
uint32_t rax_5
uint32_t rcx_2

while (true)
    uint32_t r8_1 = zx.d(*r10)
    r10 = &r10[1]
    int32_t r11_1 = sx.d(*arg2)
    arg2 = &arg2[1]
    
    if (r8_1 != r11_1)
        if (((r8_1 | r11_1) & 0xffffff80) != 0)
            return zx.q(r8_1 - zx.d(r11_1.b))
        
        rcx_2 = zx.d(*(zx.q(r11_1.b) + &data_142e5e8a0))
        rax_5 = zx.d(*(zx.q(r8_1.w) + &data_142e5e8a0))
        
        if (rax_5 != rcx_2)
            break
    else
        if (r8_1.w == 0)
            return 0

return zx.q(rax_5 - rcx_2)
