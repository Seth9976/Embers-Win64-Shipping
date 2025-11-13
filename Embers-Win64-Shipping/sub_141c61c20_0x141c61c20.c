// 函数: sub_141c61c20
// 地址: 0x141c61c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int64_t result = sub_141c575d0(arg1)
void* rsi = *(arg1 + 0x398)

if (rsi != 0)
    void* rax_2 = sub_1425a1cd0()
    void* rdx_1 = *(rsi + 0x10)
    result = sx.q(*(rax_2 + 0x38))
    
    if (result.d s> *(rdx_1 + 0x38))
    label_141c61fb1:
        void* rsi_3 = *(arg1 + 0x398)
        
        if (rsi_3 != 0)
            void* rax_30 = sub_1425a21c0()
            void* rdx_9 = *(rsi_3 + 0x10)
            result = sx.q(*(rax_30 + 0x38))
            int64_t** rcx_22
            
            if (result.d s> *(rdx_9 + 0x38))
            label_141c62021:
                void* rsi_4 = *(arg1 + 0x398)
                
                if (rsi_4 != 0)
                    void* rax_33 = sub_1425a2500()
                    void* rdx_12 = *(rsi_4 + 0x10)
                    result = sx.q(*(rax_33 + 0x38))
                    
                    if (result.d s> *(rdx_12 + 0x38))
                    label_141c6209b:
                        void* rsi_5 = *(arg1 + 0x398)
                        
                        if (rsi_5 != 0)
                            void* rax_39 = sub_1425a2650()
                            void* rdx_14 = *(rsi_5 + 0x10)
                            result = sx.q(*(rax_39 + 0x38))
                            
                            if (result.d s<= *(rdx_14 + 0x38))
                                int64_t result_4 = result
                                result = *(rdx_14 + 0x30)
                                
                                if (*(result + (result_4 << 3)) == rax_39 + 0x30)
                                    int64_t* rax_40 = sub_142367a40(rsi_5)
                                    result = sub_141b25240(rsi_5)
                                    int64_t result_5 = result
                                    
                                    if (rax_40 != 0)
                                        if (result != 0)
                                        label_141c62112:
                                            int64_t** var_90
                                            sub_142367a90(rsi_5, &var_90)
                                            sub_141c6fde0(arg1, result_5, &var_90, rax_40)
                                            
                                            if (*(arg1 + 0x130) == 0)
                                                result = sub_141c6cec0(arg1 + 0x130)
                                            else
                                                result = sub_1408f3520(rsi_5)
                                                
                                                if (result != 0)
                                                    result = sub_141c6f640(arg1, rax_40, result)
                                                else
                                                    result = (*(*rax_40 + 0x88))(rax_40)
                                                    
                                                    if (result_5 != 0)
                                                        result = sub_141c6f640(arg1, rax_40, result)
                                            
                                            rcx_22 = var_90
                                            goto label_141c6216d
                                        
                                        int64_t rdx_15 = *rax_40
                                        result = (*(rdx_15 + 0x60))(rax_40, rdx_15)
                                        result_5 = result
                                        
                                        if (result != 0)
                                            goto label_141c62112
                    else
                        int64_t result_3 = result
                        result = *(rdx_12 + 0x30)
                        
                        if (*(result + (result_3 << 3)) != rax_33 + 0x30)
                            goto label_141c6209b
                        
                        void* rax_34 = *(arg1 + 0x88)
                        int32_t rcx_23 = *(rax_34 + 0x958)
                        *(arg1 + 0x120) = rcx_23
                        *(arg1 + 0x124) = *(rax_34 + 0x14) * rcx_23
                        result = sub_141c6f4e0(arg1, sub_142363300(rsi_4), sub_1408f3520(rsi_4))
            else
                int64_t result_2 = result
                result = *(rdx_9 + 0x30)
                
                if (*(result + (result_2 << 3)) != rax_30 + 0x30)
                    goto label_141c62021
                
                int64_t* rax_31 = sub_142367a50(rsi_3)
                int64_t* rax_32 = j_sub_142364710(rsi_3)
                int64_t** var_58
                sub_142367b00(rsi_3, &var_58)
                result = sub_141c6fde0(arg1, rax_32, &var_58, rax_31)
                rcx_22 = var_58
            label_141c6216d:
                
                if (rcx_22 != 0)
                    result = sub_140a74f90(rcx_22)
    else
        int64_t result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) != rax_2 + 0x30)
            goto label_141c61fb1
        
        float zmm1_1[0x4] = *(rsi + 0x68)
        float zmm0_1[0x4] = zx.o(0)
        
        if (not(zmm1_1[0] < 0f))
            zmm0_1 = _mm_min_ss(zmm1_1[0], 0x3f800000)
        
        *(arg1 + 0x248) = zmm0_1[0]
        zmm0_1[0] = zmm0_1[0] - 1f
        
        if (not(__andps_xmmxud_memxud(zmm0_1, data_142d3f770)[0] <= 9.99999994e-09f))
            *(arg1 + 0x32c) |= 4
        
        void* lpCriticalSection = arg1 + 0x370
        *(arg1 + 0x328) = 0
        EnterCriticalSection(lpCriticalSection)
        int64_t r12_1 = 0
        int64_t* r15_1 = *(rsi + 0x48)
        uint64_t r13_2 = sx.q(*(rsi + 0x50)) << 3 u>> 3
        
        if (r15_1 u> &r15_1[sx.q(*(rsi + 0x50))])
            r13_2 = 0
        
        if (r13_2 != 0)
            do
                int64_t* rsi_1 = *r15_1
                
                if (rsi_1 != 0)
                    void* rcx_1 = *(arg1 + 0x88)
                    *(arg1 + 0x328) += 1
                    int32_t var_80 = 0xffffffff
                    int32_t var_70_1 = 0
                    int64_t var_78_1 = 0
                    var_80 = *(rcx_1 + 0x28)
                    int64_t rax_6 = *rsi_1
                    float var_70_2 = _mm_cvtepi32_ps(zx.o(*(rcx_1 + 0xc)))[0]
                    int64_t* rax_7 = (*(rax_6 + 0x280))(rsi_1)
                    sub_140d3a3a0(rax_7 + 0x4c, rsi_1)
                    int64_t r8_2 = *rax_7
                    (*(r8_2 + 0x48))(rax_7, &var_80, r8_2)
                    void*** rax_8 = j_sub_140a82f30(0x18)
                    
                    if (rax_8 == 0)
                        rax_8 = nullptr
                    else
                        rax_8[1].d = 1
                        *rax_8 = &data_142d42ea8
                        *(rax_8 + 0xc) = 1
                        rax_8[2] = rax_7
                    
                    uint128_t zmm0_2 = rax_7.o
                    uint128_t var_68 = zmm0_2
                    void* rax_9 = _mm_bsrli_si128(zmm0_2, 8).q
                    
                    if (rax_9 != 0)
                        *(rax_9 + 8) += 1
                    
                    sub_142357580(rsi_1, &var_68)
                    int64_t* rdi_2 = var_68:8.q
                    
                    if (rdi_2 != 0)
                        rdi_2[1].d -= 1
                        
                        if (rdi_2[1].d == 1)
                            (**rdi_2)(rdi_2)
                            int32_t rax_12 = *(rdi_2 + 0xc)
                            *(rdi_2 + 0xc) -= 1
                            
                            if (rax_12 == 1)
                                (*(*rdi_2 + 8))(rdi_2, 1)
                    
                    sub_142376b50(rax_7, 1)
                    float zmm2[0x4] = rax_7.o
                    uint128_t zmm1_2 = zx.o(0)
                    int32_t rax_14 = *(rsi_1 + 0xc)
                    void* rax_15 = _mm_bsrli_si128(zmm2, 8)[0].q
                    uint128_t var_a0_1 = zx.o(0)
                    
                    if (rax_15 != 0)
                        *(rax_15 + 8) += 1
                        zmm1_2 = var_a0_1
                    
                    void* rcx_9 = _mm_bsrli_si128(zmm1_2, 8).q
                    float var_48_1[0x4] = zmm2
                    
                    if (rcx_9 != 0)
                        int32_t rax_16 = *(rcx_9 + 8)
                        *(rcx_9 + 8) -= 1
                        
                        if (rax_16 == 1)
                            int64_t* rdi_3 = zmm1_2:8.q
                            (**rdi_3)(rdi_3)
                            int32_t rax_18 = *(rdi_3 + 0xc)
                            *(rdi_3 + 0xc) -= 1
                            
                            if (rax_18 == 1)
                                int64_t* rcx_11 = zmm1_2:8.q
                                (*(*rcx_11 + 8))(rcx_11, 1)
                    
                    int64_t rsi_2 = sx.q(*(arg1 + 0x80))
                    int32_t rax_20 = (rsi_2 + 1).d
                    *(arg1 + 0x80) = rax_20
                    
                    if (rax_20 s> *(arg1 + 0x84))
                        sub_1405a4df0(arg1 + 0x78)
                    
                    int64_t rcx_13 = *(arg1 + 0x78)
                    int64_t rdx_8 = rsi_2 * 3
                    *(rcx_13 + (rdx_8 << 3)) = rax_14
                    *(rcx_13 + (rdx_8 << 3) + 8) = zmm2[0].q
                    *(rcx_13 + (rdx_8 << 3) + 0x10) = zmm2[2].q
                    
                    if (rax_8 != 0)
                        rax_8[1].d -= 1
                        
                        if (rax_8[1].d == 1)
                            (**rax_8)(rax_8)
                            int32_t rax_26 = *(rax_8 + 0xc)
                            *(rax_8 + 0xc) -= 1
                            
                            if (rax_26 == 1)
                                (*rax_8)[1](rax_8, 1)
                
                r15_1 = &r15_1[1]
                r12_1 += 1
            while (r12_1 != r13_2)
            
            lpCriticalSection = arg1 + 0x370
        
        void* rax_28 = *(arg1 + 0x88)
        int32_t rcx_16 = *(rax_28 + 0x958)
        *(arg1 + 0x120) = rcx_16
        result = zx.q(*(rax_28 + 0x14) * rcx_16)
        *(arg1 + 0x124) = result.d
        
        if (lpCriticalSection != 0)
            result = LeaveCriticalSection(lpCriticalSection)

__security_check_cookie(rax_1 ^ &var_e8)
return result
