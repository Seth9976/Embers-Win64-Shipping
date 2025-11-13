// 函数: sub_14152ea20
// 地址: 0x14152ea20
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

int32_t rcx_3 = arg_8

if (rcx_3 s> *(arg2 + 0xc))
    sub_1413f6f70(arg2, rcx_3)
    rcx_3 = arg_8

int64_t rsi = sx.q(arg2[1].d)

if (rcx_3 s> rsi.d)
    arg2[1].d = rcx_3
    int32_t i_1 = rcx_3 - rsi.d
    
    if (rcx_3 s> *(arg2 + 0xc))
        sub_1405c50f0(arg2)
        rcx_3 = arg_8
    
    if (i_1 != 0)
        int32_t* rax_6 = rsi * 0x1c + 0x18 + *arg2
        int32_t i
        
        do
            __builtin_memcpy(&rax_6[-5], 
                "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff", 
                0x14)
            *rax_6 = 0xff7fffff
            rax_6 = &rax_6[7]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rcx_3 = arg_8
else if (rcx_3 s< rsi.d)
    int32_t rax_7 = rsi.d
    
    if (rax_7 != rcx_3)
        arg2[1].d = rsi.d - (rax_7 - rcx_3)
        sub_1405c5460(arg2)
        rcx_3 = arg_8

int32_t rsi_2 = 0

if (rcx_3 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_6 = arg1[1]
        int32_t* rdi_3 = *arg2 + r14_1
        int32_t* rdx_4 = *rcx_6
        
        if (&rdx_4[1] u<= rcx_6[1])
            *rdi_3 = *rdx_4
            int64_t* rax_11 = arg1[1]
            *rax_11 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_3, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_3, 4)
        
        arg3 = sub_1417558e0(arg1, &rdi_3[1])
        rsi_2 += 1
        r14_1 += 0x1c
    while (rsi_2 s< arg_8)

return arg1
