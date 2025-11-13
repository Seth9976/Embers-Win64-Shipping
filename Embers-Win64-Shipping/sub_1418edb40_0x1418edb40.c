// 函数: sub_1418edb40
// 地址: 0x1418edb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1418e08f0(arg1)
int64_t* rsi = *(arg1 + 8)
int64_t rbx = sx.q(rsi[1].d)

if (arg3 s> rbx.d)
    rsi[1].d = arg3
    
    if (arg3 s> *(rsi + 0xc))
        sub_1405daba0(rsi)
    
    memset(rbx + *rsi, 0, sx.q(arg3 - rbx.d))
else if (arg3 s< rbx.d && arg3 != rbx.d)
    rsi[1].d = arg3
    sub_1405dac10(rsi)

return memcpy(**(arg1 + 8), arg2, arg3) __tailcall
