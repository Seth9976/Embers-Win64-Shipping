// 函数: sub_14262e640
// 地址: 0x14262e640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm4[0x4] = *(arg1 + 8)
float zmm5[0x4] = zmm4
zmm5[0] = zmm5[0] * arg2[0]
float zmm6[0x4] = arg3
int32_t rdx = int.d(zmm5[0])

if (rdx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rdx)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rdx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

arg2 = zmm4
arg2[0] = arg2[0] f* arg4
int32_t rdx_2 = int.d(zmm5[0])
int32_t rcx = int.d(arg2[0])
int32_t arg_10 = rdx_2

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg2[0]))
    arg2 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg2, arg2[0].q)) & 1)))

arg3 = zmm4
arg3[0] = arg3[0] f* arg5
int32_t r12 = int.d(arg2[0])
int32_t rcx_2 = int.d(arg3[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

zmm4[0] = zmm4[0] * zmm6[0]
int32_t r10 = 0
int32_t r8 = int.d(arg3[0])
int32_t rcx_4 = int.d(zmm4[0])
arg5 = r8

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm4[0]))
    zmm4 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))

int32_t rsi = int.d(zmm4[0])

if (rsi s<= r8)
    int64_t rbx_1 = 0
    int32_t r13_1 = rsi * 0x127409f
    
    do
        int32_t rdi_1 = rdx_2
        
        if (rdx_2 s<= r12)
            int64_t rax_9 = sx.q(r13_1)
            int32_t r15_1 = rdx_2 * 0x466f45d
            
            do
                uint64_t i_1
                int64_t r9_1
                
                for (int16_t i = *(*(arg1 + 0x20)
                        + (((sx.q(r15_1) ^ rax_9) & (sx.q(*(arg1 + 0x28)) - 1)) << 1)); i != 0xffff; 
                        i = *(r9_1 + (i_1 << 3) + 6))
                    r9_1 = *(arg1 + 0x10)
                    i_1 = zx.q(i)
                    
                    if (sx.d(*(r9_1 + (i_1 << 3) + 2)) == rdi_1
                            && sx.d(*(r9_1 + (i_1 << 3) + 4)) == rsi)
                        void* rcx_9 = &arg6[sx.q(r10)]
                        int16_t* rax_16 = arg6
                        
                        if (arg6 != rcx_9)
                            while (*rax_16 != *(r9_1 + (i_1 << 3)))
                                rax_16 = &rax_16[1]
                                
                                if (rax_16 == rcx_9)
                                    goto label_14262e805
                        
                        if (arg6 == rcx_9 || rax_16 == rcx_9)
                        label_14262e805:
                            
                            if (r10 s>= arg7)
                                return zx.q(r10)
                            
                            r10 += 1
                            arg6[rbx_1] = *(r9_1 + (i_1 << 3))
                            rbx_1 += 1
                
                rdi_1 += 1
                rax_9 = sx.q(r13_1)
                r15_1 += 0x466f45d
            while (rdi_1 s<= r12)
            
            rdx_2 = arg_10
            r8 = arg5
        
        rsi += 1
        r13_1 += 0x127409f
    while (rsi s<= r8)

return zx.q(r10)
