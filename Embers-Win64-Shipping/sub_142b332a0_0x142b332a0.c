// 函数: sub_142b332a0
// 地址: 0x142b332a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_190 = -2
int128_t zmm6
int128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
uint128_t zmm8
uint128_t var_68 = zmm8
uint128_t zmm9
uint128_t var_78 = zmm9
void var_218
int64_t rax_1 = __security_cookie ^ &var_218
struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1c0 =
    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
int32_t r12 = 0
int32_t var_1b8 = 0
int32_t var_1b4 = 0xffffffff
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_188
sub_142a479b0(&var_188, arg2)
void* rax_2 = arg1[0xa]
int32_t r15

if (rax_2 == 0)
    int16_t rax_3 = arg1[3].w
    
    if (rax_3 s< 0)
        r15 = *(arg1 + 0x1c)
    else
        r15 = sx.d(rax_3) s>> 5
else
    r15 = *(rax_2 + 8)

void* rax_4 = arg1[0xb]
int32_t r13

if (rax_4 == 0)
    int16_t rax_5 = arg1[3].w
    
    if (rax_5 s< 0)
        r13 = *(arg1 + 0x1c)
    else
        r13 = sx.d(rax_5) s>> 5
else
    r13 = *(rax_4 + 8)

struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_108 =
    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
int16_t var_100 = 2
sub_142a4afe0(&var_108)
int32_t var_fc
int32_t r8_1

if (var_100 s< 0)
    r8_1 = var_fc
else
    r8_1 = sx.d(var_100) s>> 5

sub_142a49310(&var_108, 0, r8_1, &arg1[2], 0, r15)
int32_t rax_10

if (var_100 s< 0)
    rax_10 = var_fc
else
    rax_10 = sx.d(var_100) s>> 5

int32_t var_1c4
int16_t var_180
int16_t rax_12
int32_t rcx_5

if (rax_10 == 0)
    rax_12 = var_180
    rcx_5 = var_1b8
else
    var_1c4 = 0
    int32_t rax_11 = sub_142b35120(arg1, &var_188, &var_108, &var_1c4)
    
    if (var_1c4 s> 0 || rax_11 == 0)
        rax_12 = var_180
        rcx_5 = var_1b8
    else
        rcx_5 = var_1b8 + rax_11
        
        if (rax_11 != 0x7fffffff)
            sub_142a49390(&var_188, 0, rax_11, 0, 0, 0)
            rax_12 = var_180
            rcx_5 = rcx_5
        else if ((var_180.b & 1) == 0)
            rax_12 = var_180 & 0x1f
            var_180 = rax_12
        else
            rax_12 = 2
            var_180 = 2

int16_t rdx_1 = *(arg2 + 8)
int32_t r8_5

if (rdx_1 s< 0)
    r8_5 = *(arg2 + 0xc)
else
    r8_5 = sx.d(rdx_1) s>> 5

int32_t var_17c
int32_t rdx_3

if (rax_12 s< 0)
    rdx_3 = var_17c
else
    rdx_3 = sx.d(rax_12) s>> 5

var_1c4 = r8_5 - rdx_3

