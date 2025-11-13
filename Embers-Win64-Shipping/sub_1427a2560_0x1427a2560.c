// 函数: sub_1427a2560
// 地址: 0x1427a2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
char arg_8 = *arg2
int64_t arg_10 = *arg1
void* rcx = rbx + 0x80
void* rax_2 = *(rbx + 0x70)

if (rax_2 != 0)
    rcx = rax_2

return (*(rbx + 0x60))((*(*rcx + 8))(rcx), &arg_10, &arg_8)
