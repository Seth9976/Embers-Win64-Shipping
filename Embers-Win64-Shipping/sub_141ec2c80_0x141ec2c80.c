// 函数: sub_141ec2c80
// 地址: 0x141ec2c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (arg2 == 3 || arg2 == 0)
    int64_t* rcx = arg3[1]
    
    if (rcx == 0)
        goto label_141ec2f8d
    
    int32_t rax_3 = (*(*rcx + 0x30))(rcx)
    
    if (rax_3 u> 6)
        goto label_141ec2f8d
    
    int32_t rax_5
    
    switch (rax_3)
        case 0
            rax_5 = 0
        case 1
            rax_5 = 1
        case 2
            rax_5 = 3
        case 3
            rax_5 = 2
        case 4
            rax_5 = 4
        case 5
            rax_5 = 5
        case 6
            rax_5 = 6
    
    int64_t var_e8
    
    switch (rax_5)
        case 0, 3
            int32_t rcx_5 = arg7[1].d
            *arg1 = *arg7
            arg1[1].d = rcx_5
        case 1
            goto label_141ec2f8d
        case 2
            int32_t rax_7 = arg7[1].d
            var_e8 = *arg7
            int32_t var_e0_1 = rax_7
            sub_141ec24f0(arg1, arg3, arg4, &var_e8, arg5)
        case 4
            int32_t rax_9 = arg7[1].d
            var_e8 = *arg7
            int32_t var_e0_2 = rax_9
            sub_141ec2990(arg1, arg3, arg4, &var_e8)
        case 5
            int32_t rax_14 = arg7[1].d
            var_e8 = *arg7
            int32_t var_e0_3 = rax_14
            sub_141ec35c0(arg1, arg3, arg4, &var_e8)
        case 6
            int128_t var_68_1 = arg6
            int32_t var_b8
            int64_t var_b0_1
            
            if (arg3[2].d != 0xffffffff)
                int64_t* rcx_8 = arg3[1]
                var_b8 = 6
                var_b0_1 = 0
                int32_t var_a8_1 = 0x3f800000
                int32_t var_a4_1 = 0x3f800000
                int64_t var_a0_1 = 0x3f800000
                (*(*rcx_8 + 0x78))(rcx_8, &var_b8)
            
            if (arg3[2].d == 0xffffffff || var_b0_1 == 0)
                int32_t rax_12 = arg7[1].d
                *arg1 = *arg7
                arg1[1].d = rax_12
            else
                uint32_t rbx_1 = arg3[2].d
                float var_d8[0x8]
                float zmm10 = sub_141ecfe50(&var_d8, arg3[1], *arg3, arg5)
                float var_98
                physx::PxMeshQuery::getTriangle(&var_b8, &var_d8, rbx_1, &var_98, nullptr, nullptr)
                float var_90
                float var_84
                float zmm7_1 = var_84 - var_90
                float var_8c
                float zmm8_1 = var_8c - var_98
                float var_94
                float var_88
                float zmm4_1 = var_88 - var_94
                float var_78
                float zmm3_1 = var_78 - var_90
                float var_80
                float zmm6_1 = var_80 - var_98
                float var_7c
                float zmm5_1 = var_7c - var_94
                float zmm9_1 = zmm4_1 * zmm3_1 - zmm7_1 * zmm5_1
                float zmm0_1 = zmm8_1
                zmm8_1 = zmm8_1 * zmm5_1 - zmm4_1 * zmm6_1
                zmm7_1 = zmm7_1 * zmm6_1 - zmm0_1 * zmm3_1
                float temp0_1 = _mm_sqrt_ss(0, zmm7_1 * zmm7_1 + zmm9_1 * zmm9_1 + zmm8_1 * zmm8_1)
                
                if (not(temp0_1 <= 0f))
                    zmm10 = zmm10 / temp0_1
                    zmm9_1 = zmm9_1 * zmm10
                    zmm7_1 = zmm7_1 * zmm10
                    zmm8_1 = zmm8_1 * zmm10
                
                *arg1 = zmm9_1
                *(arg1 + 4) = zmm7_1
                arg1[1].d = zmm8_1
else
label_141ec2f8d:
    int32_t rax_16 = arg7[1].d
    *arg1 = *arg7
    arg1[1].d = rax_16

__security_check_cookie(rax_1 ^ &var_118)
return arg1
