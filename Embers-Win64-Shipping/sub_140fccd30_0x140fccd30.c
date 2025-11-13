// 函数: sub_140fccd30
// 地址: 0x140fccd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xc0)
void*** r9 = rax

if (rax == 0)
    r9 = nullptr
else
    *r9 = &data_142d3ff08
    r9[1].d = 0
    *r9 = &data_142ef2bc8
    *(r9 + 0xc) = 0
    r9[2].w = 0x100
    *(r9 + 0x18) = *arg3
    *(r9 + 0x28) = arg3[1]
    *(r9 + 0x38) = arg3[2]
    *(r9 + 0x48) = arg3[3]
    *(r9 + 0x58) = arg3[4]
    *(r9 + 0x68) = arg3[5]
    *(r9 + 0x78) = arg3[6]
    *(r9 + 0x88) = arg3[7]
    *(r9 + 0x98) = arg3[8]
    *(r9 + 0xa8) = arg3[9]
    r9[0x17] = arg3[0xa].q

*arg2 = r9

if (r9 != 0)
    r9[1].d += 1

return arg2
