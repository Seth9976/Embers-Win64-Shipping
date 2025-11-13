// 函数: sub_1403e77a0
// 地址: 0x1403e77a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg5)
int64_t rsi = sx.q(arg4)

if (rbx s< rsi)
    int64_t i_1 = rsi - rbx
    void* r11_2 = arg2 + ((rbx - 2) << 1)
    int64_t i
    
    do
        int64_t r9 = 6
        int32_t r10_7 = sx.d(*(r11_2 - 8)) * sx.d(arg3[5]) + sx.d(*(r11_2 - 6)) * sx.d(arg3[4])
            + sx.d(*(r11_2 - 4)) * sx.d(arg3[3]) + sx.d(*(r11_2 - 2)) * sx.d(arg3[2])
            + sx.d(*arg3) * sx.d(*(r11_2 + 2)) + sx.d(arg3[1]) * sx.d(*r11_2)
        
        if (6 s< rbx)
            void* r8 = r11_2 - 0xa
            
            do
                int32_t rcx_10 = sx.d(arg3[r9])
                int32_t rdx_1 = sx.d(arg3[r9 + 1]) * sx.d(*(r8 - 2))
                int32_t rax_8 = sx.d(*r8)
                r9 += 2
                r8 -= 4
                r10_7 = r10_7 + rcx_10 * rax_8 + rdx_1
            while (r9 s< rbx)
        
        int32_t rax_14 = ((((sx.d(*(r11_2 + 4)) << 0xc) - r10_7) s>> 0xb) + 1) s>> 1
        
        if (rax_14 s> 0x7fff)
            rax_14 = 0x7fff
        else if (rax_14 s< 0xffff8000)
            rax_14 = -0x8000
        
        *(r11_2 + arg1 - arg2 + 4) = rax_14.w
        r11_2 += 2
        i = i_1
        i_1 -= 1
    while (i != 1)

return memset(arg1, 0, rbx * 2) __tailcall
