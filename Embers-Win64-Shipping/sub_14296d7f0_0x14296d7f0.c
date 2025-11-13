// 函数: sub_14296d7f0
// 地址: 0x14296d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
sub_14293f960(arg1)
int64_t r11_1 = zx.q(*arg1) - 0xfffffff
int64_t rdx_2 = zx.q(arg1[1]) - 0xfffffff + (r11_1 s>> 0x1c)
int64_t rcx_2 = zx.q(arg1[2]) - 0xfffffff + (rdx_2 s>> 0x1c)
int64_t rdx_6 = zx.q(arg1[3]) - 0xfffffff + (rcx_2 s>> 0x1c)
int64_t rcx_6 = zx.q(arg1[4]) - 0xfffffff + (rdx_6 s>> 0x1c)
int64_t rdx_10 = zx.q(arg1[5]) - 0xfffffff + (rcx_6 s>> 0x1c)
int64_t rcx_10 = zx.q(arg1[6]) - 0xfffffff + (rdx_10 s>> 0x1c)
int64_t rdx_14 = zx.q(arg1[7]) - 0xfffffff + (rcx_10 s>> 0x1c)
int64_t rcx_14 = zx.q(arg1[8]) - 0xffffffe + (rdx_14 s>> 0x1c)
int64_t rdx_18 = zx.q(arg1[9]) - 0xfffffff + (rcx_14 s>> 0x1c)
int64_t rcx_18 = zx.q(arg1[0xa]) - 0xfffffff + (rdx_18 s>> 0x1c)
int32_t r12_1 = rcx_18.d & 0xfffffff
int64_t rdx_22 = zx.q(arg1[0xb]) - 0xfffffff + (rcx_18 s>> 0x1c)
arg1[0xa] = r12_1
int64_t rcx_22 = zx.q(arg1[0xc]) - 0xfffffff + (rdx_22 s>> 0x1c)
int32_t r13_1 = rdx_22.d & 0xfffffff
int32_t rax_1 = rcx_22.d & 0xfffffff
int64_t rdx_26 = zx.q(arg1[0xd]) - 0xfffffff + (rcx_22 s>> 0x1c)
arg1[0xc] = rax_1
arg1[0xb] = r13_1
int32_t rax_3 = rdx_26.d & 0xfffffff
arg1[0xd] = rax_3
int64_t rcx_26 = zx.q(arg1[0xe]) - 0xfffffff + (rdx_26 s>> 0x1c)
int32_t rax_5 = rcx_26.d & 0xfffffff
arg1[0xe] = rax_5
int64_t rcx_28 = (rcx_26 s>> 0x1c) + zx.q(arg1[0xf]) - 0xfffffff
int32_t rcx_29 = (rcx_28 s>> 0x1c).d
int32_t rax_9 = rcx_28.d & 0xfffffff
arg1[0xf] = rax_9
uint64_t rdx_30 = (zx.q(rcx_29) & 0xfffffff) + (zx.q(r11_1.d) & 0xfffffff)
*arg1 = rdx_30.d & 0xfffffff
uint64_t r14_2 = zx.q(rcx_29) & 0xfffffff
uint64_t rdx_32 = (rdx_30 u>> 0x1c) + r14_2 + (zx.q(rdx_2.d) & 0xfffffff)
arg1[1] = rdx_32.d & 0xfffffff
uint64_t rdx_34 = (rdx_32 u>> 0x1c) + r14_2 + (zx.q(rcx_2.d) & 0xfffffff)
arg1[2] = rdx_34.d & 0xfffffff
uint64_t rdx_36 = (rdx_34 u>> 0x1c) + r14_2 + (zx.q(rdx_6.d) & 0xfffffff)
arg1[3] = rdx_36.d & 0xfffffff
uint64_t rdx_38 = (rdx_36 u>> 0x1c) + r14_2 + (zx.q(rcx_6.d) & 0xfffffff)
arg1[4] = rdx_38.d & 0xfffffff
uint64_t rdx_40 = (rdx_38 u>> 0x1c) + r14_2 + (zx.q(rdx_10.d) & 0xfffffff)
arg1[5] = rdx_40.d & 0xfffffff
uint64_t rdx_42 = (rdx_40 u>> 0x1c) + r14_2 + (zx.q(rcx_10.d) & 0xfffffff)
arg1[6] = rdx_42.d & 0xfffffff
uint64_t rdx_44 = (rdx_42 u>> 0x1c) + r14_2 + (zx.q(rdx_14.d) & 0xfffffff)
arg1[7] = rdx_44.d & 0xfffffff
uint64_t r8_5 = (zx.q(rcx_14.d) & 0xfffffff) + (zx.q(rcx_29) & 0xffffffe) + (rdx_44 u>> 0x1c)
arg1[8] = r8_5.d & 0xfffffff
uint64_t r8_7 = (r8_5 u>> 0x1c) + r14_2 + (zx.q(rdx_18.d) & 0xfffffff)
arg1[9] = r8_7.d & 0xfffffff
uint64_t rcx_33 = zx.q(r12_1) + r14_2 + (r8_7 u>> 0x1c)
arg1[0xa] = rcx_33.d & 0xfffffff
uint64_t rdx_47 = zx.q(r13_1) + r14_2 + (rcx_33 u>> 0x1c)
arg1[0xb] = rdx_47.d & 0xfffffff
uint64_t rcx_36 = zx.q(rax_1) + r14_2 + (rdx_47 u>> 0x1c)
arg1[0xc] = rcx_36.d & 0xfffffff
uint64_t rdx_50 = zx.q(rax_3) + r14_2 + (rcx_36 u>> 0x1c)
arg1[0xd] = rdx_50.d & 0xfffffff
uint64_t r8_10 = zx.q(rax_5) + r14_2 + (rdx_50 u>> 0x1c)
arg1[0xe] = r8_10.d & 0xfffffff
int32_t result = r14_2.d + (r8_10 u>> 0x1c).d
arg1[0xf] = (rax_9 + result) & 0xfffffff
return result
