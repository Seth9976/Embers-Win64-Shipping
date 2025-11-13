// 函数: sub_141f48010
// 地址: 0x141f48010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return sub_140d3a3a0(arg1 + 0xb8, arg2) __tailcall

int64_t* result = sub_140d3c6e0(arg1 + 0xb8)

if (arg2 != result)
    int64_t rbp_1 = *(arg1 + 0xa0)
    
    if (result != 0)
        int64_t r8 = *result
        (*(r8 + 0x660))(result, rbp_1, r8)
    
    int64_t* var_18
    sub_141f3d270(arg1 + 0x151, &var_18)
    int64_t* rcx_3 = var_18
    
    if (rcx_3 != 0)
        int64_t* arg_20 = arg2
        sub_1405a9f90(rcx_3, &arg_20)
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp1_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    result = sub_140d3a3a0(arg1 + 0xb8, arg2)
    
    if (arg2 != 0)
        int32_t rax_2 = *(arg2 + 0xc)
        void* const rax_9
        
        if (rax_2 s>= data_143e1d9b4)
            rax_9 = nullptr
        else
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_2)
            uint32_t rdx_5 = zx.d(temp2_1)
            int32_t rax_4 = temp3_1 + rdx_5
            rax_9 =
                *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3)) + sx.q(zx.d(rax_4.w) - rdx_5) * 0x18
        
        result = zx.q(*(rax_9 + 8) u>> 0x1d)
        
        if ((result.b & 1) == 0)
            return (*(*arg2 + 0x658))(arg2, rbp_1)

return result
