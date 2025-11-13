// 函数: sub_14060d100
// 地址: 0x14060d100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0x18)
int32_t* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    *(rax + 8) = 0
    sub_140615390(rax, 4)

sub_14060ca80(arg1, 0, 0)
arg1[1].d = 0x58
*arg1 = &data_142d63a08
arg1[3] = rdi
arg1[4].d = 4
*(arg1 + 0x24) = 2
arg1[5].d = 0x18
*(arg1 + 0x2c) = 8
return arg1
