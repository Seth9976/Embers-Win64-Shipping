// 函数: sub_1429edfc0
// 地址: 0x1429edfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(*arg4)
uint32_t r11 = zx.d(arg4[1])
uint64_t rdi = zx.q(arg3[-1])
uint8_t* rcx_1 = &arg1[arg2 * 3]
uint64_t rsi = zx.q(*arg3)
uint64_t r15 = zx.q(arg3[1])
uint64_t r14 = zx.q(arg3[2])
uint32_t rbp = zx.d(arg3[3])
uint32_t r10 = zx.d(arg4[2])
uint8_t rax_3 = ((r10 + ((r11 + 1) << 1) + rbx) u>> 2).b
*rcx_1 = ((zx.d(arg4[3]) + r11 + ((r10 + 1) << 1)) u>> 2).b
arg1[arg2 << 1] = rax_3
rcx_1[1] = rax_3
uint8_t rax_7 = (((rdi + (zx.q(rbx + 1) << 1)).d + r11) u>> 2).b
arg1[arg2] = rax_7
arg1[(arg2 << 1) + 1] = rax_7
rcx_1[2] = rax_7
uint8_t rax_10 = (((rsi + (rdi << 1)).d + rbx + 2) u>> 2).b
*arg1 = rax_10
arg1[arg2 + 1] = rax_10
arg1[(arg2 << 1) + 2] = rax_10
rcx_1[3] = rax_10
uint8_t rax_13 = (((r15 + (rsi << 1)).d + rdi.d + 2) u>> 2).b
arg1[1] = rax_13
arg1[arg2 + 2] = rax_13
arg1[(arg2 << 1) + 3] = rax_13
uint8_t rax_16 = (((r14 + (r15 << 1)).d + rsi.d + 2) u>> 2).b
arg1[2] = rax_16
arg1[arg2 + 3] = rax_16
uint8_t result = (((r14 << 1).d + rbp + r15.d + 2) u>> 2).b
arg1[3] = result
return result
