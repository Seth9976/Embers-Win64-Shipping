// 函数: sub_140f76b40
// 地址: 0x140f76b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 0x2b0)
sub_1405d9400()
int64_t* rdx = &data_143cd6fd8

if (*(rbx + 0x548) != 0)
    rdx = sub_140d44910(rbx + 0x530)

*arg2 = *rdx
void* rax_3 = rdx[1]
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = rdx[2].d
return arg2
