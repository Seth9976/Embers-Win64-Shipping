// 函数: sub_140f053d0
// 地址: 0x140f053d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (*(arg1 + 0x524) == 2)
    int64_t* rdi_1 = *(arg1 + 0x720)
    int64_t* var_30
    int64_t* result
    void var_38
    
    if (rdi_1 == 0)
        int32_t rdi_2 = 1
        void var_28
        void var_18
        int64_t rbp
        
        if (*sub_140f02160(arg1, &var_18) == 0)
            rbp.b = 0
        else
            rdi_2 = 7
            
            if (*sub_140ebe530(*sub_140f02160(arg1, &var_28), &var_38) == 0)
                rbp.b = 0
            else
                rbp.b = 1
        
        if ((rdi_2.b & 4) != 0)
            rdi_2 &= 0xfffffffb
            
            if (var_30 != 0)
                var_30[1].d -= 1
                
                if (var_30[1].d == 1)
                    (**var_30)(var_30)
                    int32_t temp5_1 = *(var_30 + 0xc)
                    *(var_30 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_30 + 8))(var_30, 1)
        
        int64_t* var_20
        
        if ((rdi_2.b & 2) != 0 && var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp7_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
        
        int64_t* var_10
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp6_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        if (rbp.b == 0)
            result.b = 0
            return result
        
        void* rbx_4 = *sub_140ebe530(*sub_140f02160(arg1, &var_38), &var_28)
        sub_140ebd660()
        rdi_1.b = *sub_140ebff80(rbx_4, &var_18) == data_143e2a070
        
        if (var_10 != 0)
            var_10[1].d -= 1
            
            if (var_10[1].d == 1)
                (**var_10)(var_10)
                int32_t temp10_1 = *(var_10 + 0xc)
                *(var_10 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_10 + 8))(var_10, 1)
        
        if (var_20 != 0)
            var_20[1].d -= 1
            
            if (var_20[1].d == 1)
                (**var_20)(var_20)
                int32_t temp11_1 = *(var_20 + 0xc)
                *(var_20 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_20 + 8))(var_20, 1)
    else
        sub_140ebd660()
        rdi_1.b = *sub_140ebff80(rdi_1, &var_38) == data_143e2a070
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp1_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    if (rdi_1.b != 0)
        result.b = 0
        return result

return zx.q(*(arg1 + 0x524))
