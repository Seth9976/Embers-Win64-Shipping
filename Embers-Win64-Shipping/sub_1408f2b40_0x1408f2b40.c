// 函数: sub_1408f2b40
// 地址: 0x1408f2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1 + 0x80, 0, 0x14)

if (arg2 == 0)
    return arg1

int64_t rax = -1

do
    rax += 1
while (arg2[rax] != 0)

int32_t rsi = (rax + 1).d
*(arg1 + 0x90) = rax.d
int64_t rcx = *(arg1 + 0x80)

if (rsi u> 0x80)
    if (rcx != 0 || rsi != 0)
        *(arg1 + 0x80) = sub_140a84c80(rcx, sx.q(rsi), 0)
else if (rcx != 0)
    *(arg1 + 0x80) = sub_140a84c80(rcx, 0, 0)

void* rax_2 = *(arg1 + 0x80)
void* rcx_1 = arg1

if (rax_2 != 0)
    rcx_1 = rax_2

*(arg1 + 0x88) = rcx_1
sub_14060abb0(rcx_1, rsi, arg2, rsi, 0x3f)
return arg1
