// 函数: sub_1425d1620
// 地址: 0x1425d1620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f376e8
void* r14 = arg1
sub_140a387e0()
int64_t* r15 = nullptr
int32_t r13 = 0
int64_t* var_1c8 = nullptr
int32_t var_1bc = 0
void* r8 = data_14399e720
int32_t rdi = 0
int32_t rax = (*(r8 + 8))(&data_14399e720, rbx, r8)
int32_t rsi = 0
int32_t arg_10 = rax

if (rax s> 0)
    int64_t* rcx_1
    
    do
        void* r9_1 = data_14399e720
        int64_t rax_1 = (*(r9_1 + 0x10))(&data_14399e720, rbx, zx.q(rsi), r9_1)
        int64_t r15_1
        
        if (rax_1 == 0)
            r15_1 = 0
        else
            r15_1 = rax_1 - 8
        
        int64_t r14_1 = sx.q(rdi)
        rdi = (r14_1 + 1).d
        
        if (rdi s> r13)
            sub_1405a4d70(&var_1c8)
            r13 = var_1bc
        
        rcx_1 = var_1c8
        rsi += 1
        rcx_1[r14_1] = r15_1
    while (rsi s< arg_10)
    
    r14 = arg1
    r15 = rcx_1

int64_t* rcx_2 = r15
int64_t* arg_18 = rcx_2
int64_t* result = &r15[sx.q(rdi)]
int64_t* result_2 = result

