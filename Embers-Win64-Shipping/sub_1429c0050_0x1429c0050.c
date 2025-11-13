// 函数: sub_1429c0050
// 地址: 0x1429c0050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx_1 = (arg3 - 1) s>> 1
int64_t r14 = arg2
int64_t r10 = arg2
int32_t zmm0
int32_t zmm1

if (arg2 s< rbx_1)
    do
        int64_t rcx = *arg5
        int64_t r8 = r10 * 2
        int64_t r9 = sx.q(*(arg1 + (r8 << 2) + 4))
        r10 = r8 + 2
        int64_t rdi_1 = sx.q(*(arg1 + (r8 << 2) + 8))
        zmm1 = *(rcx + (r9 << 2))
        zmm0 = *(rcx + (rdi_1 << 2))
        
        if (zmm1 f> zmm0)
            r10 = r8 + 1
        else if (not(zmm0 f> zmm1))
            int64_t rcx_1 = arg5[1]
            zmm0 = *(rcx_1 + (rdi_1 << 2))
            zmm1 = *(rcx_1 + (r9 << 2))
            
            if (zmm1 f> zmm0)
                r10 = r8 + 1
            else if (not(zmm0 f> zmm1) && rdi_1.d s< r9.d)
                r10 = r8 + 1
        
        *(arg1 + (arg2 << 2)) = *(arg1 + (r10 << 2))
        arg2 = r10
    while (r10 s< rbx_1)

if (r10 == rbx_1 && (arg3.b & 1) == 0)
    *(arg1 + (arg2 << 2)) = *(arg1 + (arg3 << 2) - 4)
    arg2 = arg3 - 1

if (r14 s< arg2)
    int64_t r8_2
    
    do
        int64_t rcx_4 = *arg5
        int64_t r10_1 = sx.q(*arg4)
        r8_2 = (arg2 - 1) s>> 1
        zmm1 = *(rcx_4 + (r10_1 << 2))
        int64_t r9_1 = sx.q(*(arg1 + (r8_2 << 2)))
        zmm0 = *(rcx_4 + (r9_1 << 2))
        
        if (not(zmm1 f> zmm0))
            if (zmm0 f> zmm1)
                break
            
            int64_t rcx_5 = arg5[1]
            zmm0 = *(rcx_5 + (r9_1 << 2))
            zmm1 = *(rcx_5 + (r10_1 << 2))
            
            if (not(zmm1 f> zmm0))
                if (zmm0 f> zmm1)
                    break
                
                if (r9_1.d s>= r10_1.d)
                    break
        
        *(arg1 + (arg2 << 2)) = r9_1.d
        arg2 = r8_2
    while (r14 s< r8_2)

int32_t result = *arg4
*(arg1 + (arg2 << 2)) = result
return result
