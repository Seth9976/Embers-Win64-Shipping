// 函数: sub_142a41970
// 地址: 0x142a41970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = arg1[1]
int64_t rdi_2 = ((1 << arg4) - 1) << arg3.b
int64_t* result

if (r8 != 0)
label_142a41ae4:
    char rax_11 = r8.b & 1
    int64_t rax_12
    int64_t rdx_1
    
    do
        rdx_1 = arg1[2]
        rax_12 = rdx_1
        
        if (rax_12 == arg1[2])
            arg1[2] = rdx_1 | rdi_2
        else
            rax_12 = arg1[2]
    while (rdx_1 != rax_12)
    
    rax_12.b = (rdi_2 & rdx_1) == 0
    int64_t rbx_3 = (arg3 << 0x16) + (r8 & 0xfffffffffffffffc)
    *arg8 = rax_12.b
    
    if (*arg6 == 0)
        if (rax_11 != 0)
            *arg6 = 1
    else if (rax_11 == 0)
        char arg_18 = 0
        sub_142a41ee0(rbx_3, sub_142a41910(arg5), &arg_18, *(arg11 + 8))
        
        if (arg_18 != 0)
            *arg8 = 1
    
    *arg7 = r8.b u>> 1 & 1
    *arg9 = rbx_3
    *arg10 = (arg2 << 6) + arg3
    result.b = 1
else
    char rax_1 = sub_142a43d70(4)
    char rcx_2 = *arg7
    char r14_1 = rax_1
    char arg_8 = rcx_2
    int64_t rax_2
    int64_t r8_1
    int64_t r10_1
    
    if (rcx_2 != 0)
        rax_2, r8_1 = sub_142a42400(0x10000000, 0x400000)
        r10_1 = rax_2
    
    if (rcx_2 != 0 && rax_2 != 0)
        r14_1 = 1
    label_142a41a0f:
        r8 = (zx.q((sbb.q(r8_1, r8_1, arg_8 != 0)).d) & 2) | zx.q(r14_1) | r10_1
        bool z_1
        
        if (0 == arg1[1])
            arg1[1] = r8
            z_1 = true
        else
            arg1[1]
            z_1 = false
        
        if (not(z_1))
            int64_t rcx_5 = 1
            void* rdx = &data_14400f3a0 + arg2 * 0x18
            
            while (true)
                if (rcx_5 + arg2 u< 0x400)
                    bool z_2
                    
                    if (0 == *rdx)
                        *rdx = r8
                        z_2 = true
                    else
                        *rdx
                        z_2 = false
                    
                    if (z_2)
                        data_144015380
                        data_144015380 += 1
                        break
                    
                    rcx_5 += 1
                    rdx += 0x18
                    
                    if (rcx_5 u<= 4)
                        continue
                
                if (r10_1 == 0)
                    break
                
                sub_142a42180(r10_1, 0x10000000, r14_1, *(arg11 + 8))
                break
            
            r8 = arg1[1]
        else
            data_144015380
            data_144015380 += 1
        
        goto label_142a41ae4
    
    int64_t rax_6
    rax_6, r8_1 = sub_142a41e20(0x10000000, 0x400000, r14_1, &arg_8, arg11)
    r10_1 = rax_6
    
    if (rax_6 != 0)
        goto label_142a41a0f
    
    int64_t* result_1
    
    do
        result_1 = *arg1
        result = result_1
        
        if (result == *arg1)
            *arg1 = not.q(rdi_2) & result_1
        else
            result = *arg1
    while (result_1 != result)
    result.b = 0

return result
