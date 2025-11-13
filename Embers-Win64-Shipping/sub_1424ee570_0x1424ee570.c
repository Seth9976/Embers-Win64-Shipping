// 函数: sub_1424ee570
// 地址: 0x1424ee570
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
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rcx_3 = arg_10
int64_t rax_7
int64_t rdx_6
rdx_6:rax_7 = muls.dp.q(0x346dc5d63886594b, rcx_3 s% 0x989680)
*arg3 = (rcx_3 s% 0x989680 s/ 0x2710).d
return (rdx_6 s>> 0xb u>> 0x3f).d
