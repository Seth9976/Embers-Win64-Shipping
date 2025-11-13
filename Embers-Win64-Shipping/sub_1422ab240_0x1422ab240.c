// 函数: sub_1422ab240
// 地址: 0x1422ab240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x38) = arg3
char arg_18
sub_141ff4780(&arg_18, arg2, 0, 0x10d)

if ((arg2[5].b & 2) != 0 && *(arg1 + 0x34) u> 0 && *(arg1 + 0x18) == 0)
    int64_t* rcx_1 = arg2[1]
    int32_t arg_8 = 0
    int32_t arg_10 = 0
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u> rcx_1[1])
        int32_t* rdx_1 = &arg_8
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_1, arg4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_1, 4)
    else
        arg_8 = *rdx
        *rcx_1 += 4
    
    int64_t* rcx_3 = arg2[1]
    int32_t* rdx_2 = *rcx_3
    
    if (&rdx_2[1] u<= rcx_3[1])
        int32_t rax_4 = *rdx_2
        arg_10 = rax_4
        *rcx_3 += 4
        return rax_4
    
    int32_t* rdx_3 = &arg_10
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        return sub_140b54070(arg2, rdx_3, arg4)
    
    return (*(*arg2 + 0x150))(arg2, rdx_3, 4)

int64_t* rcx_5 = arg2[1]
int32_t* r8 = *rcx_5

if (&r8[1] u<= rcx_5[1])
    *(arg1 + 0x30) = *r8
    int64_t* rax_10 = arg2[1]
    *rax_10 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, arg1 + 0x30, arg4)
else
    (*(*arg2 + 0x150))(arg2, arg1 + 0x30, 4)

int64_t* rcx_7 = arg2[1]
int32_t* rdx_5 = *rcx_7
int64_t* rax_14

if (&rdx_5[1] u<= rcx_7[1])
    *(arg1 + 0x34) = *rdx_5
    rax_14 = arg2[1]
    *rax_14 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    rax_14 = sub_140b54070(arg2, arg1 + 0x34, arg4)
else
    rax_14 = (*(*arg2 + 0x150))(arg2, arg1 + 0x34, 4)

if ((arg2[5].b & 1) != 0 && *(arg1 + 0x34) u> 0)
    rax_14 = sub_14228fd40(arg1, arg3)

if ((arg_18 & 2) == 0 || *(arg2 + 0x2a) s< 0)
    int64_t* rcx_10 = *(arg1 + 0x18)
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x40))(rcx_10, arg2, 0)
        int64_t* rcx_11 = *(arg1 + 0x18)
        rax_14 = (*(*rcx_11 + 0x28))(rcx_11)
        
        if (rax_14.d s> 0)
            int64_t* rcx_12 = *(arg1 + 0x18)
            rax_14 = (*(*rcx_12 + 0x30))(rcx_12)
            *(arg1 + 0x28) = rax_14

return rax_14
