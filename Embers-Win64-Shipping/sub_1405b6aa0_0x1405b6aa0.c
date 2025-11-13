// 函数: sub_1405b6aa0
// 地址: 0x1405b6aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_658
int64_t* var_28_1 = __security_cookie ^ &var_658

if (arg2 != 0)
    float zmm1[0x4] = *(arg1 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg1 + 0x180), zmm1, 4))
    float var_618[0x4] = zmm1
    int64_t var_628
    
    if (temp0_2 != 0)
        *(arg1 + 0x180) = zmm1
        int32_t* rax_3 = sub_140adf5d0(&var_618, &var_628)
        arg1[0x32] = *rax_3
        arg1[0x33].d = rax_3[2]
    
    float zmm2[0x4] = *(arg1 + 0x1d0)
    int32_t rax_5 = arg1[0x33].d
    int64_t var_608 = arg1[0x32]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    float var_620_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    int32_t var_600_1 = rax_5
    char var_630_1 = 0
    var_618[0].q = (_mm_unpacklo_ps(zmm2, temp0_3[0].q)).q
    var_618[2] = var_620_1
    sub_141f4a260(arg2, &var_618, &var_608, 0, 0, var_630_1)
    *(arg2 + 0x28c) = arg1[0x3e].d
    int128_t var_5f8 = zx.o(0)
    int32_t var_5c8
    int32_t var_5c8_1 = (var_5c8 & 0xfffffffe) | 2
    int128_t var_5e8
    __builtin_memcpy(&var_5e8, 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\xb4\x42\x00\x00\xb4\x42\x00\x00\x00\x44\x00\x00\x00\x"
    "00\x00\x00\x00\x4a\xab\xaa\xaa\x3f", 
        0x20)
    char var_5c4_1 = 0
    int32_t var_5c0_1 = 0
    void var_5b8
    sub_1422d7fd0(&var_5b8)
    int512_t zmm1_1
    zmm1_1.o = zx.o(0)
    int64_t var_78_1 = 0
    char var_38_1 = 0
    (*(*arg1 + 0x528))(arg1, zmm1_1, &var_5f8)
    var_628 = 0
    int64_t rbx_2 = sx.q(arg2[0xfd].d)
    int64_t rsi_1 = arg2[0xfc]
    int32_t var_620_2 = rbx_2.d
    int64_t rsi_2
    
    if (rbx_2.d != 0)
        sub_1405a4be0(&var_628, rbx_2.d, 0)
        rsi_2 = var_628
        memcpy(rsi_2, rsi_1, (rbx_2 << 4).d)
        rbx_2 = zx.q(var_620_2)
    else
        rsi_2 = 0
    
    sub_1405af800(&arg2[0x56], &var_5b8)
    
    if (&arg2[0xfc] != &var_628)
        int32_t r8_5 = *(arg2 + 0x7ec)
        arg2[0xfd].d = rbx_2.d
        
        if (rbx_2.d != 0 || r8_5 != 0)
            sub_1405a4be0(&arg2[0xfc], rbx_2.d, r8_5)
            memcpy(arg2[0xfc], rsi_2, rbx_2.d << 4)
        else
            *(arg2 + 0x7ec) = rbx_2.d
    
    if (rsi_2 != 0)
        sub_140a74f90(rsi_2)
    
    char var_38_2 = 0
    int64_t var_88
    
    if (var_88 != 0)
        sub_140a74f90(var_88)

__security_check_cookie(var_28_1 ^ &var_658)
