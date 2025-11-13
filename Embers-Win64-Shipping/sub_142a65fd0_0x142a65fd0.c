// 函数: sub_142a65fd0
// 地址: 0x142a65fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = (*(*arg2 + 0x38))(arg2)
int64_t r8 = *arg1
int32_t result

if ((*(r8 + 0x38))(arg1, arg3, r8) == rax_1)
    char rax_3 = (*(*arg2 + 0x40))(arg2)
    int64_t rdx = *arg1
    
    if ((*(rdx + 0x40))(arg1, rdx).b == rax_3)
        result.b = 1
        return result

result.b = 0
return result
