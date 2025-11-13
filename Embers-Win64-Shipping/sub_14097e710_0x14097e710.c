// 函数: sub_14097e710
// 地址: 0x14097e710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (zx.d(arg2) s< arg1[9].d)
    void** const var_28
    
    if (arg4 != 0)
        int64_t* rbx_1 = *(arg3 + 0x10)
        int64_t rcx = 0
        
        if (rbx_1 != 0)
            int32_t rax_1 = rbx_1[1].d
            
            if (rax_1 != 0)
                rbx_1[1].d = rax_1 + 1
                rax_1.b = 1
            
            if (rax_1.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rcx = *(arg3 + 8)
        
        int64_t var_20_1 = rcx
        var_28 = &data_142e25968
        int64_t* var_18_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        int32_t rax_2 = sub_14095fe60(&arg1[0xe], &var_28)
        
        if (rax_2 != 0xffffffff)
            sub_140974e00(&arg1[0xe], rax_2, 1, 1)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        (*(*arg1 + 8))(arg1)
        int64_t rax_8
        rax_8.b = 0
        return rax_8
    
    int64_t* rcx_8 = arg1[5]
    
    if (rcx_8 != 0 && (*(*rcx_8 + 0x370))(rcx_8).d s> 0 && arg1[7] != 0
            && (*(*arg1 + 0x120))(arg1, arg3) != 0 && (*(*arg1 + 0x130))(arg1, arg3).b == 0)
        int64_t* rbx_2 = *(arg3 + 0x10)
        int64_t rcx_11 = 0
        
        if (rbx_2 != 0)
            int32_t rax_12 = rbx_2[1].d
            
            if (rax_12 != 0)
                rbx_2[1].d = rax_12 + 1
                rax_12.b = 1
            
            if (rax_12.b == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                rcx_11 = *(arg3 + 8)
        
        int64_t var_20_2 = rcx_11
        var_28 = &data_142e25968
        int64_t* var_18_2 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        rax = sub_14095fe60(&arg1[0x10], &var_28)
        
        if (rax.d != 0xffffffff)
            sub_140974e00(&arg1[0x10], rax.d, 1, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp7_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

rax.b = 0
return rax
