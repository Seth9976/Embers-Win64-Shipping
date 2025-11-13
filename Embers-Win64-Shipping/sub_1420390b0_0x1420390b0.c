// 函数: sub_1420390b0
// 地址: 0x1420390b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].d = 0
sub_140b136c0(&arg1[2])
arg1[6].d = 0
sub_140b4fc80(&arg1[7])
arg1[0xa].d = 0

if (*(arg1 + 0x54) != 0)
    sub_1405947f0(&arg1[9], 0)

int64_t* rcx_3 = arg2[1]
int32_t* rdx = *rcx_3

if (&rdx[1] u> rcx_3[1])
    int32_t* rdx_1 = arg1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_1, arg3)
    else
        (*(*arg2 + 0x150))(arg2, rdx_1, 4)
else
    *arg1 = *rdx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4

if (*arg1 == 0x53415647)
    int64_t* rcx_5 = arg2[1]
    int32_t* rdx_2 = *rcx_5
    
    if (&rdx_2[1] u<= rcx_5[1])
        *(arg1 + 4) = *rdx_2
        int64_t* rax_6 = arg2[1]
        *rax_6 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, arg1 + 4, arg3)
    else
        (*(*arg2 + 0x150))(arg2, arg1 + 4, 4)
    
    int64_t* rcx_7 = arg2[1]
    int32_t* rdx_4 = *rcx_7
    
    if (&rdx_4[1] u<= rcx_7[1])
        arg1[1].d = *rdx_4
        int64_t* rax_10 = arg2[1]
        *rax_10 += 4
    else if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, &arg1[1], arg3)
    else
        (*(*arg2 + 0x150))(arg2, &arg1[1], 4)
    
    arg3 = sub_140b0c2e0(arg2, &arg1[2], arg3)
    (*(*arg2 + 0xe0))(arg2, zx.q(arg1[1].d))
    (*(*arg2 + 0xf0))(arg2, &arg1[2])
    
    if (*(arg1 + 4) s>= 2)
        int64_t* rcx_12 = arg2[1]
        int32_t* rdx_9 = *rcx_12
        
        if (&rdx_9[1] u<= rcx_12[1])
            arg1[6].d = *rdx_9
            int64_t* rax_16 = arg2[1]
            *rax_16 += 4
        else if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, &arg1[6], arg3)
        else
            (*(*arg2 + 0x150))(arg2, &arg1[6], 4)
        
        arg3 = sub_140b53480(&arg1[7], arg3, arg1[6].d)
        (*(*arg2 + 0x50))(arg2, &arg1[7])
else
    arg2[0x12] = 0
    *(arg1 + 4) = 1

return sub_140a1d9d0(arg2, &arg1[9], arg3) __tailcall
