// 函数: sub_14060c8a0
// 地址: 0x14060c8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0x18)
int32_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *(rax + 8) = 0
    sub_140615390(rax, 0)

sub_14060ca80(arg1, arg2, arg3)
*arg1 = &data_142d638d8
arg1[3] = rbx
arg1[1].d = 0x2f
return arg1
