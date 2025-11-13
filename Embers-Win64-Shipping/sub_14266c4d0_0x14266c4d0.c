// 函数: sub_14266c4d0
// 地址: 0x14266c4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t* r13 = arg1
void* result = (*(*arg1 + 0x150))()
int128_t zmm6 = *(result + 0x520)

if (not(zmm6.d f< r13[0x37].d))
    void* r14_1 = &r13[0x35]
    *(r14_1 + 8) = 0
    void* var_f0_1 = r14_1
    
    if (*(r14_1 + 0xc) s<= 0xffffffff)
        sub_1405c55e0(r14_1, 0)
    
    int32_t performanceCount
    int32_t var_a8
    void* var_a0
    float var_98[0x4]
    float var_88
    int64_t* var_80
    void* var_78
    int16_t var_70
    
    if (r13[0x2c].d - *(r13 + 0x18c) s> 0)
        QueryPerformanceCounter(&performanceCount)
        int32_t rdx_2 = r13[0x2c].d - *(r13 + 0x18c)
        
        if (rdx_2 s> *(r14_1 + 0xc))
            sub_1405c55e0(r14_1, rdx_2)
        
        int32_t rcx_3 = 0
        int32_t var_124_1 = 1
        void* r9_1 = &r13[0x2d]
        int32_t var_128_1 = 0
        int32_t r11_1 = *(r9_1 + 0x18)
        int32_t r8_1 = 0
        void* var_120_1 = r9_1
        int32_t var_118_1 = 0xffffffff
        int64_t var_114_1 = 0
        
        if (r11_1 != 0)
            void* rax_5 = *(r9_1 + 0x10)
            
            if (rax_5 != 0)
                r9_1 = rax_5
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_14266c62c:
                int32_t rax_12 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                int32_t var_124_2 = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_2
                
                var_114_1.d = r8_1 - rax_13 + 0x1f
                
                if (r8_1 - rax_13 + 0x1f s> r11_1)
                    var_114_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_3)
                    r8_1 += 0x20
                    rcx_3 += 1
                    var_114_1:4.d = r8_1
                    var_128_1 = rcx_3
                    
                    if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_118_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_14266c62c
                
                var_114_1.d = r11_1
        
        void* var_b0_1 = &r13[0x2b]
        var_78 = &r13[0x2b]
        var_70 = 0
        float zmm3[0x4] = var_128_1.o
        float zmm0[0x4] = 0xffffffff
        void* rax_15 = zmm3[0].q
        var_98 = zmm3
        var_a8.o = (&r13[0x2b]).o
        double temp0_3[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t temp0_4 = _mm_bsrli_si128(0xffffffff, 4)
        zmm0[0].q = temp0_3.q
        var_88 = zmm0[0]
        
        if (temp0_4 s< *(rax_15 + 0x18))
            float i = var_98[3]
            
            do
                int64_t* rsi_1 = var_a8.q
                int64_t rbx_3 = sx.q(i) << 5
                void* rax_17 = sub_140d3c6e0(*rsi_1 + 8 + rbx_3)
                
                if (rax_17 == 0)
                    sub_1405c3390(var_80, i)
                    var_70.b = 1
                else
                    void* rcx_9 = *(rax_17 + 0x130)
                    int64_t rdx_7 = *rsi_1
                    int64_t* rax_18
                    
                    if (rcx_9 == 0)
                        int32_t var_e0_1 = data_143dbb200
                        int64_t var_e8
                        rax_18 = &var_e8
                        var_e8 = data_143dbb1f8.q
                    else
                        double zmm1[0x2] = *(rcx_9 + 0x1d0)
                        rax_18 = &performanceCount
                        performanceCount = zmm1[0].d
                        float temp0_5[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                        int32_t var_100_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0].d
                        float var_104_1 = temp0_5[0]
                    
                    int64_t rbx_4 = sx.q(*(r14_1 + 8))
                    var_120_1.d = rax_18[1].d
                    var_120_1:4.d = (*(rbx_3 + rdx_7 + 0x10))[0].d
                    int32_t rax_21 = (rbx_4 + 1).d
                    int32_t var_118_3 = (*(rbx_3 + rdx_7 + 0x14)).d
                    var_128_1.q = *rax_18
                    *(r14_1 + 8) = rax_21
                    
                    if (rax_21 s> *(r14_1 + 0xc))
                        sub_1405c4d20(r14_1)
                    
                    int64_t rdx_9 = *r14_1
                    int64_t rcx_11 = rbx_4 * 5
                    *(rdx_9 + (rcx_11 << 2)) = var_128_1.o
                    *(rdx_9 + (rcx_11 << 2) + 0x10) = var_118_3
                
                var_98[2] &= not.d(var_a0:4.d)
                sub_14059bdd0(&var_a0)
                i = var_98[3]
            while (i s< *(var_98[0].q + 0x18))
            
            if (var_70.b != 0 && var_70:1.b != 0)
                sub_1405b6520(var_78, *(var_78 + 8) - *(var_78 + 0x34), 1)
    
    QueryPerformanceCounter(&performanceCount)
    void* rbx_5 = sub_1426a09e0()
    int64_t rax_28 = (*(*r13 + 0x150))(r13)
    
    if (rbx_5 == 0)
        rbx_5 = nullptr
    else
        void* rax_29 = sub_1426a09e0()
        
        if (rax_29 == 0)
            rbx_5 = nullptr
        else
            int64_t rcx_17 = sx.q(*(rax_29 + 0x38))
            
            if (rcx_17.d s> *(rbx_5 + 0x38) || *(*(rbx_5 + 0x30) + (rcx_17 << 3)) != rax_29 + 0x30)
                rbx_5 = nullptr
    
    var_a8 = 5
    char var_50_1 = 0
    sub_1405ab0f0(&var_a0, rax_28, rbx_5)
    char var_50_2 = 1
    sub_1405b0c60(&var_a8)
    char var_84
    
    if (var_84 == 0)
        void* rdi_2 = var_78
        int64_t r15
        int64_t var_28_1 = r15
        
        while (true)
            (*(*rdi_2 + 0x7a0))(rdi_2, r14_1)
            int32_t var_68
            int32_t r8_5 = var_68
            float rdx_16 = var_98[2]
            void* r13_1 = var_a0
            float r14_3 = var_88 i+ 1
            
            if (r14_3 s>= r8_5 i+ rdx_16)
            label_14266ca41:
                int64_t var_78_1 = 0
                char var_84_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_3) << 3
            
            while (true)
                if (r14_3 s>= rdx_16)
                    rdi_2 = *(var_70.q + (sx.q(r14_3 i- rdx_16) << 3))
                else
                    rdi_2 = *(var_98[0].q + r12_1)
                
                var_80.d += 1
                
                if (rdi_2 != 0)
                    void* rax_38 = sub_141dc9840(rdi_2)
                    
                    if (rax_38 != 0)
                        void* const rax_45
                        
                        if ((var_a8.b & 1) != 0)
                            int32_t rax_39 = *(rdi_2 + 0xc)
                            
                            if (rax_39 s>= data_143e1d9b4)
                                rax_45 = nullptr
                            else
                                int16_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_39)
                                uint32_t rdx_18 = zx.d(temp2_1)
                                int32_t rax_41 = temp3_1 + rdx_18
                                rax_45 = *(data_143e1d9a0 + (sx.q(rax_41 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_41.w) - rdx_18) * 0x18
                        
                        if ((var_a8.b & 1) == 0 || ((*(rax_45 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_28 = var_a8
                            
                            if (((rcx_28 u>> 1).b & 1) == 0)
                                goto label_14266c96b
                            
                            uint64_t rax_49 = sub_1405949a0()
                            
                            if (rax_49.b != 0)
                                rcx_28 = var_a8
                            label_14266c96b:
                                
                                if (((rcx_28 u>> 2).b & 1) == 0)
                                label_14266c9e7:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_38) == r13_1)
                                        if (rax_38 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_51 = sub_1425bd0d0()
                                        void* rdx_20 = *(rdi_2 + 0x10)
                                        int64_t rax_52 = sx.q(*(rax_51 + 0x38))
                                        
                                        if (rax_52.d s> *(rdx_20 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_20 + 0x30) + (rax_52 << 3)) != rax_51 + 0x30)
                                            break
                                else
                                    if ((*(rax_38 + 0x1f4) & 0x20) == 0
                                            || (*(rax_38 + 0x1f6) & 8) != 0)
                                        rax_49 = zx.q(*(rax_38 + 0x1f5))
                                    
                                    if (((*(rax_38 + 0x1f4) & 0x20) != 0
                                            && (*(rax_38 + 0x1f6) & 8) == 0) || (rax_49.b & 0x40) != 0
                                            || rax_49.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_30 = *(rax_38 + 0xb8)
                                    char* rsi_2 = *(rax_38 + 0x248)
                                    
                                    if (rcx_30 != 0)
                                        rax_49 = sub_1424359b0(rcx_30)
                                    
                                    if (rcx_30 == 0 || rax_49 == 0 || rsi_2 == rax_49)
                                        rcx_30.b = 1
                                    else
                                        rcx_30.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_49.b = 1
                                    else
                                        rax_49.b = 0
                                    
                                    if (rcx_30.b != 0 || rax_49.b != 0)
                                        rax_49.b = 1
                                    
                                    if (r15.b != 0 && rax_49.b != 0)
                                        goto label_14266c9e7
                    
                    r8_5 = var_68
                    rdx_16 = var_98[2]
                
                r14_3 += 1
                r12_1 += 8
                
                if (r14_3 s>= r8_5 i+ rdx_16)
                    goto label_14266ca41
            
            void* var_78_2 = rdi_2
            var_88 = r14_3
            
            if (var_84 != 0)
                break
            
            r14_1 = var_f0_1
        
        r13 = arg1
    
    if (var_50_2 != 0)
        char var_50_3 = 0
        int64_t var_58
        sub_142441560(var_a0, var_58)
        int64_t rcx_34 = var_70.q
        
        if (rcx_34 != 0)
            sub_140a74f90(rcx_34)
        
        int64_t rcx_35 = var_98[0].q
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
    
    result = QueryPerformanceCounter(&performanceCount)
    zmm6.d = zmm6.d f+ *(r13 + 0x74)
    r13[0x37].d = zmm6.d

__security_check_cookie(rax_1 ^ &var_148)
return result
