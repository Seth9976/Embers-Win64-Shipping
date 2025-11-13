// 函数: sub_1408cbe50
// 地址: 0x1408cbe50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_618
int64_t rax_1 = __security_cookie ^ &var_618
int32_t result

if (arg2 == 0)
    data_143a30334
    result = divs.dp.d(sx.q(data_143a30330), data_143a30334)
    _mm_cvtepi32_ps(zx.o(result))
else
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
    int512_t zmm0_1
    int512_t zmm1_1
    zmm0_1, zmm1_1 = sub_1422d7fd0(&var_5b8)
    zmm1_1.o = zx.o(0)
    int64_t var_78_1 = 0
    char var_38_1 = 0
    result = (*(*arg1 + 0x528))(arg1, zmm1_1, &var_5f8)
    char var_38_2 = 0
    int64_t var_88
    
    if (var_88 != 0)
        result, zmm0_1 = sub_140a74f90(var_88)
    
    int128_t var_5d8
    zmm0_1.o = var_5d8:0xc.d

__security_check_cookie(rax_1 ^ &var_618)
return result
