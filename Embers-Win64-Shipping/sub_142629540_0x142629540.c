// 函数: sub_142629540
// 地址: 0x142629540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg5
float zmm1[0x4] = *(arg5 + 8)
float zmm13[0x4] = zmm5
float zmm4[0x4] = *(arg5 + 4)
float zmm14[0x4] = zmm1
void* rax_1 = *arg1
zmm13[0] = zmm13[0] f- *arg2
uint64_t r8 = zx.q(*(rax_1 + 0x30))
uint32_t rbx = zx.d(*(rax_1 + 0x32))
int128_t zmm8 = arg6
int128_t zmm10 = arg2[2]
int128_t zmm6
zmm6.d = 1f f/ arg3
zmm14[0] = zmm14[0] f- zmm10.d
int128_t zmm9
zmm9.d = 1f / arg4[0]
arg4 = zmm5
zmm13[0] = zmm13[0] f* zmm6.d
arg4[0] = arg4[0] f- zmm8.d
zmm14[0] = zmm14[0] f* zmm6.d
int128_t zmm12
zmm12.d = zmm6.d f* zmm8.d
arg4[0] = arg4[0] f- *arg2
zmm12.d = zmm12.d f+ 0.5f
arg4[0] = arg4[0] f* zmm6.d
zmm12.d = zmm12.d f* zmm12.d
int32_t rcx = int.d(arg4[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

int128_t zmm7 = arg2[1]
int32_t i_4 = int.d(arg4[0])
arg4 = zmm4
arg4[0] = arg4[0] f- zmm7.d
arg4[0] = arg4[0] f* zmm9.d
int32_t rcx_2 = int.d(arg4[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

int32_t r13 = int.d(arg4[0])
arg4 = zmm1
arg4[0] = arg4[0] f- zmm8.d
arg4[0] = arg4[0] f- zmm10.d
arg4[0] = arg4[0] f* zmm6.d
int32_t rcx_4 = int.d(arg4[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

zmm5[0] = zmm5[0] f+ zmm8.d
int32_t r9 = int.d(arg4[0])
zmm5[0] = zmm5[0] f- *arg2
zmm5[0] = zmm5[0] f* zmm6.d
int32_t rcx_6 = int.d(zmm5[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

zmm4[0] = zmm4[0] f+ arg7
int32_t rdx = int.d(zmm5[0])
zmm4[0] = zmm4[0] f- zmm7.d
zmm4[0] = zmm4[0] f* zmm9.d
int32_t rcx_8 = int.d(zmm4[0])

if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8)).d f== zmm4[0]))
    zmm4 = _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))

zmm1[0] = zmm1[0] f+ zmm8.d
int32_t r15 = int.d(zmm4[0])
zmm1[0] = zmm1[0] f- zmm10.d
zmm1[0] = zmm1[0] f* zmm6.d
int32_t rcx_10 = int.d(zmm1[0])

if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

int32_t rax_14 = int.d(zmm1[0])

if (rdx s>= 0 && i_4 s< r8.d && rax_14 s>= 0 && r9 s< rbx)
    int32_t rdi_1 = 0
    int32_t i_3 = 0
    int32_t r14_1 = rbx - 1
    
    if (i_4 s>= 0)
        i_3 = i_4
    
    int32_t rcx_12 = (r8 - 1).d
    
    if (rdx s< r8.d)
        rcx_12 = rdx
    
    if (rax_14 s< rbx)
        r14_1 = rax_14
    
    int32_t arg_18 = r14_1
    
    if (r9 s>= 0)
        rdi_1 = r9
    
    arg6 = rdi_1
    
    if (rdi_1 s<= r14_1)
        int64_t rsi_1 = sx.q(rcx_12)
        int128_t* rcx_13 = r8
        int64_t r11 = sx.q(rdi_1 * r8.d)
        int32_t i_2 = i_3
        int64_t arg_10 = rsi_1
        arg5 = rcx_13
        
        do
            int64_t i_1 = sx.q(i_2)
            int64_t i = i_1
            
            if (i_1 s<= rsi_1)
                uint128_t zmm0
                
                if (rsi_1 - i_1 + 1 s>= 4)
                    int32_t r14_2 = (i_1 + 2).d
                    int64_t rsi_4 = (i_1 + r11) * 2
                    
                    do
                        void* r8_1 = arg1[3]
                        void* rcx_14 = r8_1
                        char* rdi_2 = r8_1 + r11
                        
                        if (rdi_2[i] == arg9)
                            zmm1 = zx.o(0)
                            zmm0.d = float.s(arg6)
                            zmm1[0] = float.s(i_1.d)
                            zmm0.d = zmm0.d f+ 0.5f
                            zmm1[0] = zmm1[0] + 0.5f
                            zmm0.d = zmm0.d f- zmm14[0]
                            zmm1[0] = zmm1[0] - zmm13[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f+ zmm1[0]
                            
                            if (not(zmm0.d f> zmm12.d))
                                uint32_t r9_1 = zx.d(*(arg1[2] + rsi_4))
                                
                                if (r9_1 s>= r13 && r9_1 s<= r15)
                                    rdi_2[i] = arg8
                                    r8_1 = arg1[3]
                                    rcx_14 = r8_1
                        
                        void* rdi_3 = r11 + rcx_14
                        void* r9_2 = rcx_14
                        
                        if (*(rdi_3 + i + 1) == arg9)
                            zmm0.d = float.s(arg6)
                            zmm1 = zx.o(0)
                            zmm1[0] = float.s(r14_2 - 1)
                            zmm0.d = zmm0.d f+ 0.5f
                            zmm1[0] = zmm1[0] + 0.5f
                            zmm0.d = zmm0.d f- zmm14[0]
                            zmm1[0] = zmm1[0] - zmm13[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f+ zmm1[0]
                            
                            if (not(zmm0.d f> zmm12.d))
                                uint32_t rax_23 = zx.d(*(arg1[2] + rsi_4 + 2))
                                
                                if (rax_23 s>= r13 && rax_23 s<= r15)
                                    *(rdi_3 + i + 1) = arg8
                                    r8_1 = arg1[3]
                                    r9_2 = r8_1
                        
                        void* rdi_4 = r11 + r9_2
                        void* rax_24 = r9_2
                        
                        if (*(rdi_4 + i + 2) == arg9)
                            zmm1 = zx.o(0)
                            zmm0.d = float.s(arg6)
                            zmm1[0] = float.s(r14_2)
                            zmm0.d = zmm0.d f+ 0.5f
                            zmm1[0] = zmm1[0] + 0.5f
                            zmm0.d = zmm0.d f- zmm14[0]
                            zmm1[0] = zmm1[0] - zmm13[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f+ zmm1[0]
                            
                            if (not(zmm0.d f> zmm12.d))
                                uint32_t rcx_16 = zx.d(*(arg1[2] + ((r11 + i) << 1) + 4))
                                rax_24 = r9_2
                                
                                if (rcx_16 s>= r13 && rcx_16 s<= r15)
                                    *(rdi_4 + i + 2) = arg8
                                    r8_1 = arg1[3]
                                    rax_24 = r8_1
                        
                        rdi_1 = arg6
                        
                        if (*(rax_24 + r11 + i + 3) == arg9)
                            zmm1 = zx.o(0)
                            zmm0.d = float.s(rdi_1)
                            zmm1[0] = float.s(r14_2 + 1)
                            zmm0.d = zmm0.d f+ 0.5f
                            zmm1[0] = zmm1[0] + 0.5f
                            zmm0.d = zmm0.d f- zmm14[0]
                            zmm1[0] = zmm1[0] - zmm13[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f+ zmm1[0]
                            
                            if (not(zmm0.d f> zmm12.d))
                                uint32_t r9_3 = zx.d(*(arg1[2] + ((r11 + i) << 1) + 6))
                                
                                if (r9_3 s>= r13 && r9_3 s<= r15)
                                    *(r8_1 + r11 + i + 3) = arg8
                        
                        i_1 = zx.q(i_1.d + 4)
                        r14_2 += 4
                        i += 4
                        rsi_4 += 8
                    while (i s<= rsi_1 - 3)
                    
                    rsi_1 = arg_10
                    r14_1 = arg_18
                    rcx_13 = arg5
                
                if (i s<= rsi_1)
                    int64_t rcx_19 = (r11 + i) * 2
                    
                    do
                        char* r9_5 = arg1[3] + r11
                        
                        if (r9_5[i] == arg9)
                            zmm1 = zx.o(0)
                            zmm0.d = float.s(rdi_1)
                            zmm1[0] = float.s(i_1.d)
                            zmm0.d = zmm0.d f+ 0.5f
                            zmm1[0] = zmm1[0] + 0.5f
                            zmm0.d = zmm0.d f- zmm14[0]
                            zmm1[0] = zmm1[0] - zmm13[0]
                            zmm0.d = zmm0.d f* zmm0.d
                            zmm1[0] = zmm1[0] * zmm1[0]
                            zmm0.d = zmm0.d f+ zmm1[0]
                            
                            if (not(zmm0.d f> zmm12.d))
                                uint32_t r8_2 = zx.d(*(arg1[2] + rcx_19))
                                
                                if (r8_2 s>= r13 && r8_2 s<= r15)
                                    r9_5[i] = arg8
                        
                        i_1 = zx.q(i_1.d + 1)
                        i += 1
                        rcx_19 += 2
                    while (i s<= rsi_1)
                    
                    rcx_13 = arg5
                
                i_2 = i_3
            
            rdi_1 += 1
            r11 += rcx_13
            arg6 = rdi_1
        while (rdi_1 s<= r14_1)

return 0x40000000
