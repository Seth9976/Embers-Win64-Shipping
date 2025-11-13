// 函数: sub_140f562d0
// 地址: 0x140f562d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t r15 = arg6

if (data_1439b3a04 != 0 && not(data_143dbb1f0.d[0] f>= *arg3))
    float zmm0[0x4] = data_143dbb1f0:4.d
    
    if (not(zmm0[0] f>= arg3[1]))
        float var_f8
        float var_a8
        char var_74
        float zmm1[0x4]
        
        if (data_143e2a23c != 0)
            void* rax_25 = arg1[0x7a]
            
            if (rax_25 != 0 && *(rax_25 + 0x6c) != 0)
                char rax_26 = sub_140e25600(arg1, arg8)
                void* r9_1 = arg1[0x7a]
                uint32_t rcx_10 = zx.d(*(r9_1 + 0x30))
                void* rdx_10 = r9_1 + 0x20
                char r8_1 = 0x20
                
                if (rax_26 != 0)
                    r8_1 = 0
                
                if (rcx_10 != 0)
                    if (rcx_10 == 1)
                        rdx_10 = *(rdx_10 + 0x18)
                    else if (rcx_10 == 3)
                        rdx_10 = &arg7[2]
                    else
                        rdx_10 = &arg7[1]
                
                float zmm2[0x4] = *rdx_10
                char rcx_12 = arg3[0xd].b
                int32_t var_9c
                var_9c.q = 0
                zmm2[0] = zmm2[0] f* *arg7
                float temp0_9[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
                temp0_9[0] = temp0_9[0] f* *(arg7 + 4)
                char var_74_2 = ((rcx_12 & 1) * 2) | (var_74 & 0xfc)
                var_f8 = zmm2[0]
                int32_t var_120
                var_120.q = &var_f8
                float temp0_10[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
                temp0_10[0] = temp0_10[0] f* *(arg7 + 8)
                int32_t var_128
                var_128.b = r8_1
                float var_f4_3 = temp0_9[0]
                zmm1 = arg3[4]
                float var_f0_3 = temp0_10[0]
                zmm0 = arg3[3]
                float temp0_11[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
                temp0_11[0] = temp0_11[0] f* *(arg7 + 0xc)
                float var_a4_2 = zmm1[0]
                zmm1 = *arg3
                var_a8 = zmm0[0]
                int128_t var_94
                var_94.d = zmm1[0]
                var_94:4.d = arg3[1][0]
                float var_ec_3 = temp0_11[0]
                int128_t var_84
                var_84:8.q = *(arg3 + 0x2c)
                float var_a0_2 = arg3[2][0]
                var_94 = *(arg3 + 0x1c)
                sub_140db3600(arg5, r15, &var_a8, r9_1, var_128.b, var_120)
                r15 += 1
        else
            int128_t zmm6 = 0x3f800000
            
            if (arg1[0x72].b != 0)
                zmm6 = *(arg7 + 0xc)
            
            zmm6.d = zmm6.d f* *sub_140eff5d0(&arg1[0x73], zmm0[0])
            
            if (not(zmm6.d f<= 0f))
                float zmm4_1[0x4] = *arg3
                float zmm5_1 = arg3[1]
                zmm0 = arg3[0xb]
                float zmm3 = zmm5_1 f* arg3[9]
                zmm4_1[0] = zmm4_1[0] f* arg3[7]
                zmm5_1 = zmm5_1 f* arg3[0xa]
                zmm4_1[0] = zmm4_1[0] f* arg3[8]
                zmm1 = arg3[0xc]
                float var_f0_1 = zmm4_1[0]
                float var_e8_1 = zmm3
                var_f8 = zmm0[0]
                float var_f4_1 = zmm1[0]
                float var_ec_1 = zmm4_1[0]
                float var_e4_1 = zmm5_1
                float var_c8
                float zmm6_1[0x4] = sub_140dbe170(&var_f8, &var_c8)
                zmm1 = var_c8
                int32_t var_c4
                uint128_t zmm0_1 = var_c4
                int32_t rbx_1 = 0
                float var_c0
                float zmm2_1 = var_c0 - zmm1[0]
                float var_bc
                float zmm3_1 = var_bc f- zmm0_1.d
                var_a8 = zmm1[0]
                char var_74_1 = (var_74 & 0xfd) | 1
                int32_t var_a0_1 = 0x3f800000
                float var_9c_1 = zmm2_1
                zmm6_1[0] = zmm6_1[0] * 3f
                float var_98_1 = zmm3_1
                int32_t var_a4_1 = zmm0_1.d
                zmm6_1[0] = zmm6_1[0] + zmm6_1[0]
                int128_t var_94_1
                __builtin_memcpy(&var_94_1, 
                    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
                "00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00", 
                    0x20)
                zmm6_1[0] = zmm6_1[0] + 0.5f
                int32_t var_108_1 = int.d(zmm2_1 + zmm2_1 + 0.5f) s>> 1
                int32_t var_104_1 = int.d(zmm3_1 + zmm3_1 + 0.5f) s>> 1
                int32_t var_100 = int.d(zmm6_1[0]) s>> 1
                int32_t* rax_10 = sub_140f46600(&arg1[0x76])
                int32_t* rcx_3 = &var_100
                
                if (rax_10[1].b != 0)
                    rcx_3 = rax_10
                
                int32_t rax_11 = *rcx_3
                
                if (data_1439b3a0c != 0 && rax_11 s> 9)
                    rbx_1 = 2
                    
                    if (rax_11 s>= 0x40)
                        rbx_1 = 4
                    
                    rax_11 = divs.dp.d(sx.q(rax_11), rbx_1)
                
                int32_t rcx_4 = rax_11 + 1
                
                if ((rax_11.b & 1) != 0)
                    rcx_4 = rax_11
                
                int32_t r12_1
                
                if (rcx_4 s>= 3)
                    r12_1 = data_1439b3a08
                    
                    if (rcx_4 s< r12_1)
                        r12_1 = rcx_4
                else
                    r12_1 = 3
                
                float temp0_2[0x4] = _mm_max_ss(zmm6_1[0], 0x3f000000)
                int32_t rcx_5
                
                if (rbx_1 == 0)
                    rcx_5 = var_104_1
                else
                    zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_1))
                    var_108_1 = divs.dp.d(sx.q(var_108_1 - 1 + rbx_1), rbx_1)
                    int32_t temp0_5 = divs.dp.d(sx.q(var_104_1 - 1 + rbx_1), rbx_1)
                    temp0_2[0] = temp0_2[0] f/ zmm0_1.d
                    rcx_5 = temp0_5
                    var_104_1 = temp0_5
                
                if (var_108_1 s> 0 && rcx_5 s> 0)
                    int64_t* rax_24
                    int32_t zmm6_2
                    rax_24, zmm6_2 = sub_140d92e00(&var_f8, arg3)
                    sub_140db8760(arg5, rax_24)
                    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(r12_1))
                    uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(var_108_1))
                    var_f8 = zmm0_2.d
                    int32_t var_f4_2 = zmm6_2
                    int32_t var_ec_2 = _mm_cvtepi32_ps(zx.o(var_104_1)).d
                    int32_t var_f0_2 = zmm1_1.d
                    sub_140db3c30(arg5, r15, &var_a8, &var_f8, rbx_1)
                    sub_140db7b50(arg5)
                
                r15 += 1

uint64_t result = sub_140e1e7e0(arg1, arg2, arg3, arg4, arg5, r15, arg7, arg8)
__security_check_cookie(rax_1 ^ &var_148)
return result
