// 函数: sub_14095f4b0
// 地址: 0x14095f4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    int64_t rsi_1 = *(arg1 + 0x10)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    
    if (arg1 + 0x20 != &var_28 && *(arg1 + 0x28) != 0)
        int64_t* rcx_3 = *(arg1 + 0x20)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &var_28)
    
    rsi_1(rax, zx.q(arg2), zx.q(arg3), arg4, arg5, *(arg1 + 0x18), &var_28)
    result.b = 1

return result
