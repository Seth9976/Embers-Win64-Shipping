// 函数: sub_14296dfb0
// 地址: 0x14296dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg3)
int64_t rax_1 = zx.q(*arg2) * r10
int64_t r8_1 = zx.q(arg2[8]) * r10
int32_t rsi_1 = rax_1.d & 0xfffffff
*arg1 = rsi_1
int32_t rbx_1 = r8_1.d & 0xfffffff
arg1[8] = rbx_1
int64_t rdx_2 = zx.q(arg2[1]) * r10 + (rax_1 u>> 0x1c)
int64_t rax_5 = zx.q(arg2[9]) * r10 + (r8_1 u>> 0x1c)
int32_t r11_1 = rdx_2.d & 0xfffffff
arg1[1] = r11_1
int32_t r9_1 = rax_5.d & 0xfffffff
arg1[9] = r9_1
int64_t rcx_2 = zx.q(arg2[2]) * r10 + (rdx_2 u>> 0x1c)
int64_t rdx_6 = zx.q(arg2[0xa]) * r10 + (rax_5 u>> 0x1c)
arg1[2] = rcx_2.d & 0xfffffff
arg1[0xa] = rdx_6.d & 0xfffffff
int64_t r8_5 = zx.q(arg2[3]) * r10 + (rcx_2 u>> 0x1c)
int64_t rcx_6 = zx.q(arg2[0xb]) * r10 + (rdx_6 u>> 0x1c)
arg1[3] = r8_5.d & 0xfffffff
arg1[0xb] = rcx_6.d & 0xfffffff
int64_t rdx_10 = zx.q(arg2[4]) * r10 + (r8_5 u>> 0x1c)
uint64_t r8_7 = zx.q(arg2[0xc])
arg1[4] = rdx_10.d & 0xfffffff
int64_t r8_9 = r8_7 * r10 + (rcx_6 u>> 0x1c)
arg1[0xc] = r8_9.d & 0xfffffff
int64_t rcx_10 = zx.q(arg2[5]) * r10 + (rdx_10 u>> 0x1c)
int64_t rdx_14 = zx.q(arg2[0xd]) * r10 + (r8_9 u>> 0x1c)
arg1[5] = rcx_10.d & 0xfffffff
arg1[0xd] = rdx_14.d & 0xfffffff
int64_t r8_13 = zx.q(arg2[6]) * r10 + (rcx_10 u>> 0x1c)
uint64_t rcx_12 = zx.q(arg2[0xe])
arg1[6] = r8_13.d & 0xfffffff
int64_t rcx_14 = rcx_12 * r10 + (rdx_14 u>> 0x1c)
arg1[0xe] = rcx_14.d & 0xfffffff
int64_t rdx_18 = zx.q(arg2[7]) * r10 + (r8_13 u>> 0x1c)
uint64_t r8_15 = zx.q(arg2[0xf])
arg1[7] = rdx_18.d & 0xfffffff
int64_t r8_17 = r8_15 * r10 + (rcx_14 u>> 0x1c)
uint64_t r8_18 = r8_17 u>> 0x1c
arg1[0xf] = r8_17.d & 0xfffffff
uint64_t rdx_20 = (rdx_18 u>> 0x1c) + zx.q(rbx_1) + r8_18
arg1[8] = rdx_20.d & 0xfffffff
uint64_t r8_19 = r8_18 + zx.q(rsi_1)
arg1[9] = (rdx_20 u>> 0x1c).d + r9_1
int32_t result = r8_19.d & 0xfffffff
*arg1 = result
arg1[1] = (r8_19 u>> 0x1c).d + r11_1
return result
