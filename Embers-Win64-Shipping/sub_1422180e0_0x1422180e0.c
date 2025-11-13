// 函数: sub_1422180e0
// 地址: 0x1422180e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t var_28 = __security_cookie ^ &var_c8
uint64_t result

if ((*(arg1 + 0xc) & 0x10) == 0)
    result.b = 0
else
    char var_a0
    
    if (sub_140d3e110(arg1 + 0x100).b == 0)
        result.b = 0
    else if (*sub_142230430(sub_140d3c6e0(arg1 + 0x100), &var_a0, arg3) == 3)
        result.b = 0
    else if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1 + 0xf0).b == 0)
        result.b = 0
    else
        float zmm0_1[0x4] = data_143dbb0c0
        arg3.o = data_143dbb0d0
        float var_58[0x4]
        int128_t* var_78 = &var_58
        var_58 = zmm0_1
        zmm0_1 = data_143dbb0e0
        char var_a8
        char* var_68_1 = &var_a8
        char* var_60_1 = &var_a0
        float var_90_1 = &var_78
        int128_t* (* var_98)(int64_t* arg1) = sub_142212540
        var_a0 = 0
        var_a8 = 1
        float var_48_1[0x4] = arg3.o
        float var_38_1[0x4] = zmm0_1
        void* var_70_1 = arg1
        sub_142269e40(arg1 + 0xf0, &var_98)
        void* var_80_1 = arg1
        var_90_1 = _mm_shuffle_ps(var_48_1, var_48_1, 0xaa)[0]
        arg3.o = var_48_1
        arg3.o = _mm_shuffle_ps(arg3.o, var_48_1, 0x55)
        *arg2 = (_mm_unpacklo_ps(var_48_1, arg3.q)).q
        arg2[1].d = var_90_1
        *(arg2 + 0x10) = var_58
        float rax_3 = data_143dbb200
        zmm0_1 = zx.o(data_143dbb1f8.q)
        int128_t* (** var_88)(int64_t* arg1) = &var_98
        int128_t* (*** var_70_2)(int64_t* arg1) = &var_88
        var_78 = sub_1422121d0
        var_98 = zmm0_1.q
        sub_142269e40(arg1 + 0xf0, &var_78)
        arg2[4] = var_98
        arg2[5].d = rax_3
        zmm0_1 = data_143dbb1f8
        arg3.o = data_143dbb1fc
        var_88 = &var_98
        int128_t* (*** var_70_3)(int64_t* arg1) = &var_88
        var_98.d = zmm0_1[0]
        zmm0_1 = data_143dbb200
        var_78 = sub_142211f10
        var_98:4.d = arg3.d
        var_90_1 = zmm0_1[0]
        sub_142269e40(arg1 + 0xf0, &var_78)
        arg3.o = 0x42652ee0
        int128_t zmm3 = var_98.d
        zmm0_1 = var_90_1
        float zmm2[0x4] = var_98:4.d
        zmm0_1[0] = zmm0_1[0] * 57.2957764f
        zmm3.d = zmm3.d f* 57.2957764f
        zmm2[0] = zmm2[0] * 57.2957764f
        arg3.o = zmm3
        var_90_1 = zmm0_1[0]
        arg3.o = _mm_unpacklo_ps(arg3.o, zmm2[0].q)
        *(arg2 + 0x2c) = (arg3.o).q
        *(arg2 + 0x34) = var_90_1
        var_a8 = 0
        var_88 = &var_a8
        int128_t* (*** var_70_4)(int64_t* arg1) = &var_88
        var_78 = sub_142211ea0
        sub_142269e40(arg1 + 0xf0, &var_78)
        result.b = var_a8 == 0
        arg2[7].b = result.b
        result.b = 1

__security_check_cookie(var_28 ^ &var_c8)
return result
