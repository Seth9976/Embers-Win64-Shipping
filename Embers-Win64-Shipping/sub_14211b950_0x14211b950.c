// 函数: sub_14211b950
// 地址: 0x14211b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x28, sx.q(*(arg2 + 0xc)) * 0x28, r9)
int32_t i = 0
int32_t rax_2 = 0

if ((arg1[5].b & 1) == 0)
    rax_2 = arg2[1].d

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_2
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

int32_t rax_7 = arg_8

if (rax_7 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_7 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0x66666)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rax_7)
            sub_1405c5660(arg2, rax_7)
            rax_7 = arg_8
        
        int32_t r14 = 0
        
        if (rax_7 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbp_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_1405c4ec0(arg2)
            
            int64_t* rdx_6 = *arg2 + rbp_1 * 0x28
            
            if (rdx_6 == 0)
                rdx_6 = nullptr
            else
                *rdx_6 = 0
                rdx_6[1].b = 2
                *(rdx_6 + 0xc) = 0xffffffff
                rdx_6[2].b = 0
                __builtin_memset(rdx_6 + 0x14, 0, 0x11)
                int64_t arg_10 = 0
            
            sub_14211b270(arg1, rdx_6)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_7
    
    if (rax_7 s> 0)
        do
            sub_14211b270(arg1, *arg2 + sx.q(i) * 0x28)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405c5660(arg2, 0)

return arg1
