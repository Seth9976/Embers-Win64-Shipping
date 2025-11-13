// 函数: sub_142429de0
// 地址: 0x142429de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[1] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[1], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[1], 4)

int64_t* rcx_4 = arg1[1]
int32_t* r8_2 = *rcx_4

if (&r8_2[1] u<= rcx_4[1])
    arg2[2] = *r8_2
    int64_t* rax_10 = arg1[1]
    *rax_10 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

(*(*arg1 + 8))(arg1, sx.q(arg2[6]), sx.q(arg2[7]))
int32_t rax_13

if ((arg1[5].b & 1) == 0)
    rax_13 = arg2[6]
else
    rax_13 = 0

int64_t* rcx_7 = arg1[1]
int32_t arg_8 = rax_13
int32_t* rdx_3 = *rcx_7

if (&rdx_3[1] u> rcx_7[1])
    int32_t* rdx_4 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_4, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_4, 4)
else
    arg_8 = *rdx_3
    *rcx_7 += 4

int32_t rcx_11 = arg_8

if (rcx_11 != 0)
    char rax_18 = *(arg1 + 0x29)
    
    if ((rax_18 & 1) == 0 && rcx_11 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rcx_11 s<= 0x1000000))
        arg2[6] = rcx_11
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(&arg2[4], rcx_11, arg2[7])
            rcx_11 = arg2[6]
        
        (*(*arg1 + 0x150))(arg1, *(arg2 + 0x10), sx.q(rcx_11))
        return arg1
    
    *(arg1 + 0x29) = rax_18 | 1
else if ((arg1[5].b & 1) != 0)
    arg2[6] = rcx_11
    
    if (arg2[7] != rcx_11)
        sub_1405c5510(&arg2[4], 0)

return arg1
