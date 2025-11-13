// 函数: sub_140faa630
// 地址: 0x140faa630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x2d0 != &var_18)
    *(arg1 + 0x2d0) = 0
    int64_t* rbx_1 = *(arg1 + 0x2d8)
    
    if (rbx_1 != 0)
        *(arg1 + 0x2d8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* result = arg1 + 0x2e0

if (result != &var_18)
    *result = 0
    int64_t* rbx_2 = result[1]
    
    if (rbx_2 != 0)
        result[1] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

*(arg1 + 0x2f0) = 0
*(arg1 + 0x2f8) = 0
return result
