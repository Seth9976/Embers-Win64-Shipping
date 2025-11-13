// 函数: sub_1422dcd10
// 地址: 0x1422dcd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x58)
*(arg1 + 0x80) = arg2
char rax = *arg3
*(arg1 + 0x88) = rax
int32_t* result

if (rax != 0)
    if (*(arg1 + 0x10) == *(arg1 + 0x3c))
        sub_140d186f0(&data_143e1d990, arg1)
    
    int64_t* var_28 = arg1 + 0x80
    char* var_20_1 = arg1 + 0x88
    int32_t arg_8
    result = sub_141a29980(arg1 + 8, &arg_8, &var_28, nullptr)
else
    result = sub_140d13a10(arg1, arg2)

if (arg1 == -0x58)
    return result

return LeaveCriticalSection(arg1 + 0x58)
