// 函数: sub_1420420b0
// 地址: 0x1420420b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141dcdc50(arg1)

if (result != 0 && arg2 != 0)
    void* rcx = *(arg2 + 0x228)
    
    if (rcx != 0)
        int64_t* rcx_1 = *(rcx + 0x258)
        
        if (rcx_1 != 0)
            result = (*(*rcx_1 + 0x28))(rcx_1)
            
            if (result.b != 0)
                void* rdx = *(arg2 + 0x228)
                return (*(*arg1 + 0x678))(arg1, *(rdx + 0x278), rdx + 0x250)

return result
