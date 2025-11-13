// 函数: sub_140eb3a20
// 地址: 0x140eb3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2fc) = 0xffffffff
int64_t var_18

if (arg1 + 0x2e0 != &var_18)
    *(arg1 + 0x2e0) = 0
    int64_t* rbx_1 = *(arg1 + 0x2e8)
    
    if (rbx_1 != 0)
        *(arg1 + 0x2e8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp1_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x2f0) = 0
*(arg1 + 0x2f4) = data_143dbb1f0.d
*(arg1 + 0x2f8) = data_143dbb1f0:4.d

if (*(arg2 + 0x1c0) != 0)
    int64_t* rcx_2 = *(arg2 + 0x1b8)
    
    if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
        int64_t* rcx_3
        
        if (*(arg2 + 0x1c0) == 0)
            rcx_3 = nullptr
        else
            rcx_3 = *(arg2 + 0x1b8)
        
        (*(*rcx_3 + 0x48))(rcx_3, &var_18)
        int64_t* var_10
        int64_t* rbx_2
        
        if (arg2 + 0x1a0 == &var_18)
        label_140eb3b50:
            rbx_2 = var_10
        label_140eb3b55:
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp5_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        else
            rbx_2 = var_10
            *(arg2 + 0x1a0) = var_18
            int64_t* rdi_1 = *(arg2 + 0x1a8)
            var_18 = 0
            
            if (rbx_2 == rdi_1)
                goto label_140eb3b55
            
            var_10 = nullptr
            *(arg2 + 0x1a8) = rbx_2
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                goto label_140eb3b50

int64_t result = *(arg2 + 0x1a0)
*(arg1 + 0x2d0) = result
void* rbx_3 = *(arg2 + 0x1a8)
int64_t* rcx_8 = *(arg1 + 0x2d8)

if (rbx_3 != rcx_8)
    if (rbx_3 != 0)
        *(rbx_3 + 0xc) += 1
        rcx_8 = *(arg1 + 0x2d8)
    
    if (rcx_8 != 0)
        int32_t temp2_1 = *(rcx_8 + 0xc)
        *(rcx_8 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rcx_8 + 8))(rcx_8, 1)
    
    *(arg1 + 0x2d8) = rbx_3

return result
