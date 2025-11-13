// 函数: sub_141e3e1a0
// 地址: 0x141e3e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (0f == *arg3 || (*(*arg1 + 0x330))() == 0)
    return 

float zmm1 = *arg3
float zmm0 = *arg2
zmm1 - 0f
char arg_18 = 0
float var_30 = zmm0
float var_38 = zmm0
int64_t r14
r14.b = zmm1 < 0f
float var_34 = zmm1
int32_t rax_2
float zmm6
rax_2, zmm6 = sub_141de1490(&arg_18, &var_34, &var_38, &arg1[0x12])
(*(*arg1 + 0x288))(arg1, &var_30, &var_38, arg6, var_38, var_30, arg5)

if (rax_2 != 1)
    return 

while (arg4 != 0)
    var_34 = var_34 - (var_38 - var_30)
    float zmm0_1
    
    if (r14.b == 0)
        zmm0_1 = zmm6
    else
        zmm0_1 = arg1[0x12].d
    
    var_30 = zmm0_1
    var_38 = zmm0_1
    arg_18 = 0
    int32_t rax_3
    rax_3, zmm6 = sub_141de1490(&arg_18, &var_34, &var_38, &arg1[0x12])
    (*(*arg1 + 0x288))(arg1, &var_30, &var_38, arg6, var_38, var_30)
    
    if (rax_3 != 1)
        break
