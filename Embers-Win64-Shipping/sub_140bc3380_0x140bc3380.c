// 函数: sub_140bc3380
// 地址: 0x140bc3380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *(arg1 + 0x48)
int64_t rax = *arg3
char arg_8 = *arg2
*(rdx + 0x10) = rax
*(*(arg1 + 0x48) + 0x18) = *(arg1 + 0x40)
int64_t arg_10 = *(arg1 + 0x48)
void* rax_3 = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax_3 != 0)
    rcx = rax_3

return (*arg1)((*(*rcx + 8))(rcx), &arg_8, &arg_10)
