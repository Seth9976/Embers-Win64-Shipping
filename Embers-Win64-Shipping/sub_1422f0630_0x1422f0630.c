// 函数: sub_1422f0630
// 地址: 0x1422f0630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a464c0()
int64_t var_58
int64_t* rax = sub_140b0f3a0(&var_58)
int16_t* const r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

(*(data_14399ea08 + 0x80))(&data_14399ea08, arg1 + 0x38, r8, &data_142e5ff88, 1, 0, 1)
int64_t rcx_1 = var_58

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

if ((*(arg1 + 0x48) & 1) == 0)
    char var_48 = 1
    int64_t var_40_1 = 0
    int32_t var_30_1 = (zx.o(0)).d
    char var_38_1 = 0
    int32_t var_34_1 = 0
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x18)
    sub_1422df290(arg1, 3, &var_48)
    int64_t rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

int64_t result
result.b = 1
return result
