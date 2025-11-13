// 函数: sub_141d4ed90
// 地址: 0x141d4ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    int64_t rdx_1 = *rax_2
    
    if ((((*(rdx_1 + 0x20))(rax_2, rdx_1) u>> 1).b & 1) != 0)
        return 1

return 0
