// 函数: sub_141824ee0
// 地址: 0x141824ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 1) == 0)
    int64_t rax_2 = (*(*arg1 + 0x20))()
    int64_t* r8_1 = arg1[1]
    int32_t arg_8 = 0
    int32_t* rdx = *r8_1
    
    if (&rdx[1] u> r8_1[1])
        int32_t* rdx_1 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_8 = *rdx
        *r8_1 += 4
    
    sub_1409ac860(arg1, arg2, arg3)
    int64_t* rcx_4 = arg1[1]
    int32_t* r8_2 = *rcx_4
    
    if (&r8_2[1] u<= rcx_4[1])
        arg2[4] = *r8_2
        int64_t* rax_6 = arg1[1]
        *rax_6 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[4], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[4], 4)
    
    int64_t* rcx_6 = arg1[1]
    int32_t* r8_3 = *rcx_6
    
    if (&r8_3[1] u<= rcx_6[1])
        arg2[5] = *r8_3
        int64_t* rax_10 = arg1[1]
        *rax_10 += 4
    else if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, &arg2[5], arg3)
    else
        (*(*arg1 + 0x150))(arg1, &arg2[5], 4)
    
    if ((*(arg1 + 0x29) & 1) == 0 && (arg1[5].b & 2) != 0)
        int64_t rax_13 = (*(*arg1 + 0x20))(arg1)
        int64_t r8_4 = *arg1
        arg_8 = rax_13.d - rax_2.d
        (*(r8_4 + 0x178))(arg1, rax_2, r8_4)
        int64_t* rdx_6 = arg1[1]
        int32_t* r8_5 = *rdx_6
        
        if (&r8_5[1] u> rdx_6[1])
            int32_t* rdx_7 = &arg_8
            
            if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdx_7, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdx_7, 4)
        else
            arg_8 = *r8_5
            *rdx_6 += 4
        
        (*(*arg1 + 0x178))(arg1, rax_13)
    
    int64_t rdi_3 = zx.q(arg_8) + rax_2
    
    if ((*(*arg1 + 0x20))(arg1) != rdi_3)
        (*(*arg1 + 0x178))(arg1, rdi_3)

return arg1
