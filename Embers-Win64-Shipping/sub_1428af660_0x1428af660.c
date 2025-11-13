// 函数: sub_1428af660
// 地址: 0x1428af660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    return zx.q((arg1 - 1).d)

int32_t* rax_1 = *(arg1 + 8)
int32_t rsi = *rax_1

if (rsi == 1)
    int64_t* rcx = *(rax_1 + 8)
    
    if (arg3 != 0)
        *arg3 = *rcx
    
    if (arg2 != 0)
        int32_t* rcx_1 = rcx[1]
        
        if (rcx_1 == 0)
            *arg2 = 0xffffffff
        else
            *arg2 = sub_1428e4770(rcx_1)

if (arg4 != 0)
    *arg4 = *(arg1 + 0x10)

if (arg5 != 0)
    *arg5 = *(arg1 + 0x18)

return zx.q(rsi)
