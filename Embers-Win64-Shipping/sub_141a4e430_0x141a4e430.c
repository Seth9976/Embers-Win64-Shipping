// 函数: sub_141a4e430
// 地址: 0x141a4e430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_438
int64_t rax_1 = __security_cookie ^ &var_438
int64_t* rcx = arg2[2]
int64_t* r13 = arg2
uint64_t result_5 = (*(*rcx + 8))(rcx, arg1)
int32_t rdx_5 = (*(result_5 + 0x17c) ^ *(arg1 + 0x34)) | (*(result_5 + 0x178) ^ arg1[3].d)
    | (*(result_5 + 0x174) ^ *(arg1 + 0x2c)) | (*(result_5 + 0x170) ^ *(arg1 + 0x28))
void** const var_e8
int64_t var_c0
int32_t var_a0
int64_t var_90
int32_t var_88

if (rdx_5 != 0)
    int128_t* var_e0_1 = arg1
    var_e8 = &data_14302e078
    uint64_t result_9 = result_5
    int64_t var_d0
    __builtin_memset(&var_d0, 0, 0x2c)
    int32_t var_a4_1 = 0x80
    int32_t var_a0_1 = 0xffffffff
    int32_t var_9c_1 = 0
    var_90 = 0
    var_88 = 0
    sub_141a4f930(&var_e8)
    var_88 = 0
    
    if (var_90 != 0)
        sub_140a74f90(var_90)
    
    int64_t var_c8
    var_c8.d = 0
    var_a0 = 0xffffffff
    int32_t var_9c_2 = 0
    sub_14059a8e0(&var_c0, 0)
    int64_t var_b0
    
    if (var_b0 != 0)
        sub_140a74f90(var_b0)
    
    int64_t rcx_10 = var_d0
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

int64_t var_3a4 = 0
int32_t rcx_11 = 0
int32_t var_3b4 = 1
int32_t r8 = 0
int32_t var_3b8 = 0
int32_t rdi = *(result_5 + 0x28)
int32_t var_3a8 = 0xffffffff

if (rdi != 0)
    void* rax_5 = *(result_5 + 0x20)
    void* r9_1 = result_5 + 0x10
    
    if (rax_5 != 0)
        r9_1 = rax_5
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rdi - 1)
    int32_t rdx_8 = *r9_1
    
    if (rdx_8 != 0)
    label_141a4e628:
        int32_t rax_12 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
        int32_t var_3b4_1 = rax_12
        int32_t rax_13
        
        if (rax_12 == 0)
            rax_13 = 0x20
        else
            rax_13 = 0x1f - temp0_2
        
        var_3a4.d = r8 - rax_13 + 0x1f
        
        if (r8 - rax_13 + 0x1f s> rdi)
            var_3a4.d = rdi
    else
        while (true)
            int64_t rdx_9 = sx.q(rcx_11)
            r8 += 0x20
            rcx_11 += 1
            var_3a4:4.d = r8
            var_3b8 = rcx_11
            
            if (rdx_9.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r9_1 + (rdx_9 << 2) + 4)
            var_3a8 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141a4e628
        
        var_3a4.d = rdi

int32_t rdx_10 = *(result_5 + 0x28)
double zmm2[0x2] = var_3a8.o
uint64_t result_2 = result_5
double var_380[0x2] = zmm2
int32_t r14 = 0xffffffff << (rdx_10.b & 0x1f)
int128_t var_390 = var_3b8.o
int32_t r8_3 = rdx_10 s>> 5
int32_t r9_3 = rdx_10 & 0xffffffe0
zmm2 = _mm_unpackhi_pd(zmm2, zmm2[0])
int64_t var_1d8 = zmm2.q
int32_t var_3a8_1 = r14
var_3a4.d = rdx_10
int128_t var_1f8 = result_2.o
int128_t var_1e8 = var_390