if (rcx_5 != 0 || r15 == 0)
    int64_t rax_14 = *arg1
    
    if (rax_14 == -5)
        *(arg3 + 8) = rcx_5
        sub_142aa8140(arg7, sub_142a4bba0())
    else if (rax_14 != -6)
        int32_t rdi_1 = 0
        
        if (rax_14 s<= 0)
            rax_14 = 0
        
        zmm9.q = float.d(rax_14)
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_148 =
            &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
        int16_t var_140_1 = 2
        int32_t rbx_2 = r13 - r15
        int32_t var_1ac_1 = rbx_2
        zmm8 = zx.o(arg5)
        uint128_t zmm0_3
        int32_t rbx_3
        
        do
            int32_t var_1b8_1 = 0
            sub_142a4afe0(&var_148)
            int32_t var_13c
            int32_t r8_8
            
            if (var_140_1 s< 0)
                r8_8 = var_13c
            else
                r8_8 = sx.d(var_140_1) s>> 5
            
            sub_142a49310(&var_148, 0, r8_8, &arg1[2], r15, rbx_2)
            int32_t var_1f0_2
            var_1f0_2.q = &var_1c0
            int32_t var_1f8_2
            var_1f8_2.q = &var_148
            zmm0_3, zmm7 = sub_142b34800(arg1, &var_188, rdi_1, zmm9, var_1f8_2, var_1f0_2, 
                arg1[0xa], arg6, zmm8.q)
            rbx_3 = var_1b8_1
            
            if (rbx_3 != 0 || arg1[0xa] == 0)
                int32_t var_1b0_1 = rbx_3
                struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_c8 =
                    &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
                int16_t var_c0_1 = 2
                int32_t rdi_3
                
                if (var_180 s< 0)
                    rdi_3 = var_17c
                else
                    rdi_3 = sx.d(var_180) s>> 5
                
                sub_142a4afe0(&var_c8)
                int32_t r8_11
                int32_t var_bc
                
                if (var_c0_1 s< 0)
                    r8_11 = var_bc
                else
                    r8_11 = sx.d(var_c0_1) s>> 5
                sub_142a49310(&var_c8, 0, r8_11, &var_188, rbx_3, rdi_3 - rbx_3)
                struct icu_64::UObject::icu_64::ParsePosition::VTable* var_1a8 =
                    &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
                int32_t var_1a0_1 = 0
                int32_t var_19c_1 = 0xffffffff
                int16_t rax_21 = arg1[3].w
                int32_t rbx_5
                
                if (rax_21 s< 0)
                    rbx_5 = *(arg1 + 0x1c)
                else
                    rbx_5 = sx.d(rax_21) s>> 5
                
                sub_142a4afe0(&var_148)
                int32_t r8_13
                
                if (var_140_1 s< 0)
                    r8_13 = var_13c
                else
                    r8_13 = sx.d(var_140_1) s>> 5
                
                sub_142a49310(&var_148, 0, r8_13, &arg1[2], r13, rbx_5 - r13)
                int32_t var_1f0_4
                var_1f0_4.q = &var_1a8
                int32_t var_1f8_4
                var_1f8_4.q = &var_148
                uint128_t zmm0_4
                zmm0_4, zmm7 = sub_142b34800(arg1, &var_c8, 0, zmm0_3, var_1f8_4, var_1f0_4, 
                    arg1[0xb], arg6, zmm8.q)
                
                if (var_1a0_1 != 0 || arg1[0xb] == 0)
                    int32_t rax_27 = var_1c4 + var_1a0_1 + var_1b8_1
                    
                    if (rax_27 s> r12)
                        r12 = rax_27
                        zmm7 = zmm0_4
                else
                    int32_t rdx_8 = var_1b8_1 + var_19c_1 + r15
                    
                    if (rdx_8 s> *(arg3 + 0xc))
                        *(arg3 + 0xc) = rdx_8
                
                sub_142aa8450(&var_1a8)
                sub_142a47ff0(&var_c8)
                rbx_3 = var_1b8_1
                rdi_1 = var_1b0_1
            else
                int32_t rcx_13 = var_1b4 + r15
                
                if (rcx_13 s> *(arg3 + 0xc))
                    *(arg3 + 0xc) = rcx_13
            
            if (r15 == r13)
                break
            
            if (rbx_3 s<= 0)
                break
            
            int32_t rax_30
            
            if (var_180 s< 0)
                rax_30 = var_17c
            else
                rax_30 = sx.d(var_180) s>> 5
            
            if (rbx_3 s>= rax_30)
                break
            
            rbx_2 = var_1ac_1
        while (rbx_3 != rdi_1)
        *(arg3 + 8) = r12
        
        if (r12 s> 0)
            *(arg3 + 0xc) = 0
        
        if (arg4 != 0 && r12 s> 0 && arg1[0xa] == 0)
            zmm0_3.q = 0x3ff0000000000000 f/ zmm7.q
            zmm7 = zmm0_3
        
        sub_142aa8140(arg7, zmm7)
        sub_142a47ff0(&var_148)
    else
        *(arg3 + 8) = rcx_5
        sub_142aa8140(arg7, sub_142a4bbb0())
else
    *(arg3 + 0xc) = var_1b4
    sub_142aa8170(arg7, 0)

sub_142a47ff0(&var_108)
sub_142a47ff0(&var_188)
sub_142aa8450(&var_1c0)
int64_t rax_31
rax_31.b = 1
__security_check_cookie(rax_1 ^ &var_218)
return &data_14360ed01
