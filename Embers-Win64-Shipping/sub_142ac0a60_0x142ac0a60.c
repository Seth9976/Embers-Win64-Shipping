// 函数: sub_142ac0a60
// 地址: 0x142ac0a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_2c8 = -2
void var_348
int64_t rax_1 = __security_cookie ^ &var_348
int32_t var_2d0 = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_2b8 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_2b0 = 2
int32_t r14 = sub_142a92b60(0, sub_142a92b70(*(arg2 + 0x48), 0x64))
int32_t r13 = sub_142a92b60(0, sub_142a92b70(*(arg2 + 0x2f0), 0x64))
char rax_6 = *(arg2 + 0x4c)
int32_t rax_7 = sub_142a92b70(*(arg2 + 0x44), 0x64)
int64_t rbx = *(arg2 + 0x180)
char var_2e0 = rbx.b
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_1a8
sub_142a479b0(&var_1a8, arg2 + 0x188)
int32_t rax_9 = sub_142a92b60(0, sub_142a92b70(*(arg2 + 0x6c), 0x64))
int32_t rax_10 = sub_142a92b70(*(arg2 + 0x58), 0x64)
int32_t rax_12 = sub_142a92b60(0, sub_142a92b70(*(arg2 + 0x64), 0x64))
int32_t rax_13 = sub_142a92b70(*(arg2 + 0x54), 0x64)
int32_t rax_14 = sub_142a92b70(*(arg2 + 0x70), 0x64)
int32_t rax_15 = sub_142a92b70(*(arg2 + 0x5c), 0x64)
char rax_16 = *(arg2 + 0x41)
int32_t i_2 = sub_142a92b70(*(arg2 + 0x60), 0x64)
char rax_17 = *(arg2 + 0x42)
struct icu_64::number::impl::AffixPatternProvider::VTable* var_168 = &icu_64::number::impl::PropertiesAffixPatternProvider::`vftable'{for `icu_64::number::impl::AffixPatternProvider'}
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_160 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_158 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_120 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_118 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_e0 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_d8 = 2
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a0 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_98 = 2
char var_5f = 1
sub_142ac2430(&var_168, arg2, arg3)
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_238
struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_18 =
    sub_142ac17c0(&var_168, &var_238, 0x100)
int16_t rcx_13 = rax_18[1].w
int32_t r9_1

if (rcx_13 s< 0)
    r9_1 = *(rax_18 + 0xc)
else
    r9_1 = sx.d(rcx_13) s>> 5

sub_142a48d00(&var_2b8, rax_18, 0, r9_1)
sub_142a47ff0(&var_238)
int32_t var_2ac
int32_t r15_2

if (var_2b0 s< 0)
    r15_2 = var_2ac
else
    r15_2 = sx.d(var_2b0) s>> 5

if (rax_6 == 0)
    r14 = 0
    r13 = 0
else if (r14 == r13)
    r14 = 0

uint128_t zmm6 = zx.o(*(arg2 + 0x2e0))
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_278 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_270 = 2
int32_t rsi_1 = 0
int16_t var_318
int32_t var_26c
void var_1f8
int16_t rcx_17

if (rax_15 == sub_142a92b70(0x64, 0xffffffff))
    zmm6.q f- 0.0
    
    if ((is_unordered.q(zmm6.q, 0.0) || not(zmm6.q f== 0.0)) && sub_142ac0110(zmm6.q, rax_13) == 0)
        int16_t rax_26
        int128_t zmm6_1
        rax_26, zmm6_1 = sub_142b45950(zmm6, nullptr)
        rsi_1 = neg.d(sx.d(rax_26))
        sub_142ab2be0(&var_1f8)
        sub_142ab4a30(&var_1f8, zmm6_1)
        sub_142ab3060(&var_1f8, neg.d(rsi_1))
        sub_142ab4700(&var_1f8, 0, 4, arg3)
        sub_142ab5320(&var_1f8, &var_238)
        int32_t var_22c
        int32_t r9_3 = var_22c
        int16_t var_230
        int32_t rax_28
        
        if (var_230 s< 0)
            rax_28 = r9_3
        else
            rax_28 = sx.d(var_230) s>> 5
        
        void* rax_29
        
        if (rax_28 != 0)
            void var_22e
            rax_29 = &var_22e
            void* var_220
            
            if ((var_230.b & 2) == 0)
                rax_29 = var_220
        
        int32_t r8_1
        
        if (rax_28 == 0 || *rax_29 != 0x2d)
            if (var_230 s>= 0)
                r9_3 = sx.d(var_230) s>> 5
            
            r8_1 = 0
        else
            if (var_230 s>= 0)
                r9_3 = sx.d(var_230) s>> 5
            
            r9_3 -= 1
            r8_1 = 1
        
        sub_142a48d00(&var_278, &var_238, r8_1, r9_3)
        sub_142a47ff0(&var_238)
        sub_142ab2c10(&var_1f8)
    
    rcx_17 = var_270
