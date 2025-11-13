// 函数: sub_141943d60
// 地址: 0x141943d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** const rax = j_sub_140a82f30(0x50)
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *r9 = &data_142ff7578
    *(r9 + 0xc) = 0
    r9[2].w = 0x100
    r9[3].w = 0x100
    *(r9 + 0x1c) = 0x201
    r9[4].w = 0
    __builtin_memcpy(r9 + 0x24, 
        "\x07\x02\x00\x00\x00\x1e\x00\x00\x00\x1e\x00\x00\x00\x1e\x00\x00\x07\x02\x00\x00\x00\x1e\x00\x"
    "00\x00\x1e\x00\x00\x00\x1e\x00\x00", 
        0x20)
    *(r9 + 0x44) = -1

if (arg3[1] != 7 || *arg3 != 0)
    rax.b = 1
else
    rax.b = 0

r9[3].b = rax.b
*(r9 + 0x19) = *arg3
*(r9 + 0x1c) = sub_14194eaf0(zx.d(arg3[1]))
int32_t rax_2

if (arg3[2] != 0 || arg3[7] != 0)
    rax_2.b = 1
else
    rax_2.b = 0

r9[4].b = rax_2.b
*(r9 + 0x21) = arg3[7]
*(r9 + 0x24) = sub_14194eaf0(zx.d(arg3[3]))
r9[5].d = sub_14194ebc0(zx.d(arg3[4]))
*(r9 + 0x2c) = sub_14194ebc0(zx.d(arg3[5]))
r9[6].d = sub_14194ebc0(zx.d(arg3[6]))
*(r9 + 0x34) = sub_14194eaf0(zx.d(arg3[8]))
r9[7].d = sub_14194ebc0(zx.d(arg3[9]))
*(r9 + 0x3c) = sub_14194ebc0(zx.d(arg3[0xa]))
r9[8].d = sub_14194ebc0(zx.d(arg3[0xb]))
*(r9 + 0x44) = zx.d(arg3[0xc])
r9[9].d = zx.d(arg3[0xd])
*arg2 = r9
r9[1].d += 1
return arg2
