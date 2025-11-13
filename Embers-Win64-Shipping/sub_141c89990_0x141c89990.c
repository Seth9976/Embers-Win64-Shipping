// 函数: sub_141c89990
// 地址: 0x141c89990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t var_d8
sub_141c88700(arg1 + 0x60, &var_d8, arg2)
int64_t rax_2 = sx.q(var_d8)
void* rcx_1

if (rax_2.d != 0xffffffff)
    rcx_1 = *(arg1 + 0x60) + rax_2 * 0x28

int128_t var_d0

if (rax_2.d == 0xffffffff || rcx_1 == 0)
    __builtin_memset(&var_d0, 0, 0x18)
else
    var_d0.q = *(rcx_1 + 0x10)
    void* rax_5 = *(rcx_1 + 0x18)
    var_d0:8.q = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 0xc) += 1

int64_t* var_b8
int64_t* result = sub_141c4d620(&var_b8, &var_d0:8)
int64_t* result_1

if (var_b8 != 0)
    result = var_d0.q
    result_1 = result
    var_d0.q = 0

void* rcx_3 = var_d0:8.q

if (rcx_3 != 0)
    result = zx.q(*(rcx_3 + 0xc))
    *(rcx_3 + 0xc) -= 1
    
    if (result.d == 1)
        int64_t* rcx_4 = var_d0:8.q
        result = (*(*rcx_4 + 8))(rcx_4, 1)

if (result_1 != 0)
    sub_141c8bb00(arg1 + 0x60, arg2)
    void* rsi_1 = *(arg1 + 0x148)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    int128_t zmm0 = *arg2
    int128_t zmm6
    zmm6.q = float.d(performanceCount)
    zmm6.q = zmm6.q f* data_143d796f8
    zmm6.q = zmm6.q f+ 16777216.0
    void*** rax_7 = sub_140a82f30(0x28, 8)
    *rax_7 = &data_142ec17e8
    double zmm1[0x2] = _mm_unpacklo_pd(zmm0, zmm6.q)
    *(rax_7 + 8) = rsi_1.o
    *(rax_7 + 0x18) = zmm1
    void*** var_78_1 = rax_7
    void* var_88
    void* const rax_8 = var_88
    
    if (rax_7 != -8)
        rax_8 = &data_141c852b0
    
    void* const var_88_1 = rax_8
    int64_t* rax_9 = j_sub_140a82f30(0x50)
    int64_t* rdx_4 = rax_9
    int128_t var_68
    
    if (rax_9 != 0)
        *rax_9 = 0
        rax_9[2] = var_88_1
        rax_9[4] = var_78_1
        var_78_1 = nullptr
        *(rax_9 + 0x30) = var_68
        double var_58[0x2]
        *(rax_9 + 0x40) = var_58
        void* const rax_10 = var_88_1
        
        if (rdx_4[2] != 0)
            rax_10 = nullptr
        
        var_88_1 = rax_10
        int32_t temp0_3 = *(rsi_1 + 0x1d0)
        *(rsi_1 + 0x1d0) = rdx_4
        int64_t** rax_12 = temp0_3
        int32_t temp0_4 = *rax_12
        *rax_12 = rdx_4
        rdx_4 = temp0_4
    
    if (var_88_1 != 0)
        int128_t* rcx_10 = &var_68
        
        if (var_78_1 != 0)
            rcx_10 = var_78_1
        
        (*(*rcx_10 + 0x10))(rcx_10, rdx_4)
    
    result = sub_141c8a730(arg1, arg2, 1)

int64_t* rcx_12 = var_b8

if (rcx_12 != 0)
    result = zx.q(rcx_12[1].d)
    rcx_12[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_1 = var_b8
        result = (**rbx_1)(rbx_1)
        int32_t rdi_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_14 = var_b8
            result = (*(*rcx_14 + 8))(rcx_14, zx.q(rdi_1))

__security_check_cookie(rax_1 ^ &var_f8)
return result
