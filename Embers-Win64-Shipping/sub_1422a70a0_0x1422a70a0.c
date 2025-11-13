// 函数: sub_1422a70a0
// 地址: 0x1422a70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t* result

if (arg2 != 9)
    void* var_138 = nullptr
    int32_t result_1 = 0
    sub_14228b610(arg1, &var_138, arg4)
    void* r13_1 = var_138
    result = sx.q(result_1)
    void* r15_3 = result * 0x50 + r13_1
    
    if (r13_1 != r15_3)
        void* rsi_1 = r13_1 + 0x40
        uint128_t zmm6
        uint128_t var_48_1 = zmm6
        int128_t zmm7
        int128_t var_58_1 = zmm7
        int128_t zmm8
        int128_t var_68_1 = zmm8
        
        do
            int32_t var_118
            memset(&var_118, 0, 0x90)
            arg4.o = *(rsi_1 - 0x20)
            int64_t rdi_1 = sx.q(arg3[1].d)
            zmm6 = zx.o(*(rsi_1 - 0x40))
            int32_t r12_1 = *(rsi_1 - 0x38)
            zmm7 = *(rsi_1 - 0x34)
            int32_t rbx_1 = *rsi_1
            int32_t rax_2 = (rdi_1 + 1).d
            zmm8 = *(rsi_1 + 4)
            var_118 = *(rsi_1 - 0x30)
            int32_t var_e8_1 = arg4.d
            arg4.o = *(rsi_1 - 0x2c)
            int32_t var_b8_1 = *(rsi_1 - 0x10)
            int32_t var_114_1 = arg4.d
            arg4.o = *(rsi_1 - 0xc)
            int32_t var_e4_1 = *(rsi_1 - 0x1c)
            int32_t var_b4_1 = arg4.d
            arg4.o = *(rsi_1 - 0x18)
            int32_t var_110_1 = *(rsi_1 - 0x28)
            int32_t var_e0_1 = arg4.d
            arg4.o = *(rsi_1 - 0x24)
            int32_t var_b0_1 = *(rsi_1 - 8)
            int32_t var_10c_1 = arg4.d
            arg4.o = *(rsi_1 - 4)
            int32_t var_dc_1 = *(rsi_1 - 0x14)
            int32_t var_ac_1 = arg4.d
            int64_t var_108
            __builtin_memset(&var_108, 0, 0x14)
            int64_t var_d8
            __builtin_memset(&var_d8, 0, 0x14)
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x14)
            arg3[1].d = rax_2
            
            if (rax_2 s> *(arg3 + 0xc))
                sub_140a05e50(arg3)
            
            uint64_t* rdi_3 = rdi_1 * 0xb0 + *arg3
            memset(&rdi_3[8], 0, 0x60)
            rsi_1 += 0x50
            arg4.o = var_108.o
            *(rdi_3 + 0x10) = var_118.o
            rdi_3[0x14].d = rbx_1
            result = rsi_1 - 0x40
            *rdi_3 = zmm6.q
            *(rdi_3 + 0xc) = zmm7.d
            *(rdi_3 + 0xa4) = zmm8.d
            rdi_3[1].d = r12_1
            *(rdi_3 + 0x20) = arg4.o
            arg4.o = var_e8_1.o
            int32_t var_f8
            *(rdi_3 + 0x30) = var_f8.o
            int128_t zmm0_2 = var_d8.o
            *(rdi_3 + 0x40) = arg4.o
            int32_t var_c8
            arg4.o = var_c8.o
            *(rdi_3 + 0x50) = zmm0_2
            *(rdi_3 + 0x60) = arg4.o
            arg4.o = var_a8.o
            *(rdi_3 + 0x70) = var_b8_1.o
            *(rdi_3 + 0x80) = arg4.o
            int32_t var_98
            *(rdi_3 + 0x90) = var_98.o
        while (result != r15_3)
    
    if (r13_1 != 0)
        result = sub_140a74f90(r13_1)
else
    result = sub_14228b800(arg1, arg3, arg4)

__security_check_cookie(rax_1 ^ &var_158)
return result
