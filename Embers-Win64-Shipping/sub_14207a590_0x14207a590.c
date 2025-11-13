// 函数: sub_14207a590
// 地址: 0x14207a590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t arg_10 = arg2
void* rax = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax != 0)
    rcx = rax

return (*arg1)((*(*rcx + 8))(rcx), &arg_10, &arg_18)
