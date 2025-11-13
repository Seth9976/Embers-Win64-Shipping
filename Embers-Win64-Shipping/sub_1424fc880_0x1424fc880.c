// 函数: sub_1424fc880
// 地址: 0x1424fc880
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

if (rax_4 == 0)
    int64_t result = sub_1420d0d70()
    *arg3 = 0
    return result

uint32_t rcx_4 = zx.d(rax_4)
uint32_t rax_5 = zx.d(arg_18)
*arg3 = (modu.dp.d(0:rax_5, rcx_4)).b
return zx.q(divu.dp.d(0:rax_5, rcx_4))
