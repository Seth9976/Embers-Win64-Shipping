// 函数: sub_14060ca80
// 地址: 0x14060ca80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
*arg1 = &data_142d636f8
arg1[2] = 0
*(arg1 + 0xc) = arg2
int32_t* rax = j_sub_140a82f30(0x18)

if (rax == 0)
    arg1[2] = 0
    return arg1

*(rax + 8) = 0
sub_140615390(rax, arg3)
arg1[2] = rax
return arg1
