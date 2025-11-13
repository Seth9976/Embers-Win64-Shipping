// 函数: sub_141708040
// 地址: 0x141708040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x28, sx.q(*(arg2 + 0xc)) * 0x28, r9)
int32_t i_1 = 0
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

int32_t rax_6 = arg_8

if (rax_6 == 0)
    if ((arg1[5].b & 1) != 0)
        int32_t i_2 = arg2[1].d
        void*** rax_7 = *arg2
        
        if (i_2 != 0)
            int32_t i
            
            do
                *rax_7 = &data_142fc3cd0
                rax_7 = &rax_7[5]
                i = i_2
                i_2 -= 1
            while (i != 1)
        
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != 0)
            sub_1405c5660(arg2, 0)
    
    return arg1

char rcx_3 = *(arg1 + 0x29)

if ((rcx_3 & 1) != 0 || rax_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x66666))
    *(arg1 + 0x29) = rcx_3 | 1
    return arg1

if ((arg1[5].b & 1) == 0)
    arg2[1].d = rax_6
    
    if (rax_6 s> 0)
        int64_t r14_2 = 0
        
        do
            int64_t* rcx_10 = *arg2 + r14_2
            (*(*rcx_10 + 0x90))(rcx_10, arg1)
            i_1 += 1
            r14_2 += 0x28
        while (i_1 s< arg2[1].d)
else
    sub_141735fb0(arg2, rax_6)
    int32_t r14_1 = 0
    
    if (arg_8 s> 0)
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_9 = (rbp_1 + 1).d
            arg2[1].d = rax_9
            
            if (rax_9 s> *(arg2 + 0xc))
                sub_1405c4ec0(arg2)
            
            int64_t* rcx_8 = *arg2 + rbp_1 * 0x28
            
            if (rcx_8 == 0)
                rcx_8 = nullptr
            else
                rcx_8[1].d = 0x1000202
                *(rcx_8 + 0xc) = 0
                *rcx_8 = &data_142fc47b8
            
            (*(*rcx_8 + 0x90))(rcx_8, arg1)
            r14_1 += 1
        while (r14_1 s< arg_8)

return arg1
