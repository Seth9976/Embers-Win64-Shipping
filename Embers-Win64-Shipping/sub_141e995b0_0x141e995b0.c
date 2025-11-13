// 函数: sub_141e995b0
// 地址: 0x141e995b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143f3a090

if (rbx != 0)
    void var_18
    
    if (*rbx != 0 && rbx != &var_18)
        *rbx = 0
        int64_t* rdi_1 = rbx[1]
        
        if (rdi_1 != 0)
            rbx[1] = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp3_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* rdi_2 = rbx[1]
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp1_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)
    
    j_sub_140a74f90(rbx)

data_143f3a090 = 0
