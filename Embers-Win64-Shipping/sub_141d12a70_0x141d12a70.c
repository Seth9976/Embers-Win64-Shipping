// 函数: sub_141d12a70
// 地址: 0x141d12a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
uint64_t var_48 = __security_cookie ^ &var_218
int64_t* r14 = arg2
int64_t* r13 = arg1
uint64_t result

if (*(arg1 + 0x151) != 0 || *(arg1 + 0x14a) != 0)
    result.b = 1
else
    bool cond:1_1 = *(arg1 + 0xcd) == 0
    *(arg1 + 0x151) = 1
    
    if (cond:1_1)
        void** rbx
        void** arg_20 = rbx
        int32_t rax_1 = 1
        
        if (arg4 != 0)
            rax_1 = 0xa
        
        int32_t var_1b0_1 = 0
        int16_t* r8
        
        if (r13[2].d == 0)
            r8 = &data_142d40450
        else
            r8 = r13[1]
        
        int16_t i = *r8
        int32_t r9 = -1
        void* r8_1 = &r8[1]
        
        while (i != 0)
            uint64_t i_5 = zx.q(i)
            r8_1 += 2
            int32_t rcx_2 = *(&data_1439a0500 + ((zx.q(r9.b) ^ zx.q(i_5.b)) << 2)) ^ r9 u>> 8
            int32_t rdx_3 =
                *(&data_1439a0500 + ((zx.q((i_5 u>> 8).b) ^ zx.q(rcx_2.b)) << 2)) ^ rcx_2 u>> 8
            int32_t rdi_2 = *(&data_1439a0500 + (zx.q(rdx_3.b) << 2)) ^ rdx_3 u>> 8
            i = *(r8_1 - 2)
            r9 = *(&data_1439a0500 + (zx.q(rdi_2.b) << 2)) ^ rdi_2 u>> 8
        
        int64_t* _Base = nullptr
        uint64_t rdi_4 = &r13[0x26]
        r13[0x20] = zx.q(not.d(r9))
        int32_t rax_7 = *rdi_4
        int32_t var_17c_1 = 0
        int32_t var_180_1 = rax_7
        
        if (rax_7 s> 0)
            sub_1405a4f90(&_Base)
        
        int32_t rsi_1 = -1
        uint64_t var_190 = -1
        
        while (true)
            int32_t rdi_5 = *rdi_4
            rbx.b = 0
            char var_1f8_1 = 0
            void* var_98 = nullptr
            int32_t var_90_1 = 0
            int32_t var_6c_1 = 0x80
            int64_t var_88
            __builtin_memset(&var_88, 0, 0x1c)
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            void* var_58_1 = nullptr
            int32_t var_50_1 = 0
            
            if (rdi_5 s> 0)
                sub_141d0e6a0(&var_98, rdi_5)
                int32_t rdx_8
                
                if (rdi_5 u< 4)
                    rdx_8 = 1
                else
                    uint32_t rdi_6 = rdi_5 u>> 1
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(rdi_6 + 8)
                    int32_t rcx_8
                    
                    if (rdi_6 == 0xfffffff8)
                        rcx_8 = 0x20
                    else
                        rcx_8 = 0x1f - temp0_2
                    
                    int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
                    uint64_t rflags_2
                    char temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(rdi_6 + 7)
                    char rdx_7
                    
                    if (rcx_10 == 0)
                        rdx_7 = 0x20
                    else
                        rdx_7 = 0x1f - temp0_3
                    
                    rdx_8 = 1 << ((not.d(rcx_10)).b & (0x20 - rdx_7))
                
                if (var_50_1 == 0 || var_50_1 s< rdx_8)
                    var_50_1 = rdx_8
                    sub_141845dc0(&var_98)
            
            int64_t var_138_1 = 0
            int16_t* var_1a8 = nullptr
            int64_t r15_1 = 0
            int64_t var_1a0_1 = 0
            sub_1405947f0(&var_1a8, 0x401)
            int16_t* rax_13 = var_1a8
            int32_t r8_2 = 0
            
            if (rax_13 != 0)
                *rax_13 = 0
            
            int32_t rcx_15 = 0
            void* r11_2 = *r13 + 0x20
            int32_t var_1e0_1 = 0
            int32_t r10_1 = *(r11_2 + 0x18)
            int32_t var_1dc_1 = 1
            int32_t rdi_8 = 0
            void* var_1d8_1 = r11_2 + 0x10
            int32_t var_1d0_1 = 0xffffffff
            int64_t var_1cc_1 = 0
            
            if (r10_1 != 0)
                void* r8_3 = *(r11_2 + 0x10)
                
                if ((r8_3.b & 1) != 0)
                    r8_3 = (r8_3 s>> 1) + r11_2 + 0x10
                
                int32_t temp1_1
                int32_t temp2_1
                temp1_1:temp2_1 = sx.q(r10_1 - 1)
                int32_t rdx_11 = *r8_3
                
                if (rdx_11 != 0)
                label_141d12d99:
                    int32_t rax_21 = neg.d(rdx_11) & rdx_11
                    uint64_t rflags_3
                    int32_t temp0_4
                    temp0_4, rflags_3 = _bit_scan_reverse(rax_21)
                    int32_t var_1dc_2 = rax_21
                    int32_t rax_22
                    
                    if (rax_21 == 0)
                        rax_22 = 0x20
                    else
                        rax_22 = 0x1f - temp0_4
                    
                    var_1cc_1.d = rdi_8 - rax_22 + 0x1f
                    
                    if (rdi_8 - rax_22 + 0x1f s> r10_1)
                        var_1cc_1.d = r10_1
                else
                    while (true)
                        int64_t rdx_12 = sx.q(rcx_15)
                        rdi_8 += 0x20
                        rcx_15 += 1
                        var_1cc_1:4.d = rdi_8
                        var_1e0_1 = rcx_15
                        
                        if (rdx_12.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_11 = *(r8_3 + (rdx_12 << 2) + 4)
                        int32_t var_1d0_2 = 0xffffffff
                        
                        if (rdx_11 != 0)
                            goto label_141d12d99
                    
                    var_1cc_1.d = r10_1
                
                r8_2 = 0
            
            int128_t var_108_1 = 0xffffffff
            int128_t var_118_1 = var_1e0_1.o
            int128_t var_f0 = r11_2.o
            int64_t var_d0_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
            int128_t var_e0_1 = var_118_1
            int16_t* var_1f0
            int64_t var_1c0
            int128_t var_178
            int64_t var_158
            int32_t r15_6
            
            if (0 s>= r10_1)
                sub_141cf12a0(r14, &var_98)
                r15_6 = var_1b0_1
            else
                int32_t rdx_13 = var_e0_1:0xc.d
                
                while (true)
                    if (rbx.b != 0)
                        goto label_141d133e9
                    
                    int64_t* rbx_1 = var_f0.q
                    void* rcx_17 = *rbx_1
                    
                    if ((rcx_17.b & 1) != 0)
                        rcx_17 = (rcx_17 s>> 1) + rbx_1
                    
                    int32_t rdi_10 = 0
                    int32_t var_1dc_3 = 1
                    int32_t var_1d0_3 = 0xffffffff
                    int64_t var_1cc_2 = 0
                    int64_t rsi_3 = sx.q(rdx_13) * 0x50
                    int64_t var_b8_1 = rsi_3
                    void* r11_4 = rsi_3 + 0x10 + rcx_17
                    int32_t rcx_19 = 0
                    int32_t r10_2 = *(r11_4 + 0x18)
                    int32_t var_1e0_2 = 0
                    void* var_1d8_2 = r11_4 + 0x10
                    
                    if (r10_2 != 0)
                        void* r8_5 = *(r11_4 + 0x10)
                        
                        if ((r8_5.b & 1) != 0)
                            r8_5 = (r8_5 s>> 1) + r11_4 + 0x10
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r10_2 - 1)
                        int32_t rdx_16 = *r8_5
                        
                        if (rdx_16 != 0)
                        label_141d12ec9:
                            int32_t rax_32 = neg.d(rdx_16) & rdx_16
                            uint64_t rflags_4
                            int32_t temp0_6
                            temp0_6, rflags_4 = _bit_scan_reverse(rax_32)
                            int32_t var_1dc_4 = rax_32
                            int32_t rax_33
                            
                            if (rax_32 == 0)
                                rax_33 = 0x20
                            else
                                rax_33 = 0x1f - temp0_6
                            
                            var_1cc_2.d = rdi_10 - rax_33 + 0x1f
                            
                            if (rdi_10 - rax_33 + 0x1f s> r10_2)
                                var_1cc_2.d = r10_2
                        else
                            while (true)
                                int64_t rdx_17 = sx.q(rcx_19)
                                rdi_10 += 0x20
                                rcx_19 += 1
                                var_1cc_2:4.d = rdi_10
                                var_1e0_2 = rcx_19
                                
                                if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_16 = *(r8_5 + (rdx_17 << 2) + 4)
                                int32_t var_1d0_4 = 0xffffffff
                                
                                if (rdx_16 != 0)
                                    goto label_141d12ec9
                            
                            var_1cc_2.d = r10_2
                        
                        r8_2 = 0
                    
                    int128_t var_108_2 = 0xffffffff
                    int128_t var_118_2 = var_1e0_2.o
                    var_178 = r11_4.o
                    var_158 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                    int128_t var_168_1 = var_118_2
                    
                    if (0 s< r10_2)
                        int32_t r13_1 = var_168_1:0xc.d
                        void* var_130_1 = &_Base[r15_1 * 2]
                        
                        while (true)
                            int32_t rax_38 = var_1a0_1:4.d
                            var_1a0_1.d = 0
                            
                            if (rax_38 s< 0 && rax_38 != 0)
                                sub_1405947f0(&var_1a8, 0)
                                r8_2 = 0
                            
                            int16_t* rax_39 = var_1a8
                            
                            if (rax_39 != 0)
                                *rax_39 = 0
                            
                            void* rax_40 = *rbx_1
                            
                            if ((rax_40.b & 1) != 0)
                                rax_40 = (rax_40 s>> 1) + rbx_1
                            
                            void* rdi_12 = *(rax_40 + rsi_3)
                            void* rbx_2 = rax_40 + rsi_3
                            
                            if ((rdi_12.b & 1) != 0)
                                rdi_12 = (rdi_12 s>> 1) + rbx_2
                            
                            int32_t rax_42 = *(rbx_2 + 8)
                            int64_t r12_1 = 0
                            var_1c0 = 0
                            int32_t r15_2 = 0
                            int32_t var_1b8_1 = 0
                            int32_t rsi_4 = rax_42 - 1
                            int32_t rax_43 = 0
                            
                            if (rax_42 == 0)
                                rsi_4 = 0
                            
                            int32_t var_1b4_1 = 0
                            
                            if (rdi_12 != 0 && *rdi_12 != 0 && rsi_4 s> 0)
                                if (rsi_4 + 1 s> 0)
                                    sub_1405947f0(&var_1c0, rsi_4 + 1)
                                    rax_43 = var_1b4_1
                                    r15_2 = var_1b8_1
                                    r12_1 = var_1c0
                                
                                r15_2 += rsi_4 + 1
                                
                                if (r15_2 s> rax_43)
                                    sub_140594770(&var_1c0)
                                    r12_1 = var_1c0
                                
                                UnDecorator::getReferenceType(r12_1, rdi_12, rsi_4 * 2)
                                r8_2 = 0
                                *(r12_1 + (sx.q(r15_2) << 1) - 2) = 0
                            
                            void* rsi_5 = *rbx_2
                            
                            if ((rsi_5.b & 1) != 0)
                                rsi_5 = (rsi_5 s>> 1) + rbx_2
                            
                            int32_t rax_45 = *(rbx_2 + 8)
                            int32_t rcx_25 = 0
                            var_1f0 = nullptr
                            int16_t* rdi_14 = nullptr
                            int32_t var_1e4_1 = 0
                            int32_t r14_1 = rax_45 - 1
                            int32_t rax_46 = 0
                            
                            if (rax_45 == 0)
                                r14_1 = 0
                            
                            int32_t var_1e8_1 = 0
                            
                            if (rsi_5 != 0 && *rsi_5 != 0 && r14_1 s> 0)
                                if (r14_1 + 1 s> 0)
                                    sub_1405947f0(&var_1f0, r14_1 + 1)
                                    rcx_25 = var_1e4_1
                                    rax_46 = var_1e8_1
                                    rdi_14 = var_1f0
                                
                                int32_t rbx_4 = r14_1 + 1 + rax_46
                                
                                if (rbx_4 s> rcx_25)
                                    sub_140594770(&var_1f0)
                                    rdi_14 = var_1f0
                                
                                UnDecorator::getReferenceType(rdi_14, rsi_5, r14_1 * 2)
                                r8_2 = 0
                                rdi_14[sx.q(rbx_4) - 1] = 0
                            
                            if (r15_2 != 0)
                                r8_2 = r15_2 - 1
                            
                            sub_140a20ba0(&var_1a8, rdi_14, r8_2)
                            
                            if (rdi_14 != 0)
                                sub_140a74f90(rdi_14)
                            
                            if (r12_1 != 0)
                                sub_140a74f90(r12_1)
                            
                            rbx = var_178.q
                            void* rcx_32 = *rbx
                            void* rax_48 = rcx_32
                            char rdx_25 = *rbx & 1
                            
                            if (rdx_25 != 0)
                                rax_48 = (rax_48 s>> 1) + rbx
                            
                            int64_t rsi_8 = sx.q(r13_1) << 5
                            int32_t rax_50 = *(rax_48 + rsi_8 + 8)
                            int32_t r8_11 = rax_50 - 1
                            
                            if (rax_50 == 0)
                                r8_11 = 0
                            
                            if (rdx_25 != 0)
                                rcx_32 = (rcx_32 s>> 1) + rbx
                            
                            int16_t** rax_51 = rcx_32 + rsi_8
                            int16_t* rdx_26
                            
                            if (*(rcx_32 + rsi_8 + 8) == 0)
                                rdx_26 = &data_142d40450
                            else
                                rdx_26 = *rax_51
                                
                                if ((rdx_26.b & 1) != 0)
                                    rdx_26 = (rdx_26 s>> 1) + rax_51
                            
                            sub_140a2cf70(&var_1a8, rdx_26, r8_11)
                            sub_140a35810(&var_1a8)
                            int32_t rdx_28 = var_1a0_1.d
                            int16_t* rcx_36
                            int32_t rdx_29
                            
                            if (rdx_28 == 0)
                                rdx_29 = 0
                                rcx_36 = &data_142d40450
                            else
                                rcx_36 = var_1a8
                                rdx_29 = rdx_28 - 1
                            
                            r13 = arg1
                            uint64_t rax_52 = sub_140b21410(rcx_36, rdx_29 * 2, r13[0x20])
                            int64_t* r14_2 = var_130_1
                            var_190 = rax_52
                            *r14_2 = rax_52
                            void* rax_53 = *rbx
                            
                            if ((rax_53.b & 1) != 0)
                                rax_53 = (rax_53 s>> 1) + rbx
                            
                            r14_2[1].d = *(rax_53 + rsi_8 + 0x10)
                            r15_1 = var_138_1 + 1
                            uint64_t r9_4 = var_190
                            var_130_1 = &r14_2[2]
                            r14 = arg2
                            var_138_1 = r15_1
                            int64_t* rcx_42
                            
                            if (r14[1].d == *(r14 + 0x34))
                            label_141d13242:
                                rcx_42 = nullptr
                            else
                                void* rdi_15 = r14[8]
                                void* r8_13 = &r14[7]
                                
                                if (rdi_15 != 0)
                                    r8_13 = rdi_15
                                
                                int32_t rax_61 = *(r8_13 + ((sx.q((r9_4 u>> 0x20).d * 0x17 + r9_4.d)
                                    & (sx.q(r14[9].d) - 1)) << 2))
                                
                                if (rax_61 == 0xffffffff)
                                label_141d13242_1:
                                    rcx_42 = nullptr
                                else
                                    while (true)
                                        rcx_42 = sx.q(rax_61) * 0x60 + *r14
                                        
                                        if (*rcx_42 == r9_4)
                                            break
                                        
                                        rax_61 = rcx_42[0xb].d
                                        
                                        if (rax_61 == 0xffffffff)
                                            goto label_141d13242_2
                                    
                                    if (rax_61 == 0xffffffff)
                                    label_141d13242_2:
                                        rcx_42 = nullptr
                            
                            void* r8_14 = &rcx_42[1]
                            
                            if (rcx_42 == 0)
                                r8_14 = nullptr
                            
                            void* rax_69
                            
                            if (var_90_1 == var_64_1)
                            label_141d132c8:
                                rax_69 = nullptr
                            else
                                void var_60
                                void* rcx_46 = &var_60
                                
                                if (var_58_1 != 0)
                                    rcx_46 = var_58_1
                                
                                int32_t rax_68 = *(rcx_46 + ((
                                    sx.q((r9_4 u>> 0x20).d * 0x17 + r9_4.d) & sx.q(var_50_1 - 1)) << 2))
                                
                                if (rax_68 == 0xffffffff)
                                label_141d132c8_1:
                                    rax_69 = nullptr
                                else
                                    void* rdi_17 = var_98
                                    int64_t rdx_36
                                    
                                    while (true)
                                        rdx_36 = sx.q(rax_68) * 0x60
                                        
                                        if (*(rdi_17 + rdx_36) == r9_4)
                                            break
                                        
                                        rax_68 = *(rdi_17 + rdx_36 + 0x58)
                                        
                                        if (rax_68 == 0xffffffff)
                                            goto label_141d132c8_2
                                    
                                    rax_69 = rdi_17 + rdx_36
                                    
                                    if (rax_68 == 0xffffffff)
                                    label_141d132c8_2:
                                        rax_69 = nullptr
                            
                            void* rdi_18 = rax_69 + 8
                            void* rax_70 = *rbx
                            
                            if (rax_69 == 0)
                                rdi_18 = nullptr
                            
                            if ((rax_70.b & 1) != 0)
                                rax_70 = (rax_70 s>> 1) + rbx
                            
                            int64_t* rcx_50 = *r13 + 0x10
                            void* rdx_37 = *rcx_50
                            
                            if ((rdx_37.b & 1) != 0)
                                rdx_37 = (rdx_37 s>> 1) + rcx_50
                            
                            void* rcx_53 = sx.q(*(rsi_8 + rax_70 + 0x10)) * 0x50 + rdx_37
                            
                            if ((r8_14 != 0 && (*(r8_14 + 0x18) != *(rcx_53 + 0x18)
                                    || *(r8_14 + 0x20) != *(rcx_53 + 0x20)
                                    || *(r8_14 + 0x28) != *(rcx_53 + 0x28))) || (rdi_18 != 0 && (
                                    *(rdi_18 + 0x18) != *(rcx_53 + 0x18)
                                    || *(rdi_18 + 0x20) != *(rcx_53 + 0x20)
                                    || *(rdi_18 + 0x28) != *(rcx_53 + 0x28))))
                                rbx.b = 1
                                var_1f8_1 = 1
                                goto label_141d133c8
                            
                            void* var_a0_1 = rcx_53
                            int64_t* var_a8 = &var_190
                            void var_c8
                            sub_141cf1c40(&var_98, &var_c8, &var_a8, nullptr)
                            var_168_1:8.d &= not.d(var_178:0xc.d)
                            sub_141d02a20(&var_178:8)
                            r13_1 = var_168_1:0xc.d
                            
                            if (r13_1 s>= *(var_168_1.q + 8))
                                r13 = arg1
                                break
                            
                            rbx_1 = var_f0.q
                            r8_2 = 0
                            rsi_3 = var_b8_1
                    
                    rbx = zx.q(var_1f8_1)
                label_141d133c8:
                    var_e0_1:8.d &= not.d(var_f0:0xc.d)
                    sub_141d02a20(&var_f0:8)
                    rdx_13 = var_e0_1:0xc.d
                    
                    if (rdx_13 s>= *(var_e0_1.q + 8))
                        break
                    
                    r8_2 = 0
                
                if (rbx.b == 0)
                    rsi_1 = -1
                    sub_141cf12a0(r14, &var_98)
                    r15_6 = var_1b0_1
                else
                label_141d133e9:
                    rsi_1 = -1
                    r15_6 = var_1b0_1 + 1
                    r13[0x20] += 1
                    var_1b0_1 = r15_6
            
            rdi_4 = &r13[0x26]
            qsort(_Base, sx.q(*rdi_4), 0x10, cmpAddrMapByPos)
            int16_t* rcx_59 = var_1a8
            
            if (rcx_59 != 0)
                sub_140a74f90(rcx_59)
            
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            sub_141cf8700(&var_98)
            
            if (rbx.b == 0)
                if (r15_6 s< rax_1)
                    int64_t rcx_62 = sx.q(*rdi_4)
                    int64_t rax_85 = 4 * rcx_62
                    
                    if (mulu.dp.q(4, rcx_62) u>> 0x40 != zx.o(0))
                        rax_85 = -1
                    
                    int64_t rax_86 = j_sub_140a82f30(rax_85)
                    int64_t rcx_64 = sx.q(*rdi_4)
                    r13[0x22] = rax_86
                    int64_t rax_87 = 8 * rcx_64
                    
                    if (mulu.dp.q(8, rcx_64) u>> 0x40 != zx.o(0))
                        rax_87 = -1
                    
                    r13[0x23] = j_sub_140a82f30(rax_87)
                    int64_t rax_89 = j_sub_140a82f30(0x404)
                    rdi_4 = zx.q(*rdi_4)
                    void* r11_5 = &r13[0x26]
                    int32_t i_1 = 0
                    r13[0x21] = rax_89
                    
                    if (rdi_4.d s> 0)
                        int64_t* _Base_2 = _Base
                        int32_t* r14_4 = nullptr
                        int64_t* r15_7 = nullptr
                        uint64_t rdx_42 = -1
                        
                        do
                            int64_t r12_2 = *_Base_2
                            uint32_t r9_6 = (r12_2 u>> 0x38).d
                            
                            if (r9_6 != rdx_42.d)
                                int32_t j_2 = (rdx_42 + 1).d
                                int32_t j_1 = j_2
                                
                                if (j_2 s<= r9_6 && r9_6 - j_2 + 1 u>= 4)
                                    int64_t rcx_66 = r13[0x21]
                                    int64_t rdi_19 = rcx_66 + (sx.q(j_2) << 2)
                                    
                                    if (rdi_19 u> &r13[0x21]
                                            || rcx_66 + (zx.q(r9_6) << 2) u< &r13[0x21])
                                        int32_t rdx_46 = (r9_6 - j_2 + 1) & 0x80000003
                                        
                                        if (rdx_46 s< 0)
                                            rdx_46 = ((rdx_46 - 1) | 0xfffffffc) + 1
                                        
                                        int32_t rax_94 = r9_6 - rdx_46
                                        
                                        do
                                            j_1 += 4
                                        while (j_1 s<= rax_94)
                                        
                                        int32_t temp12_1
                                        int32_t temp13_1
                                        temp12_1:temp13_1 = sx.q(rax_94 - j_2 + 4)
                                        int64_t rcx_70
                                        int64_t rdi_20
                                        rdi_20, rcx_70 = __memfill_u32(rdi_19, i_1, 
                                            sx.q((temp13_1 + (temp12_1 & 3)) s>> 2) << 4 u>> 2)
                                
                                for (int64_t j = sx.q(j_1); j s<= zx.q(r9_6); j += 1)
                                    *(r13[0x21] + (j << 2)) = i_1
                                
                                rdx_42 = zx.q(r9_6)
                                r11_5 = &r13[0x26]
                            
                            i_1 += 1
                            *(r15_7 + r13[0x23]) = r12_2
                            r15_7 = &r15_7[1]
                            int32_t rax_103 = _Base_2[1].d
                            _Base_2 = &_Base_2[2]
                            *(r14_4 + r13[0x22]) = rax_103
                            r14_4 = &r14_4[1]
                            rdi_4 = zx.q(*r11_5)
                        while (i_1 s< rdi_4.d)
                        
                        var_190 = rdx_42
                        rsi_1 = rdx_42.d
                    
                    int32_t i_2 = rsi_1 + 1
                    
                    if (rsi_1 + 1 s< 0x101 && 0x101 - (rsi_1 + 1) u>= 4)
                        int64_t rcx_72 = r13[0x21]
                        int64_t r10_3 = rcx_72 + (sx.q(rsi_1 + 1) << 2)
                        
                        if ((r10_3 u> &r13[0x21] || rcx_72 + 0x400 u< &r13[0x21])
                                && (r10_3 u> r11_5 || rcx_72 + 0x400 u< r11_5))
                            int32_t rdx_53 = (0x101 - (rsi_1 + 1)) & 0x80000003
                            
                            if (rdx_53 s< 0)
                                rdx_53 = ((rdx_53 - 1) | 0xfffffffc) + 1
                            
                            do
                                i_2 += 4
                            while (i_2 s< 0x101 - rdx_53)
                            
                            int32_t temp10_1
                            int32_t temp11_1
                            temp10_1:temp11_1 = sx.q(0x101 - rdx_53 - (rsi_1 + 1) + 3)
                            int64_t rcx_77
                            rdi_4, rcx_77 = __memfill_u32(r10_3, rdi_4.d, 
                                sx.q((temp11_1 + (temp10_1 & 3)) s>> 2) << 4 u>> 2)
                    
                    int64_t i_6 = sx.q(i_2)
                    
                    if (i_6 s< 0x101)
                        int64_t i_3 = i_6 << 2
                        
                        do
                            *(i_3 + r13[0x21]) = *r11_5
                            i_3 += 4
                        while (i_3 s< 0x404)
                    
                    void** r9_9 = *r13 + 0x20
                    *(r13 + 0x14a) = 1
                    
                    if (arg3 == 0)
                        sub_141d01090(r9_9, 0)
                    else
                        int32_t r11_6 = r9_9[3].d
                        int32_t var_1dc_5 = 1
                        void* var_1d8_3 = &r9_9[2]
                        int32_t rcx_79 = 0
                        int32_t var_1e0_3 = 0
                        int32_t rdi_22 = 0
                        int32_t var_1d0_5 = 0xffffffff
                        int64_t var_1cc_3 = 0
                        
                        if (r11_6 != 0)
                            void* r8_16 = r9_9[2]
                            
                            if ((r8_16.b & 1) != 0)
                                r8_16 = (r8_16 s>> 1) + &r9_9[2]
                            
                            int32_t temp8_1
                            int32_t temp9_1
                            temp8_1:temp9_1 = sx.q(r11_6 - 1)
                            int32_t rdx_60 = *r8_16
                            
                            if (rdx_60 != 0)
                            label_141d13759:
                                int32_t rax_120 = neg.d(rdx_60) & rdx_60
                                uint64_t rflags_5
                                int32_t temp0_8
                                temp0_8, rflags_5 = _bit_scan_reverse(rax_120)
                                int32_t var_1dc_6 = rax_120
                                int32_t rax_121
                                
                                if (rax_120 == 0)
                                    rax_121 = 0x20
                                else
                                    rax_121 = 0x1f - temp0_8
                                
                                var_1cc_3.d = rdi_22 - rax_121 + 0x1f
                                
                                if (rdi_22 - rax_121 + 0x1f s> r11_6)
                                    var_1cc_3.d = r11_6
                            else
                                while (true)
                                    int64_t rdx_61 = sx.q(rcx_79)
                                    rdi_22 += 0x20
                                    rcx_79 += 1
                                    var_1cc_3:4.d = rdi_22
                                    var_1e0_3 = rcx_79
                                    
                                    if (rdx_61.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_60 = *(r8_16 + (rdx_61 << 2) + 4)
                                    int32_t var_1d0_6 = 0xffffffff
                                    
                                    if (rdx_60 != 0)
                                        goto label_141d13759
                                
                                var_1cc_3.d = r11_6
                        
                        void** var_f8_1 = r9_9
                        int128_t zmm0_2 = var_1e0_3.o
                        int128_t var_108_3 = 0xffffffff
                        int16_t var_140_1 = 0
                        void* rax_123 = zmm0_2.q
                        int128_t var_168_2 = zmm0_2
                        var_178 = r9_9.o
                        zmm0_2.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
                        var_158.o = zmm0_2
                        
                        if (0 s< *(rax_123 + 8))
                            int32_t i_4 = var_168_2:0xc.d
                            
                            do
                                int64_t* rax_124 = var_178.q
                                void* rdx_62 = *rax_124
                                
                                if ((rdx_62.b & 1) != 0)
                                    rdx_62 = (rdx_62 s>> 1) + rax_124
                                
                                void* rcx_83 = sx.q(i_4) * 0x50 + rdx_62
                                void* rbx_6 = *rcx_83
                                
                                if ((rbx_6.b & 1) != 0)
                                    rbx_6 = (rbx_6 s>> 1) + rcx_83
                                
                                int32_t rax_126 = *(rcx_83 + 8)
                                int32_t rdx_64 = 0
                                var_1f0 = nullptr
                                int16_t* rdi_24 = nullptr
                                int32_t var_1e8_3 = 0
                                int32_t r14_5 = rax_126 - 1
                                int32_t rax_127 = 0
                                
                                if (rax_126 == 0)
                                    r14_5 = 0
                                
                                int32_t var_1e4_2 = 0
                                int32_t rsi_10
                                
                                if (rbx_6 != 0 && *rbx_6 != 0 && r14_5 s> 0)
                                    if (r14_5 + 1 s> 0)
                                        sub_1405947f0(&var_1f0, r14_5 + 1)
                                        rax_127 = var_1e4_2
                                        rdx_64 = var_1e8_3
                                        rdi_24 = var_1f0
                                    
                                    rsi_10 = rdx_64 + 1 + r14_5
                                    
                                    if (rsi_10 s> rax_127)
                                        sub_140594770(&var_1f0)
                                        rdi_24 = var_1f0
                                    
                                    UnDecorator::getReferenceType(rdi_24, rbx_6, r14_5 * 2)
                                    rdi_24[sx.q(rsi_10) - 1] = 0
                                
                                int32_t rsi_11
                                
                                if (rbx_6 == 0 || *rbx_6 == 0 || r14_5 s<= 0 || rsi_10 == 0)
                                    rsi_11 = 0
                                else
                                    rsi_11 = rsi_10 - 1
                                
                                int32_t rbx_8 = r13[0x1f].d
                                int32_t rax_130
                                
                                if (rbx_8 == 0)
                                    rax_130 = rbx_8 + 2
                                
                                if (rbx_8 != 0 || rsi_11 == 0xffffffff)
                                    rax_130 = 1
                                
                                int64_t r14_6 = r13[0x1e]
                                int32_t rcx_88 = rax_130 + rsi_11
                                var_1c0 = 0
                                int32_t var_1b8_3 = rbx_8
                                
                                if (rbx_8 != 0 || rcx_88 != 0)
                                    sub_1405a4c70(&var_1c0, rbx_8 + rcx_88, 0)
                                    memcpy(var_1c0, r14_6, rbx_8 * 2)
                                else
                                    int32_t var_1b4_2 = 0
                                
                                sub_140a2cf70(&var_1c0, rdi_24, rsi_11)
                                
                                if (rdi_24 != 0)
                                    sub_140a74f90(rdi_24)
                                
                                int64_t* rdi_25 = *arg3
                                void* rbx_11 = &rdi_25[sx.q(arg3[1].d) * 2]
                                
                                if (rdi_25 == rbx_11)
                                label_141d13986:
                                    int64_t* var_150
                                    sub_141d0d990(var_150, i_4)
                                    var_140_1.b = 1
                                else
                                    while (true)
                                        int16_t* rdx_70
                                        
                                        if (rdi_25[1].d == 0)
                                            rdx_70 = &data_142d40450
                                        else
                                            rdx_70 = *rdi_25
                                        
                                        if (sub_140a2c910(&var_1c0, rdx_70, 1) != 0)
                                            break
                                        
                                        rdi_25 = &rdi_25[2]
                                        
                                        if (rdi_25 == rbx_11)
                                            goto label_141d13986
                                
                                int64_t rcx_95 = var_1c0
                                
                                if (rcx_95 != 0)
                                    sub_140a74f90(rcx_95)
                                
                                var_168_2:8.d &= not.d(var_178:0xc.d)
                                sub_141d02a20(&var_178:8)
                                i_4 = var_168_2:0xc.d
                            while (i_4 s< *(var_168_2.q + 8))
                            
                            if (var_140_1.b != 0 && var_140_1:1.b != 0)
                                sub_141cfded0(r9_9, r9_9[1].d - *(r9_9 + 0x24), 1)
                        
                        rdi_4 = *r13 + 0x20
                        sub_141d10f70(rdi_4)
                        sub_141cfded0(rdi_4, *(rdi_4 + 8) - *(rdi_4 + 0x24), 1)
                    
                    rdi_4.b = 1
                else
                    rdi_4.b = 0
                
                break
            
            if (r15_6 s>= rax_1)
                rdi_4.b = 0
                break
        
        int64_t* _Base_1 = _Base
        
        if (_Base_1 != 0)
            sub_140a74f90(_Base_1)
        
        result = zx.q(rdi_4.b)
    else
        result.b = 0

__security_check_cookie(var_48 ^ &var_218)
return result
