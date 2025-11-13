// 函数: sub_142033950
// 地址: 0x142033950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 8) == 0)
    return 0

void* result = nullptr
void** const var_158
memset(&var_158, 0, 0x90)
sub_140b4c2a0(&var_158)
int64_t var_c8 = 0
var_158 = &data_142d6b230
int64_t var_c0 = arg1
int64_t var_b8 = 0x7fffffffffffffff
sub_140b55290(&var_158, 1)
var_158[0x1b](&var_158, 1)
int64_t var_1b8 = 0
int32_t var_1b0 = 0
int32_t var_1a8 = 0
int16_t var_1a4 = 0
int32_t var_1a0 = 0
int64_t var_198
__builtin_memset(&var_198, 0, 0x14)
int64_t var_180
__builtin_memset(&var_180, 0, 0x1c)
sub_1420390b0(&var_1b8, &var_158, arg2)
int16_t* const rsi = &data_142d40450
int16_t* const rbx_1 = &data_142d40450
int16_t* var_170
int32_t var_168

if (var_168 != 0)
    rbx_1 = var_170

int64_t* rax_3 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, rbx_1, 0)
int64_t* rbx_2 = rax_3
int64_t* rax_5

if (rax_3 == 0)
    if (var_168 != 0)
        rsi = var_170
    
    rax_5 = sub_140d2f6f0(sub_140bdf2e0(), 0, rsi, 0, 0, 0, 1, 0)
    rbx_2 = rax_5

if (rax_3 != 0 || rax_5 != 0)
    int64_t arg_8 = 0
    result = sub_140596910(sub_140cde0b0(), rbx_2, 0, 0, 0, 0, 0)
    void** var_a8
    sub_140b4c130(&var_a8, &var_158)
    char var_10_1 = 1
    var_a8 = &data_14325c860
    int64_t r8_2 = *result
    (*(r8_2 + 0xa0))(result, &var_a8, r8_2)
    sub_140b4cb40(&var_a8)

if (var_170 != 0)
    sub_140a74f90(var_170)

int64_t rcx_12 = var_180

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = var_198

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

sub_140b4cb40(&var_158)
return result
