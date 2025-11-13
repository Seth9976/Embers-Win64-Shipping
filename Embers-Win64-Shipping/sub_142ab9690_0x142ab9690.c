// 函数: sub_142ab9690
// 地址: 0x142ab9690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x60)
(*(*rcx + 8))(rcx)
int64_t* rcx_1 = *(arg1 + 0x20)
int32_t arg_8 = 0
char result

if ((*(*rcx_1 + 0x40))(rcx_1, 0xfffffff9, &arg_8) == 0)
    result = sub_142ab4df0(arg2)
    *(arg1 + 0x5c) = 6
else
    int32_t rax_3 = sub_142ab9270(arg3 + 8, *(arg1 + 0x50), arg2, arg4)
    result = sub_142ab4df0(arg2)
    *(arg1 + 0x5c) = rax_3

*(arg1 + 0x58) = result
*(arg3 + 0x78) = arg1 + 8
return result
