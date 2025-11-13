// 函数: sub_1422b6d60
// 地址: 0x1422b6d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 3, sx.q(*(arg2 + 0xc)) << 3)
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

int32_t rax_6 = arg_8

if (rax_6 == 0)
    if ((arg1[5].b & 1) != 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_141a148e0(arg2, 0)
    
    return arg1

char rcx_3 = *(arg1 + 0x29)

if ((rcx_3 & 1) != 0 || rax_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x200000))
    *(arg1 + 0x29) = rcx_3 | 1
    return arg1

if ((arg1[5].b & 1) == 0)
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        do
            void* rcx_11 = *arg2
            
            if ((rcx_11.b & 1) != 0)
                rcx_11 = (rcx_11 s>> 1) + arg2
            
            void* rdi_3 = rcx_11 + (sx.q(i) << 3)
            sub_1409ac740(arg1, rdi_3, arg3)
            sub_1409ac740(arg1, rdi_3 + 4, arg3)
            i += 1
        while (i s< arg2[1].d)
    
    return arg1

arg2[1].d = 0

if (*(arg2 + 0xc) != rax_6)
    sub_141a148e0(arg2, rax_6)
    rax_6 = arg_8

int32_t r14 = 0

if (rax_6 s> 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_7 = (rdi_1 + 1).d
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_1407c3d10(arg2, rdi_1.d)
        
        void* rcx_7 = *arg2
        
        if ((rcx_7.b & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg2
        
        int32_t* rdi_2 = rcx_7 + (rdi_1 << 3)
        
        if (rdi_2 == 0)
            rdi_2 = nullptr
        else
            *rdi_2 = 0
        
        sub_1409ac740(arg1, rdi_2, arg3)
        sub_1409ac740(arg1, &rdi_2[1], arg3)
        r14 += 1
    while (r14 s< arg_8)

return arg1
