// 函数: sub_1424e99e0
// 地址: 0x1424e99e0
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
*(arg2 + 0x20) = rdi + rax_3
int64_t rax_4

if (rcx_2 != 0)
    int64_t rax_5 = arg_18
    arg_10.q = rax_5
    arg_10 = divs.dp.d(sx.q(rax_5.d), rcx_2)
    arg4 = divs.dp.d(sx.q(arg4), rcx_2)
    rax_4 = arg_10.q
else
    sub_1420d0c90()
    rax_4 = data_143dbb180

*arg3 = rax_4.d
uint32_t result = (rax_4 u>> 0x20).d
arg3[1] = result
return result
