// 函数: sub_142b50130
// 地址: 0x142b50130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
char* result

if (*arg3 s> 0)
    result = nullptr
else
    int16_t var_158[0x48]
    sub_142a49a60(arg2, &var_158, 0x81, arg3)
    int16_t rax_2 = *(arg2 + 8)
    int32_t rax_4
    
    if (rax_2 s< 0)
        rax_4 = *(arg2 + 0xc)
    else
        rax_4 = sx.d(rax_2) s>> 5
    
    if (sx.q(rax_4) * 2 u>= 0x102)
        __report_rangecheckfailure()
        noreturn
    
    char* result_1 = nullptr
    var_158[sx.q(rax_4)] = 0
    char* result_3 = sub_142a86c30(*(arg1 + 0xf8), &var_158)
    char* result_2 = result_3
    
    if (result_3 != 0)
        goto label_142b502ed
    
    struct icu_64::ResourceSink::icu_64::ZNames::ZNamesLoader::VTable* const var_1a8 =
        &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
    int128_t var_1a0
    __builtin_memset(&var_1a0, 0, 0x30)
    uint64_t var_170_1 = 0
    sub_142b50080(&var_1a8, *(arg1 + 0xe8), arg2, arg3)
    int64_t rax_7 = var_1a0.q
    
    if (rax_7 == &data_14366f334)
        rax_7 = 0
    
    var_1a0.q = rax_7
    int64_t rax_8 = var_1a0:8.q
    
    if (rax_8 == &data_14366f334)
        rax_8 = 0
    
    var_1a0:8.q = rax_8
    int128_t var_190
    int64_t rax_9 = var_190.q
    
    if (rax_9 == &data_14366f334)
        rax_9 = 0
    
    var_190.q = rax_9
    int64_t rax_10 = var_190:8.q
    
    if (rax_10 == &data_14366f334)
        rax_10 = 0
    
    var_190:8.q = rax_10
    int128_t var_180
    int64_t rax_11 = var_180.q
    
    if (rax_11 == &data_14366f334)
        rax_11 = 0
    
    var_180.q = rax_11
    int64_t rax_12 = var_180:8.q
    
    if (rax_12 == &data_14366f334)
        rax_12 = 0
    
    var_180:8.q = rax_12
    uint64_t rax_13 = var_170_1
    
    if (rax_13 == &data_14366f334)
        rax_13 = 0
    
    uint64_t var_170_2 = rax_13
    result_2 = sub_142b4e460(*(arg1 + 0xf8), &var_1a0, arg2, arg3)
    var_1a8 = &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
    struct icu_64::ResourceSink::icu_64::ZNames::ZNamesLoader::VTable* const* rcx_4 = &var_1a8
    
    if (*arg3 s<= 0)
        sub_142ac3f40(rcx_4)
    label_142b502ed:
        
        if (result_2 != "<empty>")
            result_1 = result_2
        
        result = result_1
    else
        sub_142ac3f40(rcx_4)
        result = nullptr

__security_check_cookie(rax_1 ^ &var_1c8)
return result
