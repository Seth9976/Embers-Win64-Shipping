// 函数: sub_141824b20
// 地址: 0x141824b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t r8_1 = *arg1
    int64_t rbp_2 = (*(r8_1 + 0x28))(arg1, arg3, r8_1) - rax_2
    
    if ((arg1[5].b & 2) != 0 || rbp_2 s>= 0x29)
        uint64_t rcx_1 = zx.q(*arg2)
        int32_t arg_20 = 0xb1fe3aa2
        arg2[1] = *(&data_142fe58d0 + (rcx_1 << 2))
        int64_t* rcx_2 = arg1[1]
        char arg_8 = arg2[8].b
        int32_t* rdx = *rcx_2
        
        if (&rdx[1] u> rcx_2[1])
            int32_t* rdx_1 = &arg_20
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_1, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_1, 4)
        else
            arg_20 = *rdx
            *rcx_2 += 4
        
        int64_t* rcx_4 = arg1[1]
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u<= rcx_4[1])
            *arg2 = *rdx_2
            int64_t* rax_11 = arg1[1]
            *rax_11 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, arg2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, arg2, 4)
        
        int64_t* rcx_6 = arg1[1]
        int32_t* rdx_4 = *rcx_6
        
        if (&rdx_4[1] u<= rcx_6[1])
            arg2[1] = *rdx_4
            int64_t* rax_15 = arg1[1]
            *rax_15 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[1], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[1], 4)
        
        int64_t* rcx_8 = arg1[1]
        int32_t* r8_2 = *rcx_8
        
        if (&r8_2[1] u<= rcx_8[1])
            arg2[6] = *r8_2
            int64_t* rax_19 = arg1[1]
            *rax_19 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[6], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[6], 4)
        
        int64_t* rax_21 = sub_1409ac860(arg1, &arg2[2], arg3)
        int64_t* rcx_11 = rax_21[1]
        int64_t* rdx_8 = *rcx_11
        
        if (&rdx_8[1] u<= rcx_11[1])
            *(arg2 + 0x28) = *rdx_8
            int64_t* rax_24 = rax_21[1]
            *rax_24 += 8
        else if ((*(rax_21 + 0x29) & 0x20) != 0)
            sub_140b540d0(rax_21, &arg2[0xa], arg3)
        else
            (*(*rax_21 + 0x150))(rax_21, &arg2[0xa], 8)
        
        int64_t* rcx_13 = rax_21[1]
        char* rdx_10 = *rcx_13
        
        if (&rdx_10[1] u> rcx_13[1])
            (*(*rax_21 + 0x150))(rax_21, &arg_8, 1)
        else
            arg_8 = *rdx_10
            int64_t* rax_28 = rax_21[1]
            *rax_28 += 1
        
        arg2[8].b = arg_8
        
        if (arg_20 != 0xb1fe3aa2)
            goto label_141824e8b
        
        char r8_3 = *(arg1 + 0x29)
        
        if ((r8_3 & 1) != 0)
            goto label_141824e8b
        
        char rax_30 = 1
        int64_t rsi_2 = 0x29
        
        if (*arg2 u>= 2)
            if ((arg1[5].b & 2) == 0 && rbp_2 s< 0x3e)
                goto label_141824e8b
            
            char arg_18 = *(arg2 + 0x21)
            (*(*arg1 + 0x150))(arg1, &arg2[0xc], 0x14)
            int64_t* rcx_16 = arg1[1]
            char* rdx_13 = *rcx_16
            
            if (&rdx_13[1] u> rcx_16[1])
                (*(*arg1 + 0x150))(arg1, &arg_18, 1)
            else
                arg_18 = *rdx_13
                *rcx_16 += 1
            
            *(arg2 + 0x21) = arg_18
            r8_3 = *(arg1 + 0x29)
            rax_30 = not.b(r8_3) & 1
            
            if (rax_30 == 0)
                goto label_141824e8b
            
            rsi_2 = 0x3e
        
        if (*arg2 u>= 3)
            if ((arg1[5].b & 2) != 0 || rbp_2 s>= 0x42)
                int64_t* rcx_18 = arg1[1]
                int32_t* r9_1 = *rcx_18
                
                if (&r9_1[1] u<= rcx_18[1])
                    arg2[7] = *r9_1
                    int64_t* rax_39 = arg1[1]
                    *rax_39 += 4
                else if ((r8_3 & 0x20) != 0)
                    sub_140b54070(arg1, &arg2[7], arg3)
                else
                    (*(*arg1 + 0x150))(arg1, &arg2[7], 4)
                
                rax_30 = not.b(*(arg1 + 0x29)) & 1
            else
                rax_30 = 0
            
            rsi_2 = 0x42
        
        if (rax_30 == 0)
            goto label_141824e8b
        
        if ((*(*arg1 + 0x20))(arg1) - rax_2 != rsi_2)
            goto label_141824e8b
        
        int64_t rdi_2 = zx.q(arg2[1]) + rax_2
        
        if ((*(*arg1 + 0x20))(arg1) != rdi_2)
            (*(*arg1 + 0x178))(arg1, rdi_2)
    else
    label_141824e8b:
        
        if ((arg1[5].b & 1) != 0)
            __builtin_memset(arg2, 0, 0x48)
        
        *(arg1 + 0x29) |= 1

return arg1
