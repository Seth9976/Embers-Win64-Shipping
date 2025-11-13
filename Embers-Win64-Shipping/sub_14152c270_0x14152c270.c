// 函数: sub_14152c270
// 地址: 0x14152c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
uint128_t zmm0
uint128_t zmm1
uint128_t zmm2
uint128_t zmm3
uint128_t zmm4
double zmm5

if (arg2 s> 0)
    zmm3.q = _mm_cvtepi32_pd(zx.q(arg2)).q f* *(arg1 + 8)
    zmm3.q = zmm3.q f- arg5
    zmm0.q = zmm3.q f* zmm3.q
    *arg11 = zmm0.q
    
    if (arg3 s> 0)
        zmm4.q = _mm_cvtepi32_pd(zx.q(arg3)).q f* *(arg1 + 0x10)
        zmm4.q = zmm4.q f- arg6
        zmm5 = zmm4.q f* zmm4.q f+ zmm0.q
        *arg11 = zmm5
        
        if (arg4 s> 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm5
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 8)
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                zmm3.q = zmm3.q f+ zmm3.q
                zmm4.q = zmm4.q f+ zmm4.q
                zmm3.q = zmm3.q f+ zmm4.q
            label_14152c314:
                zmm0.q = zmm0.q f* *(arg1 + 0x18)
                result.b = 0
                zmm0.q = zmm0.q f+ zmm0.q
                zmm3.q = zmm3.q f+ zmm0.q
                zmm3.q = zmm3.q f+ *(arg1 + 0x68)
                zmm3.q = zmm3.q f+ zmm1.q
                *arg11 = zmm3.q
                return result
        else if (arg4 s< 0)
            zmm1.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f- arg7
            zmm2.q = zmm1.q f* zmm1.q
            zmm2.q = zmm2.q f+ zmm5
            *arg11 = zmm2.q
            
            if (not(zmm2.q f> arg12))
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                result.b = 0
                zmm0.q = zmm3.q f* *(arg1 + 8)
                zmm1.q = zmm1.q f* *(arg1 + 0x18)
                zmm3.q = zmm4.q f+ zmm0.q
                zmm3.q = zmm3.q f- zmm1.q
                zmm3.q = zmm3.q f+ zmm3.q
                zmm3.q = zmm3.q f+ *(arg1 + 0x68)
                zmm3.q = zmm3.q f+ zmm2.q
                *arg11 = zmm3.q
                return result
        else if (not(zmm5 > arg12))
            zmm4.q = zmm4.q f+ zmm4.q
            zmm0.q = zmm3.q f+ zmm3.q
            result.b = 0
            zmm4.q = zmm4.q f+ *(arg1 + 0x10)
            zmm3.q = zmm0.q f+ *(arg1 + 8)
            zmm4.q = zmm4.q f* *(arg1 + 0x10)
            zmm3.q = zmm3.q f* *(arg1 + 8)
            zmm3.q = zmm3.q f+ zmm4.q
            zmm3.q = zmm3.q f+ arg10
            zmm3.q = zmm3.q f+ zmm5
            *arg11 = zmm3.q
            return result
    else if (arg3 s< 0)
        zmm4.q = _mm_cvtepi32_pd(zx.q(arg3 + 1)).q f* *(arg1 + 0x10)
        zmm4.q = zmm4.q f- arg6
        zmm5 = zmm4.q f* zmm4.q f+ zmm0.q
        *arg11 = zmm5
        
        if (arg4 s> 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm5
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 8)
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                zmm3.q = zmm3.q f- zmm4.q
                zmm3.q = zmm3.q f+ zmm3.q
                goto label_14152c314
        else if (arg4 s< 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm5
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 8)
                result.b = 0
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                zmm0.q = zmm0.q f* *(arg1 + 0x18)
                zmm3.q = zmm3.q f- zmm4.q
                zmm3.q = zmm3.q f- zmm0.q
                zmm3.q = zmm3.q f+ zmm3.q
                zmm3.q = zmm3.q f+ *(arg1 + 0x68)
                zmm3.q = zmm3.q f+ zmm1.q
                *arg11 = zmm3.q
                return result
        else if (not(zmm5 > arg12))
            zmm3.q = zmm3.q f+ zmm3.q
            zmm4.q = zmm4.q f+ zmm4.q
            result.b = 0
            zmm3.q = zmm3.q f+ *(arg1 + 8)
            zmm1.q = *(arg1 + 0x10) f- zmm4.q
            zmm1.q = zmm1.q f* *(arg1 + 0x10)
            zmm0.q = zmm3.q f* *(arg1 + 8)
            zmm3.q = zmm1.q f+ zmm0.q
            zmm3.q = zmm3.q f+ arg10
            zmm3.q = zmm3.q f+ zmm5
            *arg11 = zmm3.q
            return result
    else if (arg4 s> 0)
        zmm2.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
        zmm2.q = zmm2.q f- arg7
        zmm1.q = zmm2.q f* zmm2.q
        zmm1.q = zmm1.q f+ zmm0.q
        *arg11 = zmm1.q
        
        if (not(zmm1.q f> arg12))
            zmm2.q = zmm2.q f+ zmm2.q
            zmm2.q = zmm2.q f+ *(arg1 + 0x18)
            zmm2.q = zmm2.q f* *(arg1 + 0x18)
            zmm2.q = zmm2.q f+ zmm1.q
        label_14152c5ad:
            *arg11 = zmm2.q
            zmm0.q = zmm3.q f+ zmm3.q
            result.b = 0
            zmm3.q = zmm0.q f+ *(arg1 + 8)
            zmm3.q = zmm3.q f* *(arg1 + 8)
            zmm3.q = zmm3.q f+ arg9
            zmm3.q = zmm3.q f+ zmm2.q
            *arg11 = zmm3.q
            return result
    else if (arg4 s< 0)
        zmm1.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
        zmm1.q = zmm1.q f- arg7
        zmm4.q = zmm1.q f* zmm1.q
        zmm4.q = zmm4.q f+ zmm0.q
        *arg11 = zmm4.q
        
        if (not(zmm4.q f> arg12))
            zmm1.q = zmm1.q f+ zmm1.q
            zmm2.q = *(arg1 + 0x18) f- zmm1.q
            zmm2.q = zmm2.q f* *(arg1 + 0x18)
            zmm2.q = zmm2.q f+ zmm4.q
            goto label_14152c5ad
    else if (not(zmm0.q f> arg12))
        zmm2.q = zmm0.q f+ arg10
        goto label_14152c5ad
