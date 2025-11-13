// 函数: sub_142352690
// 地址: 0x142352690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(*(arg2 + 0x20)) * 0x18, sx.q(*(arg2 + 0x24)) * 0x18, r9)
int32_t i = 0
int32_t rax_2 = 0

if ((arg1[5].b & 1) == 0)
    rax_2 = *(arg2 + 0x20)

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
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0xaaaaa)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        *(arg2 + 0x20) = 0
        
        if (*(arg2 + 0x24) != rax_7)
            sub_1409dabf0(arg2, rax_7)
            rax_7 = arg_8
        
        int32_t r14 = 0
        
        if (rax_7 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(*(arg2 + 0x20))
            int32_t rax_8 = (rbp_1 + 1).d
            *(arg2 + 0x20) = rax_8
            
            if (rax_8 s> *(arg2 + 0x24))
                sub_1409da440(arg2, rbp_1.d)
            
            void* rax_9 = *(arg2 + 0x18)
            void* rdx_6 = arg2
            
            if (rax_9 != 0)
                rdx_6 = rax_9
            
            int32_t* rdx_7 = rdx_6 + rbp_1 * 0x18
            
            if (rdx_7 == 0)
                rdx_7 = nullptr
            else
                __builtin_memset(rdx_7, 0, 0x14)
                rdx_7[5].w = 0x100
                *(rdx_7 + 0x16) = 0
            
            arg3 = sub_142352220(arg1, rdx_7, arg3)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    *(arg2 + 0x20) = rax_7
    
    if (rax_7 s> 0)
        do
            void* rax_12 = *(arg2 + 0x18)
            void* rdx_8 = arg2
            
            if (rax_12 != 0)
                rdx_8 = rax_12
            
            arg3 = sub_142352220(arg1, rdx_8 + sx.q(i) * 0x18, arg3)
            i += 1
        while (i s< *(arg2 + 0x20))
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x20) = 0
    
    if (*(arg2 + 0x24) != 0)
        sub_1409dabf0(arg2, 0)

return arg1
