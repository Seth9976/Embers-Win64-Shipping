// 函数: sub_14064db20
// 地址: 0x14064db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

void* rax_3 = *(arg2 + 0x38)
void* rdi = &arg_20

if (rax_3 != 0)
    rdi = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_4 != 0
int64_t rax_5 = sx.q(arg_10)
*(arg2 + 0x20) = rcx_2 + rax_4
void var_18
int64_t result = *sub_140b0a2c0(&var_18, 0x7b2, 1, 1, 0, 0, 0, 0) + rax_5 * 0x989680
*rdi = result
return result