else if (arg2 s< 0)
    zmm2.q = _mm_cvtepi32_pd(zx.q(arg2 + 1)).q f* *(arg1 + 8)
    zmm2.q = zmm2.q f- arg5
    zmm0.q = zmm2.q f* zmm2.q
    *arg11 = zmm0.q
    
    if (arg3 s> 0)
        zmm3.q = _mm_cvtepi32_pd(zx.q(arg3)).q f* *(arg1 + 0x10)
        zmm3.q = zmm3.q f- arg6
        zmm5 = zmm3.q
        zmm4.q = zmm3.q f* zmm3.q
        zmm4.q = zmm4.q f+ zmm0.q
        *arg11 = zmm4.q
        
        if (arg4 s> 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm4.q
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 0x10)
                zmm2.q = zmm2.q f* *(arg1 + 8)
                zmm3.q = zmm3.q f+ zmm3.q
                zmm2.q = zmm2.q f+ zmm2.q
                zmm3.q = zmm3.q f- zmm2.q
                goto label_14152c314
        else if (arg4 s< 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm4.q
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 0x10)
                result.b = 0
                zmm2.q = zmm2.q f* *(arg1 + 8)
                zmm0.q = zmm0.q f* *(arg1 + 0x18)
                zmm3.q = zmm3.q f- zmm2.q
                zmm3.q = zmm3.q f- zmm0.q
                zmm3.q = zmm3.q f+ zmm3.q
                zmm3.q = zmm3.q f+ *(arg1 + 0x68)
                zmm3.q = zmm3.q f+ zmm1.q
                *arg11 = zmm3.q
                return result
        else if (not(zmm4.q f> arg12))
            zmm2.q = zmm2.q f+ zmm2.q
            result.b = 0
            zmm3.q = *(arg1 + 8) f- zmm2.q
            zmm3.q = zmm3.q f* *(arg1 + 8)
            zmm3.q = zmm3.q f+ (zmm5 + zmm5 f+ *(arg1 + 0x10)) f* *(arg1 + 0x10)
            zmm3.q = zmm3.q f+ arg10
            zmm3.q = zmm3.q f+ zmm4.q
            *arg11 = zmm3.q
            return result
    else if (arg3 s< 0)
        zmm4.q = _mm_cvtepi32_pd(zx.q(arg3 + 1)).q f* *(arg1 + 0x10)
        zmm4.q = zmm4.q f- arg6
        zmm5 = zmm4.q f* zmm4.q f+ zmm0.q
        *arg11 = zmm5
        
        if (arg4 s> 0)
            zmm3.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
            zmm3.q = zmm3.q f- arg7
            zmm0.q = zmm3.q f* zmm3.q
            zmm0.q = zmm0.q f+ zmm5
            *arg11 = zmm0.q
            
            if (not(zmm0.q f> arg12))
                zmm3.q = zmm3.q f* *(arg1 + 0x18)
                result.b = 0
                zmm2.q = zmm2.q f* *(arg1 + 8)
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                zmm3.q = zmm3.q f+ zmm3.q
                zmm2.q = zmm2.q f+ zmm2.q
                zmm4.q = zmm4.q f+ zmm4.q
                zmm2.q = zmm2.q f+ zmm4.q
                zmm3.q = zmm3.q f- zmm2.q
                zmm3.q = zmm3.q f+ *(arg1 + 0x68)
                zmm3.q = zmm3.q f+ zmm0.q
                *arg11 = zmm3.q
                return result
        else if (arg4 s< 0)
            zmm0.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
            zmm0.q = zmm0.q f- arg7
            zmm1.q = zmm0.q f* zmm0.q
            zmm1.q = zmm1.q f+ zmm5
            *arg11 = zmm1.q
            
            if (not(zmm1.q f> arg12))
                zmm2.q = zmm2.q f* *(arg1 + 8)
                result.b = 0
                zmm4.q = zmm4.q f* *(arg1 + 0x10)
                zmm0.q = zmm0.q f* *(arg1 + 0x18)
                zmm2.q = zmm2.q f+ zmm2.q
                zmm4.q = zmm4.q f+ zmm4.q
                zmm0.q = zmm0.q f+ zmm0.q
                zmm2.q = zmm2.q f+ zmm4.q
                zmm2.q = zmm2.q f+ zmm0.q
                zmm3.q = *(arg1 + 0x68) f- zmm2.q
                zmm3.q = zmm3.q f+ zmm1.q
                *arg11 = zmm3.q
                return result
        else if (not(zmm5 > arg12))
            zmm4.q = zmm4.q f+ zmm4.q
            zmm2.q = zmm2.q f+ zmm2.q
            result.b = 0
            zmm3.q = *(arg1 + 0x10) f- zmm4.q
            zmm0.q = *(arg1 + 8) f- zmm2.q
            zmm3.q = zmm3.q f* *(arg1 + 0x10)
            zmm0.q = zmm0.q f* *(arg1 + 8)
            zmm3.q = zmm3.q f+ zmm0.q
            zmm3.q = zmm3.q f+ arg10
            zmm3.q = zmm3.q f+ zmm5
            *arg11 = zmm3.q
            return result
    else if (arg4 s> 0)
        zmm1.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
        zmm1.q = zmm1.q f- arg7
        zmm3.q = zmm1.q f* zmm1.q
        zmm3.q = zmm3.q f+ zmm0.q
        *arg11 = zmm3.q
        
        if (not(zmm3.q f> arg12))
            zmm1.q = zmm1.q f+ zmm1.q
            zmm1.q = zmm1.q f+ *(arg1 + 0x18)
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm3.q
        label_14152c914:
            *arg11 = zmm1.q
            zmm2.q = zmm2.q f+ zmm2.q
            result.b = 0
            zmm3.q = *(arg1 + 8) f- zmm2.q
            zmm3.q = zmm3.q f* *(arg1 + 8)
            zmm3.q = zmm3.q f+ arg9
            zmm3.q = zmm3.q f+ zmm1.q
            *arg11 = zmm3.q
            return result
    else if (arg4 s< 0)
        zmm3.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
        zmm3.q = zmm3.q f- arg7
        zmm4.q = zmm3.q f* zmm3.q
        zmm4.q = zmm4.q f+ zmm0.q
        *arg11 = zmm4.q
        
        if (not(zmm4.q f> arg12))
            zmm3.q = zmm3.q f+ zmm3.q
            zmm1.q = *(arg1 + 0x18) f- zmm3.q
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm4.q
            goto label_14152c914
    else if (not(zmm0.q f> arg12))
        zmm1.q = zmm0.q f+ arg10
        goto label_14152c914
