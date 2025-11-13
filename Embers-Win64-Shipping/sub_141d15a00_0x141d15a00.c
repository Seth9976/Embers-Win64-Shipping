// 函数: sub_141d15a00
// 地址: 0x141d15a00
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
    sub_1413f6f70(arg2, rax_4)
    rax_4 = arg_8

int32_t rcx_3 = arg2[1].d

if (rax_4 s> rcx_3)
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_1405c50f0(arg2)
        rax_4 = arg_8
else if (rax_4 s< rcx_3 && rcx_3 != rax_4)
    arg2[1].d = rax_4
    sub_1405c5460(arg2)
    rax_4 = arg_8

int32_t rdi = 0

if (rax_4 s> 0)
    int64_t rsi_1 = 0
    
    do
        int32_t* rdx_7 = *arg2 + rsi_1
        int64_t* rax_6 = sub_1408d9160(sub_1408d9160(arg1, rdx_7, arg3), &rdx_7[3], arg3)
        int64_t* rcx_9 = rax_6[1]
        char* rdx_9 = *rcx_9
        
        if (&rdx_9[1] u> rcx_9[1])
            (*(*rax_6 + 0x150))(rax_6, &rdx_7[6], 1)
        else
            rdx_7[6].b = *rdx_9
            int64_t* rax_9 = rax_6[1]
            *rax_9 += 1
        
        rdi += 1
        rsi_1 += 0x1c
    while (rdi s< arg_8)

return arg1
