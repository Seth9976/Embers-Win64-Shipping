// 函数: sub_141e544b0
// 地址: 0x141e544b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rsi = sx.q(arg1[1].d)
int32_t rax = (rsi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t rax_1 = *arg1
*arg2 = arg3
arg2[1].w = rsi.w
*(rax_1 + (rsi << 3)) = arg3
sub_141e4c720(&arg1[4], &arg_18)
int64_t rbx_1 = sx.q(arg1[3].d)
int32_t rax_2 = (rbx_1 + 1).d
arg1[3].d = rax_2

if (rax_2 s> *(arg1 + 0x1c))
    sub_1405c4e40(&arg1[2])

int16_t* rax_5 = (rbx_1 << 5) + arg1[2]
*rax_5 = 0
*(rax_5 + 8) = 0
*(rax_5 + 0x10) = 0
rax_5[0xc].b = 0xff
return arg2
