// 函数: sub_140f11a80
// 地址: 0x140f11a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = nullptr
int64_t r15

if (arg7 == 0)
    r15.b = 0x20
else
    if (*(arg1 + 0x1a0) != 0)
        int64_t* rcx = *(arg1 + 0x198)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(arg1 + 0x1a0) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(arg1 + 0x198)
            
            *(arg1 + 0x190) = (*(*rcx_1 + 0x48))(rcx_1)
    
    if (*(arg1 + 0x190) == 0)
        r15.b = 0x20
    else
        r15.b = 0

void* r9 = *(arg1 + 0x2a8)
uint32_t rcx_2 = zx.d(*(r9 + 0x30))
void* rdx = r9 + 0x20

if (rcx_2 != 0)
    if (rcx_2 == 1)
        rdx = *(rdx + 0x18)
    else if (rcx_2 == 3)
        rdx = &arg6[8]
    else
        rdx = &arg6[4]

float zmm2[0x4] = *rdx
char rcx_4 = *(arg3 + 0x34)
zmm2[0] = zmm2[0] f* *arg6
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
temp0_2[0] = temp0_2[0] f* arg6[1]
float var_f8 = zmm2[0]
int128_t* var_100 = &var_f8
float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_3[0] = temp0_3[0] f* arg6[2]
int64_t var_bc = 0
float var_f4 = temp0_2[0]
float zmm1[0x4] = *(arg3 + 0xc)
float temp0_4[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
temp0_4[0] = temp0_4[0] f* arg6[3]
char var_108 = r15.b
float var_f0 = temp0_3[0]
float zmm0[0x4] = arg3[2].d
float var_c8 = zmm1[0]
float var_c4 = zmm0[0]
float var_ec = temp0_4[0]
int64_t var_b4 = *arg3
float var_ac[0x4] = *(arg3 + 0x1c)
float var_c0 = arg3[1].d[0]
int64_t var_9c = *(arg3 + 0x2c)
float zmm6[0x4] = sub_140db3600(arg4, arg5, &var_c8, r9, var_108, var_100)
float var_e8

if (*(arg1 + 0x2d0) != 0)
    int64_t* rcx_6 = *(arg1 + 0x2c8)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rcx_7
        
        if (*(arg1 + 0x2d0) == 0)
            rcx_7 = nullptr
        else
            rcx_7 = *(arg1 + 0x2c8)
        
        (*(*rcx_7 + 0x48))(rcx_7, &var_e8)
        *(arg1 + 0x2b0) = var_e8.o

float zmm10[0x4] = 0x3f800000
uint64_t result

if (1f f<= *(arg1 + 0x2b4) || 1f f<= *(arg1 + 0x2b8))
    void* r8_1 = *(arg1 + 0x2d8)
    uint32_t rcx_8 = zx.d(*(r8_1 + 0x30))
    void* rdx_3 = r8_1 + 0x20
    
    if (rcx_8 != 0)
        if (rcx_8 == 1)
            rdx_3 = *(rdx_3 + 0x18)
        else if (rcx_8 == 3)
            rdx_3 = &arg6[8]
        else
            rdx_3 = &arg6[4]
    
    float zmm2_1[0x4] = *rdx_3
    zmm2_1[0] = zmm2_1[0] f* *arg6
    float temp0_5[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    temp0_5[0] = temp0_5[0] f* arg6[1]
    var_e8 = zmm2_1[0]
    float temp0_6[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    temp0_6[0] = temp0_6[0] f* arg6[2]
    float var_e4_1 = temp0_5[0]
    float temp0_7[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    temp0_7[0] = temp0_7[0] f* arg6[3]
    float var_e0_1 = temp0_6[0]
    float var_dc_1 = temp0_7[0]
    float zmm7[0x4] = *(r8_1 + 8)
    int128_t zmm8 = *(r8_1 + 0xc)
    zmm7[0] = zmm7[0] * 0.5f
    zmm8.d = zmm8.d f* 0.5f
    
    if (*(arg1 + 0x2d0) != 0)
        int64_t* rcx_10 = *(arg1 + 0x2c8)
        
        if (rcx_10 != 0 && (*(*rcx_10 + 0x28))(rcx_10) != 0)
            if (*(arg1 + 0x2d0) != 0)
                rsi = *(arg1 + 0x2c8)
            
            float var_d8[0x4]
            (*(*rsi + 0x48))(rsi, &var_d8)
            *(arg1 + 0x2b0) = var_d8
    
    float zmm0_1[0x4] = *(arg1 + 0x2b4)
    int128_t zmm11
    zmm11.d = (*(arg1 + 0x2b0)).d f* 0.00277777785f
    
    if (zmm0_1[0] != 1f)
        zmm10 = zmm0_1
        zmm10[0] = zmm10[0] * 0.5f
    else
        zmm0_1 = *(arg1 + 0x2b8)
        zmm0_1[0] = zmm0_1[0] * 0.5f
        zmm10[0] = 1f - zmm0_1[0]
    
    zmm2_1 = *(arg3 + 0x1c)
    float zmm1_1[0x4] = arg3[4].d
    int128_t zmm9 = arg3[1].d
    int64_t zmm5_1 = zmm1_1[0].q
    zmm11.d = zmm11.d f* *arg3
    void* r9_1 = *(arg1 + 0x2d8)
    zmm10[0] = zmm10[0] f* *(arg3 + 4)
    char rdx_5 = *(arg3 + 0x34)
    float zmm4_1[0x4] = *(arg3 + 0x24)
    zmm11.d = zmm11.d f- zmm7[0]
    float zmm3_1[0x4] = arg3[5].d
    zmm7 = zmm2_1
    zmm10[0] = zmm10[0] f- zmm8.d
    int32_t var_c0_1 = zmm9.d
    int64_t var_bc_1 = 0
    float var_f4_1 = zmm1_1[0]
    zmm7[0] = zmm7[0] f* zmm11.d
    zmm5_1.d = zmm5_1.d f* zmm11.d
    int128_t* var_100_1 = &var_e8
    zmm4_1[0] = zmm4_1[0] * zmm10[0]
    char var_108_1 = r15.b
    var_f8 = zmm2_1[0]
    float var_f0_1 = zmm4_1[0]
    zmm7[0] = zmm7[0] + zmm4_1[0]
    float var_ec_1 = zmm3_1[0]
    zmm2_1 = var_f8.o
    zmm8.d = zmm11.d f* zmm9.d
    zmm7[0] = zmm7[0] f+ *(arg3 + 0x2c)
    zmm3_1[0] = zmm3_1[0] * zmm10[0]
    zmm8.d = zmm8.d f+ *(arg3 + 0xc)
    zmm10[0] = zmm10[0] f* zmm9.d
    zmm5_1.d = zmm5_1.d f+ zmm3_1[0]
    zmm10[0] = zmm10[0] f+ arg3[2].d
    var_c8 = zmm8.d
    zmm5_1.d = zmm5_1.d f+ arg3[6].d
    float var_c4_1 = zmm10[0]
    var_b4.d = (*(r9_1 + 8))[0]
    zmm1_1 = *(r9_1 + 0xc)
    char var_94
    char var_94_2 = ((rdx_5 & 1) * 2) | ((((rcx_4 & 1) * 2) | (var_94 & 0xfc)) & 0xfc)
    int64_t var_9c_1 = (_mm_unpacklo_ps(zmm7, zmm5_1)).q
    var_b4:4.d = zmm1_1[0]
    float var_ac_1[0x4] = zmm2_1
    sub_140db3600(arg4, arg5 + 1, &var_c8, r9_1, var_108_1, var_100_1)
    result = zx.q(arg5 + 1)
    int512_t zmm6_1
    zmm6_1.o = zmm6
else
    result = zx.q(arg5)

__security_check_cookie(rax_1 ^ &var_128)
return result