if (r15 != result)
    do
        int64_t* rcx_3 = *rcx_2
        void var_160
        result = (*(*rcx_3 + 8))(rcx_3, &var_160)
        int64_t* result_4 = result
        
        if (*result != 0)
            result = sub_141d43b90()
            
            if (result != 0)
                int64_t* rbx_1 = *result_4
                result = sx.q(result[7].d)
                
                if (result.d s<= rbx_1[7].d)
                    int64_t* result_3 = result
                    result = rbx_1[6]
                    
                    if (result[result_3] == &result[6] && rbx_1 != 0)
                        int64_t* rcx_4 = rbx_1[0x23]
                        
                        if (rcx_4 == 0)
                            (*(*rbx_1 + 0x390))(rbx_1)
                            rcx_4 = rbx_1[0x23]
                        
                        int64_t* var_180
                        (*(*rcx_4 + 0x288))(rcx_4, &var_180)
                        int64_t* r13_1 = var_180
                        int32_t var_178
                        result = &r13_1[sx.q(var_178)]
                        int64_t* result_1 = result
                        
                        if (r13_1 != result)
                            int64_t* r15_2 = r14 + 0x50
                            
                            do
                                void* rsi_1 = *r13_1
                                void* const rdi_1
                                
                                if (rsi_1 == 0)
                                    rdi_1 = nullptr
                                else
                                    void* rax_8 = sub_141d43950()
                                    
                                    if (rax_8 == 0)
                                        rdi_1 = nullptr
                                    else
                                        int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                                        
                                        if (rax_9.d s> *(rsi_1 + 0x38))
                                            rdi_1 = nullptr
                                        else
                                            rdi_1 = rsi_1
                                            
                                            if (*(*(rsi_1 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                                                rdi_1 = nullptr
                                
                                uint64_t rdi_2 = *(rdi_1 + 0x18)
                                
                                if (r15_2[1].d == *(r15_2 + 0x34))
                                label_1425d1862:
                                    void* rbx_2
                                    
                                    if (rsi_1 == 0)
                                        rbx_2 = nullptr
                                    else
                                        void* rax_16 = sub_141d43950()
                                        
                                        if (rax_16 == 0)
                                            rbx_2 = nullptr
                                        else
                                            int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                                            
                                            if (rax_17.d s> *(rsi_1 + 0x38))
                                                rbx_2 = nullptr
                                            else
                                                rbx_2 = rsi_1
                                                
                                                if (*(*(rsi_1 + 0x30) + (rax_17 << 3))
                                                        != rax_16 + 0x30)
                                                    rbx_2 = nullptr
                                    
                                    uint64_t rbx_3 = *(rbx_2 + 0x18)
                                    
                                    if (rsi_1 == 0)
                                        rsi_1 = nullptr
                                    else
                                        void* rax_19 = sub_141d43950()
                                        
                                        if (rax_19 == 0)
                                            rsi_1 = nullptr
                                        else
                                            int64_t rax_20 = sx.q(*(rax_19 + 0x38))
                                            
                                            if (rax_20.d s> *(rsi_1 + 0x38)
                                                    || *(*(rsi_1 + 0x30) + (rax_20 << 3))
                                                    != rax_19 + 0x30)
                                                rsi_1 = nullptr
                                    
                                    int32_t rcx_13
                                    rcx_13.b = rbx_3:4.d == 0
                                    
                                    if ((rcx_13.b & sub_140b5b8a0(rbx_3.d, 0)) != 0)
                                        sub_140d19010(r14, 
                                            NewObject with empty name can't be used to create default "
                                        "subobjects (inside of UObject derived class constructor) as "
                                        "it produces incon")
                                    
                                    void* rax_23 =
                                        sub_140d2dfc0(rsi_1, r14, rbx_3, 8, 0, 0, 0, 0, 0)
                                    
                                    if (rax_23 != 0)
                                        void* rax_24 = sub_1425d5030()
                                        void* rcx_16 = *(rax_23 + 0x10)
                                        int64_t rdx_14 = sx.q(*(rax_24 + 0x38))
                                        
                                        if (rdx_14.d s<= *(rcx_16 + 0x38)
                                                && *(*(rcx_16 + 0x30) + (rdx_14 << 3))
                                                == rax_24 + 0x30)
                                            int32_t r11_1 = r15_2[5].d
                                            int32_t rcx_18 = 0
                                            int32_t var_1e4_1 = 1
                                            int32_t r8_5 = 0
                                            int32_t var_1e8_1 = 0
                                            void* var_1e0_1 = &r15_2[2]
                                            int32_t var_1d8_1 = 0xffffffff
                                            int64_t var_1d4_1 = 0
                                            
                                            if (r11_1 != 0)
                                                void* rax_26 = r15_2[4]
                                                void* r9_2 = &r15_2[2]
                                                
                                                if (rax_26 != 0)
                                                    r9_2 = rax_26
                                                
                                                int32_t temp0_1
                                                int32_t temp1_1
                                                temp0_1:temp1_1 = sx.q(r11_1 - 1)
                                                int32_t rdx_17 = *r9_2
                                                
                                                if (rdx_17 != 0)
                                                label_1425d19ce:
                                                    int32_t rax_33 =
                                                        ((rdx_17 - 1) & rdx_17) ^ rdx_17
                                                    uint64_t rflags_1
                                                    int32_t temp0_2
                                                    temp0_2, rflags_1 = _bit_scan_reverse(rax_33)
                                                    int32_t var_1e4_2 = rax_33
                                                    int32_t rax_34
                                                    
                                                    if (rax_33 == 0)
                                                        rax_34 = 0x20
                                                    else
                                                        rax_34 = 0x1f - temp0_2
                                                    
                                                    var_1d4_1.d = r8_5 - rax_34 + 0x1f
                                                    
                                                    if (r8_5 - rax_34 + 0x1f s> r11_1)
                                                        var_1d4_1.d = r11_1
                                                else
                                                    while (true)
                                                        int64_t rdx_18 = sx.q(rcx_18)
                                                        r8_5 += 0x20
                                                        rcx_18 += 1
                                                        var_1d4_1:4.d = r8_5
                                                        var_1e8_1 = rcx_18
                                                        
                                                        if (rdx_18.d
                                                                s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                                            break
                                                        
                                                        rdx_17 = *(r9_2 + (rdx_18 << 2) + 4)
                                                        int32_t var_1d8_2 = 0xffffffff
                                                        
                                                        if (rdx_17 != 0)
                                                            goto label_1425d19ce
                                                    
                                                    var_1d4_1.d = r11_1
                                            
                                            int32_t rdx_19 = r15_2[5].d
                                            var_1d4_1.d = rdx_19
                                            int128_t var_140_1 = 0xffffffff
                                            uint128_t var_150_1 = var_1e8_1.o
                                            int32_t rsi_2 = 0xffffffff << (rdx_19 & 0x1f).b
                                            int32_t r8_8 = rdx_19 s>> 5
                                            int32_t r9_4 = rdx_19 & 0xffffffe0
                                            int64_t var_188_1 =
                                                _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                                            int32_t var_1d8_3 = rsi_2
                                            uint128_t var_1a8 = r15_2.o
                                            uint128_t var_198_1 = var_150_1
                                            
                                            if (rdx_19 != r11_1)
                                                void* rax_38 = r15_2[4]
                                                void* r10_1 = &r15_2[2]
                                                
                                                if (rax_38 != 0)
                                                    r10_1 = rax_38
                                                
                                                int32_t temp2_1
                                                int32_t temp3_1
                                                temp2_1:temp3_1 = sx.q(r11_1 - 1)
                                                int32_t rdx_23 =
                                                    *(r10_1 + (sx.q(r8_8) << 2)) & rsi_2
                                                
                                                if (rdx_23 != 0)
                                                label_1425d1aa8:
                                                    int32_t rax_44 =
                                                        ((rdx_23 - 1) & rdx_23) ^ rdx_23
                                                    uint64_t rflags_2
                                                    int32_t temp0_4
                                                    temp0_4, rflags_2 = _bit_scan_reverse(rax_44)
                                                    int32_t rax_45
                                                    
                                                    if (rax_44 == 0)
                                                        rax_45 = 0x20
                                                    else
                                                        rax_45 = 0x1f - temp0_4
                                                    
                                                    var_1d4_1.d = r9_4 - rax_45 + 0x1f
                                                    
                                                    if (r9_4 - rax_45 + 0x1f s> r11_1)
                                                        var_1d4_1.d = r11_1
                                                else
                                                    while (true)
                                                        int64_t rcx_22 = sx.q(r8_8)
                                                        r9_4 += 0x20
                                                        r8_8 += 1
                                                        
                                                        if (rcx_22.d
                                                                s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                                            break
                                                        
                                                        rdx_23 = *(r10_1 + (rcx_22 << 2) + 4)
                                                        var_1d8_3 = 0xffffffff
                                                        
                                                        if (rdx_23 != 0)
                                                            goto label_1425d1aa8
                                                    
                                                    var_1d4_1.d = r11_1
                                            
                                            while (true)
                                                int64_t rcx_24 = sx.q(var_198_1:0xc.d)
                                                int32_t rax_37
                                                
                                                if (rcx_24.d != (var_1d8_3.q u>> 0x20).d
                                                        || var_198_1.q != &r15_2[2])
                                                    rax_37.b = 0
                                                else
                                                    rax_37.b = 1
                                                
                                                int64_t* rdx_24 = var_1a8.q
                                                
                                                if (rax_37.b == 0 || rdx_24 != r15_2)
                                                    rax_37.b = 1
                                                else
                                                    rax_37.b = 0
                                                
                                                if (rax_37.b == 0)
                                                    break
                                                
                                                int64_t* rbx_5 =
                                                    _mm_bsrli_si128(*(*rdx_24 + rcx_24 * 0x18), 8).q
                                                void* rax_46
                                                int64_t rax_47
                                                void* rdx_26
                                                
                                                if (rbx_5 != 0)
                                                    rax_46 = sub_1425d5030()
                                                    rdx_26 = rbx_5[2]
                                                    rax_47 = sx.q(*(rax_46 + 0x38))
                                                
                                                if (rbx_5 == 0 || rax_47.d s> *(rdx_26 + 0x38)
                                                        || *(*(rdx_26 + 0x30) + (rax_47 << 3))
                                                        != rax_46 + 0x30)
                                                    rbx_5 = nullptr
                                                
                                                if (rbx_5 != 0)
                                                    uint128_t zmm0_1 = data_142d3f670
                                                    uint128_t var_118_1 = zmm0_1
                                                    uint128_t var_108_1 = zmm0_1
                                                    uint128_t var_f8_1 = zmm0_1
                                                    uint128_t var_d8_1 = data_143446300
                                                    uint128_t var_e8_1 = data_142d8c9b0
                                                    uint128_t var_b8_1 = data_143021a10
                                                    uint128_t var_c8_1 = data_143446310
                                                    uint128_t zmm1_1 = data_142d3f670
                                                    int32_t var_70_1 = data_143dbb200
                                                    int64_t rax_50 = *rbx_5
                                                    uint64_t var_78_1 = data_143dbb1f8.q
                                                    uint128_t var_a8_1 = zmm1_1
                                                    uint128_t var_98_1 = zmm1_1
                                                    zmm1_1 = data_143446320
                                                    int128_t var_68
                                                    __builtin_memcpy(&var_68, 
                                                        "\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x"
                                                    "3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 
                                                        0x14)
                                                    char var_128 = 0
                                                    int32_t var_124_1 = 0x3f800000
                                                    int32_t var_120_1 = 0x3f800000
                                                    int32_t var_11c_1 = 0x3f800000
                                                    uint128_t var_88_1 = zmm1_1
                                                    char var_6c_1 = 0
                                                    
                                                    if ((*(rax_50 + 0x280))(rbx_5, &var_128) != 0)
                                                        (*(*rax_23 + 0x278))(rax_23, &var_128)
                                                        break
                                                
                                                var_198_1:8.d &= not.d(var_1a8:0xc.d)
                                                sub_14059bdd0(&var_1a8:8)
                                            
                                            r14 = arg1
                                    
                                    int32_t var_170
                                    sub_140598750(r15_2, &var_170)
                                    uint64_t* var_168
                                    *var_168 = rdi_2
                                    var_168[1] = rax_23
                                    var_168[2].d = 0xffffffff
                                    result = sub_1405b8300(r15_2, &arg_10, 
                                        (rdi_2 u>> 0x20).d + sub_140b5ead0(rdi_2.d), var_168, 
                                        var_170, nullptr)
                                else
                                    int32_t rax_13 = sub_140b5ead0(rdi_2.d) + rdi_2:4.d
                                    void* r8_2 = &r15_2[7]
                                    void* rcx_8 = *(r8_2 + 8)
                                    
                                    if (rcx_8 != 0)
                                        r8_2 = rcx_8
                                    
                                    int32_t rax_15 =
                                        *(r8_2 + (((sx.q(r15_2[9].d) - 1) & sx.q(rax_13)) << 2))
                                    
                                    if (rax_15 == 0xffffffff)
                                        goto label_1425d1862
                                    
                                    int64_t r8_3 = *r15_2
                                    void* rcx_10
                                    
                                    while (true)
                                        int64_t rdx_10 = sx.q(rax_15) * 3
                                        rcx_10 = r8_3 + (rdx_10 << 3)
                                        
                                        if (*(r8_3 + (rdx_10 << 3)) == rdi_2)
                                            break
                                        
                                        rax_15 = *(rcx_10 + 0x10)
                                        
                                        if (rax_15 == 0xffffffff)
                                            goto label_1425d1862
                                    
                                    if (rax_15 == 0xffffffff || rcx_10 == 0)
                                        goto label_1425d1862
                                    
                                    result = rcx_10 + 8
                                    
                                    if (result == 0)
                                        goto label_1425d1862
                                
                                r13_1 = &r13_1[1]
                            while (r13_1 != result_1)
        
        rcx_2 = &arg_18[1]
        arg_18 = rcx_2
    while (rcx_2 != result_2)
    
    r15 = var_1c8

if (r15 == 0)
    return result

return sub_140a74f90(r15)
