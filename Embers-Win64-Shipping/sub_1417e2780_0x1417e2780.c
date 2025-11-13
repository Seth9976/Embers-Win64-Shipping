// 函数: sub_1417e2780
// 地址: 0x1417e2780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_30, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_30)

int64_t* var_38 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int128_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_28, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &arg_20, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int32_t arg_10 = 0
int32_t r9

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    r9 = sub_140d30490(arg2, &arg_10, r8_9)
else
    r9 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_6 = *(arg2 + 0x20)
int128_t zmm0 = var_28
int64_t* rdx_10 = var_38
int32_t zmm1 = arg_10
int512_t zmm3
zmm3.o = arg_20
int64_t rdi
rdi.b = rax_6 != 0
int64_t* rcx_5 = var_30
*(arg2 + 0x20) = rdi + rax_6
int32_t var_48 = zmm1
int128_t var_18 = zmm0
return sub_1417d9870(rcx_5, rdx_10, &var_18, r9)
