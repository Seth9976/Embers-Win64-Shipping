// 函数: sub_141825e10
// 地址: 0x141825e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t r8_1 = *arg1
    int64_t rax_4 = (*(r8_1 + 0x28))(arg1, arg3, r8_1) - rax_2
    
    if ((arg1[5].b & 2) != 0 || rax_4 s>= 0x25)
        char arg_8 = arg2[4].b
        int64_t rax_6 = sx.q(*arg2)
        int32_t arg_18 = 0x44bec00c
        arg2[1] = (*U"%%%%%%%%%%%%%%)))))")[rax_6]
        int64_t* rcx_1 = arg1[1]
        int32_t* rdx = *rcx_1
        
        if (&rdx[1] u> rcx_1[1])
            int32_t* rdx_1 = &arg_18
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_1, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_1, 4)
        else
            arg_18 = *rdx
            *rcx_1 += 4
        
        int64_t* rcx_3 = arg1[1]
        int32_t* rdx_2 = *rcx_3
        
        if (&rdx_2[1] u<= rcx_3[1])
            arg2[1] = *rdx_2
            int64_t* rax_13 = arg1[1]
            *rax_13 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[1], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[1], 4)
        
        int64_t* rcx_5 = arg1[1]
        int32_t* r8_2 = *rcx_5
        
        if (&r8_2[1] u<= rcx_5[1])
            arg2[3] = *r8_2
            int64_t* rax_17 = arg1[1]
            *rax_17 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[3], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[3], 4)
        
        int64_t* rcx_7 = arg1[1]
        int32_t* r8_3 = *rcx_7
        
        if (&r8_3[1] u<= rcx_7[1])
            arg2[2] = *r8_3
            int64_t* rax_21 = arg1[1]
            *rax_21 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &arg2[2], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[2], 4)
        
        (*(*arg1 + 0x150))(arg1, &arg2[5], 0x14)
        int64_t* rcx_10 = arg1[1]
        char* rdx_7 = *rcx_10
        
        if (&rdx_7[1] u> rcx_10[1])
            (*(*arg1 + 0x150))(arg1, &arg_8, 1)
        else
            arg_8 = *rdx_7
            *rcx_10 += 1
        
        arg2[4].b = arg_8
        
        if (arg_18 != 0x44bec00c)
            goto label_141826055
        
        char rdx_9 = *(arg1 + 0x29)
        
        if ((rdx_9 & 1) != 0)
            goto label_141826055
        
        int64_t rsi_1
        
        if (arg2[1] u<= 0x25)
            rsi_1 = 0x25
            
            if ((arg1[5].b & 1) != 0)
                *arg2 = 9
        else
            int64_t* rcx_12 = arg1[1]
            int32_t arg_20 = *arg2
            int32_t* r8_4 = *rcx_12
            
            if (&r8_4[1] u> rcx_12[1])
                int32_t* rdx_10 = &arg_20
                
                if ((rdx_9 & 0x20) != 0)
                    sub_140b54070(arg1, rdx_10, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, rdx_10, 4)
            else
                arg_20 = *r8_4
                *rcx_12 += 4
            
            rsi_1 = 0x29
            *arg2 = arg_20
            
            if ((not.b(*(arg1 + 0x29)) & 1) == 0)
                goto label_141826055
        
        if ((*(*arg1 + 0x20))(arg1) - rax_2 != rsi_1)
            goto label_141826055
        
        (*(*arg1 + 0x178))(arg1, zx.q(arg2[1]) + rax_2)
    else
    label_141826055:
        
        if ((arg1[5].b & 1) != 0)
            __builtin_memset(arg2, 0, 0x28)
        
        *(arg1 + 0x29) |= 1

return arg1
