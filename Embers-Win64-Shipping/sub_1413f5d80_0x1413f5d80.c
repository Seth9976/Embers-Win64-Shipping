// 函数: sub_1413f5d80
// 地址: 0x1413f5d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
char result

if (sub_1414e0780(arg1, 0) != 0)
label_1413f5e1f:
    void var_2c8
    sub_1419928d0(&var_2c8, arg2)
    void*** rax_6 = sub_1410fccd0(&var_2c8, sub_14139d440(&data_143ec4c60), u"SceneColor", 0)
    int64_t var_310
    __builtin_memset(&var_310, 0, 0x48)
    void var_318
    int128_t zmm6_1 = sub_14142a030(&var_2c8, &var_318)
    int64_t i_1 = sx.q(*(arg1 + 0xa8))
    
    if (i_1 s> 0)
        int64_t rsi_1 = 0
        int128_t var_48_1 = zmm6_1
        zmm6_1 = 0x3f800000
        int64_t i
        
        do
            int32_t rcx_7 = data_1439b6b68
            int64_t* rbx_2 = *(arg1 + 0xa0) + rsi_1
            char var_380_1 = 1
            int128_t var_3b8
            __builtin_memset(&var_3b8, 0, 0x18)
            int128_t zmm0_1 = *(rbx_2 + 0x1598)
            
            if (rcx_7 s<= 0xffffffff)
                rcx_7 = rbx_2[0x25e].d
            
            int32_t var_3c8_1 = 5
            int32_t var_3d0_1 = zmm6_1.d
            sub_1413f27a0(arg1, &var_2c8, rbx_2, &var_3b8, &var_3b8:8, rcx_7, data_1439b6b6c)
            double zmm2_1[0x2] = *(rbx_2 + 0x1598)
            int64_t rax_8 = var_3b8.q
            double var_370_1[0x2] = zmm2_1
            uint128_t var_338 = rax_6.o
            double temp0_1[0x2] = _mm_unpackhi_pd(zmm2_1, zmm2_1[0])
            uint128_t var_358 = rax_8.o
            int128_t var_328_1 = zmm0_1
            int64_t var_348_1 = temp0_1.q
            zmm6_1 = sub_141446eb0(&var_2c8, rbx_2, &var_358, &var_338)
            rsi_1 += 0x5240
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_14199ef00(&var_2c8)
    sub_141427c70(arg1, arg2)
    result = sub_1410eb9e0(&var_2c8)
else
    if (sub_1414e0780(arg1, 1) != 0)
        goto label_1413f5e1f
    
    if (sub_1414e0780(arg1, 2) != 0)
        goto label_1413f5e1f
    
    result = sub_1414e0780(arg1, 3)
    
    if (result != 0)
        goto label_1413f5e1f

__security_check_cookie(rax_1 ^ &var_408)
return result
