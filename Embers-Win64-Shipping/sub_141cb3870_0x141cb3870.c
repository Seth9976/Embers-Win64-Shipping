// 函数: sub_141cb3870
// 地址: 0x141cb3870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int64_t arg_10 = 0
int64_t* rdx = *rcx

if (&rdx[1] u> rcx[1])
    int64_t* rdx_1 = &arg_10
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b540d0(arg1, rdx_1, arg2)
    else
        (*(*arg1 + 0x150))(arg1, rdx_1, 8)
else
    arg_10 = *rdx
    *rcx += 8

int64_t* result = (*(*arg1 + 0x28))(arg1)
int64_t rcx_3 = arg_10

if (rcx_3 s> result)
label_141cb3a7c:
    result.b = 0
else if (rcx_3 s<= 0)
    result.b = 1
else
    int64_t rax_5 = (*(*arg1 + 0x20))(arg1)
    int64_t* rcx_5 = arg1[0x12]
    int64_t r8_1 = *rcx_5
    (*(r8_1 + 0x178))(rcx_5, arg_10, r8_1)
    int64_t* rdx_3 = arg1[1]
    int32_t arg_8 = 0
    int32_t* r8_2 = *rdx_3
    
    if (&r8_2[1] u> rdx_3[1])
        int32_t* rdx_4 = &arg_8
        
        if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdx_4, arg2)
        else
            (*(*arg1 + 0x150))(arg1, rdx_4, 4)
    else
        arg_8 = *r8_2
        *rdx_3 += 4
    
    if ((*(arg1 + 0x29) & 1) != 0 || arg_8 s< 0)
    label_141cb3a7c_1:
        result.b = 0
    else
        int64_t rax_8 = (*(*arg1 + 0x28))(arg1)
        int64_t rdx_5 = *arg1
        int64_t rax_9 = (*(rdx_5 + 0x20))(arg1, rdx_5)
        int32_t rcx_11 = arg_8
        int64_t rax_11
        int32_t rdx_6
        rdx_6:rax_11 = sx.o(rax_8 - rax_9)
        int32_t rax_13 = ((rax_11 + (zx.q(rdx_6) & 3)) s>> 2).d
        
        if (rcx_11 s<= rax_13)
            rax_13 = rcx_11
        
        if (rax_13 s> *(arg1 + 0xac))
            sub_1405dadb0(&arg1[0x14], rax_13)
            rcx_11 = arg_8
        
        int32_t r14_1 = 0
        
        if (rcx_11 s> 0)
            do
                int32_t var_848 = 0
                char var_844_1 = 0
                int32_t var_42_1 = 0
                sub_140b5b600(arg1, &var_848, arg2)
                
                if ((*(arg1 + 0x29) & 1) != 0)
                    goto label_141cb3a7c_1
                
                void arg_18
                int64_t* rax_14
                rax_14, arg2 = sub_140b57e80(&arg_18, &var_848)
                int64_t rbp_1 = sx.q(arg1[0x15].d)
                int32_t rbx_3 = *rax_14
                int32_t rax_15 = (rbp_1 + 1).d
                arg1[0x15].d = rax_15
                
                if (rax_15 s> *(arg1 + 0xac))
                    sub_1405a4cf0(&arg1[0x14])
                
                r14_1 += 1
                *(arg1[0x14] + (rbp_1 << 2)) = rbx_3
            while (r14_1 s< arg_8)
        
        int64_t* rcx_16 = arg1[0x12]
        (*(*rcx_16 + 0x178))(rcx_16, rax_5)
        result.b = 1

return result
