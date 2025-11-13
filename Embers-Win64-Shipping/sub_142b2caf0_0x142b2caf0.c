// 函数: sub_142b2caf0
// 地址: 0x142b2caf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c8 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** r15 = nullptr
int32_t rsi = 0
int32_t var_e8 = 0
sub_142a7db20(0, sub_142b2c860)
void* var_e0 = &data_144016a70
sub_142a9db60(&data_144016a70)
sub_142a9f940(&data_144016a70)
data_144016b38 = 1
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_2 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_e0_1 = rax_2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_b8
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_3

if (rax_2 == 0)
    rax_3 = nullptr
else
    Concurrency::agent::agent(&var_b8, u"[[:Zs:][\u0009][:Bidi_Control:][:Variation_Selector:]]")
    rsi = 1
    int32_t var_e8_1 = 1
    rax_3 = sub_142b661f0(rax_2, &var_b8, arg1)

data_1440169b8 = rax_3

if ((rsi.b & 1) != 0)
    rsi &= 0xfffffffe
    sub_142a47ff0(&var_b8)

struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_4 = j_sub_142a7dd00(0xc8)
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_e0_2 = rax_4
struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_5

if (rax_4 == 0)
    rax_5 = nullptr
else
    Concurrency::agent::agent(&var_b8, u"[[:Bidi_Control:]]")
    rsi |= 2
    int32_t var_e8_2 = rsi
    rax_5 = sub_142b661f0(rax_4, &var_b8, arg1)

data_1440169c0 = rax_5

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    sub_142a47ff0(&var_b8)

char** result = sub_142a641c0(nullptr, "root", arg1)
char** result_2 = result
char** result_1 = result

if (*arg1 s<= 0)
    struct icu_64::ResourceSink::x03a0a8a6::ParseDataSink::operator[]::ParseDataSink::VTable* const 
        var_d8 =
        &x03a0a8a6::ParseDataSink::operator[]::ParseDataSink::`vftable'{for `icu_64::ResourceSink'}
    sub_142a61e60(result_2, "parse", &var_d8, arg1)
    
    if (*arg1 s<= 0)
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_6 = j_sub_142a7dd00(0xc8)
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_e0_3 = rax_6
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** r12_1
        
        if (rax_6 == 0)
            r12_1 = nullptr
        else
            Concurrency::agent::agent(&var_b8, &data_14366b500)
            rsi |= 4
            int32_t var_e8_3 = rsi
            r12_1 = sub_142b661f0(rax_6, &var_b8, arg1)
        
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rbx_3 = r12_1
        struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_e0_4 = rbx_3
        
        if (r12_1 == 0 && *arg1 s<= r12_1.d)
            *arg1 = 7
        
        if ((rsi.b & 4) != 0)
            rsi &= 0xfffffffb
            sub_142a47ff0(&var_b8)
        
        if (*arg1 s<= 0)
            sub_142a9ebe0(r12_1, data_1440169e8)
            rbx_3 = nullptr
            int64_t var_e0_5 = 0
            data_1440169f0 = r12_1
            data_1440169f8 = sub_142b2c8f0(3, 4, 8)
            data_144016a00 = sub_142b2c8f0(5, 6, 8)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_10 =
                j_sub_142a7dd00(0xc8)
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_d0_1 = rax_10
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_78
            struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_11
            
            if (rax_10 == 0)
                rax_11 = nullptr
            else
                Concurrency::agent::agent(&var_78, &data_14366b560)
                rsi |= 8
                int32_t var_e8_4 = rsi
                rax_11 = sub_142b661f0(rax_10, &var_78, arg1)
            
            data_144016a28 = rax_11
            
            if ((rsi.b & 8) != 0)
                rsi &= 0xfffffff7
                sub_142a47ff0(&var_78)
            
            if (*arg1 s<= 0)
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** rax_12 =
                    j_sub_142a7dd00(0xc8)
                struct icu_64::UnicodeFilter::icu_64::UnicodeSet::VTable** var_d0_2 = rax_12
                
                if (rax_12 != 0)
                    Concurrency::agent::agent(&var_78, u"[:digit:]")
                    rsi |= 0x10
                    int32_t var_e8_5 = rsi
                    r15 = sub_142b661f0(rax_12, &var_78, arg1)
                
                data_144016a58 = r15
                
                if ((rsi.b & 0x10) != 0)
                    sub_142a47ff0(&var_78)
                
                if (*arg1 s<= 0)
                    data_144016a60 = sub_142b2c9b0(0x15, 9)
                    data_144016a68 = sub_142b2c9b0(0x15, 0xa)
                    void* rsi_1 = &data_1440169b0
                    int64_t i_1 = 0x18
                    int64_t i
                    
                    do
                        void* rcx_17 = *rsi_1
                        
                        if (rcx_17 != 0)
                            sub_142a9f940(rcx_17)
                        
                        rsi_1 += 8
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
        
        if (rbx_3 != 0)
            sub_142a9dbc0(rbx_3)
            sub_142a47920(rbx_3)
    
    result = sub_142ac3f40(&var_d8)

if (result_2 != 0)
    result = sub_142a5f860(result_2)

__security_check_cookie(rax_1 ^ &var_108)
return result
