// 函数: sub_141998310
// 地址: 0x141998310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t r8 = arg3 u>> arg5
uint32_t rdx = arg2 u>> arg5
int64_t r9 = sx.q(arg4) * 5
uint32_t r10 = *((r9 << 3) + &data_1439c85ec)
uint32_t rax_1 = *((r9 << 3) + 0x1439c85e8)

if (rdx u>= rax_1)
    rax_1 = rdx

*arg1 = rax_1

if (r8 u>= r10)
    r10 = r8

arg1[1] = r10
return arg1
