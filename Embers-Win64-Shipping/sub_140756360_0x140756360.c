// 函数: sub_140756360
// 地址: 0x140756360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg5
uint128_t* rdi = arg2
void* r13 = arg1
void* r14 = arg4
int64_t* var_78
sub_140758e20(rsi, &var_78, arg3)
int64_t* r12 = var_78
int64_t* var_118 = r12
int32_t var_70
void** const result = &r12[sx.q(var_70)]
void** const result_2 = result

if (r12 != result)
    TEB* gsbase
    void* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    void* var_98_1 = r15_1
    int32_t var_e4_1 = 0
    
    do
        int64_t var_b0 = *r12
        int64_t* rax_4 = sub_140d3c6e0(&var_b0)
        int64_t* rbx_1 = rax_4
        void* rax_5
        int64_t rax_6
        void* rdx_1
        
        if (rax_4 != 0)
            rax_5 = sub_14086a680()
            rdx_1 = rbx_1[2]
            rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_4 == 0 || rax_6.d s> *(rdx_1 + 0x38)
                || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
            rbx_1 = nullptr
        
        if (data_143cdfe90 s> *(r15_1 + 0x14))
            _Init_thread_header(&data_143cdfe90)
            
            if (data_143cdfe90 == 0xffffffff)
                int64_t rax_32 = data_143cdfe88
                
                if (rax_32 == 0)
                    rax_32 = sub_141a54240(&data_143cdfe88, 0)
                
                data_143cdfe80 = rax_32
                _Init_thread_footer(&data_143cdfe90)
        
        uint128_t zmm0_1 = zx.o(*(r14 + 0x18))
        int64_t rdx_2 = data_143cdfe80
        void** const result_1 = &data_142d9aab8
        int32_t var_80_1 = *(r14 + 0x20)
        uint64_t var_88 = zmm0_1.q
        sub_1405c5900(&rsi[0x1f], rdx_2, &result_1, rbx_1, 2, &var_88)
        int32_t rax_10 = rbx_1[0xa4].d
        
        if ((rax_10.b & 1) == 0)
            rbx_1[0xa4].d = rax_10 | 1
            sub_140752510(rbx_1)
            int64_t rdx_3
            rdx_3.b = 1
            (*(*rbx_1 + 0x340))(rbx_1, rdx_3)
        
        rbx_1[0xa6].b = *(r13 + 0x1c)
        int64_t* rax_16
        int32_t zmm6_1
        int32_t zmm7_1
        int32_t zmm8_1
        rax_16, zmm6_1, zmm7_1, zmm8_1 = sub_141a528b0((*(*rsi + 8))(rsi), &arg3[4])
        uint128_t zmm1_1
        
        if (rax_16 != 0)
            int64_t rdx_5 = *rax_16
            void* rax_17 = (*(rdx_5 + 0x280))(rax_16, rdx_5)
            
            if (rax_17 != 0)
                uint32_t rcx_11 = (*(rax_17 + 0x110) u>> 0x20).d
                zmm0_1 = _mm_cvtepi32_ps(zx.o(*(rax_17 + 0x110)))
                zmm1_1.d = _mm_cvtepi32_ps(zx.o(rcx_11)).d f/ zmm0_1.d
                rbx_1[0xa8].d = zmm1_1.d
        
        void** const result_3 = rbx_1[0xa5]
        uint64_t r15_2 = zx.q(*(rdi + 0x24))
        int32_t rcx_12 = *(r13 + 8)
        result_1 = result_3
        uint64_t rax_18
        uint64_t r8_2
        
        if (r15_2.d == 0x80000000)
            uint64_t* rdx_6 = &rdi[1]
            
            if (rdi[2].d != 0)
                rdx_6 = rdi + 4
            
            r8_2 = *rdx_6
            rax_18 = r8_2
            int32_t var_100
            var_100.q = rax_18
        else
            r8_2 = zx.q(r15_2.d)
            int32_t var_fc_1 = 0
            rax_18 = r15_2.d.q
        
        if (r8_2.d s< rcx_12 || (r8_2.d == rcx_12 && rax_18:4.d.d f< rcx_12.q:4.d))
            rax_18.b = 1
        else
            rax_18.b = 0
        
        if (rax_18.b == 0)
            zmm1_1 = *rdi
            int64_t r12_1 = zmm1_1:8.q
            int64_t r10_1 = zmm1_1:4.q
            int32_t r8_3 = zmm1_1:4.d
            uint64_t var_b8_1 = rdi[1].q
            uint32_t rax_20 = var_b8_1.d
            char r13_1 = zmm1_1.b
            int32_t var_dc_1 = 0
            uint8_t result_4
            
            if (r13_1 != 2)
                result_4 = (r12_1 u>> 0x20).b
                
                if (result_4 == 2)
                    goto label_1407566aa
                
                int64_t rdx_7
                
                if (r8_3 s> rax_20 || (r8_3 == rax_20 && r10_1:4.d.d f> var_b8_1:4.d))
                    rdx_7.b = 1
                else
                    rdx_7.b = 0
                
                if (rdx_7.b != 0)
                    goto label_140756871
                
                if (r8_3 != rax_20 || r10_1:4.d.d f!= var_b8_1:4.d)
                    rdx_7.b = 0
                else
                    rdx_7.b = 1
                
                if (rdx_7.b == 0 || (r13_1 != 0 && result_4 != 0))
                    goto label_1407566aa
                
                goto label_140756871
            
        label_1407566aa:
            int64_t rdx_8 = rcx_12.q
            
            if (rdx_8:4.d.d f> rdx_8:4.d != 0)
                goto label_140756871
            
            uint8_t r12_2 = (r12_1 u>> 0x20).b
            result_3.b = 1
            char rdi_1 = 1
            r14.b = r13_1 == 2
            uint64_t r9_1
            
            if (r12_2 != 2)
                if (rax_20 s> rcx_12 || (rax_20 == rcx_12 && var_b8_1:4.d.d f> rdx_8:4.d))
                    result_4 = 1
                else
                    result_4 = 0
                
                if (rax_20 s> rcx_12 || (rax_20 == rcx_12 && var_b8_1:4.d.d f>= rdx_8:4.d))
                    rax_20.b = 1
                else
                    rax_20.b = 0
                
                result_3 = zx.q(result_4)
                r9_1.b = r12_2 == 1
                
                if (r9_1.b != 0)
                    result_3 = zx.q(rax_20.b)
            
            if (r14.b == 0)
                if (r8_3 s< rcx_12 || (r8_3 == rcx_12 && r10_1:4.d.d f< rdx_8:4.d))
                    r9_1.b = 1
                else
                    r9_1.b = 0
                
                if (r8_3 s< rcx_12 || (r8_3 == rcx_12 && r10_1:4.d.d f<= rdx_8:4.d))
                    rax_20.b = 1
                else
                    rax_20.b = 0
                
                rdi_1 = r9_1.b
                rcx_12.b = r13_1 == 1
                
                if (rcx_12.b != 0)
                    rdi_1 = rax_20.b
            
            if (result_3.b == 0 || rdi_1 == 0)
                result_3 = result_1
                rdi = arg2
            label_140756871:
                r13 = arg1
                int32_t var_d4_1 = 0
                int32_t rdx_10 = *(r13 + 0xc)
                uint64_t rax_27
                
                if (r15_2.d == 0x80000000)
                    void* rcx_18 = &rdi[1]
                    
                    if (rdi[2].d != 0)
                        rcx_18 = rdi + 4
                    
                    r15_2 = *rcx_18
                    rax_27 = r15_2
                    int32_t var_f8
                    var_f8.q = rax_27
                else
                    int32_t var_f4_1 = 0
                    rax_27 = r15_2.d.q
                
                if (r15_2.d s< rdx_10 || (r15_2.d == rdx_10 && rax_27:4.d.d f< rdx_10.q:4.d))
                    rax_27.b = 1
                else
                    rax_27.b = 0
                
                if (rax_27.b == 0)
                    int32_t rax_30 = *(r13 + 0x18)
                    
                    if (rax_30 != 0)
                        if (rax_30 == 1 && (*(rbx_1 + 0x8a) & rax_30.b) != 0)
                            zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_140752310(rbx_1)
                            void* rcx_24 = rbx_1[0xa5]
                            
                            if (rcx_24 != 0)
                                zmm6_1, zmm7_1, zmm8_1 = sub_140859420(rcx_24, 0, zmm0_1.d)
                    else if (result_3 != 0)
                        zmm6_1, zmm7_1, zmm8_1 = sub_14085ba80(result_3, rax_30 + 1)
                else if (*(r13 + 0x14) == 0)
                    if ((*(rbx_1 + 0x8a) & 1) == 0)
                        (*(*rbx_1 + 0x268))(rbx_1, 0)
                    
                    if (result_3 != 0)
                        zmm6_1, zmm7_1, zmm8_1 = sub_14085ba80(result_3, 0)
            else
                r13 = arg1
                
                if (*(r13 + 0x10) == 0 && (*(rbx_1 + 0x8a) & 1) == 0)
                    (*(*rbx_1 + 0x268))(rbx_1, 0)
                
                rdi = arg2
            
            r12 = var_118
        else if (*(r13 + 0x10) == 0 && (*(rbx_1 + 0x8a) & 1) != 0)
            zmm0_1, zmm6_1, zmm7_1, zmm8_1 = sub_140752310(rbx_1)
            void* rcx_14 = rbx_1[0xa5]
            
            if (rcx_14 != 0)
                zmm6_1, zmm7_1, zmm8_1 = sub_140859420(rcx_14, 0, zmm0_1.d)
        
        int32_t rcx_16 = 0
        
        if ((*(rdi + 0x54) & 0x14) == 0)
            rcx_16 = 2
        
        result = result_1
        *(rbx_1 + 0x54c) = rcx_16 | (*(rbx_1 + 0x54c) & 0xfffffffd)
        
        if (result != 0)
            result.b = result[0xdd].d - 3 u<= 1
            
            if (result.b == 0)
                uint64_t rdx_9 = zx.q(*(rdi + 0x24))
                int32_t r8_4 = *(r13 + 8)
                int32_t var_cc_1 = 0
                uint64_t rax_26
                
                if (rdx_9.d == 0x80000000)
                    void* rcx_25 = &rdi[1]
                    
                    if (rdi[2].d != 0)
                        rcx_25 = rdi + 4
                    
                    rdx_9 = *rcx_25
                    rax_26 = rdx_9
                    int32_t var_f0
                    var_f0.q = rdx_9
                else
                    int32_t var_ec_1 = 0
                    rax_26 = rdx_9.d.q
                
                uint128_t zmm2_1
                zmm2_1.d = rax_26:4.d.d f- r8_4.q:4.d
                zmm1_1.d = zmm2_1.d f+ zmm2_1.d
                zmm1_1.d = zmm1_1.d f- zmm8_1
                int32_t rcx_28 = int.d(zmm1_1.d) s>> 1
                int32_t r9_4 = rcx_28 - r8_4 + rdx_9.d
                zmm2_1.d = zmm2_1.d f- _mm_cvtepi32_ps(zx.o(rcx_28)).d
                
                if (not(zmm2_1.d f>= zmm7_1))
                    int32_t var_104_1 = 0
                else if (zmm2_1.d f>= 0.99999994f)
                    int32_t var_104_3 = 0x3f7fffff
                else
                    int32_t var_104_2 = zmm2_1.d
                
                result = *(rdi + 0x18)
                uint32_t r8_6 = (result u>> 0x20).d
                zmm0_1.d = _mm_cvtepi32_ps(zx.o(r8_6)).d f* r9_4.q:4.d
                zmm2_1.q = float.d(sx.q(r8_6) * sx.q(r9_4))
                zmm2_1.q = zmm2_1.q f+ _mm_cvtps_pd(zmm0_1.q).q
                zmm2_1.q = zmm2_1.q f/ _mm_cvtepi32_pd(zx.q(result.d)).q
                int32_t temp0_7 = _mm_cvtpd_ps(zmm2_1)
                
                if (not(temp0_7 f< zmm7_1))
                    zmm0_1.d = rbx_1[0xa8].d.d f* zmm6_1
                    rbx_1[0xa9].b = 0
                    zmm0_1.d = zmm0_1.d f+ temp0_7
                    *(rbx_1 + 0x534) = zmm0_1.d
        
        rsi = arg5
        r12 = &r12[1]
        r14 = arg4
        r15_1 = var_98_1
        var_118 = r12
    while (r12 != result_2)

return result
