// 函数: sub_140d0e4f0
// 地址: 0x140d0e4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(*arg2 + 8)
uint64_t result = zx.q(*(rbp + 0x2a))

if ((result.b & 0x20) == 0 || (result.b & 0x40) != 0)
    int64_t rax_2 = (*(*arg1 + 0x140))(arg1, arg3)
    int64_t* rcx_1 = *(*arg2 + 8)
    int64_t r8 = *rcx_1
    result = (*(r8 + 0x120))(rcx_1, arg3, r8)
    
    if ((*(rbp + 0x28) & 1) != 0 || (*(rbp + 0x2a) & 0x40) != 0)
        result = (*(*arg1 + 0x140))(arg1, arg3)
        
        if (rax_2 != result)
            return (*(*arg1 + 0x158))(arg1, arg3)

return result
