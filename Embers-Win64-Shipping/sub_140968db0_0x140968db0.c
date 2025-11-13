// 函数: sub_140968db0
// 地址: 0x140968db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r12 = -1
uint64_t result

if (zx.d(arg2) s< arg1[9].d)
    void** const var_38
    
    if (arg4 == 0)
        int64_t* rcx_8 = arg1[5]
        
        if (rcx_8 != 0 && (*(*rcx_8 + 0x370))(rcx_8).d s> 0 && arg1[7] != 0
                && (*(*arg1 + 0x120))(arg1, arg3) != 0)
            int64_t* rbx_2 = *(arg3 + 0x10)
            int64_t r15_2 = 0
            
            if (rbx_2 != 0)
                int32_t rax_11 = rbx_2[1].d
                
                if (rax_11 != 0)
                    rbx_2[1].d = rax_11 + 1
                    rax_11.b = 1
                
                if (rax_11.b == 0)
                    rbx_2 = nullptr
                
                if (rbx_2 != 0)
                    r15_2 = *(arg3 + 8)
            
            int64_t var_30_2 = r15_2
            var_38 = &data_142e25968
            int64_t* var_28_2 = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            if (sub_14095fe60(arg1 + 0x80, &var_38).d != 0xffffffff)
                goto label_140968fb0
            
            int64_t r14_1 = sx.q(arg1[0x11].d)
            int32_t rax_12 = (r14_1 + 1).d
            arg1[0x11].d = rax_12
            
            if (rax_12 s> *(arg1 + 0x8c))
                sub_1405a4df0(arg1 + 0x80)
            
            result = *(arg1 + 0x80)
            int64_t rcx_12 = r14_1 * 3
            *(result + (rcx_12 << 3)) = &data_142e25968
            *(result + (rcx_12 << 3) + 8) = r15_2
            *(result + (rcx_12 << 3) + 0x10) = rbx_2
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            label_140968fb0:
                
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
            
            r12 = 0
    else
        int64_t* rbx_1 = *(arg3 + 0x10)
        int64_t rsi_1 = 0
        
        if (rbx_1 != 0)
            int32_t rax = rbx_1[1].d
            
            if (rax != 0)
                rbx_1[1].d = rax + 1
                rax.b = 1
            
            if (rax.b == 0)
                rbx_1 = nullptr
            
            if (rbx_1 != 0)
                rsi_1 = *(arg3 + 8)
        
        int64_t var_30_1 = rsi_1
        var_38 = &data_142e25968
        int64_t* var_28_1 = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        if (sub_14095fe60(&arg1[0xe], &var_38) != 0xffffffff)
            goto label_140968e81
        
        int64_t r15_1 = sx.q(arg1[0xf].d)
        int32_t rax_2 = (r15_1 + 1).d
        arg1[0xf].d = rax_2
        
        if (rax_2 s> *(arg1 + 0x7c))
            sub_1405a4df0(&arg1[0xe])
        
        int64_t rax_3 = arg1[0xe]
        int64_t rcx_2 = r15_1 * 3
        *(rax_3 + (rcx_2 << 3)) = &data_142e25968
        *(rax_3 + (rcx_2 << 3) + 8) = rsi_1
        *(rax_3 + (rcx_2 << 3) + 0x10) = rbx_1
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        label_140968e81:
            
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

result.b = r12 == 0
return result
