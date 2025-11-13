// 函数: sub_142831478
// 地址: 0x142831478
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char** result = malloc(0x30)
char* rax_2

if (arg1 == 0)
    rax_2 = nullptr
else
    rax_2 = strcpy(malloc(strlen(arg1) + 1), arg1)

*result = rax_2
char* rax_5

if (arg2 == 0)
    rax_5 = nullptr
else
    rax_5 = strcpy(malloc(strlen(arg2) + 1), arg2)

result[3] = 0
result[1] = rax_5
result[5] = arg5
result[4] = arg4
result[2].d = arg3
return result
