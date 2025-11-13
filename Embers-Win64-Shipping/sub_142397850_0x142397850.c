// 函数: sub_142397850
// 地址: 0x142397850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
void*** result = __security_cookie ^ &var_138
void*** result_1 = result

if (*(arg1 + 0x54) == 0)
    result = *(arg2 + 8)
    
    if (result == 0)
        *(arg1 + 0x54) = 1
    else
        int32_t r12_1 = 8
        uint128_t var_70_1 = *arg2
        uint64_t var_118_1 = arg2[1].q
        void*** rax_1 = sub_140a82f30(0x28, 8)
        *rax_1 = &data_142ec17e8
        uint128_t zmm2 = zx.o(var_118_1)
        *(rax_1 + 8) = arg1.o
        uint128_t zmm1 = _mm_unpacklo_pd(var_70_1, zmm2.q)
        *(rax_1 + 0x18) = zmm1
        int64_t (* var_108)(int64_t* arg1, char* arg2, int64_t* arg3)
        int64_t (* rdx)(int64_t* arg1, char* arg2, int64_t* arg3) = var_108
        
        if (rax_1 != -8)
            rdx = sub_142385a50
        
        var_108 = rdx
        var_70_1 = zmm1
        int128_t var_e8
        int128_t entry_zmm3
        
        if (arg1 + 0x390 != &var_108)
            int128_t zmm5_1 = *(arg1 + 0x390)
            int128_t zmm4_1 = *(arg1 + 0x3a0)
            entry_zmm3 = *(arg1 + 0x3b0)
            zmm2 = *(arg1 + 0x3c0)
            *(arg1 + 0x390) = var_108.o
            int128_t zmm0_1 = var_e8
            *(arg1 + 0x3a0) = rax_1.o
            *(arg1 + 0x3b0) = zmm0_1
            var_108.o = zmm5_1
            rdx = var_108
            void*** var_f8_1
            var_f8_1.o = zmm4_1
            rax_1 = var_f8_1
            uint128_t var_d8
            *(arg1 + 0x3c0) = var_d8
            void* var_78_1
            var_78_1.o = zmm5_1
            var_70_1 = zmm4_1
            int128_t var_58_1 = entry_zmm3
            uint128_t var_48_1 = zmm2
            var_e8 = entry_zmm3
            uint128_t var_d8_1 = zmm2
        
        if (rdx != 0)
            void*** rcx_2 = &var_e8
            
            if (rax_1 != 0)
                rcx_2 = rax_1
            
            (*rcx_2)[2](rcx_2, rdx, zmm2, entry_zmm3, var_118_1, result)
        
        int64_t rdi_1 = sx.q(*(arg1 + 8))
        void* rdx_1 = nullptr
        int32_t rbx_1 = 0
        void* var_88_1 = nullptr
        int32_t var_80_1 = 0
        int32_t var_7c_1 = 8
        void var_c8
        
        if (rdi_1.d s< *(arg1 + 0x100))
            int64_t r15_1 = rdi_1 << 3
            
            while (true)
                int64_t r14_2 = *(*result + r15_1) + 0x50
                
                if (rbx_1 + 1 s> r12_1)
                    sub_140809370(&var_c8, rbx_1)
                    rdx_1 = var_88_1
                
                void* rcx_4 = &var_c8
                
                if (rdx_1 != 0)
                    rcx_4 = rdx_1
                
                rdi_1 = zx.q(rdi_1.d + 1)
                r15_1 += 8
                *(rcx_4 + (sx.q(rbx_1) << 3)) = r14_2
                
                if (rdi_1.d s>= *(arg1 + 0x100))
                    break
                
                r12_1 = var_7c_1
                rbx_1 += 1
                rdx_1 = var_88_1
        
        *(arg1 + 0x50) += 1
        int32_t r13_1
        r13_1.b = *(arg1 + 0x3d0) != 0
        result = sub_140bc4c20(&var_c8, r13_1 + 1, arg1 + 0x390)
        *(arg1 + 0x388) = result
        
        if (var_88_1 != 0)
            result = sub_140a74f90(var_88_1)

__security_check_cookie(result_1 ^ &var_138)
return result
