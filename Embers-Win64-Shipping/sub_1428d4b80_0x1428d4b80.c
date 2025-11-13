// 函数: sub_1428d4b80
// 地址: 0x1428d4b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t rax_2 = *(arg1 + 0x68)
uint64_t rsi_1 = arg4 u>> 4
void* r12 = arg3
int128_t* r14 = arg2
int64_t rbp = rax_2 + rsi_1
int64_t result
int64_t var_58

if (rsi_1 == 0 || *(arg1 + 0x20) == 0)
    uint64_t rsi_2 = rax_2 + 1
    
    if (rsi_2 u> rbp)
        goto label_1428d4c36
    
    while (true)
        uint64_t rax_11 = rsi_2
        int32_t rcx_7 = 0
        
        if ((rsi_2.b & 1) == 0)
            do
                rax_11 u>>= 1
                rcx_7 += 1
            while ((rax_11.b & 1) == 0)
        
        int64_t* rax_12 = sub_1428d5540(arg1, zx.q(rcx_7))
        
        if (rax_12 == 0)
            break
        
        *(arg1 + 0x90) ^= *rax_12
        *(arg1 + 0x98) ^= rax_12[1]
        uint128_t zmm0_1 = *r14
        r14 = &r14[1]
        var_58.o = zmm0_1
        int64_t rcx_10 = zmm0_1.q
        uint128_t temp0_1 = _mm_bsrli_si128(zmm0_1, 8)
        *(arg1 + 0xa0) ^= rcx_10
        int64_t rax_14 = temp0_1.q
        *(arg1 + 0xa8) ^= rax_14
        int64_t rax_15 = rax_14 ^ *(arg1 + 0x98)
        int64_t r8_4 = *(arg1 + 0x10)
        var_58 = rcx_10 ^ *(arg1 + 0x90)
        (*arg1)(&var_58, &var_58, r8_4)
        rsi_2 += 1
        var_58 ^= *(arg1 + 0x90)
        int64_t var_50_3 = rax_15 ^ *(arg1 + 0x98)
        *r12 = var_58.o
        r12 += 0x10
        
        if (rsi_2 u> rbp)
            goto label_1428d4c36
    
    result = 0
else
    int64_t rdi_1 = 0
    
    for (uint64_t i = rbp u>> 1; i != 0; i u>>= 1)
        rdi_1 += 1
    
    if (sub_1428d5540(arg1, rdi_1) == 0)
        result = 0
    else
        (*(arg1 + 0x20))(r14, r12, rsi_1, *(arg1 + 0x10), *(arg1 + 0x68) + 1, arg1 + 0x90, 
            *(arg1 + 0x58), arg1 + 0xa0)
    label_1428d4c36:
        uint64_t r15_1 = zx.q(arg4.d) & 0xf
        
        if (r15_1.d u> 0)
            *(arg1 + 0x90) ^= *(arg1 + 0x38)
            *(arg1 + 0x98) ^= *(arg1 + 0x40)
            (*arg1)(arg1 + 0x90, &var_58, *(arg1 + 0x10))
            sub_1428d5340(r14, &var_58, zx.q(r15_1.d), r12)
            var_58 = 0
            int64_t var_50_1 = 0
            memcpy(&var_58, r14, r15_1.d)
            *(&var_58 + r15_1) = 0x80
            *(arg1 + 0xa0) ^= var_58
            *(arg1 + 0xa8) ^= var_50_1
        
        *(arg1 + 0x68) = rbp
        result = 1
__security_check_cookie(rax_1 ^ &var_98)
return result
