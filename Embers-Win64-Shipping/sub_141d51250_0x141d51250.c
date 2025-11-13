// 函数: sub_141d51250
// 地址: 0x141d51250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x48))(rcx)
    int64_t r9_1 = *rax_2
    
    if ((*(r9_1 + 0x18))(rax_2, arg2, zx.q(arg3), r9_1) != 0)
        return 1

return 0
