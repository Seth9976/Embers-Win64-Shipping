// 函数: sub_141fb5de0
// 地址: 0x141fb5de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
int128_t zmm7
int128_t var_48 = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm12[0x4]
float var_98[0x4] = zmm12
int128_t zmm13
int128_t var_a8 = zmm13
float zmm14[0x4]
float var_b8[0x4] = zmm14
void var_208
uint64_t var_c8 = __security_cookie ^ &var_208
void* rsi = *(arg1 + 0x580)
uint64_t result

if (rsi == 0)
    result.b = 0
else if ((*(arg1 + 0x570) & 8) == 0)
    *arg2 = *(arg1 + 0x5a0)
    arg2[1].d = *(arg1 + 0x5a8)
    result.b = 1
else
    zmm8 = data_143dbb1f8
    int32_t rdi_1 = 0
    zmm7 = data_143dbb1fc
    zmm14 = zmm8
    zmm6 = data_143dbb200
    zmm13 = zmm7
    zmm12 = zmm6
    uint64_t result_2 = 0
    int32_t var_d0_1 = 0
    uint64_t r15
    r15.b = 0
    int32_t var_cc_1 = 0x18
    void* rax_1 = sub_142546fa0()
    void* const r14_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        void* rax_2 = sub_142459c10()
        
        if (rax_2 == 0)
            r14_1 = nullptr
        else
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rax_1 + 0x38))
                r14_1 = nullptr
            else
                r14_1 = rax_1
                
                if (*(*(rax_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                    r14_1 = nullptr
    
    void var_198
    void* r8_1 = &var_198
    
    if (r14_1 != sub_142459c10())
        sub_1419f71f0(rsi, rax_1, r8_1)
    else
        sub_1419f6fe0(rsi, rax_1, r8_1)
    
    int32_t rsi_1 = 0
    uint64_t result_1 = result_2
    
    if (var_d0_1 s<= 0)
    label_141fb60ea:
        
        if (result_1 == 0)
            result.b = 0
        else
            sub_140a74f90(result_1)
            result.b = 0
    else
        float zmm9[0x4]
        float var_68_1[0x4] = zmm9
        int64_t r14_2 = 0
        int128_t zmm10
        int128_t var_78_1 = zmm10
        float zmm11[0x4]
        float var_88_1[0x4] = zmm11
        
        do
            result = &var_198
            
            if (result_1 != 0)
                result = result_1
            
            int64_t* rbx_2 = *(result + r14_2)
            
            if ((rbx_2[0x11].b & 1) != 0)
                if ((*(*rbx_2 + 0x448))(rbx_2).b != 0)
                    float zmm3[0x4] = rbx_2[0x20].d
                    int128_t zmm4_1 = *(rbx_2 + 0x104)
                    float zmm5_1[0x4] = rbx_2[0x21].d
                    float zmm2_1[0x4] = *(rbx_2 + 0x10c)
                    uint128_t zmm1_1 = rbx_2[0x22].d
                    zmm3[0] = zmm3[0] + zmm2_1[0]
                    float zmm0_1[0x4] = *(rbx_2 + 0x114)
                    zmm10.d = zmm4_1.d f+ zmm1_1.d
                    char var_1d0_1 = 1
                    zmm5_1[0] = zmm5_1[0] + zmm0_1[0]
                    zmm3[0] = zmm3[0] - zmm2_1[0]
                    zmm4_1.d = zmm4_1.d f- zmm1_1.d
                    float var_1dc_1 = zmm3[0]
                    zmm5_1[0] = zmm5_1[0] - zmm0_1[0]
                    float var_1d4_1 = zmm5_1[0]
                    int32_t var_1e4_1 = zmm4_1.d
                    float var_1e0_1 = zmm5_1[0]
                    
                    if (r15.b == 0)
                        zmm1_1 = zx.o(zmm10.d.q)
                        zmm2_1 = zmm3[0].o
                        result = zx.q(var_1d0_1.d)
                        r15 = zx.q(result.b)
                        zmm0_1 = zmm1_1
                        zmm7 = zmm1_1.d
                        float temp0_1[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0x55)
                        int96_t var_1c8_1 = zmm2_1[0].12
                        int32_t var_1b0_1 = result.d
                        zmm12 = var_1c8_1:8.d
                        zmm6 = temp0_1
                        zmm13 = var_1c8_1:4.d
                        zmm14 = var_1c8_1.d
                        zmm8 = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xff)
                    else
                        if (not(zmm14[0] <= zmm3[0]))
                            zmm14 = zmm3
                        
                        if (not(zmm13.d f<= zmm4_1.d))
                            zmm13 = zmm4_1
                        
                        if (not(zmm12[0] <= zmm5_1[0]))
                            zmm12 = zmm5_1
                        
                        if (not(zmm8[0] >= zmm3[0]))
                            zmm8 = zmm3
                        
                        if (not(zmm7.d f>= zmm10.d))
                            zmm7 = zmm10
                        
                        if (not(zmm6[0] >= zmm5_1[0]))
                            zmm6 = zmm5_1
                    
                    rdi_1 += 1
                
                result_1 = result_2
            
            rsi_1 += 1
            r14_2 += 8
        while (rsi_1 s< var_d0_1)
        
        if (rdi_1 s<= 0)
            goto label_141fb60ea
        
        zmm8[0] = zmm8[0] + zmm14[0]
        zmm7.d = zmm7.d f+ zmm13.d
        zmm6[0] = zmm6[0] + zmm12[0]
        zmm8[0] = zmm8[0] * 0.5f
        zmm7.d = zmm7.d f* 0.5f
        zmm6[0] = zmm6[0] * 0.5f
        *arg2 = (_mm_unpacklo_ps(zmm8, zmm7.q)).q
        arg2[1].d = zmm6[0]
        
        if (result_1 != 0)
            sub_140a74f90(result_1)
        
        result.b = 1

__security_check_cookie(var_c8 ^ &var_208)
return result
