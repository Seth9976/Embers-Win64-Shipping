// 函数: sub_142898a60
// 地址: 0x142898a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rsi = sx.q(arg3)

if (arg1 != 0 && *arg1 != 0x7fffffff && sub_142898ff0(arg1, 1, 0) != 0)
    int64_t rcx = sx.q(*arg1)
    
    if (rsi.d s>= rcx.d || rsi.d s< 0)
        *(*(arg1 + 8) + (rcx << 3)) = arg2
        int32_t rax_8 = *arg1 + 1
        arg1[4] = 0
        *arg1 = rax_8
        return rax_8
    
    int64_t r9 = *(arg1 + 8)
    int64_t rbx = rsi << 3
    memmove(r9 + (sx.q((rsi + 1).d) << 3), rbx + r9, (rcx.d - rsi.d) << 3)
    *(rbx + *(arg1 + 8)) = arg2
    int32_t rax_5 = *arg1 + 1
    *arg1 = rax_5
    arg1[4] = 0
    return rax_5

return 0
