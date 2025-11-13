// 函数: sub_142912690
// 地址: 0x142912690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(arg1 + 0x28)
void* rbp = *(*(arg1 + 0x10) + 0x28)
int32_t rax_1 = sub_1428eeb00(rbp)

if (rax_1 s> 0)
    int64_t rax_2 = sx.q(rax_1)
    
    if (arg2 == 0)
        *arg3 = rax_2
        return 1
    
    if (*arg3 u>= rax_2)
        char* rcx_1 = *(rsi + 8)
        int32_t rax_3
        
        if (rcx_1 == 0)
            rax_3 = 0x40
        else
            rax_3 = sub_1406938b0(rcx_1)
        
        void* var_20_1 = rbp
        int32_t var_28
        int32_t arg_8
        var_28.q = &arg_8
        int32_t result = sub_14294c790(zx.q(rax_3), arg4)
        
        if (result s<= 0)
            return result
        
        *arg3 = zx.q(arg_8)
        return 1
    
    sub_1428a5670(0x10, 0xda, 0x64, "crypto\ec\ec_pmeth.c", 0x77)

return 0
