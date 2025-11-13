// 函数: sub_141f91a20
// 地址: 0x141f91a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
int32_t rsi = 0
int32_t var_b4 = 1
int64_t* r14 = &arg1[0x22]
int32_t var_a8 = 0xffffffff
int32_t result_1 = r14[5].d
void* r9 = &r14[2]
void* var_b0 = r9
int32_t rcx_1 = 0
int32_t var_b8 = 0
int32_t result_2 = 0
int64_t var_a4 = 0
int32_t r8 = 0
uint64_t result

if (result_1 != 0)
    void* rax = *(r9 + 0x10)
    result_2 = result_1
    
    if (rax != 0)
        r9 = rax
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(result_1 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141f91acd:
        int32_t rax_6 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_6)
        int32_t var_b4_1 = rax_6
        int32_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0x20
        else
            rax_7 = 0x1f - temp0_2
        
        result = zx.q(r8 - rax_7 + 0x1f)
        
        if (result.d s> result_1)
            result = zx.q(result_1)
        
        result_2 = result.d
        var_a4.d = result.d
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_a4:4.d = r8
            var_b8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_a4.d = result_1
                break
            
            int32_t var_a8_1 = 0xffffffff
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            
            if (rdx_3 != 0)
                goto label_141f91acd

int64_t* var_48 = r14
uint128_t var_90 = var_b8.o
int64_t var_80 = 0xffffffff
int64_t var_50 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int512_t zmm1
zmm1.o = var_90
uint128_t var_70 = r14.o
int128_t var_60 = zmm1.o
int32_t var_58

if (result_2 s< result_1)
    int32_t var_54
    int32_t rdi = var_54
    
    while (true)
        int64_t* r15_1 = var_70.q
        int64_t r9_1 = *r15_1
        void* r8_2
        r8_2.b = 1
        int64_t r12_1 = sx.q(rdi) * 3
        void* rax_10
        rax_10, zmm1 =
            sub_142168c50(*(*(arg1[5] + 0x58) + 0x150), r9_1 + (r12_1 << 2), r8_2.b, r9_1.d)
        char rax_12
        
        if (rax_10 == 0)
            rax_12 = sub_14216b800(*(*(arg1[5] + 0x58) + 0x150), *r15_1 + (r12_1 << 2), 1)
        
        if (rax_10 != 0 || rax_12 != 0)
            sub_141f967d0(r14, rdi)
        
        var_58 &= not.d(var_70:0xc.d)
        sub_14059bdd0(&var_70:8)
        rdi = var_54
        
        if (rdi s>= *(var_60.q + 0x18))
            break
        
        r14 = var_48

