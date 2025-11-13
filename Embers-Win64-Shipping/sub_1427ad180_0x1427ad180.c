// 函数: sub_1427ad180
// 地址: 0x1427ad180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int32_t var_1b0 = 0x3f800000
int64_t var_190 = (_mm_unpacklo_ps(zx.o(0), 0)).q
int32_t var_194 = 0x7f7fffff
char var_198 = 0
int32_t var_188 = 0x3f800000
char var_184 = 0
int32_t var_180 = 0
int64_t var_178 = 0
char rax_7

if (*(arg1 + 8) != 0)
    float zmm1[0x4] = arg3[5]
    uint128_t zmm6 = arg3[3]
    int128_t zmm7 = arg3[4]
    zmm1[0] = zmm1[0] * 1048576f
    zmm7.d = zmm7.d f* 1048576f
    zmm1[0] = zmm1[0] f+ arg3[2]
    zmm6.d = zmm6.d f* 1048576f
    zmm7.d = zmm7.d f+ arg3[1]
    zmm6.d = zmm6.d f+ *arg3
    float var_1b0_1 = zmm1[0]
    void var_168
    memset(&var_168, 0, 0x88)
    uint64_t rcx_1 = zx.q(data_14401b1a0)
    float var_1a0_1 = var_1b0_1
    int32_t rax_3 = arg3[2]
    uint128_t zmm0_1 = _mm_unpacklo_ps(zmm6, zmm7.q)
    int32_t var_1b0_2 = rax_3
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    uint64_t var_1a8 = zmm0_1.q
    int64_t rax_4 = *(ThreadLocalStoragePointer + (rcx_1 << 3))
    int32_t var_160_1 = 0x3f800000
    uint64_t var_1b8 = *arg3
    
    if (data_143f88b50 s> *(0x14 + rax_4))
        _Init_thread_header(&data_143f88b50)
        
        if (data_143f88b50 == 0xffffffff)
            sub_140b58170(&data_143f88b48, "HitTest", 1)
            _Init_thread_footer(&data_143f88b50)
    
    int64_t rbx_2 = **(arg1 + 8) + 0x828
    void var_1c8
    void var_d8
    int64_t* rax_6 = sub_141eb54c0(&var_d8, data_143f88b48, &var_1c8, 1, nullptr)
    rax_7 = (*rbx_2)(*(arg1 + 8), &var_168, &var_1b8, &var_1a8, rax_6)
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    int64_t var_98
    
    if (var_98 != 0)
        sub_140a74f90(var_98)

if (*(arg1 + 8) == 0 || rax_7 == 0)
    *arg2 = var_198.o
    *(arg2 + 0x10) = var_188.o
    *(arg2 + 0x20) = var_178
else
    int32_t var_15c
    *(arg2 + 4) = var_15c[0]
    int32_t var_1b0_3 = 0x3f800000
    *(arg2 + 8) = (_mm_unpacklo_ps(zx.o(0), 0)).q
    *(arg2 + 0x10) = 0x3f800000
    *arg2 = 1
    arg2[0x14] = 0
    *(arg2 + 0x18) = 0
    *(arg2 + 0x20) = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return arg2
