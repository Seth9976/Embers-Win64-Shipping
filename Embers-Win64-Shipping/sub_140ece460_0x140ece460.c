// 函数: sub_140ece460
// 地址: 0x140ece460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
char rdi = 0
char var_1c0 = data_1439ae51c
void* var_98 = nullptr
int32_t var_90 = 0
int32_t var_8c = 4
char var_88 = 0
float zmm0[0x4] = sub_140de8410(arg1, arg3, &var_1c0)
char var_300 = data_1439ae51c
void* var_1d8 = nullptr
int32_t var_1d0 = 0
int32_t var_1cc = 4
char var_1c8 = 0
int128_t zmm6
int128_t zmm7
int128_t zmm8
zmm6, zmm7, zmm8 = sub_140e1ca00(arg1, arg3, &var_300, zmm0)
void var_2f8
void var_1b8

if (var_90 != 0 && var_1d0 != 0)
    void* r8_2 = &var_1b8
    int128_t var_58_1 = zmm6
    
    if (var_98 != 0)
        r8_2 = var_98
    
    int128_t var_68_1 = zmm7
    void* r9 = &var_2f8
    int128_t var_78_1 = zmm8
    zmm8 = *arg3
    int32_t* rdx_2 = sx.q(var_90 - 1) * 0x48
    
    if (var_1d8 != 0)
        r9 = var_1d8
    
    int64_t rcx_3 = sx.q(var_1d0 - 1) * 9
    float zmm2_1[0x4]
    
    if (var_90 - 1 != var_1d0 - 2)
        if (var_90 s< var_90)
            rdx_2 = sx.q(var_90) * 0x48
        
        zmm8.d = (*(r8_2 + rdx_2 + 8)).d f* *(r8_2 + rdx_2)
        zmm8.d = zmm8.d f+ *(r8_2 + rdx_2 + 0xc)
        zmm8.d = zmm8.d f- *(r9 + 0xc)
        zmm8.d = zmm8.d f/ (*arg3)[2]
    else
        float zmm1_1[0x4] = *(r9 + (rcx_3 << 3) + 8)
        zmm1_1[0] = zmm1_1[0] f* *(r9 + (rcx_3 << 3))
        zmm2_1 = (*arg3)[2]
        zmm1_1[0] = zmm1_1[0] f+ *(r9 + (rcx_3 << 3) + 0xc)
        int32_t rcx_4 = int.d(zmm1_1[0])
        zmm2_1[0] = zmm2_1[0] f* zmm8.d
        zmm2_1[0] = zmm2_1[0] + (*arg3)[3]
        
        if (int.d(zmm2_1[0]) s<= rcx_4)
            zmm8.d = (*(rdx_2 + r8_2 + 8)).d f* *(rdx_2 + r8_2)
            zmm8.d = zmm8.d f+ *(rdx_2 + r8_2 + 0xc)
            zmm8.d = zmm8.d f- *(r9 + 0xc)
            zmm8.d = zmm8.d f/ zmm2_1[0]
    
    char rax_12 = sub_140e25600(arg1, arg8)
    void* r9_1 = arg1[0x5d]
    int128_t* rdx_5 = r9_1 + 0x20
    
    if (rax_12 == 0)
        rdi = 0x20
    
    float var_338[0x4] = data_14399f5c0
    uint32_t rcx_6 = zx.d(rdx_5[1].b)
    
    if (rcx_6 != 0)
        if (rcx_6 == 1)
            rdx_5 = *(rdx_5 + 0x18)
        else if (rcx_6 == 3)
            rdx_5 = &arg7[8]
        else
            rdx_5 = &arg7[4]
    
    zmm2_1 = *rdx_5
    zmm6 = arg3[3][0]
    zmm7 = (*arg3)[1]
    float zmm4_1 = arg3[1][0]
    float zmm5_1 = (*arg3)[2]
    char rcx_8 = (*arg3)[0xd].b & 1
    float temp0_2[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)
    temp0_2[0] = temp0_2[0] f* arg7[1]
    char var_304
    char var_304_1 = (rcx_8 * 2) | (var_304 & 0xfc)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
    temp0_3[0] = temp0_3[0] f* arg7[3]
    int32_t var_380
    float var_358
    var_380.q = &var_358
    temp0_2[0] = temp0_2[0] * var_338[1]
    temp0_3[0] = temp0_3[0] * var_338[3]
    var_338[3].q = 0
    float temp0_4[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)
    zmm2_1[0] = zmm2_1[0] f* *arg7
    temp0_4[0] = temp0_4[0] f* arg7[2]
    zmm2_1[0] = zmm2_1[0] * var_338[0]
    temp0_4[0] = temp0_4[0] * var_338[2]
    float var_354_1 = temp0_2[0]
    float zmm0_1[0x4] = *(arg3 + 0x1c)
    var_358 = zmm2_1[0]
    float var_368_1[0x4] = zmm0_1
    float var_34c_1 = temp0_3[0]
    float zmm3_1[0x4] = (*arg3)[3]
    float var_31c_1[0x4] = zmm0_1
    int64_t var_30c_1 = (_mm_unpacklo_ps((*arg3)[0xb], zmm6.q)).q
    float var_350_1 = temp0_4[0]
    var_338[0] = zmm3_1[0]
    var_338[1] = zmm4_1
    var_338[2] = zmm5_1
    int32_t var_324_1 = zmm8.d
    int32_t var_320_1 = zmm7.d
    sub_140db3600(arg5, arg6, &var_338, r9_1, rdi, var_380)
    int512_t zmm6_1
    zmm6_1.o = var_58_1

int32_t rax_15 = sub_140e1f050(arg1, arg2, arg3, arg4, arg5.d, arg6, arg7.b, arg8)
sub_140d94d20(&var_2f8)
sub_140d94d20(&var_1b8)
__security_check_cookie(rax_1 ^ &var_3a8)
return zx.q(rax_15)
