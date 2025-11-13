// 函数: sub_1424ee720
// 地址: 0x1424ee720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
int64_t rax_3
int64_t rdx_2
rdx_2:rax_3 = muls.dp.q(0x1ca213d840baf7d5, arg_10)
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rcx_4 = rdx_2 s>> 0x1a
int64_t rcx_5 = rcx_4 + (rcx_4 u>> 0x3f)
int64_t rax_6
int64_t rdx_3
rdx_3:rax_6 = muls.dp.q(-0x7777777777777777, rcx_5)
int64_t rdx_5 = (rdx_3 + rcx_5) s>> 5
int32_t result = (rdx_5.d + (rdx_5 u>> 0x3f).d) * 0x3c
*arg3 = rcx_5.d - result
return result
