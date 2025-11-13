// 函数: sub_1429ef9e0
// 地址: 0x1429ef9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = zx.d(arg3[2])
uint64_t rbx = zx.q(arg3[3])
uint32_t r9 = zx.d(*arg3)
uint32_t r10 = zx.d(arg3[1])
uint32_t r11 = zx.d(arg3[4])
*arg1 = ((zx.d(arg3[-1]) + r10 + ((r9 + 1) << 1)) u>> 2).b
arg1[1] = ((rdi + ((r10 + 1) << 1) + r9) u>> 2).b
arg1[2] = (((rbx + (zx.q(rdi + 1) << 1)).d + r10) u>> 2).b
arg1[3] = ((r11 + (rbx << 1).d + rdi + 2) u>> 2).b
*(arg1 + arg2) = *arg1
*(arg1 + (arg2 << 1)) = *arg1
int32_t result = *arg1
*(arg2 * 3 + arg1) = result
return result
