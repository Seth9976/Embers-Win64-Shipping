// 函数: sub_1410522e0
// 地址: 0x1410522e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
int32_t r8 = 0
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *r9 = &data_142f00948
    *(r9 + 0xc) = 0
    r9[2].w = 0x100

__builtin_memset(&r9[3], 0, 0x3c)
int32_t r10 = 1
int32_t rax_1

if (arg3[1] == 7)
    rax_1 = 0

if (arg3[1] != 7 || *arg3 != 0)
    rax_1 = 1

r9[3].d = rax_1
int32_t rax_2
rax_2.b = *arg3 != 0
*(r9 + 0x1c) = rax_2
r9[4].d = sub_140ffdf00(zx.d(arg3[1]))

if (arg3[2] == 0 && arg3[7] == 0)
    r10 = 0

*(r9 + 0x24) = r10
r9[5].b = arg3[0xc]
*(r9 + 0x29) = arg3[0xd]
r9[7].d = sub_140ffdf00(zx.d(arg3[3]))
*(r9 + 0x2c) = sub_140ffdf70(zx.d(arg3[4]))
r9[6].d = sub_140ffdf70(zx.d(arg3[5]))
*(r9 + 0x34) = sub_140ffdf70(zx.d(arg3[6]))

if (arg3[7] == 0)
    *(r9 + 0x3c) = *(r9 + 0x2c)
else
    r9[9].d = sub_140ffdf00(zx.d(arg3[8]))
    *(r9 + 0x3c) = sub_140ffdf70(zx.d(arg3[9]))
    r9[8].d = sub_140ffdf70(zx.d(arg3[0xa]))
    *(r9 + 0x44) = sub_140ffdf70(zx.d(arg3[0xb]))

*(r9 + 0x4c) = 0
int32_t rax_9

if (arg3[4] != 0 || arg3[5] != 0 || arg3[6] != 0 || arg3[9] != 0 || arg3[0xa] != 0
        || arg3[0xb] != 0)
    rax_9.b = 0
else
    rax_9.b = 1

char rcx_5

if (arg3[0xd] == 0 || rax_9.b != 0)
    rcx_5 = 0
else
    rcx_5 = 1

r9[0xa].d = 0

if (*arg3 != 0)
    r9[0xa].d = 2
    r8 = 2

if (rcx_5 != 0)
    r9[0xa].d = r8 | 0x20

*arg2 = r9

if (r9 != 0)
    r9[1].d += 1

return arg2
