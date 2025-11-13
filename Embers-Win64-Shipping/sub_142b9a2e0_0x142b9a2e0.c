// 函数: sub_142b9a2e0
// 地址: 0x142b9a2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(*(arg2 + 8))
int64_t r8 = sx.q(*(arg1 + 0x6a)) * r9
*(arg2 + 0xc) = (((r8 - (r8 u>> 0x3f) + 0x8000) s>> 0x10).d + 0x3f) & 0xffffffc0
int64_t rcx_1 = sx.q(*(arg1 + 0x6c)) * r9
*(arg2 + 0x10) = ((rcx_1 - (rcx_1 u>> 0x3f) + 0x8000) s>> 0x10).d & 0xffffffc0
int64_t rcx_7 = sx.q(*(arg1 + 0x6e)) * r9
int64_t rax_6 = sx.q(*(arg2 + 4))
*(arg2 + 0x14) = (((rcx_7 - (rcx_7 u>> 0x3f) + 0x8000) s>> 0x10).d + 0x20) & 0xffffffc0
int64_t rcx_14 = sx.q(*(arg1 + 0x70)) * rax_6
uint64_t result = rcx_14 u>> 0x3f
*(arg2 + 0x18) = (((rcx_14 - result + 0x8000) s>> 0x10).d + 0x20) & 0xffffffc0
return result
