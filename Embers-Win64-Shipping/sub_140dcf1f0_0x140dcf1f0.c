// 函数: sub_140dcf1f0
// 地址: 0x140dcf1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r13 = *arg2
char r8 = *(arg1 + 0x28)
void* r14 = *(r13 + 0x18)
float var_f0[0x4] = *(r13 + 8)
void var_fc
int128_t zmm6
uint128_t zmm7
zmm6, zmm7 = sub_140ae16d0(&var_f0, &var_fc, r8)
int64_t* rbx = *(*(arg1 + 0x18) + 8)
int64_t* rbx_1
int64_t rdi

if (sub_140a80e70() == 0)
    rdi = *rbx
    rbx_1 = rbx[1]
else
    sub_140a80f40()
    rdi = rbx[2]
    rbx_1 = rbx[3]

if (rbx_1 != 0)
    rbx_1[1].d += 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rcx_3 = *(arg1 + 0x18)
int64_t* rax_7 = (*(*rcx_3 + 8))(rcx_3, &var_f0)
int64_t* rbx_2 = var_f0[2].q
int64_t rdx_2 = *rax_7
int64_t var_f8 = rdx_2

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdx_2 = var_f8

int16_t var_100 = *(r14 + 0x10)
int16_t result = *(r14 + 0x12)
int16_t result_1 = result

if (result != 0)
    float zmm3[0x4] = 0x3f800000
    int32_t zmm4_1 = arg2[3].d
    int32_t zmm5_1 = *(arg2 + 0x1c)
    int32_t rbx_3 = arg2[6].d
    char var_108 = *(arg2 + 0x4d)
    zmm3[0] = 1f f/ arg2[9].d.d
    float var_78[0x4]
    int128_t* var_c0_1 = &var_78
    char* var_a8_1 = &var_108
    int16_t* var_a0_1 = &result_1
    void* var_d8 = r14
    void* var_d0_1 = arg1
    int64_t* var_c8_1 = arg2
    int64_t var_b8_1 = rdi
    int64_t var_b0_1 = rdx_2
    int16_t* var_98_1 = &var_100
    int32_t var_68_1 = zmm4_1
    int32_t var_64_1 = zmm5_1
    zmm3[0] = zmm3[0] f* arg2[1].d
    zmm3[0] = zmm3[0] f* *(arg2 + 0xc)
    float zmm1_1 = zmm3[0] f* arg2[2].d
    zmm3[0] = zmm3[0] f* *(arg2 + 0x14)
    float zmm2_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
    zmm2_1[0] = zmm3[0]
    uint128_t var_58_1 = zmm7
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xc6)
    zmm2_1[0] = zmm1_1
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x27)
    zmm2_1[0] = zmm3[0]
    zmm2_1 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x39)
    var_78 = zmm2_1
    int64_t rcx_6 = *(r14 + 0x28)
    int64_t r15_1 = *(r14 + 0x18)
    zmm7 = _mm_cvtepi32_ps(zx.o(*(r14 + 0x20)))
    var_f0 = zmm2_1
    var_f0[0].q = rcx_6
    int32_t var_118_2
    int32_t var_110_2
    
    if (zmm7.d f<= 0f)
        var_110_2 = 0
        var_118_2 = rbx_3
    else
        char r8_1 = *(arg1 + 0x28)
        float var_88[0x4] = *(r13 + 0x28)
        sub_140ae16d0(&var_88, &var_f8, r8_1)
        float zmm6_1[0x4]
        int32_t zmm7_1
        zmm6_1, zmm7_1 = sub_140de32d0(&var_d8, r14 + 0x20, &var_f8, var_f0[0].q, rbx_3, 0)
        zmm6_1[0] = zmm6_1[0] f* zmm7_1
        zmm6_1[0] = zmm6_1[0] + 0.5f
        int32_t rcx_9 = int.d(zmm6_1[0])
        
        if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9)).d f== zmm6_1[0]))
            zmm6_1 = _mm_cvtepi32_ps(zx.o(rcx_9
                - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)) & 1)))
        
        var_110_2 = int.d(zmm6_1[0])
        var_118_2 = rbx_3 + 1
    
    int512_t zmm6_2
    int512_t zmm7_2
    result, zmm6_2, zmm7_2 =
        sub_140de32d0(&var_d8, &data_143e20dd8, &var_fc, r15_1, var_118_2, var_110_2)
    zmm6_2.o = zmm6
    zmm7_2.o = var_58_1

__security_check_cookie(rax_1 ^ &var_138)
return result
