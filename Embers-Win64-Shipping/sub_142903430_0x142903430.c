// 函数: sub_142903430
// 地址: 0x142903430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(*arg1)
uint64_t r14 = zx.q(arg1[1])
uint64_t r15 = zx.q(arg1[2])
uint64_t rbx = zx.q(arg1[3])
uint64_t r10_2 = ((rbp + 5) u>> 0x20) + r14
uint64_t r8_2 = (r10_2 u>> 0x20) + r15
uint64_t r11_2 = (r8_2 u>> 0x20) + rbx
int32_t rdx_4 = neg.d(((r11_2 u>> 0x20).d + arg1[4]) u>> 2)
uint64_t rdi_1 = zx.q(not.d(rdx_4))
uint64_t rbp_3 = ((rbp & rdi_1) | (zx.q(rdx_4) & zx.q((rbp + 5).d))) + zx.q(*arg3)
uint64_t r14_4 = ((r14 & rdi_1) | (zx.q(rdx_4) & zx.q(r10_2.d))) + zx.q(arg3[1]) + (rbp_3 u>> 0x20)
uint64_t r15_4 = ((r15 & rdi_1) | (zx.q(rdx_4) & zx.q(r8_2.d))) + zx.q(arg3[2]) + (r14_4 u>> 0x20)
int32_t rdi_5 = ((rdi_1.d & rbx.d) | (r11_2.d & rdx_4)) + (r15_4 u>> 0x20).d + arg3[3]
arg2[1] = (rbp_3.d u>> 8).b
arg2[2] = (rbp_3.d u>> 0x10).b
*arg2 = rbp_3.b
arg2[3] = (rbp_3.d u>> 0x18).b
arg2[5] = (r14_4.d u>> 8).b
arg2[6] = (r14_4.d u>> 0x10).b
arg2[4] = r14_4.b
arg2[7] = (r14_4.d u>> 0x18).b
arg2[9] = (r15_4.d u>> 8).b
arg2[8] = r15_4.b
arg2[0xa] = (r15_4.d u>> 0x10).b
arg2[0xb] = (r15_4.d u>> 0x18).b
arg2[0xd] = (rdi_5 u>> 8).b
uint8_t result = (rdi_5 u>> 0x10).b
arg2[0xc] = rdi_5.b
arg2[0xf] = (rdi_5 u>> 0x18).b
arg2[0xe] = result
return result
