// 函数: sub_14241a800
// 地址: 0x14241a800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2

if (rax == data_143e1e860 || rax == data_143e1e878)
    if (arg3 == 1)
        arg1[0x16].d &= 0xfffffffd
    else if (arg3 == 0)
        arg1[0x16].d |= 2
    
    int64_t* rbx_2 = arg2[2]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    rax.b = 1
    return rax

if ((arg1[0x16].b & 2) != 0 && arg3 == 0)
    int64_t var_18
    
    if (rax == data_143e1e500)
        var_18 = 0
        int64_t var_10_1 = 0
        sub_140d77160(&var_18)
        (*(*arg1 + 0x2a8))(arg1, &var_18)
        int64_t rcx_2 = var_18
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        sub_140d430a0(arg2)
        int64_t rax_2
        rax_2.b = 1
        return rax_2
    
    if (rax == data_143e1e338)
        if (arg1[0x10].d == 0)
            sub_140d77020(&data_142d40450)
            sub_140d430a0(arg2)
            int64_t rax_4
            rax_4.b = 1
            return rax_4
        
        sub_140d77020(arg1[0xf])
        sub_140d430a0(arg2)
        int64_t rax_3
        rax_3.b = 1
        return rax_3
    
    if (rax == data_143e1e530)
        if (arg1[0x10].d s> 1)
            int16_t* rcx_7
            
            if (arg1[0x10].d == 0)
                rcx_7 = &data_142d40450
            else
                rcx_7 = arg1[0xf]
            
            sub_140d77020(rcx_7)
            var_18 = 0
            int64_t var_10_2 = 0
            (*(*arg1 + 0x260))(arg1, &var_18)
            int64_t rcx_9 = var_18
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            (*(*arg1 + 0x268))(arg1, 0)
        
        sub_140d430a0(arg2)
        int64_t rax_7
        rax_7.b = 1
        return rax_7

int64_t* rbx_1 = arg2[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

rax.b = 0
return rax
