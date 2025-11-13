// 函数: sub_142ae6310
// 地址: 0x142ae6310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1e8 = -2
void var_228
int64_t rax_1 = __security_cookie ^ &var_228
int128_t* rdx = *(arg1 + 0x290)
int128_t timeZoneInformation = *rdx
int128_t var_e8 = rdx[1]
int128_t var_d8 = rdx[2]
int128_t var_c8 = rdx[3]
int128_t var_b8 = rdx[4]
int128_t var_a8 = rdx[5]
int128_t var_98 = rdx[6]
int128_t var_88 = rdx[7]
int128_t var_78 = rdx[8]
int128_t var_68 = rdx[9]
int64_t var_58 = rdx[0xa].q
int32_t var_50 = *(rdx + 0xa8)
int32_t var_1f8 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1b8
sub_142ae6b60(arg1, &var_1b8, &timeZoneInformation, 
    Concurrency::details::UMSFreeThreadProxy::GetContext(arg2))
sub_142a47ff0(&var_1b8)
int64_t rax_6 =
    sub_142b64780(sub_142b64730(int.q(sub_142a6a540(arg2, &var_1f8)), 2, &var_1f8), 3, &var_1f8)
FILETIME fileTime
fileTime.dwLowDateTime = rax_6.d
fileTime.dwHighDateTime = (rax_6 s>> 0x20).d
SYSTEMTIME var_1d0
FileTimeToSystemTime(&fileTime, &var_1d0)
SYSTEMTIME localTime
SystemTimeToTzSpecificLocalTime(&timeZoneInformation, &var_1d0, &localTime)
int32_t rax_8 = *(arg1 + 0x16c)

if (rax_8 == 0xffffffff)
label_142ae65a9:
    
    if (*(arg1 + 0x168) != 0xffffffff)
        sub_142ae67a0(arg1, &localTime, arg3)
else if (*(arg1 + 0x168) == 0xffffffff)
    if (rax_8 == 0xffffffff)
        goto label_142ae65a9
    
    sub_142ae65f0(arg1, &localTime, arg3)
else
    var_1b8 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_1b0_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_138 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_130_1 = 2
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable** r12_1 = *(arg1 + 0x160)
    sub_142ae65f0(arg1, &localTime, &var_1b8)
    sub_142ae67a0(arg1, &localTime, &var_138)
    int64_t* rbx_1 = *(arg1 + 0x148)
    int64_t rax_10 = (*(*arg2 + 0xb0))(arg2)
    char* rax_12 = (*(*rbx_1 + 0xb0))(rbx_1)
    void* r14_2 = rax_10 - rax_12
    uint32_t i
    uint32_t r9_1
    
    do
        r9_1 = zx.d(*rax_12)
        i = zx.d(*(rax_12 + r14_2))
        
        if (r9_1 != i)
            break
        
        rax_12 = &rax_12[1]
    while (i != 0)
    
    if (r9_1 - i != 0)
        r12_1 = sub_142ae68f0(arg1, arg2, arg1 + 0x170, &var_1f8)
    
    void** var_178 = &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_170_1 = 2
    sub_142b62570(&var_178, r12_1, 2, 2, &var_1f8)
    sub_142b62a90(&var_178, &var_138, &var_1b8, arg3, &var_1f8)
    j_sub_142a47ff0(&var_178)
    sub_142a47ff0(&var_138)
    sub_142a47ff0(&var_1b8)

__security_check_cookie(rax_1 ^ &var_228)
return arg3
