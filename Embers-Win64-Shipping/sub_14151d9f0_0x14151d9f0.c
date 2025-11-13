// 函数: sub_14151d9f0
// 地址: 0x14151d9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t result = __security_cookie ^ &var_228
int64_t result_1 = result

if (*(arg3 + 0x18c8) s> 0)
    uint64_t rax_1 = sub_1422e5a30(arg3)
    
    if (rax_1.d u> 0x30 || not(test_bit(0x1000010150015, rax_1)))
        int64_t rcx_1 = sx.q(rax_1.d)
        int64_t rdx = rcx_1 * 5
        
        if (*(&data_143f025f0 + (rdx << 2)) == data_143f025c0 && *((rdx << 2) + 0x143f025f8) == 3)
            goto label_14151da9f
        
        result = rcx_1 * 5
        
        if (((*((result << 2) + &data_143f025fc) u>> 0xc).b & 1) != 0)
            goto label_14151da9f
    else
    label_14151da9f:
        int64_t* rax_3 = sub_14081d830(0x90, *(arg2 + 8), 1, 0)
        int128_t* rdi_1 = rax_3
        
        if (rax_3 == 0)
            rdi_1 = nullptr
        else
            sub_14117af20(rax_3)
        
        memset(rdi_1, 0, 0x90)
        int64_t var_1f8 = *(arg4 + 0x130)
        int16_t var_1f0_1 = 1
        char var_1ee_1 = 0
        int32_t var_1ec_1 = 0xffffffff
        *rdi_1 = var_1f8.o
        var_1f8 = *(arg4 + 0x138)
        int16_t var_1f0_2 = 1
        char var_1ee_2 = 0
        int32_t var_1ec_2 = 0xffffffff
        rdi_1[1] = var_1f8.o
        int64_t rax_6 = *(arg1 + 8)
        int32_t rax_8 = arg5[1].d
        uint64_t var_1c0_1 = *arg5
        void var_1a8
        sub_1414c05a0(&var_1a8, arg4)
        int64_t zmm1_1 = *arg6
        int32_t rax_10 = arg6[1].d
        void*** rax_11 = sub_14081d830(0x1e0, *(arg2 + 8), 1, 0)
        void*** rbx_1 = rax_11
        
        if (rax_11 == 0)
            rbx_1 = nullptr
        else
            void var_1e8
            var_1f8.o = *sub_1412ec240(&var_1e8, rdi_1)
            void var_208
            sub_141992bd0(rbx_1, &var_208, &var_1f8, 1)
            *rbx_1 = &data_142fbbba0
            rbx_1[8] = rdi_1
            rbx_1[9] = rax_6
            rbx_1[0xa] = arg3
            rbx_1[0xb] = var_1c0_1
            rbx_1[0xc].d = rax_8
            sub_1414c05a0(&rbx_1[0xe], &var_1a8)
            rbx_1[0x3a].d = arg7
            *(rbx_1 + 0x1d4) = zmm1_1
            *(rbx_1 + 0x1dc) = rax_10
        
        result = sub_1419968d0(arg2, rbx_1)
        int64_t var_98
        
        if (var_98 != 0)
            result = sub_140a74f90(var_98)

__security_check_cookie(result_1 ^ &var_228)
return result
