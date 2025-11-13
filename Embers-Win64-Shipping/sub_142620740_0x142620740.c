// 函数: sub_142620740
// 地址: 0x142620740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm1[0x4] = *(arg1 + 8)
float zmm4[0x4] = zmm1
zmm4[0] = zmm4[0] * arg3[0]
int32_t rcx = int.d(zmm4[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm4[0]))
    zmm4 = _mm_cvtepi32_ps(zx.o(rcx - (_mm_movemask_ps(_mm_unpacklo_ps(zmm4, zmm4[0].q)) & 1)))

arg3 = zmm1
arg3[0] = arg3[0] * arg4[0]
int32_t r15 = int.d(zmm4[0])
int32_t rcx_2 = int.d(arg3[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== arg3[0]))
    arg3 = _mm_cvtepi32_ps(zx.o(rcx_2 - (_mm_movemask_ps(_mm_unpacklo_ps(arg3, arg3[0].q)) & 1)))

arg4 = zmm1
arg4[0] = arg4[0] f* arg5
int32_t rsi = int.d(arg3[0])
int32_t rcx_4 = int.d(arg4[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== arg4[0]))
    arg4 = _mm_cvtepi32_ps(zx.o(rcx_4 - (_mm_movemask_ps(_mm_unpacklo_ps(arg4, arg4[0].q)) & 1)))

zmm1[0] = zmm1[0] f* arg6
int32_t rbp = int.d(arg4[0])
int32_t rcx_6 = int.d(zmm1[0])

if (rcx_6 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_6)).d f== zmm1[0]))
    zmm1 = _mm_cvtepi32_ps(zx.o(rcx_6 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))

int32_t rcx_8 = r15
int32_t r12 = int.d(zmm1[0])

if (*(arg1 + 0x2c) s< r15)
    rcx_8 = *(arg1 + 0x2c)

bool cond:1 = *(arg1 + 0x30) s< rsi
*(arg1 + 0x2c) = rcx_8
int32_t rcx_9 = rsi

if (cond:1)
    rcx_9 = *(arg1 + 0x30)

bool cond:2 = *(arg1 + 0x34) s> rbp
*(arg1 + 0x30) = rcx_9
int32_t rcx_10 = rbp

if (cond:2)
    rcx_10 = *(arg1 + 0x34)

bool cond:3 = *(arg1 + 0x38) s> r12
*(arg1 + 0x34) = rcx_10
int32_t rcx_11 = r12

if (cond:3)
    rcx_11 = *(arg1 + 0x38)

*(arg1 + 0x38) = rcx_11

if (rsi s> r12)
    return 

int32_t r14_1 = rsi * 0x127409f

do
    int32_t r10_1 = r15
    
    if (r15 s<= rbp)
        int32_t rdi_1 = r15 * 0x466f45d
        
        do
            int32_t rbx_1 = *(arg1 + 0x18)
            
            if (rbx_1 s< *(arg1 + 0x1c))
                int64_t r8_1 = *(arg1 + 0x10)
                uint64_t r9_1 = zx.q(rbx_1.w)
                int32_t rcx_14 = (r14_1 ^ rdi_1) & (*(arg1 + 0x28) - 1)
                *(arg1 + 0x18) = rbx_1 + 1
                int64_t rdx = sx.q(rcx_14)
                *(r8_1 + (r9_1 << 3) + 2) = r10_1.w
                *(r8_1 + (r9_1 << 3) + 4) = rsi.w
                *(r8_1 + (r9_1 << 3)) = arg2
                *(r8_1 + (r9_1 << 3) + 6) = *(*(arg1 + 0x20) + (rdx << 1))
                *(*(arg1 + 0x20) + (rdx << 1)) = rbx_1.w
            
            r10_1 += 1
            rdi_1 += 0x466f45d
        while (r10_1 s<= rbp)
    
    rsi += 1
    r14_1 += 0x127409f
while (rsi s<= r12)
