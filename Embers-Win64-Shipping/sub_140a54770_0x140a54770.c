// 函数: sub_140a54770
// 地址: 0x140a54770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg3
char* r11 = arg2
int16_t* rbx = arg1

if (arg3 != 0)
    while (true)
        uint32_t r8 = zx.d(*rbx)
        rbx = &rbx[1]
        int32_t r10_1 = sx.d(*r11)
        r11 = &r11[1]
        
        if (r8 != r10_1)
            if (((r8 | r10_1) & 0xffffff80) != 0)
                return zx.q(r8 - zx.d(r10_1.b))
            
            uint32_t rcx_1 = zx.d(*(zx.q(r10_1.b) + &data_142e5e8a0))
            uint32_t rax_6 = zx.d(*(zx.q(r8.w) + &data_142e5e8a0))
            
            if (rax_6 != rcx_1)
                return zx.q(rax_6 - rcx_1)
        else if (r8.w == 0)
            break
        
        int64_t temp1_1 = r9
        r9 -= 1
        
        if (temp1_1 == 1)
            return 0

return 0
