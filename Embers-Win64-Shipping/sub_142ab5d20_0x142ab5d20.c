// 函数: sub_142ab5d20
// 地址: 0x142ab5d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
double _Px = arg2.q
int32_t result = _dtest(&_Px)

if (result.w == 2)
    *arg3 = 0x10
else
    _Px = arg2.q
    result = _dtest(&_Px)
    
    if (result.w s> 0)
        *arg3 = 0x10
    else
        void var_58
        int32_t var_54
        int32_t var_50
        char var_40[0x18]
        double _X = sub_142b38c50(arg2, 0, 0, &var_40, 0x17, &var_58, &var_54, &var_50)
        sub_142ab58c0(arg1, &var_40, var_54, arg3)
        void* rcx_3 = *arg1
        *(rcx_3 + 4) += var_50 - var_54
        void* rbx_1 = *arg1
        result.b = _dsign(_X) != 0
        result.b <<= 7
        *(rbx_1 + 8) |= result.b

__security_check_cookie(rax_1 ^ &var_98)
return result
