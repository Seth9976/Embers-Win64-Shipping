// 函数: sub_1426dab20
// 地址: 0x1426dab20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int512_t zmm0

if ((*(arg1 + 0x1c8) & 1) == 0)
    zmm0.o = zx.o(0)
else
    int32_t* var_48 = nullptr
    int32_t var_40_1 = 0
    float zmm6_1[0x4]
    
    if (*(arg1 + 0x178) != 0)
        void* rdx_3
        
        if (*(arg1 + 0x170) == 0)
            rdx_3 = nullptr
        else
            void* rax_6 = sub_142736ba0()
            
            if (rax_6 == 0)
                rdx_3 = nullptr
            else
                rdx_3 = *(arg1 + 0x170)
                int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                
                if (rax_7.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_7 << 3)) != rax_6 + 0x30)
                    rdx_3 = nullptr
        
        result, zmm6_1 = sub_1426e7540(arg2, rdx_3, &var_48)
        int32_t* rcx_6 = var_48
        
        if (var_40_1 s> 0)
            rcx_6[1]
        
        if (rcx_6 != 0)
            result = sub_140a74f90(rcx_6)
    else
        int128_t* var_58 = nullptr
        float var_50_1 = 0f
        void* rdx
        
        if (*(arg1 + 0x160) == 0)
            rdx = nullptr
        else
            void* rax = sub_142736ba0()
            
            if (rax == 0)
                rdx = nullptr
            else
                rdx = *(arg1 + 0x160)
                int64_t rax_1 = sx.q(*(rax + 0x38))
                
                if (rax_1.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_1 << 3)) != rax + 0x30)
                    rdx = nullptr
        
        sub_1426e7790(arg2, rdx, &var_48)
        void* rdx_1
        
        if (*(arg1 + 0x168) == 0)
            rdx_1 = nullptr
        else
            void* rax_3 = sub_142736ba0()
            
            if (rax_3 == 0)
                rdx_1 = nullptr
            else
                rdx_1 = *(arg1 + 0x168)
                int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                
                if (rax_4.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                    rdx_1 = nullptr
        
        float zmm7_1[0x4]
        int128_t zmm8_1
        result, zmm6_1, zmm7_1, zmm8_1 = sub_1426e7790(arg2, rdx_1, &var_58)
        int32_t* rbx_1 = var_48
        int128_t* rdi_1 = var_58
        
        if (var_40_1 s> 0 && var_50_1 s> 0)
            zmm6_1 = *rdi_1
            zmm6_1[0] = zmm6_1[0] f- *rbx_1
            float var_28_1[0x4] = zmm7_1
            zmm7_1 = *(rdi_1 + 4)
            zmm7_1[0] = zmm7_1[0] f- rbx_1[1]
            int128_t var_38_1 = zmm8_1
            zmm8_1.d = (*(rdi_1 + 8)).d f- rbx_1[2]
            zmm6_1[0] = zmm6_1[0] * zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] * zmm7_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm6_1[0]
            zmm7_1[0] = zmm7_1[0] + zmm8_1.d f* zmm8_1.d
            
            if (zmm7_1[0] == 1f)
                goto label_1426dacfb
            
            if (zmm7_1[0] >= 9.99999994e-09f)
                float zmm3_1 = zmm7_1[0]
                float temp0_1[0x4] = _mm_rsqrt_ss(zmm7_1[0], zmm3_1)
                float zmm2_1[0x4] = 0x3f000000
                zmm3_1 = zmm3_1 * 0.5f
                temp0_1[0] = temp0_1[0] * temp0_1[0]
                zmm2_1[0] = 0.5f - zmm3_1 * temp0_1[0]
                temp0_1[0] = temp0_1[0] * zmm2_1[0]
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                temp0_1[0] = temp0_1[0] * (0.5f - zmm3_1 * temp0_1[0] * temp0_1[0])
                temp0_1[0] = temp0_1[0] + temp0_1[0]
                zmm6_1[0] = zmm6_1[0] * temp0_1[0]
                zmm7_1[0] = zmm7_1[0] * temp0_1[0]
                zmm8_1.d = zmm8_1.d f* temp0_1[0]
            label_1426dacfb:
                var_50_1 = zmm8_1.d
                var_58:4.d = zmm7_1[0]
                var_58.d = zmm6_1[0]
            else
                var_58.d = data_143dbb1f8[0]
                var_50_1 = data_143dbb200[0]
                var_58:4.d = data_143dbb1fc
            
            result = sub_140adf3c0(&var_58, &var_48)
        
        if (rdi_1 != 0)
            result = sub_140a74f90(rdi_1)
        
        if (rbx_1 != 0)
            result = sub_140a74f90(rbx_1)
return result
