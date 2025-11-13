// 函数: sub_140ec59a0
// 地址: 0x140ec59a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* result = *(arg1 + 0x700)

if (result != 0)
    int64_t* rbx_1 = *(arg1 + 0x708)
    int128_t* result_1 = result
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    int64_t* var_38
    sub_140ec04c0(arg1 + 0x4f0, &var_38, &result_1)
    int128_t zmm6 = result_1.o
    int128_t var_28
    
    if (*(arg1 + 0x770) != 0 && var_38 != 0)
        result_1.o = zmm6
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (&result_1 != arg1 + 0x670)
            int128_t zmm0_1 = *(arg1 + 0x670)
            *(arg1 + 0x670) = zmm6
            result_1.o = zmm0_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t* rcx_3 = var_38
        int64_t* rax_4 = (*(*rcx_3 + 0x50))(rcx_3, &var_28)
        result_1 = *rax_4
        int64_t* rcx_5 = rax_4[1]
        
        if (rcx_5 != 0)
            rcx_5[1].d += 1
        
        *(arg1 + 0x6f8)
        zmm6 = sub_140f7ca60()
        
        if (rcx_5 != 0)
            rcx_5[1].d -= 1
            
            if (rcx_5[1].d == 1)
                (**rcx_5)(rcx_5)
                int32_t temp12_1 = *(rcx_5 + 0xc)
                *(rcx_5 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*rcx_5 + 8))(rcx_5, 1)
        
        int64_t* rsi_3 = var_28:8.q
        
        if (rsi_3 != 0)
            rsi_3[1].d -= 1
            
            if (rsi_3[1].d == 1)
                (**rsi_3)(rsi_3)
                int32_t temp13_1 = *(rsi_3 + 0xc)
                *(rsi_3 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*rsi_3 + 8))(rsi_3, 1)
    
    *(arg1 + 0x770) = 0
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (*(arg1 + 0x618) != 0)
        int64_t* rcx_11 = *(arg1 + 0x610)
        
        if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
            int64_t* rcx_12
            
            if (*(arg1 + 0x618) == 0)
                rcx_12 = nullptr
            else
                rcx_12 = *(arg1 + 0x610)
            
            var_28 = zmm6
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (*(*rcx_12 + 0x50))(rcx_12, &var_28, &var_38)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    result = &var_28
    
    if (arg1 + 0x700 != &var_28)
        *(arg1 + 0x700) = 0
        int64_t* rdi_1 = *(arg1 + 0x708)
        
        if (rdi_1 != 0)
            *(arg1 + 0x708) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                result = (**rdi_1)(rdi_1)
                int32_t temp8_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    result = (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            result = (**var_30)(var_30)
            int32_t temp7_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_30 + 8))(var_30, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp10_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                return (*(*rbx_1 + 8))(rbx_1, 1)

return result
