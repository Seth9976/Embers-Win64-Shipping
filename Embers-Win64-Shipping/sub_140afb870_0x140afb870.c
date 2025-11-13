// 函数: sub_140afb870
// 地址: 0x140afb870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = 0
int64_t var_40
__builtin_memset(&var_40, 0, 0x18)
int64_t var_38
sub_140b69ab0(&var_38, &var_48)
int64_t var_18
sub_140a2e390(&var_18, u"%d", 0xb6bff18)
int64_t var_28
int64_t* result = sub_140a2e390(&var_28, u"%02d", 1)
int64_t rcx_3 = var_28

if (rcx_3 != 0)
    result = sub_140a74f90(rcx_3)

int64_t rcx_4 = var_18

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = var_48

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = var_38

if (rcx_6 == 0)
    return result

return sub_140a74f90(rcx_6)
