// 函数: sub_141824770
// 地址: 0x141824770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t r8_1 = *arg1
    int64_t r15_1 = rax_2
    int64_t rax_4 = (*(r8_1 + 0x28))(arg1, arg3, r8_1) - r15_1
    
    if ((arg1[5].b & 2) != 0 || rax_4 s>= 0x18)
        int32_t rax_5 = arg2[6]
        void* r14_1 = &arg2[1]
        int32_t arg_8 = rax_5
        int32_t arg_18 = 0xb1fe3aa3
        *r14_1 = rax_5 * 0x1c + 0x18
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
            *arg2 = *rdx_2
            int64_t* rax_13 = arg1[1]
            *rax_13 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, arg2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, arg2, 4)
        
        int64_t* rcx_5 = arg1[1]
        int32_t* rdx_4 = *rcx_5
        
        if (&rdx_4[1] u<= rcx_5[1])
            *r14_1 = *rdx_4
            int64_t* rax_17 = arg1[1]
            *rax_17 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, r14_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, r14_1, 4)
        
        int64_t* rcx_7 = arg1[1]
        int64_t* r8_2 = *rcx_7
        
        if (&r8_2[1] u<= rcx_7[1])
            *(arg2 + 8) = *r8_2
            int64_t* rax_21 = arg1[1]
            *rax_21 += 8
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b540d0(arg1, &arg2[2], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &arg2[2], 8)
        
        int64_t* rcx_9 = arg1[1]
        int32_t* rdx_7 = *rcx_9
        
        if (&rdx_7[1] u> rcx_9[1])
            int32_t* rdx_8 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_8, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_8, 4)
        else
            arg_8 = *rdx_7
            *rcx_9 += 4
        
        if (arg_18 != 0xb1fe3aa3 || (*(arg1 + 0x29) & 1) != 0)
            goto label_141824ad4
        
        int64_t rbx_1 = sx.q(arg2[6])
        int32_t rax_26 = arg_8
        
        if (rax_26 s> rbx_1.d)
            arg2[6] = rax_26
            
            if (rax_26 s> arg2[7])
                sub_1405c4e40(&arg2[4])
            
            memset((rbx_1 << 5) + *(arg2 + 0x10), 0, sx.q(rax_26 - rbx_1.d) << 5)
            rax_26 = arg_8
        else if (rax_26 s< rbx_1.d)
            int32_t rcx_15 = rbx_1.d
            
            if (rcx_15 != rax_26)
                arg2[6] = rbx_1.d - (rcx_15 - rax_26)
                sub_1405dad20(&arg2[4])
                rax_26 = arg_8
        
        int32_t rbp_1 = 0
        
        if (rax_26 s> 0)
            int64_t r14_2 = 0
            
            do
                void* r15_3 = *(arg2 + 0x10) + r14_2
                int64_t* rax_27 = sub_1409ac860(arg1, r15_3, arg3)
                int64_t* rdx_11 = rax_27[1]
                int64_t* rax_28 = *rdx_11
                
                if (&rax_28[1] u<= rdx_11[1])
                    *(r15_3 + 0x10) = *rax_28
                    int64_t* rcx_21 = rax_27[1]
                    *rcx_21 += 8
                else if ((*(rax_27 + 0x29) & 0x20) != 0)
                    sub_140b540d0(rax_27, r15_3 + 0x10, arg3)
                else
                    (*(*rax_27 + 0x150))(rax_27, r15_3 + 0x10, 8)
                
                int64_t* rcx_23 = rax_27[1]
                int32_t* r8_5 = *rcx_23
                
                if (&r8_5[1] u<= rcx_23[1])
                    *(r15_3 + 0x18) = *r8_5
                    int64_t* rax_32 = rax_27[1]
                    *rax_32 += 4
                else if ((*(rax_27 + 0x29) & 0x20) != 0)
                    sub_140b54070(rax_27, r15_3 + 0x18, arg3)
                else
                    (*(*rax_27 + 0x150))(rax_27, r15_3 + 0x18, 4)
                
                rax_26 = arg_8
                rbp_1 += 1
                r14_2 += 0x20
            while (rbp_1 s< rax_26)
            
            r15_1 = rax_2
            r14_1 = &arg2[1]
        
        if ((*(*arg1 + 0x20))(arg1) - r15_1 != zx.q(rax_26 * 0x1c + 0x18))
            goto label_141824ad4
        
        int64_t rbx_7 = zx.q(*r14_1) + r15_1
        
        if ((*(*arg1 + 0x20))(arg1) != rbx_7)
            (*(*arg1 + 0x178))(arg1, rbx_7)
    else
    label_141824ad4:
        
        if ((arg1[5].b & 1) != 0)
            *arg2 = 0
            *(arg2 + 8) = 0
            bool cond:2_1 = arg2[7] == 0
            arg2[6] = 0
            
            if (not(cond:2_1))
                sub_1405a51b0(&arg2[4], 0)

return arg1
