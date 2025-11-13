// 函数: sub_142478ea0
// 地址: 0x142478ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_5 = *(arg2 + 0x20)
uint64_t r9 = zx.q(arg_10)
uint64_t r8_8 = zx.q(arg_20)
uint64_t rdx_8 = zx.q(var_28)
int64_t rdi
rdi.b = rax_5 != 0
int32_t rax_6 = arg_8
*(arg2 + 0x20) = rdi + rax_5
return (*(*arg1 + 0x868))(arg1, rdx_8, r8_8, r9, rax_6)
