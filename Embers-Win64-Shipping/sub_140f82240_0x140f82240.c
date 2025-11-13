// 函数: sub_140f82240
// 地址: 0x140f82240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int128_t zmm7 = arg5
float zmm10[0x4] = arg4
int128_t zmm6
zmm6.d = 1f f/ *(arg6 + 8)
zmm10[0] = zmm10[0] f+ *(arg3 + 0x30)
float zmm11[0x4] = *(arg3 + 0x34)
int128_t zmm12 = *(arg3 + 0x40)
uint64_t result

if (zmm7.d f== 0f)
    result = zx.q(arg8)
else
    bool cond:1_1 = *(arg1 + 0x20) == 0
    float zmm2[0x4] = *(arg9 + 0x10)
    zmm2[0] = zmm2[0] f* *arg9
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    temp0_1[0] = temp0_1[0] f* arg9[1]
    float var_c8 = zmm2[0]
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
    temp0_2[0] = temp0_2[0] f* arg9[2]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
    temp0_3[0] = temp0_3[0] f* arg9[3]
    float var_c4_1 = temp0_1[0]
    float var_c0_1 = temp0_2[0]
    float var_bc_1 = temp0_3[0]
    
    if (not(cond:1_1))
        int64_t* rcx = *(arg1 + 0x18)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x20) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x18)
            
            *(arg1 + 8) = (*(*rcx_1 + 0x48))(rcx_1)
    
    int128_t zmm8 = *(arg6 + 8)
    int32_t zmm4 = *(arg6 + 0x24)
    zmm2 = *(arg6 + 0x1c)
    arg4 = *(arg6 + 0x28)
    float zmm1[0x4] = *(arg6 + 0x20)
    void* r9_1 = *(arg1 + 8)
    char r8 = *(arg6 + 0x34) & 1
    zmm10[0] = zmm10[0] f* zmm6.d
    zmm11[0] = zmm11[0] f* zmm6.d
    int128_t zmm9
    zmm9.d = zmm6.d f* zmm7.d
    int128_t* var_e0_1 = &var_c8
    zmm12.d = zmm12.d f* zmm6.d
    char var_84
    char var_84_1 = (r8 * 2) | (var_84 & 0xfc)
    zmm10[0] = zmm10[0] * zmm2[0]
    zmm11[0] = zmm11[0] f* zmm4
    int64_t var_ac_1 = 0
    zmm7.d = zmm8.d f* zmm10[0]
    zmm10[0] = zmm10[0] + zmm11[0]
    zmm10[0] = zmm10[0] * zmm1[0]
    zmm7.d = zmm7.d f+ *(arg6 + 0xc)
    zmm6.d = zmm8.d f* zmm11[0]
    zmm10[0] = zmm10[0] f+ *(arg6 + 0x2c)
    zmm11[0] = zmm11[0] * arg4[0]
    zmm6.d = zmm6.d f+ *(arg6 + 0x10)
    float var_d8_1 = zmm2[0]
    float var_d4_1 = zmm1[0]
    zmm10[0] = zmm10[0] + zmm11[0]
    int32_t var_d0_1 = zmm4
    float var_cc_1 = arg4[0]
    zmm10[0] = zmm10[0] f+ *(arg6 + 0x30)
    float var_9c_1[0x4] = var_d8_1.o
    int32_t var_b8 = zmm7.d
    int32_t var_b4_1 = zmm6.d
    int64_t var_8c_1 = (_mm_unpacklo_ps(zmm10, zmm10[0].q)).q
    int32_t var_b0_1 = zmm8.d
    int32_t var_a4_1 = zmm9.d
    int32_t var_a0_1 = zmm12.d
    sub_140db3600(arg7, arg8 + 1, &var_b8, r9_1, (arg10 ^ 1) << 5, var_e0_1)
    result = zx.q(arg8 + 1)

__security_check_cookie(rax_1 ^ &var_108)
return result
