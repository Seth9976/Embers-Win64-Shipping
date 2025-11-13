// 函数: sub_140d2ac90
// 地址: 0x140d2ac90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
void* result = __security_cookie ^ &var_98
void* result_1 = result

if (arg2 s< *(arg1 + 0x10))
    int64_t var_78
    __builtin_memset(&var_78, 0, 0x2c)
    int64_t* rbx_3 = sx.q(arg2) * 0x50 + *(arg1 + 8)
    int32_t var_4c_1 = 0x80
    int32_t var_48_1 = 0xffffffff
    int32_t var_44
    __builtin_memset(&var_44, 0, 0x18)
    
    if (rbx_3 != &var_78)
        sub_140780e10(rbx_3, &var_78)
        int64_t var_38
        int64_t var_40
        
        if (var_38 == 0)
            memmove(&rbx_3[7], &var_40, 4)
        int64_t rcx_2 = rbx_3[8]
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_3[8] = var_38
        int32_t var_30
        rbx_3[9].d = var_30
        var_30 = 0
        int64_t var_38_1 = 0
    
    result = sub_1405ae080(&var_78)

__security_check_cookie(result_1 ^ &var_98)
return result
