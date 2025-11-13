// 函数: sub_1423e6860
// 地址: 0x1423e6860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (arg2 != 0)
    rax = (*(*arg2 + 0x198))(arg2)

if (arg2 == 0 || rax != 0)
    int64_t* rcx_1 = *(arg1 + 0xaf8)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 8))(rcx_1) != 0)
        return 1

return 0
