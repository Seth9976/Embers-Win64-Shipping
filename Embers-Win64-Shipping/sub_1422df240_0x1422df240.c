// 函数: sub_1422df240
// 地址: 0x1422df240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(arg1 + 0x40)
void* rax_1 = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax_1 != 0)
    rcx = rax_1

return (*arg1)((*(*rcx + 8))(rcx), &arg_8)
