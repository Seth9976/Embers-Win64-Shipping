// 函数: sub_141f51e60
// 地址: 0x141f51e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 8))(arg1, sx.q(arg2[1].d) << 5, sx.q(*(arg2 + 0xc)) << 5)
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
            sub_1405a51b0(arg2, 0)
    
    return arg1

char rcx_3 = *(arg1 + 0x29)

if ((rcx_3 & 1) != 0 || rax_6 s<= 0 || ((*(arg1 + 0x2b) & 8) != 0 && rax_6 s> 0x80000))
    *(arg1 + 0x29) = rcx_3 | 1
    return arg1

int32_t arg_10

if ((arg1[5].b & 1) == 0)
    arg2[1].d = rax_6
    
    if (rax_6 s<= 0)
        return arg1
    
    int64_t r15 = 0
    
    do
        int32_t* rdi_5 = *arg2 + r15
        sub_1408d9160(arg1, rdi_5, arg3)
        int32_t rax_14
        rax_14, arg3 = sub_140b4e7c0(arg1, &data_1439a9478)
        
        if (rax_14 s>= 0x1a)
            sub_1409ac860(arg1, &rdi_5[4], arg3)
        else
            sub_1409ac740(arg1, &arg_10, arg3)
            arg3.o = zx.o(0)
            *(rdi_5 + 0x10) = __addps_xmmps_memps(
                __mulps_xmmps_memps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_10), 0), 0)), 
                    data_143280740), 
                data_142d3f7e0)
        
        int64_t* rcx_14 = arg1[1]
        int32_t* r8_3 = *rcx_14
        
        if (&r8_3[1] u<= rcx_14[1])
            rdi_5[3] = *r8_3
            int64_t* rax_17 = arg1[1]
            *rax_17 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, &rdi_5[3], arg3)
        else
            (*(*arg1 + 0x150))(arg1, &rdi_5[3], 4)
        
        i += 1
        r15 += 0x20
    while (i s< arg2[1].d)
    
    return arg1

arg2[1].d = 0

if (*(arg2 + 0xc) != rax_6)
    sub_1405a51b0(arg2, rax_6)
    rax_6 = arg_8

int32_t rbp = 0

if (rax_6 s> 0)
    do
        int64_t rdi_1 = sx.q(arg2[1].d)
        int32_t rax_7 = (rdi_1 + 1).d
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_1405c4e40(arg2)
        
        int64_t rdi_2 = rdi_1 << 5
        int64_t rdi_3 = rdi_2 + *arg2
        
        if (rdi_2 == neg.q(*arg2))
            rdi_3 = 0
        else
            __builtin_memset(rdi_3, 0, 0x1c)
            *(rdi_3 + 0x1c) = 0x3f800000
        
        sub_1408d9160(arg1, rdi_3, arg3)
        int32_t rax_8
        rax_8, arg3 = sub_140b4e7c0(arg1, &data_1439a9478)
        
        if (rax_8 s>= 0x1a)
            sub_1409ac860(arg1, rdi_3 + 0x10, arg3)
        else
            sub_1409ac740(arg1, &arg_10, arg3)
            arg3.o = zx.o(0)
            *(rdi_3 + 0x10) = __addps_xmmps_memps(
                __mulps_xmmps_memps(
                    _mm_cvtepi32_ps(_mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(arg_10), 0), 0)), 
                    data_143280740), 
                data_142d3f7e0)
        
        int64_t* rcx_9 = arg1[1]
        int32_t* r8_2 = *rcx_9
        
        if (&r8_2[1] u<= rcx_9[1])
            *(rdi_3 + 0xc) = *r8_2
            int64_t* rax_11 = arg1[1]
            *rax_11 += 4
        else if ((*(arg1 + 0x29) & 0x20) != 0)
            sub_140b54070(arg1, rdi_3 + 0xc, arg3)
        else
            (*(*arg1 + 0x150))(arg1, rdi_3 + 0xc, 4)
        
        rbp += 1
    while (rbp s< arg_8)

return arg1
