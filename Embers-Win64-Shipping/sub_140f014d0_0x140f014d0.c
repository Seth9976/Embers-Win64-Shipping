// 函数: sub_140f014d0
// 地址: 0x140f014d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 s> 0)
    int32_t r8_1 = *(*(arg1 + 0x78) + 8)
    result = r8_1 - 1
    
    if (r8_1 == 0)
        result = 0
    
    if (arg2 != result)
        void* var_28
        sub_140e14af0(*(*(data_143e29f28 + 0x20) + 8), &var_28)
        char rax_2 = sub_140da7e90(var_28, arg1 + 0x90, arg3.d, 0x2022, 0x2022)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                int64_t rdx_2 = *var_20
                (*rdx_2)(var_20, rdx_2)
                int32_t temp1_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        return zx.q(rax_2)

result.b = 0
return result
