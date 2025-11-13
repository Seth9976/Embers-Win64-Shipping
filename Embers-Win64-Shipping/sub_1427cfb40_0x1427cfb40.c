// 函数: sub_1427cfb40
// 地址: 0x1427cfb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if (arg2 == 0 || arg1[3].b == 0)
    arg_8 = 0
else
    int64_t rax_1 = -1
    
    do
        rax_1 += 1
    while (arg2[rax_1] != 0)
    
    arg_8 = rax_1.d + 1

int64_t result = (*(*arg1 + 0x10))(arg1, &arg_8, 4)
int32_t r8 = arg_8

if (r8 == 0)
    return result

return (*(*arg1 + 0x10))(arg1, arg2, r8)
