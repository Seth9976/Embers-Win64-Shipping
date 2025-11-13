// 函数: sub_142742be0
// 地址: 0x142742be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d3a3a0(arg1, arg2)
int32_t i = 0
*(arg1 + 8) = *arg3
arg1[4] = arg3[1].d
arg1[5] = *(arg3 + 0xc)
arg1[6] = arg3[2].d
arg1[7] = *(arg3 + 0x14)
arg1[8] = arg3[3].d
arg1[9] = *(arg3 + 0x1c)
arg1[0xa] = arg3[4].d
arg1[0xb] = *(arg3 + 0x24)
arg1[0xc] = arg3[5].d
arg1[0xd] = *(arg3 + 0x2c)
arg1[0xe].w = arg3[6].w
*(arg1 + 0x3a) = *(arg3 + 0x32)
*(arg1 + 0x40) = arg3[7]
arg1[0x12] = arg3[8].d
*(arg1 + 0x50) = arg3[9]
arg1[0x16] = arg3[0xa].d
arg1[0x17] = *(arg3 + 0x54)
arg1[0x18] = arg3[0xb].d
*(arg1 + 0x68) = arg3[0xc]
*(arg1 + 0x70) = 0
*(arg1 + 0x78) = 0
int32_t rax_20 = arg3[8].d
arg1[0x1e] = rax_20

if (rax_20 s> arg1[0x1f])
    sub_1405c4ec0(&arg1[0x1c])

if (arg3[8].d u> 0)
    do
        int64_t r8 = arg3[7]
        int64_t rcx_1 = *(arg1 + 0x70)
        uint64_t r9_1 = zx.q(i) * 5
        int64_t i_1 = sx.q(i)
        i += 1
        int64_t rdx_1 = i_1 * 5
        *(rcx_1 + (rdx_1 << 3)) = *(r8 + (r9_1 << 3))
        *(rcx_1 + (rdx_1 << 3) + 4) = *(r8 + (r9_1 << 3) + 4)
        *(rcx_1 + (rdx_1 << 3) + 8) = *(r8 + (r9_1 << 3) + 8)
        *(rcx_1 + (rdx_1 << 3) + 0xc) = *(r8 + (r9_1 << 3) + 0xc)
        *(rcx_1 + (rdx_1 << 3) + 0x10) = *(r8 + (r9_1 << 3) + 0x10)
        *(rcx_1 + (rdx_1 << 3) + 0x14) = *(r8 + (r9_1 << 3) + 0x14)
        *(rcx_1 + (rdx_1 << 3) + 0x18) = *(r8 + (r9_1 << 3) + 0x18)
        *(rcx_1 + (rdx_1 << 3) + 0x1c) = *(r8 + (r9_1 << 3) + 0x1c)
        *(rcx_1 + (rdx_1 << 3) + 0x20) = *(r8 + (r9_1 << 3) + 0x20)
        *(rcx_1 + (rdx_1 << 3) + 0x24) = *(r8 + (r9_1 << 3) + 0x24)
    while (i u< arg3[8].d)

*(arg1 + 0x40) = *(arg1 + 0x70)
return arg1
