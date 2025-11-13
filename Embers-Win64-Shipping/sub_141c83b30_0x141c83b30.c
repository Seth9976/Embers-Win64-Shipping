// 函数: sub_141c83b30
// 地址: 0x141c83b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int32_t result_1
sub_141c88700(rbx + 8, &result_1, &arg1[1])
int64_t result = sx.q(result_1)

if (result.d != 0xffffffff)
    int64_t rcx_1 = result * 5
    result = *(rbx + 8)
    int64_t rdi_1 = result + (rcx_1 << 3)
    
    if (rdi_1 != 0)
        int64_t* rbx_1 = *(rdi_1 + 0x10)
        int64_t* rdi_2 = *(rdi_1 + 0x18)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        if (rbx_1 != 0)
            sub_141c88700(rbx_1, &result_1, &arg1[1])
            result = sx.q(result_1)
            void* const rcx_3
            int64_t* rbx_3
            
            if (result.d == 0xffffffff)
                rcx_3 = nullptr
                rbx_3 = nullptr
            else
                int64_t rdx_2 = result * 5
                result = *rbx_1
                int64_t rbx_2 = result + (rdx_2 << 3)
                
                if (rbx_2 == 0)
                    rcx_3 = nullptr
                    rbx_3 = nullptr
                else
                    rcx_3 = *(rbx_2 + 0x10)
                    rbx_3 = *(rbx_2 + 0x18)
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d += 1
            
            if (rcx_3 != 0)
                result = arg1[3]
                *(rcx_3 + 0x18) = result
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    result = (**rbx_3)(rbx_3)
                    int32_t temp3_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        result = (*(*rbx_3 + 8))(rbx_3, 1)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp1_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    return (*(*rdi_2 + 8))(rdi_2, 1)

return result
