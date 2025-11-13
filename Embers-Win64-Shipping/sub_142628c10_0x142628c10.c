// 函数: sub_142628c10
// 地址: 0x142628c10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = *arg6
float zmm4[0x4] = *(arg6 + 4)
float zmm1[0x4] = *(arg6 + 8)
void* rax_1 = *arg1
int128_t zmm6
zmm6.d = 1f / arg3[0]
uint64_t rdi = zx.q(*(rax_1 + 0x30))
uint32_t rbp = zx.d(*(rax_1 + 0x32))
arg3 = *arg5
arg3[0] = arg3[0] - zmm5[0]
float zmm9[0x4] = *(arg5 + 4)
float zmm12[0x4] = *(arg5 + 8)
int128_t zmm8
zmm8.d = 1f / arg4[0]
arg3[0] = arg3[0] f- *arg2
arg3[0] = arg3[0] f* zmm6.d
int32_t rcx = int.d(arg3[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

int32_t r10 = int.d(arg3[0])
arg3 = zmm9
arg3[0] = arg3[0] - zmm4[0]
arg3[0] = arg3[0] f- arg2[1]
arg3[0] = arg3[0] f* zmm8.d
int32_t rcx_2 = int.d(arg3[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

arg4 = zmm12
arg4[0] = arg4[0] - zmm1[0]
int32_t r15 = int.d(arg3[0])
arg3 = arg2[2]
arg4[0] = arg4[0] - arg3[0]
arg4[0] = arg4[0] f* zmm6.d
int32_t rcx_4 = int.d(arg4[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

zmm5[0] = zmm5[0] f+ *arg5
int32_t rbx = int.d(arg4[0])
zmm5[0] = zmm5[0] f- *arg2
zmm5[0] = zmm5[0] f* zmm6.d
int32_t rcx_6 = int.d(zmm5[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm5[0]))
    zmm5 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm5, zmm5[0].q)) & 1)))

zmm4[0] = zmm4[0] + zmm9[0]
int32_t r8_1 = int.d(zmm5[0])
zmm4[0] = zmm4[0] f- arg2[1]
zmm4[0] = zmm4[0] f* zmm8.d
int32_t rcx_8 = int.d(zmm4[0])

if (rcx_8 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_8)).d f== zmm4[0]))
    zmm4 = _mm_cvtepi32_ps(zx.o(rcx_8 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))

zmm1[0] = zmm1[0] + zmm12[0]
int32_t rsi = int.d(zmm4[0])
zmm1[0] = zmm1[0] - arg3[0]
zmm1[0] = zmm1[0] f* zmm6.d
int32_t rcx_10 = int.d(zmm1[0])

if (rcx_10 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_10)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_10 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

int32_t rax_14 = int.d(zmm1[0])

if (r8_1 s>= 0 && r10 s< rdi.d && rax_14 s>= 0 && rbx s< rbp)
    int32_t rdx = 0
    int32_t rcx_12 = rbp - 1
    int32_t r9_1 = 0
    
    if (r10 s>= 0)
        r9_1 = r10
    
    int32_t r10_1 = (rdi - 1).d
    
    if (r8_1 s< rdi.d)
        r10_1 = r8_1
    
    if (rax_14 s< rbp)
        rcx_12 = rax_14
    
    if (rbx s>= 0)
        rdx = rbx
    
    if (rdx s<= rcx_12)
        int64_t r13_1 = sx.q(r9_1)
        uint64_t r9_2 = rdi
        uint64_t rax_17 = rdi * 2
        int64_t r14_2 = sx.q(rdx * rdi.d) + r13_1
        int128_t* r8_2 = sx.q(r10_1)
        arg5 = r8_2
        uint64_t arg_8 = rax_17
        int64_t rbp_1 = r14_2 * 2
        uint64_t i_1 = zx.q(rcx_12 - rdx + 1)
        uint64_t i
        
        do
            if (r13_1 s<= r8_2)
                int64_t rcx_14 = r14_2
                void* j_1 = r8_2 - r13_1 + 1
                int64_t rdx_1 = rbp_1
                void* j
                
                do
                    char* r10_2 = arg1[3]
                    
                    if (r10_2[rcx_14] == arg8)
                        uint32_t r9_3 = zx.d(*(arg1[2] + rdx_1))
                        
                        if (r9_3 s>= r15 && r9_3 s<= rsi)
                            r10_2[rcx_14] = arg7
                    
                    rdx_1 += 2
                    rcx_14 += 1
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r8_2 = arg5
                r9_2 = rdi
                rax_17 = arg_8
            
            rbp_1 += rax_17
            r14_2 += r9_2
            i = i_1
            i_1 -= 1
        while (i != 1)

return 0x40000000
