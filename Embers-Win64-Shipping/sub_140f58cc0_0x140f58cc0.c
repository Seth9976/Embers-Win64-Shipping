// 函数: sub_140f58cc0
// 地址: 0x140f58cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t result_1 = arg5
uint64_t result

if ((*(arg1 + 0x2d4) & 1) == 0)
    result = zx.q(result_1)
else
    int32_t i = 0
    float zmm1[0x4] = *(arg1 + 0x2d8)
    float var_f8[0x4] = *arg6
    var_f8[3] = zmm1[0]
    
    if (*(arg1 + 0x2b0) s<= 0)
        result = zx.q(result_1)
    else
        int64_t* rbx_1 = nullptr
        float zmm6[0x4]
        float var_38_1[0x4] = zmm6
        float zmm7[0x4]
        float var_48_1[0x4] = zmm7
        int128_t zmm8
        int128_t var_58_1 = zmm8
        int128_t zmm9
        int128_t var_68_1 = zmm9
        int128_t zmm10
        int128_t var_78_1 = zmm10
        int128_t zmm11
        int128_t var_88_1 = zmm11
        float zmm12[0x4]
        float var_98_1[0x4] = zmm12
        
        do
            int64_t rdi_1 = *(arg1 + 0x2a8)
            int64_t* rcx = *(rbx_1 + rdi_1 + 0x10)
            int32_t var_e8
            char var_b4
            float zmm0[0x4]
            float zmm2[0x4]
            int64_t zmm3
            float zmm4[0x4]
            int64_t zmm5
            
            if (rcx != 0)
                zmm11 = *(arg3 + 8)
                zmm12 = *(rbx_1 + rdi_1 + 0x98)
                zmm1 = *(rbx_1 + rdi_1 + 0x9c)
                zmm4 = *(arg3 + 0x24)
                zmm2 = *(arg3 + 0x20)
                zmm3 = *(arg3 + 0x28)
                zmm9 = *(rbx_1 + rdi_1 + 0x88)
                zmm6 = *(rbx_1 + rdi_1 + 0x8c)
                char rdx = *(arg3 + 0x34)
                zmm12[0] = zmm12[0] * 0.5f
                int64_t var_dc_1 = 0
                zmm1[0] = zmm1[0] * 0.5f
                var_b4 = ((rdx & 1) * 2) | (var_b4 & 0xfc)
                zmm9.d = zmm9.d f- zmm12[0]
                float var_114_1 = zmm2[0]
                float var_110_1 = zmm4[0]
                zmm6[0] = zmm6[0] - zmm1[0]
                int32_t var_10c_1 = zmm3.d
                zmm1 = *(arg3 + 0x1c)
                zmm0 = zmm1
                zmm1 = zmm1[0].o
                zmm0[0] = zmm0[0] f* zmm9.d
                zmm4[0] = zmm4[0] * zmm6[0]
                zmm5.d = zmm3.d f* zmm6[0]
                zmm4[0] = zmm4[0] + zmm0[0]
                int32_t var_e0_1 = zmm11.d
                float var_d4_1 = zmm12[0]
                zmm2[0] = zmm2[0] f* zmm9.d
                float var_cc_1[0x4] = zmm1
                zmm4[0] = zmm4[0] f+ *(arg3 + 0x2c)
                zmm5.d = zmm5.d f+ zmm2[0]
                zmm10.d = zmm11.d f* zmm9.d
                float var_d0_1 = (*(rbx_1 + rdi_1 + 0x9c))[0]
                zmm10.d = zmm10.d f+ *(arg3 + 0xc)
                zmm5.d = zmm5.d f+ *(arg3 + 0x30)
                zmm8.d = zmm11.d f* zmm6[0]
                var_e8 = zmm10.d
                zmm8.d = zmm8.d f+ *(arg3 + 0x10)
                int64_t var_bc_1 = (_mm_unpacklo_ps(zmm4, zmm5)).q
                int32_t var_e4_1 = zmm8.d
                sub_140db3600(arg4, result_1, &var_e8, (**rcx)(rcx), 0, &var_f8)
                result_1 += 1
            
            int64_t* rcx_2 = *(rbx_1 + rdi_1)
            
            if (rcx_2 != 0)
                zmm1 = *(arg3 + 0x1c)
                zmm12 = *(rbx_1 + rdi_1 + 0xa0)
                zmm11 = *(arg3 + 8)
                zmm4 = *(arg3 + 0x24)
                zmm2 = *(arg3 + 0x20)
                zmm3 = *(arg3 + 0x28)
                zmm10.d = (*(rbx_1 + rdi_1 + 0x88)).d f+ *(rbx_1 + rdi_1 + 0x80)
                zmm7 = *(rbx_1 + rdi_1 + 0x8c)
                zmm7[0] = zmm7[0] f+ *(rbx_1 + rdi_1 + 0x84)
                char rdx_2 = *(arg3 + 0x34)
                zmm12[0] = zmm12[0] * 0.5f
                int64_t var_dc_2 = 0
                float var_108_1 = zmm1[0]
                float var_104_1 = zmm2[0]
                zmm10.d = zmm10.d f- zmm12[0]
                float var_100_1 = zmm4[0]
                zmm0 = *(rbx_1 + rdi_1 + 0xa4)
                zmm0[0] = zmm0[0] * 0.5f
                var_b4 = ((rdx_2 & 1) * 2) | (var_b4 & 0xfc)
                int32_t var_fc_1 = zmm3.d
                zmm7[0] = zmm7[0] - zmm0[0]
                zmm1[0] = zmm1[0] f* zmm10.d
                int32_t var_e0_2 = zmm11.d
                float var_d4_2 = zmm12[0]
                float var_cc_2[0x4] = var_108_1.o
                zmm4[0] = zmm4[0] * zmm7[0]
                zmm5.d = zmm3.d f* zmm7[0]
                zmm1[0] = zmm1[0] + zmm4[0]
                zmm9.d = zmm11.d f* zmm10.d
                zmm8.d = zmm11.d f* zmm7[0]
                zmm9.d = zmm9.d f+ *(arg3 + 0xc)
                zmm1[0] = zmm1[0] f+ *(arg3 + 0x2c)
                zmm8.d = zmm8.d f+ *(arg3 + 0x10)
                zmm2[0] = zmm2[0] f* zmm10.d
                var_e8 = zmm9.d
                zmm5.d = zmm5.d f+ zmm2[0]
                int32_t var_e4_2 = zmm8.d
                float var_d0_2 = (*(rbx_1 + rdi_1 + 0xa4))[0]
                zmm5.d = zmm5.d f+ *(arg3 + 0x30)
                int64_t var_bc_2 = (_mm_unpacklo_ps(zmm1, zmm5)).q
                sub_140db3600(arg4, result_1, &var_e8, (**rcx_2)(rcx_2), 0, &var_f8)
                result_1 += 1
            
            i += 1
            rbx_1 = &rbx_1[0x1a]
        while (i s< *(arg1 + 0x2b0))
        
        result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_148)
return result
