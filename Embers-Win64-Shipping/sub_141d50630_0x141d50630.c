// 函数: sub_141d50630
// 地址: 0x141d50630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx)
    int64_t r8_1 = *rax_2
    
    if ((*(r8_1 + 0x40))(rax_2, arg2, r8_1) != 0)
        int64_t* rcx_2 = *(arg1 + 0x130)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0xa0))(rcx_2) != 0)
            sub_141d4d130(arg1)
        
        return 1

return 0
