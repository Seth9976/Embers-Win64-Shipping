// 函数: sub_1425edc40
// 地址: 0x1425edc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg2)
void* rbx_1 = arg1 + 0xa0 + rbp * 0x60

if (0 == *(rbx_1 + 4))
    *(rbx_1 + 4) = 0
else
    *(rbx_1 + 4)

*(rbx_1 + 4) = 2
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] + 16777216.0
zmm0[0] = zmm0[0] * 10000000.0
zmm0[0] = zmm0[0] + 0.5
int64_t rcx_1 = int.q(zmm0[0])

if (rcx_1 != -0x8000000000000000)
    int128_t zmm1
    zmm1.q = float.d(rcx_1)
    
    if (not(zmm1.q f== zmm0[0]))
        uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0]))
        zmm0 = zx.o(0)
        zmm0[0] = float.d(rcx_1 - (zx.q(temp0_2) & 1))

*(rbx_1 + 0x20) = arg3
*(rbx_1 + 0x48) = int.q(zmm0[0])

if (rbx_1 + 0x30 != arg4)
    int64_t* rcx_3 = *(rbx_1 + 0x30)
    *(rbx_1 + 0x30) = *arg4
    *arg4 = 0
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)

int32_t rax_7 = 0

if (0 == data_143f70b54)
    data_143f70b54 = 0
else
    rax_7 = data_143f70b54

int64_t var_68 = arg1
void* var_60 = rbx_1
int32_t var_58 = rbp.d
int32_t r9
int32_t var_54 = r9
int32_t var_50 = rax_7
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_9
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_9.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_9.b == 0))
        void var_80
        int64_t* rax_10 = sub_1425eda90(&var_80, nullptr, 0xff)
        void* rcx_7 = *rax_10
        *(rcx_7 + 0x10) = var_68.o
        *(rcx_7 + 0x20) = var_58.o
        void* rcx_8 = *rax_10
        int32_t r8 = rax_10[2].d
        int64_t* rdx_3 = rax_10[1]
        int64_t* rbx_2 = *(rcx_8 + 0x38)
        int64_t* arg_8 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_8
        
        result = sub_1407c96b0(rcx_8, rdx_3, r8, 1)
        
        if (rbx_2 != 0)
            result = *rdi_1
            *rdi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_8)
    else
        double var_48[0x2] = var_68.o
        int128_t var_38_1 = var_58.o
        result = sub_1425e9800(&var_48)
else
    result = sub_1425e9800(&var_68)

int64_t* rcx_10 = *arg4

if (rcx_10 == 0)
    return result

return (**rcx_10)(rcx_10, 1)
