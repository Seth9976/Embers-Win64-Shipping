// 函数: sub_1417c5020
// 地址: 0x1417c5020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 0x140))(arg2, arg1 + 8)
sub_1417bf0f0(arg2, arg1 + 0x10)
sub_1417bf0f0(arg2, arg1 + 0x18)
int64_t* rcx_3 = arg2[1]
char arg_8 = *(arg1 + 0x20)
char* rdx_3 = *rcx_3

if (&rdx_3[1] u> rcx_3[1])
    (*(*arg2 + 0x150))(arg2, &arg_8, 1)
    uint32_t rax_6 = zx.d(arg_8)
    *(arg1 + 0x20) = rax_6
    return rax_6

arg_8 = *rdx_3
*rcx_3 += 1
uint32_t rax_4 = zx.d(arg_8)
*(arg1 + 0x20) = rax_4
return rax_4
