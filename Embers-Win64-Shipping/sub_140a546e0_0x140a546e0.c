// 函数: sub_140a546e0
// 地址: 0x140a546e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg3
int16_t* r9 = arg2

if (arg3 != 0)
    while (true)
        int16_t rdx = *(arg1 - arg2 + r9)
        int16_t r8 = *r9
        r9 = &r9[1]
        
        if (rdx != r8)
            if (((zx.d(rdx) | zx.d(r8)) & 0xffffff80) != 0)
                return zx.q(zx.d(rdx) - zx.d(r8))
            
            uint32_t rcx_2 = zx.d(*(zx.q(r8) + &data_142e5e8a0))
            uint32_t rax_5 = zx.d(*(zx.q(rdx) + &data_142e5e8a0))
            
            if (rax_5 != rcx_2)
                return zx.q(rax_5 - rcx_2)
        else if (rdx == 0)
            break
        
        int64_t temp1_1 = r10
        r10 -= 1
        
        if (temp1_1 == 1)
            return 0

return 0
