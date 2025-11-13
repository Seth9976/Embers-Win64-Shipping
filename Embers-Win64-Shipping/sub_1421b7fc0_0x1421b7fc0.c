// 函数: sub_1421b7fc0
// 地址: 0x1421b7fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x10)
void* var_d8 = rax
void* const i_2

if (rax == 0)
    i_2 = nullptr
else
    i_2 = *(rax + 0x50)

int32_t var_c8 = 0xffffffff
int16_t var_c4 = 0x101
char var_c2 = 0
int64_t result = sub_140be1ff0(&var_d8)
void* i_1

for (void* const i = i_2; i != 0; i = i_1)
    void* rax_1 = sub_141fee270(i, arg1)
    void* rbx_1 = rax_1
    
    if (rax_1 != 0)
        void* rax_2 = sub_14249ec80()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        void* const rdi_1
        
        if (rax_3.d s<= *(rdx_1 + 0x38))
            rdi_1 = rbx_1
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rdi_1 = nullptr
        
        void* rax_5 = sub_14249f4b0()
        void* rdx_2 = *(rbx_1 + 0x10)
        int64_t rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rbx_1 = nullptr
        
        if (rdi_1 != 0)
            char rax_8 = *(rdi_1 + 0x58)
            wchar16 const* const rbx_2
            
            if (rax_8 == 0)
                rbx_2 = u"Normal"
            else if (rax_8 != 1)
                rbx_2 = u"????"
                
                if (rax_8 == 2)
                    rbx_2 = u"Direct"
            else
                rbx_2 = u"Absolute"
            
            int64_t var_50
            int64_t* rax_9 = sub_140b63b70(rdi_1 + 0x40, &var_50)
            int16_t* const r8_2
            
            if (rax_9[1].d == 0)
                r8_2 = &data_142d40450
            else
                r8_2 = *rax_9
            
            float zmm1_1[0x2] = *(rdi_1 + 0x54)
            float zmm2_1[0x2] = *(rdi_1 + 0x50)
            float zmm3[0x2] = *(rdi_1 + 0x48)
            float zmm4_1[0x2] = *(rdi_1 + 0x4c)
            float var_108_1[0x2] = _mm_cvtps_pd(*(rdi_1 + 0x38))
            wchar16 const* const var_110_1 = rbx_2
            float var_118_1[0x2] = _mm_cvtps_pd(zmm1_1)
            zmm2_1 = _mm_cvtps_pd(zmm2_1)
            _mm_cvtps_pd(zmm3)
            float var_120_1[0x2] = zmm2_1
            float var_128_1[0x2] = _mm_cvtps_pd(zmm4_1)
            int64_t var_e8
            sub_140a2e390(&var_e8, 
                float : %32s - MinIn %10.5f, MaxIn %10.5f, MinOut %10.5f, MaxOut %10.5f, Mode %10s, "
            "Constant %10.5f\n", r8_2)
            int64_t rbx_3 = sx.q(arg2[1].d)
            int32_t rax_10 = (rbx_3 + 1).d
            arg2[1].d = rax_10
            
            if (rax_10 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rcx_9 = (rbx_3 << 4) + *arg2
            *rcx_9 = 0
            *rcx_9 = var_e8
            var_e8 = 0
            int32_t var_e0
            rcx_9[1].d = var_e0
            int32_t var_dc
            *(rcx_9 + 0xc) = var_dc
            int64_t rcx_10 = var_e8
            var_e0.q = 0
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int64_t rcx_11 = var_50
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        else if (rbx_1 != 0)
            int64_t var_f8 = 0
            int32_t var_f0_1 = 0
            int64_t var_40
            int64_t* rax_14 = sub_140b63b70(rbx_1 + 0x50, &var_40)
            int16_t* const r8_3
            
            if (rax_14[1].d == 0)
                r8_3 = &data_142d40450
            else
                r8_3 = *rax_14
            
            int64_t var_c0
            sub_140a2e390(&var_c0, u"VECTOR: %32s - ", r8_3)
            int64_t rcx_14 = var_f8
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = var_40
            var_f8 = var_c0
            int32_t var_b8
            var_f0_1 = var_b8
            var_b8.q = 0
            var_c0 = 0
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            float zmm2_2[0x2] = *(rbx_1 + 0x58)
            float zmm0_2[0x2] = *(rbx_1 + 0x60)
            _mm_cvtps_pd(*(rbx_1 + 0x5c))
            zmm2_2 = _mm_cvtps_pd(zmm2_2)
            float var_128_2[0x2] = _mm_cvtps_pd(zmm0_2)
            int64_t var_b0
            sub_140a2e390(&var_b0, u"MinIn %10.5f,%10.5f,%10.5f, ", zmm2_2)
            int32_t var_a8
            int32_t r8_6
            
            if (var_a8 == 0)
                r8_6 = 0
            else
                r8_6 = var_a8 - 1
            
            sub_140a20ba0(&var_f8, var_b0, r8_6)
            int64_t rcx_18 = var_b0
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            zmm2_2 = *(rbx_1 + 0x64)
            float zmm0_3[0x2] = *(rbx_1 + 0x6c)
            _mm_cvtps_pd(*(rbx_1 + 0x68))
            zmm2_2 = _mm_cvtps_pd(zmm2_2)
            float var_128_3[0x2] = _mm_cvtps_pd(zmm0_3)
            int64_t var_a0
            sub_140a2e390(&var_a0, u"MaxIn %10.5f,%10.5f,%10.5f, ", zmm2_2)
            int32_t var_98
            int32_t r8_9
            
            if (var_98 == 0)
                r8_9 = 0
            else
                r8_9 = var_98 - 1
            
            sub_140a20ba0(&var_f8, var_a0, r8_9)
            int64_t rcx_21 = var_a0
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            zmm2_2 = *(rbx_1 + 0x70)
            float zmm0_4[0x2] = *(rbx_1 + 0x78)
            _mm_cvtps_pd(*(rbx_1 + 0x74))
            zmm2_2 = _mm_cvtps_pd(zmm2_2)
            float var_128_4[0x2] = _mm_cvtps_pd(zmm0_4)
            int64_t var_90
            sub_140a2e390(&var_90, u"MinOut %10.5f,%10.5f,%10.5f, ", zmm2_2)
            int32_t var_88
            int32_t r8_12
            
            if (var_88 == 0)
                r8_12 = 0
            else
                r8_12 = var_88 - 1
            
            sub_140a20ba0(&var_f8, var_90, r8_12)
            int64_t rcx_24 = var_90
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            zmm2_2 = *(rbx_1 + 0x7c)
            float zmm0_5[0x2] = *(rbx_1 + 0x84)
            _mm_cvtps_pd(*(rbx_1 + 0x80))
            zmm2_2 = _mm_cvtps_pd(zmm2_2)
            float var_128_5[0x2] = _mm_cvtps_pd(zmm0_5)
            int64_t var_80
            sub_140a2e390(&var_80, u"MaxOut %10.5f,%10.5f,%10.5f, ", zmm2_2)
            int32_t var_78
            int32_t r8_15
            
            if (var_78 == 0)
                r8_15 = 0
            else
                r8_15 = var_78 - 1
            
            sub_140a20ba0(&var_f8, var_80, r8_15)
            int64_t rcx_27 = var_80
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
            
            char rax_18 = *(rbx_1 + 0x8a)
            wchar16 const* const rcx_28
            
            if (rax_18 == 0)
                rcx_28 = u"Normal"
            else if (rax_18 != 1)
                rcx_28 = u"????"
                
                if (rax_18 == 2)
                    rcx_28 = u"Direct"
            else
                rcx_28 = u"Absolute"
            
            *(rbx_1 + 0x89)
            char rax_20 = *(rbx_1 + 0x88)
            wchar16 const* const r8_16
            
            if (rax_20 == 0)
                r8_16 = u"Normal"
            else if (rax_20 != 1)
                r8_16 = u"????"
                
                if (rax_20 == 2)
                    r8_16 = u"Direct"
            else
                r8_16 = u"Absolute"
            
            wchar16 const* const var_128_6 = rcx_28
            int64_t var_70
            sub_140a2e390(&var_70, u"Mode %10s,%10s,%10s, ", r8_16)
            int32_t var_68
            int32_t r8_18
            
            if (var_68 == 0)
                r8_18 = 0
            else
                r8_18 = var_68 - 1
            
            sub_140a20ba0(&var_f8, var_70, r8_18)
            int64_t rcx_31 = var_70
            
            if (rcx_31 != 0)
                sub_140a74f90(rcx_31)
            
            zmm2_2 = *(rbx_1 + 0x38)
            float zmm0_6[0x2] = *(rbx_1 + 0x40)
            _mm_cvtps_pd(*(rbx_1 + 0x3c))
            zmm2_2 = _mm_cvtps_pd(zmm2_2)
            float var_128_7[0x2] = _mm_cvtps_pd(zmm0_6)
            int64_t var_60
            sub_140a2e390(&var_60, u"Constant %10.5f,%10.5f,%10.5f\n", zmm2_2)
            int32_t var_58
            int32_t r8_21
            
            if (var_58 == 0)
                r8_21 = 0
            else
                r8_21 = var_58 - 1
            
            sub_140a20ba0(&var_f8, var_60, r8_21)
            int64_t rcx_34 = var_60
            
            if (rcx_34 != 0)
                sub_140a74f90(rcx_34)
            
            int64_t rbx_4 = sx.q(arg2[1].d)
            int32_t rax_21 = (rbx_4 + 1).d
            arg2[1].d = rax_21
            
            if (rax_21 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            int64_t* rbx_6 = (rbx_4 << 4) + *arg2
            *rbx_6 = 0
            int64_t rsi_1 = var_f8
            int32_t var_b4
            rbx_6[1].d = var_b4
            
            if (var_b4 != 0)
                sub_1405a4c70(rbx_6, var_b4, 0)
                memcpy(*rbx_6, rsi_1, var_b4 * 2)
            else
                *(rbx_6 + 0xc) = 0
            
            int64_t rcx_38 = var_f8
            
            if (rcx_38 != 0)
                sub_140a74f90(rcx_38)
    
    i_1 = *(i + 0x20)
    result = sub_140be1ff0(&var_d8)

return result
