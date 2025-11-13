// 函数: sub_142be5450
// 地址: 0x142be5450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0xa u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

char* rbx = arg1 + 9
uint32_t r8_2 = zx.d(*(arg1 + 2)) << 8 | zx.d(*(arg1 + 3))
uint64_t rsi_3 = zx.q(zx.d(*(arg1 + 8)) << 8) | zx.q(*rbx)

if (zx.q(r8_2) + arg1 u> *(arg2 + 0x108) || r8_2 u< ((rsi_3 << 1) + 0xa).d)
    sub_142b9a750(arg2, 8)
    noreturn

if (arg2[0x11].d s>= 1 && rsi_3.d != 0)
    int32_t i
    
    do
        uint32_t rcx_4 = zx.d(rbx[1])
        rbx = &rbx[2]
        
        if ((rcx_4 << 8 | zx.d(*rbx)) u>= arg2[0x12].d)
            sub_142b9a750(arg2, 0x10)
            noreturn
        
        i = rsi_3.d
        rsi_3 = zx.q(rsi_3.d - 1)
    while (i != 1)

return 0
