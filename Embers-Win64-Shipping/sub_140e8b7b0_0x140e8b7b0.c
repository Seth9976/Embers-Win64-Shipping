// 函数: sub_140e8b7b0
// 地址: 0x140e8b7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rdi = *(arg1 + 0x2b8)
void* r15_2 = &rdi[sx.q(*(arg1 + 0x2c0)) * 2]
char* result

if (rdi == r15_2)
label_140e8b88d:
    int64_t* rbx_2 = arg2[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp1_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    result.b = 0
else
    while (true)
        void* rsi_1 = *rdi
        
        if (rsi_1 != 0)
            int64_t* rbx_1 = arg2[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rsi_1 = *rdi
            
            int64_t var_28 = *arg2
            int64_t* var_20_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            if (sub_140e6a100(rsi_1, &arg_8, &var_28)[1] == 0 || *(rsi_1 + 0x89) == 0)
                rsi_1.b = 0
            else
                rsi_1.b = 1
            
            arg_8:1.b = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (rsi_1.b != 0)
                int64_t* rbx_3 = arg2[1]
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp5_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                result.b = 1
                break
        
        rdi = &rdi[2]
        
        if (rdi == r15_2)
            goto label_140e8b88d

return result
