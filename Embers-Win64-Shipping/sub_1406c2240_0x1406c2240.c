// 函数: sub_1406c2240
// 地址: 0x1406c2240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int32_t rsi = av_image_get_buffer_size(0x1a, zx.q(*(arg3 + 0x68)), zx.q(*(arg3 + 0x6c)), 1) + 1

if (*(arg1 + 0x700) != rsi)
    int32_t rcx = *(arg1 + 0x704)
    *(arg1 + 0x700) = 0
    
    if (rcx s< 0)
        sub_1405c5510(arg1 + 0x6f8, 0)
        rcx = *(arg1 + 0x704)
    
    int32_t rax_3 = *(arg1 + 0x700) + rsi
    *(arg1 + 0x700) = rax_3
    
    if (rax_3 s> rcx)
        sub_1405daba0(arg1 + 0x6f8)

int128_t var_78 = zx.o(0)
int32_t result_2 = av_image_fill_linesizes(&var_78, 0x1c, zx.q(*(arg3 + 0x68)))
int32_t result_1 = result_2
int128_t var_68
__builtin_memset(&var_68, 0, 0x20)
av_image_fill_pointers(&var_68, 0x1c, zx.q(*(arg3 + 0x6c)), *(arg1 + 0x6f8), &var_78)
int32_t r8_3 = *(arg3 + 0x6c)
int32_t rdx_2 = *(arg3 + 0x68)
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x18)
int128_t* var_f8
var_f8.d = rdx_2
int64_t var_d0
int64_t var_c8
int64_t rax_4 = sws_getCachedContext(*arg4, arg5, arg6, zx.q(*(arg3 + 0x74)), var_f8, r8_3, 0x1c, 
    4, var_d8, var_d0, var_c8)
*arg4 = rax_4
uint64_t result

if (rax_4 == 0)
    result = 0xffffffff
else
    int32_t var_e8
    var_e8.q = &var_78
    int32_t var_f0
    var_f0.q = &var_68
    var_f8.d = *(arg3 + 0x6c)
    sws_scale(rax_4, arg3, arg3 + 0x40, 0, var_f8, var_f0, var_e8)
    EnterCriticalSection(arg1 + 0xa0)
    void*** var_88
    sub_1406b80e0(*(arg1 + 0x158), &var_88)
    int32_t rdx_5 = *(arg3 + 0x6c)
    int32_t rax_5 = *(arg3 + 0x68)
    arg6 = 0x416312d000000000
    uint128_t zmm0_1
    zmm0_1.q = *(arg2 + 0x30) f* arg6
    int64_t zmm3 = 0x3fe0000000000000
    zmm0_1.q = zmm0_1.q f+ zmm3
    int64_t rcx_10 = int.q(zmm0_1.q)
    
    if (rcx_10 != -0x8000000000000000 && not(float.d(rcx_10) f== zmm0_1.q))
        zmm0_1.q = float.d(rcx_10 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
    
    int64_t rdi_1 = int.q(zmm0_1.q)
    zmm0_1.q = *(arg2 + 0x38) f* arg6
    zmm0_1.q = zmm0_1.q f+ zmm3
    int64_t rcx_12 = int.q(zmm0_1.q)
    
    if (rcx_12 != -0x8000000000000000 && not(float.d(rcx_12) f== zmm0_1.q))
        zmm0_1.q = float.d(rcx_12 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
    
    void*** r15_1 = var_88
    int32_t rax_10 = var_78.d
    uint32_t count = *(arg1 + 0x700) - 1
    int64_t rcx_14 = *(arg1 + 0x6f8)
    int64_t var_a8 = rcx_14
    
    if (rcx_14 != 0 && count != 0 && rax_10 != 0 && rax_10 * rdx_5 u<= count)
        int32_t rcx_15 = *(r15_1 + 0x1c)
        r15_1[3].d = 0
        
        if (count s> rcx_15)
            sub_1405c5510(&r15_1[2], count)
            rcx_15 = *(r15_1 + 0x1c)
        
        int64_t r12 = sx.q(r15_1[3].d)
        int32_t rax_12 = r12.d + count
        r15_1[3].d = rax_12
        
        if (rax_12 s> rcx_15)
            sub_1405daba0(&r15_1[2])
        
        memcpy(r12 + r15_1[2], var_a8, count)
        r15_1[5] = int.q(zmm0_1.q)
        r15_1[4].d = rax_5
        *(r15_1 + 0x24) = rdx_5
        r15_1[7].d = 2
        *(r15_1 + 0x3c) = rax_10
        r15_1[8] = rdi_1
        int64_t r8_6 = **(arg1 + 0x160)
        uint128_t zmm0_2 = var_88.o
        var_a8.o = zmm0_2
        void* rax_17 = _mm_bsrli_si128(zmm0_2, 8).q
        
        if (rax_17 != 0)
            *(rax_17 + 8) += 1
        
        r8_6(arg1 + 0x160, &var_a8)
        int64_t* var_a0
        
        if (var_a0 != 0)
            var_a0[1].d -= 1
            
            if (var_a0[1].d == 1)
                (**var_a0)(var_a0)
                int32_t rax_20 = *(var_a0 + 0xc)
                *(var_a0 + 0xc) -= 1
                
                if (rax_20 == 1)
                    (*(*var_a0 + 8))(var_a0, 1)
        
        result_1 = result_2
    
    int64_t* var_80
    
    if (var_80 != 0)
        var_80[1].d -= 1
        
        if (var_80[1].d == 1)
            (**var_80)(var_80)
            int32_t rsi_1 = *(var_80 + 0xc)
            *(var_80 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_80 + 8))(var_80, zx.q(rsi_1))
    
    if (arg1 != -0xa0)
        LeaveCriticalSection(arg1 + 0xa0)
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_118)
return result
