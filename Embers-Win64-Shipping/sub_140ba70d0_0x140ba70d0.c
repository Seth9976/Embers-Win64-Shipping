// 函数: sub_140ba70d0
// 地址: 0x140ba70d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[1])
sub_140b9e310(arg1)

if (arg1[0xd].d - *(arg1 + 0x94) s<= 0)
label_140ba7264:
    CRITICAL_SECTION* rcx_13 = arg1[6]
    int64_t* rax_18
    void var_58
    
    if (rcx_13 == 0)
        int64_t var_68 = 0
        rax_18 = &var_68
    else
        rax_18 = sub_140ba72b0(rcx_13, &var_58, arg3)
    *arg2 = *rax_18
else
    int32_t rax_3 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = &arg1[0x13]
    void* rcx_3 = *(r8 + 8)
    
    if (rcx_3 != 0)
        r8 = rcx_3
    
    int32_t rax_5 = *(r8 + (((sx.q(arg1[0x15].d) - 1) & sx.q(rax_3)) << 2))
    int64_t arg_8
    int64_t rax_6
    
    if (rax_5 == 0xffffffff)
    label_140ba7167:
        arg_8 = 0
        rax_6 = 0
    else
        int64_t r8_1 = arg1[0xc]
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_5)
            int64_t rcx_4 = rdx_3 * 3
            
            if (*(r8_1 + (rcx_4 << 3)) == arg3)
                break
            
            rax_5 = *(r8_1 + (rcx_4 << 3) + 0x10)
            
            if (rax_5 == 0xffffffff)
                goto label_140ba7167
        
        if (rax_5 == 0xffffffff)
            goto label_140ba7167
        
        void* rax_11 = r8_1 + rdx_3 * 0x18
        
        if (rax_11 == 0)
            goto label_140ba7167
        
        rax_6 = *(rax_11 + 8)
        arg_8 = rax_6
    
    if (rax_6 == 0)
        goto label_140ba7264
    
    int64_t var_40
    sub_140a78a10(sub_140a752e0(), &var_40, &arg_8)
    CRITICAL_SECTION* var_50
    sub_140ba7920(arg1, &var_50, sub_140903440(var_40))
    CRITICAL_SECTION* rcx_8 = var_50
    int64_t* rax_9
    void var_60
    
    if (rcx_8 == 0)
        int64_t arg_20 = 0
        rax_9 = &arg_20
    else
        rax_9 = sub_140ba72b0(rcx_8, &var_60, arg3)
    *arg2 = *rax_9
    int64_t* var_48
    
    if (var_48 != 0)
        var_48[1].d -= 1
        
        if (var_48[1].d == 1)
            (**var_48)(var_48)
            int32_t temp2_1 = *(var_48 + 0xc)
            *(var_48 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_48 + 8))(var_48, 1)
    
    int64_t* var_38
    
    if (var_38 != 0)
        var_38[1].d -= 1
        
        if (var_38[1].d == 1)
            (**var_38)(var_38)
            int32_t rbp_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rbp_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rbp_1))

if (arg1 != -8)
    LeaveCriticalSection(&arg1[1])

return arg2
