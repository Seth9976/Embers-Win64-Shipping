// 函数: sub_1423bd160
// 地址: 0x1423bd160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(*arg1 + 0x318))() != 0)
    return 0

if (arg2 == 0)
    return sub_1423bcde0(arg1, sub_1423c1c20(arg1)) __tailcall

if (arg2 == 2)
    return sub_1423bcde0(arg1, sub_1423c1a70(arg1)) __tailcall

if (arg1[0x1a] == 0)
    return sub_1423bcde0(arg1, 0) __tailcall

char rax_8 = (*(*arg1 + 0x318))(arg1)
void* rcx_7 = arg1[0x1a]

if (rax_8 == 0)
    return sub_1423bcde0(arg1, *(rcx_7 + 0x20)) __tailcall

return sub_1423bcde0(arg1, *(*(rcx_7 + 0x28) + 4)) __tailcall
