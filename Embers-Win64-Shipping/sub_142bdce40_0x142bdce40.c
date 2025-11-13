// 函数: sub_142bdce40
// 地址: 0x142bdce40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x4498)
void var_4498
int64_t var_18 = __security_cookie ^ &var_4498
int16_t* r8 = arg2[1]
int32_t* r9 = *arg2

if (arg1 == 0)
    __security_check_cookie(var_18 ^ &var_4498)
    return zx.q((arg1 + 0x60).d)

if (r8 != 0)
    int16_t r10_1 = r8[1]
    
    if (r10_1 == 0)
        __security_check_cookie(var_18 ^ &var_4498)
        return 0
    
    int16_t rax_4 = *r8
    
    if (rax_4 s<= 0)
        __security_check_cookie(var_18 ^ &var_4498)
        return 0
    
    int64_t rcx_4 = *(r8 + 0x18)
    
    if (rcx_4 != 0 && *(r8 + 8) != 0
            && sx.d(r10_1) == sx.d(*(rcx_4 + (sx.q(sx.d(rax_4) - 1) << 1))) + 1)
        char rax_9 = (arg2[2].d).b
        
        if ((rax_9 & 2) != 0 || (rax_9 & 1) != 0)
            __security_check_cookie(var_18 ^ &var_4498)
            return 0x13
        
        if (r9 != 0)
            if (r9[1] == 0 || *r9 == 0)
                __security_check_cookie(var_18 ^ &var_4498)
                return 0
            
            if (*(r9 + 0x10) != 0)
                uint128_t var_43c0 = *r8
                int128_t var_43b0 = *(r8 + 0x10)
                uint64_t var_43a0 = *(r8 + 0x20)
                uint128_t var_43e8 = *r9
                int128_t var_43d8 = *(r9 + 0x10)
                void var_4018
                void* var_4460 = &var_4018
                int64_t* var_4458 = &var_18
                uint64_t var_43c8 = *(r9 + 0x20)
                void var_4478
                int64_t result = sub_142bdedc0(&var_4478)
                __security_check_cookie(var_18 ^ &var_4498)
                return result

__security_check_cookie(var_18 ^ &var_4498)
return 0x14
