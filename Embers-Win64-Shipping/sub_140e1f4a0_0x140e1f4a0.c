// 函数: sub_140e1f4a0
// 地址: 0x140e1f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr

if (*(arg1 + 9) != 0)
    int32_t result_1
    sub_1405ba560(&data_1439af070, &result_1, arg2)
    result = sx.q(result_1)
    void* const rcx_2
    
    if (result.d == 0xffffffff)
        rcx_2 = nullptr
    else
        rcx_2 = (result << 5) + data_1439af070
    
    int64_t* rbx_1 = rcx_2 + 8
    
    if (rcx_2 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        void* rbp_1 = *rbx_1
        int64_t* rbx_2 = rbx_1[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        sub_140dba910(&data_1439af070, arg2)
        sub_14092f410(&data_1439af0c0, *(rbp_1 + 0x64))
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        int32_t var_48 = 0
        int64_t var_40
        __builtin_memset(&var_40, 0, 0x14)
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        void* var_58 = rbp_1
        int64_t* var_50_1 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int32_t var_30
        result = sub_140e20b70(arg1, &var_58, 4, &var_30, &var_48)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
        
        int64_t* rdi_1 = *(arg2 + 0x270)
        
        if (rdi_1 != 0)
            result = zx.q(rdi_1[1].d)
            
            if (result.d != 0)
                rdi_1[1].d = result.d + 1
                result.b = 1
            
            if (result.b == 0)
                rdi_1 = nullptr
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    result = (**rdi_1)(rdi_1)
                    int32_t temp7_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp5_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    return (*(*rbx_2 + 8))(rbx_2, 1)

return result
