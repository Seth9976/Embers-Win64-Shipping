// 函数: sub_141edafb0
// 地址: 0x141edafb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
float zmm2[0x4] = arg2[2]
uint64_t rcx = zx.q(data_14401b1a0)
float zmm1 = arg2[1]
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
float zmm0 = *arg3 + *arg2
zmm2[0] = zmm2[0] + arg3[2]
int64_t rax_2 = *(ThreadLocalStoragePointer + (rcx << 3))
zmm1 = zmm1 + arg3[1]
float var_190 = zmm0
float var_188 = zmm2[0]

if (data_143f3ad20 s> *(0x14 + rax_2))
    _Init_thread_header(&data_143f3ad20)
    
    if (data_143f3ad20 == 0xffffffff)
        sub_140b58170(&data_143f3ad18, "CheckLedgeDirection", 1)
        _Init_thread_footer(&data_143f3ad20)

void var_198
void var_a8
sub_141eb54c0(&var_a8, data_143f3ad18, &var_198, 0, arg1[0x29])
void var_160
sub_142259c00(&var_160)
sub_142277d10(&var_160, 2)
(*(*arg1 + 0x468))(arg1, &var_a8, &var_160)
void* rcx_6 = *(arg1[0x29] + 0x290)
zmm2 = *(rcx_6 + 0x1e0)
int32_t zmm1_1 = *(rcx_6 + 0x424)
float temp0_1[0x4] = _mm_min_ss(_mm_shuffle_ps(zmm2, zmm2, 0x55)[0], zmm2[0])
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
temp0_2[0] = temp0_2[0] f* *(rcx_6 + 0x420)
int64_t* rcx_7 = arg1[0x16]
int32_t var_170 = 3
temp0_1[0] = temp0_1[0] f* zmm1_1
float var_168 = temp0_2[0]
float var_16c = temp0_1[0]
char rax_7 = (*(*rcx_7 + 0x4d8))(rcx_7)
char var_138
memset(&var_138, 0, 0x88)
float var_130 = 1f
sub_141ecd380(sub_1405be820(arg1), &var_138, arg2, &var_190, &data_14399f720, rax_7, &var_170, 
    &var_a8, &var_160)
int64_t* rbx

if ((var_138 & 1) == 0)
label_141edb185:
    float zmm2_1 = arg1[0x5d].d f+ *(arg1 + 0x154)
    float zmm0_2 = zmm2_1 * *arg4
    float zmm1_2 = zmm2_1 * arg4[1]
    zmm2_1 = zmm2_1 * arg4[2] + var_188
    float var_180 = zmm0_2 + var_190
    float var_17c_1 = zmm1_2 + zmm1
    float var_178_1 = zmm2_1
    sub_141ecd380(sub_1405be820(arg1), &var_138, &var_190, &var_180, &data_14399f720, rax_7, 
        &var_170, &var_a8, &var_160)
label_141edb20b:
    
    if (var_130 >= 1f)
        rbx.b = 0
    else if ((*(*arg1 + 0x820))(arg1, &var_138) == 0)
        rbx.b = 0
    else
        rbx.b = 1
else
    if ((*(*arg1 + 0x820))(arg1, &var_138) != 0)
        if ((var_138 & 1) != 0)
            goto label_141edb20b
        
        goto label_141edb185
    
    rbx.b = 0

int64_t var_48

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

__security_check_cookie(rax_1 ^ &var_1e8)
return zx.q(rbx.b)
