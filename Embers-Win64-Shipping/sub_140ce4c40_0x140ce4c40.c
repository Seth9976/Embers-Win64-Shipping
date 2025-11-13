// 函数: sub_140ce4c40
// 地址: 0x140ce4c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)
int64_t rsi = sx.q(arg3)
int64_t rcx = 4

if (*(arg1 + 0xc) != 0 || rbx.d u> 4)
    rcx = rbx + 0x10 + ((rbx * 3) u>> 3)

uint32_t rax_4 = (divu.dp.q(0:(sub_140a846a0(rcx * rsi, 0)), rsi)).d

if (rbx.d s> rax_4)
    rax_4 = 0x7fffffff

*(arg1 + 0xc) = rax_4
return sub_140a30eb0(arg1, zx.q(arg2), rax_4, rsi, 0)
