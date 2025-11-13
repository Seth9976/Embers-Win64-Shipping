// 函数: sub_140a55270
// 地址: 0x140a55270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg3 != 0)
    if (*(arg1 + 0x21) != 0)
        goto label_140a552a2
    
    result.b = 1
    return result

if (*(arg1 + 0x20) != 0)
label_140a552a2:
    int32_t rdx = 0
    int32_t rcx = 0
    int64_t var_28 = 0
    int64_t var_20_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_28, rbx_1.d + 1)
            rcx = var_20_1:4.d
            rdx = var_20_1.d
        
        int32_t rax = rbx_1.d + 1 + rdx
        var_20_1.d = rax
        
        if (rax s> rcx)
            sub_140594770(&var_28)
        
        memcpy(var_28, arg2, (rbx_1.d + 1) * 2)
    
    int64_t var_18
    sub_140b187e0(&var_18, &var_28)
    int64_t rcx_5 = var_28
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int16_t* rdx_4
    
    if (*(arg1 + 0x18) == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *(arg1 + 0x10)
    
    if (sub_140a2c910(&var_18, rdx_4, 1).b != 0)
        int64_t* rdi_1 = *(arg1 + 8)
        int64_t rbx_3 = sx.q(rdi_1[1].d)
        result = (rbx_3 + 1).d
        rdi_1[1].d = result
        
        if (result s> *(rdi_1 + 0xc))
            sub_1405a4f90(rdi_1)
        
        int64_t rbx_4 = rbx_3 << 4
        int64_t* rbx_5 = rbx_4 + *rdi_1
        
        if (rbx_4 != neg.q(*rdi_1))
            *rbx_5 = 0
            int64_t rsi_1 = var_18
            int32_t var_10
            rbx_5[1].d = var_10
            
            if (var_10 != 0)
                sub_1405a4c70(rbx_5, var_10, 0)
                memcpy(*rbx_5, rsi_1, var_10 * 2)
            else
                *(rbx_5 + 0xc) = var_10
    
    int64_t rcx_10 = var_18
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

result.b = 1
return result
