// 函数: sub_141782800
// 地址: 0x141782800
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

int32_t rdx_2 = arg_8

if (rdx_2 s> *(arg2 + 0xc))
    sub_1405a5410(arg2, rdx_2)
    rdx_2 = arg_8

sub_1417b54c0(arg2, rdx_2, 1)
int32_t rsi = 0

if (arg_8 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t* rdi_2 = *arg2 + r14_1
        arg3 = sub_141782920(arg1, rdi_2)
        int64_t* rcx_5 = arg1[1]
        int16_t* r8_1 = *rcx_5
        
        if (&r8_1[1] u<= rcx_5[1])
            rdi_2[1].w = *r8_1
            int64_t* rax_6 = arg1[1]
            *rax_6 += 2
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54000(arg1, &rdi_2[1], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_2[1], 2)
        
        rsi += 1
        r14_1 += 0x10
    while (rsi s< arg_8)

sub_14152dc60(arg1, &arg2[2], arg3)
return arg1
