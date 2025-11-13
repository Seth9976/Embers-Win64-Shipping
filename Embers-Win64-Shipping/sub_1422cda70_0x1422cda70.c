// 函数: sub_1422cda70
// 地址: 0x1422cda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t* r10 = arg1
int64_t r9 = sx.q(arg10)
int32_t rsi = arg3
int64_t* var_160 = arg1
int32_t var_1c4 = arg3
int64_t rdx = *arg9
int64_t* r14_2 = (r9 << 5) + rdx
int32_t var_188 = r9.d
void* rcx_1 = *arg8
uint64_t rax_4 = zx.q(*(r14_2 + 0x16))
int64_t* r12_2 = rax_4 * 0x30 + rcx_1
int64_t* r15_2

if (arg13 != 0)
    r15_2 = r14_2
else if (4 == rax_4.w)
    r15_2 = (zx.q(*(rcx_1 + 0x19c)) << 5) + rdx
else if (8 != rax_4.w)
    r15_2 = r14_2
else
    r15_2 = (zx.q(*(rcx_1 + 0xdc)) << 5) + rdx

int64_t* rdx_1 = &r10[0x16]
int64_t* var_168 = rdx_1

if (arg2 == 0)
    var_168 = rdx_1
else
    void* rdi_1 = *rdx_1
    sub_14084eee0(rdi_1 + 0x30, 0)
    arg5 = sub_14084eee0(rdi_1 + 0x80, 0)
    rdx_1 = var_168
    r10 = var_160
    *(rdi_1 + 0x29) = 1

int64_t var_150 = r10[0x15]
void* var_1d8
void* var_198
int64_t result
int64_t rdi_2

if (arg7 == 0 || r12_2[5].d == 0xffffffff)
    int64_t* rcx_26 = *r14_2
    rdi_2 = arg6
    (*(*rcx_26 + 0x90))(rcx_26, r10, *rdx_1, sx.q(*(r15_2 + 0xc)) + rdi_2, nullptr)
else
    rdi_2 = arg6
    int64_t rdx_3 = sx.q(*(r15_2 + 0xc)) + rdi_2
    int64_t* rcx_4 = *r14_2
    int64_t r10_2 = sx.q(r14_2[2].d) + arg4
    
    if (r10_2 != rdx_3)
        if (not(test_bit(zx.q(rcx_4[8].d), 0x1e)))
            (*(*rcx_4 + 0xb0))(rcx_4, r10_2, rdx_3, 1)
        else
            memcpy(r10_2, rdx_3, *(rcx_4 + 0x3c))
    
    int64_t* rcx_6 = *r14_2
    int64_t* rdx_5 = var_160
    (*(*rcx_6 + 0x90))(rcx_6, rdx_5, rdx_5[0x16], sx.q(*(r15_2 + 0xc)) + rdi_2, nullptr)
    
    if (*(r12_2 + 0x24) == 1)
        sub_1405a7050(arg7, r12_2)
    else
        int16_t** r14_4 = sx.q(*(r15_2 + 0xc)) + rdi_2
        int64_t* r10_4 = sx.q(r14_2[2].d) + arg4
        int32_t rax_10 = zx.d(*(r14_2 + 0x1c)) - 2
        
        if (rax_10 u> 0x15)
            void* rcx_19 = *r14_2
            int32_t var_190
            
            if (rcx_19 == 0)
                var_198 = nullptr
                var_190 = 0
                sub_1405947f0(&var_198, 5)
                int32_t rax_15 = var_190 + 5
                var_190 = rax_15
                
                if (rax_15 s> 0)
                    sub_140594770(&var_198)
                
                UnDecorator::getReferenceType(var_198, u"None", 0xa)
            else
                sub_140b63b70(rcx_19 + 0x28, &var_198)
            
            void* rax_16 = &data_142d40450
            
            if (var_190 != 0)
                rax_16 = var_198
            
            var_1d8 = rax_16
            arg5 =
                sub_140af98a0("Unknown", 0x290, PropertiesAreIdentical: Unsupported type! %i (%s)", 
                zx.q(*(r14_2 + 0x1c)))
            void* rcx_24 = var_198
            
            if (rcx_24 != 0)
                arg5 = sub_140a74f90(rcx_24)
            
            sub_140afbb40()
            sub_1405a7050(arg7, r12_2)
        else
            switch (rax_10)
                case 0, 1, 0x14
                    int64_t* rcx_17 = *r14_2
                    result = (*(*rcx_17 + 0x80))(rcx_17, r10_4, r14_4, 0)
                    goto label_1422cdd7b
                case 2
                    if ((*r14_4).d f!= *r10_4)
                        sub_1405a7050(arg7, r12_2)
                case 3, 7
                    result.b = *r10_4 == *r14_4
                    goto label_1422cdd7b
                case 4, 0x13
                    result.b = *r10_4 == *r14_4
                label_1422cdd7b:
                    
                    if (result.b == 0)
                        sub_1405a7050(arg7, r12_2)
                case 5, 0x12
                    result.b = *r10_4 == *r14_4
                    goto label_1422cdd7b
                case 6
                    int64_t* rsi_1 = *r14_2
                    int64_t rax_12 = (*(*rsi_1 + 0x140))(rsi_1, r10_4, &__dos_header)
                    int64_t r8_4 = *rsi_1
                    result = (*(r8_4 + 0x140))(rsi_1, r14_4, r8_4)
                    rsi = var_1c4
                    result.b = rax_12 == result
                    goto label_1422cdd7b
                case 8, 9, 0xb, 0xe, 0xf, 0x10
                    if ((*r14_4).d f!= *r10_4 || (*(r14_4 + 4)).d f!= *(r10_4 + 4)
                            || r14_4[1].d.d f!= r10_4[1].d)
                        sub_1405a7050(arg7, r12_2)
                case 0xa
                    result = sub_1422b1900(r10_4, r14_4)
                    goto label_1422cdd7b
                case 0xc
                    result = sub_14094dfb0(r10_4, r14_4)
                    goto label_1422cdd7b
                case 0xd
                    result = sub_1422b1930(r10_4, r14_4)
                    goto label_1422cdd7b
                case 0x11
                    result = sub_1420bca70(r10_4, r14_4)
                    goto label_1422cdd7b
                case 0x15
                    int64_t rax_13 = *r10_4
                    int16_t* rcx_11 = *r14_4
                    
                    if (rax_13.d != rcx_11.d || (rax_13 u>> 0x20).d != (rcx_11 u>> 0x20).d)
                        sub_1405a7050(arg7, r12_2)

