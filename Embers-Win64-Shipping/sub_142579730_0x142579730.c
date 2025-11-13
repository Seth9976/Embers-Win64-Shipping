// 函数: sub_142579730
// 地址: 0x142579730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int128_t var_28 = zx.o(0)

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_8 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rcx_2 = *(arg2 + 0x20)
int32_t zmm2 = arg_8
int64_t rax_3
rax_3.b = rcx_2 != 0
int64_t rcx_3 = 0
*(arg2 + 0x20) = rax_3 + rcx_2
int64_t rax_5 = var_28.q
int64_t var_18 = rax_5

if (rax_5 != 0)
    rcx_3 = var_28:8.q

if (rax_5 == 0)
    rcx_3 = 0

int64_t var_10 = rcx_3
return sub_1405b2c90(arg1 + 0x200, &var_18, zmm2)
