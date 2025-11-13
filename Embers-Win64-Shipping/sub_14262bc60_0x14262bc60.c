// 函数: sub_14262bc60
// 地址: 0x14262bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm3[0x4] = arg1
arg1 = arg4
uint128_t zmm5 = arg2
arg3[0] = arg3[0] f* arg1.d
arg3[0] = arg3[0] + 0.00999999978f
int32_t rcx = int.d(arg3[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

zmm3[0] = zmm3[0] f* arg1.d
int32_t r11 = int.d(arg3[0])
int32_t r9 = arg6[2].d
zmm3[0] = zmm3[0] + 0.00999999978f
int32_t rcx_2 = int.d(zmm3[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm3[0]))
    zmm3 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm3, zmm3[0].q)) & 1)))

int32_t r8 = int.d(zmm3[0])
int32_t r10 = 0
int32_t r8_1 = r8 - arg6[1].d

if (r8 - arg6[1].d s< 0)
    r8_1 = 0
else if (r8_1 s> r9 - 1)
    r8_1 = r9 - 1

int32_t r11_1 = r11 - *(arg6 + 0xc)
int32_t rbx_1 = *(arg6 + 0x14)

if (r11 - *(arg6 + 0xc) s>= 0)
    r10 = r11_1
    
    if (r11_1 s> rbx_1 - 1)
        r10 = rbx_1 - 1

int64_t r14 = *arg6
int32_t rsi_1 = r9 * r10
int16_t rax_7 = *(r14 + (sx.q(rsi_1 + r8_1) << 1))

if (rax_7 != 0xffff)
    return rax_7

zmm3 = arg5
arg2.d = zmm5.d f/ zmm3[0]
int32_t rcx_5 = int.d(arg2.d)

if (rcx_5 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_5)).d f== arg2.d))
    arg2 = _mm_cvtepi32_ps(zx.o(rcx_5 - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2.q)) & 1)))

arg3 = 0x7f7fffff
int16_t rdx_1 = (int.d(arg2.d)).w

if (r8_1 - 1 s>= 0)
    if (r10 s>= 0 && r8_1 - 1 s< r9 && r10 s< rbx_1)
        int16_t r11_2 = *(r14 + (sx.q(r8_1 - 1 + rsi_1) << 1))
        
        if (r11_2 != 0xffff)
            arg1.d = _mm_cvtepi32_ps(zx.o(r11_2)).d f* zmm3[0]
            arg1.d = arg1.d f- zmm5.d
            arg1 = _mm_and_ps(arg1, 0x7fffffff)
            
            if (not(arg1.d f>= 3.40282347e+38f))
                rdx_1 = r11_2
                arg3 = arg1
    
    if (r8_1 - 1 s>= 0 && r10 - 1 s>= 0 && r8_1 - 1 s< r9 && r10 - 1 s< rbx_1)
        int16_t rcx_9 = *(r14 + (sx.q(r9 * (r10 - 1) + r8_1 - 1) << 1))
        
        if (rcx_9 != 0xffff)
            arg1.d = _mm_cvtepi32_ps(zx.o(rcx_9)).d f* zmm3[0]
            arg1.d = arg1.d f- zmm5.d
            arg1 = _mm_and_ps(arg1, 0x7fffffff)
            
            if (not(arg1.d f>= arg3[0]))
                rdx_1 = rcx_9
                arg3 = arg1

if (r8_1 s>= 0 && r10 - 1 s>= 0 && r8_1 s< r9 && r10 - 1 s< rbx_1)
    int16_t rcx_11 = *(r14 + (sx.q(r9 * (r10 - 1) + r8_1) << 1))
    
    if (rcx_11 != 0xffff)
        arg1.d = _mm_cvtepi32_ps(zx.o(rcx_11)).d f* zmm3[0]
        arg1.d = arg1.d f- zmm5.d
        arg1 = _mm_and_ps(arg1, 0x7fffffff)
        
        if (not(arg1.d f>= arg3[0]))
            rdx_1 = rcx_11
            arg3 = arg1

if (r8_1 + 1 s>= 0)
    if (r10 - 1 s>= 0 && r8_1 + 1 s< r9 && r10 - 1 s< rbx_1)
        int16_t rcx_13 = *(r14 + (sx.q(r9 * (r10 - 1) + r8_1 + 1) << 1))
        
        if (rcx_13 != 0xffff)
            arg1.d = _mm_cvtepi32_ps(zx.o(rcx_13)).d f* zmm3[0]
            arg1.d = arg1.d f- zmm5.d
            arg1 = _mm_and_ps(arg1, 0x7fffffff)
            
            if (not(arg1.d f>= arg3[0]))
                rdx_1 = rcx_13
                arg3 = arg1
    
    if (r8_1 + 1 s>= 0)
        if (r10 s>= 0 && r8_1 + 1 s< r9 && r10 s< rbx_1)
            int16_t rcx_15 = *(r14 + (sx.q(r8_1 + 1 + rsi_1) << 1))
            
            if (rcx_15 != 0xffff)
                arg1.d = _mm_cvtepi32_ps(zx.o(rcx_15)).d f* zmm3[0]
                arg1.d = arg1.d f- zmm5.d
                arg1 = _mm_and_ps(arg1, 0x7fffffff)
                
                if (not(arg1.d f>= arg3[0]))
                    rdx_1 = rcx_15
                    arg3 = arg1
        
        if (r8_1 + 1 s>= 0 && r10 + 1 s>= 0 && r8_1 + 1 s< r9 && r10 + 1 s< rbx_1)
            int16_t rcx_17 = *(r14 + (sx.q(r9 * (r10 + 1) + r8_1 + 1) << 1))
            
            if (rcx_17 != 0xffff)
                arg1.d = _mm_cvtepi32_ps(zx.o(rcx_17)).d f* zmm3[0]
                arg1.d = arg1.d f- zmm5.d
                arg1 = _mm_and_ps(arg1, 0x7fffffff)
                
                if (not(arg1.d f>= arg3[0]))
                    rdx_1 = rcx_17
                    arg3 = arg1

if (r8_1 s>= 0 && r10 + 1 s>= 0 && r8_1 s< r9 && r10 + 1 s< rbx_1)
    int16_t rcx_19 = *(r14 + (sx.q(r9 * (r10 + 1) + r8_1) << 1))
    
    if (rcx_19 != 0xffff)
        arg1.d = _mm_cvtepi32_ps(zx.o(rcx_19)).d f* zmm3[0]
        arg1.d = arg1.d f- zmm5.d
        arg1 = _mm_and_ps(arg1, 0x7fffffff)
        
        if (not(arg1.d f>= arg3[0]))
            rdx_1 = rcx_19
            arg3 = arg1

if (r8_1 - 1 s>= 0 && r10 + 1 s>= 0 && r8_1 - 1 s< r9 && r10 + 1 s< rbx_1)
    int16_t rcx_20 = *(r14 + (sx.q(r8_1 - 1 + r9 * (r10 + 1)) << 1))
    
    if (rcx_20 != 0xffff)
        arg1.d = _mm_cvtepi32_ps(zx.o(rcx_20)).d f* zmm3[0]
        arg1.d = arg1.d f- zmm5.d
        arg1 = _mm_and_ps(arg1, 0x7fffffff)
        
        if (arg3[0] f> arg1.d)
            return rcx_20

return rdx_1
