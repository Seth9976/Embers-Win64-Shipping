// 函数: sub_141ac0f20
// 地址: 0x141ac0f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t* r15 = arg2
sub_141ea5640(arg1 + 0xc8, arg2)
int32_t r12 = *(arg1 + 0xe0)
int32_t rax_2 = *(arg1 + 0x104)
void* rdi = *(arg1 + 0xf8)
int32_t i_3 = *(arg1 + 0x100)

if (r12 s> rax_2)
    if (i_3 != 0)
        void* rdi_2 = rdi + 8
        int32_t i
        
        do
            int64_t* rcx_2 = *rdi_2
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
                *rdi_2 = 0
            
            rdi_2 -= -0x80
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x104)
    
    *(arg1 + 0x100) = 0
    
    if (rax_2 != r12)
        sub_140888ba0(arg1 + 0xf8, r12)
else
    if (i_3 != 0)
        int64_t* rdi_1 = rdi + 8
        int32_t i_1
        
        do
            int64_t* rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
                *rdi_1 = 0
            
            rdi_1 -= -0x80
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x100) = 0

void* rdi_5 = arg1
int64_t i_5 = sx.q(*(rdi_5 + 0xe0))
bool result = sub_141ea6180(arg1 + 0xc8, r15)

if (result != 0)
    void var_a8
    result = sub_141dea310(&var_a8, rdi_5 + 0xd4, r15)
    int64_t i_4 = i_5
    
    if (i_5.d s> 0)
        int64_t r12_1 = 0
        int64_t i_2
        
        do
            void* rdi_4 = *(rdi_5 + 0xd8) + r12_1
            sub_141ea5640(rdi_4, r15)
            result = sub_141ea6180(rdi_4, r15)
            
            if (result == 0)
                *(rdi_4 + 0x18) = 0xffffffff
            else
                bool result_1 = *(rdi_4 + 0x10) != 0
                char rbx = *(rdi_4 + 0x11)
                int16_t var_100_1 = 0x101
                char var_188 = 0
                int64_t var_180_1 = 0
                void*** rax_5 = j_sub_140a82f30(0x18)
                void*** rdx_5 = rax_5
                
                if (rax_5 == 0)
                    rdx_5 = nullptr
                else
                    rax_5[1].w = var_100_1
                    *(rax_5 + 0xa) = 1
                    *rdx_5 = &data_14303cd38
                    rdx_5[2].b = rbx
                
                float zmm2_1[0x4] = zx.o(0)
                uint32_t zmm3_1[0x4] = data_143f2b810
                float var_168_1[0x4] = data_143dbb0c0
                float zmm0_1[0x4] = data_143dbb0e0
                int16_t rax_7 = *(rdi_4 + 0x12)
                uint32_t var_158_1[0x4] = data_143dbb0d0
                uint32_t zmm1_1[0x4] = zmm3_1
                zmm3_1 = __andps_xmmxud_memxud(zmm3_1, data_143f2b820)
                int32_t var_178_1 = 0
                float var_128_1[0x4] = zmm2_1
                uint32_t var_118_1[0x4] = zmm3_1
                zmm1_1[0].q = zmm2_1 u>> 0x40
                uint32_t var_138_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm1_1, 0xc4)
                rdx_5[1].w = rax_7
                *(rdx_5 + 0xa) = *(rdi_4 + 0x14)
                int128_t* rax_9
                void var_78
                
                if (result_1 == 0)
                    float var_108[0x4]
                    rax_9 = &var_108
                    zmm1_1 = data_143dbb0d0
                    var_108 = data_143dbb0c0
                    float var_e8_1[0x4] = data_143dbb0e0
                    uint32_t var_f8_1[0x4] = zmm1_1
                else
                    rax_9, zmm2_1, zmm3_1 = sub_141dea310(&var_78, rdi_4 + 0xc, r15)
                float var_d8[0x4] = *rax_9
                uint32_t var_c8_1[0x4] = rax_9[1]
                float var_b8_1[0x4] = rax_9[2]
                sub_141a80470(&var_188, &var_a8, &var_d8, &data_143dbb0c0, zmm2_1, zmm3_1)
                int64_t r15_1 = sx.q(*(arg1 + 0x100))
                int32_t rax_10 = (r15_1 + 1).d
                *(arg1 + 0x100) = rax_10
                
                if (rax_10 s> *(arg1 + 0x104))
                    sub_1408888d0(arg1 + 0xf8)
                
                char* rbx_3 = (r15_1 << 7) + *(arg1 + 0xf8)
                *(rbx_3 + 8) = 0
                *rbx_3 = var_188
                
                if (rdx_5 != 0)
                    char rax_12 = var_188
                    
                    if (rax_12 == 0)
                        sub_141a864e0(rbx_3, rdx_5)
                    else if (rax_12 == 1)
                        sub_141a86430(rbx_3, rdx_5)
                
                *(rbx_3 + 0x10) = var_178_1[0]
                result = result_1
                rbx_3[0x14] = result
                *(rbx_3 + 0x20) = var_168_1
                *(rbx_3 + 0x30) = var_158_1
                *(rbx_3 + 0x40) = zmm0_1
                *(rbx_3 + 0x50) = var_138_1
                *(rbx_3 + 0x60) = var_128_1
                *(rbx_3 + 0x70) = var_118_1
                *(rdi_4 + 0x18) = r15_1.d
                
                if (rdx_5 != 0)
                    result = (**rdx_5)(rdx_5, 1)
                
                r15 = arg2
            
            rdi_5 = arg1
            r12_1 += 0x1c
            i_2 = i_4
            i_4 -= 1
        while (i_2 != 1)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
