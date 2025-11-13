// 函数: sub_1406ed8d0
// 地址: 0x1406ed8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_168 = 0
int32_t var_160 = 0
int64_t var_158 = 0
int32_t var_150 = 0
int64_t var_148 = 0
int32_t var_140 = 0
int64_t var_138 = 0
int32_t var_130 = 0
int64_t var_128 = 0
int32_t var_120 = 0
int64_t var_118 = 0
int32_t var_110 = 0
int64_t var_e0 = 0
int32_t var_d8 = 0
int64_t var_d0 = 0
int32_t var_c8 = 0
int64_t var_108
__builtin_memset(&var_108, 0, 0x24)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_168, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_168)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rdi = var_168
int64_t var_b8 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_b0 = var_160

if (var_160 != 0)
    sub_1405a4c70(&var_b8, var_160, 0)
    memcpy(var_b8, rdi, var_160 * 2)
else
    int32_t var_ac_1 = 0

uint64_t var_a8 = 0
int32_t var_a0 = var_150

if (var_150 != 0)
    sub_1405a4c70(&var_a8, var_150, 0)
    memcpy(var_a8, var_158, var_150 * 2)
else
    int32_t var_9c_1 = 0

uint64_t var_98 = 0
int32_t var_90 = var_140

if (var_140 != 0)
    sub_1405a4c70(&var_98, var_140, 0)
    memcpy(var_98, var_148, var_140 * 2)
else
    int32_t var_8c_1 = 0

uint64_t var_88 = 0
int32_t var_80 = var_130

if (var_130 != 0)
    sub_1405a4c70(&var_88, var_130, 0)
    memcpy(var_88, var_138, var_130 * 2)
else
    int32_t var_7c_1 = 0

uint64_t var_78 = 0
int32_t var_70 = var_120

if (var_120 != 0)
    sub_1405a4c70(&var_78, var_120, 0)
    memcpy(var_78, var_128, var_120 * 2)
else
    int32_t var_6c_1 = 0

uint64_t var_68 = 0
int32_t var_60 = var_110

if (var_110 != 0)
    sub_1405a4c70(&var_68, var_110, 0)
    memcpy(var_68, var_118, var_110 * 2)
else
    int32_t var_5c_1 = 0

int64_t var_58 = var_108
int64_t var_50
__builtin_memset(&var_50, 0, 0x1c)
int64_t var_f0
int32_t var_e8

if (var_e8 != 0)
    uint64_t var_40
    sub_1405a4c70(&var_40, var_e8, 0)
    memcpy(var_40, var_f0, var_e8 * 2)
else
    int32_t var_34_1 = 0

uint64_t var_30 = 0
int32_t var_28 = var_d8

if (var_d8 != 0)
    sub_1405a4c70(&var_30, var_d8, 0)
    memcpy(var_30, var_e0, var_d8 * 2)
else
    int32_t var_24_1 = 0

uint64_t var_20 = 0
int32_t var_18 = var_c8

if (var_c8 != 0)
    sub_1405a4c70(&var_20, var_c8, 0)
    memcpy(var_20, var_d0, var_c8 * 2)
else
    int32_t var_14_1 = 0

int64_t result = sub_1406eba30(&var_b8)

if (var_d0 != 0)
    result = sub_140a74f90(var_d0)

if (var_e0 != 0)
    result = sub_140a74f90(var_e0)

if (var_f0 != 0)
    result = sub_140a74f90(var_f0)

if (var_118 != 0)
    result = sub_140a74f90(var_118)

if (var_128 != 0)
    result = sub_140a74f90(var_128)

if (var_138 != 0)
    result = sub_140a74f90(var_138)

if (var_148 != 0)
    result = sub_140a74f90(var_148)

if (var_158 != 0)
    result = sub_140a74f90(var_158)

int64_t rcx_30 = var_168

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)
