// 函数: sub_1420e9030
// 地址: 0x1420e9030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_308
int64_t rax_1 = __security_cookie ^ &var_308
int64_t* r14 = arg1
int32_t var_2a0 = 0
int32_t r15 = 0
int32_t var_268 = 0
int128_t* r12 = arg2
int128_t* rax_2 = sub_140cc3cb0(arg1[1])
int128_t* var_280 = rax_2
int128_t* r13 = rax_2

if (rax_2 == 0)
    int128_t* rax_3 = j_sub_140a82f30(0x20)
    var_280 = rax_3
    r13 = rax_3
    
    if (rax_3 == 0)
        r13 = nullptr
        var_280 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

int16_t* var_278 = nullptr
void* var_270 = 0x80
sub_1405a4df0(&var_278)
int32_t rdx_2 = *(r12 + 8) + 1

if (rdx_2 s> *(r12 + 0xc))
    sub_1405c5570(r12, rdx_2)

void** rsi = var_278
int32_t rdi = 0
void** var_238 = rsi
int64_t var_258 = 0

while (true)
    int64_t rbx_1 = *r14
    void** const var_230
    std::exception::exception(&var_230)
    int64_t var_218_1 = rbx_1
    var_230 = &data_1432c4c68
    int32_t rax_4 = *(r12 + 8)
    int128_t* var_210_1 = r13
    
    if (rdi s< rax_4)
        while (true)
            int64_t rdx_3 = *r12
            void* r9_1 = *(rdx_3 + (var_258 << 3))
            var_258 += 1
            int32_t rcx_6 = rax_4 - 1
            
            if (rdi + 1 s<= rcx_6)
                rcx_6 = rdi + 1
            
            int32_t rbx_2 = *(*(r9_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_6) << 3))
            int64_t rcx_7 = sx.q(sub_140b673d0())
            int32_t i_15 = divs.dp.d(sx.q((rcx_7 - 1).d + rbx_2), rcx_7.d)
            
            if (i_15 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_7
                    i = i_15
                    i_15 -= 1
                while (i != 1)
            
            void* rbx_3 = r9_1
            void* rcx_8 = *(rbx_3 + 0x10)
            void* var_2a8_1 = rcx_8
            
            if (((*(rcx_8 + 0xcc) u>> 0x16).b & 1) == 0)
                sub_140cb0360(rcx_8, 0)
                var_2a8_1 = *(rbx_3 + 0x10)
            
            void* r9_2 = var_2a8_1
            uint64_t r12_1 = 0
            rsi[1].d = 0
            uint32_t r10_1 = 0
            uint32_t var_2c8_1 = 0
            void** r8_1 = rsi
            void** var_2b8_1 = rsi
            void* r11_1 = rbx_3
            void* var_298_1 = rbx_3
            *rsi = rbx_3
            *(rsi + 0xc) = -1
            
            while (true)
                int32_t rsi_1 = r12_1.d
                int32_t rax_13 = 0
                
                if (r10_1 s> 0)
                    do
                        *(r8_1 + 0xc) -= 1
                        
                        if (*(r8_1 + 0xc) s> 0)
                            r11_1 = sx.q(r8_1[1].d) + *r8_1
                            r12_1 = zx.q(r8_1[2].d)
                            rsi_1 = r12_1.d
                            var_298_1 = r11_1
                            *r8_1 = r11_1
                            break
                        
                        r11_1 = r8_1[-3]
                        r8_1 -= 0x18
                        rax_13 += 1
                        var_298_1 = r11_1
                        var_2b8_1 = r8_1
                    while (rax_13 s< r10_1)
                
                int64_t r10_2 = *(r9_2 + 0x1e8)
                r12_1 = zx.q(r12_1.d + 1)
                uint64_t rax_15 = zx.q(*(r10_2 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_15.d u>> 8 & 0x1f
                uint64_t rcx_10 = zx.q(rdi_5 - 1)
                int32_t var_2e8
                int16_t* const var_2e0
                int16_t* const var_2d8
                
                if (rcx_10.d u> 0x11)
                    void* rax_280 = *(rbx_3 + 0x10)
                    
                    if (rax_280 != 0)
                        int64_t var_208 = *(rax_280 + 0x18)
                        sub_140b63b70(&var_208, &var_278)
                    else
                        var_278 = nullptr
                        sub_1405947f0(&var_278, (rax_280 + 5).d)
                        var_270.d = rax_280.d + 5
                        
                        if (rax_280.d + 5 s> var_270:4.d)
                            sub_140594770(&var_278)
                        
                        UnDecorator::getReferenceType(var_278, u"None", 0xa)
                    
                    int16_t* const rbx_37 = &data_142d40450
                    
                    if (var_270.d != 0)
                        rbx_37 = var_278
                    
                    int16_t* var_1f8
                    sub_140d21e10(r9_1, &var_1f8, 0)
                    int16_t* const rax_283 = &data_142d40450
                    int32_t var_1f0
                    
                    if (var_1f0 != 0)
                        rax_283 = var_1f8
                    
                    var_2d8 = rax_283
                    var_2e0 = rbx_37
                    var_2e8 = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    int16_t* rcx_231 = var_1f8
                    
                    if (rcx_231 != 0)
                        sub_140a74f90(rcx_231)
                    
                    int16_t* rcx_232 = var_278
                    r15 = (r15 | 1) & 0xfffffffe
                    var_2a0 = r15
                    
                    if (rcx_232 != 0)
                        sub_140a74f90(rcx_232)
                    
                    sub_140afbb40()
                    r8_1 = var_2b8_1
                    r11_1 = var_298_1
                    goto label_1420e926a
                
                int32_t* var_2c0
                void* var_228
                void** var_1d8
                int32_t rax_236
                void* const rax_240
                void* rcx_132
                uint32_t rdx_133
                void* rbx_30
                int32_t* rsi_24
                void* rdi_31
                uint64_t r8_26
                int64_t* r9_14
                int32_t r10_13
                
                switch (rcx_10)
                    case 0, 1
                        int32_t* r15_1 = *r14
                        void* rdi_8 = (rax_15 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_15.b)
                        var_2c8_1 = r10_1
                        int32_t* var_290_1 = r15_1
                        int64_t* r8_2 = *rdi_8
                        
                        if (r8_2 == 0)
                        label_1420e922f:
                            r8_1 = var_2b8_1
                            r15 = var_2a0
                            continue
                        else
                            int32_t i_2 = *(r8_2 + 0xc)
                            void* rsi_2
                            
                            if (i_2 s>= data_143e1d9b4)
                                rsi_2 = nullptr
                            else
                                uint32_t rdx_8 = zx.d(i_2.w)
                                int32_t i_16 = i_2
                                
                                if (i_2 s< 0)
                                    i_16 = i_2 + 0xffff
                                    rdx_8 -= 0x10000
                                
                                rsi_2 = *(data_143e1d9a0 + (sx.q(i_16 s>> 0x10) << 3))
                                    + sx.q(rdx_8) * 0x18
                            
                            int32_t i_17 = *(rsi_2 + 0xc)
                            
                            if (i_17 == *r15_1)
                                r8_1 = var_2b8_1
                                r15 = var_2a0
                                rbx_3 = r9_1
                                continue
                            
                            char rcx_13 = *(rsi_2 + 0xb) & 1
                            
                            if (rcx_13 == 0 && i_17 == 0)
                                rbx_3 = r9_1
                                
                                if (i_2 s<= data_143e1d994)
                                    goto label_1420e922f
                                
                                if (sub_1420de8c0(r15_1, r8_2) != 0)
                                    int64_t* r9_3 = *rdi_8
                                    
                                    if ((r9_3[1].d & 0x1400) == 0)
                                        int32_t r10_3 = *(r9_3 + 0xc)
                                        void* const rax_24
                                        
                                        if (r10_3 s>= data_143e1d9b4)
                                            rax_24 = nullptr
                                        else
                                            uint32_t rdx_11 = zx.d(r10_3.w)
                                            int32_t rax_20 = r10_3
                                            
                                            if (r10_3 s< 0)
                                                rax_20 = r10_3 + 0xffff
                                                rdx_11 -= 0x10000
                                            
                                            rax_24 =
                                                *(data_143e1d9a0 + (sx.q(rax_20 s>> 0x10) << 3))
                                                + sx.q(rdx_11) * 0x18
                                        
                                        if (((*(rax_24 + 8) u>> 0x1e).b & 1) == 0)
                                            var_2e0.b = 1
                                            var_2e8.q = r13
                                            sub_1420dc470(r15_1, r10_3, rsi_2, r9_3, var_2e8, 
                                                var_2e0.b)
                                            r8_1 = var_2b8_1
                                            r11_1 = var_298_1
                                            r10_1 = var_2c8_1
                                            r15 = var_2a0
                                            r9_2 = var_2a8_1
                                            continue
                                            continue
                                
                                void* rdi_9 = *(r15_1 + 8)
                                int32_t i_1 = *(*rdi_8 + 0xc)
                                int32_t* rdx_14 = *(rdi_9 + 0x28)
                                int64_t r8_4 = sx.q(*(rdi_9 + 0x30))
                                int32_t* rcx_18 = rdx_14
                                void* rax_28 = &rdx_14[r8_4]
                                
                                if (rdx_14 != rax_28)
                                    while (*rcx_18 != i_1)
                                        rcx_18 = &rcx_18[1]
                                        
                                        if (rcx_18 == rax_28)
                                            goto label_1420e94b8
                                    
                                    r11_1 = var_298_1
                                    r10_1 = var_2c8_1
                                    r15 = var_2a0
                                    r9_2 = var_2a8_1
                                
                                if (rdx_14 != rax_28 && ((rcx_18 - rdx_14) s>> 2).d != 0xffffffff)
                                    goto label_1420e9201
                                
                            label_1420e94b8:
                                int32_t rax_29 = (r8_4 + 1).d
                                *(rdi_9 + 0x30) = rax_29
                                
                                if (rax_29 s> *(rdi_9 + 0x34))
                                    sub_1405a4cf0(rdi_9 + 0x28)
                                
                                *((r8_4 << 2) + *(rdi_9 + 0x28)) = i_1
                            label_1420e9b08:
                                r15 = var_2a0
                                r11_1 = var_298_1
                                r10_1 = var_2c8_1
                                r8_1 = var_2b8_1
                                goto label_1420e926f
                            
                            if (rcx_13 == 0)
                                i_2 = i_17
                            
                            void* const rax_34
                            
                            if (i_2 s>= data_143e1d9b4)
                                rax_34 = nullptr
                            else
                                uint32_t rdx_16 = zx.d(i_2.w)
                                int32_t i_18 = i_2
                                
                                if (i_2 s< 0)
                                    i_18 = i_2 + 0xffff
                                    rdx_16 -= 0x10000
                                
                                rax_34 = *(data_143e1d9a0 + (sx.q(i_18 s>> 0x10) << 3))
                                    + sx.q(rdx_16) * 0x18
                            
                            void* rdi_10 = *(r15_1 + 8)
                            int32_t* rdx_18 = *(rdi_10 + 0x18)
                            int64_t r8_5 = sx.q(*(rdi_10 + 0x20))
                            int32_t* rcx_24 = rdx_18
                            int32_t* r13_3 = sx.q(not.d(*(rax_34 + 0xc))) * 0x50 + data_143e1d678
                            var_2c0 = r13_3
                            void* rax_38 = &rdx_18[r8_5]
                            
                            if (rdx_18 != rax_38)
                                while (*rcx_24 != i_2)
                                    rcx_24 = &rcx_24[1]
                                    
                                    if (rcx_24 == rax_38)
                                        goto label_1420e957b
                            
                            if (rdx_18 == rax_38 || ((rcx_24 - rdx_18) s>> 2).d == 0xffffffff)
                            label_1420e957b:
                                int32_t rax_39 = (r8_5 + 1).d
                                *(rdi_10 + 0x20) = rax_39
                                
                                if (rax_39 s> *(rdi_10 + 0x24))
                                    sub_1405a4cf0(rdi_10 + 0x18)
                                
                                *((r8_5 << 2) + *(rdi_10 + 0x18)) = i_2
                            
                            sub_1408d92c0(&r13_3[0xe], r15_1)
                            int32_t* rsi_5 = *(r13_3 + 0x18)
                            int64_t r14_1 = 0
                            uint64_t r12_3 = sx.q(r13_3[8]) << 2 u>> 2
                            
                            if (rsi_5 u> &rsi_5[sx.q(r13_3[8])])
                                r12_3 = 0
                            
                            if (r12_3 != 0)
                                do
                                    int32_t i_3 = *rsi_5
                                    
                                    if (i_3 != *r15_1)
                                        void* rbx_4 = *(r15_1 + 8)
                                        int32_t* rdx_21 = *(rbx_4 + 0x18)
                                        int64_t r8_6 = sx.q(*(rbx_4 + 0x20))
                                        int32_t* rcx_29 = rdx_21
                                        void* rax_43 = &rdx_21[r8_6]
                                        
                                        if (rdx_21 != rax_43)
                                            while (*rcx_29 != i_3)
                                                rcx_29 = &rcx_29[1]
                                                
                                                if (rcx_29 == rax_43)
                                                    goto label_1420e961b
                                        
                                        if (rdx_21 == rax_43
                                            || ((rcx_29 - rdx_21) s>> 2).d == 0xffffffff)
                                        label_1420e961b:
                                            int32_t rax_44 = (r8_6 + 1).d
                                            *(rbx_4 + 0x20) = rax_44
                                            
                                            if (rax_44 s> *(rbx_4 + 0x24))
                                                sub_1405a4cf0(rbx_4 + 0x18)
                                            
                                            *((r8_6 << 2) + *(rbx_4 + 0x18)) = i_3
                                    
                                    rsi_5 = &rsi_5[1]
                                    r14_1 += 1
                                while (r14_1 != r12_3)
                                
                                r13_3 = var_2c0
                                r15_1 = var_290_1
                            
                            int64_t rsi_6 = 0
                            int32_t* r14_2 = *(r13_3 + 0x28)
                            r8_1 = var_2b8_1
                            r11_1 = var_298_1
                            r10_1 = var_2c8_1
                            r13 = var_280
                            r9_2 = var_2a8_1
                            rbx_3 = r9_1
                            uint64_t r12_5 = sx.q(r13_3[0xc]) << 2 u>> 2
                            
                            if (r14_2 u> &r14_2[sx.q(r13_3[0xc])])
                                r12_5 = 0
                            
                            if (r12_5 == 0)
                                r14 = arg1
                                r15 = var_2a0
                                continue
                            else
                                do
                                    void* rbx_5 = *(r15_1 + 8)
                                    int32_t i_4 = *r14_2
                                    int32_t* rdx_23 = *(rbx_5 + 0x28)
                                    int64_t r8_7 = sx.q(*(rbx_5 + 0x30))
                                    int32_t* rcx_33 = rdx_23
                                    void* rax_48 = &rdx_23[r8_7]
                                    
                                    if (rdx_23 != rax_48)
                                        while (*rcx_33 != i_4)
                                            rcx_33 = &rcx_33[1]
                                            
                                            if (rcx_33 == rax_48)
                                                goto label_1420e96de
                                    
                                    if (rdx_23 == rax_48
                                        || ((rcx_33 - rdx_23) s>> 2).d == 0xffffffff)
                                    label_1420e96de:
                                        int32_t rax_49 = (r8_7 + 1).d
                                        *(rbx_5 + 0x30) = rax_49
                                        
                                        if (rax_49 s> *(rbx_5 + 0x34))
                                            sub_1405a4cf0(rbx_5 + 0x28)
                                        
                                        *((r8_7 << 2) + *(rbx_5 + 0x28)) = i_4
                                    
                                    r15_1 = var_290_1
                                    r14_2 = &r14_2[1]
                                    rsi_6 += 1
                                while (rsi_6 != r12_5)
                                
                                r8_1 = var_2b8_1
                                r11_1 = var_298_1
                            
                            goto label_1420e9261
                    case 2
                        int32_t* rsi_17 = *r14
                        void* rdi_19 = (rax_15 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_15.b)
                        var_2c8_1 = r10_1
                        int64_t* r8_20 = *rdi_19
                        
                        if (r8_20 == 0)
                            r8_1 = var_2b8_1
                            continue
                        else
                            int32_t i_5 = *(r8_20 + 0xc)
                            void* r14_5
                            
                            if (i_5 s>= data_143e1d9b4)
                                r14_5 = nullptr
                            else
                                uint32_t rdx_74 = zx.d(i_5.w)
                                int32_t i_25 = i_5
                                
                                if (i_5 s< 0)
                                    i_25 = i_5 + 0xffff
                                    rdx_74 -= 0x10000
                                
                                r14_5 = *(data_143e1d9a0 + (sx.q(i_25 s>> 0x10) << 3))
                                    + sx.q(rdx_74) * 0x18
                            
                            int32_t i_26 = *(r14_5 + 0xc)
                            
                            if (i_26 == *rsi_17)
                                r8_1 = var_2b8_1
                                r14 = arg1
                                rbx_3 = r9_1
                                continue
                            else
                                char rcx_107 = *(r14_5 + 0xb) & 1
                                
                                if (rcx_107 == 0 && i_26 == 0)
                                    rbx_3 = r9_1
                                    
                                    if (i_5 s<= data_143e1d994)
                                        r8_1 = var_2b8_1
                                        r14 = arg1
                                        continue
                                    else
                                        if (sub_1420de8c0(rsi_17, r8_20) == 0)
                                            var_2c0.d = *(*rdi_19 + 0xc)
                                            sub_1408d92c0(*(rsi_17 + 8) + 0x28, &var_2c0)
                                        else
                                            int64_t* r9_6 = *rdi_19
                                            
                                            if ((r9_6[1].d & 0x1400) != 0)
                                                var_2c0.d = *(*rdi_19 + 0xc)
                                                sub_1408d92c0(*(rsi_17 + 8) + 0x28, &var_2c0)
                                            else
                                                int32_t r10_8 = *(r9_6 + 0xc)
                                                void* const rax_144
                                                
                                                if (r10_8 s>= data_143e1d9b4)
                                                    rax_144 = nullptr
                                                else
                                                    uint32_t rdx_77 = zx.d(r10_8.w)
                                                    int32_t rax_140 = r10_8
                                                    
                                                    if (r10_8 s< 0)
                                                        rax_140 = r10_8 + 0xffff
                                                        rdx_77 -= 0x10000
                                                    
                                                    rax_144 = *(data_143e1d9a0
                                                        + (sx.q(rax_140 s>> 0x10) << 3))
                                                        + sx.q(rdx_77) * 0x18
                                                
                                                if (((*(rax_144 + 8) u>> 0x1e).b & 1) != 0)
                                                    var_2c0.d = *(*rdi_19 + 0xc)
                                                    sub_1408d92c0(*(rsi_17 + 8) + 0x28, &var_2c0)
                                                else
                                                    var_2e0.b = 1
                                                    var_2e8.q = r13
                                                    sub_1420dc470(rsi_17, r10_8, r14_5, r9_6, 
                                                        var_2e8, var_2e0.b)
                                        
                                        r8_1 = var_2b8_1
                                        r11_1 = var_298_1
                                        r10_1 = var_2c8_1
                                        r14 = arg1
                                    
                                    r9_2 = var_2a8_1
                                    continue
                                
                                if (rcx_107 == 0)
                                    i_5 = i_26
                                
                                void* const rax_151
                                
                                if (i_5 s>= data_143e1d9b4)
                                    rax_151 = nullptr
                                else
                                    uint32_t rdx_81 = zx.d(i_5.w)
                                    int32_t i_27 = i_5
                                    
                                    if (i_5 s< 0)
                                        i_27 = i_5 + 0xffff
                                        rdx_81 -= 0x10000
                                    
                                    rax_151 = *(data_143e1d9a0 + (sx.q(i_27 s>> 0x10) << 3))
                                        + sx.q(rdx_81) * 0x18
                                
                                void* rdi_20 = *(rsi_17 + 8)
                                int32_t* rdx_83 = *(rdi_20 + 0x18)
                                int64_t r8_22 = sx.q(*(rdi_20 + 0x20))
                                int32_t* rcx_117 = rdx_83
                                void* r15_12 = sx.q(not.d(*(rax_151 + 0xc))) * 0x50 + data_143e1d678
                                void* rax_155 = &rdx_83[r8_22]
                                
                                if (rdx_83 != rax_155)
                                    while (*rcx_117 != i_5)
                                        rcx_117 = &rcx_117[1]
                                        
                                        if (rcx_117 == rax_155)
                                            goto label_1420ea22e
                                
                                if (rdx_83 == rax_155 || ((rcx_117 - rdx_83) s>> 2).d == 0xffffffff)
                                label_1420ea22e:
                                    int32_t rax_156 = (r8_22 + 1).d
                                    *(rdi_20 + 0x20) = rax_156
                                    
                                    if (rax_156 s> *(rdi_20 + 0x24))
                                        sub_1405a4cf0(rdi_20 + 0x18)
                                    
                                    *((r8_22 << 2) + *(rdi_20 + 0x18)) = i_5
                                
                                sub_1408d92c0(r15_12 + 0x38, rsi_17)
                                int32_t* rbx_12 = *(r15_12 + 0x18)
                                int64_t rdi_21 = 0
                                uint64_t r14_8 = sx.q(*(r15_12 + 0x20)) << 2 u>> 2
                                
                                if (rbx_12 u> &rbx_12[sx.q(*(r15_12 + 0x20))])
                                    r14_8 = 0
                                
                                if (r14_8 != 0)
                                    do
                                        int32_t rax_160 = *rbx_12
                                        var_2c0.d = rax_160
                                        
                                        if (rax_160 != *rsi_17)
                                            sub_1408d92c0(*(rsi_17 + 8) + 0x18, &var_2c0)
                                        
                                        rbx_12 = &rbx_12[1]
                                        rdi_21 += 1
                                    while (rdi_21 != r14_8)
                                
                                int64_t rdi_22 = 0
                                int32_t* rbx_13 = *(r15_12 + 0x28)
                                uint64_t r14_10 = sx.q(*(r15_12 + 0x30)) << 2 u>> 2
                                
                                if (rbx_13 u> &rbx_13[sx.q(*(r15_12 + 0x30))])
                                    r14_10 = 0
                                
                                if (r14_10 == 0)
                                    goto label_1420eb051
                                
                                do
                                    var_2c0.d = *rbx_13
                                    sub_1408d92c0(*(rsi_17 + 8) + 0x28, &var_2c0)
                                    rdi_22 += 1
                                    rbx_13 = &rbx_13[1]
                                while (rdi_22 != r14_10)
                                
                                r8_1 = var_2b8_1
                                r11_1 = var_298_1
                            label_1420e9261:
                                r14 = arg1
                            label_1420e9265:
                                r15 = var_2a0
                            label_1420e926a:
                                r10_1 = var_2c8_1
                                goto label_1420e926f
                    case 3
                        r10_1 = zx.d(rax_15.b)
                        int64_t rcx_37 = 0
                        void* rdx_27 = (rax_15 u>> 0xd) + r11_1
                        var_2c8_1 = r10_1
                        void* var_240_1 = rdx_27
                        int64_t var_290_2 = 0
                        int64_t rax_51 = sx.q(*(rdx_27 + 8))
                        
                        if (rax_51 s<= 0)
                            continue
                        else
                            do
                                int64_t rax_52 = *rdx_27
                                int64_t* r8_8 = *(rax_52 + (rcx_37 << 3))
                                int64_t** rsi_7 = rax_52 + (rcx_37 << 3)
                                int32_t* r15_4 = *r14
                                var_2c0 = r15_4
                                
                                if (r8_8 != 0)
                                    int32_t i_6 = *(r8_8 + 0xc)
                                    void* rdi_11
                                    
                                    if (i_6 s>= data_143e1d9b4)
                                        rdi_11 = nullptr
                                    else
                                        uint32_t rdx_28 = zx.d(i_6.w)
                                        int32_t i_19 = i_6
                                        
                                        if (i_6 s< 0)
                                            i_19 = i_6 + 0xffff
                                            rdx_28 -= 0x10000
                                        
                                        rdi_11 = *(data_143e1d9a0 + (sx.q(i_19 s>> 0x10) << 3))
                                            + sx.q(rdx_28) * 0x18
                                        rcx_37 = var_290_2
                                    
                                    int32_t i_20 = *(rdi_11 + 0xc)
                                    
                                    if (i_20 != *r15_4)
                                        char rcx_40 = *(rdi_11 + 0xb) & 1
                                        
                                        if (rcx_40 != 0 || i_20 != 0)
                                            if (rcx_40 == 0)
                                                i_6 = i_20
                                            
                                            void* const rax_71
                                            
                                            if (i_6 s>= data_143e1d9b4)
                                                rax_71 = nullptr
                                            else
                                                uint32_t rdx_36 = zx.d(i_6.w)
                                                int32_t i_21 = i_6
                                                
                                                if (i_6 s< 0)
                                                    i_21 = i_6 + 0xffff
                                                    rdx_36 -= 0x10000
                                                
                                                rax_71 =
                                                    *(data_143e1d9a0 + (sx.q(i_21 s>> 0x10) << 3))
                                                    + sx.q(rdx_36) * 0x18
                                            
                                            void* rdi_12 = *(r15_4 + 8)
                                            int32_t* rdx_38 = *(rdi_12 + 0x18)
                                            int64_t r8_11 = sx.q(*(rdi_12 + 0x20))
                                            int32_t* rcx_51 = rdx_38
                                            void* r13_7 =
                                                sx.q(not.d(*(rax_71 + 0xc))) * 0x50 + data_143e1d678
                                            void* rax_75 = &rdx_38[r8_11]
                                            
                                            if (rdx_38 != rax_75)
                                                while (*rcx_51 != i_6)
                                                    rcx_51 = &rcx_51[1]
                                                    
                                                    if (rcx_51 == rax_75)
                                                        goto label_1420e9972
                                            
                                            if (rdx_38 == rax_75
                                                || ((rcx_51 - rdx_38) s>> 2).d == 0xffffffff)
                                            label_1420e9972:
                                                int32_t rax_76 = (r8_11 + 1).d
                                                *(rdi_12 + 0x20) = rax_76
                                                
                                                if (rax_76 s> *(rdi_12 + 0x24))
                                                    sub_1405a4cf0(rdi_12 + 0x18)
                                                
                                                *((r8_11 << 2) + *(rdi_12 + 0x18)) = i_6
                                            
                                            sub_1408d92c0(r13_7 + 0x38, r15_4)
                                            int32_t* rsi_10 = *(r13_7 + 0x18)
                                            int64_t r14_3 = 0
                                            uint64_t r12_7 = sx.q(*(r13_7 + 0x20)) << 2 u>> 2
                                            
                                            if (rsi_10 u> &rsi_10[sx.q(*(r13_7 + 0x20))])
                                                r12_7 = 0
                                            
                                            if (r12_7 != 0)
                                                do
                                                    int32_t i_7 = *rsi_10
                                                    
                                                    if (i_7 != *r15_4)
                                                        void* rbx_7 = *(r15_4 + 8)
                                                        int32_t* rdx_41 = *(rbx_7 + 0x18)
                                                        int64_t r8_12 = sx.q(*(rbx_7 + 0x20))
                                                        int32_t* rcx_56 = rdx_41
                                                        void* rax_80 = &rdx_41[r8_12]
                                                        
                                                        if (rdx_41 != rax_80)
                                                            while (*rcx_56 != i_7)
                                                                rcx_56 = &rcx_56[1]
                                                                
                                                                if (rcx_56 == rax_80)
                                                                    goto label_1420e9a13
                                                        
                                                        if (rdx_41 == rax_80
                                                            || ((rcx_56 - rdx_41) s>> 2).d
                                                            == 0xffffffff)
                                                        label_1420e9a13:
                                                            int32_t rax_81 = (r8_12 + 1).d
                                                            *(rbx_7 + 0x20) = rax_81
                                                            
                                                            if (rax_81 s> *(rbx_7 + 0x24))
                                                                sub_1405a4cf0(rbx_7 + 0x18)
                                                            
                                                            *((r8_12 << 2) + *(rbx_7 + 0x18)) = i_7
                                                    
                                                    rsi_10 = &rsi_10[1]
                                                    r14_3 += 1
                                                while (r14_3 != r12_7)
                                                
                                                r15_4 = var_2c0
                                            
                                            int64_t rsi_11 = 0
                                            int32_t* rdi_13 = *(r13_7 + 0x28)
                                            uint64_t r12_9 = sx.q(*(r13_7 + 0x30)) << 2 u>> 2
                                            
                                            if (rdi_13 u> &rdi_13[sx.q(*(r13_7 + 0x30))])
                                                r12_9 = 0
                                            
                                            if (r12_9 != 0)
                                                do
                                                    void* rbx_8 = *(r15_4 + 8)
                                                    int32_t i_8 = *rdi_13
                                                    int32_t* rdx_43 = *(rbx_8 + 0x28)
                                                    int64_t r8_13 = sx.q(*(rbx_8 + 0x30))
                                                    int32_t* rcx_60 = rdx_43
                                                    void* rax_85 = &rdx_43[r8_13]
                                                    
                                                    if (rdx_43 != rax_85)
                                                        while (*rcx_60 != i_8)
                                                            rcx_60 = &rcx_60[1]
                                                            
                                                            if (rcx_60 == rax_85)
                                                                goto label_1420e9ab0
                                                    
                                                    if (rdx_43 == rax_85
                                                        || ((rcx_60 - rdx_43) s>> 2).d
                                                        == 0xffffffff)
                                                    label_1420e9ab0:
                                                        int32_t rax_86 = (r8_13 + 1).d
                                                        *(rbx_8 + 0x30) = rax_86
                                                        
                                                        if (rax_86 s> *(rbx_8 + 0x34))
                                                            sub_1405a4cf0(rbx_8 + 0x28)
                                                        
                                                        *((r8_13 << 2) + *(rbx_8 + 0x28)) = i_8
                                                    
                                                    r15_4 = var_2c0
                                                    rdi_13 = &rdi_13[1]
                                                    rsi_11 += 1
                                                while (rsi_11 != r12_9)
                                            
                                            r14 = arg1
                                        else if (i_6 s> data_143e1d994)
                                            if (sub_1420de8c0(r15_4, r8_8) == 0)
                                            label_1420e9874:
                                                void* rbx_6 = *(r15_4 + 8)
                                                int32_t i_9 = *(*rsi_7 + 0xc)
                                                int32_t* rdx_34 = *(rbx_6 + 0x28)
                                                int64_t r8_10 = sx.q(*(rbx_6 + 0x30))
                                                int32_t* rcx_45 = rdx_34
                                                void* rax_65 = &rdx_34[r8_10]
                                                
                                                if (rdx_34 != rax_65)
                                                    while (*rcx_45 != i_9)
                                                        rcx_45 = &rcx_45[1]
                                                        
                                                        if (rcx_45 == rax_65)
                                                            goto label_1420e98b6
                                                
                                                if (rdx_34 == rax_65
                                                    || ((rcx_45 - rdx_34) s>> 2).d == 0xffffffff)
                                                label_1420e98b6:
                                                    int32_t rax_66 = (r8_10 + 1).d
                                                    *(rbx_6 + 0x30) = rax_66
                                                    
                                                    if (rax_66 s> *(rbx_6 + 0x34))
                                                        sub_1405a4cf0(rbx_6 + 0x28)
                                                    
                                                    *((r8_10 << 2) + *(rbx_6 + 0x28)) = i_9
                                            else
                                                int64_t* r9_4 = *rsi_7
                                                
                                                if ((r9_4[1].d & 0x1400) != 0)
                                                    goto label_1420e9874
                                                
                                                int32_t r10_4 = *(r9_4 + 0xc)
                                                void* const rax_61
                                                
                                                if (r10_4 s>= data_143e1d9b4)
                                                    rax_61 = nullptr
                                                else
                                                    uint32_t rdx_31 = zx.d(r10_4.w)
                                                    int32_t rax_57 = r10_4
                                                    
                                                    if (r10_4 s< 0)
                                                        rax_57 = r10_4 + 0xffff
                                                        rdx_31 -= 0x10000
                                                    
                                                    rax_61 = *(data_143e1d9a0
                                                        + (sx.q(rax_57 s>> 0x10) << 3))
                                                        + sx.q(rdx_31) * 0x18
                                                
                                                if (((*(rax_61 + 8) u>> 0x1e).b & 1) != 0)
                                                    goto label_1420e9874
                                                
                                                var_2e0.b = 1
                                                var_2e8.q = r13
                                                sub_1420dc470(r15_4, r10_4, rdi_11, r9_4, var_2e8, 
                                                    var_2e0.b)
                                        
                                        rcx_37 = var_290_2
                                
                                rdx_27 = var_240_1
                                rcx_37 += 1
                                r13 = var_280
                                var_290_2 = rcx_37
                            while (rcx_37 s< rax_51)
                        
                        goto label_1420e9b08
                    case 4
                        r8_1 = &r8_1[3]
                        var_2b8_1 = r8_1
                        void* rdx_67 = (rax_15 u>> 0xd) + r11_1
                        r11_1 = *rdx_67
                        *r8_1 = r11_1
                        var_298_1 = r11_1
                        r8_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r12_1.d) << 2))
                        int32_t rdx_68 = *(rdx_67 + 8)
                        *(r8_1 + 0xc) = rdx_68
                        int32_t rax_130 = *(*(r9_2 + 0x1e8) + (sx.q(r12_1.d + 1) << 2))
                        int32_t rcx_93 = (r12_1.d + 1) << 8
                        r12_1 = zx.q(r12_1.d + 2)
                        int32_t rax_131 = rax_130 + rcx_93
                        r8_1[2].d = r12_1.d
                        
                        if (rdx_68 != 0)
                            goto label_1420ea34d
                        
                        r12_1 = zx.q(rax_131 u>> 8)
                        r10_1 = zx.d(*(*(r9_2 + 0x1e8) + (r12_1 << 2) - 4)) - zx.d(rax_131.b)
                        var_2c8_1 = r10_1
                        continue
                    case 5
                        r8_1 = &r8_1[3]
                        var_2b8_1 = r8_1
                        *r8_1 = r11_1
                        r8_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r12_1.d) << 2))
                        int64_t rcx_128 = sx.q(r12_1.d + 1)
                        r12_1 = zx.q(r12_1.d + 2)
                        *(r8_1 + 0xc) = *(*(r9_2 + 0x1e8) + (rcx_128 << 2))
                        r8_1[2].d = r12_1.d
                    label_1420ea34d:
                        r10_1 = 0
                        var_2c8_1 = 0
                        continue
                    case 6
                        int64_t r9_7 = sx.q(r12_1.d)
                        int64_t rdx_88 = sx.q(r12_1.d + 1)
                        r12_1 = zx.q(r12_1.d + 2)
                        var_2c8_1 = zx.d(rax_15.b)
                        rcx_132 = (rax_15 u>> 0xd) + r11_1
                        r8_26 =
                            zx.q(*(r10_2 + (rdx_88 << 2))) << 0x20 | zx.q(*(r10_2 + (r9_7 << 2)))
                    label_1420ea38b:
                        r8_26(rcx_132, &var_230)
                        r8_1 = var_2b8_1
                        r11_1 = var_298_1
                        r10_1 = var_2c8_1
                        r9_2 = var_2a8_1
                        continue
                    case 7
                        int64_t rdx_91 = sx.q(r12_1.d)
                        int64_t rcx_133 = sx.q(r12_1.d + 1)
                        r12_1 = zx.q(r12_1.d + 2)
                        var_2c8_1 = zx.d(rax_15.b)
                        r8_26 =
                            zx.q(*(r10_2 + (rcx_133 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_91 << 2)))
                        rcx_132 = rbx_3
                        goto label_1420ea38b
                    case 8
                        void* rdi_23 = var_228
                        int64_t rdx_92 = sx.q(r12_1.d)
                        int64_t rcx_135 = sx.q(r12_1.d + 1)
                        r12_1 = zx.q(r12_1.d + 2)
                        uint64_t rbx_16 =
                            zx.q(*(r10_2 + (rcx_135 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_92 << 2)))
                        var_2c8_1 = zx.d(rax_15.b)
                        
                        if (rdi_23 == 0)
                            sub_140d1e450(&var_230)
                            rdi_23 = var_228
                        
                        *(rdi_23 + 0x90) = r9_1
                        void var_1e8
                        (*(*rbx_16 + 0x88))(rbx_16, 
                            *SymBuffer::end(sub_140b4cb20(&var_1d8, rdi_23), &var_1e8), 
                            (rax_15 u>> 0xd) + r11_1, 0, var_2e8, var_2e0, var_2d8)
                        sub_140b4cbb0(&var_1d8)
                        r8_1 = var_2b8_1
                        r11_1 = var_298_1
                        r10_1 = var_2c8_1
                        *(rdi_23 + 0x90) = 0
                        goto label_1420ea46a
                    case 9
                        void* rdi_24 = var_228
                        int64_t rdx_97 = sx.q(r12_1.d)
                        int64_t rcx_141 = sx.q(r12_1.d + 1)
                        r12_1 = zx.q(r12_1.d + 2)
                        uint64_t rbx_19 =
                            zx.q(*(r10_2 + (rcx_141 << 2))) << 0x20 | zx.q(*(r10_2 + (rdx_97 << 2)))
                        var_2c8_1 = zx.d(rax_15.b)
                        
                        if (rdi_24 == 0)
                            sub_140d1e450(&var_230)
                            rdi_24 = var_228
                        
                        *(rdi_24 + 0x90) = r9_1
                        void var_1e0
                        (*(*rbx_19 + 0x88))(rbx_19, 
                            *SymBuffer::end(sub_140b4cb20(&var_1d8, rdi_24), &var_1e0), 
                            (rax_15 u>> 0xd) + r11_1, 0, var_2e8, var_2e0, var_2d8)
                        sub_140b4cbb0(&var_1d8)
                        r8_1 = var_2b8_1
                        r11_1 = var_298_1
                        r10_1 = var_2c8_1
                        r9_2 = var_2a8_1
                        rbx_3 = r9_1
                        *(rdi_24 + 0x90) = 0
                        continue
                    case 0xa
                        uint64_t rcx_148 = rax_15 u>> 0xd
                        int32_t r9_10 = *(rcx_148 + r11_1 + 0xc)
                        
                        if (r9_10 != 0)
                            int32_t rcx_149 = *(rcx_148 + r11_1 + 8)
                            
                            if (rcx_149 s< 0)
                                r10_1 = zx.d(rax_15.b)
                                var_2c8_1 = r10_1
                                r9_2 = var_2a8_1
                                continue
                            else if (rcx_149 s>= data_143e1d9b4)
                            label_1420ea863:
                                r8_1 = var_2b8_1
                                r10_1 = zx.d(rax_15.b)
                                var_2c8_1 = r10_1
                            label_1420e926f:
                                rbx_3 = r9_1
                                r9_2 = var_2a8_1
                                continue
                            else
                                uint32_t r8_34 = zx.d(rcx_149.w)
                                
                                if (rcx_149 s< 0)
                                    rcx_149 += 0xffff
                                    r8_34 -= 0x10000
                                
                                int64_t** rbx_20 = *(data_143e1d9a0 + (sx.q(rcx_149 s>> 0x10) << 3))
                                    + sx.q(r8_34) * 0x18
                                
                                if (rbx_20 == 0)
                                    goto label_1420ea863
                                
                                r8_1 = var_2b8_1
                                r10_1 = zx.d(rax_15.b)
                                var_2c8_1 = r10_1
                                
                                if (rbx_20[2].d != r9_10)
                                    goto label_1420e926f
                                
                                int64_t* rbx_21 = *rbx_20
                                rsi_24 = *r14
                                r9_2 = var_2a8_1
                                var_2c8_1 = r10_1
                                
                                if (rbx_21 == 0)
                                    rbx_3 = r9_1
                                    continue
                                else
                                    int32_t r8_36 = *(rbx_21 + 0xc)
                                    void* rdi_25
                                    
                                    if (r8_36 s>= data_143e1d9b4)
                                        rdi_25 = nullptr
                                    else
                                        uint32_t rdx_104 = zx.d(r8_36.w)
                                        int32_t rax_170 = r8_36
                                        
                                        if (r8_36 s< 0)
                                            rax_170 = r8_36 + 0xffff
                                            rdx_104 -= 0x10000
                                        
                                        rdi_25 = *(data_143e1d9a0 + (sx.q(rax_170 s>> 0x10) << 3))
                                            + sx.q(rdx_104) * 0x18
                                    
                                    int32_t rax_174 = *(rdi_25 + 0xc)
                                    
                                    if (rax_174 == *rsi_24)
                                    label_1420e9201:
                                        r8_1 = var_2b8_1
                                        rbx_3 = r9_1
                                        continue
                                    else
                                        char rcx_155 = *(rdi_25 + 0xb) & 1
                                        
                                        if (rcx_155 == 0 && rax_174 == 0)
                                            r8_1 = var_2b8_1
                                            
                                            if (r8_36 s> data_143e1d994)
                                                char rax_175 = sub_1420de8c0(rsi_24, rbx_21, r8_1)
                                                void* const rax_180
                                                int32_t r10_11
                                                
                                                if (rax_175 != 0 && (rbx_21[1].d & 0x1400) == 0)
                                                    r10_11 = *(rbx_21 + 0xc)
                                                    
                                                    if (r10_11 s>= data_143e1d9b4)
                                                        rax_180 = nullptr
                                                    else
                                                        uint32_t rdx_107 = zx.d(r10_11.w)
                                                        int32_t rax_176 = r10_11
                                                        
                                                        if (r10_11 s< 0)
                                                            rax_176 = r10_11 + 0xffff
                                                            rdx_107 -= 0x10000
                                                        
                                                        rax_180 = *(data_143e1d9a0
                                                            + (sx.q(rax_176 s>> 0x10) << 3))
                                                            + sx.q(rdx_107) * 0x18
                                                
                                                if (rax_175 == 0 || (rbx_21[1].d & 0x1400) != 0
                                                        || ((*(rax_180 + 8) u>> 0x1e).b & 1) != 0)
                                                    var_2c0.d = *(rbx_21 + 0xc)
                                                    goto label_1420ea709
                                                
                                                var_2e0.b = 1
                                                var_2e8.q = r13
                                                sub_1420dc470(rsi_24, r10_11, rdi_25, rbx_21, 
                                                    var_2e8, var_2e0.b)
                                                r11_1 = var_298_1
                                                r10_1 = var_2c8_1
                                                r8_1 = var_2b8_1
                                                goto label_1420e926f
                                            
                                            rbx_3 = r9_1
                                            continue
                                        
                                        if (rcx_155 == 0)
                                            r8_36 = rax_174
                                        
                                        var_2c0.d = r8_36
                                        void* const rax_187
                                        
                                        if (r8_36 s>= data_143e1d9b4)
                                            rax_187 = nullptr
                                        else
                                            uint32_t rax_184 = zx.d(r8_36.w)
                                            
                                            if (r8_36 s< 0)
                                                r8_36 += 0xffff
                                                rax_184 -= 0x10000
                                            
                                            rax_187 =
                                                *(data_143e1d9a0 + (sx.q(r8_36 s>> 0x10) << 3))
                                                + sx.q(rax_184) * 0x18
                                        
                                        void* r15_15 =
                                            sx.q(not.d(*(rax_187 + 0xc))) * 0x50 + data_143e1d678
                                        sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                                        sub_1408d92c0(r15_15 + 0x38, rsi_24)
                                        int32_t* rbx_22 = *(r15_15 + 0x18)
                                        int64_t rdi_26 = 0
                                        uint64_t r14_12 = sx.q(*(r15_15 + 0x20)) << 2 u>> 2
                                        
                                        if (rbx_22 u> &rbx_22[sx.q(*(r15_15 + 0x20))])
                                            r14_12 = 0
                                        
                                        if (r14_12 != 0)
                                            do
                                                int32_t rax_193 = *rbx_22
                                                var_2c0.d = rax_193
                                                
                                                if (rax_193 != *rsi_24)
                                                    sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                                                
                                                rbx_22 = &rbx_22[1]
                                                rdi_26 += 1
                                            while (rdi_26 != r14_12)
                                        
                                        int64_t rdi_27 = 0
                                        int32_t* rbx_23 = *(r15_15 + 0x28)
                                        uint64_t r14_14 = sx.q(*(r15_15 + 0x30)) << 2 u>> 2
                                        
                                        if (rbx_23 u> &rbx_23[sx.q(*(r15_15 + 0x30))])
                                            r14_14 = 0
                                        
                                        if (r14_14 == 0)
                                            goto label_1420eb051
                                        
                                        do
                                            var_2c0.d = *rbx_23
                                            sub_1408d92c0(*(rsi_24 + 8) + 0x28, &var_2c0)
                                            rdi_27 += 1
                                            rbx_23 = &rbx_23[1]
                                        while (rdi_27 != r14_14)
                                        
                                        r8_1 = var_2b8_1
                                        r11_1 = var_298_1
                                        goto label_1420e9261
                        else
                            r10_1 = zx.d(rax_15.b)
                            var_2c8_1 = r10_1
                            r9_2 = var_2a8_1
                            continue
                    case 0xb
                        r10_1 = zx.d(rax_15.b)
                        void* rcx_173 = (rax_15 u>> 0xd) + r11_1
                        var_2c8_1 = r10_1
                        void* var_290_4 = rcx_173
                        int64_t i_28 = sx.q(*(rcx_173 + 8))
                        
                        if (i_28 s<= 0)
                            r13 = var_280
                            continue
                        else
                            int64_t r12_22 = 0
                            int64_t i_10
                            
                            do
                                int64_t rax_197 = *rcx_173
                                int32_t r8_39 = *(rax_197 + r12_22 + 0xc)
                                
                                if (r8_39 != 0)
                                    int32_t rax_198 = *(rax_197 + r12_22 + 8)
                                    
                                    if (rax_198 s>= 0 && rax_198 s< data_143e1d9b4)
                                        uint32_t rdx_116 = zx.d(rax_198.w)
                                        
                                        if (rax_198 s< 0)
                                            rax_198 += 0xffff
                                            rdx_116 -= 0x10000
                                        
                                        int64_t* rbx_24 =
                                            *(data_143e1d9a0 + (sx.q(rax_198 s>> 0x10) << 3))
                                            + sx.q(rdx_116) * 0x18
                                        
                                        if (rbx_24 != 0 && rbx_24[2].d == r8_39)
                                            int64_t* rbx_25 = *rbx_24
                                            int32_t* rsi_25 = *r14
                                            
                                            if (rbx_25 != 0)
                                                int32_t r8_40 = *(rbx_25 + 0xc)
                                                void* rdi_28
                                                
                                                if (r8_40 s>= data_143e1d9b4)
                                                    rdi_28 = nullptr
                                                else
                                                    uint32_t rdx_118 = zx.d(r8_40.w)
                                                    int32_t rax_202 = r8_40
                                                    
                                                    if (r8_40 s< 0)
                                                        rax_202 = r8_40 + 0xffff
                                                        rdx_118 -= 0x10000
                                                    
                                                    rdi_28 = *(data_143e1d9a0
                                                        + (sx.q(rax_202 s>> 0x10) << 3))
                                                        + sx.q(rdx_118) * 0x18
                                                
                                                int32_t rax_206 = *(rdi_28 + 0xc)
                                                
                                                if (rax_206 != *rsi_25)
                                                    char rcx_178 = *(rdi_28 + 0xb) & 1
                                                    
                                                    if (rcx_178 != 0 || rax_206 != 0)
                                                        if (rcx_178 == 0)
                                                            r8_40 = rax_206
                                                        
                                                        var_2c0.d = r8_40
                                                        void* const rax_220
                                                        
                                                        if (r8_40 s>= data_143e1d9b4)
                                                            rax_220 = nullptr
                                                        else
                                                            uint32_t rax_217 = zx.d(r8_40.w)
                                                            
                                                            if (r8_40 s< 0)
                                                                r8_40 += 0xffff
                                                                rax_217 -= 0x10000
                                                            
                                                            rax_220 = *(data_143e1d9a0
                                                                + (sx.q(r8_40 s>> 0x10) << 3))
                                                                + sx.q(rax_217) * 0x18
                                                        
                                                        void* r15_18 =
                                                            sx.q(not.d(*(rax_220 + 0xc))) * 0x50
                                                            + data_143e1d678
                                                        sub_1408d92c0(*(rsi_25 + 8) + 0x18, 
                                                            &var_2c0)
                                                        sub_1408d92c0(r15_18 + 0x38, rsi_25)
                                                        int32_t* rbx_26 = *(r15_18 + 0x18)
                                                        int64_t rdi_29 = 0
                                                        uint64_t r14_16 =
                                                            sx.q(*(r15_18 + 0x20)) << 2 u>> 2
                                                        
                                                        if (rbx_26 u>
                                                                &rbx_26[sx.q(*(r15_18 + 0x20))])
                                                            r14_16 = 0
                                                        
                                                        if (r14_16 != 0)
                                                            do
                                                                int32_t rax_226 = *rbx_26
                                                                var_2c0.d = rax_226
                                                                
                                                                if (rax_226 != *rsi_25)
                                                                    sub_1408d92c0(*(rsi_25 + 8) + 0x18, 
                                                                        &var_2c0)
                                                                
                                                                rbx_26 = &rbx_26[1]
                                                                rdi_29 += 1
                                                            while (rdi_29 != r14_16)
                                                        
                                                        int64_t rdi_30 = 0
                                                        int32_t* rbx_27 = *(r15_18 + 0x28)
                                                        uint64_t r14_18 =
                                                            sx.q(*(r15_18 + 0x30)) << 2 u>> 2
                                                        
                                                        if (rbx_27 u>
                                                                &rbx_27[sx.q(*(r15_18 + 0x30))])
                                                            r14_18 = 0
                                                        
                                                        if (r14_18 != 0)
                                                            do
                                                                var_2c0.d = *rbx_27
                                                                sub_1408d92c0(*(rsi_25 + 8) + 0x28, 
                                                                    &var_2c0)
                                                                rdi_30 += 1
                                                                rbx_27 = &rbx_27[1]
                                                            while (rdi_30 != r14_18)
                                                    else if (r8_40 s> data_143e1d994)
                                                        char rax_207 = sub_1420de8c0(rsi_25, rbx_25)
                                                        void* const rax_212
                                                        int32_t r10_12
                                                        
                                                        if (rax_207 != 0
                                                                && (rbx_25[1].d & 0x1400) == 0)
                                                            r10_12 = *(rbx_25 + 0xc)
                                                            
                                                            if (r10_12 s>= data_143e1d9b4)
                                                                rax_212 = nullptr
                                                            else
                                                                uint32_t rdx_121 = zx.d(r10_12.w)
                                                                int32_t rax_208 = r10_12
                                                                
                                                                if (r10_12 s< 0)
                                                                    rax_208 = r10_12 + 0xffff
                                                                    rdx_121 -= 0x10000
                                                                
                                                                rax_212 = *(data_143e1d9a0
                                                                    + (sx.q(rax_208 s>> 0x10) << 3))
                                                                    + sx.q(rdx_121) * 0x18
                                                        
                                                        if (rax_207 == 0
                                                                || (rbx_25[1].d & 0x1400) != 0
                                                                || ((*(rax_212 + 8) u>> 0x1e).b & 1)
                                                                != 0)
                                                            var_2c0.d = *(rbx_25 + 0xc)
                                                            sub_1408d92c0(*(rsi_25 + 8) + 0x28, 
                                                                &var_2c0)
                                                        else
                                                            var_2e0.b = 1
                                                            var_2e8.q = var_280
                                                            sub_1420dc470(rsi_25, r10_12, rdi_28, 
                                                                rbx_25, var_2e8, var_2e0.b)
                                        
                                        rcx_173 = var_290_4
                                
                                r14 = arg1
                                r12_22 += 0x20
                                i_10 = i_28
                                i_28 -= 1
                            while (i_10 != 1)
                            r8_1 = var_2b8_1
                            r11_1 = var_298_1
                            r10_1 = var_2c8_1
                            r13 = var_280
                            r15 = var_2a0
                            r9_2 = var_2a8_1
                            rbx_3 = r9_1
                            continue
                    case 0xc
                        r10_1 = zx.d(rax_15.b)
                        var_2c8_1 = r10_1
                        continue
                    case 0xd
                        break
                    case 0xe
                        rsi_24 = *r14
                        rbx_30 = (rax_15 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_15.b)
                        var_2c8_1 = r10_1
                        int64_t* r9_13 = *rbx_30
                        
                        if (r9_13 == 0)
                        label_1420ea46a:
                            r9_2 = var_2a8_1
                            rbx_3 = r9_1
                            continue
                        else
                            int32_t r8_43 = *(r9_13 + 0xc)
                            
                            if (r8_43 s>= data_143e1d9b4)
                                rdi_31 = nullptr
                            else
                                uint32_t rdx_130 = zx.d(r8_43.w)
                                int32_t rax_230 = r8_43
                                
                                if (r8_43 s< 0)
                                    rax_230 = r8_43 + 0xffff
                                    rdx_130 -= 0x10000
                                
                                rdi_31 = *(data_143e1d9a0 + (sx.q(rax_230 s>> 0x10) << 3))
                                    + sx.q(rdx_130) * 0x18
                            
                            int32_t rax_234 = *(rdi_31 + 0xc)
                            
                            if (rax_234 == *rsi_24)
                            label_1420e91f0:
                                r8_1 = var_2b8_1
                                r9_2 = var_2a8_1
                                rbx_3 = r9_1
                                continue
                            else
                                char rcx_196 = *(rdi_31 + 0xb) & 1
                                
                                if (rcx_196 == 0 && rax_234 == 0)
                                    r8_1 = var_2b8_1
                                    
                                    if (r8_43 s<= data_143e1d994)
                                        goto label_1420ea46a
                                    
                                    if (sub_1420de8c0(rsi_24, r9_13, r8_1) == 0)
                                    label_1420ead01:
                                        var_2c0.d = *(*rbx_30 + 0xc)
                                    label_1420ea709:
                                        sub_1408d92c0(*(rsi_24 + 8) + 0x28, &var_2c0)
                                        r11_1 = var_298_1
                                        r10_1 = var_2c8_1
                                        r8_1 = var_2b8_1
                                        goto label_1420e926f
                                    
                                    r9_14 = *rbx_30
                                    
                                    if ((r9_14[1].d & 0x1400) != 0)
                                        goto label_1420ead01
                                    
                                    r10_13 = *(r9_14 + 0xc)
                                    
                                    if (r10_13 s< data_143e1d9b4)
                                        rdx_133 = zx.d(r10_13.w)
                                        rax_236 = r10_13
                                        
                                        if (r10_13 s< 0)
                                            rax_236 = r10_13 + 0xffff
                                            rdx_133 -= 0x10000
                                        
                                        goto label_1420eaca9
                                    
                                label_1420eacc3:
                                    rax_240 = nullptr
                                label_1420eaccb:
                                    
                                    if (((*(rax_240 + 8) u>> 0x1e).b & 1) != 0)
                                        goto label_1420ead01
                                    
                                    var_2e0.b = 1
                                    var_2e8.q = r13
                                    sub_1420dc470(rsi_24, r10_13, rdi_31, r9_14, var_2e8, var_2e0.b)
                                    r11_1 = var_298_1
                                    r10_1 = var_2c8_1
                                    r8_1 = var_2b8_1
                                    goto label_1420e926f
                                
                                if (rcx_196 == 0)
                                    r8_43 = rax_234
                                
                                var_2c0.d = r8_43
                                void* const rax_247
                                
                                if (r8_43 s>= data_143e1d9b4)
                                    rax_247 = nullptr
                                else
                                    uint32_t rax_244 = zx.d(r8_43.w)
                                    
                                    if (r8_43 s< 0)
                                        r8_43 += 0xffff
                                        rax_244 -= 0x10000
                                    
                                    rax_247 = *(data_143e1d9a0 + (sx.q(r8_43 s>> 0x10) << 3))
                                        + sx.q(rax_244) * 0x18
                                
                                void* r15_21 = sx.q(not.d(*(rax_247 + 0xc))) * 0x50 + data_143e1d678
                                sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                                sub_1408d92c0(r15_21 + 0x38, rsi_24)
                                int32_t* rbx_31 = *(r15_21 + 0x18)
                                int64_t rdi_32 = 0
                                uint64_t r14_20 = sx.q(*(r15_21 + 0x20)) << 2 u>> 2
                                
                                if (rbx_31 u> &rbx_31[sx.q(*(r15_21 + 0x20))])
                                    r14_20 = 0
                                
                                if (r14_20 != 0)
                                    do
                                        int32_t rax_253 = *rbx_31
                                        var_2c0.d = rax_253
                                        
                                        if (rax_253 != *rsi_24)
                                            sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                                        
                                        rbx_31 = &rbx_31[1]
                                        rdi_32 += 1
                                    while (rdi_32 != r14_20)
                                
                                int64_t rdi_33 = 0
                                int32_t* rbx_32 = *(r15_21 + 0x28)
                                uint64_t r14_22 = sx.q(*(r15_21 + 0x30)) << 2 u>> 2
                                
                                if (rbx_32 u> &rbx_32[sx.q(*(r15_21 + 0x30))])
                                    r14_22 = 0
                                
                                if (r14_22 != 0)
                                    do
                                        var_2c0.d = *rbx_32
                                        sub_1408d92c0(*(rsi_24 + 8) + 0x28, &var_2c0)
                                        rdi_33 += 1
                                        rbx_32 = &rbx_32[1]
                                    while (rdi_33 != r14_22)
                                    
                                    r8_1 = var_2b8_1
                                    r11_1 = var_298_1
                                    goto label_1420e9261
                                
                            label_1420eb051:
                                r8_1 = var_2b8_1
                                r11_1 = var_298_1
                                r10_1 = var_2c8_1
                                r14 = arg1
                                r15 = var_2a0
                                r9_2 = var_2a8_1
                                rbx_3 = r9_1
                                continue
                    case 0xf
                        rsi_24 = *r14
                        rbx_30 = (rax_15 u>> 0xd) + r11_1
                        r10_1 = zx.d(rax_15.b)
                        var_2c8_1 = r10_1
                        int64_t* r9_15 = *rbx_30
                        
                        if (r9_15 == 0)
                            goto label_1420ea46a
                        
                        int32_t r8_46 = *(r9_15 + 0xc)
                        
                        if (r8_46 s>= data_143e1d9b4)
                            rdi_31 = nullptr
                        else
                            uint32_t rdx_141 = zx.d(r8_46.w)
                            int32_t rax_257 = r8_46
                            
                            if (r8_46 s< 0)
                                rax_257 = r8_46 + 0xffff
                                rdx_141 -= 0x10000
                            
                            rdi_31 = *(data_143e1d9a0 + (sx.q(rax_257 s>> 0x10) << 3))
                                + sx.q(rdx_141) * 0x18
                        
                        int32_t rax_261 = *(rdi_31 + 0xc)
                        
                        if (rax_261 == *rsi_24)
                            goto label_1420e91f0
                        
                        char rcx_213 = *(rdi_31 + 0xb) & 1
                        
                        if (rcx_213 == 0 && rax_261 == 0)
                            r8_1 = var_2b8_1
                            
                            if (r8_46 s<= data_143e1d994)
                                goto label_1420ea46a
                            
                            if (sub_1420de8c0(rsi_24, r9_15, r8_1) == 0)
                                goto label_1420ead01
                            
                            r9_14 = *rbx_30
                            
                            if ((r9_14[1].d & 0x1400) != 0)
                                goto label_1420ead01
                            
                            r10_13 = *(r9_14 + 0xc)
                            
                            if (r10_13 s>= data_143e1d9b4)
                                goto label_1420eacc3
                            
                            rdx_133 = zx.d(r10_13.w)
                            rax_236 = r10_13
                            
                            if (r10_13 s>= 0)
                            label_1420eaca9:
                                rax_240 = *(data_143e1d9a0 + (sx.q(rax_236 s>> 0x10) << 3))
                                    + sx.q(rdx_133) * 0x18
                                goto label_1420eaccb
                            
                            rax_240 = *(data_143e1d9a0 + (sx.q((r10_13 + 0xffff) s>> 0x10) << 3))
                                + sx.q(rdx_133 - 0x10000) * 0x18
                            goto label_1420eaccb
                        
                        if (rcx_213 == 0)
                            r8_46 = rax_261
                        
                        var_2c0.d = r8_46
                        void* const rax_270
                        
                        if (r8_46 s>= data_143e1d9b4)
                            rax_270 = nullptr
                        else
                            uint32_t rax_267 = zx.d(r8_46.w)
                            
                            if (r8_46 s< 0)
                                r8_46 += 0xffff
                                rax_267 -= 0x10000
                            
                            rax_270 = *(data_143e1d9a0 + (sx.q(r8_46 s>> 0x10) << 3))
                                + sx.q(rax_267) * 0x18
                        
                        void* r15_24 = sx.q(not.d(*(rax_270 + 0xc))) * 0x50 + data_143e1d678
                        sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                        sub_1408d92c0(r15_24 + 0x38, rsi_24)
                        int32_t* rbx_35 = *(r15_24 + 0x18)
                        int64_t rdi_34 = 0
                        uint64_t r14_24 = sx.q(*(r15_24 + 0x20)) << 2 u>> 2
                        
                        if (rbx_35 u> &rbx_35[sx.q(*(r15_24 + 0x20))])
                            r14_24 = 0
                        
                        if (r14_24 != 0)
                            do
                                int32_t rax_276 = *rbx_35
                                var_2c0.d = rax_276
                                
                                if (rax_276 != *rsi_24)
                                    sub_1408d92c0(*(rsi_24 + 8) + 0x18, &var_2c0)
                                
                                rbx_35 = &rbx_35[1]
                                rdi_34 += 1
                            while (rdi_34 != r14_24)
                        
                        int64_t rdi_35 = 0
                        int32_t* rbx_36 = *(r15_24 + 0x28)
                        uint64_t r14_26 = sx.q(*(r15_24 + 0x30)) << 2 u>> 2
                        
                        if (rbx_36 u> &rbx_36[sx.q(*(r15_24 + 0x30))])
                            r14_26 = 0
                        
                        if (r14_26 == 0)
                            goto label_1420eb051
                        
                        do
                            var_2c0.d = *rbx_36
                            sub_1408d92c0(*(rsi_24 + 8) + 0x28, &var_2c0)
                            rdi_35 += 1
                            rbx_36 = &rbx_36[1]
                        while (rdi_35 != r14_26)
                        
                        r8_1 = var_2b8_1
                        r11_1 = var_298_1
                        goto label_1420e9261
                    case 0x10
                        r10_1 = zx.d(rax_15.b)
                        int64_t rcx_64 = 0
                        void* rdx_47 = (rax_15 u>> 0xd) + r11_1
                        var_2c8_1 = r10_1
                        void* var_250_2 = rdx_47
                        int64_t var_290_3 = 0
                        int64_t rax_88 = sx.q(*(rdx_47 + 8))
                        
                        if (rax_88 s<= 0)
                            continue
                        else
                            do
                                void* rax_90 = *rdx_47
                                
                                if ((rax_90.b & 1) != 0)
                                    rax_90 = (rax_90 s>> 1) + rdx_47
                                
                                int64_t* r8_14 = *(rax_90 + (rcx_64 << 3))
                                void* rsi_12 = rax_90 + (rcx_64 << 3)
                                int32_t* r15_7 = *r14
                                var_2c0 = r15_7
                                
                                if (r8_14 != 0)
                                    int32_t i_11 = *(r8_14 + 0xc)
                                    void* rdi_14
                                    
                                    if (i_11 s>= data_143e1d9b4)
                                        rdi_14 = nullptr
                                    else
                                        uint32_t rdx_48 = zx.d(i_11.w)
                                        int32_t i_22 = i_11
                                        
                                        if (i_11 s< 0)
                                            i_22 = i_11 + 0xffff
                                            rdx_48 -= 0x10000
                                        
                                        rdi_14 = *(data_143e1d9a0 + (sx.q(i_22 s>> 0x10) << 3))
                                            + sx.q(rdx_48) * 0x18
                                        rcx_64 = var_290_3
                                    
                                    int32_t i_23 = *(rdi_14 + 0xc)
                                    
                                    if (i_23 != *r15_7)
                                        char rcx_67 = *(rdi_14 + 0xb) & 1
                                        
                                        if (rcx_67 != 0 || i_23 != 0)
                                            if (rcx_67 == 0)
                                                i_11 = i_23
                                            
                                            void* const rax_109
                                            
                                            if (i_11 s>= data_143e1d9b4)
                                                rax_109 = nullptr
                                            else
                                                uint32_t rdx_56 = zx.d(i_11.w)
                                                int32_t i_24 = i_11
                                                
                                                if (i_11 s< 0)
                                                    i_24 = i_11 + 0xffff
                                                    rdx_56 -= 0x10000
                                                
                                                rax_109 =
                                                    *(data_143e1d9a0 + (sx.q(i_24 s>> 0x10) << 3))
                                                    + sx.q(rdx_56) * 0x18
                                            
                                            void* rdi_15 = *(r15_7 + 8)
                                            int32_t* rdx_58 = *(rdi_15 + 0x18)
                                            int64_t r8_17 = sx.q(*(rdi_15 + 0x20))
                                            int32_t* rcx_78 = rdx_58
                                            void* r13_11 = sx.q(not.d(*(rax_109 + 0xc))) * 0x50
                                                + data_143e1d678
                                            void* rax_113 = &rdx_58[r8_17]
                                            
                                            if (rdx_58 != rax_113)
                                                while (*rcx_78 != i_11)
                                                    rcx_78 = &rcx_78[1]
                                                    
                                                    if (rcx_78 == rax_113)
                                                        goto label_1420e9d7f
                                            
                                            if (rdx_58 == rax_113
                                                || ((rcx_78 - rdx_58) s>> 2).d == 0xffffffff)
                                            label_1420e9d7f:
                                                int32_t rax_114 = (r8_17 + 1).d
                                                *(rdi_15 + 0x20) = rax_114
                                                
                                                if (rax_114 s> *(rdi_15 + 0x24))
                                                    sub_1405a4cf0(rdi_15 + 0x18)
                                                
                                                *((r8_17 << 2) + *(rdi_15 + 0x18)) = i_11
                                            
                                            sub_1408d92c0(r13_11 + 0x38, r15_7)
                                            int32_t* rsi_15 = *(r13_11 + 0x18)
                                            int64_t r14_4 = 0
                                            uint64_t r12_11 = sx.q(*(r13_11 + 0x20)) << 2 u>> 2
                                            
                                            if (rsi_15 u> &rsi_15[sx.q(*(r13_11 + 0x20))])
                                                r12_11 = 0
                                            
                                            if (r12_11 != 0)
                                                do
                                                    int32_t i_12 = *rsi_15
                                                    
                                                    if (i_12 != *r15_7)
                                                        void* rbx_10 = *(r15_7 + 8)
                                                        int32_t* rdx_61 = *(rbx_10 + 0x18)
                                                        int64_t r8_18 = sx.q(*(rbx_10 + 0x20))
                                                        int32_t* rcx_83 = rdx_61
                                                        void* rax_118 = &rdx_61[r8_18]
                                                        
                                                        if (rdx_61 != rax_118)
                                                            while (*rcx_83 != i_12)
                                                                rcx_83 = &rcx_83[1]
                                                                
                                                                if (rcx_83 == rax_118)
                                                                    goto label_1420e9e23
                                                        
                                                        if (rdx_61 == rax_118
                                                            || ((rcx_83 - rdx_61) s>> 2).d
                                                            == 0xffffffff)
                                                        label_1420e9e23:
                                                            int32_t rax_119 = (r8_18 + 1).d
                                                            *(rbx_10 + 0x20) = rax_119
                                                            
                                                            if (rax_119 s> *(rbx_10 + 0x24))
                                                                sub_1405a4cf0(rbx_10 + 0x18)
                                                            
                                                            *((r8_18 << 2) + *(rbx_10 + 0x18)) =
                                                                i_12
                                                    
                                                    rsi_15 = &rsi_15[1]
                                                    r14_4 += 1
                                                while (r14_4 != r12_11)
                                                
                                                r15_7 = var_2c0
                                            
                                            int64_t rsi_16 = 0
                                            int32_t* rdi_16 = *(r13_11 + 0x28)
                                            uint64_t r12_13 = sx.q(*(r13_11 + 0x30)) << 2 u>> 2
                                            
                                            if (rdi_16 u> &rdi_16[sx.q(*(r13_11 + 0x30))])
                                                r12_13 = 0
                                            
                                            if (r12_13 != 0)
                                                do
                                                    void* rbx_11 = *(r15_7 + 8)
                                                    int32_t i_13 = *rdi_16
                                                    int32_t* rdx_63 = *(rbx_11 + 0x28)
                                                    int64_t r8_19 = sx.q(*(rbx_11 + 0x30))
                                                    int32_t* rax_123 = rdx_63
                                                    void* rcx_87 = &rdx_63[r8_19]
                                                    
                                                    if (rdx_63 != rcx_87)
                                                        while (*rax_123 != i_13)
                                                            rax_123 = &rax_123[1]
                                                            
                                                            if (rax_123 == rcx_87)
                                                                goto label_1420e9ec0
                                                    
                                                    if (rdx_63 == rcx_87
                                                        || ((rax_123 - rdx_63) s>> 2).d
                                                        == 0xffffffff)
                                                    label_1420e9ec0:
                                                        int32_t rax_126 = (r8_19 + 1).d
                                                        *(rbx_11 + 0x30) = rax_126
                                                        
                                                        if (rax_126 s> *(rbx_11 + 0x34))
                                                            sub_1405a4cf0(rbx_11 + 0x28)
                                                        
                                                        *((r8_19 << 2) + *(rbx_11 + 0x28)) = i_13
                                                    
                                                    r15_7 = var_2c0
                                                    rdi_16 = &rdi_16[1]
                                                    rsi_16 += 1
                                                while (rsi_16 != r12_13)
                                            
                                            r14 = arg1
                                        else if (i_11 s> data_143e1d994)
                                            if (sub_1420de8c0(r15_7, r8_14) == 0)
                                            label_1420e9c81:
                                                void* rbx_9 = *(r15_7 + 8)
                                                int32_t i_14 = *(*rsi_12 + 0xc)
                                                int32_t* rdx_54 = *(rbx_9 + 0x28)
                                                int64_t r8_16 = sx.q(*(rbx_9 + 0x30))
                                                int32_t* rcx_72 = rdx_54
                                                void* rax_103 = &rdx_54[r8_16]
                                                
                                                if (rdx_54 != rax_103)
                                                    while (*rcx_72 != i_14)
                                                        rcx_72 = &rcx_72[1]
                                                        
                                                        if (rcx_72 == rax_103)
                                                            goto label_1420e9cc3
                                                
                                                if (rdx_54 == rax_103
                                                    || ((rcx_72 - rdx_54) s>> 2).d == 0xffffffff)
                                                label_1420e9cc3:
                                                    int32_t rax_104 = (r8_16 + 1).d
                                                    *(rbx_9 + 0x30) = rax_104
                                                    
                                                    if (rax_104 s> *(rbx_9 + 0x34))
                                                        sub_1405a4cf0(rbx_9 + 0x28)
                                                    
                                                    *((r8_16 << 2) + *(rbx_9 + 0x28)) = i_14
                                            else
                                                int64_t* r9_5 = *rsi_12
                                                
                                                if ((r9_5[1].d & 0x1400) != 0)
                                                    goto label_1420e9c81
                                                
                                                int32_t r10_5 = *(r9_5 + 0xc)
                                                void* const rax_99
                                                
                                                if (r10_5 s>= data_143e1d9b4)
                                                    rax_99 = nullptr
                                                else
                                                    uint32_t rdx_51 = zx.d(r10_5.w)
                                                    int32_t rax_95 = r10_5
                                                    
                                                    if (r10_5 s< 0)
                                                        rax_95 = r10_5 + 0xffff
                                                        rdx_51 -= 0x10000
                                                    
                                                    rax_99 = *(data_143e1d9a0
                                                        + (sx.q(rax_95 s>> 0x10) << 3))
                                                        + sx.q(rdx_51) * 0x18
                                                
                                                if (((*(rax_99 + 8) u>> 0x1e).b & 1) != 0)
                                                    goto label_1420e9c81
                                                
                                                var_2e0.b = 1
                                                var_2e8.q = r13
                                                sub_1420dc470(r15_7, r10_5, rdi_14, r9_5, var_2e8, 
                                                    var_2e0.b)
                                        
                                        rcx_64 = var_290_3
                                
                                rdx_47 = var_250_2
                                rcx_64 += 1
                                r13 = var_280
                                var_290_3 = rcx_64
                            while (rcx_64 s< rax_88)
                            
                            r8_1 = var_2b8_1
                            r11_1 = var_298_1
                        
                        goto label_1420e9265
                    case 0x11
                        r8_1 = &r8_1[3]
                        void* rdx_71 = (rax_15 u>> 0xd) + r11_1
                        var_2b8_1 = r8_1
                        r11_1 = *rdx_71
                        
                        if ((r11_1.b & 1) != 0)
                            r11_1 = (r11_1 s>> 1) + rdx_71
                        
                        *r8_1 = r11_1
                        var_298_1 = r11_1
                        r8_1[1].d = *(*(r9_2 + 0x1e8) + (sx.q(r12_1.d) << 2))
                        int32_t rdx_72 = *(rdx_71 + 8)
                        *(r8_1 + 0xc) = rdx_72
                        int32_t rax_134 = *(*(r9_2 + 0x1e8) + (sx.q(r12_1.d + 1) << 2))
                        int32_t rcx_100 = (r12_1.d + 1) << 8
                        r12_1 = zx.q(r12_1.d + 2)
                        int32_t rax_135 = rax_134 + rcx_100
                        r8_1[2].d = r12_1.d
                        
                        if (rdx_72 != 0)
                            goto label_1420ea34d
                        
                        uint32_t rcx_102 = rax_135 u>> 8
                        r12_1 = zx.q(rcx_102)
                        r10_1 =
                            zx.d(*(*(r9_2 + 0x1e8) + (zx.q(rcx_102) << 2) - 4)) - zx.d(rax_135.b)
                        var_2c8_1 = r10_1
                        continue
            
            r12 = arg2
            rdi += 1
            rsi = var_238
            rax_4 = *(r12 + 8)
            
            if (rdi s>= rax_4)
                break
    
    if (*(r13 + 8) != 0)
        if (r12 != r13)
            int128_t zmm1_1 = *r12
            *r12 = *r13
            *r13 = zmm1_1
        
        *(r13 + 8) = 0
        rdi = 0
        var_258 = 0
    
    sub_140d16360(&var_230)
    
    if (rdi s>= *(r12 + 8))
        break

int32_t rax_284 = *(r13 + 0xc)
void* rbx_38 = r14[1]
*(r13 + 8) = 0

if (rax_284 s< 0 && rax_284 != 0)
    sub_1405c5570(r13, 0)

int64_t result = sub_140ccd380(rbx_38, r13)

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_308)
return result
