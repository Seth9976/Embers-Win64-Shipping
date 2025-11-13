// 函数: sub_141d4edd0
// 地址: 0x141d4edd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    int64_t rdx_1 = *rax_2
    
    if ((*(rdx_1 + 0x38))(rax_2, rdx_1) != 0)
        return 1

return 0
