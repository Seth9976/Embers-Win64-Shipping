// 函数: sub_1429d28d0
// 地址: 0x1429d28d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg3)
int64_t rsi = sx.q(arg2)
uint32_t r11 = zx.d(*(*(*(arg1 + 0x10) + 0x48) + (rbx << 1)))

if (r11 u> 1)
    int32_t rcx = 1
    
    if (r11 s> 1)
        int64_t rdx_2 = sx.q(*(*(*(arg1 + 0x20) + 0x60) + (rsi << 2)) + 1) * 2
        
        do
            rdx_2 += 2
            *(rdx_2 + *(arg1 + 0x28) - 2) = rcx.w
            rcx += 1
        while (rcx s< r11)
    
    int64_t* r8 = *(arg1 + 0x10)
    int32_t r10_1 = (rsi * 2).d
    int64_t* r8_1 = *(arg1 + 0x20)
    int64_t r9_1 = *(*r8_1 + 0x108)
    int16_t* rcx_3 = r8_1[0xf] + (sx.q(*(r9_1 + (sx.q(r10_1 + 1) << 2))) << 1)
    int32_t i_2 = *(r9_1 + (sx.q(r10_1) << 2))
    
    if (i_2 s> 0)
        int16_t* rbx_2 =
            r8[0xf] + (sx.q(*(*(*r8 + 0x108) + (sx.q(((rbx << 1) + 1).d) << 2))) << 1) - rcx_3
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            *rcx_3 = *(rbx_2 + rcx_3)
            rcx_3 = &rcx_3[1]
            i = i_1
            i_1 -= 1
        while (i != 1)

return zx.q(r11)
