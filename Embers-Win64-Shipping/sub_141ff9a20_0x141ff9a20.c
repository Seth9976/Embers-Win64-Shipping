// 函数: sub_141ff9a20
// 地址: 0x141ff9a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* rcx = arg1 + 0x20

if (rax != 0)
    rcx = rax

int64_t result = (*arg1)((*(*rcx + 8))(rcx), arg2, arg3)
int64_t rcx_2 = *arg3

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
