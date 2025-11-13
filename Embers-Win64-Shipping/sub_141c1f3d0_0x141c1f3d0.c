// 函数: sub_141c1f3d0
// 地址: 0x141c1f3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_14 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_14, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_14)

int32_t arg_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_18 = 0
int64_t rsi
rsi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_18, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm1 = var_14
char rcx_4 = arg_10
int64_t rdi
rdi.b = rax_5 != 0
bool cond:4 = var_18 != 0
*(arg2 + 0x20) = rdi + rax_5
return sub_141be07c0(rcx_4, zmm1, rsi.b, cond:4)
