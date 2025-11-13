// 函数: sub_142be2ef0
// 地址: 0x142be2ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (rdi.d u>= zx.d(*(arg1 + 0x174)))
    return 0x10

int64_t rsi = *(arg1 + 0x2d8)

if (rsi == 0)
    return zx.q((rsi + 7).d)

*arg3 = (*(rsi + 0x20))(0)
int32_t rax_5 = *(arg1 + 0x270)

if (rax_5 != 0x10000)
    if (rax_5 == 0x20000)
        int32_t rax_6
        
        if (*(arg1 + 0x350) == 0)
            rax_6 = sub_142be78c0(arg1, arg4)
        
        if ((*(arg1 + 0x350) != 0 || rax_6 == 0) && rdi.d u< zx.d(*(arg1 + 0x358)))
            int16_t rdx = *(*(arg1 + 0x360) + (rdi << 1))
            
            if (rdx u>= 0x102)
                *arg3 = *(*(arg1 + 0x368) + (sx.q(zx.d(rdx) - 0x102) << 3))
            else
                *arg3 = (*(rsi + 0x20))(zx.q(rdx))
    else if (rax_5 == 0x25000)
        int32_t rax_12
        
        if (*(arg1 + 0x350) == 0)
            rax_12 = sub_142be78c0(arg1, arg4)
        
        if ((*(arg1 + 0x350) != 0 || rax_12 == 0) && rdi.d u< zx.d(*(arg1 + 0x358)))
            *arg3 = (*(rsi + 0x20))(zx.q(sx.d(*(*(arg1 + 0x360) + rdi)) + rdi.d))
else if (rdi.d u< 0x102)
    *arg3 = (*(rsi + 0x20))(zx.q(rdi.d))

return 0
