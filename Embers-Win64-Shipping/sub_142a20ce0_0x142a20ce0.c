// 函数: sub_142a20ce0
// 地址: 0x142a20ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t rbx_4 = (((*(arg1 + 0x1c) - 1) * arg2) u>> 8) + 1

if (arg1[3].d s< 0)
    sub_142a2e350(arg1)

int64_t r8 = arg1[2]
uint64_t rcx_1 = zx.q(rbx_4) << 0x38

if (r8 u>= rcx_1)
    rsi = 1
    rbx_4 = *(arg1 + 0x1c) - rbx_4
    r8 -= rcx_1

uint32_t rdx = zx.d(*(zx.q(rbx_4) + &data_143609200))
arg1[3].d -= rdx
*(arg1 + 0x1c) = rbx_4 << rdx.b
arg1[2] = r8 << rdx.b
return zx.q(rsi)
