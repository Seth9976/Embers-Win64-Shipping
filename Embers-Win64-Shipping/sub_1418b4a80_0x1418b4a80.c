// 函数: sub_1418b4a80
// 地址: 0x1418b4a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_318
int64_t result = __security_cookie ^ &var_318
int64_t result_1 = result
int64_t performanceCount
performanceCount.d = 0

if (*(arg1 + 0x70) == 0 && data_143de5426 == 0 && data_143f138f5 != 0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    *(arg1 + 0x70) = 1
    int128_t zmm6
    int128_t var_38_1 = zmm6
    
    if (data_143cd80cc s> *(0x14 + *(ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    int64_t rax_1
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            rax_1.b = 0
        else
            rax_1.b = 1
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        rax_1.b = 0
    else
        rax_1.b = 1
    
    uint128_t zmm0
    
    if (rax_1.b != 0)
        void* rbx_1 = data_143f5b298
        int128_t* rax_8
        int64_t* rbx_2
        int32_t r14_1
        uint128_t zmm0_1
        
        if (rbx_1 == 0)
        label_1418b4bf6:
            r14_1 = 4
            int64_t* var_240
            rax_8, zmm0_1 = sub_141fff880(&var_240)
            int64_t* var_2a0
            rbx_2 = var_2a0
        else
            void* rax_2 = sub_1424ad0c0()
            void* rdx = *(rbx_1 + 0x10)
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30
                    || *(rbx_1 + 0xdf0) == 0)
                goto label_1418b4bf6
            
            void* rcx_3 = *(rbx_1 + 0xdf8)
            
            if (rcx_3 == 0)
                goto label_1418b4bf6
            
            int32_t rax_5 = *(rcx_3 + 8)
            
            if (rax_5 s<= 0)
                goto label_1418b4bf6
            
            int64_t var_2a8_1 = 0
            r14_1 = 3
            void* var_2a0_1 = rcx_3
            
            if (rcx_3 != 0)
                if (rax_5 == 0)
                    int64_t var_2a0_2 = 0
                else
                    *(rcx_3 + 8) = rax_5 + 1
                    var_2a8_1 = *(rbx_1 + 0xdf0)
            
            zmm0_1 = var_2a8_1.o
            uint128_t var_268
            rax_8 = &var_268
            rbx_2 = nullptr
            var_268 = zmm0_1
            int64_t var_2a0_3 = 0
        
        int64_t* rsi_1 = *(rax_8 + 8)
        void* r12_1 = *rax_8
        int64_t* var_2b0_1 = rsi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d += 1
        
        if ((r14_1.b & 4) != 0)
            r14_1 &= 0xfffffffb
            int64_t* var_238
            
            if (var_238 != 0)
                var_238[1].d -= 1
                
                if (var_238[1].d == 1)
                    (**var_238)(var_238)
                    int32_t temp3_1 = *(var_238 + 0xc)
                    *(var_238 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_238 + 8))(var_238, 1)
        
        if ((r14_1.b & 2) != 0)
            r14_1 &= 0xfffffffd
            int64_t* var_260
            
            if (var_260 != 0)
                var_260[1].d -= 1
                
                if (var_260[1].d == 1)
                    (**var_260)(var_260)
                    int32_t temp5_1 = *(var_260 + 0xc)
                    *(var_260 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*var_260 + 8))(var_260, 1)
        
        if ((r14_1.b & 1) != 0 && rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp6_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        float var_248
        float* rax_15 = sub_140e12930(r12_1, &var_248, zmm0_1)
        float zmm6_1 = *rax_15
        int32_t zmm7_1 = rax_15[1]
        void var_1f8
        int64_t* rax_16 = sub_1418aefd0(&var_1f8)
        rax_16[0x34].d = zmm6_1
        *(rax_16 + 0x1a4) = zmm7_1
        void*** rax_17 = sub_1418aed60()
        int64_t* var_288 = &rax_17[2]
        sub_140918950(&var_288, &rax_17[2])
        int64_t var_2f8_1 = 0xa90
        void var_2e8
        void* var_278_1 = &var_2e8
        int64_t* var_220
        int64_t** rax_18 =
            sub_1418aff10(&var_288, &var_220, rax_16, sub_140e23ed0(&rax_17[2], "SVirtualWindow"))
        int64_t* rbx_4 = rax_18[1]
        int64_t* rcx_16 = *rax_18
        int64_t* var_230 = rcx_16
        
        if (rbx_4 != 0)
            rbx_4[1].d += 1
        
        if (arg1 + 0x60 == &var_230)
        label_1418b4d9b:
            
            if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp9_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
        else
            *(arg1 + 0x60) = rcx_16
            int64_t* rdi_4 = *(arg1 + 0x68)
            
            if (rbx_4 == rdi_4)
                goto label_1418b4d9b
            
            *(arg1 + 0x68) = rbx_4
            
            if (rdi_4 != 0)
                rdi_4[1].d -= 1
                
                if (rdi_4[1].d == 1)
                    (**rdi_4)(rdi_4)
                    int32_t temp13_1 = *(rdi_4 + 0xc)
                    *(rdi_4 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*rdi_4 + 8))(rdi_4, 1)
        
        int64_t* var_218
        
        if (var_218 != 0)
            var_218[1].d -= 1
            
            if (var_218[1].d == 1)
                (**var_218)(var_218)
                int32_t temp12_1 = *(var_218 + 0xc)
                *(var_218 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_218 + 8))(var_218, 1)
        
        if (rax_17 != 0)
            rax_17[1].d -= 1
            
            if (rax_17[1].d == 1)
                (**rax_17)(rax_17)
                int32_t temp14_1 = *(rax_17 + 0xc)
                *(rax_17 + 0xc) -= 1
                
                if (temp14_1 == 1)
                    (*rax_17)[1](rax_17, 1)
        
        sub_140ddea30(&var_1f8)
        *(arg1 + 0x50) = r12_1
        int64_t* rcx_25 = *(arg1 + 0x58)
        
        if (rsi_1 != rcx_25)
            if (rsi_1 != 0)
                *(rsi_1 + 0xc) += 1
                rcx_25 = *(arg1 + 0x58)
            
            if (rcx_25 != 0)
                int32_t temp15_1 = *(rcx_25 + 0xc)
                *(rcx_25 + 0xc) -= 1
                
                if (temp15_1 == 1)
                    (*(*rcx_25 + 8))(rcx_25, 1)
            
            *(arg1 + 0x58) = rsi_1
        
        void*** rax_27 = j_sub_140a82f30(0x48)
        void*** rbx_7 = rax_27
        
        if (rax_27 == 0)
            rbx_7 = nullptr
        else
            rax_27[1].d = 1
            *(rax_27 + 0xc) = 1
            *rbx_7 = &data_142feada8
            void* rax_28 = *(arg1 + 0x68)
            int64_t var_258 = *(arg1 + 0x60)
            void* var_250_1 = rax_28
            
            if (rax_28 != 0)
                *(rax_28 + 8) += 1
            
            uint128_t var_208 = r12_1.o
            
            if (rsi_1 != 0)
                rsi_1[1].d += 1
            
            sub_1418af340(&rbx_7[2], &var_208, &var_258, arg2)
        
        zmm0 = (&rbx_7[2]).o
        uint128_t var_2d8 = zmm0
        void*** rbx_8 = _mm_bsrli_si128(zmm0, 8).q
        
        if (rbx_8 != 0)
            rbx_8[1].d += 1
            rsi_1 = var_2b0_1
            rbx_8 = rbx_7
        
        if (arg1 + 0x40 != &var_2d8)
            *(arg1 + 0x40) = var_2d8.q
            var_2d8.q = 0
            sub_1405aeff0(arg1 + 0x48, &var_2d8:8)
            rbx_8 = rbx_7
        
        void* rcx_30 = var_2d8:8.q
        
        if (rcx_30 != 0)
            int32_t rax_30 = *(rcx_30 + 8)
            *(rcx_30 + 8) -= 1
            
            if (rax_30 == 1)
                int64_t* rbx_9 = var_2d8:8.q
                (**rbx_9)(rbx_9)
                int32_t rax_32 = *(rbx_9 + 0xc)
                *(rbx_9 + 0xc) -= 1
                
                if (rax_32 == 1)
                    int64_t* rcx_32 = var_2d8:8.q
                    (*(*rcx_32 + 8))(rcx_32, 1)
            
            rbx_8 = rbx_7
            rsi_1 = var_2b0_1
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t rdi_5 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (rdi_5 == 1)
                    (*rbx_8)[1](rbx_8, zx.q(rdi_5))
            
            rsi_1 = var_2b0_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp17_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
    
    QueryPerformanceCounter(&performanceCount)
    zmm0.q = float.d(performanceCount)
    zmm0.q = zmm0.q f* data_143d796f8
    zmm0.q = zmm0.q f+ 16777216.0
    *(arg1 + 0xb0) = zmm0.q
    int64_t performanceCount_1
    result = QueryPerformanceCounter(&performanceCount_1)
    zmm0.q = float.d(performanceCount_1)
    zmm0.q = zmm0.q f* data_143d796f8
    zmm0.q = zmm0.q f+ 16777216.0
    *(arg1 + 0x38) = zmm0.q

__security_check_cookie(result_1 ^ &var_318)
return result
