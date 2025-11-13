// 函数: sub_142394bf0
// 地址: 0x142394bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 0x11) == 0 && *(arg1 + 0x12) == 0)
    if (arg1[2].b == 0)
        *(arg1 + 0x14) = 1
        return result
    
    *(arg1 + 0x11) = 1
    int64_t rsi_1 = 0
    int64_t* rbx_1 = arg1[1]
    
    if (rbx_1 != 0)
        int32_t rax = rbx_1[1].d
        
        if (rax != 0)
            rbx_1[1].d = rax + 1
            rax.b = 1
        
        if (rax.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rsi_1 = *arg1
    
    int64_t* i = arg1[0xd]
    int64_t rax_1 = sx.q(arg1[0xe].d)
    int64_t var_58 = rsi_1
    int64_t var_48
    int64_t* var_40
    
    for (; i != &i[rax_1 * 3]; i = &i[3])
        var_48 = rsi_1
        var_40 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        arg2 = sub_142395a80(arg1[0x13], i, &var_48)
    
    sub_140dba5f0(arg1[0x13] + 0xb0, &var_58)
    void** rsi_2 = arg1[0xf]
    void* rbp_4 = &rsi_2[sx.q(arg1[0x10].d) * 2]
    
    if (rsi_2 != rbp_4)
        int128_t zmm6 = var_58.o
        int64_t* arg_8 = &var_48
        
        do
            int64_t* rbx_2 = rsi_2[1]
            void* rcx_4 = *rsi_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            var_48.o = zmm6
            
            if (rbx_1 != 0)
                *(rbx_1 + 0xc) += 1
            
            sub_14237cef0(rcx_4 + 0x88, &arg_8, arg2)
            
            if (var_40 != 0)
                int32_t temp2_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*var_40 + 8))(var_40, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            rsi_2 = &rsi_2[2]
        while (rsi_2 != rbp_4)
    
    result = sub_14095cd40(&arg1[0xf], 0)
    arg1[0xc] = 0
    arg1[0x13] = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