else
    while (true)
        rcx_17 = var_270
        int32_t rax_22
        
        if (rcx_17 s< 0)
            rax_22 = var_26c
        else
            rax_22 = sx.d(rcx_17) s>> 5
        
        if (rax_22 s>= rax_14)
            break
        
        var_318 = 0x40
        sub_142a48d70(&var_278, &var_318, 0, 1)
    
    while (true)
        int32_t rax_24
        
        if (rcx_17 s< 0)
            rax_24 = var_26c
        else
            rax_24 = sx.d(rcx_17) s>> 5
        
        if (rax_24 s>= rax_15)
            break
        
        var_318 = 0x23
        sub_142a48d70(&var_278, &var_318, 0, 1)
        rcx_17 = var_270

while (true)
    int32_t rax_31
    
    if (rcx_17 s< 0)
        rax_31 = var_26c
    else
        rax_31 = sx.d(rcx_17) s>> 5
    
    if (rax_31 + rsi_1 s>= rax_9)
        break
    
    var_318 = 0x30
    sub_142a49390(&var_278, 0, 0, &var_318, 0, 1)
    rcx_17 = var_270

int32_t rdi_3 = neg.d(rsi_1)
char rbx_1 = var_2e0
int32_t r15_3 = r15_2

if (rdi_3 s< rax_12)
    do
        var_318 = 0x30
        sub_142a48d70(&var_278, &var_318, 0, 1)
        rsi_1 -= 1
        rdi_3 += 1
    while (rdi_3 s< rax_12)
    
    rcx_17 = var_270
    r15_3 = r15_2

int32_t rax_34

if (rcx_17 s< 0)
    rax_34 = var_26c
else
    rax_34 = sx.d(rcx_17) s>> 5

int32_t rax_35 = sub_142a92b60(r14 + 1 + r13, rax_34 + rsi_1)
int32_t rdi_5

if (rax_10 == 0x64)
    rdi_5 = rax_35 - 1
else
    rdi_5 = sub_142a92b60(rax_10, rax_35) - 1

int32_t r12_2

if (rax_13 == 0x64)
    r12_2 = rsi_1
else
    r12_2 = sub_142a92b70(neg.d(rax_13), rsi_1)

if (rdi_5 s>= r12_2)
    do
        int32_t rax_41 = sub_142a4a1f0(&var_278)
        int32_t rdx_20 = rax_41 - rdi_5 - 1 + rsi_1
        
        if (rax_41 - rdi_5 - 1 + rsi_1 s< 0 || rdx_20 s>= rax_41)
            var_318 = 0x23
        else
            int32_t rax_45
            
            if (var_270 s< 0)
                rax_45 = var_26c
            else
                rax_45 = sx.d(var_270) s>> 5
            
            int16_t rdx_21
            
            if (rdx_20 u>= rax_45)
                rdx_21 = -1
            else
                void var_26e
                void* rcx_36 = &var_26e
                void* var_260
                
                if ((var_270.b & 2) == 0)
                    rcx_36 = var_260
                rdx_21 = *(rcx_36 + (sx.q(rdx_20) << 1))
            
            var_318 = rdx_21
        
        sub_142a48d70(&var_2b8, &var_318, 0, 1)
        
        if (rdi_5 == 0 && (rax_16 != rdi_5.b || r12_2 s< 0))
            var_318 = 0x2e
            sub_142a48d70(&var_2b8, &var_318, 0, 1)
        
        if (rax_6 != 0)
            bool cond:5_1
            
            if (rdi_5 s<= 0)
                cond:5_1 = rdi_5 s<= r14
            else
                cond:5_1 = rdi_5 s<= r14
                
                if (rdi_5 == r14)
                    var_318 = 0x2c
                    sub_142a48d70(&var_2b8, &var_318, 0, 1)
                    cond:5_1 = rdi_5 s<= r14
            
            if (not(cond:5_1) && r13 s> 0)
                int32_t temp1_1 = mods.dp.d(sx.q(rdi_5 - r14), r13)
                
                if (temp1_1 == 0)
                    var_318 = 0x2c
                    sub_142a48d70(&var_2b8, &var_318, 0, temp1_1 + 1)
        
        rdi_5 -= 1
    while (rdi_5 s>= r12_2)
    
    rbx_1 = var_2e0
    r15_3 = r15_2

uint64_t i_1 = zx.q(i_2)

if (i_1.d != sub_142a92b70(0x64, 0xffffffff))
    var_318 = 0x45
    sub_142a48d70(&var_2b8, &var_318, 0, 1)
    
    if (rax_17 != 0)
        var_318 = 0x2b
        sub_142a48d70(&var_2b8, &var_318, 0, 1)
    
    if (i_1.d s> 0)
        uint64_t i
        
        do
            var_318 = 0x30
            sub_142a48d70(&var_2b8, &var_318, 0, 1)
            i = i_1
            i_1 -= 1
        while (i != 1)
        r15_3 = r15_2

