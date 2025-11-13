// 函数: sub_141e39770
// 地址: 0x141e39770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(arg2[1].d) * 0x30, sx.q(*(arg2 + 0xc)) * 0x30, r9)
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
    
    if ((*(arg1 + 0x2b) & 8) != 0 && rax_7 s> 0x55555)
        *(arg1 + 0x29) = rcx_3 | 1
        return arg1
    
    if ((arg1[5].b & 1) != 0)
        arg2[1].d = 0
        
        if (*(arg2 + 0xc) != rax_7)
            sub_1405a5220(arg2, rax_7)
            rax_7 = arg_8
        
        int32_t r14 = 0
        
        if (rax_7 s<= 0)
            return arg1
        
        do
            int64_t rbp_1 = sx.q(arg2[1].d)
            int32_t rax_8 = (rbp_1 + 1).d
            arg2[1].d = rax_8
            
            if (rax_8 s> *(arg2 + 0xc))
                sub_140638970(arg2)
            
            int64_t rdx_8 = rbp_1 * 0x30
            int32_t* rdx_9 = rdx_8 + *arg2
            
            if (rdx_8 == neg.q(*arg2))
                rdx_9 = nullptr
            else
                arg3.o = data_143f397b0
                int128_t zmm2 = zx.o(0)
                arg3.q = zmm2 u>> 0x40
                *rdx_9 = _mm_shuffle_ps(zx.o(0), arg3.o, 0xc4)
                *(rdx_9 + 0x10) = zmm2
                arg3.o = data_143f397b0
                arg3.o = __andps_xmmxud_memxud(arg3.o, data_143f397c0)
                *(rdx_9 + 0x20) = arg3.o
            
            arg3 = sub_141707780(arg1, rdx_9, arg3)
            r14 += 1
        while (r14 s< arg_8)
        
        return arg1
    
    arg2[1].d = rax_7
    
    if (rax_7 s> 0)
        do
            arg3 = sub_141707780(arg1, sx.q(i) * 0x30 + *arg2, arg3)
            i += 1
        while (i s< arg2[1].d)
else if ((arg1[5].b & 1) != 0)
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0)
        sub_1405a5220(arg2, 0)

return arg1
