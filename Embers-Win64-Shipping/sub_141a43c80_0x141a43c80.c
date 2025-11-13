// 函数: sub_141a43c80
// 地址: 0x141a43c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
int32_t i_1 = 0

while (i s>= 0)
    if (i s>= *(arg1 + 0x18))
        break
    
    if (i_1 s< 0)
        break
    
    if (i_1 s>= *(arg2 + 0x18))
        break
    
    int128_t zmm0 = *(*(arg1 + 0x10) + sx.q(i) * 0x10)
    int32_t r9 = zmm0.12:8.d
    int128_t zmm1 = *(*(arg2 + 0x10) + sx.q(i_1) * 0x10)
    result = zmm0.q
    int64_t rcx_4 = zmm1.q
    uint32_t rdx_1 = (result u>> 0x20).d
    uint32_t r8_1 = (rcx_4 u>> 0x20).d
    int32_t r10_1 = zmm1.12:8.d
    bool cond:0_1
    bool cond:1_1
    
    if (rdx_1 != r8_1)
        cond:0_1 = rcx_4.d u> result.d
        cond:1_1 = rcx_4.d u< result.d
    else
        cond:0_1 = rcx_4.d u> result.d
        cond:1_1 = rcx_4.d u< result.d
        
        if (rcx_4.d == result.d)
            if (r9 == r10_1)
                i += 1
                i_1 += 1
                continue
            
            cond:0_1 = rcx_4.d u> result.d
            cond:1_1 = rcx_4.d u< result.d
    
    if (not(cond:1_1))
        if (cond:0_1)
        label_141a43d4c:
            
            if (arg3 != 0)
                int64_t rbp_1 = sx.q(arg3[1].d)
                int32_t rax_2 = (rbp_1 + 1).d
                arg3[1].d = rax_2
                
                if (rax_2 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                result = *arg3
                *(result + rbp_1 * 0x10) = zmm0
            
            i += 1
            continue
        else if (r8_1 u>= rdx_1 && (r8_1 != rdx_1 || r10_1 u>= r9))
            goto label_141a43d4c
    
    if (arg4 != 0)
        int64_t rbp_2 = sx.q(arg4[1].d)
        int32_t rax_3 = (rbp_2 + 1).d
        arg4[1].d = rax_3
        
        if (rax_3 s> *(arg4 + 0xc))
            sub_1405a4f90(arg4)
        
        result = *arg4
        *(result + rbp_2 * 0x10) = zmm1
    
    i_1 += 1

if (arg4 != 0)
    while (i_1 s>= 0)
        if (i_1 s>= *(arg2 + 0x18))
            break
        
        int64_t r15_1 = sx.q(arg4[1].d)
        int128_t* rbp_5 = (sx.q(i_1) << 4) + *(arg2 + 0x10)
        int32_t rax_4 = (r15_1 + 1).d
        arg4[1].d = rax_4
        
        if (rax_4 s> *(arg4 + 0xc))
            sub_1405a4f90(arg4)
        
        i_1 += 1
        *(*arg4 + r15_1 * 0x10) = *rbp_5
    
    result = sub_141a2beb0(*arg4, arg4[1].d, 0xe, arg5)

if (arg3 == 0)
    return result

while (i s>= 0)
    if (i s>= *(arg1 + 0x18))
        break
    
    int64_t rbp_6 = sx.q(arg3[1].d)
    int128_t* rdi_2 = (sx.q(i) << 4) + *(arg1 + 0x10)
    int32_t rax_6 = (rbp_6 + 1).d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4f90(arg3)
    
    i += 1
    *(*arg3 + rbp_6 * 0x10) = *rdi_2

return sub_141a2beb0(*arg3, arg3[1].d, 0xc, arg5)
