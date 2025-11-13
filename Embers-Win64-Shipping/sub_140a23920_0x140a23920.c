// 函数: sub_140a23920
// 地址: 0x140a23920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x20)
void* rcx = arg1 + 0x30
int32_t arg_10 = arg2

if (rax != 0)
    rcx = rax

return (*(arg1 + 0x10))((*(*rcx + 8))(rcx), &arg_10)
