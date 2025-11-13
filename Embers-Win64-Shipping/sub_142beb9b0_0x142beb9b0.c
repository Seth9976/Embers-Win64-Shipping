// 函数: sub_142beb9b0
// 地址: 0x142beb9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int16_t* r9 = arg2[1]
int32_t* r8 = *arg2

if (arg1 != 0)
    char r11_1 = (arg2[2].d).b
    
    if ((r11_1 & 1) == 0)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return 0x13
    
    if (r9 == 0)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return 0x14
    
    int16_t rdx = r9[1]
    
    if (rdx == 0)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return 0
    
    int16_t rax_5 = *r9
    
    if (rax_5 s<= 0)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return 0
    
    int64_t rcx_6 = *(r9 + 0x18)
    
    if (rcx_6 == 0 || *(r9 + 8) == 0
            || sx.d(rdx) != sx.d(*(rcx_6 + (sx.q(sx.d(rax_5) - 1) << 1))) + 1)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return 0x14
    
    int32_t rdx_1 = 0
    uint128_t var_68_1 = *r9
    int128_t var_58_1 = *(r9 + 0x10)
    uint64_t var_48_1 = *(r9 + 0x20)
    
    if ((r11_1 & 2) != 0)
        int64_t rax_10 = arg2[3]
        
        if (rax_10 == 0)
            __security_check_cookie(rax_1 ^ &var_1e8)
            return 0
        
        int64_t var_30_1 = rax_10
        int64_t var_28_1 = arg2[7]
    label_142bebb3e:
        int32_t rax_15
        int32_t rcx_12
        int32_t r9_2
        
        if ((r11_1 & 6) != 6)
            rcx_12 = r8[1]
            r9_2 = 0
            rax_15 = *r8
        else
            uint128_t zmm0 = *(arg2 + 0x40)
            rax_15 = zmm0:0xc.d
            rcx_12 = zmm0:8.d
            rdx_1 = zmm0:4.d
            r9_2 = zmm0.d
        
        int32_t var_b0_1 = r9_2
        int32_t var_a8_1 = rdx_1
        int32_t var_ac_1 = rcx_12
        int32_t var_a4_1 = rax_15
        
        if (rcx_12 s<= r9_2 || rax_15 s<= rdx_1)
            __security_check_cookie(rax_1 ^ &var_1e8)
            return 0
        
        struct _SETJMP_FLOAT128 var_1b8[0x10]
        int64_t result = sub_142bec1a0(&var_1b8)
        __security_check_cookie(rax_1 ^ &var_1e8)
        return result
    
    if (r8 != 0)
        if (r8[1] == 0)
            __security_check_cookie(rax_1 ^ &var_1e8)
            return 0
        
        int32_t rax_12 = *r8
        
        if (rax_12 == 0)
            __security_check_cookie(rax_1 ^ &var_1e8)
            return 0
        
        int64_t r9_1 = *(r8 + 0x10)
        
        if (r9_1 != 0)
            int32_t rcx_9 = r8[2]
            
            if (rcx_9 s>= 0)
                int64_t var_40_2 = zx.q(rcx_9 * (rax_12 - 1)) + r9_1
            else
                int64_t var_40_1 = r9_1
            
            int32_t var_38_1 = r8[2]
            int64_t var_30_2 = 0
            int64_t var_28_2 = 0
            goto label_142bebb3e

__security_check_cookie(rax_1 ^ &var_1e8)
return 6
