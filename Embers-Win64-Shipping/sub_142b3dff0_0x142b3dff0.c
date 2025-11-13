// 函数: sub_142b3dff0
// 地址: 0x142b3dff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_210 = -2
void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
int32_t* rdi = arg4
void* var_248_1
char rax_3

if (*arg4 s<= 0)
    var_248_1 = arg1 + 8
    rax_3 = sub_142ab79d0(arg2, rdi)

struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable** 
    result

if (*arg4 s> 0 || rax_3 != 0)
    result = nullptr
else
    int64_t r13
    r13.b = strcmp("currency", sub_142ab63b0(&arg2[4])) == 0
    char var_258_1 = r13.b
    int64_t rax_6 = sub_142ab63b0(&arg2[4])
    struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable**
         result_3 = nullptr
    int64_t rcx_3 = 0
    bool cond:0_1
    
    while (true)
        char rdx_2 = (*"none")[rcx_3]
        rcx_3 += 1
        char temp0_1 = *(rax_6 + rcx_3 - 1)
        cond:0_1 = rdx_2 == temp0_1
        
        if (rdx_2 != temp0_1)
            break
        
        if (rcx_3 == 5)
            cond:0_1 = rdx_2 == *(rax_6 + rcx_3 - 1)
            break
    
    int64_t rbx
    rbx.b = cond:0_1
    void* rax_7 = sub_142ab6380(&arg2[4])
    int64_t rcx_5 = 0
    bool cond:1_1
    
    while (true)
        char rdx_3 = (*"percent")[rcx_5]
        rcx_5 += 1
        char temp1_1 = *(rax_7 + rcx_5 - 1)
        cond:1_1 = rdx_3 == temp1_1
        
        if (rdx_3 != temp1_1)
            break
        
        if (rcx_5 == 8)
            cond:1_1 = rdx_3 == *(rax_7 + rcx_5 - 1)
            break
    
    void* r12_1
    r12_1.b = cond:1_1
    char var_253_1 = r12_1.b
    bool var_257_1 = strcmp("permille", sub_142ab6380(&arg2[4])) == 0
    int32_t rcx_7 = arg2[0x27]
    char var_255_1
    
    if (((rcx_7 - 3) & 0xfffffffc) == 0)
        var_255_1 = 1
    
    if (((rcx_7 - 3) & 0xfffffffc) != 0 || rcx_7 == 5)
        var_255_1 = 0
    
    void var_1c8
    sub_142ab67d0(&var_1c8, &data_143652e2c, rdi)
    uint128_t var_1e8
    
    if (r13.b != 0)
        sub_142ab6910(&var_1c8, sub_142ab6740(&var_1e8, &arg2[4], rdi))
        sub_142ab6900(&var_1e8)
    
    void* rax_12 = *(arg2 + 0xd0)
    void* var_230_1 = rax_12
    
    if (rax_12 == 0)
        void var_138
        sub_142b46090(&var_138, sub_142ab6700(&var_1e8, &var_1c8), &arg2[0x38], rdi)
        var_230_1 = arg1 + 0x138
        sub_142ab6910(arg1 + 0x138, &var_138)
        int64_t var_118
        sub_142a8cb00(arg1 + 0x158, &var_118)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_d8
        sub_142a48050(arg1 + 0x198, &var_d8)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_98
        sub_142a48050(arg1 + 0x1d8, &var_98)
        sub_142a47ff0(&var_98)
        sub_142a47ff0(&var_d8)
        char var_10c
        
        if (var_10c != 0)
            sub_142a7dcd0(var_118)
        
        sub_142ab6900(&var_138)
    
    int32_t rax_15 = arg2[0x26]
    int32_t rcx_22 = 1
    
    if (rax_15 != 5)
        rcx_22 = rax_15
    
    int32_t var_250 = rcx_22
    char var_256_1
    
    if (r13.b != 0 || rbx.b != 0 || (rcx_22 != 2 && (r12_1.b != 0 || var_257_1 != r12_1.b)))
        var_256_1 = 0
    else
        var_256_1 = 1
    
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** rbx_1 = nullptr
    int64_t var_220_1 = 0
    struct icu_64::UObject::icu_64::NumberingSystem::VTable** rax_17
    
    if (sub_142ab82b0(&arg2[0x22]) == 0)
        rax_17 = sub_142aab3f0(&arg2[0x38], rdi)
        rbx_1 = rax_17
        struct icu_64::UObject::icu_64::NumberingSystem::VTable** var_220_2 = rax_17
    else
        rax_17 = sub_1405948a0(&arg2[0x22])
    
    char* _Source
    
    if (*rdi s> 0)
        _Source = "latn"
    else
        _Source = sub_142aabaa0(rax_17)
    
    strncpy(arg1 + 0x65, _Source, 8)
    *(arg1 + 0x6d) = 0
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** var_240
    
    if (sub_142ab82a0(&arg2[0x22]) == 0)
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_20 =
            j_sub_142a7dd00(0xb00)
        var_240 = rax_20
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** r12_2
        
        if (rax_20 == 0)
            r12_2 = nullptr
        else
            r12_2 = sub_142aabe40(rax_20, &arg2[0x38], rax_17, rdi)
        
        *(arg1 + 0x70) = r12_2
        int64_t* rcx_31 = *(arg1 + 0xf8)
        
        if (rcx_31 != 0)
            (**rcx_31)(rcx_31, 1)
        
        *(arg1 + 0xf8) = r12_2
    else
        *(arg1 + 0x70) = sub_1405948a0(&arg2[0x22])
    
    char rax_31 = var_258_1
    
    if (rax_31 == 0)
        goto label_142b3e447
    
    uint128_t var_1a8
    uint128_t* rax_24 = sub_142b3dcd0(&var_1a8, &arg2[0x38], sub_142ab6380(&var_1c8), rdi)
    uint128_t zmm2 = *rax_24
    var_1e8 = zmm2
    int128_t zmm1_1 = rax_24[1]
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_178
    void* r13_2
    
    if (zmm2.b != 0)
        r13_2 = var_1e8:8.q
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_26 =
            j_sub_142a7dd00(0xb00)
        var_240 = rax_26
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** r12_3
        
        if (rax_26 == 0)
            r12_3 = nullptr
        else
            r12_3 = sub_142aabc60(rax_26, *(arg1 + 0x70))
        
        *(arg1 + 0x70) = r12_3
        int64_t* rcx_35 = *(arg1 + 0xf8)
        
        if (rcx_35 != 0)
            (**rcx_35)(rcx_35, 1)
        
        *(arg1 + 0xf8) = r12_3
        sub_142aad8a0(r12_3, 0xa, Concurrency::agent::agent(&var_178, zmm1_1.q), 0)
        sub_142a47ff0(&var_178)
        sub_142aad8a0(r12_3, 0x11, Concurrency::agent::agent(&var_178, zmm1_1:8.q), 0)
        sub_142a47ff0(&var_178)
    
    if (zmm2.b == 0 || r13_2 == 0)
        rax_31 = var_258_1
    label_142b3e447:
        int32_t r8_7
        
        if (var_256_1 != 0)
            r8_7 = 0
        else if (var_253_1 != 0 || var_257_1 != 0)
            r8_7 = 3
        else if (rax_31 == 0 || var_250 == 2)
            r8_7 = 0
        else
            int32_t r8_8
            r8_8.b = var_255_1 != 0
            r8_7 = r8_8 + 1
        
        r13_2 = sub_142ab5b50(&arg2[0x38], _Source, r8_7, rdi)
    
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_33 = j_sub_142a7dd00(0x1b8)
    var_240 = rax_33
    struct 
        icu_64::number::impl::AffixPatternProvider::icu_64::number::impl::ParsedPatternInfo::VTable*
        * r12_4
    
    if (rax_33 == 0)
        r12_4 = nullptr
    else
        r12_4 = sub_142b3d740(rax_33)
    
    int64_t* rcx_44 = *(arg1 + 0x108)
    
    if (rcx_44 != 0)
        (**rcx_44)(rcx_44, 1)
    
    *(arg1 + 0x108) = r12_4
    sub_142ac0430(Concurrency::agent::agent(&var_178, r13_2), r12_4, rdi)
    sub_142a47ff0(&var_178)
    
    if (arg2[0x2a] != 0 || *(arg2 + 0xb0) != 0)
        sub_142ab6f50(arg1 + 0xc8, &arg2[0x2a], arg1 + 8)
        var_248_1 = arg1 + 0xc8
        rdi = arg4
    
    int32_t var_208 = 0
    char r13_3
    
    if (arg2[0x10] == 0)
        int32_t* rcx_49 = &var_1a8
        int128_t* rax_38
        
        if (*arg2 != 1)
            r13_3 = var_258_1
            
            if (r13_3 == 0)
                rax_38 = sub_142b45b00(rcx_49, 6)
            else
                rax_38 = sub_142b457c0(rcx_49, 0)
        else
            rax_38 = sub_142b45fa0(sub_142b45ab0(rcx_49), &var_1e8, 2)
            r13_3 = var_258_1
        
        var_208.o = *rax_38
        zmm1_1 = rax_38[1]
    else
        var_208.o = *(arg2 + 0x40)
        zmm1_1 = *(arg2 + 0x50)
        r13_3 = var_258_1
    
    int32_t r8_11 = zmm1_1.12:8.d
    
    if (arg2[0x18] != 4)
        r8_11 = arg2[0x18]
    
    sub_142b453f0(&var_1a8, &var_208, r8_11, &var_1c8, rdi)
    *(arg1 + 0x10) = var_1a8
    int128_t var_198
    *(arg1 + 0x20) = var_198
    int64_t var_188
    *(arg1 + 0x30) = var_188
    int32_t rax_39
    int16_t* rcx_52
    
    if (arg2[0x19].w == 0xfffd)
        int32_t rdx_26 = 1
        
        if (*arg2 != 1)
            rdx_26 = 2
        
        int32_t* rax_40 = sub_142b3bf60(&var_240, rdx_26)
        rcx_52 = arg1 + 0x38
        *rcx_52 = *rax_40
        rax_39 = rax_40[2]
    else
        rcx_52 = arg1 + 0x38
        *rcx_52 = *(arg2 + 0x64)
        rax_39 = arg2[0x1b]
    
    *(rcx_52 + 8) = rax_39
    void* r12_5 = &arg2[0x38]
    sub_142b3c140(rcx_52, *(arg1 + 0x108), r12_5)
    int32_t rax_41
    
    if (arg2[0x1c] == 0xfffffffe)
        struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable*** rax_42 =
            sub_142b4a980(&var_240)
        *(arg1 + 0x44) = *rax_42
        rax_41 = rax_42[1].d
    else
        *(arg1 + 0x44) = *(arg2 + 0x70)
        rax_41 = arg2[0x1e]
    
    *(arg1 + 0x4c) = rax_41
    int32_t rax_43
    
    if (arg2[0x21].b != 0 || arg2[0x1f].w != 0xffff)
        *(arg1 + 0x50) = *(arg2 + 0x7c)
        rax_43 = arg2[0x21]
    else
        sub_142b4a860(&var_240, 1)
        *(arg1 + 0x50) = var_240
        int32_t var_238
        rax_43 = var_238
    
    *(arg1 + 0x58) = rax_43
    int32_t rax_44 = arg2[0x27]
    
    if (rax_44 == 7)
        *(arg1 + 0x5c) = 0
    else
        *(arg1 + 0x5c) = rax_44
    
    int32_t rcx_56 = arg2[0x28]
    int32_t rax_45 = 0
    
    if (rcx_56 != 2)
        rax_45 = rcx_56
    
    *(arg1 + 0x60) = rax_45
    *(arg1 + 0x64) = r13_3
    
    if (*arg2 != 0)
        *(arg1 + 0x88) = arg1 + 0xb8
    else
        struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::ScientificHandler::VTable
            ** rax_46 = j_sub_142a7dd00(0x28)
        var_240 = rax_46
        struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::ScientificHandler::VTable
            ** r12_6
        
        if (rax_46 == 0)
            r12_6 = nullptr
        else
            r12_6 = sub_142b85870(rax_46, arg2, *(arg1 + 0x70), var_248_1)
        
        int64_t* rcx_58 = *(arg1 + 0x110)
        
        if (rcx_58 != 0)
            (**rcx_58)(rcx_58, 1)
        
        *(arg1 + 0x110) = r12_6
        var_248_1 = r12_6
        r12_5 = &arg2[0x38]
    
    struct icu_64::UObject::icu_64::DecimalFormatSymbols::VTable** rax_50 = j_sub_142a7dd00(0xa8)
    var_240 = rax_50
    struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable**
         result_2
    
    if (rax_50 == 0)
        result_2 = nullptr
    else
        result_2 = sub_142ab8810(rax_50, 0)
    
    int64_t* rcx_60 = *(arg1 + 0x118)
    
    if (rcx_60 != 0)
        (**rcx_60)(rcx_60, 1)
    
    *(arg1 + 0x118) = result_2
    int64_t rdx_29 = *(arg2 + 0xc0)
    
    if (rdx_29 == 0)
        rdx_29 = *(arg1 + 0x108)
    
    sub_142ab9750(result_2, rdx_29, 0xd)
    sub_142ab9740(result_2, *(arg1 + 0x5c), var_257_1)
    int32_t* var_288_2
    
    if (sub_142ab9610(result_2) == 0)
        var_288_2 = nullptr
    else
        var_288_2 = sub_142b3ea40(arg1, *(arg2 + 0xc8), r12_5, rdi)
    
    sub_142ab9760(result_2, *(arg1 + 0x70), var_230_1, var_250, var_288_2)
    struct icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable**
         result_1
    
    if (arg3 == 0)
        sub_142ab8b20(result_2, var_248_1)
        result_1 = result_2
    else
        result_1 = sub_142ab8f10(result_2, var_248_1, rdi)
        int64_t* rcx_67 = *(arg1 + 0x120)
        
        if (rcx_67 != 0)
            int64_t r8_19 = *rcx_67
            (*r8_19)(rcx_67, 1, r8_19)
        
        *(arg1 + 0x120) = result_1
    
    char rcx_71
    
    if (var_256_1 == 0)
        rcx_71 = var_258_1
        
        if (rcx_71 == 0 || var_250 != 2)
            *(arg1 + 0x78) = arg1 + 0xa8
        else
            sub_142ae0d20(arg1 + 0x128, 
                sub_142b86240(&arg2[0x38], &var_1c8, 
                    sub_142b3ea40(arg1, *(arg2 + 0xc8), &arg2[0x38], arg4), result_1, arg4))
            result_1 = *(arg1 + 0x128)
            rdi = arg4
            rcx_71 = var_258_1
    else
        result_1 = sub_142b86350(&arg2[0x38], &arg2[4], &arg2[0xa], &var_250, 
            sub_142b3ea40(arg1, *(arg2 + 0xc8), &arg2[0x38], rdi), result_1, rdi)
        int64_t* rcx_70 = *(arg1 + 0x128)
        
        if (rcx_70 != 0)
            int64_t r8_22 = *rcx_70
            (*r8_22)(rcx_70, 1, r8_22)
        
        *(arg1 + 0x128) = result_1
        rcx_71 = var_258_1
    
    if (*arg2 == 1)
        if (rcx_71 != 0)
            var_248_1.d = 1
        
        if (rcx_71 == 0 || var_250 == 2)
            var_248_1.d = 0
        
        struct 
            icu_64::number::impl::MicroPropsGenerator::icu_64::number::impl::CompactHandler::VTable*
            * rax_62 = j_sub_142a7dd00(0x5d0)
        
        if (rax_62 != 0)
            if (arg3 != 0)
                result_3 = result_2
            
            int64_t rax_63 = sub_142b3ea40(arg1, *(arg2 + 0xc8), &arg2[0x38], rdi)
            var_288_2.d = var_248_1.d
            result_3 = sub_142b87330(rax_62, arg2[1], &arg2[0x38], _Source, var_288_2.d, rax_63, 
                result_3, result_1, rdi)
        
        int64_t* rcx_77 = *(arg1 + 0x130)
        
        if (rcx_77 != 0)
            (**rcx_77)(rcx_77, 1)
        
        *(arg1 + 0x130) = result_3
        result_1 = result_3
    
    if (rbx_1 != 0)
        (*rbx_1)->__offset(0x0).q(rbx_1, 1)
    
    sub_142ab6900(&var_1c8)
    result = result_1

__security_check_cookie(rax_1 ^ &var_2a8)
return result
