// 函数: sub_1420490d0
// 地址: 0x1420490d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142077310(arg1, arg2)
*arg1 = &data_1432aaf80
arg1[5] = &data_1432ab900
arg1[0x3e] = &data_1432ab930
int64_t* rax = j_sub_140a82f30(0x10)
int64_t* rsi = rax

if (rax == 0)
    rsi = nullptr
else
    *rax = 0
    rax[1] = 0

void*** rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    rax_1[1].d = 1
    *rax_1 = &data_142ee2130
    *(rax_1 + 0xc) = 1
    rax_1[2] = rsi

arg1[0xa8] = rsi
arg1[0xa9] = rax_1
__builtin_memset(&arg1[0xaa], 0, 0x18)
arg1[0xb2] = data_143dbb1f8.q
int32_t rax_2 = data_143dbb200
arg1[0xb3].d = rax_2
*(arg1 + 0x584) = arg1[0xb2]
*(arg1 + 0x58c) = rax_2
*(arg1 + 0x59c) = 0
arg1[0xb4] = 0
arg1[0xb5] = 0
arg1[0xbc].b &= 0xf8
arg1[0xbc].b |= 8
arg1[0xb6].d &= 0xfffffffe
*(arg1 + 0x5b4) = 0x3f800000
*(arg1 + 0x5dc) = 0
arg1[0xbe] = data_143dbb1f8.q
int32_t rax_3 = data_143dbb200
arg1[0xbf].d = rax_3
*(arg1 + 0x5e4) = arg1[0xbe]
*(arg1 + 0x5ec) = rax_3
*(arg1 + 0x5fc) = 0
arg1[0xc4] = 0
arg1[0xc5].d = 0
*(arg1 + 0x62c) = 4
*(arg1 + 0x8a) |= 8
*(arg1 + 0x20a) &= 0x7f
return arg1
