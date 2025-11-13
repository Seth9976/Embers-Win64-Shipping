// 函数: sub_140f75660
// 地址: 0x140f75660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d44910(arg1 + 0x2a8)
*arg2 = *rax
void* rcx_2 = rax[1]
arg2[1] = rcx_2

if (rcx_2 != 0)
    *(rcx_2 + 8) += 1

arg2[2].d = rax[2].d
arg2[3].b = 1
return arg2
