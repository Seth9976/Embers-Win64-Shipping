// 函数: sub_1425a6c20
// 地址: 0x1425a6c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_3 = *(arg2 + 0x38)
void* rdi = &var_28
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rdi = rax_3

void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r9 = &var_18
int32_t rdx_6 = arg_10

if (rax_5 != 0)
    r9 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rcx_3
rcx_3.b = rax_6 != 0
*(arg2 + 0x20) = rcx_3 + rax_6
return sub_141f634b0(arg1, rdx_6, rdi, r9, 0)
