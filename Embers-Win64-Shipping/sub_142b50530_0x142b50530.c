// 函数: sub_142b50530
// 地址: 0x142b50530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_160 = -2
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* result

if (*arg3 s> 0)
    result = nullptr
else
    int16_t var_158[0x48]
    
    if (sx.q(sub_142a49a60(arg2, &var_158, 0x81, arg3)) * 2 u>= 0x102)
        __report_rangecheckfailure()
        noreturn
    
    var_158[sx.q(sub_142a49a60(arg2, &var_158, 0x81, arg3))] = 0
    int64_t* result_1 = sub_142a86c30(*(arg1 + 0xf0), &var_158)
    
    if (result_1 != 0)
        result = result_1
    else
        struct icu_64::ResourceSink::icu_64::ZNames::ZNamesLoader::VTable* const var_1a8 =
            &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
        int128_t var_1a0
        __builtin_memset(&var_1a0, 0, 0x30)
        uint64_t var_170_1 = 0
        sub_142b503c0(&var_1a8, *(arg1 + 0xe8), arg2, arg3)
        int64_t rax_3 = var_1a0.q
        
        if (rax_3 == &data_14366f334)
            rax_3 = 0
        
        var_1a0.q = rax_3
        int64_t rax_4 = var_1a0:8.q
        
        if (rax_4 == &data_14366f334)
            rax_4 = 0
        
        var_1a0:8.q = rax_4
        int128_t var_190
        int64_t rax_5 = var_190.q
        
        if (rax_5 == &data_14366f334)
            rax_5 = 0
        
        var_190.q = rax_5
        int64_t rax_6 = var_190:8.q
        
        if (rax_6 == &data_14366f334)
            rax_6 = 0
        
        var_190:8.q = rax_6
        int128_t var_180
        int64_t rax_7 = var_180.q
        
        if (rax_7 == &data_14366f334)
            rax_7 = 0
        
        var_180.q = rax_7
        int64_t rax_8 = var_180:8.q
        
        if (rax_8 == &data_14366f334)
            rax_8 = 0
        
        var_180:8.q = rax_8
        uint64_t rax_9 = var_170_1
        
        if (rax_9 == &data_14366f334)
            rax_9 = 0
        
        uint64_t var_170_2 = rax_9
        int64_t* result_2 = sub_142b4e530(*(arg1 + 0xf0), &var_1a0, arg2, arg3)
        var_1a8 = &icu_64::ZNames::ZNamesLoader::`vftable'{for `icu_64::ResourceSink'}
        struct icu_64::ResourceSink::icu_64::ZNames::ZNamesLoader::VTable* const* rcx_6 = &var_1a8
        
        if (*arg3 s<= 0)
            sub_142ac3f40(rcx_6)
            result = result_2
        else
            sub_142ac3f40(rcx_6)
            result = nullptr

__security_check_cookie(rax_1 ^ &var_1c8)
return result
