// 函数: sub_1424e74a0
// 地址: 0x1424e74a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int32_t rax_3 = arg_10
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t arg_18 = rax_3
int128_t var_18
int32_t* result = sub_140acc920(&var_18, &arg_18)
*arg3 = var_18
return result
