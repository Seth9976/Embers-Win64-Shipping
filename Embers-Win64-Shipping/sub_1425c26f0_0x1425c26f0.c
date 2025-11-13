// 函数: sub_1425c26f0
// 地址: 0x1425c26f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x88) != 0 || *(arg1 + 0x78) != 0)
    int32_t rbx_1 = 0
    int64_t var_18 = 0
    int32_t rdx = 0
    int64_t var_10_1 = 0
    int32_t rcx = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rsi_1 = -1
        
        do
            rsi_1 += 1
        while (arg2[rsi_1] != 0)
        
        if (rsi_1.d + 1 s> 0)
            sub_1405947f0(&var_18, rsi_1.d + 1)
            rcx = var_10_1:4.d
            rdx = var_10_1.d
        
        int32_t rax_1 = rsi_1.d + 1 + rdx
        var_10_1.d = rax_1
        
        if (rax_1 s> rcx)
            sub_140594770(&var_18)
        
        UnDecorator::getReferenceType(var_18, arg2, (rsi_1.d + 1) * 2)
    
    sub_140b20c40(&var_18)
    
    if (arg3 != 0)
        if (*(arg1 + 0x88) s<= 0)
            goto label_1425c27fd
        
        int64_t* rsi_3 = nullptr
        
        while (true)
            int64_t rax_2 = *(arg1 + 0x80)
            int16_t* rdx_3
            
            if (*(rsi_3 + rax_2 + 8) == 0)
                rdx_3 = &data_142d40450
            else
                rdx_3 = *(rsi_3 + rax_2)
            
            if (sub_140a2c910(&var_18, rdx_3, 1) != 0)
                break
            
            rbx_1 += 1
            rsi_3 = &rsi_3[2]
            
            if (rbx_1 s>= *(arg1 + 0x88))
                goto label_1425c27fd
        
        goto label_1425c286a
    
    if (*(arg1 + 0x78) s> 0)
        int64_t* rsi_4 = nullptr
        
        while (true)
            int64_t rax_3 = *(arg1 + 0x70)
            int16_t* rdx_4
            
            if (*(rsi_4 + rax_3 + 8) == 0)
                rdx_4 = &data_142d40450
            else
                rdx_4 = *(rsi_4 + rax_3)
            
            if (sub_140a2c910(&var_18, rdx_4, 1) != 0)
                break
            
            rbx_1 += 1
            rsi_4 = &rsi_4[2]
            
            if (rbx_1 s>= *(arg1 + 0x78))
                goto label_1425c27fd
        
    label_1425c286a:
        int64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        return 0
    
label_1425c27fd:
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return 1
