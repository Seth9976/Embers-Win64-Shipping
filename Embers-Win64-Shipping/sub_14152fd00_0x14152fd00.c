// 函数: sub_14152fd00
// 地址: 0x14152fd00
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

int32_t rax_4 = arg_8

if (rax_4 s> *(arg2 + 0xc))
    sub_14083ad30(arg2, rax_4)
    rax_4 = arg_8

int32_t rcx_3 = arg2[1].d

if (rax_4 s> rcx_3)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_14083a7e0(arg2)
        rax_4 = arg_8
else if (rax_4 s< rcx_3 && rcx_3 != rax_4)
    arg2[1].d = rax_4
    sub_140775970(arg2)
    rax_4 = arg_8

int32_t rbp = 0

if (rax_4 s> 0)
    int64_t r14_1 = 0
    
    do
        int64_t i_1 = 3
        int32_t* rdi_2 = *arg2 + r14_1
        int64_t i
        
        do
            int64_t* rcx_7 = arg1[1]
            int32_t* rdx_5 = *rcx_7
            
            if (&rdx_5[1] u<= rcx_7[1])
                *rdi_2 = *rdx_5
                int64_t* rax_7 = arg1[1]
                *rax_7 += 4
            else if ((*(arg1 + 0x29) & 0x20) != 0)
                sub_140b54070(arg1, rdi_2, arg3)
            else
                (*(*arg1 + 0x150))(arg1, rdi_2, 4)
            
            rdi_2 = &rdi_2[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbp += 1
        r14_1 += 0xc
    while (rbp s< arg_8)

return arg1