if (arg1[0x20].d != 0)
    char rax_15 = sub_142164720(*(arg1[5] + 0x58))
    void* r9_2 = arg1[5]
    int32_t rax_16 = arg1[0x12].d
    arg1[0x12].d = (((zx.d(rax_15) << 6 | rax_16) ^ rax_16) & 0x40) ^ rax_16
    int64_t* r11_2 = *(r9_2 + 0x58)
    result = data_143f3c940
    
    if (*(r11_2 + 0x704) == 0xffffffff)
        result = data_143f3c928
    
    int32_t rcx_16 = *result
    uint128_t zmm0
    
    if (rcx_16 != 0)
        zmm0 = _mm_cvtepi32_ps(zx.o(rcx_16))
    
    if (rcx_16 == 0 || not(zmm0.d f<= r11_2[0xbb].d))
        int64_t performanceCount
        
        if (arg1[0x23].d != *(arg1 + 0x144))
        label_141f91f6e:
            QueryPerformanceCounter(&performanceCount)
            zmm0.q = float.d(performanceCount)
            zmm0.q = zmm0.q f* data_143d796f8
            zmm0.q = zmm0.q f+ 16777216.0
            zmm0.q = zmm0.q f- arg1[0x21]
            
            if (not(zmm0.q f<= 30.0))
                QueryPerformanceCounter(&performanceCount)
                zmm0.q = float.d(performanceCount)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ 16777216.0
                arg1[0x21] = zmm0.q
        else
            if (*(arg1 + 0x34) != 0xffffffff && *(r9_2 + 0x1420) != *(r9_2 + 0x144c))
                void* r8_4 = r9_2 + 0x1450
                void* rcx_17 = *(r8_4 + 8)
                int64_t r10 = sx.q(arg1[0xf].d)
                
                if (rcx_17 != 0)
                    r8_4 = rcx_17
                
                int32_t rax_19 = *(r8_4 + (((sx.q(*(r9_2 + 0x1460)) - 1) & r10) << 2))
                
                if (rax_19 == 0xffffffff)
                    goto label_141f91cca
                
                int64_t rdx_12 = *(r9_2 + 0x1418)
                
                while (true)
                    int32_t* rcx_19 = sx.q(rax_19) << 5
                    
                    if (*(rcx_19 + rdx_12) == r10.d)
                        break
                    
                    rax_19 = *(rcx_19 + rdx_12 + 0x18)
                    
                    if (rax_19 == 0xffffffff)
                        goto label_141f91cca
                
                if (rax_19 != 0xffffffff)
                    goto label_141f91f6e
                
                goto label_141f91cca
            
        label_141f91cca:
            
            if ((*(*r11_2 + 0x3a0))(r11_2, zx.q(arg1[0xf].d)) != 0)
                goto label_141f91f6e
            
            int32_t i = 0
            
            if (arg1[0x20].d s> 0)
                int64_t rdi_1 = 0
                
                do
                    zmm1 = sub_141f91140(arg1, *(arg1[0x1f] + rdi_1), zmm1)
                    int64_t* rcx_22 = *(arg1[0x1f] + rdi_1)
                    
                    if (rcx_22 != 0)
                        (**rcx_22)(rcx_22, 1)
                    
                    i += 1
                    rdi_1 += 8
                while (i s< arg1[0x20].d)
            
            arg1[0x20].d = 0
            
            if (*(arg1 + 0x104) != 0)
                sub_1405c5570(&arg1[0x1f], 0)
            
            int32_t var_b8_1 = 0
            int32_t r10_1 = arg1[0x1a].d
            int32_t var_b4_2 = 1
            int32_t rcx_24 = 0
            void* var_b0_1 = &arg1[0x17]
            int32_t var_a8_2 = 0xffffffff
            var_a4.d = 0
            var_a4:4.d = 0
            
            if (r10_1 != 0)
                void* rax_24 = arg1[0x19]
                void* r8_5 = &arg1[0x17]
                
                if (rax_24 != 0)
                    r8_5 = rax_24
                
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = sx.q(r10_1 - 1)
                int32_t rdx_18 = *r8_5
                
                if (rdx_18 != 0)
                label_141f91dc7:
                    int32_t rax_31 = ((rdx_18 - 1) & rdx_18) ^ rdx_18
                    uint64_t rflags_2
                    int32_t temp0_5
                    temp0_5, rflags_2 = _bit_scan_reverse(rax_31)
                    int32_t var_b4_3 = rax_31
                    int32_t rax_32
                    
                    if (rax_31 == 0)
                        rax_32 = 0x20
                    else
                        rax_32 = 0x1f - temp0_5
                    
                    var_a4.d = rcx_24 - rax_32 + 0x1f
                    
                    if (rcx_24 - rax_32 + 0x1f s> r10_1)
                        var_a4.d = r10_1
                else
                    while (true)
                        int64_t rdx_19 = sx.q(rsi)
                        rcx_24 += 0x20
                        rsi += 1
                        var_a4:4.d = rcx_24
                        var_b8_1 = rsi
                        
                        if (rdx_19.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_18 = *(r8_5 + (rdx_19 << 2) + 4)
                        int32_t var_a8_3 = 0xffffffff
                        
                        if (rdx_18 != 0)
                            goto label_141f91dc7
                    
                    var_a4.d = r10_1
            
            int32_t rdx_21 = arg1[0x1a].d
            var_70.q = &arg1[0x15]
            var_a4.d = rdx_21
            var_58.o = 0xffffffff
            var_70 = var_b8_1.o
            int32_t rsi_1 = 0xffffffff << (rdx_21 & 0x1f).b
            zmm0 = var_70
            int32_t r8_7 = rdx_21 s>> 5
            int32_t r9_4 = rdx_21 & 0xffffffe0
            var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
            int32_t var_a8_4 = rsi_1
            zmm1.o = var_60
            int64_t* var_98
            var_98.o = zmm0
            var_90 = zmm1.o
            
            if (rdx_21 != r10_1)
                void* rax_36 = arg1[0x19]
                void* r11_3 = &arg1[0x17]
                
                if (rax_36 != 0)
                    r11_3 = rax_36
                
                int32_t temp4_1
                int32_t temp5_1
                temp4_1:temp5_1 = sx.q(r10_1 - 1)
                int32_t rdx_25 = *(r11_3 + (sx.q(r8_7) << 2)) & rsi_1
                
                if (rdx_25 != 0)
                label_141f91e96:
                    int32_t rax_42 = ((rdx_25 - 1) & rdx_25) ^ rdx_25
                    uint64_t rflags_3
                    int32_t temp0_7
                    temp0_7, rflags_3 = _bit_scan_reverse(rax_42)
                    int32_t r13_1
                    
                    if (rax_42 == 0)
                        r13_1 = 0x20
                    else
                        r13_1 = 0x1f - temp0_7
                    
                    var_a4.d = r9_4 - r13_1 + 0x1f
                    
                    if (r9_4 - r13_1 + 0x1f s> r10_1)
                        var_a4.d = r10_1
                else
                    while (true)
                        int64_t rcx_28 = sx.q(r8_7)
                        r9_4 += 0x20
                        r8_7 += 1
                        
                        if (rcx_28.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_25 = *(r11_3 + (rcx_28 << 2) + 4)
                        var_a8_4 = 0xffffffff
                        
                        if (rdx_25 != 0)
                            goto label_141f91e96
                    
                    var_a4.d = r10_1
            
            while (true)
                int64_t rdx_26 = sx.q(var_80:4.d)
                int32_t rax_35
                
                if (rdx_26.d != (var_a8_4.q u>> 0x20).d || var_90:8.q != &arg1[0x17])
                    rax_35.b = 0
                else
                    rax_35.b = 1
                
                if (rax_35.b == 0 || var_98 != &arg1[0x15])
                    rax_35.b = 1
                else
                    rax_35.b = 0
                
                if (rax_35.b == 0)
                    break
                
                int64_t rax_44 = rdx_26 << 5
                rdx_26.b = 1
                sub_141faa150(*(rax_44 + *var_98 + 8), rdx_26.b)
                var_80.d &= not.d(var_90:4.d)
                sub_14059bdd0(&var_90)
            
            int64_t* rdi_5 = *(arg1[5] + 0x68)
            
            if (rdi_5 != 0)
                void* rax_48 = sub_14254d5d0()
                void* rcx_34 = rdi_5[2]
                int64_t rax_49 = sx.q(*(rax_48 + 0x38))
                
                if (rax_49.d s<= *(rcx_34 + 0x38)
                        && *(*(rcx_34 + 0x30) + (rax_49 << 3)) == rax_48 + 0x30)
                    (*(*rdi_5 + 0x2e0))(rdi_5, &arg1[0xf], 0)
            
            sub_140eb8900(&arg1[0x49], 0)
        
        QueryPerformanceCounter(&performanceCount)
        zmm1.o = zx.o(0)
        zmm0.q = data_143d796f8 f* 1000.0
        void* rcx_40 = *(arg1[5] + 0x58)
        zmm1.q = float.d(zx.q(performanceCount.d - performanceCount_1.d))
        zmm1.q = zmm1.q f* zmm0.q
        zmm1.o = _mm_cvtpd_ps(zmm1.o)
        zmm1.d = zmm1.d f+ *(rcx_40 + 0x5d8)
        *(rcx_40 + 0x5d8) = zmm1.d
    
    result.b = arg1[0x20].d == 0
else
    result.b = 1

return result
