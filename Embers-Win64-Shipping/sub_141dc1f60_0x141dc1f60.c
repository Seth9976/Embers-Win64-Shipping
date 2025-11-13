// 函数: sub_141dc1f60
// 地址: 0x141dc1f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
char rcx = *(arg1 + 0x5c)
uint64_t result
result.b = rcx & 0x60

if (result.b == 0x40)
    *(arg1 + 0x5c) = rcx & 0x9f
    sub_142452c10(arg1, arg2.b)
    int64_t* var_108
    sub_141dcb680(arg1 + 0x18f, &var_108)
    int64_t* rcx_3 = var_108
    
    if (rcx_3 != 0)
        int64_t* var_118 = arg1
        char var_110_1 = arg2.b
        sub_1405a9f90(rcx_3, &var_118)
    
    int64_t* var_100
    
    if (var_100 != 0)
        var_100[1].d -= 1
        
        if (var_100[1].d == 1)
            (**var_100)(var_100)
            int32_t temp1_1 = *(var_100 + 0xc)
            *(var_100 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_100 + 8))(var_100, 1)
    
    int64_t rdi_1 = 0
    int32_t var_2c_1 = 0x18
    void* var_38_1 = nullptr
    int32_t var_30_1 = 0
    void* rax_4 = sub_142459c10()
    void* r14_1
    
    if (rax_4 == 0)
        r14_1 = nullptr
    else
        void* rax_5 = sub_142459c10()
        
        if (rax_5 == 0)
            r14_1 = nullptr
        else
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rax_4 + 0x38))
                r14_1 = nullptr
            else
                r14_1 = rax_4
                
                if (*(*(rax_4 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                    r14_1 = nullptr
    
    void var_f8
    void* r8_1 = &var_f8
    
    if (r14_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_4, r8_1)
    else
        sub_1419f6fe0(arg1, rax_4, r8_1)
    
    void* rcx_9 = var_38_1
    void* rbx_3 = &var_f8
    
    if (rcx_9 != 0)
        rbx_3 = rcx_9
    
    int64_t rsi_1 = sx.q(var_30_1) << 3
    result = rbx_3 + rsi_1
    uint64_t rsi_2 = rsi_1 u>> 3
    
    if (rbx_3 u> result)
        rsi_2 = 0
    
    if (rsi_2 != 0)
        do
            int64_t* rcx_8 = *rbx_3
            
            if ((*(rcx_8 + 0x8b) & 1) != 0)
                result = (*(*rcx_8 + 0x328))(rcx_8, zx.q(arg2))
            
            rbx_3 += 8
            rdi_1 += 1
        while (rdi_1 != rsi_2)
        
        rcx_9 = var_38_1
    
    if (rcx_9 != 0)
        result = sub_140a74f90(rcx_9)

__security_check_cookie(rax_1 ^ &var_138)
return result
