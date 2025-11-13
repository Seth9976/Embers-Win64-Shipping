// 函数: sub_1427b39c0
// 地址: 0x1427b39c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t result = __security_cookie ^ &var_168
int64_t result_2 = result

if (*(arg1 + 0x58) != 0)
    uint128_t zmm0 = *"33s?"
    int64_t rax_1 = *arg2
    int32_t var_d0_1 = 0
    uint128_t zmm1 = data_143dbb0d0
    uint128_t var_f8_1 = zmm0
    uint128_t var_e4_1 = zmm0
    uint128_t var_68_1 = data_143dbb0c0
    uint128_t var_48_1 = data_143dbb0e0
    void** const var_108 = &data_1434b5b40
    int32_t var_e8_1 = 0x3f800000
    int32_t var_d4_1 = 0x3f800000
    char var_cc_1 = 1
    int64_t var_80_1 = 0
    int64_t var_78_1 = 0
    uint128_t var_58_1 = zmm1
    result = (*(rax_1 + 8))(arg2, zmm1)
    int64_t result_1 = result
    char var_88_1 = 0
    uint64_t var_128
    uint64_t var_11c
    float zmm3
    
    if (*(arg1 + 0x59) != 0)
        int32_t rax_2 = *(arg1 + 0x54)
        zmm3 = *(arg1 + 0x38)
        int32_t var_114_1 = *(arg1 + 0x48)
        char rax_4 = *(arg1 + 0x74)
        int32_t rax_5 = *(arg1 + 0x5c)
        var_128 = *(arg1 + 0x4c)
        var_11c = *(arg1 + 0x40)
        result = var_108[3](&var_108, &var_11c, &var_128, zmm3, rax_5, arg1 + 0x60, 
            (*(arg1 + 0x70)).d, rax_4, var_128, rax_2)
    
    if (*(arg1 + 0x5a) != 0)
        zmm3 = *(arg1 + 0x3c)
        int32_t var_114_2 = *(arg1 + 0x54)
        int32_t rax_8 = *(arg1 + 0x48)
        char rax_9 = *(arg1 + 0x74)
        int32_t rax_10 = *(arg1 + 0x5c)
        var_11c = *(arg1 + 0x4c)
        var_128 = *(arg1 + 0x40)
        result = var_108[3](&var_108, &var_128, &var_11c, zmm3, rax_10, arg1 + 0x60, 
            (*(arg1 + 0x70)).d, rax_9, var_128, rax_8)
    
    if (*(arg1 + 0x75) != 0)
        zmm3 = *(arg1 + 0x3c) f* *(arg1 + 0x38)
        int32_t var_114_3 = *(arg1 + 0x54)
        int32_t rax_13 = *(arg1 + 0x48)
        char rax_14 = *(arg1 + 0x74)
        int32_t rax_15 = *(arg1 + 0x5c)
        var_11c = *(arg1 + 0x4c)
        var_128 = *(arg1 + 0x40)
        var_108[3](&var_108, &var_128, &var_11c, zmm3, rax_15, arg1 + 0x7c, (*(arg1 + 0x78)).d, 
            rax_14, var_128, rax_13)
        uint128_t zmm2 = *(arg1 + 0x38)
        void* var_140_3
        var_140_3.b = *(arg1 + 0x74)
        zmm0.d = zmm2.d f* *(arg1 + 0x4c)
        zmm1 = zmm2
        zmm2.d = zmm2.d f* *(arg1 + 0x54)
        zmm0.d = zmm0.d f+ *(arg1 + 0x40)
        zmm1.d = zmm1.d f* *(arg1 + 0x50)
        zmm2.d = zmm2.d f+ *(arg1 + 0x48)
        zmm1.d = zmm1.d f+ *(arg1 + 0x44)
        var_128.d = zmm0.d
        int32_t var_120_4 = zmm2.d
        var_128:4.d = zmm1.d
        result = sub_14279ad30(&var_108, arg1 + 0x40, &var_128, (arg1 + 0x7c).d, (*(arg1 + 0x78)).b)
    
    int64_t var_c8_1 = 0
    var_108 = &data_1434b5b40
    
    if (var_80_1 != 0)
        result = sub_140a74f90(var_80_1)

__security_check_cookie(result_2 ^ &var_168)
return result
