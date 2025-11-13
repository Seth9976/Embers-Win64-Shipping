// 函数: sub_141df59a0
// 地址: 0x141df59a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t rsi = sx.q(*arg4)
int32_t rdx = *(rax + 0x68)
int32_t r8 = (rsi + 1).d

if (r8 s>= rdx)
    rdx = r8

r8.b = 1
sub_141e0cbf0(rax + 0x60, rdx, r8.b)
return sub_1407473e0((rsi << 4) + *(rax + 0x60), *arg1 + 0x10) __tailcall
