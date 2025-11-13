// 函数: sub_141fca710
// 地址: 0x141fca710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_140d3e110(arg1 + 0x18)

if (rax != 0)
    if (*(arg1 + 0x48) == 0)
        return 0
    
    if (*(arg1 + 0x30) == 0)
        if (*(arg1 + 0x38) s> 0)
            int64_t* rcx_2 = *(sub_140d3c6e0(arg1 + 0x18) + 0x770)
            rax = (*(*rcx_2 + 0x68))(rcx_2)
        
        if (*(arg1 + 0x38) s<= 0 || rax != 0)
            return sub_141fba8a0(sub_140d3c6e0(arg1 + 0x18), arg1 + 0x28, arg2) __tailcall
        
        return 0

return 1
