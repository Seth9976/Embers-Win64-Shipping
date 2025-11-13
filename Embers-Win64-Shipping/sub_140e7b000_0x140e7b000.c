// 函数: sub_140e7b000
// 地址: 0x140e7b000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
char* result
char var_28

if (rcx == 0 || *arg2 == 0)
    if (arg1 + 0x38 != &var_28)
        *(arg1 + 0x38) = 0
        int64_t* rcx_14 = *(arg1 + 0x40)
        *(arg1 + 0x40) = 0
        
        if (rcx_14 != 0)
            int32_t temp0_1 = *(rcx_14 + 0xc)
            *(rcx_14 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*rcx_14 + 8))(rcx_14, 1)
    
    result = &var_28
    
    if (arg1 + 0x48 != &var_28)
        *(arg1 + 0x48) = 0
        int64_t* rcx_15 = *(arg1 + 0x50)
        *(arg1 + 0x50) = 0
        
        if (rcx_15 != 0)
            int32_t temp1_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp1_1 == 1)
                jump(*(*rcx_15 + 8))
else
    if (*(arg1 + 0x30) == 0)
        jump(*(*rcx + 0x28))
    
    int64_t* rbx_1 = *(arg2 + 0x30)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    *(arg1 + 0x48) = *(arg2 + 0x28)
    int64_t* rcx_1 = *(arg1 + 0x50)
    
    if (rbx_1 != rcx_1)
        if (rbx_1 != 0)
            *(rbx_1 + 0xc) += 1
            rcx_1 = *(arg1 + 0x50)
        
        if (rcx_1 != 0)
            int32_t temp4_1 = *(rcx_1 + 0xc)
            *(rcx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rcx_1 + 8))(rcx_1, 1)
        
        *(arg1 + 0x50) = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = *(arg2 + 0x30)
    int64_t rsi_1 = *(arg2 + 0x28)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* rcx_12
    
    if (rsi_1 == 0)
        if (arg1 + 0x38 != &var_28)
            *(arg1 + 0x38) = 0
            int64_t* rcx_13 = *(arg1 + 0x40)
            *(arg1 + 0x40) = 0
            
            if (rcx_13 != 0)
                int32_t temp7_1 = *(rcx_13 + 0xc)
                *(rcx_13 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rcx_13 + 8))(rcx_13, 1)
        
        rcx_12 = *(arg1 + 0x20)
        return (*(*rcx_12 + 0x28))(rcx_12, zx.q(*(arg2 + 0x38)))
    
    int64_t* rbx_3 = *(arg2 + 0x30)
    int64_t* rcx_6 = *(arg2 + 0x28)
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_28 = data_1439ae51f
    int64_t var_20_1 = 0
    int32_t var_18_1 = 0
    char var_27_1 = 1
    (*(*rcx_6 + 0x1d8))(rcx_6, &var_28)
    
    if (rbx_3 != 0)
        rbx_3[1].d -= 1
        
        if (rbx_3[1].d == 1)
            (**rbx_3)(rbx_3)
            int32_t temp9_1 = *(rbx_3 + 0xc)
            *(rbx_3 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_3 + 8))(rbx_3, 1)
    
    int64_t* rbx_4 = *(arg2 + 0x20)
    
    if (rbx_4 != 0)
        rbx_4[1].d += 1
    
    *(arg1 + 0x38) = *(arg2 + 0x18)
    int64_t* rcx_9 = *(arg1 + 0x40)
    
    if (rbx_4 != rcx_9)
        if (rbx_4 != 0)
            *(rbx_4 + 0xc) += 1
            rcx_9 = *(arg1 + 0x40)
        
        if (rcx_9 != 0)
            int32_t temp12_1 = *(rcx_9 + 0xc)
            *(rcx_9 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*rcx_9 + 8))(rcx_9, 1)
        
        *(arg1 + 0x40) = rbx_4
    
    if (rbx_4 != 0)
        rbx_4[1].d -= 1
        
        if (rbx_4[1].d == 1)
            (**rbx_4)(rbx_4)
            int32_t temp11_1 = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*rbx_4 + 8))(rbx_4, 1)
    
    result = data_143e29f28
    
    if (result[0x438] == 0 && result[0x439] == 0)
        rcx_12 = *(arg1 + 0x20)
        return (*(*rcx_12 + 0x28))(rcx_12, 0xe)
return result
