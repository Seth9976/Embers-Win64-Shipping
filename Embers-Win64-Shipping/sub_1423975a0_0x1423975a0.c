// 函数: sub_1423975a0
// 地址: 0x1423975a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t result = __security_cookie ^ &var_168
int64_t result_2 = result

if (*(arg1 + 0x54) == 0)
    void* rax_1 = *arg2
    int64_t* rsi_1 = arg2[1]
    int64_t result_1 = 0
    
    if (rax_1 != 0)
        int64_t var_140 = *(rax_1 + 0x18)
        int64_t result_3
        sub_140b63b70(&var_140, &result_3)
        result_1 = result_3
    
    if (rsi_1 == 0)
        *(arg1 + 0x54) = 1
    else
        int32_t r12_1 = 8
        uint128_t var_80_1 = *arg2
        uint64_t var_138_1 = arg2[2]
        void*** rax_4 = sub_140a82f30(0x28, 8)
        *rax_4 = &data_142ec17e8
        uint128_t zmm2 = zx.o(var_138_1)
        *(rax_4 + 8) = arg1.o
        double temp0_1[0x2] = _mm_unpacklo_pd(var_80_1, zmm2.q)
        *(rax_4 + 0x18) = temp0_1
        int64_t (* var_118)(int64_t* arg1, char* arg2, int64_t* arg3)
        int64_t (* rdx_1)(int64_t* arg1, char* arg2, int64_t* arg3) = var_118
        
        if (rax_4 != -8)
            rdx_1 = sub_142385a50
        
        var_118 = rdx_1
        var_80_1 = temp0_1
        int128_t var_f8
        int128_t entry_zmm3
        
        if (arg1 + 0x3d0 != &var_118)
            int128_t zmm5_1 = *(arg1 + 0x3d0)
            int128_t zmm4_1 = *(arg1 + 0x3e0)
            entry_zmm3 = *(arg1 + 0x3f0)
            zmm2 = *(arg1 + 0x400)
            *(arg1 + 0x3d0) = var_118.o
            int128_t zmm0_1 = var_f8
            *(arg1 + 0x3e0) = rax_4.o
            *(arg1 + 0x3f0) = zmm0_1
            var_118.o = zmm5_1
            rdx_1 = var_118
            void*** var_108_1
            var_108_1.o = zmm4_1
            rax_4 = var_108_1
            double var_e8[0x2]
            *(arg1 + 0x400) = var_e8
            void* var_88_1
            var_88_1.o = zmm5_1
            var_80_1 = zmm4_1
            int128_t var_68_1 = entry_zmm3
            uint128_t var_58_1 = zmm2
            var_f8 = entry_zmm3
            uint128_t var_e8_1 = zmm2
        
        if (rdx_1 != 0)
            void*** rcx_3 = &var_f8
            
            if (rax_4 != 0)
                rcx_3 = rax_4
            
            (*rcx_3)[2](rcx_3, rdx_1, zmm2, entry_zmm3, result_1)
        
        int64_t rsi_2 = sx.q(*(arg1 + 8))
        void* rdx_2 = nullptr
        int32_t rbx_1 = 0
        void* var_98_1 = nullptr
        int32_t var_90_1 = 0
        int32_t var_8c_1 = 8
        void var_d8
        
        if (rsi_2.d s< *(arg1 + 0x100))
            int64_t r15_1 = rsi_2 << 3
            
            while (true)
                int64_t r14_2 = *(r15_1 + *rsi_1) + 0x3e8
                
                if (rbx_1 + 1 s> r12_1)
                    sub_140809370(&var_d8, rbx_1)
                    rdx_2 = var_98_1
                
                void* rcx_5 = &var_d8
                
                if (rdx_2 != 0)
                    rcx_5 = rdx_2
                
                rsi_2 = zx.q(rsi_2.d + 1)
                r15_1 += 8
                *(rcx_5 + (sx.q(rbx_1) << 3)) = r14_2
                
                if (rsi_2.d s>= *(arg1 + 0x100))
                    break
                
                r12_1 = var_8c_1
                rbx_1 += 1
                rdx_2 = var_98_1
        
        *(arg1 + 0x50) += 1
        int32_t r13_1
        r13_1.b = *(arg1 + 0x410) != 0
        *(arg1 + 0x3c8) = sub_140bc4c20(&var_d8, r13_1 + 1, arg1 + 0x3d0)
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
    
    result = result_1
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(result_2 ^ &var_168)
return result
