// 函数: sub_140990840
// 地址: 0x140990840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)

if (rsi.d != 0)
    int32_t rcx = arg1[0x87].d
    int32_t rdx = rcx + rsi.d
    
    if (rdx s> *(arg1 + 0x43c))
        sub_140991380(&arg1[0x86], rdx)
        rcx = arg1[0x87].d
    
    memcpy(arg1[0x86] + sx.q(rcx) * 0x24, *arg2, (rsi * 0x24).d)
    arg1[0x87].d += rsi.d

sub_141ee8490(arg1)
jump(*(*arg1 + 0x498))
