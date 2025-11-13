// 函数: sub_1424ee4c0
// 地址: 0x1424ee4c0
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
rdx_2:rax_3 = muls.dp.q(0x346dc5d63886594b, arg_10)
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rcx_4 = rdx_2 s>> 0xb
int64_t rcx_5 = rcx_4 + (rcx_4 u>> 0x3f)
*arg3 = (rcx_5 s% 0x3e8).d
return (rcx_5 s/ 0x3e8).d * 0x3e8
