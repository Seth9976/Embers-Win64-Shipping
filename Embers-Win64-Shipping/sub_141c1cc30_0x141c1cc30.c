// 函数: sub_141c1cc30
// 地址: 0x141c1cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
char var_16e = 0
int32_t var_16c
__builtin_memset(&var_16c, 0, 0x24)
int16_t var_170
int16_t var_170_1 = var_170 & 0xfe00
void** const var_178 = &data_142ecfd88
int32_t var_120 = 0x3f800000
int64_t* var_148 = &data_143e20e70
int64_t var_140
__builtin_memset(&var_140, 0, 0x20)
int16_t var_11c = 0
int64_t var_118 = 0
int16_t var_110 = 0
char var_10e = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_178, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_178)

void*** rax_3 = *(arg2 + 0x38)
void** const* rsi = &var_178
void* var_198 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_198, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_198)

int64_t var_190
__builtin_memset(&var_190, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_190, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_190)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
int64_t var_108 = var_190
int128_t var_188
int64_t var_100 = var_188.q
void* rax_9 = var_188:8.q
*(arg2 + 0x20) = rdi + rax_6
void* var_f8 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

void var_e8
sub_1405979f0(arg3, sub_141ba2e90(&var_e8, rsi, var_198, &var_108))
int64_t result = sub_140597700(&var_e8)
int64_t* rbx_1 = var_188:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

int128_t var_138
int64_t* rbx_2 = var_138:8.q

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
