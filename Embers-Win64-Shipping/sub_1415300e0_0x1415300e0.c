// 函数: sub_1415300e0
// 地址: 0x1415300e0
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
    sub_1405c5510(arg2, rax_4)
    rax_4 = arg_8

int64_t rdi = sx.q(arg2[1].d)

if (rax_4 s> rdi.d)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140679a80(arg2)
    
    memset(rdi + *arg2, 0, sx.q(rax_4 - rdi.d))
    rax_4 = arg_8
else if (rax_4 s< rdi.d)
    int32_t rcx_6 = rdi.d
    
    if (rcx_6 != rax_4)
        arg2[1].d = rdi.d - (rcx_6 - rax_4)
        sub_1405dac10(arg2)
        rax_4 = arg_8

int32_t rdi_2 = 0

if (rax_4 s> 0)
    int64_t rsi_3 = 0
    
    do
        int64_t* rcx_9 = arg1[1]
        char* r15_1 = *arg2
        int32_t* rdx_4 = *rcx_9
        
        if (&rdx_4[1] u> rcx_9[1])
            int32_t rax_7
            rax_7.b = r15_1[rsi_3] != 0
            int32_t arg_10 = rax_7
            (*(*arg1 + 0x150))(arg1, &arg_10, 4)
            r15_1[rsi_3] = arg_10 != 0
        else
            void* rax_5
            rax_5.b = *rdx_4 != 0
            r15_1[rsi_3] = rax_5.b
            int64_t* rax_6 = arg1[1]
            *rax_6 += 4
        
        rdi_2 += 1
        rsi_3 += 1
    while (rdi_2 s< arg_8)

return arg1
