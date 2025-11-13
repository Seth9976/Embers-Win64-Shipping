// 函数: sub_140f83750
// 地址: 0x140f83750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
void* var_d8 = __security_cookie ^ &var_198
void* rbx = arg1[0x56]
void* rcx = rbx + 0xb8
uint32_t rdx = zx.d(*(rcx + 0x10))

if (rdx != 0)
    if (rdx == 1)
        rcx = *(rcx + 0x18)
    else if (rdx == 3)
        rcx = &arg7[2]
    else
        rcx = &arg7[1]

float zmm5[0x4] = *rcx
int64_t* rdi = nullptr
float zmm3[0x4] = *arg7
int128_t zmm0 = arg7[1]
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x55)
float temp0_3[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
temp0_3[0] = temp0_3[0] * 0.600000024f
float var_130[0x4] = zmm5
float temp0_4[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xaa)
float temp0_5[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0_5[0] = temp0_2[0]
float temp0_6[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0xc6)
temp0_6[0] = temp0_4[0]
float temp0_7[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x27)
temp0_7[0] = temp0_3[0]
float temp0_8[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0x39)
float var_120[0x4] = temp0_8
float var_140[0x4] = zmm3
int128_t var_100 = zmm0

if (*(rbx + 0x640) != 0)
    int64_t* rcx_1 = *(rbx + 0x638)
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1).b != 0)
        int64_t* rcx_2
        
        if (*(rbx + 0x640) == 0)
            rcx_2 = nullptr
        else
            rcx_2 = *(rbx + 0x638)
        
        *(rbx + 0x630) = (*(*rcx_2 + 0x48))(rcx_2).b

int32_t var_148

if (*(rbx + 0x630) != 0 && not(0f f!= *(*(arg1[0x56] + 0x48) + 0x90)))
    float zmm1[0x4] = 0x3f800000
    var_148 = 0x3f800000
    
    if (*(arg1 + 0x17c) != 0)
        zmm1 = arg1[0x2f].d
    
    (*(*arg1 + 0x168))(arg1, zmm1)

void* rax_1

if (arg8 == 0)
    rax_1.b = 0
else
    if (arg1[0x34].d != 0)
        int64_t* rcx_5 = arg1[0x33]
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5).b != 0)
            if (arg1[0x34].d != 0)
                rdi = arg1[0x33]
            
            arg1[0x32].b = (*(*rdi + 0x48))(rdi).b
    
    if (arg1[0x32].b == 0)
        rax_1.b = 0
    else
        rax_1.b = 1

int32_t result
int128_t zmm6
result, zmm6 = sub_140f81da0(arg1[0x56], arg2, arg3, arg4, arg5, arg6, &var_140, rax_1.b)

if (*(arg1 + 0x41c) != 0)
    int64_t* rbx_1 = data_143e243c8
    void* rax_9 = (*(*rbx_1 + 0x48))(rbx_1, *sub_140b58260(&var_148, u"SoftwareCursor_Grab", 1), 0)
    int128_t zmm11 = arg3[1].d
    float zmm4_1[0x4] = *(arg3 + 0x24)
    float zmm2_1[0x4] = *(arg3 + 0x1c)
    float zmm12[0x4] = *(rax_9 + 8)
    float zmm13[0x4] = *(rax_9 + 0xc)
    zmm12[0] = zmm12[0] * 0.5f
    zmm3 = arg3[5].d
    int64_t zmm1_1 = arg3[4].d
    char rdx_4 = *(arg3 + 0x34)
    int128_t zmm8
    zmm8.d = arg1[0x84].d.d f- zmm12[0]
    int128_t zmm7 = *(arg1 + 0x424)
    zmm13[0] = zmm13[0] * 0.5f
    int64_t var_104_1 = 0
    float var_158_1 = zmm2_1[0]
    zmm2_1[0] = zmm2_1[0] f* zmm8.d
    char var_dc
    char var_dc_1 = ((rdx_4 & 1) * 2) | (var_dc & 0xfc)
    zmm7.d = zmm7.d f- zmm13[0]
    int64_t zmm5_1
    zmm5_1.d = zmm1_1.d f* zmm8.d
    int32_t var_170
    var_170.q = &data_14399f5c0
    int32_t var_154_1 = zmm1_1.d
    float var_150_1 = zmm4_1[0]
    float var_14c_1 = zmm3[0]
    zmm4_1[0] = zmm4_1[0] f* zmm7.d
    void* var_178
    var_178.b = 0
    int128_t zmm10
    zmm10.d = zmm11.d f* zmm8.d
    zmm2_1[0] = zmm2_1[0] + zmm4_1[0]
    int128_t zmm9
    zmm9.d = zmm11.d f* zmm7.d
    int32_t var_108_1 = zmm11.d
    zmm10.d = zmm10.d f+ *(arg3 + 0xc)
    zmm9.d = zmm9.d f+ arg3[2].d
    zmm2_1[0] = zmm2_1[0] f+ *(arg3 + 0x2c)
    zmm3[0] = zmm3[0] f* zmm7.d
    int32_t var_110 = zmm10.d
    int32_t var_10c_1 = zmm9.d
    zmm5_1.d = zmm5_1.d f+ zmm3[0]
    var_100:4.d = zmm12[0]
    var_100:8.d = zmm13[0]
    var_100 = var_158_1.o
    zmm5_1.d = zmm5_1.d f+ arg3[6].d
    temp0_8[3].q = (_mm_unpacklo_ps(zmm2_1, zmm5_1)).q
    sub_140db3600(arg5, result + 1, &var_110, rax_9, var_178.b, var_170)
    result += 1
    int512_t zmm6_2
    zmm6_2.o = zmm6

__security_check_cookie(var_d8 ^ &var_198)
return result
