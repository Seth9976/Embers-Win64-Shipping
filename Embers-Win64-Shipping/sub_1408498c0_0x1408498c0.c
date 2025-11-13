// 函数: sub_1408498c0
// 地址: 0x1408498c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4ad80(*arg2, arg1 + 0x3c, 4)
int32_t* rcx_1 = *arg2
uint32_t arg_8 = zx.d(*(arg1 + 0x38))
sub_140b4ad80(rcx_1, &arg_8, 4)
int32_t* rcx_2 = *arg2
arg_8 = *(arg1 + 0x40) & 1
sub_140b4ad80(rcx_2, &arg_8, 4)
int64_t var_18
int64_t* rax_3 = sub_140b63b70(arg1 + 0x48, &var_18)
int16_t* const rbx = &data_142d40450
int32_t rcx_4 = rax_3[1].d
int32_t r8 = rcx_4 - 1

if (rcx_4 == 0)
    r8 = 0

int16_t* const rdx_4

if (rcx_4 == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *rax_3

sub_140b4ad80(*arg2, rdx_4, sx.q(r8) * 2)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t** rax_4 = sub_140b63b70(arg1 + 0x30, &var_18)
int32_t rcx_8 = rax_4[1].d
int32_t rdx_6 = rcx_8 - 1

if (rcx_8 == 0)
    rdx_6 = 0

if (rcx_8 != 0)
    rbx = *rax_4

sub_140b4ad80(*arg2, rbx, sx.q(rdx_6) * 2)
int64_t rcx_10 = var_18

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t result
result.b = 1
return result
