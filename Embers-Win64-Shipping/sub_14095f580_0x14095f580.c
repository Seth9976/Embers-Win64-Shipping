// 函数: sub_14095f580
// 地址: 0x14095f580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg1 + 8)

if (result != 0)
    int64_t rax = sub_140d3c6e0(arg1 + 8)
    int64_t r14_1 = *(arg1 + 0x10)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    
    if (arg1 + 0x20 != &var_18 && *(arg1 + 0x28) != 0)
        int64_t* rcx_3 = *(arg1 + 0x20)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x40))(rcx_3, &var_18)
    
    r14_1(rax, arg2, zx.q(arg3), *(arg1 + 0x18), &var_18)
    result.b = 1

return result
