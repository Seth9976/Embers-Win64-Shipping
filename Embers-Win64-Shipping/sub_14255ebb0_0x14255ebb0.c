// 函数: sub_14255ebb0
// 地址: 0x14255ebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_40

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_40, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_40)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = arg_10 != 0
int64_t* var_48 = nullptr
int64_t rsi
rsi.b = cond:2
int64_t rdx_7

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    rdx_7 = sub_140d30490(arg2, &var_48, r8_7)
else
    rdx_7 = sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_5 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = arg_20
int64_t rdi
rdi.b = rax_5 != 0
int64_t var_28 = var_40
int32_t var_38
int32_t var_20 = var_38
int64_t* rax_7 = var_48
*(arg2 + 0x20) = rdi + rax_5
return sub_14221dba0(arg1, rdx_7, &var_28, rsi.b, rax_7)
