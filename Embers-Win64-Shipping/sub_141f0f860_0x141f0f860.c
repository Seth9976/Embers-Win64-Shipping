// 函数: sub_141f0f860
// 地址: 0x141f0f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* rbx_1 = arg2[0x14]
    void* rbp_1 = nullptr
    int64_t* var_18
    int64_t* var_10
    int64_t* arg_10
    
    if (arg1 == 0)
    label_141f0f93a:
        
        if (sub_141dcded0(rbx_1) != 0)
            (*(*rbx_1 + 0x348))(rbx_1)
            
            if (sub_141dcded0(rbx_1) != 0)
                sub_141f18dc0(rbx_1 + 0x185, &var_18)
                int64_t* rcx_13 = var_18
                
                if (rcx_13 != 0)
                    arg_10 = rbx_1
                    sub_1405a9f90(rcx_13, &arg_10)
                
                if (var_10 != 0)
                    var_10[1].d -= 1
                    
                    if (var_10[1].d == 1)
                        (**var_10)(var_10)
                        int32_t temp8_1 = *(var_10 + 0xc)
                        *(var_10 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*var_10 + 8))(var_10, 1)
        
        goto label_141f0f9b1
    
    int64_t* rdi_1 = *(arg1 + 0xa0)
    
    if (arg2 != arg1)
        int32_t rax_1 = *(arg1 + 0xc)
        void* const rax_8
        
        if (rax_1 s>= data_143e1d9b4)
            rax_8 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_1)
            uint32_t rdx_1 = zx.d(temp4_1)
            int32_t rax_3 = temp5_1 + rdx_1
            rax_8 =
                *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
        
        if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f00210(arg1 + 0x3df, arg1)
        
        if (rbx_1 != rdi_1)
            if (sub_141dcded0(rdi_1) != 0)
                (*(*rdi_1 + 0x350))(rdi_1)
                
                if (sub_141dcded0(rdi_1) != 0)
                    sub_141f000c0(rdi_1 + 0x186, rdi_1)
            
            if (rbx_1 == rdi_1)
                goto label_141f0f9b1
            
            goto label_141f0f93a
        
    label_141f0f9b1:
        int32_t rax_19 = *(arg2 + 0xc)
        
        if (rax_19 s< data_143e1d9b4)
            int16_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rax_19)
            uint32_t rdx_8 = zx.d(temp2_1)
            int32_t rax_21 = temp3_1 + rdx_8
            rbp_1 = *(data_143e1d9a0 + (sx.q(rax_21 s>> 0x10) << 3))
                + sx.q(zx.d(rax_21.w) - rdx_8) * 0x18
        
        if (((*(rbp_1 + 8) u>> 0x1d).b & 1) == 0)
            sub_141f19b80(arg2 + 0x3de, &var_18)
            int64_t* rcx_21 = var_18
            
            if (rcx_21 != 0)
                arg_10 = arg2
                sub_1405a9f90(rcx_21, &arg_10)
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp9_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
else if (arg1 != 0)
    int32_t rax_29 = *(arg1 + 0xc)
    int64_t* rbx_4 = *(arg1 + 0xa0)
    void* const rbp_2
    
    if (rax_29 s>= data_143e1d9b4)
        rbp_2 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_29)
        uint32_t rdx_13 = zx.d(temp0_1)
        int32_t rax_31 = temp1_1 + rdx_13
        rbp_2 =
            *(data_143e1d9a0 + (sx.q(rax_31 s>> 0x10) << 3)) + sx.q(zx.d(rax_31.w) - rdx_13) * 0x18
    
    if (((*(rbp_2 + 8) u>> 0x1d).b & 1) == 0)
        sub_141f00210(arg1 + 0x3df, arg1)
    
    if (sub_141dcded0(rbx_4) != 0)
        (*(*rbx_4 + 0x350))(rbx_4)
        
        if (sub_141dcded0(rbx_4) != 0)
            return sub_141f000c0(rbx_4 + 0x186, rbx_4) __tailcall
