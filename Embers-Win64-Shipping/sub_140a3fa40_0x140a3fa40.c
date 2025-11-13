// 函数: sub_140a3fa40
// 地址: 0x140a3fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
sub_140b73110(&var_28)
sub_140a464c0()
int16_t* const rbx = &data_142d40450
int16_t* const rdx = &data_142d40450
int64_t r9
r9.b = 1
int32_t var_20

if (var_20 != 0)
    rdx = var_28

(*(data_14399ea08 + 0x60))(&data_14399ea08, rdx, 0, r9)
int64_t var_18
int64_t* rax = sub_140b25230(&var_18)
int32_t rdx_1 = rax[1].d
int32_t rdx_2 = neg.d(rdx_1)
int16_t* var_38 = *rax
*rax = 0
int32_t rcx_3 = rax[1].d
int32_t rcx_4 = *(rax + 0xc)
rax[1] = 0
int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 0x1b + rcx_3

if (rdx_5 s> rcx_4)
    sub_1405947f0(&var_38, rdx_5)

sub_140a2cf70(&var_38, u"Shaders/WorkingDirectory/", 0x19)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140a464c0()
int64_t r9_1
r9_1.b = 1

if (rcx_3 != 0)
    rbx = var_38

int64_t result = (*(data_14399ea08 + 0x60))(&data_14399ea08, rbx, 0, r9_1)
int16_t* rcx_8 = var_38

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_28

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
