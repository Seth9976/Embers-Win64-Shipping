// 函数: sub_1403fe0d0
// 地址: 0x1403fe0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_2 = arg1[4].d
uint32_t r10_1 = rax_2 u>> arg3
uint32_t rax = rax_2 - r10_1
bool cond:0 = arg2 != 0

if (arg2 != 0)
    *(arg1 + 0x24) += rax
    cond:0 = arg2 != 0

if (cond:0)
    rax = r10_1

arg1[4].d = rax
return sub_1403fe4a0(arg1) __tailcall
