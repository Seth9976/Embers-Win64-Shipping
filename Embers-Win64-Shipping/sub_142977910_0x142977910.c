// 函数: sub_142977910
// 地址: 0x142977910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* result = *arg1

if (*(arg2 + 0x19) == 0)
    int64_t* result_2 = sub_142977880(arg1, arg2 + 0x1c)
    result_2[1] = arg3
    result_2[3].b = arg2[3].b
    
    if (*(result + 0x19) != 0)
        result = result_2
    
    int64_t* result_1 = result
    *result_2 = sub_142977910(arg1, *arg2, result_2, zx.q(arg4), -2)
    result_2[2] = sub_142977910(arg1, arg2[2], result_2, zx.q(arg4))

return result
