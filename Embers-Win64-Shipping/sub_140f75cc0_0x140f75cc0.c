// 函数: sub_140f75cc0
// 地址: 0x140f75cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
sub_1405d9400()
int64_t* rdx = &data_143cd6fd8

if (*(rbx + 0x598) != 0)
    rdx = sub_140d44910(rbx + 0x580)

*arg2 = *rdx
void* rax_3 = rdx[1]
arg2[1] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg2[2].d = rdx[2].d
return arg2
