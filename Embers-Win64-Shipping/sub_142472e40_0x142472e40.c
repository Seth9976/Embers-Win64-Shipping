// 函数: sub_142472e40
// 地址: 0x142472e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_18 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_20, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = *(arg2 + 0x20) == 0
char arg_10 = 0
int64_t rdx_5
int64_t r8_5

if (cond:2)
    int64_t* r8_6 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_6[4]
    rdx_5, r8_5 = sub_140d30490(arg2, &arg_10, r8_6)
else
    rdx_5, r8_5 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
char r9 = arg_10
int512_t zmm2
zmm2.o = arg_20
int512_t zmm1
zmm1.o = var_18
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
return sub_141ed60a0(arg1, rdx_5, r8_5, r9)
