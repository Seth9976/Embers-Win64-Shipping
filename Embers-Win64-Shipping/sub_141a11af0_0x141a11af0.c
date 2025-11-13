// 函数: sub_141a11af0
// 地址: 0x141a11af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
uint64_t result = __security_cookie ^ &var_1e8
uint64_t result_1 = result

if (arg2 == 0 || *(arg1 + 0x238) != arg2)
    if (*(arg1 + 0x10) == data_143dbb180.d)
        result = zx.q(data_143dbb180:4.d)
    
    if (*(arg1 + 0x10) != data_143dbb180.d || *(arg1 + 0x14) != result.d)
        int64_t rdi_1 = *(arg1 + 0xd8)
        int32_t var_1c0
        
        if (rdi_1 != 0)
            int32_t rax_8 = (*(*(arg1 + 0x38) + 0x18))(arg1 + 0x38)
            int64_t* rcx_9 = data_143f0f180
            int64_t rax_9 = (*(*rcx_9 + 0x130))(rcx_9, &data_143f02b98, rdi_1, 0, rax_8, 1)
            void* rdi_2 = *(arg1 + 0x40)
            
            if ((rdi_2.b & 1) != 0)
                rdi_2 = (rdi_2 s>> 1) + arg1 + 0x40
            
            memcpy(rax_9, rdi_2, (*(*(arg1 + 0x38) + 0x18))(arg1 + 0x38))
            int64_t* rcx_13 = data_143f0f180
            (*(*rcx_13 + 0x138))(rcx_13, &data_143f02b98, *(arg1 + 0xd8))
        else
            int128_t zmm0 = data_143dbb1e0
            int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
            int64_t var_138 = 0
            int32_t var_114_1 = rax_3
            int32_t var_128_1 = 1
            int128_t var_124_1 = zmm0
            char var_110_1 = 0
            int64_t var_108_1 = 0
            int32_t var_100_1 = 0
            void* var_130_1 = arg1 + 0x38
            int32_t rax_5 = (*(*(arg1 + 0x38) + 0x18))(arg1 + 0x38)
            int64_t* rcx_2 = data_143f0f180
            var_1c0.q = &var_138
            void var_1b8
            (*(*rcx_2 + 0x498))(rcx_2, &var_1b8, &data_143f02b98, zx.q(rax_5), 0x202, var_1c0)
            sub_1405d1600(arg1 + 0xd8, &var_1b8)
            sub_1405d1550(&var_1b8)
            int64_t* rcx_5 = data_143f0f180
            var_1c0.b = 0xd
            void var_1b0
            (*(*rcx_5 + 0x4b8))(rcx_5, &var_1b0, &data_143f02b98, *(arg1 + 0xd8), 4, var_1c0)
            sub_1405d1600(arg1 + 0xe0, &var_1b0)
            sub_1405ec8a0(&var_1b0)
        
        int64_t rdi_4 = *(arg1 + 0xe8)
        
        if (rdi_4 != 0)
            int32_t rax_19 = (*(*(arg1 + 0x58) + 0x18))(arg1 + 0x58)
            int64_t* rcx_23 = data_143f0f180
            int64_t rax_20 = (*(*rcx_23 + 0x130))(rcx_23, &data_143f02b98, rdi_4, 0, rax_19, 1)
            void* rdi_5 = *(arg1 + 0x60)
            
            if ((rdi_5.b & 1) != 0)
                rdi_5 = (rdi_5 s>> 1) + arg1 + 0x60
            
            memcpy(rax_20, rdi_5, (*(*(arg1 + 0x58) + 0x18))(arg1 + 0x58))
            int64_t* rcx_27 = data_143f0f180
            (*(*rcx_27 + 0x138))(rcx_27, &data_143f02b98, *(arg1 + 0xe8))
        else
            int128_t zmm0_1 = data_143dbb1e0
            int32_t rax_14 = (1 << (data_1439c7a34).b) - 1
            int64_t var_f8 = 0
            int32_t var_d4_1 = rax_14
            int32_t var_e8_1 = 1
            int128_t var_e4_1 = zmm0_1
            char var_d0_1 = 0
            int64_t var_c8_1 = 0
            int32_t var_c0_1 = 0
            void* var_f0_1 = arg1 + 0x58
            int32_t rax_16 = (*(*(arg1 + 0x58) + 0x18))(arg1 + 0x58)
            int64_t* rcx_16 = data_143f0f180
            var_1c0.q = &var_f8
            void var_1a8
            (*(*rcx_16 + 0x498))(rcx_16, &var_1a8, &data_143f02b98, zx.q(rax_16), 0x202, var_1c0)
            sub_1405d1600(arg1 + 0xe8, &var_1a8)
            sub_1405d1550(&var_1a8)
            int64_t* rcx_19 = data_143f0f180
            var_1c0.b = 0xd
            void var_1a0
            (*(*rcx_19 + 0x4b8))(rcx_19, &var_1a0, &data_143f02b98, *(arg1 + 0xe8), 4, var_1c0)
            sub_1405d1600(arg1 + 0xf0, &var_1a0)
            sub_1405ec8a0(&var_1a0)
        
        int64_t rdi_7 = *(arg1 + 0xf8)
        int128_t zmm0_2
        
        if (rdi_7 == 0)
            zmm0_2 = data_143dbb1e0
            int32_t rax_25 = (1 << (data_1439c7a34).b) - 1
            int64_t var_b8 = 0
            int32_t var_94_1 = rax_25
            int32_t var_a8_1 = 1
            int128_t var_a4_1 = zmm0_2
            char var_90_1 = 0
            int64_t var_88_1 = 0
            int32_t var_80_1 = 0
            void* var_b0_1 = arg1 + 0x78
            int32_t rax_27 = (*(*(arg1 + 0x78) + 0x18))(arg1 + 0x78)
            int64_t* rcx_30 = data_143f0f180
            var_1c0.q = &var_b8
            void var_198
            (*(*rcx_30 + 0x498))(rcx_30, &var_198, &data_143f02b98, zx.q(rax_27), 0x202, var_1c0)
            sub_1405d1600(arg1 + 0xf8, &var_198)
            sub_1405d1550(&var_198)
            int64_t* rcx_33 = data_143f0f180
            var_1c0.b = 0xd
            void var_190
            (*(*rcx_33 + 0x4b8))(rcx_33, &var_190, &data_143f02b98, *(arg1 + 0xf8), 4, var_1c0)
            sub_1405d1600(arg1 + 0x100, &var_190)
            sub_1405ec8a0(&var_190)
        else if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
            int32_t rax_30 = (*(*(arg1 + 0x78) + 0x18))(arg1 + 0x78)
            int64_t* rcx_37 = data_143f0f180
            int64_t rax_31 = (*(*rcx_37 + 0x130))(rcx_37, &data_143f02b98, rdi_7, 0, rax_30, 1)
            void* rdi_8 = *(arg1 + 0x80)
            
            if ((rdi_8.b & 1) != 0)
                rdi_8 = (rdi_8 s>> 1) + arg1 + 0x80
            
            memcpy(rax_31, rdi_8, (*(*(arg1 + 0x78) + 0x18))(arg1 + 0x78))
            int64_t* rcx_41 = data_143f0f180
            (*(*rcx_41 + 0x138))(rcx_41, &data_143f02b98, *(arg1 + 0xf8))
        
        int64_t rdi_10 = *(arg1 + 0x108)
        
        if (rdi_10 == 0)
            zmm0_2 = data_143dbb1e0
            int32_t rax_36 = (1 << (data_1439c7a34).b) - 1
            int64_t var_78 = 0
            int32_t var_54_1 = rax_36
            int32_t var_68_1 = 1
            int128_t var_64_1 = zmm0_2
            char var_50_1 = 0
            int64_t var_48_1 = 0
            int32_t var_40_1 = 0
            void* var_70_1 = arg1 + 0x98
            int32_t rax_38 = (*(*(arg1 + 0x98) + 0x18))(arg1 + 0x98)
            int64_t* rcx_44 = data_143f0f180
            var_1c0.q = &var_78
            void var_188
            (*(*rcx_44 + 0x498))(rcx_44, &var_188, &data_143f02b98, zx.q(rax_38), 0x202, var_1c0)
            sub_1405d1600(arg1 + 0x108, &var_188)
            sub_1405d1550(&var_188)
            int64_t* rcx_47 = data_143f0f180
            var_1c0.b = 0xd
            void var_180
            (*(*rcx_47 + 0x4b8))(rcx_47, &var_180, &data_143f02b98, *(arg1 + 0x108), 4, var_1c0)
            sub_1405d1600(arg1 + 0x110, &var_180)
            sub_1405ec8a0(&var_180)
        else if (*(arg1 + 0x18) != 0 && *(arg1 + 4) s> 0)
            int32_t rax_41 = (*(*(arg1 + 0x98) + 0x18))(arg1 + 0x98)
            int64_t* rcx_51 = data_143f0f180
            int64_t rax_42 = (*(*rcx_51 + 0x130))(rcx_51, &data_143f02b98, rdi_10, 0, rax_41, 1)
            void* rdi_11 = *(arg1 + 0xa0)
            
            if ((rdi_11.b & 1) != 0)
                rdi_11 = (rdi_11 s>> 1) + arg1 + 0xa0
            
            memcpy(rax_42, rdi_11, (*(*(arg1 + 0x98) + 0x18))(arg1 + 0x98))
            int64_t* rcx_55 = data_143f0f180
            (*(*rcx_55 + 0x138))(rcx_55, &data_143f02b98, *(arg1 + 0x108))
        
        int32_t var_168
        int32_t* r8_13 = &var_168
        int64_t* rcx_56 = data_143f0f180
        int64_t rdx_22 = *(arg1 + 0x118)
        var_168 = *(arg1 + 8)
        int32_t var_164_1 = *(arg1 + 0xc)
        int32_t var_160_1 = *(arg1 + 0x10)
        int32_t var_15c_1 = *(arg1 + 0x14)
        int64_t var_158_1 = *(arg1 + 0xe0)
        int64_t var_150_1 = *(arg1 + 0xf0)
        int64_t var_148_1 = *(arg1 + 0x100)
        int64_t var_140_1 = *(arg1 + 0x110)
        int64_t rax_54 = *rcx_56
        
        if (rdx_22 == 0)
            void* var_178
            (*(rax_54 + 0xf8))(rcx_56, &var_178, r8_13, &data_143f283c0, 1, 1)
            void* rax_55 = var_178
            void* var_170 = rax_55
            
            if (rax_55 != 0)
                *(rax_55 + 8) += 1
            
            sub_1405d1550(&var_178)
            sub_1405d1600(arg1 + 0x118, &var_170)
            result = sub_1405d1550(&var_170)
        else
            result = (*(rax_54 + 0x100))(rcx_56, rdx_22, r8_13)
    
    *(arg1 + 0x238) = arg2

__security_check_cookie(result_1 ^ &var_1e8)
return result
