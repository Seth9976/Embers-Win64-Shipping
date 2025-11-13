// 函数: sub_142a68140
// 地址: 0x142a68140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int32_t result

if (arg1[0x1d].b == 0)
    result, arg2 = sub_142a6c980(arg1, arg2)

if (arg1[0x1d].b != 0 || *rdi s<= 0)
    uint128_t __saved_zmm7_1 = arg4
    uint128_t __saved_zmm8_1 = arg5
    int32_t rax_1 = sub_142a67fa0(arg1, arg2)
    int32_t rdx = *(arg1 + 0xd4)
    arg5.q = _mm_cvtepi32_pd(zx.q(rax_1 - 0x253d8c)).q f* 86400000.0
    int32_t rcx_1
    
    if (rdx s>= 2)
        int32_t rax_3 = *(arg1 + 0xa4)
        rcx_1 = 0
        
        if (rax_3 s> 0)
            rcx_1 = rax_3
        
        int32_t rax_4 = arg1[0x15].d
        
        if (rax_4 s> rcx_1)
            rcx_1 = rax_4
        
        int32_t rax_5 = *(arg1 + 0xac)
        
        if (rax_5 s> rcx_1)
            rcx_1 = rax_5
        
        int32_t rax_6 = arg1[0x16].d
        
        if (rax_6 s> rcx_1)
            rcx_1 = rax_6
        
        int32_t rax_7 = *(arg1 + 0xb4)
        
        if (rax_7 s> rcx_1)
            rcx_1 = rax_7
        
        int32_t rax_8 = arg1[0x17].d
        
        if (rax_8 s> rcx_1)
            rcx_1 = rax_8
    
    if (rdx s< 2 || rcx_1 s> rdx)
        arg4 = sub_142a68090(arg1)
    else
        arg4 = _mm_cvtepi32_pd(zx.q(arg1[0xc].d))
    
    if (*(arg1 + 0xbc) s>= 2 || arg1[0x18].d s>= 2)
        result = *(arg1 + 0x4c) + arg1[9].d
        arg3.q = arg4.q f+ arg5.q
    label_142a6830f:
        arg3.q = arg3.q f- _mm_cvtepi32_pd(zx.q(result)).q
    label_142a68313:
        
        if (*rdi s<= 0)
            arg1[0x1c] = arg3.q
    else
        if (arg1[0x1d].b != 0 && *(arg1 + 0xfc) != 2)
            arg3.q = arg4.q f+ arg5.q
            result, arg3 = sub_142a68590(arg1, arg5, arg4.q, rdi)
            goto label_142a6830f
        
        int32_t rax_9 = sub_142a68590(arg1, arg5, arg4.q, rdi)
        int64_t* rcx_5 = arg1[0x1e]
        arg4.q = arg4.q f+ arg5.q
        int64_t rdx_1 = *rcx_5
        arg4.q = arg4.q f- _mm_cvtepi32_pd(zx.q(rax_9))
        int32_t arg_8
        int32_t arg_18
        result = (*(rdx_1 + 0x18))(rcx_5, rdx_1, 0, &arg_18, &arg_8, rdi, __saved_zmm8_1, 
            __saved_zmm7_1, arg3)
        
        if (*rdi s<= 0)
            if (rax_9 == arg_8 + arg_18)
                arg3 = arg4
                goto label_142a68313
            
            if (arg1[0x1d].b != 0)
                int64_t arg_20
                result, arg3 = sub_142a6a190(arg1, arg4, &arg_20, rdi)
                
                if (*rdi s<= 0)
                    if (result.b != 0)
                        arg3 = zx.o(arg_20)
                    
                    goto label_142a68313
            else
                *rdi = 1

return result
