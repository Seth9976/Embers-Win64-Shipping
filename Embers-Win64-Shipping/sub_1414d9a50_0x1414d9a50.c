// 函数: sub_1414d9a50
// 地址: 0x1414d9a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t result = arg6
uint64_t result_2 = result
int32_t rbp_2 = *(result + 8) - arg4 + arg5
int32_t var_c8 = rbp_2

if (rbp_2 s> 0)
    int64_t* var_a0_1 = &data_143ec4c60
    int64_t* rbx_1 = &data_143ec4c60
    sub_1410e0370(arg2)
    int32_t rdi_1 = 0
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbp_2 + 0x3ff)
    result = zx.q((temp1_1 + (temp0_1 & 0x3ff)) s>> 0xa)
    int32_t var_b8_1 = result.d
    
    if (result.d s> 0)
        result = zx.q(result.d - 1)
        int32_t result_1 = result.d
        
        do
            int64_t* var_c0 = nullptr
            int32_t r15_1 = 0x400
            
            if (rdi_1 == result.d)
                r15_1 = rbp_2
            
            sub_141427c70(arg1, arg2)
            int64_t* rcx_4 = *sub_14139d440(rbx_1)
            int128_t* rax_7 = (*(*rcx_4 + 0x10))(rcx_4)
            char var_f0_1 = 0
            char var_f8_1 = 1
            char var_100_1 = 1
            wchar16 const* const var_108_1 = u"SceneColorTiled"
            int128_t var_98 = *rax_7
            uint128_t var_88_1 = rax_7[1]
            int128_t var_78_1 = rax_7[2]
            uint128_t zmm1_1 = rax_7[3]
            uint128_t var_68_1 = zmm1_1
            int128_t var_58_1 = rax_7[4]
            var_68_1:4.d = _mm_bsrli_si128(zmm1_1, 4).d | 0x10000
            sub_1419a0ce0(&data_1439c9260, arg2, &var_98, &var_c0, var_108_1, var_100_1, var_f8_1, 
                var_f0_1)
            int64_t* rax_10 = sub_14139d440(rbx_1)
            int32_t r8_1 = *(arg1 + 0xa8)
            int32_t rbx_2 = 0
            int64_t r12_1 = *rax_10
            
            if (r8_1 s> 0)
                do
                    var_f0_1.q = result_2
                    var_f8_1.d = arg5
                    var_100_1.d = arg4
                    sub_1414bf1c0(arg2, sx.q(rbx_2) * 0x5240 + *(arg1 + 0xa0), rbx_2, r8_1, arg3, 
                        var_100_1, var_f8_1, var_f0_1, rdi_1 << 0xa, r15_1, r12_1, var_c0)
                    r8_1 = *(arg1 + 0xa8)
                    rbx_2 += 1
                while (rbx_2 s< r8_1)
                
                rbp_2 = var_c8
            
            rbx_1 = var_a0_1
            sub_1413a9e60(rbx_1, var_c0)
            int64_t* rcx_10 = var_c0
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x38))(rcx_10)
            
            result = zx.q(result_1)
            rbp_2 -= 0x400
            rdi_1 += 1
            var_c8 = rbp_2
        while (rdi_1 s< var_b8_1)

__security_check_cookie(rax_1 ^ &var_128)
return result
