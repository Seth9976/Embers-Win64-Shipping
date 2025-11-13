// 函数: sub_140d3ccc0
// 地址: 0x140d3ccc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = arg5 | 0x10000000
arg5 = rdi_1

if (data_14399ea98() == 0)
    arg5 = rdi_1 | 0x8000000

int32_t result_13 = *(arg2 + 8)
sub_140d3c660()
bool z

if (0 == data_143e1adfc)
    data_143e1adfc = 0
    z = true
else
    data_143e1adfc
    z = false

bool rcx

if (not(z) && data_143de5480 != 0)
    rcx = GetCurrentThreadId() == data_143de5470

CRITICAL_SECTION* lpCriticalSection_1
CRITICAL_SECTION* lpCriticalSection

if (z || (data_143de5480 != 0 && rcx == 0))
    lpCriticalSection = &data_143e1dad0
    lpCriticalSection_1 = &data_143e1dad0
    EnterCriticalSection(&data_143e1dad0)
else
    lpCriticalSection = nullptr
    lpCriticalSection_1 = nullptr

int64_t* var_188 = &data_143e1db98
int32_t result_1
sub_1405ba560(&data_143e1db98, &result_1, arg1)
int64_t result = sx.q(result_1)
void* const rcx_3

if (result.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (result << 5) + data_143e1db98

int64_t* r13 = rcx_3 + 8

if (rcx_3 == 0)
    r13 = nullptr

if (r13 != 0)
    int64_t result_7 = r13[1]
    int64_t* var_178_1 = r13
    int128_t var_218_1
    int128_t* rax_13
    uint64_t rcx_4
    
    if (result_7 == 0 || *r13 != 0)
        int32_t rdi_4 = data_1439aadb8
        void* r9_1 = &data_1439aada0
        void* var_1a0_1 = &data_1439aada0
        rcx_4 = 0
        int32_t var_1a8_1 = 0
        int32_t r8_3 = 0
        int32_t var_1a4_1 = 1
        int32_t var_198_1 = 0xffffffff
        int64_t var_194_1 = 0
        
        if (rdi_4 != 0)
            void* rax_14 = data_1439aadb0
            
            if (rax_14 != 0)
                r9_1 = rax_14
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdi_4 - 1)
            int32_t rdx_7 = *r9_1
            
            if (rdx_7 != 0)
            label_140d3cf48:
                int32_t rax_21 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rax_21)
                rcx_4 = zx.q(temp0_4)
                int32_t var_1a4_2 = rax_21
                int32_t rax_22
                
                if (rax_21 == 0)
                    rax_22 = 0x20
                else
                    rax_22 = 0x1f - rcx_4.d
                
                var_194_1.d = r8_3 - rax_22 + 0x1f
                
                if (r8_3 - rax_22 + 0x1f s> rdi_4)
                    var_194_1.d = rdi_4
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_4.d)
                    r8_3 += 0x20
                    rcx_4 = zx.q(rcx_4.d + 1)
                    var_194_1:4.d = r8_3
                    var_1a8_1 = rcx_4.d
                    
                    if (rdx_8.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9_1 + (rdx_8 << 2) + 4)
                    int32_t var_198_2 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_140d3cf48
                
                var_194_1.d = rdi_4
        
        int128_t var_c8
        rax_13 = &var_c8
        int64_t* var_a0_1 = &data_1439aad90
        var_218_1 = 0xffffffff
        double temp0_5[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_c8 = (&data_1439aad90).o
        int128_t var_b8_1 = var_1a8_1.o
        int64_t var_a8_1 = temp0_5.q
    else
        int32_t rdi_3 = *(result_7 + 0x28)
        void* r9 = result_7 + 0x10
        int32_t var_1c4_1 = 1
        rcx_4 = 0
        int32_t var_1c8_1 = 0
        int32_t r8_1 = 0
        void* var_1c0_1 = r9
        int32_t var_1b8_1 = 0xffffffff
        int64_t var_1b4_1 = 0
        
        if (rdi_3 != 0)
            void* rax_3 = *(r9 + 0x10)
            
            if (rax_3 != 0)
                r9 = rax_3
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rdi_3 - 1)
            int32_t rdx_3 = *r9
            
            if (rdx_3 != 0)
            label_140d3ce58:
                int32_t rax_10 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                rcx_4 = zx.q(temp0_1)
                int32_t var_1c4_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - rcx_4.d
                
                var_1b4_1.d = r8_1 - rax_11 + 0x1f
                
                if (r8_1 - rax_11 + 0x1f s> rdi_3)
                    var_1b4_1.d = rdi_3
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx_4.d)
                    r8_1 += 0x20
                    rcx_4 = zx.q(rcx_4.d + 1)
                    var_1b4_1:4.d = r8_1
                    var_1c8_1 = rcx_4.d
                    
                    if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9 + (rdx_4 << 2) + 4)
                    int32_t var_1b8_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_140d3ce58
                
                var_1b4_1.d = rdi_3
        
        int128_t var_f8
        rax_13 = &var_f8
        int64_t result_9 = result_7
        var_218_1 = 0xffffffff
        double temp0_2[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_f8 = result_7.o
        int128_t var_e8_1 = var_1c8_1.o
        int64_t var_d8_1 = temp0_2.q
    
    int128_t zmm1 = rax_13[1]
    int128_t var_170 = *rax_13
    int64_t var_160_1 = zmm1.q
    int128_t var_150_1 = rax_13[2]
    
    if (result_7 != 0)
        result = result_7
    
    if (result_7 == 0 || *r13 != 0)
        result = 0
    
    bool r15_1 = result != 0
    bool var_140_1 = r15_1
    
    if (*r13 != 0 || result_7 != 0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rbx_1 = arg2
    uint64_t rsi
    rsi.b = 0
    char var_13e_1 = 0
    char result_3 = result.b
    
    while (true)
        int32_t var_154
        
        if (r15_1 == 0)
            result.b = result.b == 0
        else
            result.b = var_154 s< *(var_160_1 + 0x18)
        
        if (result.b == 0)
            break
        
        if (r15_1 == 0)
            rcx_4 = (zx.q((sbb.q(rcx_4, rcx_4, rsi.b != 0)).d) & 8) + r13
        else
            rcx_4 = (sx.q(var_154) << 4) + *var_170.q
        
        void* r14_1 = *rcx_4
        
        if ((*(r14_1 + 8) & arg4) == 0)
            int32_t rax_26 = *(r14_1 + 0xc)
            
            if (rax_26 s>= data_143e1d9b4)
                result = 0
            else
                uint32_t rdx_9 = zx.d(rax_26.w)
                
                if (rax_26 s< 0)
                    rax_26 += 0xffff
                    rdx_9 -= 0x10000
                
                result = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3)) + sx.q(rdx_9) * 0x18
            
            rcx_4 = zx.q(arg5)
            
            if ((*(result + 8) & rcx_4.d) == 0)
                int64_t rdi_5 = sx.q(rbx_1[1].d)
                int32_t rax_30 = (rdi_5 + 1).d
                rbx_1[1].d = rax_30
                
                if (rax_30 s> *(rbx_1 + 0xc))
                    rcx_4 = sub_1405a4d70(rbx_1)
                
                *(*rbx_1 + (rdi_5 << 3)) = r14_1
        
        if (r15_1 == 0)
            if (rsi.b == 0 && r13[1] != 0)
                result.b = 0
                rsi.b = 1
                result_3 = 0
                var_13e_1 = 1
                continue
            
            result.b = 1
            result_3 = 1
            rsi = 1
            var_13e_1 = 1
        else
            rcx_4 = &var_170:8
            int32_t var_158 = var_158 & not.d(var_170:0xc.d)
            sub_14059bdd0(rcx_4)
            result = zx.q(result_3)
            rsi = zx.q(var_13e_1)
            r15_1 = var_140_1
            r13 = var_178_1
    
    int32_t result_5 = rbx_1[1].d
    int32_t result_10 = result_13
    lpCriticalSection = lpCriticalSection_1
    
    if (result_10 != result_5)
        int64_t* r14_2 = var_188
        
        while (arg3 != 0)
            void* result_14 = sx.q(result_10)
            result_10 = result_5
            result = sx.q(result_5)
            int32_t result_8 = result_5
            void* result_15 = result_14
            result_1.q = result
            
            if (result_14 s< result)
                while (true)
                    int32_t result_2
                    sub_1405ba560(r14_2, &result_2, *(*arg2 + (result_14 << 3)))
                    result = sx.q(result_2)
                    void* const rcx_15
                    
                    if (result.d == 0xffffffff)
                        rcx_15 = nullptr
                    else
                        rcx_15 = (result << 5) + *r14_2
                    
                    void* r13_1 = rcx_15 + 8
                    
                    if (rcx_15 == 0)
                        r13_1 = nullptr
                    
                    if (r13_1 == 0)
                    label_140d3d56d:
                        result_14 += 1
                        result_15 = result_14
                        
                        if (result_14 s>= result_1.q)
                            result_5 = *(arg2 + 8)
                            result_10 = result_8
                            break
                    else
                        int64_t result_6 = *(r13_1 + 8)
                        void* var_138_1 = r13_1
                        int64_t result_11
                        
                        if (result_6 != 0)
                            result_11 = result_6
                        
                        if (result_6 == 0 || *r13_1 != 0)
                            result_11 = 0
                        
                        int32_t rcx_16 = 0
                        int32_t r8_7 = 0
                        int128_t* rax_43
                        int32_t var_1f0
                        int32_t* var_1e8
                        int32_t var_1e0
                        int64_t var_1dc
                        
                        if (result_11 == 0)
                            int32_t r11_1 = data_1439aadb8
                            int64_t var_230_1
                            var_230_1.d = 0
                            var_230_1:4.d = 1
                            int128_t var_228_1
                            var_228_1.q = &data_1439aada0
                            var_228_1:8.d = 0xffffffff
                            var_228_1:0xc.q = 0
                            
                            if (r11_1 != 0)
                                void* rax_44 = data_1439aadb0
                                void* r9_3 = &data_1439aada0
                                
                                if (rax_44 != 0)
                                    r9_3 = rax_44
                                
                                int32_t temp5_1
                                int32_t temp6_1
                                temp5_1:temp6_1 = sx.q(r11_1 - 1)
                                int32_t rdx_19 = *r9_3
                                
                                if (rdx_19 != 0)
                                label_140d3d36b:
                                    int32_t rax_51 = neg.d(rdx_19) & rdx_19
                                    uint64_t rflags_4
                                    int32_t temp0_8
                                    temp0_8, rflags_4 = _bit_scan_reverse(rax_51)
                                    var_230_1:4.d = rax_51
                                    int32_t rax_52
                                    
                                    if (rax_51 == 0)
                                        rax_52 = 0x20
                                    else
                                        rax_52 = 0x1f - temp0_8
                                    
                                    var_228_1:0xc.d = r8_7 - rax_52 + 0x1f
                                    
                                    if (r8_7 - rax_52 + 0x1f s> r11_1)
                                        var_228_1:0xc.d = r11_1
                                else
                                    while (true)
                                        int64_t rdx_20 = sx.q(rcx_16)
                                        r8_7 += 0x20
                                        rcx_16 += 1
                                        var_218_1.d = r8_7
                                        var_230_1.d = rcx_16
                                        
                                        if (rdx_20.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_19 = *(r9_3 + (rdx_20 << 2) + 4)
                                        var_228_1:8.d = 0xffffffff
                                        
                                        if (rdx_19 != 0)
                                            goto label_140d3d36b
                                    
                                    var_228_1:0xc.d = r11_1
                            
                            double zmm2[0x2] = var_228_1
                            var_1f0.q = &data_1439aad90
                            var_1e8.o = var_230_1.o
                            int64_t* var_40_1 = &data_1439aad90
                            int128_t var_68
                            rax_43 = &var_68
                            var_1dc:4.o = zmm2
                            double temp0_9[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
                            var_68 = var_1f0.o
                            int128_t var_58_1 = var_1e0.o
                            int64_t var_48_1 = temp0_9.q
                        else
                            int32_t rdi_6 = *(result_11 + 0x28)
                            int32_t* r9_2 = result_11 + 0x10
                            var_1f0 = 0
                            int32_t var_1ec_1 = 1
                            var_1e8 = r9_2
                            var_1e0 = 0xffffffff
                            var_1dc = 0
                            
                            if (rdi_6 != 0)
                                int32_t* rax_33 = *(r9_2 + 0x10)
                                
                                if (rax_33 != 0)
                                    r9_2 = rax_33
                                
                                int32_t temp7_1
                                int32_t temp8_1
                                temp7_1:temp8_1 = sx.q(rdi_6 - 1)
                                int32_t rdx_15 = *r9_2
                                
                                if (rdx_15 != 0)
                                label_140d3d26a:
                                    int32_t rax_40 = neg.d(rdx_15) & rdx_15
                                    uint64_t rflags_3
                                    int32_t temp0_6
                                    temp0_6, rflags_3 = _bit_scan_reverse(rax_40)
                                    int32_t var_1ec_2 = rax_40
                                    int32_t rax_41
                                    
                                    if (rax_40 == 0)
                                        rax_41 = 0x20
                                    else
                                        rax_41 = 0x1f - temp0_6
                                    
                                    var_1dc.d = r8_7 - rax_41 + 0x1f
                                    
                                    if (r8_7 - rax_41 + 0x1f s> rdi_6)
                                        var_1dc.d = rdi_6
                                else
                                    while (true)
                                        int64_t rdx_16 = sx.q(rcx_16)
                                        r8_7 += 0x20
                                        rcx_16 += 1
                                        var_1dc:4.d = r8_7
                                        var_1f0 = rcx_16
                                        
                                        if (rdx_16.d s>= (temp8_1 + (temp7_1 & 0x1f)) s>> 5)
                                            break
                                        
                                        rdx_15 = r9_2[rdx_16 + 1]
                                        var_1e0 = 0xffffffff
                                        
                                        if (rdx_15 != 0)
                                            goto label_140d3d26a
                                    
                                    var_1dc.d = rdi_6
                            
                            int128_t var_98
                            rax_43 = &var_98
                            int64_t result_12 = result_11
                            var_218_1 = 0xffffffff
                            double temp0_7[0x2] = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                            var_98 = result_11.o
                            int128_t var_88_1 = var_1f0.o
                            int64_t var_78_1 = temp0_7.q
                        zmm1 = rax_43[1]
                        int128_t var_130 = *rax_43
                        int128_t var_120_1 = zmm1
                        int128_t var_110_1 = rax_43[2]
                        
                        if (result_6 != 0)
                            result = result_6
                        
                        if (result_6 == 0 || *r13_1 != 0)
                            result = 0
                        
                        bool r15_2 = result != 0
                        bool var_100_1 = r15_2
                        
                        if (*r13_1 != 0 || result_6 != 0)
                            result.b = 0
                        else
                            result.b = 1
                        
                        r14_2.b = 0
                        char result_4 = result.b
                        char var_fe_1 = 0
                        
                        while (true)
                            int32_t r12_2 = var_120_1:0xc.d
                            
                            while (true)
                                if (r15_2 == 0)
                                    result.b = result.b == 0
                                else
                                    result.b = r12_2 s< *(var_120_1.q + 0x18)
                                
                                if (result.b == 0)
                                    result_14 = result_15
                                    r14_2 = var_188
                                    goto label_140d3d56d
                                
                                void* rax_56
                                
                                if (r15_2 == 0)
                                    uint64_t rax_57 = zx.q(r14_2.b)
                                    char temp9_1 = rax_57.b
                                    rax_57.b = neg.b(rax_57.b)
                                    rax_56 =
                                        (zx.q((sbb.q(rax_57, rax_57, temp9_1 != 0)).d) & 8) + r13_1
                                else
                                    rax_56 = (sx.q(r12_2) << 4) + *var_130.q
                                
                                void* rsi_1 = *rax_56
                                
                                if ((*(rsi_1 + 8) & arg4) == 0)
                                    int32_t rax_60 = *(rsi_1 + 0xc)
                                    
                                    if (rax_60 s>= data_143e1d9b4)
                                        result = 0
                                    else
                                        uint32_t rdx_21 = zx.d(rax_60.w)
                                        
                                        if (rax_60 s< 0)
                                            rax_60 += 0xffff
                                            rdx_21 -= 0x10000
                                        
                                        result = *(data_143e1d9a0 + (sx.q(rax_60 s>> 0x10) << 3))
                                            + sx.q(rdx_21) * 0x18
                                    
                                    if ((*(result + 8) & arg5) == 0)
                                        int64_t rdi_7 = sx.q(*(arg2 + 8))
                                        int32_t rax_64 = (rdi_7 + 1).d
                                        *(arg2 + 8) = rax_64
                                        
                                        if (rax_64 s> *(arg2 + 0xc))
                                            sub_1405a4d70(arg2)
                                        
                                        *(*arg2 + (rdi_7 << 3)) = rsi_1
                                
                                if (r15_2 != 0)
                                    var_120_1:8.d &= not.d(var_130:0xc.d)
                                    sub_14059bdd0(&var_130:8)
                                    result = zx.q(result_4)
                                    r14_2 = zx.q(var_fe_1)
                                    r15_2 = var_100_1
                                    r13_1 = var_138_1
                                    break
                                
                                if (r14_2.b == 0 && *(r13_1 + 8) != 0)
                                    result.b = 0
                                    r14_2.b = 1
                                    result_4 = 0
                                    var_fe_1 = 1
                                    continue
                                
                                result.b = 1
                                result_4 = 1
                                r14_2 = 1
                                var_fe_1 = 1
            
            if (result_10 == result_5)
                break
        
        lpCriticalSection = lpCriticalSection_1

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
