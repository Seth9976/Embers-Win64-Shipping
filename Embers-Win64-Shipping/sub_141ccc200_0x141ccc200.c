// 函数: sub_141ccc200
// 地址: 0x141ccc200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x58)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    void arg_10
    sub_141cccd00(rbx, *sub_140b58260(&arg_10, u"ReliabilityHandlerComponent", 1))
    *rbx = &data_1432184b8
    rbx[5] = 0
    rbx[6] = 0
    rbx[7] = 1
    rbx[8] = 0
    rbx[9] = 0x3fb999999999999a
    rbx[0xa] = 0

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2
return arg2
