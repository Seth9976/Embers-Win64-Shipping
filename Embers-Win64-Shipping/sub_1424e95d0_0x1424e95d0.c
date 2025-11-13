// 函数: sub_1424e95d0
// 地址: 0x1424e95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_18 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_3 != 0
char rax_4 = arg_10
*(arg2 + 0x20) = rcx_2 + rax_3

if (rax_4 != 0)
    uint8_t temp0 = (divu.dp.d(0:(zx.d(arg_18)), zx.d(rax_4))).b
    *arg3 = temp0
    return temp0

int64_t rax_5 = sub_1420d0c30()
*arg3 = 0
return rax_5
