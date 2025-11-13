// 函数: sub_14125d370
// 地址: 0x14125d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
void* rax_2 = arg1[1]
void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
uint128_t zmm7 = zx.o(*(rax_2 + 0x15a0))
uint128_t zmm8 = zx.o(*(rax_2 + 0x159c))
uint128_t zmm9 = zx.o(*(rax_2 + 0x1598))
void* rax_3 = &rdx_2[5]
uint128_t zmm6 = _mm_cvtepi32_ps(zx.o(*(rax_2 + 0x15a4)))
zmm7 = _mm_cvtepi32_ps(zmm7)
zmm8 = _mm_cvtepi32_ps(zmm8)
zmm9 = _mm_cvtepi32_ps(zmm9)

if (rax_3 u> *(arg2 + 0x38))
    zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
    rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rdx_2[5]

*(arg2 + 0x30) = rax_3
void** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rdx_2
*(arg2 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_142d54998
rdx_2[2].d = zmm9.d
*(rdx_2 + 0x14) = zmm8.d
*(rdx_2 + 0x1c) = zmm7.d
rdx_2[4].d = zmm6.d
rdx_2[3].d = 0
*(rdx_2 + 0x24) = 0x3f800000
int128_t var_3b8
__builtin_memset(&var_3b8, 0, 0x30)
int64_t var_35c
__builtin_memset(&var_35c, 0, 0x43)
uint128_t var_370 = zx.o(0)
int16_t var_318 = 0
sub_140fdc870(arg2, &var_3b8)
int64_t var_388 = data_1439b6740
int64_t var_380 = data_14395da18
int64_t var_378 = data_14395d9e8
void* rcx_2 = *(arg1[2] + 8)
int32_t** r14 = *(rcx_2 + 0x1010)
void* result = &r14[sx.q(*(rcx_2 + 0x1018))]
void* result_1 = result

if (r14 != result)
    zmm8 = 0x3f000000
    
    do
        int32_t* rdi_1 = *r14
        void* rcx_4 = arg1[1] + 0xbf0
        uint128_t zmm4_1 = rdi_1[3]
        zmm6 = rdi_1[4]
        uint128_t zmm0
        zmm0.d = zmm4_1.d f- *rdi_1
        zmm7 = rdi_1[5]
        uint128_t zmm1
        zmm1.d = zmm6.d f- rdi_1[1]
        zmm4_1.d = zmm4_1.d f+ *rdi_1
        zmm6.d = zmm6.d f+ rdi_1[1]
        zmm0.d = zmm0.d f* zmm8.d
        zmm1.d = zmm1.d f* zmm8.d
        int32_t var_458 = zmm0.d
        zmm0.d = zmm7.d f- rdi_1[2]
        zmm7.d = zmm7.d f+ rdi_1[2]
        zmm4_1.d = zmm4_1.d f* zmm8.d
        zmm6.d = zmm6.d f* zmm8.d
        zmm0.d = zmm0.d f* zmm8.d
        zmm7.d = zmm7.d f* zmm8.d
        int32_t var_450_1 = zmm0.d
        int32_t var_454_1 = zmm1.d
        int32_t var_44c = zmm4_1.d
        int32_t var_448_1 = zmm6.d
        int32_t var_444_1 = zmm7.d
        result, zmm8 = sub_141f8d780(rcx_4, &var_44c, &var_458)
        
        if (result.b != 0)
            void* var_400
            sub_1419a2ec0(*(arg1[1] + 0x5150), &var_400, &data_143e87870, 0)
            void* r12_1 = var_400
            int128_t var_468
            sub_1419a2ec0(*(arg1[1] + 0x5150), &var_468, &data_143e90250, 0)
            var_3b8.q = data_1439c9210
            int64_t rax_12 = 0
            int128_t var_3c8 = var_468
            void* var_3f8
            
            if (r12_1 != 0)
                int64_t rdx_9 = sx.q(*(r12_1 + 0x10c))
                int64_t* rbx_2 = *(var_3f8 + 0x10)
                int64_t rax_13 = rbx_2[3]
                
                if (*(rax_13 + (rdx_9 << 3)) == 0)
                    sub_1419ccf30(rbx_2, rdx_9.d)
                    rax_13 = rbx_2[3]
                
                rax_12 = *(rax_13 + (rdx_9 << 3))
            
            var_3b8:8.q = rax_12
            int64_t rcx_10 = 0
            void* rax_14 = var_468.q
            
            if (rax_14 != 0)
                int64_t rdx_10 = sx.q(*(rax_14 + 0x10c))
                int64_t* rbx_3 = *(var_468:8.q + 0x10)
                int64_t rax_16 = rbx_3[3]
                
                if (*(rax_16 + (rdx_10 << 3)) == 0)
                    sub_1419ccf30(rbx_3, rdx_10.d)
                    rax_16 = rbx_3[3]
                
                rcx_10 = *(rax_16 + (rdx_10 << 3))
            
            int128_t var_398_1
            var_398_1.q = rcx_10
            int32_t var_360_1 = 0
            sub_1419870b0(arg2, &var_3b8, 2)
            void* rbx_4 = arg1[1]
            sub_141080be0(r12_1, arg2, *(arg2 + 0x188), *(rbx_4 + 0x10))
            int32_t zmm1_1 = *(rbx_4 + 0x604)
            int64_t rax_17 = *(arg2 + 0x188)
            int32_t var_438 = *(rbx_4 + 0x600)
            int32_t var_430_1 = *(rbx_4 + 0x608)
            int32_t var_434_1 = zmm1_1
            int32_t var_42c_1 = 0
            int64_t var_420 = rax_17
            sub_1405d0e10(arg2, &var_420, r12_1 + 0x118, &var_438, 0)
            int64_t var_418 = *(arg2 + 0x188)
            int128_t var_3d8 = zx.o(0)
            sub_1405d0e10(arg2, &var_418, r12_1 + 0x11e, &var_3d8, 0)
            int64_t* rcx_16 = arg1[1]
            int512_t zmm1_2
            zmm1_2.o = data_142d3f660
            int128_t var_1d8
            __builtin_memcpy(&var_1d8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
            "00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
                    3f", 
                0x40)
            int128_t var_c8
            __builtin_memcpy(&var_c8, 
                "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x"
            "00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f", 
                0x20)
            int128_t var_98_1 = zx.o(0)
            zmm8 = sub_1412998b0(rcx_16, rdi_1, &var_1d8)
            int128_t* rax_19 = *arg1
            int128_t var_308 = *rax_19
            int128_t var_2f8_1 = rax_19[1]
            int128_t var_2e8_1 = rax_19[2]
            int128_t var_2d8_1 = rax_19[3]
            int128_t var_2c8_1 = rax_19[4]
            int128_t var_2b8_1 = rax_19[5]
            int128_t var_2a8_1 = rax_19[6]
            int128_t var_298_1 = rax_19[7]
            int128_t var_288_1 = rax_19[8]
            void* rcx_17 = rax_19[9].q
            void* var_278 = rcx_17
            
            if (rcx_17 != 0)
                *(rcx_17 + 8) += 1
            
            int64_t* rcx_18 = *(rax_19 + 0x98)
            int64_t* var_270 = rcx_18
            
            if (rcx_18 != 0)
                rcx_18[1].d += 1
            
            int64_t* rcx_19 = data_143f0f180
            int128_t var_268_1 = rax_19[0xa]
            int128_t var_258_1 = rax_19[0xb]
            int128_t var_248_1 = rax_19[0xc]
            int128_t var_238_1 = rax_19[0xd]
            int128_t var_228_1 = rax_19[0xe]
            int128_t var_218_1 = rax_19[0xf]
            int128_t var_208_1 = rax_19[0x10]
            int128_t var_1f8_1 = rax_19[0x11]
            int128_t var_1e8_1 = rax_19[0x12]
            int32_t var_4c8
            int32_t var_4c0
            int32_t var_4b8
            int64_t var_4b0
            int64_t var_4a8
            void** var_4a0
            int32_t var_498
            int32_t var_490
            int64_t* var_480
            (*(*rcx_19 + 0xf8))(rcx_19, &var_480, &var_1d8, &data_143e901e0, 0, 1, var_4c8, 
                var_4c0, var_4b8, var_4b0, var_4a8, var_4a0, var_498, var_490)
            int64_t* rbx_5 = var_480
            int64_t* var_488 = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
                rbx_5 = var_488
            
            sub_1405d1550(&var_480)
            int64_t* rdi_2 = var_270
            var_270 = rbx_5
            var_488 = nullptr
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    char rax_22
                    
                    if (rdi_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_22 = sub_1405949a0()
                    
                    if (rdi_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_22 != 0))
                        (**rdi_2)(rdi_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rdi_2 + 0xc))
                            *(rdi_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rdi_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_24 = sub_140a20af0()
                            uint64_t rdx_17 = zx.q(rax_24)
                            void* const rax_25
                            
                            if (rax_24 != 0)
                                rax_25 = *(&data_143cf0bf8 + (rdx_17 u>> 0xe << 3))
                                    + (zx.q(rdx_17.d) & 0x3fff) * 0x18
                            else
                                rax_25 = nullptr
                            
                            *(rax_25 + 8) = rdi_2
                            sub_1405a42f0(&data_143f02390, rdx_17.d)
            
            sub_1405d1550(&var_488)
            void* rax_30 = var_468.q
            int64_t r8_7 = 0
            
            if (rax_30 != 0)
                int64_t rdx_18 = sx.q(*(rax_30 + 0x10c))
                int64_t* rbx_6 = *(var_468:8.q + 0x10)
                int64_t rax_32 = rbx_6[3]
                
                if (*(rax_32 + (rdx_18 << 3)) == 0)
                    sub_1419ccf30(rbx_6, rdx_18.d)
                    rax_32 = rbx_6[3]
                
                r8_7 = *(rax_32 + (rdx_18 << 3))
            
            int512_t zmm2_1
            int512_t zmm3_1
            zmm2_1, zmm3_1 = sub_141258670(arg2, &var_3c8, r8_7, &var_308)
            sub_1405d1550(&var_270)
            sub_1405d1550(&var_278)
            void* var_3e8_1 = var_3f8
            void* var_3f0 = r12_1
            int64_t* rax_34 = sub_14139bef0(arg2)
            void* r9_5 = arg1[1]
            var_490 = 1
            var_498 = 1
            int32_t rcx_32 = *(r9_5 + 0x15a4) - *(r9_5 + 0x159c)
            int32_t r8_8 = *(r9_5 + 0x1598)
            uint128_t zmm0_5 = zx.o(*(r9_5 + 0x159c))
            int32_t rdx_21 = *(r9_5 + 0x15a0) - r8_8
            zmm2_1.o = zx.o(rcx_32)
            int32_t var_474_1 = rcx_32
            var_4a0 = &var_3f0
            var_4a8 = *(rax_34 + 0x37c)
            zmm2_1.o = _mm_cvtepi32_ps(zmm2_1.o)
            var_4b0 = rdx_21.q
            zmm3_1.o = zx.o(rdx_21)
            var_4b8 = zmm2_1.d
            zmm3_1.o = _mm_cvtepi32_ps(zmm3_1.o)
            var_4c0 = zmm3_1.d
            uint128_t zmm1_4 = _mm_cvtepi32_ps(zx.o(r8_8))
            var_4c8 = _mm_cvtepi32_ps(zmm0_5).d
            int32_t var_4d8_4 = zmm2_1.d
            zmm2_1.o = zx.o(0)
            result = sub_1413993b0(arg2, zx.o(0), zmm2_1, r9_5, zmm3_1, var_4d8_4, zmm1_4.d, 
                var_4c8, var_4c0, var_4b8, var_4b0, var_4a8, var_4a0, var_498, var_490)
        
        r14 = &r14[1]
    while (r14 != result_1)

__security_check_cookie(rax_1 ^ &var_4f8)
return result
