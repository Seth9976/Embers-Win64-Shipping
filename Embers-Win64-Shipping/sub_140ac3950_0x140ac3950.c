// 函数: sub_140ac3950
// 地址: 0x140ac3950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int16_t* const result

if ((arg2[5].b & 1) == 0)
    result = sub_140ac18f0(arg2, *arg1, arg3)
else
    int16_t* var_38_1 = nullptr
    int32_t var_30_1 = 0
    int32_t var_2c_1 = 0x80
    void var_138
    sub_140ab4fe0(arg2, &var_138, arg3)
    
    if (var_30_1 s> 1)
        int16_t* rdi_1 = &var_138
        
        if (var_38_1 != 0)
            rdi_1 = var_38_1
        
        result = sub_140aab680(sub_140ab2000(), rdi_1, var_30_1 - 1, arg1, &arg1[1])
    else
        result = &data_142d40450
        arg1[1].d = 0
        *arg1 = &data_142d40450
    
    if (var_38_1 != 0)
        result = sub_140a74f90(var_38_1)

__security_check_cookie(rax_1 ^ &var_168)
return result
