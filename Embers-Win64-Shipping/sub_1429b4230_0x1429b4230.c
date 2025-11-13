// 函数: sub_1429b4230
// 地址: 0x1429b4230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t* result = *arg1

if (*(arg2 + 0x19) == 0)
    int64_t* result_2 = sub_1429b4180(arg1, &arg2[4])
    result_2[1] = arg3
    result_2[3].b = arg2[3].b
    
    if (*(result + 0x19) != 0)
        result = result_2
    
    int64_t* result_1 = result
    *result_2 = sub_1429b4230(arg1, *arg2, result_2, zx.q(arg4), -2)
    result_2[2] = sub_1429b4230(arg1, arg2[2], result_2, zx.q(arg4))

return result
