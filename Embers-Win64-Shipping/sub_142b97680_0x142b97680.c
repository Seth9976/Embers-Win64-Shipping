// 函数: sub_142b97680
// 地址: 0x142b97680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1

if (arg1 == 0 || arg2 == 0)
    return 

int64_t rax_1 = sx.q(arg1[1])
int64_t r8_1 = sx.q(*arg1)
int64_t rdx_1 = sx.q(arg2[1]) * rax_1
int64_t rcx_1 = sx.q(arg2[3]) * rax_1
int64_t r9_2 = sx.q(*arg2) * r8_1
int64_t r10_2 = sx.q(arg2[2]) * r8_1
*rbx = ((rdx_1 - (rdx_1 u>> 0x3f) + 0x8000) s>> 0x10).d
    + ((r9_2 - (r9_2 u>> 0x3f) + 0x8000) s>> 0x10).d
rbx[1] = ((rcx_1 - (rcx_1 u>> 0x3f) + 0x8000) s>> 0x10).d
    + ((r10_2 - (r10_2 u>> 0x3f) + 0x8000) s>> 0x10).d
