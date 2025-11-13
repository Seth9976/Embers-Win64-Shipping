// 函数: sub_140d87c30
// 地址: 0x140d87c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result

if (((arg1[7].d).b & 6) == 6)
    int64_t* rcx = arg1[3]
    int32_t rax_5 = (*(*rcx + 0x18))(rcx)
    
    if (arg3 s< 0 || arg3 s> rax_5 || arg4 s< 0 || arg4 s> rax_5)
        result = 0x80040200
    else
        int64_t rax_6 = *arg1
        int32_t var_40 = arg3
        int32_t var_3c_1 = arg4
        int64_t var_38_1 = 2
        (*(rax_6 + 0x48))(arg1, 1, &var_40)
        void var_48
        void var_44
        (*(*arg1 + 0x80))(arg1, 0, arg5, zx.q(arg6), &var_44, &var_48, arg7)
        result = 0
else
    result = 0x80040201

__security_check_cookie(rax_1 ^ &var_88)
return result
