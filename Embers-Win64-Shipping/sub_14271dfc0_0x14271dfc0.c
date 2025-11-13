// 函数: sub_14271dfc0
// 地址: 0x14271dfc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x39) != 4)
    int64_t* rbx_1 = arg2[1]
    int64_t var_28 = *arg2
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (&var_28 != &arg1[0x1b])
        var_28.o = *(arg1 + 0xd8)
        *(arg1 + 0xd8) = var_28.o
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t* rbx_2 = arg2[1]
    int64_t rbp_1 = *arg2
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    if (arg1[0x1a].d != 0)
        int64_t* rcx_3 = arg1[0x19]
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (arg1[0x1a].d == 0)
                rcx_4 = nullptr
            else
                rcx_4 = arg1[0x19]
            
            var_28 = rbp_1
            int64_t* var_20_2 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            (*(*rcx_4 + 0x50))(rcx_4, &var_28)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    sub_14263a2c0(arg1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 == 0)
    return 

rbx_3[1].d -= 1

if (rbx_3[1].d != 1)
    return 

(**rbx_3)(rbx_3)
int32_t temp1_1 = *(rbx_3 + 0xc)
*(rbx_3 + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx_3 + 8))
