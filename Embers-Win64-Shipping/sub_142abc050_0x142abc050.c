// 函数: sub_142abc050
// 地址: 0x142abc050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_c0 = -2
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rdi = arg4
int32_t rsi = 0
int32_t i = 0
int32_t i_1 = 0
int32_t var_d0 = 0
uint128_t zmm6 = i_1.o

while (i s>= 0)
    int32_t rax_4
    bool cond:2_1
    
    if (i == 0)
        int16_t rax_2 = *(arg1 + 8)
        
        if (rax_2 s< 0)
            rax_4 = *(arg1 + 0xc)
        else
            rax_4 = sx.d(rax_2) s>> 5
        
        rax_4.b = rax_4 s> 0
    label_142abc14d:
        cond:2_1 = rax_4.b == 0
    label_142abc14f:
        
        if (cond:2_1)
            break
    else if (var_d0 == 2)
        int16_t rdx = *(arg1 + 8)
        int32_t rax_6
        
        if (rdx s< 0)
            rax_6 = *(arg1 + 0xc)
        else
            rax_6 = sx.d(rdx) s>> 5
        
        if (i == rax_6 - 1)
            int32_t rax_9
            
            if (rdx s< 0)
                rax_9 = *(arg1 + 0xc)
            else
                rax_9 = sx.d(rdx) s>> 5
            
            if (i u< rax_9)
                void* rdx_1 = arg1 + 0xa
                
                if ((rdx.b & 2) == 0)
                    rdx_1 = *(arg1 + 0x18)
                
                cond:2_1 = *(rdx_1 + (sx.q(i) << 1)) == 0x27
                goto label_142abc14f
    else if (var_d0 == 0)
        int16_t rax_11 = *(arg1 + 8)
        
        if (rax_11 s< 0)
            rax_4 = *(arg1 + 0xc)
        else
            rax_4 = sx.d(rax_11) s>> 5
        
        rax_4.b = i s< rax_4
        goto label_142abc14d
    i_1.o = zmm6
    void var_b8
    uint128_t zmm0 = *sub_142abbd10(&var_b8, &i_1, arg1, arg6)
    zmm6 = zmm0
    i_1.o = zmm0
    
    if (*arg6 s> 0)
        break
    
    if ((_mm_bsrli_si128(zmm0, 8).q u>> 0x20).d != 0xfffffff1)
        int32_t rbp_1 = _mm_bsrli_si128(zmm6, 0xc).d
        
        if (rbp_1 s>= 0)
            rsi += sub_142b3fd70(arg2, arg3 + rsi, _mm_bsrli_si128(zmm6, 4).d, arg5, arg6)
            i = i_1
        else
            struct icu_64::Replaceable::icu_64::UnicodeString::VTable* var_a8
            rsi += sub_142b3fb40(arg2, arg3 + rsi, (*(*rdi + 8))(rdi, &var_a8, zx.q(rbp_1)), 
                sub_142abb9e0(rbp_1), arg6)
            sub_142a47ff0(&var_a8)
            i = i_1
            rdi = arg4
    else
        rsi += sub_142b3fd70(arg2, arg3 + rsi, 0xfffd, 7, arg6)
        i = i_1

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(rsi)
