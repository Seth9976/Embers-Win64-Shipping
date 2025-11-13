// 函数: sub_1426e0650
// 地址: 0x1426e0650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r15 = *(arg1 + 0x68)
int64_t var_28
int64_t* rax = sub_140b63b70(arg1 + 0xa8, &var_28)
int16_t* const rbx = &data_142d40450
int16_t* const r14

if (rax[1].d == 0)
    r14 = &data_142d40450
else
    r14 = *rax

int64_t var_38
int64_t* rax_1 = sub_140b63b70(arg1 + 0x80, &var_38)

if (rax_1[1].d != 0)
    *rax_1

int64_t var_48
int64_t* rax_2 = sub_1426b3560(arg1, &var_48)

if (rax_2[1].d != 0)
    rbx = *rax_2

wchar16 const* const rax_3 = u"NOT EQUAL"

if (r15 == 0)
    rax_3 = u"EQUAL"

wchar16 const* const var_50 = rax_3
int16_t* const var_58 = r14
sub_140a2e390(arg2, u"%s:\n%s and %s\ncontain %s values", rbx)
int64_t rcx_4 = var_48

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_38

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_28

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

return arg2
