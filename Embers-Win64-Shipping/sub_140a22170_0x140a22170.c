// 函数: sub_140a22170
// 地址: 0x140a22170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void* rbx = *(arg1 + 8)
arg_10.d = *arg1
void* rax_1 = *(rbx + 0x10)
void* rcx = rbx + 0x20

if (rax_1 != 0)
    rcx = rax_1

return (*rbx)((*(*rcx + 8))(rcx), &arg_10)
