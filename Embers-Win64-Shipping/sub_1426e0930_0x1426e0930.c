// 函数: sub_1426e0930
// 地址: 0x1426e0930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28
int64_t* rax_1 = sub_140bdef30(sub_1427344f0(), &var_28, zx.q(*(arg1 + 0xbc)))
int16_t* const rbx = &data_142d40450
int16_t* const r15

if (rax_1[1].d == 0)
    r15 = &data_142d40450
else
    r15 = *rax_1

int64_t var_38
int64_t* rax_2 = sub_140b63b70(arg1 + 0xa0, &var_38)
int16_t* const r14

if (rax_2[1].d == 0)
    r14 = &data_142d40450
else
    r14 = *rax_2

int64_t var_48
int64_t* rax_3 = sub_140b63b70(arg1 + 0x78, &var_48)

if (rax_3[1].d != 0)
    *rax_3

int64_t var_58
int64_t* rax_4 = sub_1426b3560(arg1, &var_58)

if (rax_4[1].d != 0)
    rbx = *rax_4

int16_t* const var_60 = r15
int16_t* const var_68 = r14
sub_140a2e390(arg2, u"%s: Find path from %s to %s (mode:%s)", rbx)
int64_t rcx_5 = var_58

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_48

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = var_38

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return arg2
