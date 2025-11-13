// 函数: sub_1428b7100
// 地址: 0x1428b7100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x880)
void var_888
int64_t rax_1 = __security_cookie ^ &var_888
void var_818
void* var_828 = &var_818
int64_t var_830 = 0x800
void var_838
int32_t* var_868 = &var_838
int64_t var_848 = 0
int32_t var_840
uint64_t result

if (sub_1428b71f0(&var_828, &var_848, &var_830, &var_840, var_868, arg2, arg3) != 0)
    int32_t r8_2 = var_840
    int32_t result_1
    
    if (var_848 == 0)
        result_1 = sub_14289aa40(arg1, &var_818, r8_2)
    else
        result_1 = sub_14289aa40(arg1, var_848, r8_2)
        sub_1428a6780(var_848)
    
    result = zx.q(result_1)
else
    sub_1428a6780(var_848)
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_888)
return result
