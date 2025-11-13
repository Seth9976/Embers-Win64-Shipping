// 函数: sub_141e39960
// 地址: 0x141e39960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(*(arg2 + 0x48)) << 3, sx.q(*(arg2 + 0x4c)) << 3)
int32_t i = 0
int32_t rax_1 = 0

if ((arg1[5].b & 1) == 0)
    rax_1 = *(arg2 + 0x48)

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

if (rax_6 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) != 0 || rax_6 s<= 0)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x200000)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        *(arg2 + 0x48) = 0
        
        if (*(arg2 + 0x4c) != rax_6)
            sub_140775b80(arg2, rax_6)
            rax_6 = arg_8
        
        int32_t r14 = 0
        
        if (rax_6 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(*(arg2 + 0x48))
            int32_t rax_7 = (rbp_1 + 1).d
            *(arg2 + 0x48) = rax_7
            
            if (rax_7 s> *(arg2 + 0x4c))
                sub_140809370(arg2, rbp_1.d)
            
            void* rax_8 = *(arg2 + 0x40)
            void* rcx_6 = arg2
            
            if (rax_8 != 0)
                rcx_6 = rax_8
            
            void* rdx_6 = rcx_6 + (rbp_1 << 3)
            
            if (rdx_6 == 0)
                rdx_6 = nullptr
            else
                *rdx_6 = 0
            
            (*(*arg1 + 0x140))(arg1, rdx_6)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    *(arg2 + 0x48) = rax_6
    
    if (rax_6 s> 0)
        do
            void* rax_12 = *(arg2 + 0x40)
            void* rcx_8 = arg2
            int64_t r8_2 = *arg1
            
            if (rax_12 != 0)
                rcx_8 = rax_12
            
            (*(r8_2 + 0x140))(arg1, rcx_8 + (sx.q(i) << 3), r8_2)
            i += 1
        while (i s< *(arg2 + 0x48))
else if ((arg1[5].b & 1) != 0)
    *(arg2 + 0x48) = 0
    
    if (*(arg2 + 0x4c) != 0)
        sub_140775b80(arg2, 0)

return arg1
