// 函数: sub_1429ef090
// 地址: 0x1429ef090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg3[4])
uint64_t rbp = zx.q(arg3[5])
uint32_t r11 = zx.d(arg3[3])
uint64_t r14 = zx.q(arg3[6])
uint64_t r15 = zx.q(arg3[7])
uint32_t r9 = zx.d(arg3[1])
uint32_t r10 = zx.d(arg3[2])
*arg1 = ((zx.d(*arg3) + r10 + ((r9 + 1) << 1)) u>> 2).b
uint8_t rax_6 = ((r11 + ((r10 + 1) << 1) + r9) u>> 2).b
arg1[arg2] = rax_6
arg1[1] = rax_6
uint8_t rax_10 = (((rdi + (zx.q(r11 + 1) << 1)).d + r10) u>> 2).b
arg1[arg2 << 1] = rax_10
arg1[arg2 + 1] = rax_10
arg1[2] = rax_10
uint8_t* rdx_1 = &arg1[arg2 * 3]
uint8_t rcx_3 = ((((rdi << 1) + 2).d + rbp.d + r11) u>> 2).b
*rdx_1 = rcx_3
arg1[(arg2 << 1) + 1] = rcx_3
arg1[arg2 + 2] = rcx_3
arg1[3] = rcx_3
uint8_t rax_13 = (((r14 + (rbp << 1)).d + rdi.d + 2) u>> 2).b
rdx_1[1] = rax_13
arg1[(arg2 << 1) + 2] = rax_13
arg1[arg2 + 3] = rax_13
uint8_t result = (((r15 + (r14 << 1)).d + rbp.d + 2) u>> 2).b
rdx_1[2] = result
arg1[(arg2 << 1) + 3] = result
rdx_1[3] = (((r14 + (r15 << 1)).d + r15.d + 2) u>> 2).b
return result
