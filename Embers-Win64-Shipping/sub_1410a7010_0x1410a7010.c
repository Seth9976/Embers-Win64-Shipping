// 函数: sub_1410a7010
// 地址: 0x1410a7010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
void* rax = sub_14139ce70(arg1)
int64_t rax_1 = sub_14139ce70(arg1)
arg2[8]
int64_t* rdi_1
int128_t zmm6

if (arg1[0x1e].b != 0 || *(arg1 + 0xf1) != 0)
    int64_t* rax_2
    rax_2, zmm6 = sub_1413a8300(&arg1[0xa], arg2)
    rdi_1 = rax_2
else
    rdi_1 = data_143ec4d20 + 8

int32_t rax_3
int64_t rcx_3

if (rax == 0)
    rcx_3 = data_143ec4fdc
    rax_3 = rcx_3.d
else
    rcx_3 = *(rax + 0x14)
    rax_3 = data_143ec4fdc.d

int128_t zmm0 = *(r15 + 0x1598)
int64_t arg_18 = rcx_3
int32_t temp0 = divs.dp.d(sx.q(rax_3), rcx_3.d)
int128_t var_48 = zmm0
int64_t rcx_4 = var_48:8.q
int64_t r8 = temp0.q
uint32_t r9_1 = (r8 u>> 0x20).d
int32_t arg_14 = divs.dp.d(sx.q((rcx_4 u>> 0x20).d - 1 + r9_1), r9_1)
int64_t rax_14 = var_48.q
int32_t arg_8
arg_8.q = rax_14
int32_t arg_c = divs.dp.d(sx.q(temp0), (r8 u>> 0x20).d)
var_48.q = divs.dp.d(sx.q(rax_14.d), temp0).q
var_48:8.q = divs.dp.d(sx.q((rcx_4 - 1).d + temp0), temp0).q
int32_t rax_22 = sub_141096bb0(*arg2)
bool cond:1 = rax_1 != 0

if (arg1[0x1d].d != 0)
    sub_1410abc60(arg1, arg2, rdi_1, &var_48, &arg_18, rax_22, cond:1)
    return &data_142d549c8

void* rcx_7

if (cond:1 == 0 && temp0 == 1)
    rcx_7 = data_143ec4ca0

int64_t* r9_2

if (cond:1 != 0 || temp0 != 1 || rcx_7 == 0)
    r9_2 = nullptr
else
    r9_2 = rcx_7 + 8

char var_58
var_58.d = rax_22
int32_t var_60
var_60.q = &arg_18
return sub_1410ac7c0(arg1, arg2, rdi_1, r9_2, zmm6, &var_48, var_60, var_58, cond:1)
