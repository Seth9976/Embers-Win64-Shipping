// 函数: sub_142345880
// 地址: 0x142345880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, sx.q(arg1[1].d) << 3, sx.q(*(arg1 + 0xc)) << 3)
int64_t* rcx_1 = arg2[1]
int32_t rax_4
int32_t arg_8

if ((arg2[5].b & 1) == 0)
    arg_8 = arg1[1].d
    int32_t* rdx_7 = *rcx_1
    
    if (&rdx_7[1] u> rcx_1[1])
        int32_t* rdx_8 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            rax_4 = sub_140b54070(arg2, rdx_8, arg5)
        else
            rax_4 = (*(*arg2 + 0x150))(arg2, rdx_8, 4)
    else
        rax_4 = *rdx_7
        arg_8 = rax_4
        *rcx_1 += 4
    
    int32_t rbx_1 = 0
    
    if (arg_8 s> 0)
        int64_t** r14_2 = nullptr
        
        do
            rax_4, arg5 = sub_142345a50(*(r14_2 + *arg1), arg2, arg3, rbx_1, arg5, arg4)
            rbx_1 += 1
            r14_2 = &r14_2[1]
        while (rbx_1 s< arg_8)
else
    int32_t rbx = 0
    arg_8 = 0
    int32_t* rdx_2 = *rcx_1
    
    if (&rdx_2[1] u> rcx_1[1])
        int32_t* rdx_3 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_3, arg5)
        else
            (*(*arg2 + 0x150))(arg2, rdx_3, 4)
    else
        arg_8 = *rdx_2
        *rcx_1 += 4
    
    int512_t zmm1 = sub_142334b20(arg1, arg_8)
    rax_4 = arg_8
    int32_t r15_1 = 0
    
    if (rax_4 s> 0)
        do
            int64_t* rax_5 = j_sub_140a82f30(0x410)
            int64_t* r14
            
            if (rax_5 == 0)
                r14 = nullptr
            else
                r14 = sub_14232a730(rax_5)
            
            int64_t rbp_1 = sx.q(arg1[1].d)
            int32_t rax_7 = (rbp_1 + 1).d
            arg1[1].d = rax_7
            
            if (rax_7 s> *(arg1 + 0xc))
                sub_140638870(arg1)
            
            r15_1 += 1
            *(*arg1 + (rbp_1 << 3)) = r14
            rax_4 = arg_8
        while (r15_1 s< rax_4)
    
    if (rax_4 s> 0)
        int64_t** r14_1 = nullptr
        int64_t rax_9
        
        do
            rax_9, zmm1 = sub_142345a50(*(r14_1 + *arg1), arg2, arg3, rbx, zmm1, arg4)
            rbx += 1
            r14_1 = &r14_1[1]
        while (rbx s< arg_8)
        
        return rax_9
return rax_4
