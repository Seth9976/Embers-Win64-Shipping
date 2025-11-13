// 函数: sub_141b84350
// 地址: 0x141b84350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_18

if (arg1 + 0x28 != &var_18)
    *(arg1 + 0x28) = 0
    int64_t* rbx_1 = *(arg1 + 0x30)
    
    if (rbx_1 != 0)
        *(arg1 + 0x30) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* result = arg1 + 0x18

if (result != &var_18)
    *result = 0
    int64_t* rbx_2 = result[1]
    
    if (rbx_2 != 0)
        result[1] = 0
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp6_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp6_1 == 1)
                result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = *(arg1 + 0x30)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = *(arg1 + 0x20)

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp7_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp7_1 == 1)
            return (*(*rbx_4 + 8))(rbx_4, 1)

return result
