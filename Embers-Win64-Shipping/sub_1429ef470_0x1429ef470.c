// 函数: sub_1429ef470
// 地址: 0x1429ef470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg3[2])
uint64_t rsi = zx.q(arg3[3])
uint64_t r14 = zx.q(arg3[4])
uint32_t r10 = zx.d(arg3[1])
uint64_t rbp = zx.q(arg3[5])
uint32_t r9 = zx.d(*arg3)
uint32_t r8 = zx.d(arg3[6])
*arg1 = ((r9 + 1 + r10) u>> 1).b
uint8_t rax_5 = ((r10 + 1 + rbx) u>> 1).b
arg1[arg2 << 1] = rax_5
arg1[1] = rax_5
uint8_t rax_8 = ((rbx + 1 + rsi.d) u>> 1).b
arg1[(arg2 << 1) + 1] = rax_8
arg1[2] = rax_8
uint8_t rax_11 = (((rsi + 1).d + r14.d) u>> 1).b
arg1[(arg2 << 1) + 2] = rax_11
arg1[3] = rax_11
arg1[(arg2 << 1) + 3] = (((r14 + 1).d + rbp.d) u>> 1).b
arg1[arg2] = ((rbx + ((r10 + 1) << 1) + r9) u>> 2).b
uint8_t rax_21 = (((r14 + (rsi << 1)).d + rbx + 2) u>> 2).b
uint8_t* rdx_1 = &arg1[arg2 * 3]
uint8_t rcx_3 = (((rsi + (zx.q(rbx + 1) << 1)).d + r10) u>> 2).b
*rdx_1 = rcx_3
arg1[arg2 + 1] = rcx_3
rdx_1[1] = rax_21
arg1[arg2 + 2] = rax_21
uint8_t rax_25 = (((r14 << 1).d + rbp.d + rsi.d + 2) u>> 2).b
rdx_1[2] = rax_25
arg1[arg2 + 3] = rax_25
uint8_t result = ((r8 + (rbp << 1).d + r14.d + 2) u>> 2).b
rdx_1[3] = result
return result
