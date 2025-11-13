// 函数: sub_140dcf4d0
// 地址: 0x140dcf4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r12 = *arg2
char r8 = *(arg1 + 0x28)
void* var_f8 = r12
float var_e8[0x4] = *(r12 + 8)
void var_f0
sub_140ae16d0(&var_e8, &var_f0, r8)
int32_t rax_2 = *(r12 + 0x70)
float zmm0_1 = arg2[9].d
int32_t r15 = 0
float zmm3[0x4] = 0x3f800000
int32_t zmm4 = arg2[3].d
int32_t zmm5 = *(arg2 + 0x1c)
int32_t rcx_1 = rax_2 - 1
char rax_3 = *(arg2 + 0x4d)

if (rax_2 == 0)
    rcx_1 = 0

int32_t rsi = arg2[6].d
zmm3[0] = 1f / zmm0_1
char var_108 = rax_3
void* rax_4 = *(arg1 + 0x18)
int32_t var_100 = rcx_1
float var_104 = zmm0_1
int32_t var_58 = zmm4
zmm3[0] = zmm3[0] f* arg2[1].d
zmm0_1 = zmm3[0] f* *(arg2 + 0xc)
float zmm1 = zmm3[0] f* arg2[2].d
zmm3[0] = zmm3[0] f* *(arg2 + 0x14)
float temp0[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xe1)
temp0[0] = zmm0_1
int32_t var_54 = zmm5
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm1
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm3[0]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_68[0x4] = temp0_3
int64_t* rbx_1 = *(rax_4 + 8)
var_e8 = temp0_3
int64_t* rbx_2
int64_t rdi

if (sub_140a80e70() == 0)
    rdi = *rbx_1
    rbx_2 = rbx_1[1]
else
    sub_140a80f40()
    rdi = rbx_1[2]
    rbx_2 = rbx_1[3]

if (rbx_2 != 0)
    rbx_2[1].d += 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp3_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_4 = *(arg1 + 0x18)
void var_78
var_e8[0].q = *(*(*rcx_4 + 8))(rcx_4, &var_78)
int64_t* var_70

if (var_70 != 0)
    var_70[1].d -= 1
    
    if (var_70[1].d == 1)
        (**var_70)(var_70)
        int32_t temp2_1 = *(var_70 + 0xc)
        *(var_70 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_70 + 8))(var_70, 1)

int64_t rbx_5 = *(r12 + 0x20)
int64_t r12_1 = *(r12 + 0x30)
void* var_c0 = var_f8
int32_t* var_b8 = &var_104
int32_t* var_b0 = &var_100
int64_t var_a8 = var_e8[0].q
char* var_98 = &var_108
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(r12 + 0x28)))
int64_t* var_90 = arg2
float (* var_88)[0x4] = &var_68
int64_t var_c8 = rdi
void* var_a0 = arg1

if (not(zmm6.d f<= (zx.o(0)).d))
    sub_140ae16d0(r12 + 0x38, &var_f8, *(arg1 + 0x28))
    float zmm6_1[0x4] = sub_140de2800(&var_c8, r12 + 0x28, &var_f8, r12_1, rsi, 0)
    zmm6_1[0] = zmm6_1[0] * var_104
    rsi += 1
    zmm6_1[0] = zmm6_1[0] + 0.5f
    int32_t rcx_9 = int.d(zmm6_1[0])
    
    if (rcx_9 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_9)).d f== zmm6_1[0]))
        zmm6_1 = _mm_cvtepi32_ps(zx.o(rcx_9
            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6_1, zmm6_1[0].q)) & 1)))
    
    r15 = int.d(zmm6_1[0])

uint64_t result = sub_140de2800(&var_c8, &data_143e20dd8, &var_f0, rbx_5, rsi, r15)
__security_check_cookie(rax_1 ^ &var_138)
return result
