// 函数: sub_1410f5860
// 地址: 0x1410f5860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_368
int64_t rax_1 = __security_cookie ^ &var_368
arg2[8]
void* result = sub_14139bee0()
void* r15 = *arg2
int64_t* r12 = &data_143ec4c60
int64_t* var_2e8 = &data_143ec4c60
void* r13 = data_143ec4c98
void* rbx = *(r15 + 8)

if (rbx != 0)
    void* rax_2
    int128_t zmm6_1
    rax_2, zmm6_1 = sub_1410e7c80(r15 + 0x1510)
    result = sub_1412278d0(rbx, arg2[0xb].d, 0)
    
    if (result != 0)
        int128_t var_38_1 = zmm6_1
        zmm6_1 = zx.o(0)
        
        if (not(0f f== *(rax_2 + 4)))
            int64_t rcx_3 = *(r13 + 8)
            int128_t zmm1_1 = data_142d3f5a0
            int64_t var_168 = rcx_3
            int32_t var_90_1 = 0
            int32_t var_8c
            __builtin_memset(&var_8c, 0xff, 0x14)
            int128_t var_78_1 = zmm1_1
            int64_t var_68
            __builtin_memset(&var_68, 0, 0x19)
            int64_t var_160_1 = 0
            int32_t var_158_1 = 0xffffffff
            int16_t var_154_1 = 0x900
            int64_t var_a8
            __builtin_memset(&var_a8, 0, 0x11)
            int32_t var_94_1 = 0
            bool var_4f_1 = *(rcx_3 + 0x38) u> 1
            void var_150
            memset(&var_150, 0, 0xa8)
            void* r13_1 = arg2[8]
            int64_t rbx_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
            int64_t rax_3 = rbx_3 + 0x36
            
            if (rax_3 u> *(r13_1 + 0x38))
                zmm6_1 = sub_140b0e3d0(r13_1 + 0x30, 0x38)
                rbx_3 = (*(r13_1 + 0x30) + 1) & 0xfffffffffffffffe
                rax_3 = rbx_3 + 0x36
            
            wchar16 const* const rcx_6 = u"DoDirectionalOcclusionPass"
            *(r13_1 + 0x30) = rax_3
            wchar16 const i
            
            do
                i = *rcx_6
                *(rcx_6 + rbx_3 - u"DoDirectionalOcclusionPass") = i
                rcx_6 = &rcx_6[1]
            while (i != 0)
            void*** rcx_9 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
            void* rax_4 = &rcx_9[0x27]
            
            if (rax_4 u> *(r13_1 + 0x38))
                zmm6_1 = sub_140b0e3d0(r13_1 + 0x30, 0x140)
                rcx_9 = (*(r13_1 + 0x30) + 7) & 0xfffffffffffffff8
                rax_4 = &rcx_9[0x27]
            
            *(r13_1 + 0x30) = rax_4
            void**** rax_5 = *(r13_1 + 8)
            *(r13_1 + 0x14) += 1
            *rax_5 = rcx_9
            *(r13_1 + 8) = &rcx_9[1]
            sub_1405d11b0(rcx_9, &var_168, rbx_3)
            *(r13_1 + 0x1c4) = 1
            sub_1405d19b0(r13_1, &var_168)
            int64_t var_58
            *(r13_1 + 0x178) = var_58:7.b
            *(r13_1 + 0x179) = 0
            *(r13_1 + 0x1c4) = 1
            int128_t var_238 = *(r15 + 0x1598)
            sub_1410b7780(arg2, &var_238, zmm6_1, 0x3f800000)
            void* rcx_15 = arg2[8]
            int64_t var_1bc
            __builtin_memset(&var_1bc, 0, 0x43)
            int128_t var_218
            __builtin_memset(&var_218, 0, 0x30)
            int128_t var_1d0_1 = zx.o(0)
            int16_t var_178_1 = 0
            sub_140fdc870(rcx_15, &var_218)
            int64_t var_1e8_1 = data_14395da00
            int64_t var_1e0_1 = data_14395da18
            int64_t var_1d8_1 = data_14395d9e8
            void* var_2b8
            sub_1419a2ec0(*(r15 + 0x5150), &var_2b8, &data_143ed5e80, 0)
            void* var_2d8
            sub_1419a2ec0(*(r15 + 0x5150), &var_2d8, &data_143e51140, 0)
            void* rcx_18 = var_2b8
            var_218.q = data_1439c9210
            int64_t rax_12 = 0
            
            if (rcx_18 != 0)
                int64_t rdx_9 = sx.q(*(rcx_18 + 0x10c))
                void* var_2b0
                int64_t* rbx_6 = *(var_2b0 + 0x10)
                int64_t rax_14 = rbx_6[3]
                
                if (*(rax_14 + (rdx_9 << 3)) == 0)
                    sub_1419ccf30(rbx_6, rdx_9.d)
                    rax_14 = rbx_6[3]
                
                rax_12 = *(rax_14 + (rdx_9 << 3))
            
            void* rdi_3 = var_2d8
            var_218:8.q = rax_12
            int64_t rax_15 = 0
            
            if (rdi_3 != 0)
                int64_t rdx_10 = sx.q(*(rdi_3 + 0x10c))
                void* var_2d0
                int64_t* rbx_7 = *(var_2d0 + 0x10)
                int64_t rax_17 = rbx_7[3]
                
                if (*(rax_17 + (rdx_10 << 3)) == 0)
                    sub_1419ccf30(rbx_7, rdx_10.d)
                    rax_17 = rbx_7[3]
                
                rax_15 = *(rax_17 + (rdx_10 << 3))
                r12 = var_2e8
            
            int128_t var_1f8
            var_1f8.q = rax_15
            int32_t var_1c0_1 = 0
            sub_1419870b0(arg2[8], &var_218, 2)
            int64_t* rcx_22 = data_143f0f180
            int32_t zmm1_2 = *(result + 0xe0)
            uint128_t var_29c_1 = *(result + 0xbc)
            int32_t var_2a8 = *(result + 0xb0)
            int32_t var_2a4_1 = *(result + 0xb4)
            uint128_t var_28c_1 = *(result + 0xcc)
            int32_t var_2a0_1 = *(result + 0xb8)
            int32_t var_27c_1 = (*(result + 0xdc)).d
            uint64_t var_268_1 = *(result + 0xf0)
            uint64_t var_258_1 = *(result + 0x100)
            int32_t var_278_1 = zmm1_2
            int32_t var_260_1 = *(result + 0xf8)
            int32_t var_24c_1 = (*(result + 0x10c)).d
            int32_t var_248_1 = *(result + 0x110)
            int32_t var_250_1 = *(result + 0x108)
            (*(*rcx_22 + 0xf8))(rcx_22, &var_2e8, &var_2a8, &data_143e510c0, 0, 1)
            int64_t* rbx_8 = var_2e8
            int64_t* var_2e0 = rbx_8
            
            if (rbx_8 != 0)
                rbx_8[1].d += 1
                rbx_8 = var_2e0
                rdi_3 = var_2d8
            
            sub_1405d1550(&var_2e8)
            int64_t* var_2c0 = rbx_8
            var_2e0 = nullptr
            sub_1405d1550(&var_2e0)
            int64_t* var_2c8 = rbx_8
            
            if (rbx_8 != 0)
                rbx_8[1].d += 1
                rdi_3 = var_2d8
            
            void* r9_2
            uint128_t zmm6_2
            uint128_t zmm8_1
            r9_2, zmm6_2, zmm8_1 = sub_141107690(rdi_3, *(*(result + 0x150) + 0x10), &var_2c8, arg2)
            int32_t rcx_27 = *(r15 + 0x15a4) - *(r15 + 0x159c)
            int32_t r8_4 = *(r15 + 0x1598)
            int32_t rax_24 = (*(r12 + 0x37c)).d
            int32_t var_2f8_1 = 0
            int32_t rdx_16 = *(r15 + 0x15a0) - r8_4
            var_2e8:4.d = rcx_27
            char rcx_28 = *(arg2 + 0x69)
            int32_t rcx_29 = *(r15 + 0xad0)
            uint128_t var_228
            uint128_t* var_310_1 = &var_228
            void* rcx_30 = arg2[8]
            var_228 = var_2b8.o
            uint128_t zmm0_3 = zx.o(*(r15 + 0x159c))
            uint128_t zmm4_1 = _mm_cvtepi32_ps(zx.o(rcx_27))
            var_2e8.d = rdx_16
            int32_t rax_25 = var_2e8.d
            float var_328_1 = zmm4_1.d
            float temp0_2[0x4] = _mm_cvtepi32_ps(zx.o(rdx_16))
            sub_141399210(rcx_30, zmm6_2, zmm6_2, r9_2, temp0_2, zmm8_1, zmm4_1.d, 
                _mm_cvtepi32_ps(zx.o(r8_4)).d, _mm_cvtepi32_ps(zmm0_3).d, temp0_2[0], var_328_1, 
                rax_25, rax_24, var_310_1, rcx_29, rcx_28, var_2f8_1)
            sub_1405d1550(&var_2c0)
            sub_141096650(arg2[8])
            int64_t var_60
            result = sub_1405d1550(&var_60)

__security_check_cookie(rax_1 ^ &var_368)
return result
