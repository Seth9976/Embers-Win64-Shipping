// 函数: sub_140f03630
// 地址: 0x140f03630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d44910(arg1 + 0x568)
*arg2 = *rax
void* rcx_2 = rax[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax[2].d
return arg2
