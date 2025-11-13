// 函数: sub_141f22680
// 地址: 0x141f22680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2

if (*(arg1 + 0x430) == 0)
    return 

int32_t rax_1 = sub_141f5e0e0(arg1, arg2)

if (rax_1 != 0xffffffff)
    int64_t rdx_1 = sx.q(rax_1) * 6
    int64_t rcx = *(*(arg1 + 0x430) + 0x1b8)
    int64_t rax_4 = *(arg1 + 0x638)
    *(rax_4 + (rdx_1 << 3)) = *(rcx + (rdx_1 << 3))
    *(rax_4 + (rdx_1 << 3) + 0x10) = *(rcx + (rdx_1 << 3) + 0x10)
    *(rax_4 + (rdx_1 << 3) + 0x20) = *(rcx + (rdx_1 << 3) + 0x20)
    return 

int64_t var_18
int64_t* rax_5 = sub_140b63b70(&arg_10, &var_18)
int16_t* const rbx_1 = &data_142d40450
int16_t* const r8_1

if (rax_5[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_5

int16_t* var_28
sub_140a2e390(&var_28, u"Invalid Bone Name '%s'", r8_1)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t arg_8 = 0
int32_t var_20

if (var_20 != 0)
    rbx_1 = var_28

sub_140d23f50(rbx_1, 3)
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)
