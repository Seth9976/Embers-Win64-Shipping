// 函数: sub_1418cd780
// 地址: 0x1418cd780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[1]
int32_t arg_8 = arg2[1].d
int32_t* rdx = *rcx
uint64_t rax_2

if (&rdx[1] u> rcx[1])
    int32_t* rdx_1 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        rax_2 = sub_140b54070(arg1, rdx_1, arg3)
    else
        rax_2 = (*(*arg1 + 0x150))(arg1, rdx_1, 4)
else
    rax_2 = zx.q(*rdx)
    arg_8 = rax_2.d
    *rcx += 4

int32_t rbx = 0

if ((arg1[5].b & 1) != 0)
    int32_t rcx_2 = arg_8
    int64_t r14_1 = sx.q(arg2[1].d)
    
    if (rcx_2 s> r14_1.d)
        arg2[1].d = rcx_2
        int32_t i_1 = rcx_2 - r14_1.d
        
        if (rcx_2 s> *(arg2 + 0xc))
            sub_1405a4f90(arg2)
            rcx_2 = arg_8
        
        rax_2 = (r14_1 << 4) + *arg2
        
        if (i_1 != 0)
            int32_t i
            
            do
                *rax_2 = 0
                *(rax_2 + 8) = 0
                rax_2 += 0x10
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_2 = arg_8
    else if (rcx_2 s< r14_1.d)
        int32_t rax_6 = r14_1.d
        rax_2 = zx.q(rax_6 - rcx_2)
        
        if (rax_6 != rcx_2)
            arg2[1].d = r14_1.d - rax_2.d
            rax_2 = sub_1405a5010(arg2)
            rcx_2 = arg_8
    
    if (rcx_2 s> 0)
        int64_t* rax_7
        
        do
            rax_7 = sub_1418d53e0(arg1, (sx.q(rbx) << 4) + *arg2, arg3)
            rbx += 1
        while (rbx s< arg_8)
        
        return rax_7
else if (arg_8 s> 0)
    do
        rax_2 = sub_1418d53e0(arg1, (sx.q(rbx) << 4) + *arg2, arg3)
        rbx += 1
    while (rbx s< arg_8)

return rax_2
