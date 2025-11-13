// 函数: sub_141e0a7f0
// 地址: 0x141e0a7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg2

if ((*(arg1 + 0x31) & 0x40) == 0)
    return sub_141e0e680(arg1, arg2) __tailcall

int64_t rsi = sx.q(arg1[0x1e].d)
int32_t rax = (rsi + 1).d
arg1[0x1e].d = rax

if (rax s> *(arg1 + 0xf4))
    sub_1405c4e40(&arg1[0x1d])

int64_t* rcx_3 = (rsi << 5) + arg1[0x1d]
*rcx_3 = *rdi
rcx_3[1].b = rdi[1].b
rcx_3[2] = 0
rcx_3[3].d = 0
return sub_1407473e0(&rcx_3[2], &rdi[2]) __tailcall
