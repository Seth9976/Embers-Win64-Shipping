// 函数: sub_142c147e0
// 地址: 0x142c147e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x90)

if (*(rbx + 0x60) == 0 || *(arg1 + 0xb4) == 0)
    return 

uint32_t r9_3 = (zx.d(arg2[2]) << 8) + zx.d(arg2[3])

if ((r9_3.b & 0x10) != 0)
    uint64_t rcx_2 = (zx.q(arg2[4]) << 8) + zx.q(arg2[5])
    r9_3 += ((zx.d(arg2[(rcx_2 << 1) + 6]) << 8) + zx.d(arg2[(rcx_2 << 1) + 7])) << 0x10

*(arg1 + 0xc0) = r9_3
sub_142c208d0(arg1)

if (sub_142c20d70(arg2) != 0)
    sub_142bf55f0(rbx)
    *(rbx + 0x5c) = *(rbx + 0x60) - 1
    sub_142c1cd10(arg1, arg3)
    return 

sub_142bf4e80(rbx)
*(rbx + 0x5c) = 0

if (sub_142c1ce10(arg1, arg3) != 0)
    sub_142bf5b20(rbx)
