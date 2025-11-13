// 函数: sub_142942680
// 地址: 0x142942680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x18)
uint64_t r10_5 = ((zx.q(arg2[6]) << 8 | zx.q(arg2[5])) << 8 | zx.q(arg2[4])) << 6
uint64_t r8 = ((zx.q(arg2[0xc]) << 8 | zx.q(arg2[0xb])) << 8 | zx.q(arg2[0xa])) << 3
uint64_t rbx_6 =
    ((zx.q(arg2[0x13]) << 8 | zx.q(arg2[0x12])) << 8 | zx.q(arg2[0x11])) << 8 | zx.q(arg2[0x10])
uint64_t r9_5 = ((zx.q(arg2[0x19]) << 8 | zx.q(arg2[0x18])) << 8 | zx.q(arg2[0x17])) << 5
uint64_t rax_12 =
    (((zx.q(zx.d(arg2[0x1f]) << 0x10) | zx.q(arg2[0x1d])) & 0x7fffff) | zx.q(arg2[0x1e]) << 8) << 2
int32_t var_50 = rax_12.d
int64_t r12_7 = (((zx.q(arg2[3]) << 8 | zx.q(arg2[2])) << 8 | zx.q(arg2[1])) << 8 | zx.q(*arg2))
    + ((rax_12 + 0x1000000) u>> 0x19) * 0x13
uint64_t r13_6 = (((zx.q(arg2[9]) << 8 | zx.q(arg2[8])) << 8 | zx.q(arg2[7])) << 5)
    + ((r10_5 + 0x1000000) u>> 0x19)
uint64_t r11 = ((r8 + 0x1000000) u>> 0x19)
    + (((zx.q(arg2[0xf]) << 8 | zx.q(arg2[0xe])) << 8 | zx.q(arg2[0xd])) << 2)
uint64_t r15_6 = (((zx.q(arg2[0x16]) << 8 | zx.q(arg2[0x15])) << 8 | zx.q(arg2[0x14])) << 7)
    + ((rbx_6 + 0x1000000) u>> 0x19)
uint64_t rbp_6 = (((zx.q(arg2[0x1c]) << 8 | zx.q(arg2[0x1b])) << 8 | zx.q(arg2[0x1a])) << 4)
    + ((r9_5 + 0x1000000) u>> 0x19)
arg1[1] = ((r12_7 + 0x2000000) u>> 0x1a).d - ((r10_5 + 0x1000000).d & 0xfe000000) + r10_5.d
*arg1 = r12_7.d - ((r12_7 + 0x2000000).d & 0xfc000000)
arg1[2] = r13_6.d - ((r13_6 + 0x2000000).d & 0xfc000000)
arg1[3] = ((r13_6 + 0x2000000) u>> 0x1a).d - ((r8 + 0x1000000).d & 0xfe000000) + r8.d
arg1[4] = r11.d - ((r11 + 0x2000000).d & 0xfc000000)
arg1[6] = r15_6.d - ((r15_6 + 0x2000000).d & 0xfc000000)
arg1[5] = ((r11 + 0x2000000) u>> 0x1a).d - ((rbx_6 + 0x1000000).d & 0xfe000000) + rbx_6.d
int32_t result = (var_50 + 0x1000000) & 0xfe000000
arg1[7] = ((r15_6 + 0x2000000) u>> 0x1a).d - ((r9_5 + 0x1000000).d & 0xfe000000) + r9_5.d
arg1[8] = rbp_6.d - ((rbp_6 + 0x2000000).d & 0xfc000000)
arg1[9] = ((rbp_6 + 0x2000000) u>> 0x1a).d - result + var_50
return result
