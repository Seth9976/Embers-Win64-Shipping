// 函数: sub_142b46300
// 地址: 0x142b46300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = *(arg1 + 0x20)
int32_t var_14 = 0
char arg_8 = 0
int32_t var_18 = 0
int16_t* rax_1 = sub_142aaa8a0(arg1 + 0x18, rbx, &arg_8, sub_142b450a0(arg3), &var_18, arg4)

if (rax_1 != arg1 + 0x18)
    sub_142a47a60(arg2, 1, rax_1, var_18)
else
    sub_142a47f60(arg2, arg1 + 0x18, 3)

return arg2
