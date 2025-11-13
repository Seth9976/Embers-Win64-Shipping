// 函数: sub_142696cb0
// 地址: 0x142696cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28c) & 4) == 0)
    return 

int64_t* rcx = arg1[0x1d]
uint64_t rax = (*(*rcx + 0x150))(rcx)

if (rax == 0)
    return 

int64_t r9_1 = *arg1
int32_t* var_68 = nullptr
int64_t var_60_1 = 0
uint128_t zmm6
uint128_t var_18_1 = zmm6
(*(r9_1 + 0x70))(arg1, rax, &var_68, r9_1)
int32_t temp0_1 = var_60_1.d
bool cond:1_1 = temp0_1 s<= 0

if (temp0_1 == 0)
    bool cond:2_1 = var_60_1:4.d s>= 1
    zmm6.d = arg1[0x17].d.d f+ *(arg1 + 0xc4)
    int128_t zmm7
    zmm7.d = arg1[0x19].d.d f+ *(arg1 + 0xbc)
    var_60_1.d = 1
    zmm6.d = zmm6.d f* 0.5f
    zmm7.d = zmm7.d f* 0.5f
    
    if (not(cond:2_1))
        sub_1405a4d70(&var_68)
    
    int32_t* rax_2 = var_68
    rax_2[1] = zmm7.d
    *rax_2 = zmm6.d
    cond:1_1 = var_60_1.d s<= 0

if (not(cond:1_1))
    uint64_t rdx_3 = sx.q(arg1[0x1f].d)
    int32_t* rbx_1 = arg1[0x1e]
    void* rbp_3 = &rbx_1[rdx_3 * 8]
    zmm6.d = _mm_cvtepi32_ps(zx.o(arg1[4].d)).d f* arg1[5].d
    
    if (rbx_1 != rbp_3)
        do
            float var_58
            zmm6 = sub_142676ba0(&var_58, *rbx_1, rbx_1[1], &data_143dbb1f8, &arg1[0x17], zmm6.d)
            int32_t* rcx_4 = var_68
            void* i = &rcx_4[sx.q(var_60_1.d) * 2]
            float var_4c
            float zmm2_1 = (var_58 + var_4c) * 0.5f
            
            if (rcx_4 != i)
                float zmm4_1 = rbx_1[2]
                void* rcx_5 = &rcx_4[1]
                
                do
                    float zmm0_1 = *(rcx_5 - 4)
                    float var_54
                    float var_48
                    float zmm1_1 = *rcx_5 - (var_54 + var_48) * 0.5f
                    rcx_5 += 8
                    zmm0_1 = zmm0_1 - zmm2_1
                    zmm1_1 = _mm_min_ss(zmm1_1 * zmm1_1 + zmm0_1 * zmm0_1, zmm4_1)
                    rbx_1[2] = zmm1_1
                    zmm4_1 = zmm1_1
                while (rcx_5 - 4 != i)
            
            rbx_1 = &rbx_1[8]
        while (rbx_1 != rbp_3)
        
        rdx_3 = zx.q(arg1[0x1f].d)
    
    sub_14266f4d0(arg1[0x1e], rdx_3.d, arg2)

int32_t* rcx_7 = var_68

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
