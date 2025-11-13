// 函数: sub_140bdd870
// 地址: 0x140bdd870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x23]

if (rcx == 0)
    int64_t result = (*(*arg1 + 0x390))(arg1)
    rcx = arg1[0x23]
    
    if (rcx == 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) == 0)
            return result
        
        return sub_1405c5570(arg2, 0)

return sub_140cdd100(rcx, arg2) __tailcall
