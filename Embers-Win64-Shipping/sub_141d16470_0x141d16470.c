// 函数: sub_141d16470
// 地址: 0x141d16470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
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

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_1405c5570(arg2, rax_4)
    rax_4 = arg_8

int32_t rcx_3 = arg2[1].d

if (rax_4 s> rcx_3)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
        rax_4 = arg_8
else if (rax_4 s< rcx_3 && rcx_3 != rax_4)
    arg2[1].d = rax_4
    sub_1405c53d0(arg2)
    rax_4 = arg_8

int32_t rsi = 0

if (rax_4 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_7 = arg1[1]
        int32_t* rdi_2 = *arg2 + r14_1
        int32_t* rdx_6 = *rcx_7
        
        if (&rdx_6[1] u<= rcx_7[1])
            *rdi_2 = *rdx_6
            int64_t* rax_7 = arg1[1]
            *rax_7 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2, 4)
        
        int64_t* rcx_9 = arg1[1]
        int32_t* r8_1 = *rcx_9
        
        if (&r8_1[1] u<= rcx_9[1])
            rdi_2[1] = *r8_1
            int64_t* rax_11 = arg1[1]
            *rax_11 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_2[1], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_2[1], 4)
        
        rsi += 1
        r14_1 += 8
    while (rsi s< arg_8)

return arg1
