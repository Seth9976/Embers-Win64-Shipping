// 函数: sub_142bdf550
// 地址: 0x142bdf550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x14 u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

char* rbx = arg1 + 0x13
uint32_t rcx_7 =
    ((zx.d(*(arg1 + 4)) << 8 | zx.d(*(arg1 + 5))) << 8 | zx.d(*(arg1 + 6))) << 8 | zx.d(*(arg1 + 7))
uint32_t i_1 = ((zx.d(*(arg1 + 0x10)) << 8 | zx.d(*(arg1 + 0x11))) << 8 | zx.d(*(arg1 + 0x12))) << 8
    | zx.d(*rbx)

if (rcx_7 u> (*(arg2 + 0x108)).d - arg1.d || rcx_7 u< 0x14 || (rcx_7 - 0x14) u>> 1 u< i_1)
    sub_142b9a750(arg2, 8)
    noreturn

if (arg2[0x11].d s>= 1 && i_1 != 0)
    uint32_t i
    
    do
        uint32_t rcx_9 = zx.d(rbx[1])
        rbx = &rbx[2]
        
        if ((rcx_9 << 8 | zx.d(*rbx)) u>= arg2[0x12].d)
            sub_142b9a750(arg2, 0x10)
            noreturn
        
        i = i_1
        i_1 -= 1
    while (i != 1)

return 0
