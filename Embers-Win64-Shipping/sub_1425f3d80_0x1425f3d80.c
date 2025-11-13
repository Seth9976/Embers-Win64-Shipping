// 函数: sub_1425f3d80
// 地址: 0x1425f3d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x78)
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t rcx_2 = int.q(zmm0[0])

if (rcx_2 != -0x8000000000000000 && not(float.d(rcx_2) f== zmm0[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rcx_2 - (zx.q(temp0_2) & 1))

int64_t rbx_1 = int.q(zmm0[0]) - *(arg1 + 0xb8)
int64_t rax_5
int64_t result
int64_t zmm1

if (*(arg1 + 0xd1) != 0)
    int64_t* rcx_4 = *(arg1 + 0xa8)
    void var_58
    void* rax_4 = (*(*rcx_4 + 0x40))(rcx_4, &var_58)
    zmm0 = zx.o(0)
    zmm0[0] = float.d(rbx_1)
    rax_5 = 0
    zmm1 = float.d(zx.q(*(rax_4 + 8))) f* zmm0[0]
    zmm0 = 0x43e0000000000000
    zmm1 = zmm1 f* 9.9999999999999995e-08
    
    if (not(zmm1 f< zmm0[0]))
        zmm1 = zmm1 f- zmm0[0]
        
        if (not(zmm1 f>= zmm0[0]))
            rax_5 = -0x8000000000000000
    
    void var_40
    sub_140846380(&var_40)
    result = *(arg1 + 0xb0) + 1

if (*(arg1 + 0xd1) == 0 || result u<= int.q(zmm1) + rax_5)
    bool z_1
    
    if (0 == *(arg1 + 0xd8))
        *(arg1 + 0xd8) = 0
        z_1 = true
    else
        *(arg1 + 0xd8)
        z_1 = false
    
    if (z_1)
        goto label_1425f3ed7
    
    int64_t* rcx_7 = *(arg1 + 0xa8)
    int32_t rax_8 = 0
    
    if (0 == *(arg1 + 0xd4))
        *(arg1 + 0xd4) = 0
    else
        rax_8 = *(arg1 + 0xd4)
    
    int64_t r8_1 = *rcx_7
    result = (*(r8_1 + 0x48))(rcx_7, zx.q(rax_8), r8_1)
    
    if (result.b != 0)
        *(arg1 + 0xd8)
        *(arg1 + 0xd8) = 0
    label_1425f3ed7:
        bool z_2
        
        if (0 == *(arg1 + 0xe0))
            *(arg1 + 0xe0) = 0
            z_2 = true
        else
            *(arg1 + 0xe0)
            z_2 = false
        
        if (z_2)
            goto label_1425f3f12
        
        int64_t* rcx_8 = *(arg1 + 0xa8)
        int32_t rax_11 = 0
        
        if (0 == *(arg1 + 0xdc))
            *(arg1 + 0xdc) = 0
        else
            rax_11 = *(arg1 + 0xdc)
        
        int64_t r8_2 = *rcx_8
        result = (*(r8_2 + 0x50))(rcx_8, zx.q(rax_11), r8_2)
        
        if (result.b != 0)
            *(arg1 + 0xe0)
            *(arg1 + 0xe0) = 0
            *(arg1 + 0xb0) = 0
        label_1425f3f12:
            void* rax_13 = *arg2
            int64_t r9_2 = rbx_1 - *(arg1 + 0xc8)
            int64_t* rcx_9 = *(arg1 + 0xa8)
            int64_t arg_18 = 0
            void* var_68 = rax_13
            
            if (rax_13 != 0)
                *(rax_13 + 8) += 1
            
            int32_t arg_8
            result = (*(*rcx_9 + 0x28))(rcx_9, &var_68, rbx_1, r9_2, &arg_8, arg_18)
            
            if (result.b != 0)
                int64_t* rcx_10 = *(arg1 + 0xa8)
                int64_t var_60 = 0
                result = (*(*rcx_10 + 0x38))(rcx_10, zx.q(arg_8), 0, 0, &var_60)
                *(arg1 + 0xb0) += 1
                *(arg1 + 0xc8) = rbx_1

if (arg1 == -0x78)
    return result

return LeaveCriticalSection(arg1 + 0x78)
