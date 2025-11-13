// 函数: sub_1420f56e0
// 地址: 0x1420f56e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408dbe80(arg1, arg2, arg3)
int64_t* r8 = arg1[1]
int32_t* rcx = *r8

if (&rcx[1] u<= r8[1])
    arg2[0x10] = *rcx
    int64_t* rax_2 = arg1[1]
    *rax_2 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x10], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x10], 4)

int64_t* rcx_2 = arg1[1]
int32_t* r8_1 = *rcx_2

if (&r8_1[1] u<= rcx_2[1])
    arg2[0x11] = *r8_1
    int64_t* rax_6 = arg1[1]
    *rax_6 += 4
else if ((*(arg1 + 0x29) & 0x20) != 0)
    sub_140b54070(arg1, &arg2[0x11], arg3)
else
    (*(*arg1 + 0x150))(arg1, &arg2[0x11], 4)

(*(*arg1 + 8))(arg1, sx.q(arg2[0x14]) * 2, sx.q(arg2[0x15]) * 2)
int32_t rax_9

if ((arg1[5].b & 1) == 0)
    rax_9 = arg2[0x14]
else
    rax_9 = 0

int64_t* rcx_5 = arg1[1]
int32_t arg_8 = rax_9
int32_t* rdx_4 = *rcx_5

if (&rdx_4[1] u> rcx_5[1])
    int32_t* rdx_5 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_5, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_5, 4)
else
    arg_8 = *rdx_4
    *rcx_5 += 4

int32_t rcx_9 = arg_8

if (rcx_9 != 0)
    char rax_14 = *(arg1 + 0x29)
    
    if ((rax_14 & 1) == 0 && rcx_9 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rcx_9 s<= 0x800000))
        arg2[0x14] = rcx_9
        
        if ((arg1[5].b & 1) != 0)
            sub_1405a4c70(&arg2[0x12], rcx_9, arg2[0x15])
            rcx_9 = arg2[0x14]
        
        (*(*arg1 + 0x150))(arg1, *(arg2 + 0x48), sx.q(rcx_9) * 2)
        return arg1
    
    *(arg1 + 0x29) = rax_14 | 1
else if ((arg1[5].b & 1) != 0)
    arg2[0x14] = rcx_9
    
    if (arg2[0x15] != rcx_9)
        sub_1405947f0(&arg2[0x12], 0)

return arg1
