// 函数: sub_14066df90
// 地址: 0x14066df90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[1].d s<= 1)
    return 0

int64_t* rbx = *(arg1 + 0x28)
int32_t var_38
sub_14062d6e0(rbx, &var_38, arg2)
int64_t rax_1 = sx.q(var_38)
void* result = nullptr
int64_t* rbx_1

if (rax_1.d == 0xffffffff)
    rbx_1 = nullptr
else
    void* rcx_1 = *rbx + rax_1 * 0x28
    int64_t* rdi_1 = rcx_1 + 0x10
    
    if (rcx_1 == 0)
        rdi_1 = nullptr
    
    if (rdi_1 == 0)
        rbx_1 = nullptr
    else
        int64_t rsi_1 = *rdi_1
        
        if (rsi_1 == 0)
            rbx_1 = nullptr
        else
            int64_t* rdi_2 = rdi_1[1]
            
            if (rdi_2 != 0)
                rdi_2[1].d += 1
            
            int64_t rbp_1
            
            if (rdi_2 == 0 || rdi_2 == 0)
                rbx_1 = rdi_2
                rbp_1 = rsi_1
            else
                rdi_2[1].d += 1
                rbx_1 = rdi_2
                rdi_2[1].d -= 1
                rbp_1 = rsi_1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp3_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            if (rbp_1 != 0)
                void* result_1 = sub_140666db0(sub_140cde0b0())
                result = result_1
                int64_t var_30 = rbp_1
                int64_t* rdi_3 = rbx_1
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                
                if (&var_30 != result_1 + 0x28)
                    var_30.o = *(result_1 + 0x28)
                    rdi_3 = rbx_1
                    *(result_1 + 0x28) = var_30.o
                
                if (rdi_3 != 0)
                    rdi_3[1].d -= 1
                    
                    if (rdi_3[1].d == 1)
                        (**rdi_3)(rdi_3)
                        int32_t temp5_1 = *(rdi_3 + 0xc)
                        *(rdi_3 + 0xc) -= 1
                        
                        if (temp5_1 == 1)
                            (*(*rdi_3 + 8))(rdi_3, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rbx_1
            (*(r8_2 + 8))(rbx_1, 1, r8_2)

return result
