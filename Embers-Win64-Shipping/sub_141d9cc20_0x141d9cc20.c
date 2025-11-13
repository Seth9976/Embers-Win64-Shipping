// 函数: sub_141d9cc20
// 地址: 0x141d9cc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int16_t* const rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

int64_t rax_1 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx, 0x18)
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 != 0)
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rax_1

*arg2 = rax_1
arg2[1] = rax_2
return arg2
