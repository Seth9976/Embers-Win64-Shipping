// 函数: sub_14263ea50
// 地址: 0x14263ea50
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
int32_t arg_18 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
char arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rcx_3 = *(arg2 + 0x20)
int64_t rdx_6 = 0
char r8_6 = arg_10
int512_t zmm1
zmm1.o = arg_18
int64_t rax_4
rax_4.b = rcx_3 != 0
*(arg2 + 0x20) = rax_4 + rcx_3
int64_t rax_6 = var_28.q
int64_t var_18 = rax_6

if (rax_6 != 0)
    rdx_6 = var_28:8.q

int64_t var_10 = rdx_6
void* result = sub_14263cb40(&var_18, rdx_6, r8_6)
*arg3 = result
return result
