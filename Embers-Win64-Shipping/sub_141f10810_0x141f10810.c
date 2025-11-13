// 函数: sub_141f10810
// 地址: 0x141f10810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[0x82].d)
int32_t rax = (rdi + 1).d
arg1[0x82].d = rax

if (rax s> *(arg1 + 0x414))
    sub_1407756d0(&arg1[0x81])

int64_t rcx_1 = rdi * 0x34
uint64_t* rcx_2 = rcx_1 + arg1[0x81]

if (rcx_1 != neg.q(arg1[0x81]))
    *rcx_2 = *arg2
    rcx_2[1].d = arg2[1].d
    *(rcx_2 + 0xc) = *arg3
    *(rcx_2 + 0x14) = arg3[1].d
    rcx_2[5].d = arg6
    *(rcx_2 + 0x18) = *arg4
    rcx_2[6].b = arg5
    *(rcx_2 + 0x2c) = arg7.d

return sub_141ee8490(arg1) __tailcall
