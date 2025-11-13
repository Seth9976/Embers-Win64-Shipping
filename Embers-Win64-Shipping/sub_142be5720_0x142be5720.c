// 函数: sub_142be5720
// 地址: 0x142be5720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 4 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

uint32_t r8_2 = zx.d(*(arg1 + 2)) << 8 | zx.d(*(arg1 + 3))

if (zx.q(r8_2) + arg1 u> *(arg2 + 0x108) || r8_2 u< 0x106)
    sub_142b9a750(arg2, 8)
    noreturn

if (arg2[0x11].d s>= 1)
    void* rdi_1 = arg1 + 6
    int64_t i_1 = 0x100
    int64_t i
    
    do
        uint32_t rax_4 = zx.d(*rdi_1)
        rdi_1 += 1
        
        if (rax_4 u>= arg2[0x12].d)
            sub_142b9a750(arg2, 0x10)
            noreturn
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
