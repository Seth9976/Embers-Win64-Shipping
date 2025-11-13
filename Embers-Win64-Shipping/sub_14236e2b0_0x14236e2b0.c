// 函数: sub_14236e2b0
// 地址: 0x14236e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t* result = __security_cookie ^ &var_248
int64_t* result_1 = result
void* rcx = *(arg1 + 0x48)

if (rcx != 0)
    result = sub_141fe6490(rcx, arg1 + 0x50)
    
    if (result != 0)
        if ((*(arg1 + 0x68) & 1) == 0)
            result = (*(*result + 0x2c0))(result, arg2, arg3, arg4, arg5, arg6)
        else
            void var_218
            sub_14234f710(&var_218, arg5)
            char var_54
            char var_54_1 = var_54 | 4
            (*(*result + 0x2c0))(result, arg2, arg3, arg4, &var_218, arg6)
            result = sub_142351ee0(&var_218)

__security_check_cookie(result_1 ^ &var_248)
return result
