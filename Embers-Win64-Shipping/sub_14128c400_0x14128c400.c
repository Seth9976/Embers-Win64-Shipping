// 函数: sub_14128c400
// 地址: 0x14128c400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
TEB* gsbase
uint64_t result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))

if (data_143ea9aa8 s> result.d)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143ea9aa8)
    
    if (data_143ea9aa8 == 0xffffffff)
        int64_t* rcx_22 = data_143db18d0
        
        if (rcx_22 == 0)
            sub_140a53c40()
            rcx_22 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_21 = (*(*rcx_22 + 0xb0))(rcx_22, u"r.MobileMSAA", r8_1)
        int64_t rax_22
        
        if (rax_21 == 0)
            rax_22 = 0
        else
            int64_t rdx_8 = *rax_21
            rax_22 = (*(rdx_8 + 0x58))(rax_21, rdx_8)
        
        data_143ea9aa0 = rax_22
        result = _Init_thread_footer(&data_143ea9aa8)

if (data_1439c7a69 != 0 && data_143f0f1b5 != 0 && (*(arg1 + 0x38) & 1) != 0)
    result = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg1 + 0x10))])
    
    if (result.d == 0xb || result.d == 0x1e)
    label_14128c4d1:
        int64_t rbx_1 = data_143ea9aa0
        
        if (rbx_1 != 0)
            int64_t rcx_3
            
            if (data_143de5480 == 0)
                rcx_3 = 0
            else
                result = GetCurrentThreadId()
                rcx_3.b = result.d != data_143de5470
            
            if (*(rbx_1 + (rcx_3 << 2)) s> 1)
                int64_t var_ac
                __builtin_memset(&var_ac, 0, 0x43)
                int128_t var_108
                __builtin_memset(&var_108, 0, 0x30)
                int128_t var_c0_1 = zx.o(0)
                int16_t var_68_1 = 0
                sub_140fdc870(arg2, &var_108)
                int64_t var_d8_1 = data_14395da00
                int64_t var_d0_1 = data_14395da18
                int64_t var_c8_1 = data_14395d9e8
                int64_t* rax_8 = std::_Get_future_error_what((*U"1111")[sx.q(*(arg1 + 0x3b0))])
                void* var_118
                sub_1419a2ec0(rax_8, &var_118, &data_143f55f90, 0)
                void* r14_1 = var_118
                void* var_128
                sub_1419a2ec0(rax_8, &var_128, &data_143e8f130, 0)
                var_108.q = data_1439c9210
                int64_t rax_10 = 0
                void* var_110
                
                if (r14_1 != 0)
                    int64_t rdx_5 = sx.q(*(r14_1 + 0x10c))
                    int64_t* rbx_3 = *(var_110 + 0x10)
                    int64_t rax_11 = rbx_3[3]
                    
                    if (*(rax_11 + (rdx_5 << 3)) == 0)
                        sub_1419ccf30(rbx_3, rdx_5.d)
                        rax_11 = rbx_3[3]
                    
                    rax_10 = *(rax_11 + (rdx_5 << 3))
                
                var_108:8.q = rax_10
                int64_t rcx_10 = 0
                void* rax_12 = var_128
                
                if (rax_12 != 0)
                    int64_t rdx_6 = sx.q(*(rax_12 + 0x10c))
                    void* var_120
                    int64_t* rbx_4 = *(var_120 + 0x10)
                    int64_t rax_14 = rbx_4[3]
                    
                    if (*(rax_14 + (rdx_6 << 3)) == 0)
                        sub_1419ccf30(rbx_4, rdx_6.d)
                        rax_14 = rbx_4[3]
                    
                    rcx_10 = *(rax_14 + (rdx_6 << 3))
                
                int128_t var_e8
                var_e8.q = rcx_10
                int32_t var_b0_1 = 0
                void* r9_1
                int512_t zmm2_1
                r9_1, zmm2_1 = sub_1419870b0(arg2, &var_108, 2)
                void* rbx_5 = data_143ec4fdc
                void*** rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                var_118 = rbx_5
                uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rbx_5.d))
                void* rax_17 = &rcx_15[5]
                uint128_t zmm6_1 = _mm_cvtepi32_ps(zx.o((rbx_5 u>> 0x20).d))
                
                if (rax_17 u> *(arg2 + 0x38))
                    r9_1, zmm6_1 = sub_140b0e3d0(arg2 + 0x30, 0x30)
                    rcx_15 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    rax_17 = &rcx_15[5]
                
                *(arg2 + 0x30) = rax_17
                uint128_t zmm1_1 = zx.o(0)
                void** rax_18 = *(arg2 + 8)
                zmm2_1.o = zx.o(0)
                *(arg2 + 0x14) += 1
                uint128_t zmm0_1 = zx.o(var_118:4.d)
                int32_t var_130_1 = 1
                *rax_18 = rcx_15
                *(arg2 + 8) = &rcx_15[1]
                int32_t var_138_1 = 1
                rcx_15[1] = 0
                zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
                *rcx_15 = &data_142d54998
                void** var_140_1 = &var_128
                int512_t zmm3
                zmm3.o = zx.o(rbx_5.d)
                int32_t var_158_1 = zmm0_1.d
                zmm3.o = _mm_cvtepi32_ps(zmm3.o)
                rcx_15[2] = 0
                rcx_15[3].d = 0
                *(rcx_15 + 0x24) = 0x3f800000
                var_128 = r14_1
                *(rcx_15 + 0x1c) = zmm7.d
                rcx_15[4].d = zmm6_1.d
                void* var_120_1 = var_110
                result = sub_1413993b0(arg2, zmm1_1, zmm2_1, r9_1, zmm3, zmm0_1.d, zmm1_1.d, 
                    zmm1_1.d, zmm3.d, var_158_1, rbx_5, rbx_5, var_140_1, var_138_1, var_130_1)
    else
        uint64_t rcx_2 = result * 5
        result = data_143f025b8
        
        if (*((rcx_2 << 2) + &data_143f025f0) == result
                && (*((rcx_2 << 2) + &data_143f025fc) & 1) != 0)
            goto label_14128c4d1

__security_check_cookie(rax_1 ^ &var_198)
return result
