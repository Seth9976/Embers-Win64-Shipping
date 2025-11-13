// 函数: sub_142890660
// 地址: 0x142890660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r8 = arg1 u>> 0x20
int64_t rdx_3 = neg.q(neg.q(r8) u>> 0x3f)
int32_t r10
r10.b = arg1 != 0
int64_t r9_1 = arg1 ^ ((r8 ^ arg1) & rdx_3)
uint64_t rdx_5 = r9_1 u>> 0x10
int64_t rcx_3 = neg.q(neg.q(rdx_5) u>> 0x3f)
int64_t r9_2 = r9_1 ^ ((rdx_5 ^ r9_1) & rcx_3)
uint64_t rdx_9 = r9_2 u>> 8
int64_t rcx_7 = neg.q(neg.q(rdx_9) u>> 0x3f)
int64_t r9_3 = r9_2 ^ ((rdx_9 ^ r9_2) & rcx_7)
uint64_t rdx_13 = r9_3 u>> 4
int64_t rcx_11 = neg.q(neg.q(rdx_13) u>> 0x3f)
int64_t r9_4 = r9_3 ^ ((rdx_13 ^ r9_3) & rcx_11)
uint64_t rcx_13 = r9_4 u>> 2
int64_t rax_11 = neg.q(neg.q(rcx_13) u>> 0x3f)
int32_t rcx_22 = (neg.d((neg.q((((rcx_13 ^ r9_4) & rax_11) ^ r9_4) u>> 1) u>> 0x3f).d) & 1) + r10
    + (rdx_3.d & 0x20) + (rcx_3.d & 0x10) + (rcx_7.d & 8) + (rcx_11.d & 4)
return zx.q((rax_11.d & 2) + rcx_22)
