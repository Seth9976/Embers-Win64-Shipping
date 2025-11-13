// 函数: sub_141d042a0
// 地址: 0x141d042a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rax = sub_140b25050(&var_18)
int16_t* const rdi = &data_142d40450
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int64_t var_28
sub_140a2e390(&var_28, u"%sPaks/", r8)
int64_t rsi = sx.q(arg2[1].d)
int32_t rax_1 = (rsi + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_5 = (rsi << 4) + *arg2
*rcx_5 = 0
*rcx_5 = var_28
var_28 = 0
int32_t var_20
rcx_5[1].d = var_20
int32_t result_1
*(rcx_5 + 0xc) = result_1
int64_t rcx_6 = var_28
var_20.q = 0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t* rax_5 = sub_140b257f0()
int16_t* const r8_1

if (rax_5[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_5

sub_140a2e390(&var_28, u"%sPaks/", r8_1)
int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_6 = (rsi_1 + 1).d
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_12 = (rsi_1 << 4) + *arg2
*rcx_12 = 0
*rcx_12 = var_28
var_28 = 0
rcx_12[1].d = var_20
*(rcx_12 + 0xc) = result_1
int64_t rcx_13 = var_28
var_20.q = 0

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int16_t** rax_10 = sub_140b139e0(&var_18)

if (rax_10[1].d != 0)
    rdi = *rax_10

sub_140a2e390(&var_28, u"%sPaks/", rdi)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_11 = (rdi_1 + 1).d
arg2[1].d = rax_11

if (rax_11 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_19 = (rdi_1 << 4) + *arg2
*rcx_19 = 0
*rcx_19 = var_28
var_28 = 0
rcx_19[1].d = var_20
int32_t result = result_1
*(rcx_19 + 0xc) = result
int64_t rcx_20 = var_28
var_20.q = 0

if (rcx_20 != 0)
    result = sub_140a74f90(rcx_20)

int64_t rcx_21 = var_18

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
