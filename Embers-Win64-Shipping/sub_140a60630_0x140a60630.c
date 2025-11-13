// 函数: sub_140a60630
// 地址: 0x140a60630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
*arg1 = &data_142e62378
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

struct icu_64::UObject::icu_64::Locale::VTable* var_118
sub_1408f2b40(&var_118, rdx)
char* var_90
sub_142a45710(&arg1[1], var_90, nullptr, nullptr, nullptr)
int64_t var_98

if (var_98 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        rcx_2 = data_143ddb3f0
    
    (*(*rcx_2 + 0x30))(rcx_2, var_98)

__builtin_memset(&arg1[0x1d], 0, 0x90)
__builtin_memset(&arg1[0x31], 0, 0x30)
InitializeCriticalSection(&arg1[0x37])
SetCriticalSectionSpinCount(&arg1[0x37], 0xfa0)
arg1[0x3c] = 0
arg1[0x3d] = 0
InitializeCriticalSection(&arg1[0x3e])
SetCriticalSectionSpinCount(&arg1[0x3e], 0xfa0)
arg1[0x43] = 0
arg1[0x44] = 0
InitializeCriticalSection(&arg1[0x45])
SetCriticalSectionSpinCount(&arg1[0x45], 0xfa0)
arg1[0x4a] = 0
void* rcx_9 = &arg1[0x4c]
arg1[0x4b] = 0
*(rcx_9 + 0x10) = 0
*(rcx_9 + 0x18) = 0
*(rcx_9 + 0x1c) = 0x80
void* rax_3 = *(rcx_9 + 0x10)

if (rax_3 != 0)
    rcx_9 = rax_3

*rcx_9 = 0
*(rcx_9 + 8) = 0
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
InitializeCriticalSection(&arg1[0x54])
SetCriticalSectionSpinCount(&arg1[0x54], 0xfa0)

if (arg1[0x1c].b != 0)
    sub_142a45b10(&arg1[1], sub_142a459c0(&var_118))
    sub_142a45a20(&var_118)

int32_t var_138 = 0
struct icu_64::UObject::icu_64::PluralRules::VTable** rax_5
char r8_1
rax_5, r8_1 = sub_142a6f930(&arg1[1], 0, &var_138)
arg1[0x2f] = rax_5
int64_t var_130
sub_140a63f80(&arg1[0x31], sub_140a7e360(&var_130, rax_5, r8_1))
int64_t rbx_1 = var_130

if (rbx_1 != 0)
    int64_t* rcx_18 = data_143ddb3f0
    
    if (rcx_18 == 0)
        sub_140a750a0()
        rcx_18 = data_143ddb3f0
    
    (*(*rcx_18 + 0x30))(rcx_18, rbx_1)

var_138 = 0
struct icu_64::UObject::icu_64::PluralRules::VTable** rax_8
char r8_3
rax_8, r8_3 = sub_142a6f930(&arg1[1], 1, &var_138)
arg1[0x30] = rax_8
sub_140a63f80(&arg1[0x33], sub_140a7e360(&var_130, rax_8, r8_3))
int64_t rbx_2 = var_130

if (rbx_2 != 0)
    int64_t* rcx_22 = data_143ddb3f0
    
    if (rcx_22 != 0)
        (*(*rcx_22 + 0x30))(rcx_22, rbx_2)
    else
        sub_140a750a0()
        int64_t* rcx_23 = data_143ddb3f0
        int64_t r8_4 = *rcx_23
        (*(r8_4 + 0x30))(rcx_23, rbx_2, r8_4)

__security_check_cookie(rax_1 ^ &var_168)
return arg1
