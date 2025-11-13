// 函数: sub_141cbba00
// 地址: 0x141cbba00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int32_t var_19c = 0x80
int64_t var_208
__builtin_memset(&var_208, 0, 0x6c)
int32_t var_198 = 0xffffffff
int32_t var_194 = 0
int64_t var_188 = 0
int32_t var_180 = 0
int64_t var_178
__builtin_memset(&var_178, 0, 0x2c)
int32_t var_14c = 0x80
int32_t var_148 = 0xffffffff
int32_t var_144 = 0
int64_t var_138 = 0
int32_t var_130 = 0
int16_t var_128 = 0
char var_126 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_208, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_208)

int64_t* rax_3 = *(arg2 + 0x38)
int64_t* rsi = &var_208
void* var_218 = nullptr
int32_t i_2 = 0

if (rax_3 != 0)
    rsi = rax_3

*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_218, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_218)

int64_t* rax_5 = *(arg2 + 0x38)
int64_t* r8_4 = &var_218

if (rax_5 != 0)
    r8_4 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_6 != 0
*(arg2 + 0x20) = rbx + rax_6
void var_118
sub_141cb8b10(arg3, sub_141cb41c0(&var_118, rsi, r8_4))
sub_141c941c0(&var_118)
int32_t i_1 = i_2

if (i_1 != 0)
    int64_t* rbx_3 = var_218 + 8
    int32_t i
    
    do
        int64_t rcx_5 = *rbx_3
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        rbx_3 = &rbx_3[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_6 = var_218

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t result = sub_141c941c0(&var_208)
__security_check_cookie(rax_1 ^ &var_238)
return result
