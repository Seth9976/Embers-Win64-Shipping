// 函数: sub_141d15d40
// 地址: 0x141d15d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* r8 = *rcx

if (&r8[1] u> rcx[1])
    int32_t* rdx = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx, 4)
else
    arg_8 = *r8
    *rcx += 4

int32_t rdx_1 = arg_8

if (rdx_1 s> *(arg2 + 0xc))
    sub_1405a51b0(arg2, rdx_1)
    rdx_1 = arg_8

r8.b = 1
sub_141d288a0(arg2, rdx_1, r8.b)
int32_t rsi = 0

if (arg_8 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rcx_4 = arg1[1]
        void* rdi_2 = *arg2 + r14_1
        int32_t* rdx_2 = *rcx_4
        
        if (&rdx_2[1] u<= rcx_4[1])
            *rdi_2 = *rdx_2
            int64_t* rax_6 = arg1[1]
            *rax_6 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2, 4)
        
        int64_t* rcx_6 = arg1[1]
        int32_t* r8_1 = *rcx_6
        
        if (&r8_1[1] u<= rcx_6[1])
            *(rdi_2 + 4) = *r8_1
            int64_t* rax_10 = arg1[1]
            *rax_10 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2 + 4, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2 + 4, 4)
        
        int64_t* rcx_8 = arg1[1]
        int32_t* r8_2 = *rcx_8
        
        if (&r8_2[1] u<= rcx_8[1])
            *(rdi_2 + 8) = *r8_2
            int64_t* rax_14 = arg1[1]
            *rax_14 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2 + 8, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2 + 8, 4)
        
        int64_t* rcx_10 = arg1[1]
        int32_t* r8_3 = *rcx_10
        
        if (&r8_3[1] u<= rcx_10[1])
            *(rdi_2 + 0xc) = *r8_3
            int64_t* rax_18 = arg1[1]
            *rax_18 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2 + 0xc, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2 + 0xc, 4)
        
        int64_t* rcx_12 = arg1[1]
        int32_t* r8_4 = *rcx_12
        
        if (&r8_4[1] u<= rcx_12[1])
            *(rdi_2 + 0x10) = *r8_4
            int64_t* rax_22 = arg1[1]
            *rax_22 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_2 + 0x10, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_2 + 0x10, 4)
        
        rsi += 1
        r14_1 += 0x20
    while (rsi s< arg_8)

return arg1
