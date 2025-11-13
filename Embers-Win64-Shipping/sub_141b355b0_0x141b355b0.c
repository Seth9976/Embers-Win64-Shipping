// 函数: sub_141b355b0
// 地址: 0x141b355b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b28
int64_t rax_1 = __security_cookie ^ &var_b28
void* rdi = nullptr
int32_t var_af8 = 0
int64_t result = sub_140d3c6e0(&sub_141af0440(arg6)[1])

if (result != 0)
    int32_t rax_3 = data_143dbb210
    int64_t var_ae8 = data_143dbb208
    int32_t var_ae0_1 = rax_3
    var_af8.q = data_143dbb1f8.q
    int32_t var_af0_1 = data_143dbb200
    sub_141dd6920(arg2, &var_af8, &var_ae8, 0, nullptr, 0)
    int64_t* rax_5 = sub_142486290()
    void* rax_6 = rax_5[0x23]
    
    if (rax_6 == 0)
        int64_t rdx_1 = *rax_5
        (*(rdx_1 + 0x390))(rax_5, rdx_1)
        rax_6 = rax_5[0x23]
    
    uint128_t zmm0_2
    
    if (rax_6 != 0)
        *(*(arg2 + 0x228) + 0x200) = *(*(rax_6 + 0x228) + 0x200)
        void* rax_9 = *(result + 0x150)
        
        if (rax_9 != 0)
            rdi = *(rax_9 + 0x28)
        
        char* rax_10
        int32_t rbx_2
        
        if (rax_9 == 0 || rdi == 0)
            void var_ad8
            rax_10 = sub_1422d7fd0(&var_ad8)
            rbx_2 = 2
        else
            void var_598
            rax_10 = sub_1422d6d20(&var_598, rdi + 0x60)
            rbx_2 = 1
        
        sub_1405af800(*(arg2 + 0x228) + 0x270, rax_10)
        
        if ((rbx_2.b & 2) != 0)
            rbx_2 &= 0xfffffffd
            int64_t var_5a8
            
            if (var_5a8 != 0)
                sub_140a74f90(var_5a8)
        
        int64_t var_68
        
        if ((rbx_2.b & 1) != 0 && var_68 != 0)
            sub_140a74f90(var_68)
        
        if (rdi == 0)
            zmm0_2 = zx.o(0)
        else
            zmm0_2 = *(*(*(result + 0x150) + 0x28) + 0x5a0)
        
        *(*(arg2 + 0x228) + 0x240) = zmm0_2.d
    
    int32_t rax_13 = *(arg4 + 0x24)
    int32_t rdx_4 = *(arg1 + 0x40)
    var_ae8.d = rdx_4
    var_ae8:4.d = 0
    int32_t var_af4
    int64_t rax_14
    
    if (rax_13 == 0x80000000)
        int64_t* rax_15 = 0x10
        
        if (*(arg4 + 0x20) != 0)
            rax_15 = 4
        
        rax_14 = *(rax_15 + arg4)
    else
        var_af8 = rax_13
        var_af4 = 0
        rax_14 = var_af8.q
    
    var_af8.q = var_ae8
    var_ae8 = rax_14
    float zmm2_1[0x4] = var_ae8:4.d
    zmm2_1[0] = zmm2_1[0] f- var_af4
    zmm2_1[0] = zmm2_1[0] + zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] - 0.5f
    int32_t rcx_14 = int.d(zmm2_1[0]) s>> 1
    int32_t r8_1 = rax_14.d - rdx_4 + rcx_14
    zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_14))
    var_af8 = r8_1
    zmm2_1[0] = zmm2_1[0] f- zmm0_2.d
    
    if (zmm2_1[0] >= 0f)
        float var_af4_2 = __minss_xmmss_memss(zmm2_1[0], 0x3f7fffff)[0]
    else
        int32_t var_af4_1 = 0
    
    int64_t r9 = *(arg4 + 0x18)
    zmm2_1 = zx.o(0)
    uint32_t rdx_6 = (r9 u>> 0x20).d
    var_ae8 = var_af8.q
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rdx_6)).d f* var_ae8:4.d
    zmm2_1[0].q = float.d(sx.q(rdx_6) * sx.q(r8_1))
    float zmm1_1[0x4] = _mm_cvtepi32_pd(zx.o(r9.d)[0].q)
    zmm0_2 = _mm_cvtps_pd(zmm0_2.q)
    zmm2_1[0].q = zmm2_1[0].q f+ zmm0_2.q
    zmm2_1[0].q = zmm2_1[0].q f/ zmm1_1[0].q
    sub_141eada00(result, _mm_cvtpd_ps(zmm2_1), arg3, arg5)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_b28)
return result
