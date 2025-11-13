// 函数: sub_141bab960
// 地址: 0x141bab960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg1 + 0x18)

if (rax == 0)
    int64_t* arg_18 = nullptr
    int64_t* rax_3 = sub_140d3c6e0(arg1 + 8)
    int64_t rax_4 = sub_140d1fd30(rax_3, *(arg1 + 0x10))
    int64_t r9_1 = *rax_3
    (*(r9_1 + 0x210))(rax_3, rax_4, &arg_18, r9_1)
    int64_t* rcx_3 = arg_18
    void* rax_12
    
    if (rcx_3 == 0)
        *arg2 = data_143e244b0
        rax_12 = data_143e244b8
    else
        char arg_8 = 0
        char* var_30_1 = &arg_8
        void** (* var_38)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
        int64_t var_28
        sub_141befea0(rcx_3, &var_28, &var_38)
        int64_t* var_20
        
        if (var_20 != 0)
            var_20[1].d += 1
        
        int64_t rax_7
        int64_t* rcx_5
        
        if (arg1 + 0x18 != &var_38)
            *(arg1 + 0x18) = var_28
            int64_t* rdi_2 = *(arg1 + 0x20)
            
            if (var_20 == rdi_2)
                goto label_141baba62
            
            *(arg1 + 0x20) = var_20
            
            if (rdi_2 == 0)
                goto label_141baba89
            
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d != 1)
                goto label_141baba89
            
            (**rdi_2)(rdi_2)
            int32_t temp4_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp4_1 != 1)
                goto label_141baba89
            
            rax_7 = *rdi_2
            rcx_5 = rdi_2
            goto label_141baba86
        
    label_141baba62:
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d != 1)
                goto label_141baba89
            
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 != 1)
                goto label_141baba89
            
            rax_7 = *var_20
            rcx_5 = var_20
        label_141baba86:
            (*(rax_7 + 8))(rcx_5, 1)
        label_141baba89:
            
            if (var_20 != 0)
                var_20[1].d -= 1
                
                if (var_20[1].d == 1)
                    (**var_20)(var_20)
                    int32_t temp5_1 = *(var_20 + 0xc)
                    *(var_20 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_20 + 8))(var_20, 1)
        
        *arg2 = *(arg1 + 0x18)
        rax_12 = *(arg1 + 0x20)
    
    arg2[1] = rax_12
    
    if (rax_12 != 0)
        *(rax_12 + 8) += 1
else
    *arg2 = rax
    void* rax_1 = *(arg1 + 0x20)
    arg2[1] = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1

return arg2
