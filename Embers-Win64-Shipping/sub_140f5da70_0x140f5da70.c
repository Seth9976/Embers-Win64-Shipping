// 函数: sub_140f5da70
// 地址: 0x140f5da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = *arg2
void** result_1

if (result != 0)
    int64_t* rbx_1 = arg2[1]
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result_1 = result
    int64_t* var_10_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    result = sub_140f2ce90(arg1 + 0x2a8, &result_1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp5_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)
else if (*(arg1 + 0x2b8) != 0)
    int64_t* rbx_2 = *(arg1 + 0x2c0)
    
    if (rbx_2 != 0)
        result = zx.q(rbx_2[1].d)
        
        if (result.d s> 0)
            int64_t* r8_1 = nullptr
            int64_t* rax_5
            
            if (result.d == 0)
                rbx_2 = nullptr
                rax_5 = nullptr
            else
                rbx_2[1].d = result.d + 1
                rax_5 = rbx_2
            
            if (rax_5 != 0)
                r8_1 = *(arg1 + 0x2b8)
            
            if (rax_5 == 0 || r8_1 == 0 || r8_1 != data_143e244b0)
                sub_140de9860(r8_1, *(arg1 + 0x2b0))
            
            result = &result_1
            
            if (arg1 + 0x2b8 != &result_1)
                *(arg1 + 0x2b8) = 0
                int64_t* rcx_6 = *(arg1 + 0x2c0)
                *(arg1 + 0x2c0) = 0
                
                if (rcx_6 != 0)
                    int32_t temp7_1 = *(rcx_6 + 0xc)
                    *(rcx_6 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        result = (*(*rcx_6 + 8))(rcx_6, 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    result = (**rbx_2)(rbx_2)
                    int32_t temp8_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        result = (*(*rbx_2 + 8))(rbx_2, 1)
int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rbx_3 + 8))

return result
