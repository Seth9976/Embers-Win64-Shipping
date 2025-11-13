// 函数: sub_141464a90
// 地址: 0x141464a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x19) != 0 && arg1[3].b != arg3)
    int128_t zmm1 = *(*arg2 + 0x38)
    void** rcx_3
    uint128_t zmm0
    
    if (arg1[1] != 0)
        zmm0 = *arg1
        zmm1.d = zmm1.d f+ zmm1.d
        zmm1.d = zmm1.d f* zmm0.d
        zmm0 ^= 0x80000000
        *arg1 = zmm0.d
        int128_t zmm3
        zmm3.d = 1f f/ zmm0.d
        zmm1.d = zmm1.d f+ *(arg1 + 4)
        *(arg1 + 4) = zmm1.d
        int128_t zmm2
        
        if (arg3 == 0)
            zmm2.d = zmm3.d f* zmm1.d
            zmm2 ^= 0x80000000
        else
            zmm2.d = 1f f- zmm1.d
            zmm2.d = zmm2.d f* zmm3.d
        
        *(arg1 + 0x14) = zmm2.d
        int64_t* rcx_4 = data_143f0f180
        uint64_t var_28 = *arg1
        void* arg_20
        (*(*rcx_4 + 0xf8))(rcx_4, &arg_20, &var_28, &data_143eca0d0, 2, 1)
        void* rax_5 = arg_20
        void* var_48 = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        sub_1405d1550(&arg_20)
        sub_1405d1600(&arg1[1], &var_48)
        rcx_3 = &var_48
    else
        zmm0.d = data_1439b6dc4.d f+ zmm1.d
        *(arg1 + 0x14) = zmm0.d
        
        if (arg3 == 0)
            zmm0.d = -1f f/ data_1439b6dc4
            *arg1 = zmm0.d
            zmm1.d = zmm1.d f/ data_1439b6dc4
            zmm1.d = zmm1.d f+ 1f
        else
            zmm0.d = 1f f/ data_1439b6dc4
            *arg1 = zmm0.d
            zmm1.d = zmm1.d f/ data_1439b6dc4
            zmm1 ^= data_142d3f780
        
        *(arg1 + 4) = zmm1.d
        int64_t* rcx = data_143f0f180
        uint64_t var_38 = *arg1
        void* arg_8
        (*(*rcx + 0xf8))(rcx, &arg_8, &var_38, &data_143eca0d0, 2, 1)
        void* rax_3 = arg_8
        void* arg_10 = rax_3
        
        if (rax_3 != 0)
            *(rax_3 + 8) += 1
        
        sub_1405d1550(&arg_8)
        sub_1405d1600(&arg1[1], &arg_10)
        rcx_3 = &arg_10
    sub_1405d1550(rcx_3)

void* result = *arg2
arg1[2].d = *(result + 0x3c)
arg1[3].b = arg3
*(arg1 + 0x19) = 1
return result
