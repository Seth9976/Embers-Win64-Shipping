// 函数: sub_140d10760
// 地址: 0x140d10760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(*arg2 + 8)
int64_t rax_2 = (*(*arg1 + 0x140))(arg1, arg3)
int64_t* rcx = *(*arg2 + 8)
int64_t r9 = *rcx
int64_t result = (*(r9 + 0x108))(rcx, arg3, arg4, r9)

if ((*(rbp + 0x28) & 1) != 0 || (*(rbp + 0x2a) & 0x40) != 0)
    result = (*(*arg1 + 0x140))(arg1, arg3)
    
    if (rax_2 != result)
        return (*(*arg1 + 0x158))(arg1, arg3)

return result
