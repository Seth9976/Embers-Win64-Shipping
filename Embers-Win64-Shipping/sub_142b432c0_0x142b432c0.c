// 函数: sub_142b432c0
// 地址: 0x142b432c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_188 = -2
int128_t zmm6
int128_t var_38 = zmm6
void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int16_t var_fc
void* var_108 = &var_fc:1
int32_t var_100 = 0x28
var_fc = 0
int32_t rdi = 0
int32_t var_d0 = 0
int32_t result_1 = 0
void* var_190
void* var_128 = &var_190
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_2 = sub_142b46920(arg1, &var_88)
char rcx = (rax_2[1].w).b
void* rax_3

if ((rcx & 0x11) != 0)
    rax_3 = nullptr
else if ((rcx & 2) == 0)
    rax_3 = rax_2[3]
else
    rax_3 = rax_2 + 0xa

var_190 = rax_3
int32_t rax_4 = sub_142b467c0(arg1)
void var_c8
sub_142a47a60(&var_c8, 0, var_190, rax_4)
sub_142a8cd50(&var_108, &var_c8, &result_1)
sub_142a47ff0(&var_c8)
sub_142a47ff0(&var_88)
int32_t result = result_1

if (result == 0x1a)
    *arg3 = 0x10113
else if (result s<= 0)
    void var_178
    sub_142ab2be0(&var_178)
    int32_t var_194 = 0
    var_128 = var_108
    int32_t var_120_1 = var_d0
    var_128.o = var_128.o
    sub_142ab48b0(&var_178, &var_128, &var_194)
    
    if (var_194 s<= 0)
        int128_t zmm0_2 = sub_142ab5010(&var_178)
        
        if (sub_142b467c0(arg1) s> 0)
            int32_t rax_9
            
            do
                if (sub_142b46530(arg1, rdi) == 0x2e)
                    break
                
                rdi += 1
                rax_9 = sub_142b467c0(arg1)
            while (rdi s< rax_9)
        
        int32_t* rax_11
        
        if (rdi != sub_142b467c0(arg1))
            int32_t rbx_2 = sub_142b467c0(arg1) - rdi
            rax_11 = sub_142b46020(sub_142b45a70(&var_128, zmm0_2), &var_c8, rbx_2 - 1)
        else
            rax_11 = sub_142b45a70(&var_128, zmm0_2)
        
        *(arg2 + 0x40) = *rax_11
        *(arg2 + 0x50) = *(rax_11 + 0x10)
    else
        *arg3 = 0x10113
    
    result = sub_142ab2c10(&var_178)
else
    *arg3 = result

if (var_fc.b != 0)
    result = sub_142a7dcd0(var_108)

__security_check_cookie(rax_1 ^ &var_1b8)
return result
