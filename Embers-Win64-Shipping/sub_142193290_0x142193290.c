// 函数: sub_142193290
// 地址: 0x142193290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 4)
    return 

int64_t var_18
int64_t* rax_1 = sub_140b63b70(arg1 + 0x34, &var_18)
int16_t* const r8_1

if (rax_1[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_1

int64_t var_28
sub_140a2e390(&var_28, u"BeamTarget : Actor: %s\n", r8_1)
int64_t rdi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rdi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

int64_t* rcx_5 = (rdi_1 << 4) + *arg2
*rcx_5 = 0
*rcx_5 = var_28
var_28 = 0
int32_t var_20
rcx_5[1].d = var_20
int32_t var_1c
*(rcx_5 + 0xc) = var_1c
int64_t rcx_6 = var_28
var_20.q = 0

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
