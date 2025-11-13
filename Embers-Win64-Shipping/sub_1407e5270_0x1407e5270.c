// 函数: sub_1407e5270
// 地址: 0x1407e5270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d), sx.q(*(arg2 + 0xc)))
int32_t rax_1

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[1].d
else
    rax_1 = 0

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_1 = *rcx

if (&rdx_1[1] u> rcx[1])
    int32_t* rdx_2 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_2, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_2, 4)
else
    arg_8 = *rdx_1
    *rcx += 4

int32_t rcx_4 = arg_8

if (rcx_4 != 0)
    char rax_6 = *(arg1 + 0x29)
    
    if ((rax_6 & 1) == 0 && rcx_4 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rcx_4 s<= 0x1000000))
        arg2[1].d = rcx_4
        
        if ((arg1[5].b & 1) != 0)
            sub_1405da9e0(arg2, rcx_4, *(arg2 + 0xc))
            rcx_4 = arg2[1].d
        
        (*(*arg1 + 0x150))(arg1, *arg2, sx.q(rcx_4))
        return arg1
    
    *(arg1 + 0x29) = rax_6 | 1
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = rcx_4
    
    if (*(arg2 + 0xc) != rcx_4)
        sub_1405c5510(arg2, 0)

return arg1
