// 函数: sub_14248fcf0
// 地址: 0x14248fcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_20 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:2 = *(arg2 + 0x20) == 0
char arg_10 = 0
int64_t rdx_5

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    rdx_5 = sub_140d30490(arg2, &arg_10, r8_5)
else
    rdx_5 = sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_4 = *(arg2 + 0x20)
int512_t zmm1
zmm1.o = arg_20
int64_t rcx_3
rcx_3.b = rax_4 != 0
int64_t var_18 = var_28
*(arg2 + 0x20) = rcx_3 + rax_4
int32_t var_20
int32_t var_10 = var_20
char result
int64_t rdx_7
result, rdx_7 = sub_141ead090(arg1, rdx_5, &var_18)

if (result == 0)
    sub_140be4120(u"ServerMoveOld_Validate")
    return result

zmm1.o = arg_20
var_18 = var_28
int32_t var_10_1 = var_20
return sub_141ead050(arg1, rdx_7, &var_18)
