// 函数: sub_140a54660
// 地址: 0x140a54660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg3
char* r10 = arg1

if (arg3 != 0)
    while (true)
        int32_t r8 = sx.d(*r10)
        r10 = &r10[1]
        uint32_t r11_1 = zx.d(*arg2)
        arg2 = &arg2[1]
        
        if (r8 != r11_1)
            if (((r8 | r11_1) & 0xffffff80) != 0)
                return zx.q(zx.d(r8.b) - r11_1)
            
            uint32_t rcx_1 = zx.d(*(zx.q(r11_1.w) + &data_142e5e8a0))
            uint32_t rax_6 = zx.d(*(zx.q(r8.b) + &data_142e5e8a0))
            
            if (rax_6 != rcx_1)
                return zx.q(rax_6 - rcx_1)
        else if (r8.b == 0)
            break
        
        int64_t temp1_1 = r9
        r9 -= 1
        
        if (temp1_1 == 1)
            return 0

return 0
