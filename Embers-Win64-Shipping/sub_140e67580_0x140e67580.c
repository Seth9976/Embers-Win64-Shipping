// 函数: sub_140e67580
// 地址: 0x140e67580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t r9 = sx.q(arg3)

if (*(arg1 + 0x1f8) == *(arg1 + 0x224))
label_140e67618:
    void var_178
    sub_140d94220(arg2, sub_140d947e0(&var_178))
    void var_28
    sub_140596d80(&var_28)
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    void var_170
    sub_140d94d20(&var_170)
else
    void* r8 = arg1 + 0x228
    void* rdx = *(r8 + 8)
    
    if (rdx != 0)
        r8 = rdx
    
    int32_t rax_3 = *(r8 + (((sx.q(*(arg1 + 0x238)) - 1) & r9) << 2))
    
    if (rax_3 == 0xffffffff)
        goto label_140e67618
    
    int32_t* rdx_3
    
    while (true)
        rdx_3 = sx.q(rax_3) * 0x30 + *(arg1 + 0x1f0)
        
        if (*rdx_3 == r9.d)
            break
        
        rax_3 = rdx_3[0xa]
        
        if (rax_3 == 0xffffffff)
            goto label_140e67618
    
    if (rax_3 == 0xffffffff || rdx_3 == 0)
        goto label_140e67618
    
    sub_140e52ad0(arg2, &rdx_3[2])

__security_check_cookie(rax_1 ^ &var_198)
return arg2
