// 函数: sub_1428d3f50
// 地址: 0x1428d3f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
void var_28
int64_t result_1 = sub_1428d44e0(arg1, &var_28, arg3, arg4, arg5, arg6)
int64_t result

if (result_1 == 0)
    result = 0
else
    void* const rdx_1 = &data_143511d70
    
    if (arg2 != 0)
        rdx_1 = arg2
    
    if (sub_1428bc500(&var_28, rdx_1, 8) == 0)
        result = result_1
    else
        sub_1428b8960(arg3, result_1)
        result = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
