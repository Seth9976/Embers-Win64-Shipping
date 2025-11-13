// 函数: sub_1418ff7f0
// 地址: 0x1418ff7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xa0)
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    int64_t rcx = *(arg1 + 0x58)
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *(r9 + 0xc) = 0
    r9[2].w = 0x100
    r9[3] = rcx
    *r9 = &data_142ff1c18
    __builtin_memset(&r9[4], 0, 0x24)
    r9[9] = arg3
    __builtin_memset(&r9[0xa], 0, 0x24)
    *(r9 + 0x74) = *(arg3 + 0x1c)
    r9[0xf].d = 0
    __builtin_memset(&r9[0x10], 0, 0x18)
    r9[0x13].d = 0xffffffff

*arg2 = r9

if (r9 != 0)
    r9[1].d += 1

return arg2
