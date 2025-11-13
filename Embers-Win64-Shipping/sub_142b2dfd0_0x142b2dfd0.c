// 函数: sub_142b2dfd0
// 地址: 0x142b2dfd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_220 = -2
int128_t zmm6
int128_t var_58 = zmm6
int128_t zmm7
int128_t var_68 = zmm7
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
void* result_1 = arg4
void* result

if (*arg6 s> 0)
    result = result_1
else if (*(arg1 + 0x288) != 0)
    zmm6.q = arg3.q f- *(arg1 + 0x2b0)
    struct icu_64::FormattedValueNumberStringBuilderImpl::icu_64::number::impl::UFormattedNumberData::VTable
        * const var_168
    sub_142ac27c0(&var_168, 0)
    var_168 = &icu_64::number::impl::UFormattedNumberData::`vftable'{for `icu_64::FormattedValueNumberStringBuilderImpl'}
    struct icu_64::IFixedDecimal::icu_64::number::impl::DecimalQuantity::VTable* var_d0
    sub_142ab2be0(&var_d0)
    double zmm0 = *(arg1 + 0x2b0)
    zmm7 = zx.o(0)
    zmm0 - 0.0
    int128_t zmm6_1
    
    if (is_unordered.q(zmm0, 0.0) || zmm0 != 0.0)
        zmm6_1 = sub_142ab4a30(&var_d0, zmm6)
    else
        zmm6_1, zmm7 = sub_142aa8000(arg2, &var_d0, arg6)
    
    struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_218 =
        &icu_64::UnicodeString::`vftable'{for `icu_64::Replaceable'}
    int16_t var_210_1 = 2
    void* rax_3 = __RTDynamicCast(*(arg1 + 0x2a8), 0, 
        &class icu_64::NumberFormat `RTTI Type Descriptor', 
        &class icu_64::DecimalFormat `RTTI Type Descriptor', 0)
    void var_1d8
    
    if (rax_3 == 0)
        double zmm0_1 = *(arg1 + 0x2b0)
        zmm0_1 f- zmm7.q
        
        if (is_unordered.q(zmm0_1, zmm7.q) || zmm0_1 f!= zmm7.q)
            sub_142aa7700(&var_1d8, zmm6_1)
            sub_142aa8370(*(arg1 + 0x2a8), &var_1d8, &var_218, arg6)
            sub_142aa7840(&var_1d8)
        else
            sub_142aa8370(*(arg1 + 0x2a8), arg2, &var_218, arg6)
    else
        sub_142ab7ec0(sub_142a5f2e0(rax_3), &var_168, arg6)
        void var_160
        sub_142a48050(&var_218, sub_142b40a00(&var_160, &var_1d8))
        sub_142a47ff0(&var_1d8)
    int64_t r13_1 = sx.q(sub_142b2db70(arg1 + 0x228, 0, arg1 + 0x2b8, &var_d0, arg3.q, arg6))
    
    if (*arg6 s<= 0)
        void* rdx_6 = arg1 + 0x238
        void* rcx_16 = *(arg1 + 0x280)
        void* rax_9 = (r13_1 << 4) + rcx_16
        int32_t rbx_1 = zx.d(*(rax_9 + 8)) + *(rax_9 + 4)
        int32_t r13_2 = r13_1.d + 1
        int64_t r12_2 = sx.q(r13_2) << 4
        int32_t* rsi_1 = rcx_16 + r12_2
        int32_t i = *rsi_1
        int32_t r14_1 = rsi_1[1]
        
        while (i != 1)
            if (i == 4)
            label_142b2e290:
                sub_142a48d00(result_1, rdx_6, rbx_1, r14_1 - rbx_1)
                
                if (i == 4)
                    int32_t r9_8
                    int32_t var_20c
                    
                    if (var_210_1 s< 0)
                        r9_8 = var_20c
                    else
                        r9_8 = sx.d(var_210_1) s>> 5
                    sub_142a48d00(result_1, &var_218, 0, r9_8)
                
                rbx_1 = zx.d(rsi_1[2].w) + rsi_1[1]
                rdx_6 = arg1 + 0x238
            else if (i != 2)
                if (i == 5)
                    sub_142a48d00(result_1, rdx_6, rbx_1, r14_1 - rbx_1)
                    int64_t rcx_18 = *(arg1 + 0x280)
                    
                    if (*(rcx_18 + r12_2 + 0xc) s>= r13_2)
                        r13_2 = *(rcx_18 + r12_2 + 0xc)
                    
                    int64_t rax_11 = sx.q(r13_2) * 2
                    rbx_1 = zx.d(*(rcx_18 + (rax_11 << 3) + 8)) + *(rcx_18 + (rax_11 << 3) + 4)
                    sub_142b74e60(arg1 + 0x238, r14_1, rbx_1, result_1)
                    rdx_6 = arg1 + 0x238
            else if (*(arg1 + 0x230) == 1)
                goto label_142b2e290
            
            r13_2 += 1
            r12_2 = sx.q(r13_2) << 4
            rsi_1 = r12_2 + *(arg1 + 0x280)
            i = *rsi_1
            r14_1 = rsi_1[1]
        
        result_1 = sub_142a48d00(result_1, rdx_6, rbx_1, r14_1 - rbx_1)
    
    sub_142a47ff0(&var_218)
    sub_142ab8680(&var_168)
    result = result_1
else
    int64_t* rcx = *(arg1 + 0x2a8)
    int32_t* var_238_1 = arg6
    result = (*(*rcx + 0x28))(rcx, arg5, result_1)

__security_check_cookie(rax_1 ^ &var_258)
return result