if (arg11 != 0)
    result, arg5 = sub_1422b3d30(r14_2, var_188, sx.q(*(r15_2 + 0xc)) + rdi_2, var_160, arg5)

if (arg2 == 0)
    result.b = 0
else
    int32_t r9_8 = *(r15_2 + 0xc) + rsi
    var_1c4 = r9_8
    void* rax_20 = *var_168
    void* r11_1 = rax_20 + 0x30
    int32_t r10_6 = *(rax_20 + 0x38) - *(r11_1 + 0x34)
    void* var_180_1 = r11_1
    void* r15_5 = rax_20 + 0x80
    int32_t rax_21 = arg2[1].d
    var_198 = r15_5
    void* r13_1
    
    if (rax_21 == *(arg2 + 0x34))
    label_1422cdf2d:
        r13_1 = nullptr
    else
        void* rcx_28 = arg2[8]
        void* r8_8 = &arg2[7]
        
        if (rcx_28 != 0)
            r8_8 = rcx_28
        
        int32_t rax_23 = *(r8_8 + (((sx.q(arg2[9].d) - 1) & sx.q(r9_8)) << 2))
        
        if (rax_23 == 0xffffffff)
        label_1422cdf2d_1:
            r13_1 = nullptr
        else
            int32_t* rcx_31
            
            while (true)
                rcx_31 = sx.q(rax_23) * 0xd8 + *arg2
                
                if (*rcx_31 == r9_8)
                    break
                
                rax_23 = rcx_31[0x34]
                
                if (rax_23 == 0xffffffff)
                    goto label_1422cdf2d_2
            
            if (rax_23 == 0xffffffff || rcx_31 == 0)
            label_1422cdf2d_2:
                r13_1 = nullptr
            else
                r13_1 = &rcx_31[2]
    
    if (r10_6 s> 0 || *(r15_5 + 8) - *(r15_5 + 0x34) s> 0)
        char* r14_6
        
        if (r13_1 == 0)
            r14_6 = arg12
        else
            if (*(r13_1 + 0x18) - *(r13_1 + 0x44) == r10_6)
                int32_t rbx_3 = *(r13_1 + 0x38)
                int32_t rcx_33 = 0
                int32_t var_1bc_1 = 1
                int32_t r8_10 = 0
                int32_t var_1c0_1 = 0
                void* var_1b8 = r13_1 + 0x20
                int32_t var_1b0_1 = 0xffffffff
                int64_t var_1ac_1 = 0
                
                if (rbx_3 != 0)
                    void* rax_28 = *(r13_1 + 0x30)
                    void* r9_9 = r13_1 + 0x20
                    
                    if (rax_28 != 0)
                        r9_9 = rax_28
                    
                    int32_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rbx_3 - 1)
                    int32_t rdx_26 = *r9_9
                    
                    if (rdx_26 != 0)
                    label_1422ce009:
                        int32_t rax_35 = ((rdx_26 - 1) & rdx_26) ^ rdx_26
                        uint64_t rflags_1
                        int32_t temp0_2
                        temp0_2, rflags_1 = _bit_scan_reverse(rax_35)
                        int32_t var_1bc_2 = rax_35
                        int32_t rax_36
                        
                        if (rax_35 == 0)
                            rax_36 = 0x20
                        else
                            rax_36 = 0x1f - temp0_2
                        
                        var_1ac_1.d = r8_10 - rax_36 + 0x1f
                        
                        if (r8_10 - rax_36 + 0x1f s> rbx_3)
                            var_1ac_1.d = rbx_3
                    else
                        while (true)
                            int64_t rdx_27 = sx.q(rcx_33)
                            r8_10 += 0x20
                            rcx_33 += 1
                            var_1ac_1:4.d = r8_10
                            var_1c0_1 = rcx_33
                            
                            if (rdx_27.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_26 = *(r9_9 + (rdx_27 << 2) + 4)
                            var_1b0_1 = 0xffffffff
                            
                            if (rdx_26 != 0)
                                goto label_1422ce009
                        
                        var_1ac_1.d = rbx_3
                
                int32_t rsi_2 = *(r13_1 + 0x38)
                int128_t var_138_1 = var_1c0_1.o
                int32_t r9_11 = rsi_2 & 0xffffffe0
                int128_t var_128_1 = 0xffffffff
                int32_t r8_13 = rsi_2 s>> 5
                int64_t var_1a0_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                arg5.o = var_138_1
                var_1c0_1.o = (r13_1 + 0x10).o
                var_1b0_1.o = arg5.o
                int32_t rax_39
                
                if (rsi_2 != rbx_3)
                    void* rax_40 = *(r13_1 + 0x30)
                    void* r10_7 = r13_1 + 0x20
                    
                    if (rax_40 != 0)
                        r10_7 = rax_40
                    
                    int32_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rbx_3 - 1)
                    int32_t rdx_31 = *(r10_7 + (sx.q(r8_13) << 2)) & 0xffffffff << (rsi_2 & 0x1f).b
                    
                    if (rdx_31 != 0)
                    label_1422ce0e0:
                        int32_t rax_46 = ((rdx_31 - 1) & rdx_31) ^ rdx_31
                        uint64_t rflags_2
                        int32_t temp0_4
                        temp0_4, rflags_2 = _bit_scan_reverse(rax_46)
                        
                        if (rax_46 == 0)
                            rax_39 = 0x20
                        else
                            rax_39 = 0x1f - temp0_4
                        
                        rsi_2 = r9_11 - rax_39 + 0x1f
                        
                        if (rsi_2 s<= rbx_3)
                            goto label_1422ce102
                    else
                        while (true)
                            int64_t rcx_37 = sx.q(r8_13)
                            r9_11 += 0x20
                            r8_13 += 1
                            
                            if (rcx_37.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                                break
                            
                            rdx_31 = *(r10_7 + (rcx_37 << 2) + 4)
                            
                            if (rdx_31 != 0)
                                goto label_1422ce0e0
                    
                    rsi_2 = rbx_3
                    goto label_1422ce102
                
                while (true)
                    int32_t var_1a4
                    int64_t rdx_32 = sx.q(var_1a4)
                    
                    if (rdx_32.d != rsi_2 || var_1b0_1.q != r13_1 + 0x20)
                        rax_39.b = 0
                    else
                        rax_39.b = 1
                    
                    int64_t* rcx_39 = var_1c0_1.q
                    
                    if (rax_39.b == 0 || rcx_39 != r13_1 + 0x10)
                        rax_39.b = 1
                    else
                        rax_39.b = 0
                    
                    if (rax_39.b != 0)
                        if (*(r11_1 + 8) != *(r11_1 + 0x34))
                            int64_t r9_13 = sx.q(*(*rcx_39 + rdx_32 * 0xc))
                            void* r8_15 = r11_1 + 0x38
                            void* rcx_41 = *(r8_15 + 8)
                            
                            if (rcx_41 != 0)
                                r8_15 = rcx_41
                            
                            int32_t rax_48 = *(r8_15 + (((sx.q(*(r11_1 + 0x48)) - 1) & r9_13) << 2))
                            
                            if (rax_48 != 0xffffffff)
                                int64_t r8_16 = *r11_1
                                
                                while (true)
                                    int64_t rdx_36 = sx.q(rax_48) * 3
                                    
                                    if (*(r8_16 + (rdx_36 << 2)) == r9_13.d)
                                        break
                                    
                                    rax_48 = *(r8_16 + (rdx_36 << 2) + 4)
                                    
                                    if (rax_48 == 0xffffffff)
                                        goto label_1422ce18a
                                
                                if (rax_48 != 0xffffffff)
                                    var_1ac_1:4.d &= not.d(var_1b8:4.d)
                                    sub_14059bdd0(&var_1b8)
                                label_1422ce102:
                                    r11_1 = var_180_1
                                    continue
                        
                    label_1422ce18a:
                        r15_5 = var_198
                        break
                    
                    r15_5 = var_198
                    
                    if (*(r13_1 + 0x68) - *(r13_1 + 0x94) != *(r15_5 + 8) - *(r15_5 + 0x34))
                    label_1422ce3d7:
                        r14_6 = arg12
                        r11_1 = var_180_1
                        *r14_6 = 1
                        goto label_1422ce427
                    
                    int32_t r11_3 = *(r13_1 + 0x88)
                    int32_t rcx_46 = 0
                    int32_t var_1bc_3 = 1
                    int32_t r8_17 = 0
                    int32_t var_1c0_2 = 0
                    var_1b8 = r13_1 + 0x70
                    int32_t var_1b0_2 = 0xffffffff
                    int64_t var_1ac_2 = 0
                    
                    if (r11_3 != 0)
                        void* rax_53 = *(r13_1 + 0x80)
                        void* r9_14 = r13_1 + 0x70
                        
                        if (rax_53 != 0)
                            r9_14 = rax_53
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r11_3 - 1)
                        int32_t rdx_39 = *r9_14
                        
                        if (rdx_39 != 0)
                        label_1422ce259:
                            int32_t rax_60 = ((rdx_39 - 1) & rdx_39) ^ rdx_39
                            uint64_t rflags_3
                            int32_t temp0_5
                            temp0_5, rflags_3 = _bit_scan_reverse(rax_60)
                            int32_t var_1bc_4 = rax_60
                            int32_t rax_61
                            
                            if (rax_60 == 0)
                                rax_61 = 0x20
                            else
                                rax_61 = 0x1f - temp0_5
                            
                            var_1ac_2.d = r8_17 - rax_61 + 0x1f
                            
                            if (r8_17 - rax_61 + 0x1f s> r11_3)
                                var_1ac_2.d = r11_3
                        else
                            while (true)
                                int64_t rdx_40 = sx.q(rcx_46)
                                r8_17 += 0x20
                                rcx_46 += 1
                                var_1ac_2:4.d = r8_17
                                var_1c0_2 = rcx_46
                                
                                if (rdx_40.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_39 = *(r9_14 + (rdx_40 << 2) + 4)
                                var_1b0_2 = 0xffffffff
                                
                                if (rdx_39 != 0)
                                    goto label_1422ce259
                            
                            var_1ac_2.d = r11_3
                    
                    int32_t rbx_4 = *(r13_1 + 0x88)
                    int32_t r8_20 = rbx_4 s>> 5
                    int128_t var_138_2 = var_1c0_2.o
                    int32_t r9_16 = rbx_4 & 0xffffffe0
                    int128_t var_128_2 = 0xffffffff
                    int64_t var_1a0_2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
                    arg5.o = var_138_2
                    var_1c0_2.o = (r13_1 + 0x60).o
                    var_1b0_2.o = arg5.o
                    int32_t rax_64
                    
                    if (rbx_4 != r11_3)
                        void* rax_65 = *(r13_1 + 0x80)
                        void* r10_8 = r13_1 + 0x70
                        
                        if (rax_65 != 0)
                            r10_8 = rax_65
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r11_3 - 1)
                        int32_t rdx_44 =
                            *(r10_8 + (sx.q(r8_20) << 2)) & 0xffffffff << (rbx_4 & 0x1f).b
                        
                        if (rdx_44 != 0)
                        label_1422ce32f:
                            int32_t rax_71 = ((rdx_44 - 1) & rdx_44) ^ rdx_44
                            uint64_t rflags_4
                            int32_t temp0_7
                            temp0_7, rflags_4 = _bit_scan_reverse(rax_71)
                            
                            if (rax_71 == 0)
                                rax_64 = 0x20
                            else
                                rax_64 = 0x1f - temp0_7
                            
                            rbx_4 = r9_16 - rax_64 + 0x1f
                            
                            if (rbx_4 s> r11_3)
                                rbx_4 = r11_3
                        else
                            while (true)
                                int64_t rcx_50 = sx.q(r8_20)
                                r9_16 += 0x20
                                r8_20 += 1
                                
                                if (rcx_50.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_44 = *(r10_8 + (rcx_50 << 2) + 4)
                                
                                if (rdx_44 != 0)
                                    goto label_1422ce32f
                            
                            rbx_4 = r11_3
                    
                    while (true)
                        int64_t rdx_45 = sx.q(var_1a4)
                        
                        if (rdx_45.d != rbx_4 || var_1b0_2.q != r13_1 + 0x70)
                            rax_64.b = 0
                        else
                            rax_64.b = 1
                        
                        int64_t* rcx_52 = var_1c0_2.q
                        
                        if (rax_64.b == 0 || rcx_52 != r13_1 + 0x60)
                            rax_64.b = 1
                        else
                            rax_64.b = 0
                        
                        if (rax_64.b == 0)
                            r14_6 = arg12
                            
                            if (*r14_6 == 0)
                                break
                            
                            r11_1 = var_180_1
                            goto label_1422ce427
                        
                        if (*(r15_5 + 8) == *(r15_5 + 0x34))
                            goto label_1422ce3d7
                        
                        int64_t r9_18 = sx.q(*(*rcx_52 + rdx_45 * 0xc))
                        void* r8_22 = r15_5 + 0x38
                        void* rcx_54 = *(r8_22 + 8)
                        
                        if (rcx_54 != 0)
                            r8_22 = rcx_54
                        
                        int32_t rax_73 = *(r8_22 + (((sx.q(*(r15_5 + 0x48)) - 1) & r9_18) << 2))
                        
                        if (rax_73 == 0xffffffff)
                            goto label_1422ce3d7
                        
                        int64_t r8_23 = *r15_5
                        
                        while (true)
                            int64_t rdx_49 = sx.q(rax_73) * 3
                            
                            if (*(r8_23 + (rdx_49 << 2)) == r9_18.d)
                                break
                            
                            rax_73 = *(r8_23 + (rdx_49 << 2) + 4)
                            
                            if (rax_73 == 0xffffffff)
                                goto label_1422ce3d7
                        
                        if (rax_73 == 0xffffffff)
                            goto label_1422ce3d7
                        
                        var_1ac_2:4.d &= not.d(var_1b8:4.d)
                        sub_14059bdd0(&var_1b8)
                    
                    goto label_1422ce545
            
            r14_6 = arg12
            *r14_6 = 1
        
    label_1422ce427:
        int32_t var_dc_1 = 0x80
        int64_t var_108
        __builtin_memset(&var_108, 0, 0x2c)
        uint32_t var_118 = zx.d(*(r14_2 + 0x16))
        int32_t var_114_1 = var_188
        int32_t var_d8_1 = 0xffffffff
        int32_t var_d4_1 = 0
        int64_t var_c8_1 = 0
        int32_t var_c0_1 = 0
        sub_140780cc0(&var_108, r11_1)
        int64_t var_b8
        __builtin_memset(&var_b8, 0, 0x2c)
        int32_t var_8c_1 = 0x80
        int32_t var_88_1 = 0xffffffff
        int32_t var_84_1 = 0
        int64_t var_78_1 = 0
        int32_t var_70_1 = 0
        sub_140780cc0(&var_b8, r15_5)
        int64_t* rcx_59 = var_160
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x18)
        int32_t var_110_1 = (rcx_59[0x15]).d - var_150.d
        sub_140b4e460(&var_150, rcx_59, &var_68)
        sub_1422b8d30(arg2, &var_160)
        int32_t* var_158
        sub_1422b0f20(var_158, &var_1c4, &var_118)
        int32_t rax_81 = var_160.d
        var_158[0x34] = 0xffffffff
        var_1d8.d = rax_81
        sub_1422c4b30(arg2, &var_1c4, *var_158, var_158, var_1d8.d, nullptr)
        sub_1422b5230(&var_118)
        *r14_6 = 1
    else if (r13_1 != 0)
        sub_1422cea40(arg2, r9_8)
        *arg12 = 1
    
label_1422ce545:
    void* rbx_7 = *var_168
    sub_14084eee0(rbx_7 + 0x30, 0)
    sub_14084eee0(rbx_7 + 0x80, 0)
    result = zx.q(r10_6 s> 0)
    *(rbx_7 + 0x29) = 0

__security_check_cookie(rax_1 ^ &var_1f8)
return result
