// 函数: sub_1424e76e0
// 地址: 0x1424e76e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_2 != 0
int32_t result = arg_10.d
*(arg2 + 0x20) = rdi + rax_2
*arg3 = result
return result
