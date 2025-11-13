// 函数: sub_1426e7df0
// 地址: 0x1426e7df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(arg2 + 0x34)
void* result_2 = result

if (result != 0 && arg1[5].d != 0)
    void* rax = sub_142452380()
    void* rdx = *(result_2 + 0x10)
    result = sx.q(*(rax + 0x38))
    void* const result_3
    
    if (result.d s> *(rdx + 0x38))
        result_3 = nullptr
    else
        int64_t result_1 = result
        result = *(rdx + 0x30)
        result_3 = result_2
        
        if (*(result + (result_1 << 3)) != rax + 0x30)
            result_3 = nullptr
    
    int32_t rcx_1 = arg1[5].d
    
    if (rcx_1 == 1)
        void* const arg_10 = nullptr
        sub_142739770(arg1, result_2, result_3, &arg_10)
        return sub_142712e00(arg3, arg_10)
    
    int64_t var_18
    
    if (rcx_1 == 2)
        int32_t rax_2 = data_143b58060
        var_18 = data_143b58058.q
        int32_t var_10_1 = rax_2
        sub_1427397d0(arg1, result_2, result_3, &var_18)
        return sub_142712e80(arg3, &var_18)
    
    int32_t var_10
    
    if (rcx_1 == 3)
        var_18 = 0
        var_10.q = 0
        sub_142739560(arg1, result_2, result_3, &var_18)
        result = sub_142712d50(arg3, &var_18)
    label_1426e7ebf:
        int64_t rcx_9 = var_18
        
        if (rcx_9 != 0)
            return sub_140a74f90(rcx_9)
    else if (rcx_1 == 4)
        var_18 = 0
        var_10.q = 0
        sub_142739660(arg1, result_2, result_3, &var_18)
        result = sub_142712f20(arg3, &var_18)
        goto label_1426e7ebf

return result
