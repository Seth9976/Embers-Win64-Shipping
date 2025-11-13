// 函数: sub_142357af0
// 地址: 0x142357af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int128_t* arg_10 = arg2

if (arg4[1].d != 0)
    uint64_t rbx_1 = zx.q(*(arg3 + 0x70))
    int32_t var_1d8_1 = rbx_1.d
    uint128_t zmm6
    int128_t zmm7
    uint128_t zmm8
    int128_t zmm9
    int128_t zmm10
    
    if (*(arg3 + 0xb8) == 0)
        zmm10 = 0x3f800000
    else
        int32_t zmm0_1
        zmm0_1, result, arg2, zmm6, zmm7, zmm8, zmm9 = sub_142364930(arg1)
        zmm10.d = 1f f/ zmm0_1
    
    if (not(zmm10.d f== *(arg1 + 0x4fc)))
        sub_140e1a0f0(arg1)
        arg2.b = 1
        result = sub_140e19ef0(arg1, arg2.b)
        *(arg1 + 0x4fc) = zmm10.d
    
    int32_t i = 0
    
    if (arg4[1].d s> 0)
        result = arg4
        uint64_t rcx_2 = rbx_1
        int128_t* r12_1 = nullptr
        uint128_t var_48_1 = zmm6
        int64_t r13_1 = 0
        int128_t var_58_1 = zmm7
        uint128_t var_68_1 = zmm8
        int128_t var_78_1 = zmm9
        uint128_t zmm11
        uint128_t var_98_1 = zmm11
        uint128_t zmm12
        uint128_t var_a8_1 = zmm12
        uint128_t zmm13
        uint128_t var_b8_1 = zmm13
        uint128_t zmm14
        uint128_t var_c8_1 = zmm14
        uint64_t var_1d0_1 = rbx_1
        
        do
            if (rbx_1.d s< *(arg3 + 0x60))
                uint64_t rbx_3 = rcx_2 * 2
                result = arg4
                
                if (i s< *(*(arg3 + 0x58) + (rbx_3 << 3) + 8))
                    int64_t* r14_1 = *(*result + r13_1)
                    void* var_1a0
                    sub_142361500(arg1, &var_1a0, r14_1)
                    zmm13 = zx.o(0)
                    zmm14 = zx.o(0)
                    int64_t rcx_4 = *(*(arg3 + 0x58) + (rbx_3 << 3))
                    zmm11 = *(r12_1 + rcx_4)
                    zmm12 = *(r12_1 + rcx_4 + 4)
                    int32_t var_1c8
                    char var_1c0
                    
                    if (r14_1 != 0)
                        void* rdx_1 = r14_1[0xe]
                        int64_t rax_3 = *r14_1
                        int128_t var_e8
                        __builtin_memset(&var_e8, 0, 0x20)
                        void var_178
                        
                        if ((*(rax_3 + 0x2b8))(r14_1, *(rdx_1 + 0xb8), 0, &var_178, var_1d8_1, 
                                var_1d0_1, var_1c8, var_1c0) != 0)
                            int64_t* rcx_6 = *(r14_1[0xe] + 0xb8)
                            int32_t var_1a8
                            (*(*rcx_6 + 0x18))(rcx_6, &var_1a8)
                            uint128_t zmm2_1 = zx.o(var_1a8)
                            uint128_t var_d8
                            int32_t rax_7 = _mm_bsrli_si128(var_d8, 8).d
                            int32_t rdx_4 = var_d8.d
                            zmm2_1 = _mm_cvtepi32_ps(zmm2_1)
                            uint128_t temp0_3 = _mm_bsrli_si128(var_d8, 0xc)
                            int32_t var_1a4
                            uint128_t zmm1_1 = _mm_cvtepi32_ps(zx.o(var_1a4))
                            int32_t rcx_7 = _mm_bsrli_si128(var_d8, 4).d
                            zmm11 = _mm_cvtepi32_ps(zx.o(rax_7 - rdx_4))
                            zmm12.d = _mm_cvtepi32_ps(zx.o(temp0_3.d - rcx_7)).d f/ zmm1_1.d
                            zmm11.d = zmm11.d f/ zmm2_1.d
                            zmm13.d = _mm_cvtepi32_ps(zx.o(rdx_4)).d f/ zmm2_1.d
                            zmm14.d = _mm_cvtepi32_ps(zx.o(rcx_7)).d f/ zmm1_1.d
                    
                    zmm7 = *arg_10
                    zmm8 = *(arg_10 + 4)
                    zmm9.d = zmm7.d f* zmm11.d
                    zmm6.d = zmm8.d f* zmm12.d
                    zmm7.d = zmm7.d f* zmm13.d
                    zmm8.d = zmm8.d f* zmm14.d
                    zmm9.d = zmm9.d f* zmm10.d
                    zmm6.d = zmm6.d f* zmm10.d
                    zmm7.d = zmm7.d f* zmm10.d
                    zmm8.d = zmm8.d f* zmm10.d
                    void var_190
                    void var_188
                    
                    if (arg1[0x9a].b == 1
                            && not(zmm6.d f<= *(sub_140e13cf0(arg1[0x94], &var_190) + 4)))
                        zmm6.d = zmm6.d f- *(sub_140e13cf0(arg1[0x94], &var_188) + 4)
                    void* rbx_4 = var_1a0
                    int32_t var_1c8_1 = zmm9.d
                    int32_t var_1c4_1 = zmm6.d
                    char var_1c0_1 = 1
                    void* rcx_10 = *(rbx_4 + 0x20)
                    int64_t var_1b8 = 0
                    int32_t var_1b0_1 = 0
                    *(rcx_10 + 0x40) = zmm9.d
                    *(rcx_10 + 0x44) = zmm6.d
                    *(rcx_10 + 0x48) = 1
                    sub_140692f90(rcx_10 + 0x50, &var_1b8)
                    sub_140745b20(&var_1b8)
                    void* rcx_13 = *(rbx_4 + 0x20)
                    var_1c8 = zmm7.d
                    int32_t var_1c4_2 = zmm8.d
                    var_1c0 = 1
                    *(rcx_13 + 0x20) = zmm7.d
                    *(rcx_13 + 0x24) = zmm8.d
                    *(rcx_13 + 0x28) = 1
                    var_1b8 = 0
                    int32_t var_1b0_2 = 0
                    sub_140692f90(rcx_13 + 0x30, &var_1b8)
                    sub_140745b20(&var_1b8)
                    int64_t* var_198
                    
                    if (var_198 != 0)
                        var_198[1].d -= 1
                        
                        if (var_198[1].d == 1)
                            (**var_198)(var_198)
                            int32_t temp1_1 = *(var_198 + 0xc)
                            *(var_198 + 0xc) -= 1
                            
                            if (temp1_1 == 1)
                                (*(*var_198 + 8))(var_198, 1)
                    
                    rcx_2 = var_1d0_1
                    result = arg4
                
                rbx_1 = zx.q(var_1d8_1)
            
            i += 1
            r13_1 += 8
            r12_1 = &r12_1[1]
        while (i s< result[1].d)

return result
