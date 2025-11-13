// 函数: sub_142bf23b0
// 地址: 0x142bf23b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*(arg1 + 0x68))
int32_t rbx

if (rsi.d != 0)
    rbx = (rsi.d u>> 2) + rsi.d
else
    rbx = 0x200

int32_t arg_8
int64_t rax_1 = sub_142b99a90(*(arg1 + 0xd0), 3, rsi.d, rbx, *(arg1 + 0x58), &arg_8)
bool cond:0 = arg_8 == 0
*(arg1 + 0x58) = rax_1

if (not(cond:0))
    return 0xffffffff

int64_t rcx_1 = rax_1 + (zx.q(rbx) << 1)
*(arg1 + 0x60) = rcx_1
memmove(rcx_1, rax_1 + (rsi << 1), rsi.d)
*(arg1 + 0x68) = rbx
return 0
