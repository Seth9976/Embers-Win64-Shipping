// 函数: sub_142bd7cd0
// 地址: 0x142bd7cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = 0
int64_t* result = sub_142b99860(arg1, 0x28, &arg_20)

if (arg_20 == 0)
    *result = arg1
    result[1] = arg2

int64_t rax = sub_142b99a90(arg1, 8, 0, arg3, 0, &arg_20)
result[2] = rax

if (arg_20 != 0)
    sub_142b99980(arg1, result)
    return nullptr

result[3] = rax
result[4].d = arg3
return result
