// 函数: sub_1417b2100
// 地址: 0x1417b2100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
float zmm7[0x4] = arg6
bool cond:0 = *(arg1 + 0x70) == 0
float zmm2 = arg5.d
float* var_c8 = arg2
char var_94 = *(arg1 + 0xa8)
void var_88
void* rcx_1 = &var_88
float var_b8 = zmm7[0]
int32_t var_b4 = 0x7f7fffff
void* var_d8 = arg1 + 0x10
int128_t* var_c0 = arg3
int32_t result
int32_t zmm6_1
int64_t var_108
int64_t var_f8
int32_t var_f0

if (cond:0)
    void* var_d0_1 = arg1 + 0x60
    
    if (zmm7[0] <= 0f)
        sub_141705060(rcx_1, arg3, zmm2)
        int32_t var_100_3 = var_f0
        var_108 = var_f8
        int64_t* var_110_3 = &var_d8
        int64_t* var_118_3 = &var_f8
        __builtin_memcpy(&var_f8, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        result, zmm6_1 = sub_1417994d0(arg1 + 0xb0, arg2, &var_88, arg4)
    else
        float var_f0_2 = zmm7[0]
        sub_141705060(rcx_1, arg3, zmm2)
        float var_100_2 = var_f0_2
        int64_t* var_110_2 = &var_d8
        var_108 = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
        int64_t* var_118_2 = &var_f8
        __builtin_memcpy(&var_f8, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        result, zmm6_1 = sub_141794630(arg1 + 0xb0, arg2, &var_88, &var_108, var_118_2)
else
    void* var_d0 = arg1 + 0x50
    
    if (zmm7[0] <= 0f)
        sub_141705060(rcx_1, arg3, zmm2)
        int32_t var_100_1 = var_f0
        var_108 = var_f8
        int64_t* var_110_1 = &var_d8
        int64_t* var_118_1 = &var_f8
        __builtin_memcpy(&var_f8, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        result, zmm6_1 = sub_141799a30(arg1 + 0xb0, arg2, &var_88, arg4)
    else
        float var_f0_1 = zmm7[0]
        sub_141705060(rcx_1, arg3, zmm2)
        float var_100 = var_f0_1
        int64_t* var_110 = &var_d8
        var_108 = (_mm_unpacklo_ps(zmm7, zmm7[0].q)).q
        int64_t* var_118 = &var_f8
        __builtin_memcpy(&var_f8, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        result, zmm6_1 = sub_141794a80(arg1 + 0xb0, arg2, &var_88, &var_108, var_118)
int64_t zmm0_1 = var_b4

if (zmm0_1.d f> zmm6_1)
    result.b = 0
else
    *arg7 = zmm0_1.d
    int64_t var_b0
    *arg8 = var_b0
    int32_t var_a8
    arg8[1].d = var_a8
    int64_t var_a4
    *arg9 = var_a4
    int32_t var_9c
    arg9[1].d = var_9c
    int32_t var_98
    *arg10 = var_98
    result.b = 1

__security_check_cookie(rax_1 ^ &var_138)
return result
