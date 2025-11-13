// 函数: sub_141d506a0
// 地址: 0x141d506a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x38))(rcx)
    int64_t r9_1 = *rax_2
    
    if ((*(r9_1 + 0x48))(rax_2, zx.q(arg2), zx.q(arg3), r9_1) != 0)
        sub_141d4d130(arg1)
        int64_t result
        result.b = 1
        return result

return 0
