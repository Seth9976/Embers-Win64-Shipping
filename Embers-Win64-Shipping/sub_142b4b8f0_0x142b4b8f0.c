// 函数: sub_142b4b8f0
// 地址: 0x142b4b8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
void* var_48 = &var_38
void var_34
void* var_50 = &var_34
int32_t var_30
void var_2c
int32_t var_28
int32_t arg_8
sub_142accb70(arg2, &arg_8, &var_28, &var_2c, &var_30)
int32_t rdx_1 = arg_8

if (rdx_1 s> *(arg1 + 0x5c))
    return (*(*arg1 + 0x38))(arg1, zx.q(arg3), zx.q(arg4), arg6)

double var_20
double* result
double zmm6_1
result, zmm6_1 = sub_142b4ba70(arg1, rdx_1, arg3, arg4, &var_20)

if (result.b == 0)
    result.b = 0
else
    double zmm0_1 = var_20
    
    if (zmm0_1 > zmm6_1)
        return sub_142b4ba70(arg1, arg_8 - 1, arg3, arg4, arg6)
    
    if (arg5 == 0)
        zmm0_1 - zmm6_1
        
        if (not(is_unordered.q(zmm0_1, zmm6_1)) && zmm0_1 == zmm6_1)
            return sub_142b4ba70(arg1, arg_8 - 1, arg3, arg4, arg6)
    
    *arg6 = zmm0_1
    result.b = 1

return result
