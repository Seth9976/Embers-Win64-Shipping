// 函数: sub_140b62df0
// 地址: 0x140b62df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4c8
uint64_t result = __security_cookie ^ &var_4c8
uint64_t result_1 = result

if (data_143df1a30 s<= 0)
    result = sub_140af7000()
    
    if (result.b == 0)
        void** const var_498
        sub_140a3b810(&var_498, 4, arg1)
        var_498 = &data_142e7bda8
        int32_t r9
        int32_t var_484_1 = r9
        HANDLE var_490 = GetCurrentProcess()
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int32_t var_2c_1 = 0x80
        void var_438
        sub_140b5e900(&var_490, &var_438)
        void var_470
        sub_140b5d370(&var_490, &var_438, arg2, arg3, &var_470)
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
        
        sub_140b5cee0(&var_498)
        int32_t rbx_1
        rbx_1.b = sub_140a4a880() == 0
        sub_140b61dd0(&var_498, nullptr, rbx_1)
        result = sub_140a3c3b0(&var_498)

__security_check_cookie(result_1 ^ &var_4c8)
return result
