// 函数: sub_141bf4840
// 地址: 0x141bf4840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x86].b == 1
arg1[0xa1] = 0

if (cond:0)
    return 

void* rax_2 = sub_142121cc0((*(*arg1 + 0x548))(arg2, 0), arg1)
arg1[0xa1] = rax_2

if (rax_2 != 0)
    sub_140d18150(rax_2, arg1, 0)

return sub_141bf48a0(arg1) __tailcall
