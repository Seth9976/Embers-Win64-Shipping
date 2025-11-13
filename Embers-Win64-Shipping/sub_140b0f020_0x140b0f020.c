// 函数: sub_140b0f020
// 地址: 0x140b0f020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *arg2
int64_t r11 = sx.q(arg2[1].d)
int16_t* r9 = &r10[r11]

if (r9 == r10)
label_140b0f063:
    sub_140596d10(arg1, arg2)
else
    while (true)
        r9 -= 2
        
        if (*r9 == 0x2e)
            break
        
        if (r9 == r10)
            goto label_140b0f063_2
    
    int32_t r9_2 = ((r9 - r10) s>> 1).d
    
    if (r9_2 == 0xffffffff)
    label_140b0f063_1:
        sub_140596d10(arg1, arg2)
    else
        int32_t rbx_1 = (r11 - 1).d
        
        if (r11.d == 0)
            rbx_1 = 0
        
        void* rcx_1 = &r10[sx.q(rbx_1)]
        
        if (rcx_1 == r10)
        label_140b0f0e3:
            int16_t* const rdi_1 = &data_142d40450
            
            if (r11.d != 0)
                rdi_1 = r10
            
            if (r9_2 s< 0)
                rbx_1 = 0
            else if (r9_2 s< rbx_1)
                rbx_1 = r9_2
            
            int64_t var_18 = 0
            int32_t rdx = 0
            int32_t var_10_1 = 0
            int32_t r8 = 0
            int32_t var_c_1 = 0
            
            if (rdi_1 != 0 && *rdi_1 != 0 && rbx_1 s> 0)
                if (rbx_1 + 1 s> 0)
                    sub_1405947f0(&var_18, rbx_1 + 1)
                    r8 = var_c_1
                    rdx = var_10_1
                
                int32_t rax_6 = rdx + 1 + rbx_1
                var_10_1 = rax_6
                
                if (rax_6 s> r8)
                    sub_140594770(&var_18)
                
                UnDecorator::getReferenceType(var_18, rdi_1, rbx_1 * 2)
                *(var_18 + (sx.q(var_10_1) << 1) - 2) = 0
                r8 = var_c_1
                rdx = var_10_1
            
            int32_t rax_8 = arg3[1].d
            int32_t rcx_8 = rax_8 - 1
            
            if (rax_8 == 0)
                rcx_8 = 0
            
            if (rcx_8 != 0 && **arg3 != 0x2e)
                int32_t rbx_2 = rdx - 1
                
                if (rdx s<= 0)
                    rbx_2 = 0
                
                int32_t rax_10
                rax_10.b = rdx s<= 0
                int32_t rax_12 = rax_10 + 1 + rdx
                var_10_1 = rax_12
                
                if (rax_12 s> r8)
                    sub_140594770(&var_18)
                
                int64_t rcx_10 = sx.q(rbx_2)
                *(var_18 + (rcx_10 << 1)) = 0x2e
                *(var_18 + (rcx_10 << 1) + 2) = 0
            
            int32_t rax_15 = arg3[1].d
            int32_t r8_3 = rax_15 - 1
            
            if (rax_15 == 0)
                r8_3 = 0
            
            sub_140a20ba0(&var_18, *arg3, r8_3)
            *arg1 = var_18
            arg1[1].d = var_10_1
            *(arg1 + 0xc) = var_c_1
        else
            while (true)
                int16_t rax_3 = *(rcx_1 - 2)
                rcx_1 -= 2
                
                if (rax_3 == 0x2f)
                    break
                
                if (rax_3 == 0x5c)
                    break
                
                if (rcx_1 == r10)
                    goto label_140b0f0e3
            
            int32_t rcx_3 = ((rcx_1 - r10) s>> 1).d
            
            if (rcx_3 == 0xffffffff || rcx_3 s<= r9_2)
                goto label_140b0f0e3
            
        label_140b0f063_2:
            sub_140596d10(arg1, arg2)

return arg1
