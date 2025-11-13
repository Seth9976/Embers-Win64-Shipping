// 函数: sub_140db9070
// 地址: 0x140db9070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result

if (*(arg1 + 0x20) != 0)
    result = *(arg1 + 0x28)

if (*(arg1 + 0x20) == 0 || result == 0 || *(result + 8) s<= 0)
    int64_t var_28 = 0
    int32_t var_20_1 = 0
    void*** rax_1 = sub_1405978f0(0x28, &var_28)
    
    if (rax_1 != 0)
        rax_1[1] = arg1
        *rax_1 = &data_142d42fd0
        rax_1[2] = sub_140d9f540
        rax_1[4] = sub_140a387b0()
    
    void var_18
    int64_t* rax_3 = sub_140e20c50(*arg2, &var_18, zx.o(0), &var_28)
    *(arg1 + 0x20) = *rax_3
    void* rbx_2 = rax_3[1]
    int64_t* rcx_2 = *(arg1 + 0x28)
    
    if (rbx_2 != rcx_2)
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
            rcx_2 = *(arg1 + 0x28)
        
        if (rcx_2 != 0)
            int32_t temp3_1 = *(rcx_2 + 0xc)
            *(rcx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rcx_2 + 8))(rcx_2, 1)
        
        *(arg1 + 0x28) = rbx_2
    
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp2_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_10 + 8))(var_10, 1)
    
    result = *arg2
    *(arg1 + 0x10) = result
    void* rbx_4 = arg2[1]
    int64_t* rcx_5 = *(arg1 + 0x18)
    
    if (rbx_4 != rcx_5)
        if (rbx_4 != 0)
            *(rbx_4 + 0xc) += 1
            rcx_5 = *(arg1 + 0x18)
        
        if (rcx_5 != 0)
            int32_t temp5_1 = *(rcx_5 + 0xc)
            *(rcx_5 + 0xc) -= 1
            
            if (temp5_1 == 1)
                result = (*(*rcx_5 + 8))(rcx_5, 1)
        
        *(arg1 + 0x18) = rbx_4

int64_t* rbx_5 = arg2[1]

if (rbx_5 != 0)
    rbx_5[1].d -= 1
    
    if (rbx_5[1].d == 1)
        result = (**rbx_5)(rbx_5)
        int32_t temp4_1 = *(rbx_5 + 0xc)
        *(rbx_5 + 0xc) -= 1
        
        if (temp4_1 == 1)
            return (*(*rbx_5 + 8))(rbx_5, 1)

return result
