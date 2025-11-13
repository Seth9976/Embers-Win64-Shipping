// 函数: sub_142429fb0
// 地址: 0x142429fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = arg1[1]
int16_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    *arg2 = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 2
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54000(arg1, arg2, arg3)
else
    (*(*arg1 + 0x150))(arg1, arg3, 2)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    *(arg2 + 4) = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[2], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[2], 4)

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x18)) << 2, sx.q(*(arg2 + 0x1c)) << 2)
int32_t rax_9

if ((arg1[5].b & 1) == 0)
    rax_9 = *(arg2 + 0x18)
else
    rax_9 = 0

int64_t* rcx_5 = arg1[1]
int32_t arg_8 = rax_9
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
    char rax_14 = *(arg1 + 0x29)
    
    if ((rax_14 & 1) == 0 && rcx_9 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rcx_9 s<= 0x400000))
        *(arg2 + 0x18) = rcx_9
        
        if ((arg1[5].b & 1) != 0)
            sub_142442600(&arg2[4], rcx_9, *(arg2 + 0x1c))
            rcx_9 = *(arg2 + 0x18)
        
        (*(*arg1 + 0x150))(arg1, &arg2[4], sx.q(rcx_9) << 2)
        return arg1
    
    *(arg1 + 0x29) = rax_14 | 1
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x18) = rcx_9
    
    if (*(arg2 + 0x1c) != rcx_9)
        sub_142442740(&arg2[4], 0)

return arg1
