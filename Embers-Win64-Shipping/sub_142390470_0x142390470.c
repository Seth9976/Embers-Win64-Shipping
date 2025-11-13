// 函数: sub_142390470
// 地址: 0x142390470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 0x150)
int64_t r14 = sx.q(arg2)
void* rsi = arg7
int64_t* rbx_1 = r14 * 0x430 + r8[2]
void* r10_2 = (r14 << 7) + *(arg1 + 0x160)
void* rcx = *(*r8 + (r14 << 3))
void* rax_1 = *(arg7 + 0x68)

if (rax_1 != 0)
    rsi = rax_1

int64_t rax_2

if (*(r10_2 + 0x50) == 0)
    rax_2 = rbx_1[0x40]
else
    rax_2 = *(r10_2 + 0x58)
    rbx_1 = &rbx_1[0x42]

*(rsi + 0x28) = rax_2
int32_t rax_3

if ((*(arg1 + 0x628) & 2) != 0 || (*(arg1 + 0x35) & 1) != 0)
    rax_3 = 1
else
    rax_3 = 0

int32_t r8_3 = (*(arg7 + 0x9c) & 0xfffffffe) | rax_3
*(arg7 + 0x9c) = r8_3
int32_t rdx_3 = (zx.d(arg5) & 7) << 0xb | (*(arg1 + 0x628) & 1)
*(arg7 + 0x80) = arg4
*(arg7 + 0x9c) = rdx_3 << 2 | (r8_3 & 0xffff1ffb)
*(rsi + 0x50) = 0
arg4.b = 1
*(rsi + 0x54) = sub_142366560(rcx) - 1
int32_t rax_9 = sub_142397cc0(arg1, r14.d, 0, arg4.b, 0, 0, arg6, rbx_1, arg7)
sub_142397f70(arg1, r14.d, 0, arg7)
void* result
result.b = rax_9 != 0
return result
