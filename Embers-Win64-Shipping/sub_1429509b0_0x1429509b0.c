// 函数: sub_1429509b0
// 地址: 0x1429509b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(*(arg1 + 0x2c))
uint64_t r11_14 = (((
    (((zx.q(arg2[7]) << 8 | zx.q(arg2[6])) << 8 | zx.q(arg2[5])) << 8 | zx.q(arg2[4])) << 8
    | zx.q(arg2[3])) << 8 | zx.q(arg2[2])) << 8 | zx.q(arg2[1])) << 8 | zx.q(*arg2)
uint64_t r8_14 = (((
    (((zx.q(arg2[0xf]) << 8 | zx.q(arg2[0xe])) << 8 | zx.q(arg2[0xd])) << 8 | zx.q(arg2[0xc])) << 8
    | zx.q(arg2[0xb])) << 8 | zx.q(arg2[0xa])) << 8 | zx.q(arg2[9])) << 8 | zx.q(arg2[8])

if (rcx == 0)
    rcx = 0x10

int32_t rax_14 = 2
*(arg1 + 0x2c) = rcx.d

if (arg3 != 0)
    rax_14 = arg3

arg1[6].d = rax_14
int32_t rax_15 = 4

if (arg4 != 0)
    rax_15 = arg4

*(arg1 + 0x34) = rax_15
arg1[5].d = 0
*arg1 = 0
arg1[1] = r11_14 ^ 0x736f6d6570736575
int64_t rax_19 = r8_14 ^ 0x646f72616e646f6d
arg1[2] = rax_19
arg1[3] = r11_14 ^ 0x6c7967656e657261
arg1[4] = r8_14 ^ 0x7465646279746573

if (rcx.d == 0x10)
    arg1[2] = rax_19 ^ 0xee

return 1
