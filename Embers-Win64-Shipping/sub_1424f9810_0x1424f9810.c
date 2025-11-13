// 函数: sub_1424f9810
// 地址: 0x1424f9810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
int64_t rax_4 = arg_10
arg_10 = rax_4
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t rcx_4 = arg_18
int32_t rdx_5 = rcx_4.d * rax_4.d
int32_t rax_6 = arg_10:4.d * (rcx_4 u>> 0x20).d
arg_10.d = rdx_5
*arg3 = rdx_5
arg_10:4.d = rax_6
uint32_t result = (arg_10 u>> 0x20).d
arg3[1] = result
return result
