// 函数: sub_141faaf40
// 地址: 0x141faaf40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 0xb28)

if (i_1 != 0)
    int64_t* rdi_1 = *(arg1 + 0xb20) + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 = &rdi_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0xb28) = 0

if (*(arg1 + 0xb2c) != 0)
    sub_1405a5410(arg1 + 0xb20, 0)

void* result = arg1 + 0xb30
void var_18

if (result != &var_18)
    *result = 0
    int64_t* rbx_2 = *(result + 8)
    
    if (rbx_2 != 0)
        *(result + 8) = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp4_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp4_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
