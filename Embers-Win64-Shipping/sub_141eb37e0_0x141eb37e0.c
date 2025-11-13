// 函数: sub_141eb37e0
// 地址: 0x141eb37e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10238)
void var_10278
int64_t rax_1 = __security_cookie ^ &var_10278
uint32_t result = *(arg2 + 0xc)
int128_t* rcx = arg5
arg2[1].d = 0
int32_t* var_101d0 = rcx

if (result s< 0 && result != 0)
    sub_1405a5390(arg2, 0)
    rcx = var_101d0

if (arg1 == 0 || *(arg1 + 0x1f8) == 0)
    result.b = 0
else
    int128_t zmm6
    zmm6.d = (*rcx).d f- *arg4
    int128_t zmm7
    zmm7.d = (*(rcx + 4)).d f- arg4[1]
    int128_t zmm8
    zmm8.d = (*(rcx + 8)).d f- arg4[2]
    int128_t zmm9 = _mm_sqrt_ss(0, zmm7.d f* zmm7.d + zmm6.d f* zmm6.d + zmm8.d f* zmm8.d)
    
    if (not(zmm9.d f> 9.99999994e-09f))
        zmm9 = zx.o(0)
    
    int128_t zmm14 = zmm9
    void var_10190
    void** var_10180
    sub_141eb5350(&var_10180, arg7, 1, 
        sub_1422655c0(&var_10190, arg6, *(arg7 + 0x10), arg8, arg7, arg9, 1))
    int32_t var_10110_1 = 0xffffffff
    int16_t var_10108_1 = 0
    void var_100c8
    void* var_100d8_1 = &var_100c8
    void** const var_10128 = &data_142fcabc0
    char var_100e0_1 = 0
    int64_t var_100d0_1 = 0x200
    void* var_c8_1 = nullptr
    int32_t var_c0_1 = 0
    int128_t var_10120_1 = zx.o(0)
    int32_t var_bc_1 = 0x200
    int128_t var_10104
    __builtin_memset(&var_10104, 0, 0x18)
    char result_1 = 0
    int32_t var_100ec_1 = 0x7f7fffff
    float var_10200
    int64_t var_101fc
    int64_t zmm0_1
    
    if (zmm9.d f<= 0f)
        var_10200 = 1f
        var_101fc = 0
    else
        zmm0_1.d = 1f f/ zmm9.d
        zmm6.d = zmm6.d f* zmm0_1.d
        zmm7.d = zmm7.d f* zmm0_1.d
        zmm8.d = zmm8.d f* zmm0_1.d
        var_10200 = zmm6.d
        var_101fc.d = zmm7.d
        var_101fc:4.d = zmm8.d
    
    float zmm4_1[0x4] = *arg4
    float zmm3[0x4] = data_14399f668
    void* rbx_1 = *(arg1 + 0x1f8)
    int64_t var_101e0_1 = var_10200.q
    zmm0_1 = arg4[2]
    float zmm2_1[0x4] = _mm_unpacklo_ps(arg4[1], 0)
    int128_t* rax_4 = arg3[1]
    zmm4_1 = _mm_unpacklo_ps(zmm4_1, zmm0_1)
    zmm0_1 = data_14399f670
    zmm4_1 = _mm_unpacklo_ps(zmm4_1, zmm2_1[0].q)
    float zmm5_1[0x4] = *rax_4
    zmm3 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
    float var_10158[0x4] = zmm5_1
    float var_10138_1[0x4] = zmm3
    var_10200.q = rbx_1
    void* rax_5 = sub_141d3bad0()
    void* const rax_6
    
    if (rax_5 == 0)
        rax_6 = nullptr
    else
        rax_6 = sub_1407faf10(rax_5)
    
    SRWLOCK* SRWLock = rax_6 + 8
    
    if (rax_6 == 0)
        SRWLock = nullptr
    
    if (SRWLock != 0)
        AcquireSRWLockShared(SRWLock)
    
    int64_t* rax_7 = sub_14226e750(rbx_1)
    
    if (rax_7 != 0)
        (*(*rax_7 + 0x348))(rax_7, "Runtime\Engine\Public\PhysXInterfaceWrapper.h", 0x18)
    
    int32_t rcx_8 = *(arg7 + 0x18)
    int16_t rdi_1
    
    if (rcx_8 == 0)
        rdi_1 = 0xf
    else if (rcx_8 == 1)
        rdi_1 = 0xd
    else if (rcx_8 != 2)
        rdi_1 = 0xf
    else
        rdi_1 = (rcx_8 - 1).w + 0xd
    
    int16_t var_10198_1 = rdi_1
    float var_101c8
    int128_t var_101a8 = *sub_140acc970(&var_101c8, &var_10190)
    char var_10196_1 = 0
    int64_t rax_11 = sub_14183e350(*arg3)
    int64_t* rax_12 = sub_14226e750(var_10200.q)
    float zmm2_2[0x4] = var_10158
    var_10200 = var_101e0_1.d[0]
    var_101fc:4.d = var_101fc:4.d[0]
    int32_t var_10228_1 = 0
    int64_t var_10230_1 = 0
    void*** var_10238_1 = &var_10180
    int128_t* var_10240_1 = &var_101a8
    char var_10248_1
    int16_t var_101f0
    var_10248_1.q = &var_101f0
    float var_101c4_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0]
    var_101fc.d = var_101e0_1:4.d[0]
    float zmm0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_101c8 = zmm2_2[0]
    float var_101b8_1 = zmm4_1[0]
    float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    void** const* var_10250_2 = &var_10128
    zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
    float var_101b0_1 = zmm3[0]
    float var_101c0_1 = zmm1_1[0]
    float var_101bc_1 = zmm2_2[0]
    float var_101b4_1 = zmm0_3[0]
    var_101f0 = 0x607
    void* var_10258_1
    var_10258_1.d = zmm9.d
    (*(*rax_12 + 0x2f8))(rax_12, rax_11, &var_101c8, &var_10200, var_10258_1, var_10250_2, 
        var_10248_1, var_10240_1, var_10238_1, var_10230_1, var_10228_1)
    int64_t rdi_3 = sx.q(var_c0_1)
    
    if (rdi_3.d s> 0)
        void var_80c8
        
        if (var_100e0_1 != 0)
            void* rdx_4 = &var_80c8
            result_1 = 1
            
            if (var_c8_1 != 0)
                rdx_4 = var_c8_1
            
            zmm14 = *(rdx_4 + (rdi_3 << 6) - 0xc)
        
        int128_t* rax_18 = sub_14183e350(*arg3)
        int64_t* r9_3 = &var_80c8
        
        if (var_c8_1 != 0)
            r9_3 = var_c8_1
        
        var_10228_1.q = &var_10158
        var_10248_1.q = arg2
        var_10258_1.d = zmm9.d
        sub_141eafee0(&result_1, arg1, rdi_3.d, r9_3, var_10258_1.b, &var_10190, var_10248_1, arg4, 
            var_101d0, rax_18, var_10228_1, zmm14.d, *(arg7 + 0x12), *(arg7 + 0x13), result_1)
    
    if (rax_7 != 0)
        (*(*rax_7 + 0x350))(rax_7)
    
    if (SRWLock != 0)
        ReleaseSRWLockShared(SRWLock)
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    result = zx.d(result_1)

__security_check_cookie(rax_1 ^ &var_10278)
return result
