// 函数: sub_142b81f60
// 地址: 0x142b81f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_130 = -2
void var_178
int64_t rax_1 = __security_cookie ^ &var_178
uint128_t zmm7 = arg4
int32_t var_134 = 0
int32_t i = 0
struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_128
uint128_t zmm0 = sub_142a479b0(&var_128, arg2)
int64_t rbx = 1
uint128_t zmm6 = 0x3ff0000000000000
int32_t var_158
struct icu_64::UObject::icu_64::Formattable::VTable** var_150
int512_t zmm2

if (arg1[6].b == 0)
    zmm6 = zmm7
else
    struct icu_64::UObject::icu_64::ParsePosition::VTable* var_148 =
        &icu_64::ParsePosition::`vftable'{for `icu_64::UObject'}
    int32_t var_140_1 = 1
    int32_t var_13c_1 = 0xffffffff
    struct icu_64::UObject::icu_64::Formattable::VTable* var_e8
    sub_142aa7770(&var_e8)
    int32_t var_11c
    int32_t rdx = var_11c
    int16_t var_120
    int16_t rcx_2 = var_120
    
    while (true)
        if (rcx_2 s>= 0)
            rdx = sx.d(rcx_2) s>> 5
        
        if (rdx s<= 0)
            break
        
        if (var_140_1 == 0)
            break
        
        var_140_1 = 0
        var_150 = &var_e8
        var_158 = arg6
        zmm2, zmm6, zmm7 = sub_142b363a0(arg1[2], &var_128, &var_148, zmm6, var_158, var_150)
        
        if (var_140_1 == 0)
            break
        
        i += 1
        *(arg3 + 8) += var_140_1
        
        if (var_140_1 != 0x7fffffff)
            var_150.d = 0
            var_158 = 0
            sub_142a49390(&var_128, 0, var_140_1, 0, var_158, var_150.d)
            goto label_142b820ab
        
        if ((var_120.b & 1) == 0)
            rcx_2 = var_120 & 0x1f
            var_120 = rcx_2
        else
            rcx_2 = 2
            var_120 = 2
        
        while (true)
            rdx = var_11c
            int32_t rax_3
            
            if (rcx_2 s< 0)
                rax_3 = rdx
            else
                rax_3 = sx.d(rcx_2) s>> 5
            
            if (rax_3 s<= 0)
                break
            
            int32_t rax_5
            
            if (rcx_2 s< 0)
                rax_5 = rdx
            else
                rax_5 = sx.d(rcx_2) s>> 5
            
            if (rax_5 == 0)
                break
            
            void var_11e
            void* rax_6 = &var_11e
            void* var_110
            
            if ((var_120.b & 2) == 0)
                rax_6 = var_110
            
            if (*rax_6 != 0x20)
                break
            
            var_150.d = 0
            var_158 = 0
            sub_142a49390(&var_128, 0, 1, 0, var_158, var_150.d)
            *(arg3 + 8) += 1
        label_142b820ab:
            rcx_2 = var_120
    
    sub_142a48100(&var_128, arg2)
    int32_t r8_2 = *(arg3 + 8)
    
    if (r8_2 != 0x7fffffff)
        var_150.d = 0
        var_158 = 0
        sub_142a49390(&var_128, 0, r8_2, 0, var_158, var_150.d)
    else if ((var_120.b & 1) == 0)
        int16_t var_120_2 = var_120 & 0x1f
    else
        int16_t var_120_1 = 2
    
    *(arg3 + 8) = 0
    zmm0 = sub_142aa7840(&var_e8)
    sub_142aa8450(&var_148)
    
    if (arg1[6].b == 0)
        zmm6 = zmm7

(*(*arg1 + 0x58))(arg1, zx.o(arg5))
void* rcx_11 = arg1[2]

if (rcx_11 == 0)
    int64_t* rcx_12 = arg1[3]
    
    if (rcx_12 != 0)
        (*(*rcx_12 + 0xa0))(rcx_12, &var_128, arg7, arg3, var_158, var_150)
else
    zmm2, zmm6 = sub_142b363a0(rcx_11, &var_128, arg3, zmm0, arg6, arg7)

if (*(arg3 + 8) == 0)
    sub_142aa8170(arg7, 0)
else
    int32_t var_138 = 0
    uint128_t zmm0_1 = sub_142aa7d40(arg7, &var_138)
    zmm2.o = zmm6
    (*(*arg1 + 0x50))(arg1, zmm0_1, zmm2)
    sub_142aa8140(arg7, zmm0_1)

if (arg1[6].b != 0)
    int64_t rdx_8 = sx.q(sub_142aa7e50(arg7, &var_134))
    
    if (1 s<= rdx_8)
        do
            rbx *= 0xa
        while (rbx s<= rdx_8)
    
    for (; i s> 0; i -= 1)
        rbx *= 0xa
    
    int128_t zmm1_1
    zmm1_1.q = float.d(rdx_8)
    zmm1_1.q = zmm1_1.q f/ float.d(rbx)
    sub_142aa8140(arg7, zmm1_1)

sub_142a47ff0(&var_128)
int64_t rax_11
rax_11.b = 1
__security_check_cookie(rax_1 ^ &var_178)
return &data_14360ed01
