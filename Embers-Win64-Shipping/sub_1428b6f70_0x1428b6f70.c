// 函数: sub_1428b6f70
// 地址: 0x1428b6f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t arg_18 = arg3
int64_t r9
int64_t arg_20 = r9
__chkstk(0x880)
void var_888
int64_t rax_1 = __security_cookie ^ &var_888
int64_t var_830 = 0x800
int64_t var_848 = 0
int64_t* var_858 = &arg_18
void var_818
void* var_828 = &var_818
int32_t var_840
void var_838
uint64_t result

if (sub_1428b71f0(&var_828, &var_848, &var_830, &var_840, &var_838, arg2, var_858) != 0)
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
