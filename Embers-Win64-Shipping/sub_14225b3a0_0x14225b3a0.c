// 函数: sub_14225b3a0
// 地址: 0x14225b3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 2, sx.q(*(arg2 + 0xc)) << 2)
int32_t rax_1

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[1].d
else
    rax_1 = 0

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_1
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rcx_4 = arg_8

if (rcx_4 != 0)
    char rax_5 = *(arg1 + 0x29)
    
    if ((rax_5 & 1) != 0 || rcx_4 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rcx_4 s> 0x400000))
        *(arg1 + 0x29) = rax_5 | 1
    else
        arg2[1].d = rcx_4
        
        if ((arg1[5].b & 1) != 0)
            sub_140638750(arg2, rcx_4, *(arg2 + 0xc))
            rcx_4 = arg2[1].d
        
        (*(*arg1 + 0x150))(arg1, *arg2, sx.q(rcx_4) << 2)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = rcx_4
    
    if (*(arg2 + 0xc) != rcx_4)
        sub_1405dadb0(arg2, 0)

sub_1409acec0(arg1, &arg2[2], arg3)
sub_14222b040(arg1, &arg2[4], arg3)
return arg1