else if (arg3 s> 0)
    zmm3.q = _mm_cvtepi32_pd(zx.q(arg3)).q f* *(arg1 + 0x10)
    zmm3.q = zmm3.q f- arg6
    zmm0.q = zmm3.q f* zmm3.q
    *arg11 = zmm0.q
    
    if (arg4 s> 0)
        zmm1.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
        zmm1.q = zmm1.q f- arg7
        zmm2.q = zmm1.q f* zmm1.q
        zmm2.q = zmm2.q f+ zmm0.q
        *arg11 = zmm2.q
        
        if (not(zmm2.q f> arg12))
            zmm1.q = zmm1.q f+ zmm1.q
            zmm1.q = zmm1.q f+ *(arg1 + 0x18)
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm2.q
        label_14152ca11:
            zmm3.q = zmm3.q f+ zmm3.q
            *arg11 = zmm1.q
            result.b = 0
            zmm3.q = zmm3.q f+ *(arg1 + 0x10)
            zmm3.q = zmm3.q f* *(arg1 + 0x10)
            zmm3.q = zmm3.q f+ zmm1.q
            zmm3.q = zmm3.q f+ arg8
            *arg11 = zmm3.q
            return result
    else if (arg4 s< 0)
        zmm2.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
        zmm2.q = zmm2.q f- arg7
        zmm4.q = zmm2.q f* zmm2.q
        zmm4.q = zmm4.q f+ zmm0.q
        *arg11 = zmm4.q
        
        if (not(zmm4.q f> arg12))
            zmm2.q = zmm2.q f+ zmm2.q
            zmm1.q = *(arg1 + 0x18) f- zmm2.q
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm4.q
            goto label_14152ca11
    else if (not(zmm0.q f> arg12))
        zmm1.q = zmm0.q f+ arg10
        goto label_14152ca11
