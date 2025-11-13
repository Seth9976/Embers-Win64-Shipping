// 函数: sub_1409ad190
// 地址: 0x1409ad190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 4, sx.q(*(arg2 + 0xc)) << 4)
int32_t i = 0
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = arg2[1].d

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

int32_t rax_5 = arg_8

if (rax_5 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_5 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_5 s> 0x100000)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        int512_t zmm1 = sub_14090b9f0(arg2, rax_5)
        int32_t r14 = 0
        
        if (arg_8 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_7 = (rbp_1 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t rdx_7 = rbp_1 << 4
            uint64_t* rdx_8 = rdx_7 + *arg2
            
            if (rdx_7 == neg.q(*arg2))
                rdx_8 = nullptr
            else
                *rdx_8 = 0
                rdx_8[1] = 0
            
            zmm1 = sub_140992440(arg1, rdx_8, zmm1)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_5
    
    if (rax_5 s> 0)
        do
            arg3 = sub_140992440(arg1, (sx.q(i) << 4) + *arg2, arg3)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    sub_14090b9f0(arg2, 0)

return arg1
