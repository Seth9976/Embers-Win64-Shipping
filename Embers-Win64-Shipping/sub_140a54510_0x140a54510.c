// 函数: sub_140a54510
// 地址: 0x140a54510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r8 = arg2
uint32_t rax_3
uint32_t rdx_2

while (true)
    int16_t rax_1 = *(arg1 - arg2 + r8)
    int16_t r9_1 = *r8
    r8 = &r8[1]
    
    if (rax_1 != r9_1)
        if (((zx.d(rax_1) | zx.d(r9_1)) & 0xffffff80) != 0)
            return zx.q(zx.d(rax_1) - zx.d(r9_1))
        
        rdx_2 = zx.d(*(zx.q(r9_1) + &data_142e5e8a0))
        rax_3 = zx.d(*(zx.q(rax_1) + &data_142e5e8a0))
        
        if (rax_3 != rdx_2)
            break
    else
        if (rax_1 == 0)
            return 0

return zx.q(rax_3 - rdx_2)
