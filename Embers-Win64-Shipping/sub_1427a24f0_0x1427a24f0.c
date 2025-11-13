// 函数: sub_1427a24f0
// 地址: 0x1427a24f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg1[1]
char arg_8 = *arg2
int64_t arg_10 = *arg1
void* rcx = rbx + 0xd0
void* rax_2 = *(rbx + 0xc0)

if (rax_2 != 0)
    rcx = rax_2

return (*(rbx + 0xb0))((*(*rcx + 8))(rcx), &arg_10, &arg_8)
