// 函数: sub_141cf9320
// 地址: 0x141cf9320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 4, sx.q(*(arg2 + 0xc)) << 4)
int32_t i = 0
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rax_6 = arg_8

if (rax_6 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_6 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x100000)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) == 0)
        arg2[1].d = rax_6
        
        if (rax_6 s> 0)
            int64_t rbp_2 = 0
            
            do
                void* rax_18 = *arg2
                
                if ((rax_18.b & 1) != 0)
                    rax_18 = (rax_18 s>> 1) + arg2
                
                int64_t* rcx_12 = arg1[1]
                void* r14_4 = rax_18 + rbp_2
                int64_t* rdx_9 = *rcx_12
                
                if (&rdx_9[1] u<= rcx_12[1])
                    *r14_4 = *rdx_9
                    int64_t* rax_21 = arg1[1]
                    *rax_21 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, r14_4, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, r14_4, 8)
                
                int64_t* rcx_14 = arg1[1]
                int64_t* r8_3 = *rcx_14
                
                if (&r8_3[1] u<= rcx_14[1])
                    *(r14_4 + 8) = *r8_3
                    int64_t* rax_25 = arg1[1]
                    *rax_25 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, r14_4 + 8, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, r14_4 + 8, 8)
                
                i += 1
                rbp_2 += 0x10
            while (i s< arg2[1].d)
    else
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rax_6)
            sub_140888c10(arg2, rax_6)
            rax_6 = arg_8
        
        if (rax_6 s> 0)
            do
                int64_t rbp_1 = sx.q(arg2[1].d)
                int32_t rax_7 = (rbp_1 + 1).d
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_140888950(arg2, rbp_1.d)
                
                void* rcx_7 = *arg2
                
                if ((rcx_7.b & 1) != 0)
                    rcx_7 = (rcx_7 s>> 1) + arg2
                
                int64_t* r14_3 = (rbp_1 << 4) + rcx_7
                int64_t* rcx_8 = arg1[1]
                int64_t* rdx_6 = *rcx_8
                
                if (&rdx_6[1] u<= rcx_8[1])
                    *r14_3 = *rdx_6
                    int64_t* rax_10 = arg1[1]
                    *rax_10 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, r14_3, arg3)
                else
                    (*(*arg1 + 0x150))(arg1, r14_3, 8)
                
                int64_t* rcx_10 = arg1[1]
                int64_t* r8_2 = *rcx_10
                
                if (&r8_2[1] u<= rcx_10[1])
                    r14_3[1] = *r8_2
                    int64_t* rax_14 = arg1[1]
                    *rax_14 += 8
                else if ((*(arg1 + 0x29) & 0x20) != 0)
                    sub_140b540d0(arg1, &r14_3[1], arg3)
                else
                    (*(*arg1 + 0x150))(arg1, &r14_3[1], 8)
                
                i += 1
            while (i s< arg_8)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_140888c10(arg2, 0)

return arg1
