// 函数: sub_142a63c50
// 地址: 0x142a63c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char* var_108
memset(&var_108, 0, 0xc8)
int64_t var_54 = 0
sub_142a62230(arg1, arg2, &var_108, arg4)
int32_t var_118
void* result_1

if (arg4 == 0 || *arg4 s> 0)
    result_1 = nullptr
else
    void var_e0
    int32_t var_5c
    void* result_2 = sub_142ac3aa0(&var_e0, var_5c, &var_118)
    result_1 = result_2
    
    if (result_2 == 0)
        *arg4 = 0x11

void* i_1
void* i = i_1

if (i != 0)
    sub_142a615c0()
    sub_142a860a0(&data_144015690)
    
    for (; i != 0; i = *(i + 0x10))
        *(i + 0x6c) -= 1
    
    sub_142a615c0()
    sub_142a860d0(&data_144015690)

int64_t var_f8

if (var_f8 != 0)
    sub_142a7dcd0(var_f8)

int64_t var_e8
void var_a0

if (var_e8 != 0 && var_e8 != &var_a0)
    sub_142a7dcd0(var_e8)

int64_t var_e8_1 = 0
int32_t var_60 = 0

if (var_54.d == 0x12c9b17 && var_54:4.d == 0x12bb38b)
    sub_142a7dcd0(&var_108)

void* result

if (*arg4 s<= 0)
    int32_t rax_2 = var_118
    
    if (rax_2 == 3 && *result_1 == 0x2205 && *(result_1 + 2) == 0x2205 && *(result_1 + 4) == 0x2205)
        result_1 = nullptr
        *arg4 = 2
        rax_2 = 0
    
    if (arg3 != 0)
        *arg3 = rax_2
    
    result = result_1
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_138)
return result
