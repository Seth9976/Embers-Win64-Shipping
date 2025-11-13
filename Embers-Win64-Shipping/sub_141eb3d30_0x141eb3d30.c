// 函数: sub_141eb3d30
// 地址: 0x141eb3d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x10230)
void var_10268
int64_t rax_1 = __security_cookie ^ &var_10268
uint32_t result = *(arg2 + 0xc)
int128_t* rcx = arg5
arg2[1].d = 0
int32_t* var_101c0 = rcx

if (result s< 0 && result != 0)
    sub_1405a5390(arg2, 0)
    rcx = var_101c0

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
    void var_10180
    void** var_10170
    sub_141eb5350(&var_10170, arg7, 1, 
        sub_1422655c0(&var_10180, arg6, *(arg7 + 0x10), arg8, arg7, arg9, 1))
    int32_t var_10100_1 = 0xffffffff
    int16_t var_100f8_1 = 0
    void var_100b8
    void* var_100c8_1 = &var_100b8
    void** const var_10118 = &data_142fcabc0
    char var_100d0_1 = 0
    int64_t var_100c0_1 = 0x200
    void* var_b8_1 = nullptr
    int32_t var_b0_1 = 0
    int128_t var_10110_1 = zx.o(0)
    int32_t var_ac_1 = 0x200
    int128_t var_100f4
    __builtin_memset(&var_100f4, 0, 0x18)
    char result_1 = 0
    int32_t var_100dc_1 = 0x7f7fffff
    float var_101f0
    int64_t var_101ec
    int64_t zmm0_1
    
    if (zmm9.d f<= 0f)
        var_101f0 = 1f
        var_101ec = 0
    else
        zmm0_1.d = 1f f/ zmm9.d
        zmm6.d = zmm6.d f* zmm0_1.d
        zmm7.d = zmm7.d f* zmm0_1.d
        zmm8.d = zmm8.d f* zmm0_1.d
        var_101f0 = zmm6.d
        var_101ec.d = zmm7.d
        var_101ec:4.d = zmm8.d
    
    zmm0_1 = var_101f0.q
    float zmm4_1[0x4] = *arg4
    float zmm3[0x4] = data_14399f668
    void* rbx_1 = *(arg1 + 0x1f8)
    float zmm2_1[0x4] = _mm_unpacklo_ps(arg4[1], 0)
    int64_t var_101d8_1 = zmm0_1
    zmm4_1 = _mm_unpacklo_ps(zmm4_1, arg4[2])
    zmm0_1 = data_14399f670
    zmm4_1 = _mm_unpacklo_ps(zmm4_1, zmm2_1[0].q)
    zmm2_1 = _mm_unpacklo_ps(data_14399f66c, 0)
    float var_10128_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm3, zmm0_1), zmm2_1[0].q)
    float var_10148[0x4] = arg3[3]
    var_101f0.q = rbx_1
    void* rax_4 = sub_141d3bad0()
    void* const rax_5
    
    if (rax_4 == 0)
        rax_5 = nullptr
    else
        rax_5 = sub_1407faf10(rax_4)
    
    SRWLOCK* SRWLock = rax_5 + 8
    
    if (rax_5 == 0)
        SRWLock = nullptr
    
    if (SRWLock != 0)
        AcquireSRWLockShared(SRWLock)
    
    int64_t* rax_6 = sub_14226e750(rbx_1)
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x348))(rax_6, "Runtime\Engine\Public\PhysXInterfaceWrapper.h", 0x18)
    
    int32_t rcx_8 = *(arg7 + 0x18)
    int16_t rsi_1
    
    if (rcx_8 == 0)
        rsi_1 = 0xf
    else if (rcx_8 == 1)
        rsi_1 = 0xd
    else if (rcx_8 != 2)
        rsi_1 = 0xf
    else
        rsi_1 = (rcx_8 - 1).w + 0xd
    
    float var_101b8
    int32_t* rax_8 = sub_140acc970(&var_101b8, &var_10180)
    void* rcx_11 = var_101f0.q
    int16_t var_10188_1 = rsi_1
    char var_10186_1 = 0
    int128_t var_10198 = *rax_8
    int64_t* rax_9 = sub_14226e750(rcx_11)
    float zmm2_2[0x4] = var_10148
    var_101f0 = var_101d8_1.d[0]
    var_101ec:4.d = var_101ec:4.d[0]
    int32_t var_10218_1 = 0
    int64_t var_10220_1 = 0
    void*** var_10228_1 = &var_10170
    int128_t* var_10230_1 = &var_10198
    char var_10238_1
    int16_t var_101e0
    var_10238_1.q = &var_101e0
    float var_101b4_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)[0]
    var_101ec.d = var_101d8_1:4.d[0]
    float zmm0_3[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
    var_101b8 = zmm2_2[0]
    float var_101a8_1 = zmm4_1[0]
    float zmm1_1[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
    void** const* var_10240_2 = &var_10118
    zmm3 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
    zmm2_2 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)
    float var_101a0_1 = zmm3[0]
    float var_101b0_1 = zmm1_1[0]
    float var_101ac_1 = zmm2_2[0]
    float var_101a4_1 = zmm0_3[0]
    var_101e0 = 0x607
    void* var_10248_1
    var_10248_1.d = zmm9.d
    (*(*rax_9 + 0x2f8))(rax_9, arg3, &var_101b8, &var_101f0, var_10248_1, var_10240_2, var_10238_1, 
        var_10230_1, var_10228_1, var_10220_1, var_10218_1)
    int64_t r8_2 = sx.q(var_b0_1)
    
    if (r8_2.d s> 0)
        void var_80b8
        
        if (var_100d0_1 != 0)
            result_1 = 1
            void* rcx_13 = &var_80b8
            
            if (var_b8_1 != 0)
                rcx_13 = var_b8_1
            
            zmm14 = *(rcx_13 + (r8_2 << 6) - 0xc)
        
        int64_t* r9_3 = &var_80b8
        
        if (var_b8_1 != 0)
            r9_3 = var_b8_1
        
        var_10218_1.q = &var_10148
        var_10238_1.q = arg2
        var_10248_1.d = zmm9.d
        sub_141eafee0(&result_1, arg1, r8_2.d, r9_3, var_10248_1.b, &var_10180, var_10238_1, arg4, 
            var_101c0, arg3, var_10218_1, zmm14.d, *(arg7 + 0x12), *(arg7 + 0x13), result_1)
    
    if (rax_6 != 0)
        (*(*rax_6 + 0x350))(rax_6)
    
    if (SRWLock != 0)
        ReleaseSRWLockShared(SRWLock)
    
    if (var_b8_1 != 0)
        sub_140a74f90(var_b8_1)
    
    result = zx.d(result_1)

__security_check_cookie(rax_1 ^ &var_10268)
return result
