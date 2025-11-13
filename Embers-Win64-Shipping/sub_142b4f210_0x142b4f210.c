// 函数: sub_142b4f210
// 地址: 0x142b4f210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208

if (*arg2 s<= 0)
    char rax_3
    
    if (data_144016be0 != 2)
        rax_3 = sub_142a85f00(&data_144016be0)
    
    if (data_144016be0 == 2 || rax_3 == 0)
        int32_t rax_5 = data_144016be4
        
        if (rax_5 s> 0)
            *arg2 = rax_5
    else
        sub_142b51280(arg2)
        data_144016be4 = *arg2
        sub_142a85e80(&data_144016be0)

struct icu_64::TZDBNames::VTable** result

if (*arg2 s> 0 || *arg2 s> 0)
    result = nullptr
else
    struct icu_64::TZDBNames::VTable** result_1 = nullptr
    int16_t var_148[0x88]
    sub_142a49a60(arg1, &var_148, 0x81, arg2)
    int16_t rax_6 = *(arg1 + 8)
    int32_t rax_8
    
    if (rax_6 s< 0)
        rax_8 = *(arg1 + 0xc)
    else
        rax_8 = sx.d(rax_6) s>> 5
    
    if (sx.q(rax_8) * 2 u>= 0x102)
        __report_rangecheckfailure()
        noreturn
    
    uint64_t rcx_2 = zx.q(data_14401b1a0)
    var_148[sx.q(rax_8)] = 0
    TEB* gsbase
    
    if (data_144016cb0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_2 << 3))))
        _Init_thread_header(&data_144016cb0)
        
        if (data_144016cb0 == 0xffffffff)
            memset(&data_144016c60, 0, 0x50)
            _Mtx_init_in_situ(&data_144016c60, 2)
            atexit(sub_142d16160)
            _Init_thread_footer(&data_144016cb0)
    
    sub_142a860a0(&data_144016c60)
    struct icu_64::TZDBNames::VTable** result_2 = sub_142a86c30(data_144016bd8, &var_148)
    
    if (result_2 == 0)
        char** rax_13 = sub_142a64160("icudt64l-zone", "tzdbNames", arg2)
        char** rax_14 = sub_142a625a0(rax_13, "zoneStrings", rax_13, arg2)
        
        if (*arg2 s<= 0)
            char var_1d8[0x90]
            sub_142b50700(arg1, &var_1d8)
            struct icu_64::TZDBNames::VTable** result_3 = sub_142b4e160(rax_14, &var_1d8)
            struct icu_64::TZDBNames::VTable** result_4 = "<empty>"
            result_1 = result_3
            
            if (result_3 != 0)
                result_4 = result_3
            
            int64_t rax_15 = sub_142acf590(arg1)
            
            if (rax_15 != 0)
                sub_142a86f50(data_144016bd8, rax_15, result_4, arg2)
            
            if ((rax_15 == 0 || *arg2 s> 0) && result_1 != 0)
                (*result_1)->vFunc_0(result_1, 1)
                result_1 = nullptr
        
        sub_142a5f860(rax_14)
    else if (result_2 != "<empty>")
        result_1 = result_2
    
    sub_142a860d0(&data_144016c60)
    result = result_1

__security_check_cookie(rax_1 ^ &var_208)
return result
