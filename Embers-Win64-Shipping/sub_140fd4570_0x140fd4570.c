// 函数: sub_140fd4570
// 地址: 0x140fd4570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t rax_1 = __security_cookie ^ &var_68
uint64_t var_18 = rax_1
int64_t* rcx = *(arg1 + 0xa0)

if (rcx != 0)
    if ((*(arg1 + 0xf0) & 0x400000) != 0)
        *(arg1 + 0x90) = 0
        __security_check_cookie(var_18 ^ &var_68)
        return rax_1
    
    int32_t var_48
    (*(*rcx + 0x50))(rcx, &var_48)
    int32_t var_44
    int32_t var_40
    rax_1 = sub_141998570(var_48, var_44, *(arg1 + 0x3c), var_40)
    int32_t var_3c
    int64_t rdx_4 = rax_1 * zx.q(var_3c)
    *(arg1 + 0x90) = rdx_4.d
    
    if (rdx_4 != 0)
        int32_t rax_7
        
        if (rdx_4 s<= 0)
            int64_t rax_10
            int32_t rdx_7
            rdx_7:rax_10 = sx.o((0x3ff - rdx_4) & 0xfffffffffffffc00)
            rax_7 = (neg.q((rax_10 + (zx.q(rdx_7) & 0x3ff)) s>> 0xa)).d
        else
            int64_t rax_5
            int32_t rdx_5
            rdx_5:rax_5 = sx.o((rdx_4 + 0x3ff) & 0xfffffffffffffc00)
            rax_7 = ((rax_5 + (zx.q(rdx_5) & 0x3ff)) s>> 0xa).d
        
        char var_28
        
        if ((var_28 & 0xe0) == 0)
            uint64_t rax_13 = zx.q(data_143f0f1f8)
            data_143f0f1f8 += rax_7
            __security_check_cookie(var_18 ^ &var_68)
            return rax_13
        
        rax_1 = zx.q(data_143f0f1fc)
        data_143f0f1fc += rax_7

__security_check_cookie(var_18 ^ &var_68)
return rax_1
