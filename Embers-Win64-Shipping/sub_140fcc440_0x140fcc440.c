// 函数: sub_140fcc440
// 地址: 0x140fcc440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x68)
void*** r10 = rax

if (rax == 0)
    r10 = nullptr
else
    int32_t rcx = *(arg3 + 0x30)
    int128_t zmm0_1 = *(arg3 + 0x20)
    int32_t r8 = *(arg3 + 0x40)
    int32_t rdx = *(arg3 + 0x3c)
    *r10 = &data_142d3ff08
    r10[1].d = 0
    *(r10 + 0xc) = 0
    r10[2].w = 0x100
    r10[3] = 0
    r10[9] = &r10[0xa]
    *(r10 + 0x20) = zmm0_1
    r10[6].d = rcx
    *(r10 + 0x34) = arg4
    r10[7].d = 1
    *(r10 + 0x3c) = rdx
    r10[8].d = r8
    r10[0xa] = -0x3810000020000000
    r10[0xb] = 0
    *r10 = &data_142ef29a0
    r10[0xc].d = arg5
    *(r10 + 0x64) = arg6

*arg2 = r10

if (r10 != 0)
    r10[1].d += 1

return arg2
