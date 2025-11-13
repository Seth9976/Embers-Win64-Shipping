// 函数: sub_142b78010
// 地址: 0x142b78010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_448 = -2
void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int32_t* r15 = arg3
void* var_3d8 = nullptr

if (*arg4 s<= 0)
    void var_3d0
    sub_142a86da0(&var_3d0, sub_142a4b0a0, sub_142a4b070, 0, arg4)
    
    if (*arg4 s<= 0)
        var_3d8 = &var_3d0
        std::ios_base::precision(&var_3d0, sub_140a4f210)

int64_t* var_438 = nullptr

if (*arg4 s<= 0)
    void var_430
    sub_142a86da0(&var_430, sub_142a4b0a0, sub_142a4b070, 0, arg4)
    
    if (*arg4 s<= 0)
        var_438 = &var_430
        std::ios_base::precision(&var_430, sub_140a4f210)

int64_t* var_378 = nullptr

if (*arg4 s<= 0)
    void var_370
    sub_142a86da0(&var_370, sub_142a4b0a0, sub_142a4b070, 0, arg4)
    
    if (*arg4 s<= 0)
        var_378 = &var_370
        std::ios_base::precision(&var_370, sub_140a4f210)

void (* result)()

if (*arg4 s> 0)
    result = nullptr
else
    std::ios_base::width(var_3d8, sub_140a4f210)
    std::ios_base::width(var_438, sub_140a4f210)
    std::ios_base::width(var_378, sub_140a4f210)
    void var_258
    sub_142b77c00(arg1, &var_378, &var_258, sub_142a49a60(arg2, &var_258, 0x100, arg4), arg4)
    int32_t var_468 = 0xffffffff
    void* i_2 = sub_142a86e70(var_378, &var_468)
    void* i = i_2
    
    if (i_2 != 0)
        do
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_298
            sub_142a479b0(&var_298, *(i + 8))
            sub_142a86f90(var_438)
            sub_142b78610(&var_298, 1, &var_438, arg4)
            int32_t var_460 = 0xffffffff
            void* j_1 = sub_142a86e70(var_438, &var_460)
            void* j = j_1
            
            if (j_1 != 0)
                do
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2d8
                    sub_142a479b0(&var_2d8, *(j + 8))
                    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_318 =
                        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                    int16_t var_310_1 = 2
                    int64_t* rcx_17 = *(arg1 + 0xb8)
                    (*(*rcx_17 + 0x10))(rcx_17, &var_2d8, &var_318, arg4)
                    bool cond:0_1
                    
                    if ((var_310_1.b & 1) == 0)
                        int32_t r8_4
                        int32_t var_30c
                        
                        if (var_310_1 s< 0)
                            r8_4 = var_30c
                        else
                            r8_4 = sx.d(var_310_1) s>> 5
                        int16_t rax_6 = *(arg2 + 8)
                        int32_t rax_8
                        
                        if (rax_6 s< 0)
                            rax_8 = *(arg2 + 0xc)
                        else
                            rax_8 = sx.d(rax_6) s>> 5
                        
                        if ((*(arg2 + 8) & 1) == 0 && r8_4 == rax_8)
                            cond:0_1 = sub_142a490e0(&var_318, arg2, r8_4) == 0
                            goto label_142b782ca
                    else
                        cond:0_1 = (*(arg2 + 8) & 1) == 0
                    label_142b782ca:
                        
                        if (not(cond:0_1))
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_10 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_440_1 =
                                rax_10
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rdi_1
                            
                            if (rax_10 == 0)
                                rdi_1 = nullptr
                            else
                                rdi_1 = sub_142a479b0(rax_10, &var_2d8)
                            
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_12 =
                                j_sub_142a7dd00(0x40)
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** var_450_1 =
                                rax_12
                            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_13
                            
                            if (rax_12 == 0)
                                rax_13 = nullptr
                            else
                                rax_13 = sub_142a479b0(rax_12, &var_2d8)
                            
                            sub_142a86f50(var_3d8, rax_13, rdi_1, arg4)
                    j = sub_142a86e70(var_438, &var_460)
                    sub_142a47ff0(&var_318)
                    sub_142a47ff0(&var_2d8)
                while (j != 0)
            
            i = sub_142a86e70(var_378, &var_468)
            sub_142a47ff0(&var_298)
        while (i != 0)
        
        r15 = arg3
    
    if (*arg4 s> 0)
        result = nullptr
    else
        int32_t rax_16 = sub_1405f8990(var_3d8)
        
        if (rax_16 == 0)
            *arg4 = 1
            result = nullptr
        else
            int64_t rdi_2 = sx.q(rax_16)
            int64_t rax_17 = 0x40 * rdi_2
            
            if (mulu.dp.q(0x40, rdi_2) u>> 0x40 != zx.o(0))
                rax_17 = -1
            
            uint64_t rax_18 = rax_17 + 8
            
            if (rax_17 u>= -8)
                rax_18 = -1
            
            int64_t* rax_19 = j_sub_142a7dd00(rax_18)
            int64_t* var_450_2 = rax_19
            
            if (rax_19 == 0)
                result = nullptr
            else
                *rax_19 = rdi_2
                result = &rax_19[1]
                int64_t (* var_478_5)(struct icu_64::Replaceable::icu_64::UnicodeString::VTable** 
                    arg1) = sub_142a47ff0
                `eh vector constructor iterator'(result, 0x40, rdi_2)
            
            if (result != 0)
                *r15 = 0
                var_468 = 0xffffffff
                
                for (void* i_1 = sub_142a86e70(var_3d8, &var_468); i_1 != 0; 
                        i_1 = sub_142a86e70(var_3d8, &var_468))
                    int64_t rdx_15 = sx.q(*r15)
                    *r15 = rdx_15.d + 1
                    sub_142a48100((rdx_15 << 6) + result, *(i_1 + 8))
            else
                *arg4 = 7
                result = nullptr

int64_t* rcx_35 = var_378

if (rcx_35 != 0)
    sub_142a869e0(rcx_35)

int64_t* rcx_36 = var_438

if (rcx_36 != 0)
    sub_142a869e0(rcx_36)

if (var_3d8 != 0)
    sub_142a869e0(var_3d8)

__security_check_cookie(rax_1 ^ &var_498)
return result
