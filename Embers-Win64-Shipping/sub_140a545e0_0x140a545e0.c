// 函数: sub_140a545e0
// 地址: 0x140a545e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg3
char* r9 = arg2

if (arg3 != 0)
    while (true)
        char rax_1 = *(arg1 - arg2 + r9)
        char r8 = *r9
        r9 = &r9[1]
        
        if (rax_1 != r8)
            if (((sx.d(r8) | sx.d(rax_1)) & 0xffffff80) != 0)
                return zx.q(zx.d(rax_1) - zx.d(r8))
            
            uint32_t rdx_2 = zx.d(*(zx.q(r8) + &data_142e5e8a0))
            uint32_t rax_3 = zx.d(*(zx.q(rax_1) + &data_142e5e8a0))
            
            if (rax_3 != rdx_2)
                return zx.q(rax_3 - rdx_2)
        else if (rax_1 == 0)
            break
        
        int64_t temp1_1 = r10
        r10 -= 1
        
        if (temp1_1 == 1)
            return 0

return 0
