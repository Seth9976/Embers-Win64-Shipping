// 函数: sub_141a538b0
// 地址: 0x141a538b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg2 + 0xc0)
int32_t* result

if (rbx != 0)
    int64_t arg_10
    sub_140d3a3a0(&arg_10, rbx)
    int64_t arg_18 = arg_10
    
    if (*sub_141a4b1b0(arg1 + 8, &arg_10, &arg_18) != 0xffffffff)
        result.b = 1
        return result
    
    if (sub_141a538b0(arg1, rbx).b != 0)
        result.b = 1
        return result

result.b = 0
return result
