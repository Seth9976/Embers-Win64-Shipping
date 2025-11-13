// 函数: sub_1429ed960
// 地址: 0x1429ed960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(*arg3)
uint64_t r15 = zx.q(arg3[1])
uint32_t rbx = zx.d(*arg4)
uint64_t r14 = zx.q(arg3[2])
uint32_t r11 = zx.d(arg4[1])
uint32_t r10 = zx.d(arg4[2])
uint64_t r9 = zx.q(arg3[-1])
uint32_t r8 = zx.d(arg3[3])
uint8_t rax_2 = (((r9 + 1).d + rbp) u>> 1).b
arg1[(arg2 << 1) + 1] = rax_2
*arg1 = rax_2
uint8_t rax_5 = ((rbp + 1 + r15.d) u>> 1).b
arg1[(arg2 << 1) + 2] = rax_5
arg1[1] = rax_5
uint8_t rax_8 = (((r15 + 1).d + r14.d) u>> 1).b
arg1[(arg2 << 1) + 3] = rax_8
arg1[2] = rax_8
uint8_t* rdx_1 = &arg1[arg2 * 3]
arg1[3] = (((r14 + 1).d + r8) u>> 1).b
*rdx_1 = ((r10 + ((r11 + 1) << 1) + rbx) u>> 2).b
arg1[arg2 << 1] = (((r9 + (zx.q(rbx + 1) << 1)).d + r11) u>> 2).b
uint8_t rax_19 = (((r9 << 1).d + rbp + rbx + 2) u>> 2).b
rdx_1[1] = rax_19
arg1[arg2] = rax_19
uint8_t rax_23 = (((r15 + (zx.q(rbp + 1) << 1)).d + r9.d) u>> 2).b
rdx_1[2] = rax_23
arg1[arg2 + 1] = rax_23
uint8_t rax_26 = (((r14 + (r15 << 1)).d + rbp + 2) u>> 2).b
rdx_1[3] = rax_26
arg1[arg2 + 2] = rax_26
uint8_t result = ((r8 + (r14 << 1).d + r15.d + 2) u>> 2).b
arg1[arg2 + 3] = result
return result
