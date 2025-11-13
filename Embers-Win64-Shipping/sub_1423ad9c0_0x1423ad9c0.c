// 函数: sub_1423ad9c0
// 地址: 0x1423ad9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t result = __security_cookie ^ &var_f8
int64_t result_1 = result

if (*(arg1 + 0x54) == 0 && *arg2 != 0)
    void* rsi_1 = arg2[1]
    
    if (rsi_1 != 0)
        void* rsi_2 = *(rsi_1 + 0xe8)
        void* rax_1 = rsi_2
        void* var_98 = rax_1
        
        if (rsi_2 != 0)
            *(rsi_2 + 8) += 1
            rax_1 = var_98
        
        int32_t r11_1 = *(rax_1 + 0x40)
        int32_t var_d8
        char var_d0
        int32_t var_c8
        int32_t var_c0
        int32_t var_b8
        int64_t* var_b0
        int64_t* r15_1
        
        if (test_bit(r11_1, 0x16))
            void* rcx_15 = *(arg2[1] + 0xe8)
            void* var_a0 = rcx_15
            
            if (rcx_15 != 0)
                *(rcx_15 + 8) += 1
            
            r15_1 = arg1 + 0x100
            sub_1405d1600(r15_1, &var_a0)
            sub_1405d1550(&var_a0)
        else
            int128_t zmm0 = data_143dbb1e0
            void* r9_1 = *(*arg2 + 0xd0)
            char rcx_2 = (data_1439c7a34).b
            int64_t var_78 = *(arg2[1] + 0x50)
            int64_t var_70_1 = 0
            int32_t var_54_1 = (1 << rcx_2) - 1
            var_b0 = &var_78
            int32_t var_68_1 = 1
            int128_t var_64_1 = zmm0
            char var_50_1 = 0
            int64_t var_48_1 = 0
            int32_t var_40_1 = 0
            var_b8 = r11_1 | 0x400000
            var_c0 = 1
            var_c8 = *(r9_1 + 0x20)
            int32_t* r8_2 = **(r9_1 + 0x18)
            int64_t* rcx_4 = data_143f0f180
            var_d0 = *(rax_1 + 0x3c)
            var_d8 = r8_2[1]
            void var_a8
            (*(*rcx_4 + 0x560))(rcx_4, &var_a8, &data_143f02b98, zx.q(*r8_2), var_d8, var_d0, 
                var_c8, var_c0, var_b8, var_b0)
            r15_1 = arg1 + 0x100
            sub_1405d1600(r15_1, &var_a8)
            sub_1405d1550(&var_a8)
            int64_t* rcx_7 = data_143f0f180
            (*(*rcx_7 + 0x698))(rcx_7, &data_143f02b98, *r15_1, zx.q(*(arg2[1] + 0x60)))
            int64_t* rcx_8 = data_143f0f180
            (*(*rcx_8 + 0x6a0))(rcx_8, &data_143f02b98, *r15_1, zx.q(*(arg2[1] + 0x60)))
            void* rax_5 = *r15_1
            *(rax_5 + 8) += 1
            *(rsi_2 + 8) += 1
            bool cond:1_1 = data_143f02ba8 == 0
            void* var_90 = rax_5
            void* var_88_1 = rsi_2
            
            if (cond:1_1)
                void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_6 = &rcx_12[4]
                
                if (rax_6 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x28)
                    rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_6 = &rcx_12[4]
                
                data_143f02bac += 1
                int128_t zmm0_1 = var_90.o
                data_143f02bc8 = rax_6
                *data_143f02ba0 = rcx_12
                data_143f02ba0 = &rcx_12[1]
                rcx_12[1] = 0
                *rcx_12 = &data_143339448
                *(rcx_12 + 0x10) = zmm0_1
            else
                sub_1423a66c0(&var_90)
        
        int64_t* rcx_18 = data_143f0f180
        (*(*rcx_18 + 0x698))(rcx_18, &data_143f02b98, *r15_1, zx.q(*(arg1 + 8)), var_d8, var_d0, 
            var_c8, var_c0, var_b8, var_b0)
        result = sub_1405d1550(&var_98)

__security_check_cookie(result_1 ^ &var_f8)
return result
