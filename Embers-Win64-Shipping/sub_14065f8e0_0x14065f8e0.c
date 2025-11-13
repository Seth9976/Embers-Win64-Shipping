// 函数: sub_14065f8e0
// 地址: 0x14065f8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28 = nullptr

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

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t arg_10 = 0
char r8_7
char r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_8[4]
    r8_7, r9 = sub_140d30490(arg2, &arg_10, r8_8)
else
    r8_7, r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm0 = arg_10
int512_t zmm3
zmm3.o = arg_18
int512_t zmm2
zmm2.o = arg_20
int64_t rdi
rdi.b = rax_5 != 0
int64_t* rdx_8 = var_28
*(arg2 + 0x20) = rdi + rax_5
int64_t* result = sub_140640130(arg1, rdx_8, r8_7, r9, zmm0)
*arg3 = result
return result
