// 函数: sub_1414c3470
// 地址: 0x1414c3470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = &__return_addr

if ((*(arg2 + 0x9c) & 4) != 0)
    int64_t* rcx = *(arg2 + 0x80)
    uint64_t rdx = zx.q(*(arg1 + 0x10))
    int64_t var_48 = 0
    int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &var_48)
    int64_t r14_1 = var_48
    
    if (r14_1 == 0)
        r14_1 = *(arg2 + 0x80)
    
    int32_t rax_3 = (*(*rax_1 + 0x1d8))(rax_1)
    int64_t rdx_1 = *rax_1
    (*(rdx_1 + 0x268))(rax_1, rdx_1)
    int64_t var_40 = sub_141261c60(arg2)
    int32_t rax_5 = sub_141261c10(arg2, rax_1, &var_40)
    result = sub_141261bd0(arg2, rax_1, &var_40)
    int32_t result_1 = result
    
    if (rax_3 u> 1)
        int64_t rdx_4 = *rax_1
        result = (*(rdx_4 + 0x20))(rax_1, rdx_4)
        
        if (result != 3)
            float var_60_1 = arg5.o.d
            
            if (*(arg1 + 0x73) == 0)
                return sub_1414b8ea0(arg1, arg2, arg3, arg6, arg5, arg4, r14_1, rax_1, var_60_1, 
                    rax_5, result_1)
            
            return sub_1414b8c10(arg1, arg2, arg3, arg6, arg5, arg4, r14_1, rax_1, var_60_1, rax_5, 
                result_1)

return result