else if (arg3 s< 0)
    zmm2.q = _mm_cvtepi32_pd(zx.q(arg3 + 1)).q f* *(arg1 + 0x10)
    zmm2.q = zmm2.q f- arg6
    zmm0.q = zmm2.q f* zmm2.q
    *arg11 = zmm0.q
    
    if (arg4 s> 0)
        zmm1.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
        zmm1.q = zmm1.q f- arg7
        zmm3.q = zmm1.q f* zmm1.q
        zmm3.q = zmm3.q f+ zmm0.q
        *arg11 = zmm3.q
        
        if (not(zmm3.q f> arg12))
            zmm1.q = zmm1.q f+ zmm1.q
            zmm1.q = zmm1.q f+ *(arg1 + 0x18)
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm3.q
        label_14152cb0a:
            *arg11 = zmm1.q
            zmm2.q = zmm2.q f+ zmm2.q
            result.b = 0
            zmm3.q = *(arg1 + 0x10) f- zmm2.q
            zmm3.q = zmm3.q f* *(arg1 + 0x10)
            zmm3.q = zmm3.q f+ zmm1.q
            zmm3.q = zmm3.q f+ arg8
            *arg11 = zmm3.q
            return result
    else if (arg4 s< 0)
        zmm3.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
        zmm3.q = zmm3.q f- arg7
        zmm4.q = zmm3.q f* zmm3.q
        zmm4.q = zmm4.q f+ zmm0.q
        *arg11 = zmm4.q
        
        if (not(zmm4.q f> arg12))
            zmm3.q = zmm3.q f+ zmm3.q
            zmm1.q = *(arg1 + 0x18) f- zmm3.q
            zmm1.q = zmm1.q f* *(arg1 + 0x18)
            zmm1.q = zmm1.q f+ zmm4.q
            goto label_14152cb0a
    else if (not(zmm0.q f> arg12))
        zmm1.q = zmm0.q f+ arg10
        goto label_14152cb0a
else if (arg4 s<= 0)
    if (arg4 s>= 0)
        result.b = 0
        zmm3.q = 0.0 f+ arg9
        zmm3.q = zmm3.q f+ arg8
        *arg11 = zmm3.q
        return result
    
    zmm1.q = _mm_cvtepi32_pd(zx.q(arg4 + 1)).q f* *(arg1 + 0x18)
    zmm1.q = zmm1.q f- arg7
    zmm2.q = zmm1.q f* zmm1.q
    *arg11 = zmm2.q
    
    if (zmm2.q f<= arg12)
        zmm1.q = zmm1.q f+ zmm1.q
        result.b = 0
        zmm3.q = *(arg1 + 0x18) f- zmm1.q
        zmm3.q = zmm3.q f* *(arg1 + 0x18)
        zmm3.q = zmm3.q f+ zmm2.q
        zmm3.q = zmm3.q f+ arg9
        zmm3.q = zmm3.q f+ arg8
        *arg11 = zmm3.q
        return result
else
    zmm3.q = _mm_cvtepi32_pd(zx.q(arg4)).q f* *(arg1 + 0x18)
    zmm3.q = zmm3.q f- arg7
    zmm1.q = zmm3.q f* zmm3.q
    *arg11 = zmm1.q
    
    if (not(zmm1.q f> arg12))
        zmm3.q = zmm3.q f+ zmm3.q
        result.b = 0
        zmm3.q = zmm3.q f+ *(arg1 + 0x18)
        zmm3.q = zmm3.q f* *(arg1 + 0x18)
        zmm3.q = zmm3.q f+ zmm1.q
        zmm3.q = zmm3.q f+ arg9
        zmm3.q = zmm3.q f+ arg8
        *arg11 = zmm3.q
        return result
result.b = 1
return result
