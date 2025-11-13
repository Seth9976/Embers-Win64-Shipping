// 函数: sub_141df6270
// 地址: 0x141df6270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(*(arg2 + 0x18))
int32_t r9 = 0
int64_t r11 = *(arg2 + 0x40)

if (rax.d s> 0)
    int64_t r10_1 = rax
    int64_t rcx = 0
    rax = *(arg2 + 0x10) + 8
    
    do
        if (*rax == arg3)
            int32_t var_10 = 0
            int64_t r10_2 = sx.q(r9) * 3
            int64_t rax_6 = sub_141f9d940(zx.d(*(r11 + (r10_2 << 2))), 
                zx.d(*(r11 + (r10_2 << 2) + 1)), zx.d(*(r11 + (r10_2 << 2) + 2)), 
                zx.d(*(r11 + (r10_2 << 2) + 3)), *(r11 + (r10_2 << 2) + 4), 
                *(r11 + (r10_2 << 2) + 8) + r11.d, arg4)
            return rax_6
        
        r9 += 1
        rcx += 1
        rax += 0xc
    while (rcx s< r10_1)

int512_t zmm0
zmm0.o = zx.o(0)
return rax
