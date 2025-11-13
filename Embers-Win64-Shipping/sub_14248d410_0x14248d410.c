// 函数: sub_14248d410
// 地址: 0x14248d410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int128_t var_30
int128_t* r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    r9 = sub_140d30490(arg2, &var_30, r8_7)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t rax_5 = *(arg2 + 0x20)
int64_t r8_8 = arg_20
int512_t zmm3
zmm3.o = arg_10
int64_t rdx_8 = var_38
int64_t rcx_4
rcx_4.b = rax_5 != 0
int128_t var_18 = var_30
*(arg2 + 0x20) = rcx_4 + rax_5
int128_t* var_48 = &var_18
return sub_1424164d0(arg1, rdx_8, r8_8, r9)
