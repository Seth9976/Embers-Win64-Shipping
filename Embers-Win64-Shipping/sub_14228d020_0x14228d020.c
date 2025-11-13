// 函数: sub_14228d020
// 地址: 0x14228d020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14229df60()
int64_t arg_10 = *(data_143f5e920 + 0x18)
int64_t var_38
sub_140b63b70(&arg_10, &var_38)
int64_t var_18
sub_140b18700(&var_18, &var_38, 1)
int64_t rcx_3 = var_38

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

uint64_t r8_1 = zx.q(data_143a2fd04)
data_143a2fd04 = (r8_1 + 1).d
int64_t var_28
int32_t rcx_5 = sub_140a2e390(&var_28, u"%03d_%s", r8_1)
int64_t rbx = var_28
var_38 = 0
int32_t var_20
int32_t var_30 = var_20
sub_1405a4c70(&var_38, sbb.d(rcx_5, rcx_5, var_20 != 0) + 0xb + var_20, 0)
memcpy(var_38, rbx, var_20 * 2)
int32_t rcx_10 = sub_140a20ba0(&var_38, u"_Leaks.txt", 0xa)
int64_t rbx_1 = var_28
int64_t var_48 = 0
int32_t var_40 = var_20
sub_1405a4c70(&var_48, sbb.d(rcx_10, rcx_10, var_20 != 0) + 0xc + var_20, 0)
memcpy(var_48, rbx_1, var_20 * 2)
int64_t result = sub_140a20ba0(&var_48, u"_Allocs.txt", 0xb)
int64_t rcx_15 = var_48

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = var_38

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

int64_t rcx_17 = var_28

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_18

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
