// 函数: sub_14064dc20
// 地址: 0x14064dc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void arg_10

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

void* rax_2 = *(arg2 + 0x38)
void* rbx = &arg_10

if (rax_2 != 0)
    rbx = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_3 != 0
*(arg2 + 0x20) = rcx_1 + rax_3
void arg_18
int64_t* rax_4 = sub_140b0a2c0(&arg_18, 0x7b2, 1, 1, 0, 0, 0, 0)
int64_t rcx_5 = *rbx - *rax_4
int64_t rax_5
int64_t rdx_2
rdx_2:rax_5 = muls.dp.q(-0x29406b2a1a85bd43, rcx_5)
*arg3 = (rcx_5 s/ 0x989680).d
return ((rdx_2 + rcx_5) s>> 0x17 u>> 0x3f).d
