// 函数: sub_142837a78
// 地址: 0x142837a78
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax
int64_t r8_1
rax, r8_1 = (*(arg3 + 0x18))(arg1, 8, arg2)

if (rax != 0xffffffff)
    if (sub_142834384(*arg1) != 2)
        return sub_142835944(3, "Invalid chunk id in level 0 parse", r8_1)
    
    if ((*(arg3 + 0x18))(arg1, 4, arg2) != 0xffffffff)
        arg1[1] -= 4
        return 1

return 0
