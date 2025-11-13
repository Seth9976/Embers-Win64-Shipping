// 函数: sub_1429ee5e0
// 地址: 0x1429ee5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rsi = zx.q(*arg4)
uint32_t rbx = zx.d(arg3[-1])
uint64_t r15 = zx.q(arg4[1])
uint64_t r14 = zx.q(arg4[2])
uint32_t r11 = zx.d(*arg3)
uint32_t rbp = zx.d(arg4[3])
uint32_t r10 = zx.d(arg3[1])
uint32_t r9 = zx.d(arg3[2])
uint8_t rax_2 = (((rsi + 1).d + rbx) u>> 1).b
uint8_t* r8_1 = &arg1[arg2 * 3]
arg1[arg2 + 2] = rax_2
*arg1 = rax_2
uint8_t rax_5 = (((rsi + 1).d + r15.d) u>> 1).b
arg1[(arg2 << 1) + 2] = rax_5
arg1[arg2] = rax_5
uint8_t rcx_2 = (((r15 + 1).d + r14.d) u>> 1).b
r8_1[2] = rcx_2
arg1[arg2 << 1] = rcx_2
*r8_1 = (((r14 + 1).d + rbp) u>> 1).b
arg1[3] = ((r9 + ((r10 + 1) << 1) + r11) u>> 2).b
arg1[2] = ((r10 + ((r11 + 1) << 1) + rbx) u>> 2).b
uint8_t rax_20 = ((r11 + ((rbx + 1) << 1) + rsi.d) u>> 2).b
arg1[arg2 + 3] = rax_20
arg1[1] = rax_20
uint8_t rax_24 = ((rbx + 2 + (rsi << 1).d + r15.d) u>> 2).b
arg1[(arg2 << 1) + 3] = rax_24
arg1[arg2 + 1] = rax_24
uint8_t rax_27 = (((r14 + (r15 << 1)).d + rsi.d + 2) u>> 2).b
r8_1[3] = rax_27
arg1[(arg2 << 1) + 1] = rax_27
uint8_t result = (((r14 << 1).d + rbp + r15.d + 2) u>> 2).b
r8_1[1] = result
return result
