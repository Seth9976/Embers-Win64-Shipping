// 函数: sub_142158140
// 地址: 0x142158140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 0x38)

if (result.b != 0)
    result = sub_14243ac50(sub_140d3c6e0(arg1 + 0x38))
    
    if (result.d != 1)
        *(arg1 + 0xe8) = 1
        result = sub_140d3c6e0(arg1 + 0x38)
        sub_1420ee380(result)
        
        if (data_143a2e9a8 == 0 || arg2 != 0)
            if (*(arg1 + 0xe8) != 0)
                result = sub_140d3e110(arg1 + 0x38)
                
                if (result.b != 0)
                    uint64_t var_28 = 0
                    int64_t var_20_1 = 0
                    sub_142149780(arg1, &var_28)
                    void* rax_1 = *(arg1 + 0x30)
                    int64_t var_18
                    
                    if (rax_1 == 0)
                        var_18 = 0
                        int64_t var_10_1 = 0
                    else
                        var_18.o = *(rax_1 + 0x28)
                    
                    int64_t* rcx_7 = *(arg1 + 0xe0)
                    int64_t arg_8 = *(arg1 + 0x18)
                    result = sub_142147ba0(rcx_7, &var_18, &var_28, &arg_8, arg2)
                    uint64_t rcx_8 = var_28
                    
                    if (rcx_8 != 0)
                        result = sub_140a74f90(rcx_8)
            
            *(arg1 + 0xe8) = 0

return result
