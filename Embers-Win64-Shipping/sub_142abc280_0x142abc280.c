// 函数: sub_142abc280
// 地址: 0x142abc280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t i = 0
int32_t rsi = 0
int32_t i_1 = 0
int32_t rax_2 = 0
int32_t var_a0 = 0
uint128_t zmm6 = i_1.o

while (i s>= 0)
    int32_t rax_5
    bool cond:4_1
    
    if (i == 0)
        int16_t rax_3 = *(arg1 + 8)
        
        if (rax_3 s< 0)
            rax_5.b = *(arg1 + 0xc) s> 0
        else
            rax_5.b = sx.d(rax_3) s>> 5 s> 0
        
    label_142abc361:
        cond:4_1 = rax_5.b == 0
    label_142abc363:
        
        if (cond:4_1)
            break
    else if (rax_2 == 2)
        int16_t rcx = *(arg1 + 8)
        int32_t rax_7
        
        if (rcx s< 0)
            rax_7 = *(arg1 + 0xc)
        else
            rax_7 = sx.d(rcx) s>> 5
        
        if (i == rax_7 - 1)
            int32_t rax_10
            
            if (rcx s< 0)
                rax_10 = *(arg1 + 0xc)
            else
                rax_10 = sx.d(rcx) s>> 5
            
            if (i u< rax_10)
                void* rcx_1 = arg1 + 0xa
                
                if ((rcx.b & 2) == 0)
                    rcx_1 = *(arg1 + 0x18)
                
                cond:4_1 = *(rcx_1 + (sx.q(i) << 1)) == 0x27
                goto label_142abc363
    else if (rax_2 == 0)
        int16_t rax_12 = *(arg1 + 8)
        
        if (rax_12 s< 0)
            rax_5 = *(arg1 + 0xc)
        else
            rax_5 = sx.d(rax_12) s>> 5
        
        rax_5.b = i s< rax_5
        goto label_142abc361
    i_1.o = zmm6
    void var_98
    uint128_t zmm0 = *sub_142abbd10(&var_98, &i_1, arg1, arg3)
    zmm6 = zmm0
    i_1.o = zmm0
    
    if (*arg3 s> 0)
        break
    
    uint32_t rcx_4 = (_mm_bsrli_si128(zmm0, 8).q u>> 0x20).d
    
    if (rcx_4 == 0xfffffff1)
        rax_2 = var_a0
        i = i_1
        rsi += 1
    else if (rcx_4 s>= 0)
        i = i_1
        rax_2 = var_a0
        int32_t rbx_4
        rbx_4.b = _mm_bsrli_si128(zmm6, 4).d u> 0xffff
        rsi += rbx_4 + 1
    else
        struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_88
        void* rax_16 = (*(*arg2 + 8))(arg2, &var_88, zx.q(rcx_4))
        int16_t rcx_6 = *(rax_16 + 8)
        
        if (rcx_6 s< 0)
            int32_t rbx_3 = *(rax_16 + 0xc)
            sub_142a47ff0(&var_88)
            rax_2 = var_a0
            rsi += rbx_3
            i = i_1
        else
            sub_142a47ff0(&var_88)
            rax_2 = var_a0
            rsi += sx.d(rcx_6) s>> 5
            i = i_1

__security_check_cookie(rax_1 ^ &var_c8)
return zx.q(rsi)
