// 函数: sub_14089dc50
// 地址: 0x14089dc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28 = arg1
void* result

while (true)
    result = *arg1
    
    if (*(result + 0x600) == 0)
        break
    
    sub_1408a0040(**(*(result + 0x5e8) + (((*(result + 0x5f0) - 1) & *(result + 0x5f8)) << 3)), 0)
    void* rdi_1 = *arg1
    int64_t* rbx_5 = *(*(*(rdi_1 + 0x5e8) + (((*(rdi_1 + 0x5f0) - 1) & *(rdi_1 + 0x5f8)) << 3)) + 8)
    
    if (rbx_5 != 0)
        rbx_5[1].d -= 1
        
        if (rbx_5[1].d == 1)
            (**rbx_5)(rbx_5)
            int32_t rax_5 = *(rbx_5 + 0xc)
            *(rbx_5 + 0xc) -= 1
            
            if (rax_5 == 1)
                (*(*rbx_5 + 8))(rbx_5)
    
    int64_t temp1_1 = *(rdi_1 + 0x600)
    *(rdi_1 + 0x600) -= 1
    
    if (temp1_1 != 1)
        *(rdi_1 + 0x5f8) += 1
    else
        *(rdi_1 + 0x5f8) = 0

return result
