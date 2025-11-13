// 函数: sub_141d9be40
// 地址: 0x141d9be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
char result = sub_141da1e80(rcx, &rcx[0x74], arg2, 0)

if (result == 0)
    return result

arg2[6].b = 0
*arg2 = arg1[1].d
sub_14081d8c0(&arg2[7], *arg1 + 0xf0)
int64_t* rcx_2 = *arg1
return sub_141da40c0(rcx_2, &rcx_2[0x74], arg2)
