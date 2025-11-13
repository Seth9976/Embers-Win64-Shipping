// 函数: sub_141cd7860
// 地址: 0x141cd7860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8

if ((arg1[5].b & 1) == 0)
    arg_8 = *(*arg2 + 8)
    int64_t* rcx_6 = arg1[1]
    int32_t* rdx_3 = *rcx_6
    
    if (&rdx_3[1] u> rcx_6[1])
        int32_t* rdx_4 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_4, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_4, 4)
    else
        arg_8 = *rdx_3
        *rcx_6 += 4
else
    int64_t* rcx = arg1[1]
    int32_t* rdx = *rcx
    
    if (&rdx[1] u> rcx[1])
        int32_t* rdx_1 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_1, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdx_1, 4)
    else
        arg_8 = *rdx
        *rcx += 4
    
    int64_t* arg_18
    int64_t* rax_4 = (&data_1432191f0)[zx.q(arg_8)](&arg_18, &data_1432191f0)
    
    if (arg2 != rax_4)
        int64_t* rcx_3 = *arg2
        *arg2 = *rax_4
        *rax_4 = 0
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
    
    int64_t* rcx_4 = arg_18
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
int64_t* rcx_8 = *arg2
(*(*rcx_8 + 0x30))(rcx_8, arg1)
return arg1