if (rdx_10 != rdi)
    void* rax_15 = *(result_5 + 0x20)
    void* r10_2 = result_5 + 0x10
    
    if (rax_15 != 0)
        r10_2 = rax_15
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rdi - 1)
    int32_t rdx_14 = *(r10_2 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_14 != 0)
    label_141a4e702:
        int32_t rax_22 = neg.d(rdx_14) & rdx_14
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
        int32_t r11_1
        
        if (rax_22 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_3a4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rdi)
            var_3a4.d = rdi
    else
        while (true)
            int64_t rcx_16 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_16.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_14 = *(r10_2 + (rcx_16 << 2) + 4)
            var_3a8_1 = 0xffffffff
            
            if (rdx_14 != 0)
                goto label_141a4e702
        
        var_3a4.d = rdi

while (true)
    int64_t rax_24 = sx.q(var_1e8:0xc.d)
    int64_t rcx_18 = var_1f8.q
    
    if (rax_24.d == (var_3a8_1.q u>> 0x20).d && var_1e8.q == result_5 + 0x10 && rcx_18 == result_5)
        char rcx_21 = r13[7].b
        uint64_t rsi
        int64_t r14_1
        
        if (rcx_21 == 2)
        label_141a4e7fa:
            char rdx_19 = r13[9].b
            
            if (rdx_19 != 2)
                char rax_31 = r13[0xa].b
                
                if (rax_31 != 2)
                    int32_t r9_6 = *(r13 + 0x54)
                    int32_t temp5_1 = *(r13 + 0x4c)
                    
                    if (temp5_1 s> r9_6 || (temp5_1 == r9_6 && (rdx_19 == 0 || rax_31 == 0)))
                        goto label_141a4e7dc
            
            char r10_3 = r13[8].b
            void* r14_2 = &r13[0xa]
            
            if (r10_3 != 2)
                if (*r14_2 != 2)
                    int32_t r9_7 = *(r14_2 + 4)
                    int32_t temp6_1 = *(r13 + 0x44)
                    
                    if (temp6_1 s< r9_7)
                        r14_2 = &r13[8]
                    else if (temp6_1 s<= r9_7 && r10_3 == 0)
                        r14_2 = &r13[8]
                else
                    r14_2 = &r13[8]
            
            int64_t* rsi_1
            
            if (rcx_21 == 2)
                rsi_1 = 0x48
            else if (rdx_19 != 2)
                int32_t rax_33 = *(r13 + 0x3c)
                int32_t temp7_1 = *(r13 + 0x4c)
                
                if (rax_33 s> temp7_1)
                    rsi_1 = 0x38
                else if (rax_33 s>= temp7_1)
                    int32_t rax_34 = 0x48
                    
                    if (rcx_21 == 0)
                        rax_34 = 0x38
                    
                    rsi_1 = zx.q(rax_34)
                else
                    rsi_1 = 0x48
            else
                rsi_1 = 0x38
            
            rsi = *(rsi_1 + r13)
            r14_1 = *r14_2
        else
            char rax_30 = r13[8].b
            
            if (rax_30 == 2)
                goto label_141a4e7fa
            
            int32_t rdx_18 = *(r13 + 0x3c)
            int32_t temp4_1 = *(r13 + 0x44)
            
            if (rdx_18 s<= temp4_1 && (rdx_18 != temp4_1 || (rcx_21 != 0 && rax_30 != 0)))
                goto label_141a4e7fa
            
        label_141a4e7dc:
            int32_t var_404_1 = 0
            r14_1 = 0.q
            int32_t var_3fc_1 = 0
            rsi = 0.q
        
        uint64_t var_360 = rsi
        uint64_t var_3c8 = rsi
        char var_400
        var_400.q = r14_1
        int64_t var_3c0 = r14_1
        sub_141a2ee20(&var_e8, r13)
        void* r15_1 = result_5 + 0x290
        char var_408
        var_408.q = r15_1
        int64_t var_3f8
        uint64_t result
        uint64_t r9_8
        result, r9_8 = sub_141a2ff30(&var_3f8, r15_1, rsi)
        uint64_t result_1
        uint64_t result_4 = result_1
        
        while (true)
            int64_t rdx_22 = var_3f8
            int32_t rbx_2 = var_3c8:4.d
            int32_t r11_2 = var_3c0:4.d
            uint64_t var_3f0
            int128_t* r8_29
            int128_t* r15_2
            
            while (true)
                if (result_4.d != 0xffffffff || result_1:4.d == 0)
                    if (rdx_22.b == 2 || var_3f0.b == 2)
                    label_141a4e93d:
                        
                        if (rsi.b == 2 || r14_1.b == 2)
                        label_141a4e96f:
                            
                            if (var_3f0.b == 2 || rsi.b == 2)
                                result.b = 1
                            else
                                result.b = 0
                            
                            char r10_4
                            
                            if (rdx_22.b == 2 || r14_1.b == 2)
                                r10_4 = 1
                            else
                                r10_4 = 0
                            
                            r9_8.b = 1
                            bool r8_8 = true
                            uint64_t rcx_24
                            
                            if (result.b == 0)
                                uint32_t rax_37 = (var_3f0 u>> 0x20).d
                                r9_8.b = rax_37 s> rbx_2
                                rax_37.b = rax_37 s>= rbx_2
                                
                                if (var_3f0.b != 1 || rsi.b != 1)
                                    rcx_24.b = 0
                                else
                                    rcx_24 = 1
                                
                                r9_8 = zx.q(r9_8.b)
                                result = zx.q(rax_37.b)
                                
                                if (rcx_24.b != 0)
                                    r9_8 = zx.q(result.d)
                            
                            if (r10_4 == 0)
                                uint32_t rax_39 = (rdx_22 u>> 0x20).d
                                r8_8 = rax_39 s< r11_2
                                rax_39.b = rax_39 s<= r11_2
                                
                                if (rdx_22.b != 1 || r14_1.b != rdx_22.b)
                                    rcx_24.b = 0
                                else
                                    rcx_24 = zx.q(rdx_22.b)
                                
                                result = zx.q(rax_39.b)
                                
                                if (rcx_24.b != 0)
                                    r8_8 = result.b
                            
                            if (r9_8.b != 0 && r8_8 != 0)
                                int64_t var_1b8 = r13[0x10]
                                int32_t var_1b0_1 = r13[0x11].d
                                void var_308
                                sub_141a57190(&r13[0xc], &var_308, &var_1b8)
                                int128_t zmm0_1 = var_3f8.o
                                rdx_22 = zmm0_1.q
                                int128_t var_338 = zmm0_1
                                int64_t rbx_3
                                
                                if (rdx_22.b != 2)
                                    void* r8_10 = &var_308
                                    
                                    if (rdx_22.b != 1)
                                        int32_t var_224_1 = 0
                                        char var_220_1 = 0
                                        void var_140
                                        int32_t var_21c_1 =
                                            *sub_141a352a0(&var_140, var_3f8:4.d.q, r8_10)
                                        rbx_3 = var_220_1.q
                                    else
                                        int32_t var_234_1 = 0
                                        char var_230_1 = 1
                                        void var_148
                                        int32_t var_22c_1 =
                                            *sub_141a352a0(&var_148, (rdx_22 u>> 0x20).d.q, r8_10)
                                        rbx_3 = var_230_1.q
                                    
                                    rdx_22 = var_3f8
                                else
                                    int32_t var_23c_1 = 0
                                    rbx_3 = rdx_22.b.q
                                
                                int64_t rax_47 = var_338:8.q
                                int64_t rax_48
                                
                                if (rax_47.b != 2)
                                    void* r8_11 = &var_308
                                    
                                    if (rax_47.b != 1)
                                        int32_t var_1fc_1 = 0
                                        char var_1d0_1 = 0
                                        void var_130
                                        int32_t var_1cc_1 =
                                            *sub_141a352a0(&var_130, var_338:0xc.d.q, r8_11)
                                        rax_48 = var_1d0_1.q
                                    else
                                        int32_t var_20c_1 = 0
                                        char var_208_1 = 1
                                        void var_138
                                        int32_t var_204_1 =
                                            *sub_141a352a0(&var_138, (rax_47 u>> 0x20).d.q, r8_11)
                                        rax_48 = var_208_1.q
                                    
                                    rdx_22 = var_3f8
                                else
                                    int32_t var_214_1 = 0
                                    rax_48 = rax_47.b.q
                                
                                r13 = arg2
                                char r9_9 = r13[5].b
                                int64_t var_358 = rbx_3
                                int64_t var_350 = rax_48
                                var_338.q = &r13[5]
                                int64_t rcx_31
                                
                                if (r9_9 == 2)
                                label_141a4ec0b:
                                    uint32_t rcx_33
                                    uint32_t r8_13
                                    
                                    if (rbx_3.b != 2 && rax_48.b != 2)
                                        rcx_33 = (rbx_3 u>> 0x20).d
                                        r8_13 = (rax_48 u>> 0x20).d
                                    
                                    if (rbx_3.b != 2 && rax_48.b != 2 && (rcx_33 s> r8_13 ||
                                            (rcx_33 == r8_13 && (rbx_3.b == 0 || rax_48.b == 0))))
                                        int32_t var_2dc_1 = 0
                                        rcx_31 = 0.q
                                        int32_t var_2e4_1 = 0
                                        result = 0.q
                                    else
                                        r10_4 = r13[6].b
                                        void* rcx_34 = &r13[6]
                                        
                                        if (r10_4 == 2)
                                            rcx_34 = &var_350
                                        else if (rax_48.b != 2)
                                            uint32_t rax_55 = (rax_48 u>> 0x20).d
                                            int32_t temp9_1 = *(rcx_34 + 4)
                                            
                                            if (temp9_1 s>= rax_55)
                                                if (temp9_1 s<= rax_55)
                                                    void* rax_56 = &var_350
                                                    
                                                    if (r10_4 == 0)
                                                        rax_56 = rcx_34
                                                    
                                                    rcx_34 = rax_56
                                                else
                                                    rcx_34 = &var_350
                                        
                                        void* rax_57
                                        
                                        if (r9_9 == 2)
                                            rax_57 = &var_358
                                        else if (rbx_3.b != 2)
                                            uint32_t rbx_4 = (rbx_3 u>> 0x20).d
                                            int32_t temp10_1 = *(r13 + 0x2c)
                                            
                                            if (temp10_1 s<= rbx_4)
                                                rax_57 = &var_358
                                                
                                                if (temp10_1 s>= rbx_4 && r9_9 == 0)
                                                    rax_57 = &r13[5]
                                            else
                                                rax_57 = &r13[5]
                                        else
                                            rax_57 = &r13[5]
                                        
                                        result = *rax_57
                                        rcx_31 = *rcx_34
                                else
                                    r10_4 = r13[6].b
                                    
                                    if (r10_4 == 2)
                                        goto label_141a4ec0b
                                    
                                    int32_t rcx_30 = *(r13 + 0x2c)
                                    int32_t temp8_1 = *(r13 + 0x34)
                                    
                                    if (rcx_30 s<= temp8_1
                                            && (rcx_30 != temp8_1 || (r9_9 != 0 && r10_4 != 0)))
                                        goto label_141a4ec0b
                                    
                                    int32_t var_2ec_1 = 0
                                    rcx_31 = 0.q
                                    int32_t var_1c4_1 = 0
                                    result = 0.q
                                
                                int64_t var_320_1 = rcx_31
                                
                                if (result.b == 2 || rcx_31.b == 2)
                                label_141a4ecf7:
                                    zmm0_1 = result.o
                                    result_2.o = zmm0_1
                                    var_c0.o = zmm0_1
                                    void var_100
                                    var_a0.o = *sub_141a6aa80(&var_88, &var_100, &result_2)
                                    sub_141a36ac0(&var_e8)
                                    rsi.b = 0
                                    sub_141a2eb00(&result_2, r15_1, result_1)
                                    int128_t zmm1_1 = result_2.o
                                    var_1f8 = zmm1_1
                                    var_1e8.q = var_390:8.q
                                    result, r9_8 = sub_141a2eb00(&var_3b8, zmm1_1.q, -1)
                                    void* i_1 = var_1f8.q
                                    int32_t rdi_3 = var_1e8.d
                                    void* const i = var_1f8:8.q
                                    
                                    while (i_1 != var_3b8.q || i != result_5 + 0x10
                                            || rdi_3 != var_3a8_1)
                                        int64_t rax_59 = sx.q(*(i + 0x1c))
                                        int64_t* rax_62
                                        
                                        if (rax_59.d == 0xffffffff)
                                            int64_t var_198 = 0
                                            rax_62 = &var_198
                                            int32_t var_190_1 = 0
                                        else
                                            int64_t rdx_32 = *(i_1 + 0x40)
                                            int64_t r8_18 = rax_59 * 3
                                            int32_t var_1a0_1 = *(rdx_32 + (r8_18 << 2) + 4)
                                            int64_t var_1a8
                                            rax_62 = &var_1a8
                                            var_1a8 = sx.q(*(rdx_32 + (r8_18 << 2))) * 0x1c
                                                + *(i_1 + 0x50)
                                        
                                        int32_t* r13_2 = sx.q(rdi_3) * 0x1c + (*rax_62).q
                                        int128_t* rax_65 = sub_140d3c6e0(r13_2)
                                        
                                        if (rax_65 != 0)
                                            void* rax_67
                                            rax_67, r9_8 = sub_140d226f0(rax_65, sub_141a7a150())
                                            char rcx_43 = r13[0xb].b
                                            
                                            if (rcx_43 == 0 || ((rcx_43 & 1) != 0 && rax_67 != 0
                                                && (*(rax_67 + 0x50) & 4) != 0))
                                            label_141a4ee65:
                                                var_90.b = r13_2[6].b
                                                rsi.b = 1
                                                sub_141a4cb90(arg1, rax_65, &r13_2[2], &var_e8, 
                                                    arg3)
                                            else if ((rcx_43 & 2) != 0 && rax_67 != 0
                                                    && (*(rax_67 + 0x50) & 8) != 0)
                                                goto label_141a4ee65
                                        
                                        rdi_3 += 1
                                        
                                        do
                                            int64_t rax_70 = sx.q(*(i + 0x1c))
                                            
                                            if (rax_70.d == 0xffffffff)
                                                int64_t var_178 = 0
                                                result = &var_178
                                                int32_t var_170_1 = 0
                                            else
                                                int64_t rdx_35 = *(i_1 + 0x40)
                                                int64_t r8_20 = rax_70 * 3
                                                int32_t var_180_1 = *(rdx_35 + (r8_20 << 2) + 4)
                                                int64_t var_188
                                                result = &var_188
                                                var_188 = sx.q(*(rdx_35 + (r8_20 << 2))) * 0x1c
                                                    + *(i_1 + 0x50)
                                            
                                            result_2.o = *result
                                            
                                            if (rdi_3 s>= 0 && rdi_3 s< var_390.d)
                                                break
                                            
                                            if (*(i + 0x10) != 0xffffffff || *(i + 0x14) == 0)
                                                int64_t rdx_36 = *(i + 0x10)
                                                
                                                if (rdx_36.d == 0xffffffff)
                                                    i = i_1
                                                else
                                                    result = sx.q((rdx_36 u>> 0x20).d)
                                                    i = ((sx.q(
                                                        *(*(i_1 + 0x20) + sx.q(rdx_36.d) * 0xc))
                                                        + result) << 5) + *(i_1 + 0x30)
                                            else
                                                i = nullptr
                                            
                                            rdi_3 = 0
                                        while (i != 0)
                                    
                                    r14_1 = var_400.q
                                    bool cond:20_1 = rsi.b != 0
                                    rsi = var_360
                                    r13 = arg2
                                    
                                    if (not(cond:20_1))
                                        int64_t var_168 = r13[0x10]
                                        int32_t var_160_1 = r13[0x11].d
                                        void var_2fc
                                        sub_141a57190(&r13[0xc], &var_2fc, &var_168)
                                        int128_t zmm0_4 = var_3f8.o
                                        int64_t rax_77 = zmm0_4.q
                                        result_2.o = zmm0_4
                                        int64_t rbx_8
                                        
                                        if (rax_77.b != 2)
                                            void* r8_22 = &var_2fc
                                            
                                            if (rax_77.b != 1)
                                                int32_t var_2b4_1 = 0
                                                char var_2b0_1 = 0
                                                void var_120
                                                int32_t var_2ac_1 =
                                                    *sub_141a352a0(&var_120, var_3f8:4.d.q, r8_22)
                                                rbx_8 = var_2b0_1.q
                                            else
                                                int32_t var_2c4_1 = 0
                                                char var_2c0_1 = 1
                                                void var_128
                                                int32_t var_2bc_1 = *sub_141a352a0(&var_128, 
                                                    (rax_77 u>> 0x20).d.q, r8_22)
                                                rbx_8 = var_2c0_1.q
                                        else
                                            int32_t var_2cc_1 = 0
                                            rbx_8 = rax_77.b.q
                                        
                                        int64_t rax_84 = var_390.q
                                        int64_t rax_85
                                        
                                        if (rax_84.b != 2)
                                            void* r8_23 = &var_2fc
                                            
                                            if (rax_84.b != 1)
                                                int32_t var_28c_1 = 0
                                                char var_288_1 = 0
                                                void var_110
                                                int32_t var_284_1 =
                                                    *sub_141a352a0(&var_110, var_390:4.d.q, r8_23)
                                                rax_85 = var_288_1.q
                                            else
                                                int32_t var_29c_1 = 0
                                                char var_298_1 = 1
                                                void var_118
                                                int32_t var_294_1 = *sub_141a352a0(&var_118, 
                                                    (rax_84 u>> 0x20).d.q, r8_23)
                                                rax_85 = var_298_1.q
                                        else
                                            int32_t var_2a4_1 = 0
                                            rax_85 = rax_84.b.q
                                        
                                        char* r12_3 = var_338.q
                                        int64_t var_348 = rbx_8
                                        int64_t var_340 = rax_85
                                        char r8_24 = *r12_3
                                        int64_t var_318_1
                                        int64_t rax_93
                                        
                                        if (r8_24 == 2)
                                        label_141a4f12b:
                                            uint32_t rcx_55
                                            uint32_t rdx_44
                                            
                                            if (rbx_8.b != 2 && rax_85.b != 2)
                                                rcx_55 = (rbx_8 u>> 0x20).d
                                                rdx_44 = (rax_85 u>> 0x20).d
                                            
                                            if (rbx_8.b != 2 && rax_85.b != 2 && (rcx_55 s> rdx_44
                                                    || (rcx_55 == rdx_44
                                                    && (rbx_8.b == 0 || rax_85.b == 0))))
                                                int32_t var_26c_1 = 0
                                                var_318_1 = 0.q
                                                int32_t var_264_1 = 0
                                                rax_93 = 0.q
                                            else
                                                char r9_13 = r12_3[8]
                                                void* rcx_56 = &r12_3[8]
                                                
                                                if (r9_13 == 2)
                                                    rcx_56 = &var_340
                                                else if (rax_85.b != 2)
                                                    uint32_t rax_95 = (rax_85 u>> 0x20).d
                                                    int32_t temp13_1 = *(rcx_56 + 4)
                                                    
                                                    if (temp13_1 s>= rax_95)
                                                        if (temp13_1 s<= rax_95)
                                                            void* rax_96 = &var_340
                                                            
                                                            if (r9_13 == 0)
                                                                rax_96 = rcx_56
                                                            
                                                            rcx_56 = rax_96
                                                        else
                                                            rcx_56 = &var_340
                                                
                                                if (r8_24 == 2)
                                                    r12_3 = &var_348
                                                else if (rbx_8.b != 2)
                                                    uint32_t rbx_9 = (rbx_8 u>> 0x20).d
                                                    int32_t temp14_1 = *(r12_3 + 4)
                                                    
                                                    if (temp14_1 s<= rbx_9)
                                                        if (temp14_1 s>= rbx_9)
                                                            char* rax_97 = &var_348
                                                            
                                                            if (r8_24 == 0)
                                                                rax_97 = r12_3
                                                            
                                                            r12_3 = rax_97
                                                        else
                                                            r12_3 = &var_348
                                                
                                                var_318_1 = *r12_3
                                                rax_93 = *rcx_56
                                        else
                                            char r9_12 = r12_3[8]
                                            
                                            if (r9_12 == 2)
                                                goto label_141a4f12b
                                            
                                            int32_t rcx_53 = *(r12_3 + 4)
                                            int32_t temp12_1 = *(r12_3 + 0xc)
                                            
                                            if (rcx_53 s<= temp12_1 && (rcx_53 != temp12_1
                                                    || (r8_24 != 0 && r9_12 != 0)))
                                                goto label_141a4f12b
                                            
                                            int32_t var_27c_1 = 0
                                            var_318_1 = 0.q
                                            int32_t var_274_1 = 0
                                            rax_93 = 0.q
                                        
                                        int64_t var_310_1 = rax_93
                                        int32_t var_25c_1 = 0
                                        result_2.o = var_318_1.o
                                        var_338.q = &data_14302ec20
                                        result, r9_8 =
                                            sub_141a37e10(arg3, &result_2, &var_338, 0xffffffff.q)
                                    
                                    r15_1 = var_408.q
                                    rdx_22 = var_3f8
                                else
                                    uint32_t r8_15 = (result u>> 0x20).d
                                    r9_8 = rcx_31 u>> 0x20
                                    
                                    if (r8_15 s<= r9_8.d)
                                        if (r8_15 != r9_8.d)
                                            goto label_141a4ecf7
                                        
                                        if (result.b != 0 && rcx_31.b != 0)
                                            goto label_141a4ecf7
                                
                                result_4 = result_1
                                int128_t* var_3e0
                                
                                if (result_4.d == 0xffffffff)
                                    r11_2 = var_3c0:4.d
                                    rbx_2 = var_3c8:4.d
                                    
                                    if (result_1:4.d != 0)
                                        continue
                                    else if (result_4.d == result_4.d)
                                        r15_2 = var_3e0
                                        r8_29 = r15_2
                                        break
                                
                                r15_2 = var_3e0
                                r8_29 = ((sx.q(*(r15_2[2].q + sx.q(result_4.d) * 0xc))
                                    + sx.q((result_4 u>> 0x20).d)) << 5) + r15_2[3].q
                                break
                        else if (rbx_2 s<= r11_2)
                            if (rbx_2 != r11_2)
                                goto label_141a4e96f
                            
                            if (rsi.b != 0 && r14_1.b != 0)
                                goto label_141a4e96f
                    else
                        result = rdx_22 u>> 0x20
                        uint32_t r8_7 = (var_3f0 u>> 0x20).d
                        
                        if (result.d s<= r8_7)
                            if (result.d != r8_7)
                                goto label_141a4e93d
                            
                            if (rdx_22.b != 0 && var_3f0.b != 0)
                                goto label_141a4e93d
                
                int64_t var_68
                
                if (var_68 != 0)
                    result = sub_140a74f90(var_68)
                
                int64_t var_78
                
                if (var_78 != 0)
                    result = sub_140a74f90(var_78)
                
                __security_check_cookie(rax_1 ^ &var_438)
                return result
            
            uint64_t rbx_10 = var_3f0
            result_2.o = *r8_29
            int64_t rax_104 = var_390.q
            
            if (rax_104.b == rbx_10.b
                    && (rax_104.b == 2 || (rax_104 u>> 0x20).d == (rbx_10 u>> 0x20).d))
                rdx_22.b = 1
                result_1 = r8_29[1].q
                result, r9_8 = sub_141a58090(&var_3f8, rdx_22.b)
                result_4 = result_1
                r15_1 = var_408.q
                continue
            
            if (rdx_22.b == 2 || rbx_10.b == 2)
            label_141a4f319:
                
                if (rbx_10.b != 0)
                label_141a4f331:
                    char var_3d8
                    
                    if (rbx_10.b != 1)
                        var_3d8.q = rbx_10
                    else
                        uint32_t var_3d4_2 = (rbx_10 u>> 0x20).d
                        rbx_10 = 0.q
                else
                    uint32_t var_3d4_1 = (rbx_10 u>> 0x20).d
                    rbx_10 = 1.q
            else
                int32_t rax_107 = var_3f8:4.d
                int32_t temp11_1 = var_3f0:4.d
                int32_t var_24c_1
                
                if (rax_107 s> temp11_1)
                    var_24c_1 = 0
                    rbx_10 = 2.q
                else
                    if (rax_107 != temp11_1)
                        goto label_141a4f319
                    
                    if (rdx_22.b != 0 && rbx_10.b != 0)
                        goto label_141a4f331
                    
                    var_24c_1 = 0
                    rbx_10 = 2.q
            
            int128_t* var_418
            var_418.b = 1
            uint64_t result_3
            sub_141a4b4f0(&var_3f8, &result_3, result_4, rbx_10, var_418.b)
            result = result_3
            
            while (true)
                int128_t* r8_34
                
                if (result.d != 0xffffffff)
                    r8_34 = ((sx.q(*(r15_2[2].q + sx.q(result.d) * 0xc))
                        + sx.q((result u>> 0x20).d)) << 5) + r15_2[3].q
                else
                    if ((result u>> 0x20).d != 0)
                        break
                    
                    if (result.d == result.d)
                        r8_34 = r15_2
                    else
                        r8_34 = ((sx.q(*(r15_2[2].q + sx.q(result.d) * 0xc))
                            + sx.q((result u>> 0x20).d)) << 5) + r15_2[3].q
                
                result_2.o = *r8_34
                uint64_t result_6 = result_2
                
                if (result_6.b != rbx_10.b)
                    break
                
                if (result_6.b != 2 && (result_6 u>> 0x20).d != (rbx_10 u>> 0x20).d)
                    break
                
                result_1 = result
                var_418.b = 1
                result_4 = result
                int32_t var_108
                result = *sub_141a4b4f0(&var_3f8, &var_108, result, rbx_10, var_418.b)
                result_3 = result
            
            int128_t* r8_39
            
            if (result_4.d == 0xffffffff)
                r8_39 = r15_2
            else
                r8_39 = ((sx.q(*(r15_2[2].q + sx.q(result_4.d) * 0xc))
                    + sx.q((result_4 u>> 0x20).d)) << 5) + r15_2[3].q
            
            result_2.o = *r8_39
            uint64_t result_7 = var_390.q
            
            if (result.d != 0xffffffff)
            label_141a4f460:
                r15_2 = ((sx.q(*(r15_2[2].q + sx.q(result.d) * 0xc)) + sx.q((result u>> 0x20).d))
                    << 5) + r15_2[3].q
            label_141a4f480:
                int128_t zmm0_5 = *r15_2
                result_2.o = zmm0_5
                result = result_2
                
                if (result.b != rbx_10.b)
                label_141a4f4a3:
                    result_2.o = zmm0_5
                    result_7 = result_2
                    
                    if (result_7.b == 0)
                        uint32_t var_3cc_1 = (result_7 u>> 0x20).d
                        result_7 = 1.q
                    else
                        char var_3d0
                        
                        if (result_7.b != 1)
                            var_3d0.q = result_7
                        else
                            uint32_t var_3cc_2 = (result_7 u>> 0x20).d
                            result_7 = 0.q
                else if (result.b != 2)
                    result u>>= 0x20
                    
                    if (result.d != (rbx_10 u>> 0x20).d)
                        goto label_141a4f4a3
            else if ((result u>> 0x20).d == 0)
                if (result.d == result.d)
                    goto label_141a4f480
                
                goto label_141a4f460
            
            r15_1 = var_408.q
            uint64_t result_8 = result_7
            var_3f8.o = rbx_10.o
    
    char rax_25 = r13[0xb].b
    int32_t* rdx_16 = rax_24 * 0x108 + *rcx_18
    
    if (rax_25 == 0 || ((rax_25 & 1) != 0 && (rdx_16[0x3e].b & 1) != 0))
        zmm2 = sub_141a4d530(&rdx_16[2], *rdx_16, r13, arg3, zmm2)
    else if ((rax_25 & 2) != 0 && ((rdx_16[0x3e] u>> 1).b & 1) != 0)
        zmm2 = sub_141a4d530(&rdx_16[2], *rdx_16, r13, arg3, zmm2)
    
    var_1e8:8.d &= not.d(var_1f8:0xc.d)
    sub_14059bdd0(&var_1f8:8)
