// 函数: sub_141ea6070
// 地址: 0x141ea6070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0 && sub_14243ac50(arg1).d != 1)
    if (data_143f3a090 == 0)
        int64_t* rax = j_sub_140a82f30(0x10)
        
        if (rax != 0)
            rax = sub_141e90490(rax)
        
        data_143f3a090 = rax
        int64_t* rax_1 = sub_140a84c80(0, 0x20, 0)
        int64_t* var_18 = rax_1
        void*** rbx_1 = rax_1
        int32_t var_10_1 = 2
        
        if (rax_1 != 0)
            *rbx_1 = &data_142d40dc0
            rbx_1[1] = sub_141e995b0
            rbx_1[3] = sub_140a387b0()
            *rbx_1 = &data_142d40e18
            void arg_8
            sub_1408d6c30(&data_14399fcd0, &arg_8, &var_18)
            int64_t* rax_4
            
            if (var_10_1 == 0)
                rax_4 = var_18
            label_141ea614d:
                
                if (rax_4 != 0)
                    sub_140a74f90(rax_4)
            else
                int64_t* rbx_2 = var_18
                
                if (rbx_2 != 0)
                    (*(*rbx_2 + 0x38))(rbx_2, 0)
                    rax_4 = sub_140a84c80(rbx_2, 0, 0)
                    goto label_141ea614d
    
    int64_t* rcx_4 = *data_143f3a090
    
    if (rcx_4 != 0)
        jump(*(*rcx_4 + 0x28))

int64_t* result
result.b = 0
return result
