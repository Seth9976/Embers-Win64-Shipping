// 函数: sub_1429ef930
// 地址: 0x1429ef930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg4[2])
uint32_t r11 = zx.d(arg4[1])
uint32_t r10 = zx.d(*arg4)
uint64_t r9 = zx.q(arg4[3])
uint8_t rax_2 = ((zx.d(*(arg3 - 1)) + r11 + ((r10 + 1) << 1)) u>> 2).b
*arg1 = rax_2
arg1[1] = rax_2
arg1[2] = rax_2
arg1[3] = rax_2
uint8_t rax_7 = ((rbx + ((r11 + 1) << 1) + r10) u>> 2).b
*(arg1 + arg2) = rax_7
*(arg1 + arg2 + 1) = rax_7
*(arg1 + arg2 + 2) = rax_7
*(arg1 + arg2 + 3) = rax_7
uint8_t rax_12 = (((r9 + (zx.q(rbx + 1) << 1)).d + r11) u>> 2).b
arg1[arg2 << 1] = rax_12
arg1[(arg2 << 1) + 1] = rax_12
arg1[(arg2 << 1) + 2] = rax_12
arg1[(arg2 << 1) + 3] = rax_12
uint8_t* rdx = arg2 * 3 + arg1
uint8_t result = ((rbx + 2 + (r9 << 1).d + r9.d) u>> 2).b
*rdx = result
rdx[1] = result
rdx[2] = result
rdx[3] = result
return result
