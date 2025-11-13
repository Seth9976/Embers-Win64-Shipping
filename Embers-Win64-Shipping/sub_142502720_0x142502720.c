// 函数: sub_142502720
// 地址: 0x142502720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int32_t rcx_2 = arg_10
int64_t rdi
rdi.b = rax_3 != 0
int64_t rax_4 = arg_18
arg_18 = rax_4
int32_t rax_5 = rax_4.d - rcx_2
arg_18:4.d -= rcx_2
*(arg2 + 0x20) = rdi + rax_3
*arg3 = rax_5
arg_18.d = rax_5
uint32_t result = (arg_18 u>> 0x20).d
arg3[1] = result
return result
