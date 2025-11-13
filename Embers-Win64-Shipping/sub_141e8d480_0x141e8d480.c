// 函数: sub_141e8d480
// 地址: 0x141e8d480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6

if (data_143f39be1 != 0)
    uint32_t rax
    rax, zmm6 = sub_141e7b230(&data_143a2d4e8)
    
    if (data_143f39be1 != 0)
        rax, zmm6 = sub_141e7b230(&data_143a2d4e8)

void* rcx = *arg1
int64_t rax_1

if (rcx != 0)
    rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)

if (rcx == 0 || ((rax_1 u>> 0x1a).d.b & 1) != 0)
    int64_t* rcx_15 = *arg1
    *arg1 = 0
    
    if (rcx_15 != 0)
        rcx_15[9].d -= 1
        
        if (rcx_15[9].d == 1)
            sub_140a2f6e0(rcx_15)
    
    return 

int64_t* rcx_1 = arg1[1]

if ((*(*rcx_1 + 0x20))(rcx_1, 0, 0).b != 0)
    return 

uint64_t r14
uint64_t var_28 = r14
int128_t var_38 = zmm6
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
zmm6.q = float.d(performanceCount)
zmm6.q = zmm6.q f* data_143d796f8

do
    int64_t* rcx_3 = arg1[1]
    
    if (rcx_3 == 0)
        r14.b = 1
    label_141e8d569:
        int64_t* rcx_4 = arg1[1]
        
        if (rcx_4 != 0)
            zmm6 = sub_140a4fc50(rcx_4)
            arg1[1] = 0
    else
        char rax_4 = (*(*rcx_3 + 0x20))(rcx_3, zx.q(data_143a2d448), 0)
        r14 = zx.q(rax_4)
        
        if (rax_4 != 0)
            goto label_141e8d569
    
    int64_t performanceCount_1
    QueryPerformanceCounter(&performanceCount_1)
    uint128_t zmm1 = zx.o(data_143a2d448)
    double zmm0[0x2] = zx.o(0)
    zmm0[0] = float.d(performanceCount_1)
    zmm1 = _mm_cvtepi32_ps(zmm1)
    zmm0[0] = zmm0[0] f* data_143d796f8
    zmm1.d = zmm1.d f* 0.00100000005f
    zmm0[0] = zmm0[0] f- zmm6.q
    zmm1.d = zmm1.d f+ 9.99999994e-09f
    
    if (not(_mm_cvtpd_ps(zmm0) f<= zmm1.d) && data_143f39ba0 == 1)
        EnterCriticalSection(&data_143f39f50)
        int64_t var_68 = 0
        int32_t var_60_1 = 0
        sub_1405947f0(&var_68, 8)
        int32_t rax_5 = var_60_1 + 8
        var_60_1 = rax_5
        
        if (rax_5 s> 0)
            sub_140594770(&var_68)
        
        int64_t rsi_1 = var_68
        UnDecorator::getReferenceType(rsi_1, u"NoStats", 0x10)
        LeaveCriticalSection(&data_143f39f50)
        EnterCriticalSection(&data_143f39f50)
        int64_t var_78 = 0
        int32_t var_70_1 = 0
        sub_1405947f0(&var_78, 8)
        int32_t rax_6 = var_70_1 + 8
        var_70_1 = rax_6
        
        if (rax_6 s> 0)
            sub_140594770(&var_78)
        
        int64_t rdi_1 = var_78
        UnDecorator::getReferenceType(rdi_1, u"NoStats", 0x10)
        var_78 = 0
        int64_t var_70_2 = 0
        LeaveCriticalSection(&data_143f39f50)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
while (r14.b == 0)

EnterCriticalSection(&data_143f39f50)
data_143f39fc8 = (zx.o(0)).q
return LeaveCriticalSection(&data_143f39f50) __tailcall
