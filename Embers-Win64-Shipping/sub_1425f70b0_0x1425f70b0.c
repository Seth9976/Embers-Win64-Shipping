// 函数: sub_1425f70b0
// 地址: 0x1425f70b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx
int64_t var_8 = rbx
int32_t r15 = data_143f70ce8
double zmm6[0x2] = arg2
sub_140b34200("HighlightRecorder_Start", r15)
bool z

if (0 == *(arg1 + 8))
    *(arg1 + 8) = 0
    z = true
else
    *(arg1 + 8)
    z = false

char rax_9

if (z)
    EnterCriticalSection(arg1 + 0x30)
    int32_t i_1 = *(arg1 + 0x28)
    
    if (i_1 != 0)
        int64_t* rbx_2 = *(arg1 + 0x20) + 0x28
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_2 = &rbx_2[0xa]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    *(arg1 + 0x28) = 0
    
    if (*(arg1 + 0x2c) != 0)
        sub_1405a5310(arg1 + 0x20, 0)
    
    if (arg1 != -0x30)
        LeaveCriticalSection(arg1 + 0x30)
    
    zmm6[0] = zmm6[0] * 10000000.0
    zmm6[0] = zmm6[0] + 0.5
    int64_t rcx_4 = int.q(zmm6[0])
    double zmm0_1[0x2]
    
    if (rcx_4 != -0x8000000000000000)
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_4)
        
        if (not(zmm0_1[0] == zmm6[0]))
            uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm6, zmm6[0]))
            zmm6 = zx.o(0)
            zmm6[0] = float.d(rcx_4 - (zx.q(temp0_2) & 1))
    
    *(arg1 + 0x18) = int.q(zmm6[0])
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm0_1 = zx.o(0)
    zmm0_1[0] = float.d(performanceCount)
    zmm0_1[0] = zmm0_1[0] f* data_143d796f8
    zmm0_1[0] = zmm0_1[0] * 10000000.0
    zmm0_1[0] = zmm0_1[0] + 167772160000000.5
    int64_t rcx_7 = int.q(zmm0_1[0])
    
    if (rcx_7 != -0x8000000000000000 && not(float.d(rcx_7) f== zmm0_1[0]))
        uint32_t temp0_4 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1[0]))
        zmm0_1 = zx.o(0)
        zmm0_1[0] = float.d(rcx_7 - (zx.q(temp0_4) & 1))
    
    int64_t rax_7 = int.q(zmm0_1[0])
    *(arg1 + 0x70) = 0
    *(arg1 + 0x78) = 0
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = rax_7
    rax_9 = sub_1425f3fc0(sub_1425f2bf0(), arg1)

if (not(z) || rax_9 == 0)
    rbx.b = 0
else
    rbx.b = 1
    *(arg1 + 8)
    *(arg1 + 8) = 1

sub_140b38680("HighlightRecorder_Start", r15)
return zx.q(rbx.b)
