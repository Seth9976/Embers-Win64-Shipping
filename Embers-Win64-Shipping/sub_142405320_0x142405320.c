// 函数: sub_142405320
// 地址: 0x142405320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = data_143f5b828

if (rdi != 0)
    void var_18
    
    if (rdi != &var_18)
        *rdi = 0
        int64_t* rbx_1 = rdi[1]
        
        if (rbx_1 != 0)
            rdi[1] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = rdi[1]
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    j_sub_140a74f90(rdi)

data_143f5b828 = 0
