// 函数: sub_1424e9ad0
// 地址: 0x1424e9ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t rcx_4 = arg_10
uint32_t r8_5

if (rcx_4.d != 0)
    r8_5 = (rcx_4 u>> 0x20).d

int64_t rax_10

if (rcx_4.d == 0 || r8_5 == 0)
    sub_1420d0cb0()
    rax_10 = data_143dbb180
else
    int64_t rax_4 = arg_18
    arg_10 = rax_4
    arg_10.d = divs.dp.d(sx.q(rax_4.d), rcx_4.d)
    arg_10:4.d = divs.dp.d(sx.q(arg_10:4.d), r8_5)
    rax_10 = arg_10

*arg3 = rax_10.d
uint32_t result = (rax_10 u>> 0x20).d
arg3[1] = result
return result
