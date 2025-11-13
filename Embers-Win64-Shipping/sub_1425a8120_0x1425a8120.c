// 函数: sub_1425a8120
// 地址: 0x1425a8120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int32_t rdx_2 = arg_10
int64_t rdi
rdi.b = rax_2 != 0
*(arg2 + 0x20) = rdi + rax_2
char result = sub_141f68080(arg1, rdx_2)
*arg3 = result
return result
