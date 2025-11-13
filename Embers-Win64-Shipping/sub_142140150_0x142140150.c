// 函数: sub_142140150
// 地址: 0x142140150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = j_sub_140a82f30(0xe0)
int32_t* rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_141fa4db0(rax)

void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_14328f978
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

*arg2 = rbx
arg2[1] = rax_2
sub_141fb87a0(*arg2, arg3, arg1, 1)
return arg2
