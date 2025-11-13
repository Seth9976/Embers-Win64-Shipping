// 函数: sub_1418260c0
// 地址: 0x1418260c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    bool cond:1_1 = (arg1[5].b & 2) == 0
    int64_t r14_1 = rax_2
    int32_t arg_20 = 0
    int32_t rcx
    
    if (not(cond:1_1))
        rcx = *arg2
    
    if (cond:1_1 || rcx s< 0 || rcx s> 0x11)
        rax_2.b = 1
    else
        rax_2 = 0
    
    int64_t* rcx_1 = arg1[1]
    char arg_18 = rax_2.b
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &arg_20
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_20 = *rdx
        *rcx_1 += 4
    
    int64_t* rcx_3 = arg1[1]
    char* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u> rcx_3[1])
        (*(*arg1 + 0x150))(arg1, &arg_18, 1)
    else
        arg_18 = *rdx_2
        *rcx_3 += 1
    
    char rcx_5 = *(arg1 + 0x29)
    
    if ((rcx_5 & 1) == 0)
        int64_t* rdx_4 = arg1[1]
        bool cond:3_1 = arg2[1].b != 0
        int32_t var_48 = *arg2
        bool arg_8 = cond:3_1
        int32_t* r8_1 = *rdx_4
        
        if (&r8_1[1] u> rdx_4[1])
            int32_t* rdx_5 = &var_48
            
            if ((rcx_5 & 0x20) != 0)
                sub_140b54070(arg1, rdx_5, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_5, 4)
        else
            var_48 = *r8_1
            *rdx_4 += 4
        
        bool** rcx_7 = arg1[1]
        bool* rdx_6 = *rcx_7
        
        if (&rdx_6[1] u> rcx_7[1])
            (*(*arg1 + 0x150))(arg1, &arg_8, 1)
        else
            arg_8 = *rdx_6
            *rcx_7 = &(*rcx_7)[1]
        
        int64_t* rcx_9 = arg1[1]
        int32_t* r8_2 = *rcx_9
        
        if (&r8_2[1] u<= rcx_9[1])
            arg2[2] = *r8_2
            int64_t* rax_18 = arg1[1]
            *rax_18 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[2], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[2], 4)
        
        int512_t zmm1_4 = sub_141824070(arg1, &arg2[0x14], 
            sub_140a1d9d0(arg1, &arg2[0x10], 
                sub_140a1d9d0(arg1, &arg2[0xc], 
                    sub_140a1d9d0(arg1, &arg2[8], sub_140a1d9d0(arg1, &arg2[4], arg3)))))
        
        if ((arg1[5].b & 1) != 0)
            int64_t rcx_16 = *(arg2 + 0x90)
            
            if (rcx_16 != 0)
                *(arg2 + 0x90) = sub_140a84c80(rcx_16, 0, 0)
            
            arg2[0x26] = 0
            zmm1_4 = sub_1405996f0(&arg2[0x14], arg2[0x16] - arg2[0x21], 0)
        
        arg3 = sub_140a1d9d0(arg1, &arg2[0x30], 
            sub_140a1d9d0(arg1, &arg2[0x2c], sub_140a1d9d0(arg1, &arg2[0x28], zmm1_4)))
        bool cond:7_1 = arg_8 == 1
        *arg2 = var_48
        int32_t rax_21
        rax_21.b = cond:7_1
        arg2[1].b = rax_21.b
        
        if ((*(arg1 + 0x29) & 1) == 0)
            if (arg_18 u>= 1)
                arg3 = sub_140a1d9d0(arg1, &arg2[0x34], arg3)
            else if ((arg1[5].b & 1) != 0)
                int64_t var_40
                arg3 = sub_140597da0(&arg2[0x34], sub_141839580(&var_40, arg2))
                int64_t rcx_25 = var_40
                
                if (rcx_25 != 0)
                    arg3 = sub_140a74f90(rcx_25)
    
    if ((*(arg1 + 0x29) & 1) == 0 && (arg1[5].b & 2) != 0)
        int64_t rax_24 = (*(*arg1 + 0x20))(arg1)
        int64_t r8_3 = *arg1
        arg_20 = rax_24.d - r14_1.d
        (*(r8_3 + 0x178))(arg1, r14_1, r8_3)
        int64_t* rdx_23 = arg1[1]
        int32_t* r8_4 = *rdx_23
        
        if (&r8_4[1] u> rdx_23[1])
            int32_t* rdx_24 = &arg_20
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_24, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_24, 4)
        else
            arg_20 = *r8_4
            *rdx_23 += 4
        
        (*(*arg1 + 0x178))(arg1, rax_24)
    
    (*(*arg1 + 0x178))(arg1, zx.q(arg_20) + r14_1)

return arg1
