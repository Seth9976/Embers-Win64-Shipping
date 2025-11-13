// 函数: sub_140f76a80
// 地址: 0x140f76a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405d9400()
int64_t* rdx = &data_143cd6fd8

if (*(arg1 + 0x548) != 0)
    rdx = sub_140d44910(arg1 + 0x530)

*arg2 = *rdx
void* rax_3 = rdx[1]
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = rdx[2].d
return arg2
