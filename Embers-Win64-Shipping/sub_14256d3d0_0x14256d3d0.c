// 函数: sub_14256d3d0
// 地址: 0x14256d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t arg_8 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_8, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm0_1 = arg_8
int64_t r9 = arg_10
int64_t rdx_8 = arg_20
int64_t rdi
rdi.b = rax_5 != 0
*(arg2 + 0x20) = rdi + rax_5
int64_t result = (*(*arg1 + 0x788))(arg1, rdx_8, &var_28, r9, zmm0_1)
int64_t rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
