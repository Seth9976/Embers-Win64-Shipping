// 函数: sub_142373110
// 地址: 0x142373110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2)
sub_142361e40(arg1)
int32_t rax = arg1[0xa].d

if (rax s> 0)
    int32_t rcx = rax
    
    if (rsi.d != rax)
        int32_t rax_4 = rax - rsi.d
        
        if (rax_4 != 1)
            int64_t r9_2 = arg1[9]
            memmove(r9_2 + (rsi << 2), r9_2 + (sx.q((rsi + 1).d) << 2), (rax_4 - 1) << 2)
            rcx = arg1[0xa].d
    else
        int32_t r9_1 = (rsi - 1).d
        int32_t rax_1 = rax - r9_1
        
        if (rax_1 != 1)
            int64_t rcx_1 = arg1[9]
            memmove(rcx_1 + (sx.q(r9_1) << 2), rcx_1 + (rsi << 2), (rax_1 - 1) << 2)
            rcx = arg1[0xa].d
    
    arg1[0xa].d = rcx - 1
    sub_1405dac90(&arg1[9])

int32_t result = (*(*arg1 + 0x2b0))(arg1)

if (arg1[6].d s<= result)
    return result

int32_t rcx_5 = arg1[6].d
int32_t rax_10 = rcx_5 - rsi.d

if (rax_10 != 1)
    int64_t r9_3 = arg1[5]
    memmove(r9_3 + (rsi << 3), r9_3 + (sx.q((rsi + 1).d) << 3), (rax_10 - 1) << 3)
    rcx_5 = arg1[6].d

arg1[6].d = rcx_5 - 1
return sub_1405c53d0(&arg1[5])
