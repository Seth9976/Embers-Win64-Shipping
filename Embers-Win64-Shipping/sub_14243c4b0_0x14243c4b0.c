// 函数: sub_14243c4b0
// 地址: 0x14243c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t rax = zx.w(*arg2)
uint16_t r9 = 0x80
*arg1 = -0x204
uint16_t r10 = 0x80

if (arg3 == 0)
    r10 = rax

arg1[1].w = rax << 8 | r10
uint16_t rax_1 = zx.w(arg2[1])
uint16_t rdx = 0x80

if (arg3 == 0)
    rdx = rax_1

*(arg1 + 0xa) = rax_1 << 8 | rdx
uint16_t rax_2 = zx.w(arg2[2])

if (arg3 == 0)
    r9 = rax_2

*(arg1 + 0xc) = rax_2 << 8 | r9
int16_t rax_3 = -1

if (arg3 != 0)
    rax_3 = 0xff80

*(arg1 + 0xe) = rax_3
return arg1
