// 函数: sub_142373050
// 地址: 0x142373050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
int32_t rax_1 = (*(*arg1 + 0x2b0))()

if (arg1[6].d s> rax_1)
    int32_t rcx = arg1[6].d
    int32_t rax_3 = rcx - rsi.d
    
    if (rax_3 != 1)
        int64_t r9_1 = arg1[5]
        memmove(r9_1 + (rsi << 3), r9_1 + (sx.q((rsi + 1).d) << 3), (rax_3 - 1) << 3)
        rcx = arg1[6].d
    
    arg1[6].d = rcx - 1
    sub_1405c53d0(&arg1[5])

int32_t rcx_4 = arg1[0xa].d
int32_t rax_8 = rcx_4 - rsi.d

if (rax_8 != 1)
    int64_t r10_1 = arg1[9]
    memmove(r10_1 + rsi * 0x14, r10_1 + sx.q((rsi + 1).d) * 0x14, (rax_8 - 1) * 0x14)
    rcx_4 = arg1[0xa].d

arg1[0xa].d = rcx_4 - 1
return sub_1413a8970(&arg1[9]) __tailcall
