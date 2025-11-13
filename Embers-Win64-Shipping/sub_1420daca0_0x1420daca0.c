// 函数: sub_1420daca0
// 地址: 0x1420daca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u> r8[1])
    int32_t rax_2
    rax_2.b = *arg2 != 0
    int32_t arg_10 = rax_2
    (*(*arg1 + 0x150))(arg1, &arg_10, 4)
    *arg2 = arg_10 != 0
else
    void* rax
    rax.b = *rcx != 0
    *arg2 = rax.b
    int64_t* rax_1 = arg1[1]
    *rax_1 += 4

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 4) = *r8_1
    int64_t* rax_7 = arg1[1]
    *rax_7 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[4], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[4], 4)

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x10)), sx.q(*(arg2 + 0x14)))
int32_t rax_10

if ((arg1[5].b & 1) == 0)
    rax_10 = *(arg2 + 0x10)
else
    rax_10 = 0

int64_t* rcx_5 = arg1[1]
int32_t arg_8 = rax_10
int32_t* rdx_3 = *rcx_5

if (&rdx_3[1] u> rcx_5[1])
    int32_t* rdx_4 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_4, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_4, 4)
else
    arg_8 = *rdx_3
    *rcx_5 += 4

int32_t rcx_9 = arg_8

if (rcx_9 != 0)
    char rax_15 = *(arg1 + 0x29)
    
    if ((rax_15 & 1) == 0 && rcx_9 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rcx_9 s<= 0x1000000))
        *(arg2 + 0x10) = rcx_9
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(&arg2[8], rcx_9, *(arg2 + 0x14))
            rcx_9 = *(arg2 + 0x10)
        
        (*(*arg1 + 0x150))(arg1, *(arg2 + 8), sx.q(rcx_9))
        return arg1
    
    *(arg1 + 0x29) = rax_15 | 1
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x10) = rcx_9
    
    if (*(arg2 + 0x14) != rcx_9)
        sub_1405c5510(&arg2[8], 0)

return arg1