int32_t rdi_7

if (var_2b0 s< 0)
    rdi_7 = var_2ac
else
    rdi_7 = sx.d(var_2b0) s>> 5

struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_53 =
    sub_142ac17c0(&var_168, &var_238, 0)
int16_t rcx_45 = rax_53[1].w
int32_t r9_9

if (rcx_45 s< 0)
    r9_9 = *(rax_53 + 0xc)
else
    r9_9 = sx.d(rcx_45) s>> 5

sub_142a48d00(&var_2b8, rax_53, 0, r9_9)
sub_142a47ff0(&var_238)
int32_t rdx_33 = rax_7

if (rdx_33 s<= 0 || rbx_1 != 0)
label_142ac132a:
    
    if (sub_142ac1860(&var_168) != 0)
        var_318 = 0x3b
        sub_142a48d70(&var_2b8, &var_318, 0, 1)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_65 =
            sub_142ac17c0(&var_168, &var_1f8, 0x300)
        int16_t rcx_68 = rax_65[1].w
        int32_t r9_19
        
        if (rcx_68 s< 0)
            r9_19 = *(rax_65 + 0xc)
        else
            r9_19 = sx.d(rcx_68) s>> 5
        
        sub_142a48d00(&var_2b8, rax_65, 0, r9_19)
        sub_142a47ff0(&var_1f8)
        sub_142a479b0(&var_238, &var_2b8)
        sub_142a48d00(&var_2b8, &var_238, r15_3, rdi_7 - r15_3)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_66 =
            sub_142ac17c0(&var_168, &var_1f8, 0x200)
        int16_t rcx_74 = rax_66[1].w
        int32_t r9_22
        
        if (rcx_74 s< 0)
            r9_22 = *(rax_66 + 0xc)
        else
            r9_22 = sx.d(rcx_74) s>> 5
        
        sub_142a48d00(&var_2b8, rax_66, 0, r9_22)
        sub_142a47ff0(&var_1f8)
        sub_142a47ff0(&var_238)
else
    while (true)
        int32_t rcx_49
        
        if (var_2b0 s< 0)
            rcx_49 = var_2ac
        else
            rcx_49 = sx.d(var_2b0) s>> 5
        
        if (rdx_33 - rcx_49 s<= 0)
            break
        
        var_318 = 0x23
        sub_142a49390(&var_2b8, r15_3, 0, &var_318, 0, 1)
        rdi_7 += 1
        rdx_33 = rax_7
    
    int32_t rcx_51 = rbx:4.d
    int32_t rax_61
    int32_t rdx_43
    
    if (rcx_51 == 0)
        rax_61 = sub_142abfd60(sub_142a479b0(&var_238, &var_1a8), &var_2b8, 0)
        rdx_43 = 0
    label_142ac12e5:
        int32_t var_320_4 = 1
        int32_t var_328_4 = 0
        var_318 = 0x2a
        sub_142a49390(&var_2b8, rdx_43, 0, &var_318, var_328_4, var_320_4)
        r15_3 = r15_3 + 1 + rax_61
        rdi_7 = rdi_7 + 1 + rax_61
    else
        if (rcx_51 == 1)
            rax_61 = sub_142abfd60(sub_142a479b0(&var_238, &var_1a8), &var_2b8, r15_3)
            rdx_43 = r15_3
            goto label_142ac12e5
        
        if (rcx_51 == 2)
            sub_142abfd60(sub_142a479b0(&var_238, &var_1a8), &var_2b8, rdi_7)
            var_318 = 0x2a
            sub_142a49390(&var_2b8, rdi_7, 0, &var_318, 0, 1)
        else if (rcx_51 == 3)
            var_318 = 0x2a
            sub_142a48d70(&var_2b8, &var_318, 0, rcx_51 - 2)
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable** rax_57 =
                sub_142a479b0(&var_238, &var_1a8)
            int32_t r8_3
            
            if (var_2b0 s< 0)
                r8_3 = var_2ac
            else
                r8_3 = sx.d(var_2b0) s>> 5
            
            sub_142abfd60(rax_57, &var_2b8, r8_3)
    
    if (*arg3 s<= 0)
        goto label_142ac132a

sub_142a47930(arg1, &var_2b8)
sub_142a47ff0(&var_278)
sub_142a47ff0(&var_a0)
sub_142a47ff0(&var_e0)
sub_142a47ff0(&var_120)
sub_142a47ff0(&var_160)
sub_142ab8850(&var_168)
sub_142a47ff0(&var_1a8)
sub_142a47ff0(&var_2b8)
__security_check_cookie(rax_1 ^ &var_348)
return arg1
