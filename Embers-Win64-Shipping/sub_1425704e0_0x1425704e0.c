// 函数: sub_1425704e0
// 地址: 0x1425704e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_10 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_10)

char arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int32_t var_18 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rax_5 = *(arg2 + 0x20)
int128_t zmm3 = var_18
char r8_8 = arg_10
int64_t* rdx_8 = var_10
int64_t rdi
rdi.b = rax_5 != 0
bool cond:1 = arg_20 != 0
*(arg2 + 0x20) = rdi + rax_5
rax_5.b = cond:1
return sub_142273df0(arg1, rdx_8, r8_8, zmm3, arg3, rax_5.b)
