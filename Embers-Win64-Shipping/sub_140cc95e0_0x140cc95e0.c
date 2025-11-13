// 函数: sub_140cc95e0
// 地址: 0x140cc95e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4a8
int64_t rax_1 = __security_cookie ^ &var_4a8
int64_t* r13 = arg1
int32_t var_458 = 0
int32_t r14 = 0
int32_t var_400 = 0
int128_t* rsi = arg2
int128_t* rax_2 = sub_140cc3cb0(arg1[1])
int128_t* r15 = rax_2

if (rax_2 == 0)
    int128_t* rax_3 = j_sub_140a82f30(0x20)
    r15 = rax_3
    
    if (rax_3 == 0)
        r15 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

void** var_3e8 = nullptr
int64_t var_3e0 = 0x80
sub_1405a4df0(&var_3e8)
int32_t rdx_2 = *(rsi + 8) + 1

if (rdx_2 s> *(rsi + 0xc))
    sub_1405c5570(rsi, rdx_2)

int32_t rdi = 0
int64_t r12 = 0

while (true)
    int64_t rbx_1 = *r13
    void** const var_3d8
    std::exception::exception(&var_3d8)
    int64_t var_3c0_1 = rbx_1
    var_3d8 = &data_142ea1868
    int128_t* var_3b8_1 = r15
    char var_3b0_1 = 1
    int32_t rax_4 = *(rsi + 8)
    
    if (rdi s< rax_4)
        while (true)
            int64_t rdx_3 = *rsi
            int32_t rcx_4 = rax_4 - 1
            void* r13_1 = *(rdx_3 + (r12 << 3))
            void* var_418_1 = r13_1
            
            if (rdi + 1 s<= rcx_4)
                rcx_4 = rdi + 1
            
            int32_t rbx_2 = *(*(r13_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_4) << 3))
            int64_t rcx_5 = sx.q(sub_140b673d0())
            int32_t i_13 = divs.dp.d(sx.q((rcx_5 - 1).d + rbx_2), rcx_5.d)
            
            if (i_13 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_5
                    i = i_13
                    i_13 -= 1
                while (i != 1)
            
            void* r11_1 = r13_1
            void** r8_1 = var_3e8
            int64_t* r9_2 = *(r13_1 + 0x10) + 0x1e8
            int64_t* var_440_1 = r9_2
            uint64_t r12_2 = 0
            void** var_450_1 = r8_1
            void* var_448_1 = r13_1
            uint32_t r10_1 = 0
            *r8_1 = r13_1
            r8_1[1].d = 0
            *(r8_1 + 0xc) = -1
            uint32_t var_464_1 = 0
            
            while (true)
                int32_t rsi_1 = r12_2.d
                int32_t rax_11 = 0
                
                if (r10_1 s> 0)
                    do
                        *(r8_1 + 0xc) -= 1
                        
                        if (*(r8_1 + 0xc) s> 0)
                            r11_1 = sx.q(r8_1[1].d) + *r8_1
                            *r8_1 = r11_1
                            r12_2 = zx.q(r8_1[2].d)
                            rsi_1 = r12_2.d
                            var_448_1 = r11_1
                            break
                        
                        r11_1 = r8_1[-3]
                        r8_1 -= 0x18
                        rax_11 += 1
                        var_448_1 = r11_1
                        var_450_1 = r8_1
                    while (rax_11 s< r10_1)
                
                int64_t r10_2 = *r9_2
                r12_2 = zx.q(r12_2.d + 1)
                uint64_t var_430_1 = r12_2
                uint64_t rax_13 = zx.q(*(r10_2 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_13.d u>> 8 & 0x1f
                uint64_t rcx_6 = zx.q(rdi_5 - 1)
                void* var_3d0
                void* rcx_249
                void*** rcx_257
                void* rbx_27
                uint64_t r8_21
                void* r13_3
                int32_t var_488
                int16_t* const var_480
                int16_t* const var_478
                
                if (rcx_6.d u> 0x11)
                    void* rax_599 = *(r13_1 + 0x10)
                    int16_t* var_410
                    void* var_408
                    
                    if (rax_599 != 0)
                        int64_t var_3a0 = *(rax_599 + 0x18)
                        sub_140b63b70(&var_3a0, &var_410)
                    else
                        var_410 = nullptr
                        sub_1405947f0(&var_410, (rax_599 + 5).d)
                        var_408.d = rax_599.d + 5
                        
                        if (rax_599.d + 5 s> var_408:4.d)
                            sub_140594770(&var_410)
                        
                        UnDecorator::getReferenceType(var_410, u"None", 0xa)
                    
                    int16_t* const rbx_38 = &data_142d40450
                    
                    if (var_408.d != 0)
                        rbx_38 = var_410
                    
                    int16_t* var_388
                    sub_140d21e10(r13_1, &var_388, 0)
                    int16_t* const rax_602 = &data_142d40450
                    int32_t var_380
                    
                    if (var_380 != 0)
                        rax_602 = var_388
                    
                    var_478 = rax_602
                    var_480 = rbx_38
                    var_488 = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    int16_t* rcx_381 = var_388
                    
                    if (rcx_381 != 0)
                        sub_140a74f90(rcx_381)
                    
                    int16_t* rcx_382 = var_410
                    r14 = (r14 | 1) & 0xfffffffe
                    var_458 = r14
                    
                    if (rcx_382 != 0)
                        sub_140a74f90(rcx_382)
                    
                    sub_140afbb40()
                    r11_1 = var_448_1
                    r10_1 = var_464_1
                    r9_2 = var_440_1
                else
                    switch (rcx_6)
                        case 0, 1
                            r10_1 = zx.d(rax_13.b)
                            void* rbx_5 = (rax_13 u>> 0xd) + r11_1
                            var_464_1 = r10_1
                            void* rax_14 = *rbx_5
                            
                            if (rax_14 u< data_143e1d660 || rax_14 u>= data_143e1d668)
                                rcx_6.b = 0
                            else
                                rcx_6.b = 1
                            
                            if (rax_14 == 0)
                                continue
                            else if (rcx_6.b != 0)
                                continue
                            else
                                int32_t rax_15 = *(rax_14 + 0xc)
                                uint32_t rdx_8 = zx.d(rax_15.w)
                                
                                if (rax_15 s< 0)
                                    rax_15 += 0xffff
                                    rdx_8 -= 0x10000
                                
                                int64_t rdx_9 = sx.q(rdx_8) * 3
                                int64_t rcx_8 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                void* r8_2 = rcx_8 + (rdx_9 << 3)
                                int32_t rcx_9 = *(rcx_8 + (rdx_9 << 3) + 8)
                                
                                if (((rcx_9 u>> 0x1d).b & 1) != 0)
                                    r8_1 = var_450_1
                                    *rbx_5 = 0
                                    continue
                                else if (((rcx_9 u>> 0x1c).b & 1) != 0)
                                    int32_t rcx_10 = rcx_9 & 0xefffffff
                                    *(r8_2 + 8) = rcx_10
                                    
                                    if (((rcx_10 u>> 0x18).b & 1) != 0)
                                        char var_468_1 = 0
                                        void* r11_5 =
                                            sx.q(not.d(*(r8_2 + 0xc))) * 0x50 + data_143e1d678
                                        int32_t* i_1 = *(r11_5 + 0x18)
                                        
                                        for (void* r10_3 = &i_1[sx.q(*(r11_5 + 0x20))]; 
                                                i_1 != r10_3; i_1 = &i_1[1])
                                            int32_t rax_29 = *i_1
                                            
                                            if (rax_29 s>= 0)
                                                int64_t rdx_12 = sx.q(zx.d(rax_29.w)) * 3
                                                int64_t rcx_15 =
                                                    *(data_143e1d9a0 + (sx.q(rax_29 s>> 0x10) << 3))
                                                int32_t rcx_16 = *(rcx_15 + (rdx_12 << 3) + 8)
                                                
                                                if (((rcx_16 u>> 0x1d).b & 1) != 0)
                                                    *i_1 = 0xffffffff
                                                    var_468_1 = 1
                                                else
                                                    *(rcx_15 + (rdx_12 << 3) + 8) =
                                                        rcx_16 & 0xefffffff
                                        
                                        int32_t* rsi_2 = *(r11_5 + 0x28)
                                        r12_2.b = 0
                                        void* r13_2 = &rsi_2[sx.q(*(r11_5 + 0x30))]
                                        
                                        if (rsi_2 == r13_2)
                                            if (var_468_1 == 0)
                                                goto label_140cc9769
                                            
                                        label_140cc9ab8:
                                            r13_3 = r11_5
                                            int64_t rsi_3 = 0
                                            int32_t* rdi_8 = *(r13_3 + 8)
                                            uint64_t r12_4 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                                            
                                            if (rdi_8 u> &rdi_8[sx.q(*(r13_3 + 0x10))])
                                                r12_4 = 0
                                            
                                            if (r12_4 != 0)
                                                do
                                                    int32_t rax_56 = *rdi_8
                                                    uint32_t rdx_20 = zx.d(rax_56.w)
                                                    
                                                    if (rax_56 s< 0)
                                                        rax_56 += 0xffff
                                                        rdx_20 -= 0x10000
                                                    
                                                    int64_t rbx_7 = sx.q(*(r15 + 8))
                                                    int32_t rax_60 = (rbx_7 + 1).d
                                                    int64_t r14_2 = *(*(data_143e1d9a0
                                                        + (sx.q(rax_56 s>> 0x10) << 3))
                                                        + sx.q(rdx_20) * 0x18)
                                                    *(r15 + 8) = rax_60
                                                    
                                                    if (rax_60 s> *(r15 + 0xc))
                                                        sub_1405a4d70(r15)
                                                    
                                                    rdi_8 = &rdi_8[1]
                                                    rsi_3 += 1
                                                    *(*r15 + (rbx_7 << 3)) = r14_2
                                                while (rsi_3 != r12_4)
                                            
                                        label_140cc9e15:
                                            *(r13_3 + 0x48) = 1
                                            data_143e1d69c = 1
                                        label_140cc9e21:
                                            r11_1 = var_448_1
                                            r10_1 = var_464_1
                                            r12_2 = var_430_1
                                            r14 = var_458
                                            r9_2 = var_440_1
                                            r13_1 = var_418_1
                                            r8_1 = var_450_1
                                            continue
                                        
                                        do
                                            int32_t rax_36 = *rsi_2
                                            
                                            if (rax_36 s>= 0)
                                                int64_t rdx_14 = sx.q(zx.d(rax_36.w)) * 3
                                                int64_t rcx_19 =
                                                    *(data_143e1d9a0 + (sx.q(rax_36 s>> 0x10) << 3))
                                                int64_t* rbx_6 = rcx_19 + (rdx_14 << 3)
                                                int32_t rcx_20 = *(rcx_19 + (rdx_14 << 3) + 8)
                                                
                                                if (((rcx_20 u>> 0x1d).b & 1) != 0)
                                                    *rsi_2 = 0xffffffff
                                                    r12_2.b = 1
                                                else if (((rcx_20 u>> 0x1c).b & 1) != 0)
                                                    rbx_6[1].d = rcx_20 & 0xefffffff
                                                    int64_t rdi_7 = sx.q(*(r15 + 8))
                                                    int64_t r14_1 = *rbx_6
                                                    int32_t rax_44 = (rdi_7 + 1).d
                                                    *(r15 + 8) = rax_44
                                                    
                                                    if (rax_44 s> *(r15 + 0xc))
                                                        sub_1405a4d70(r15)
                                                    
                                                    *(*r15 + (rdi_7 << 3)) = r14_1
                                                    int32_t rcx_23 = *(rbx_6 + 0xc)
                                                    
                                                    if (rcx_23 s< 0)
                                                        sub_140cc2a60(not.d(rcx_23), r15)
                                                else if (*(rbx_6 + 0xc) s> 0
                                                        && ((rcx_20 u>> 0x17).b & 1) == 0)
                                                    rbx_6[1].d = rcx_20 | 0x800000
                                                    int32_t rax_48 = *(rbx_6 + 0xc)
                                                    uint32_t rdx_17 = zx.d(rax_48.w)
                                                    
                                                    if (rax_48 s< 0)
                                                        rax_48 += 0xffff
                                                        rdx_17 -= 0x10000
                                                    
                                                    int64_t rdx_18 = sx.q(rdx_17) * 3
                                                    int64_t rcx_27 = *(data_143e1d9a0
                                                        + (sx.q(rax_48 s>> 0x10) << 3))
                                                    void* r8_3 = rcx_27 + (rdx_18 << 3)
                                                    int32_t rcx_28 = *(rcx_27 + (rdx_18 << 3) + 8)
                                                    
                                                    if (((rcx_28 u>> 0x1c).b & 1) != 0)
                                                        *(r8_3 + 8) = rcx_28 & 0xefffffff
                                                        sub_140cc2a60(not.d(*(r8_3 + 0xc)), r15)
                                            
                                            rsi_2 = &rsi_2[1]
                                        while (rsi_2 != r13_2)
                                        
                                        if (r12_2.b != 0 || var_468_1 != 0)
                                            goto label_140cc9ab8
                                        
                                        goto label_140cc9769
                                    else
                                        int64_t rdi_6 = sx.q(*(r15 + 8))
                                        int32_t rax_23 = (rdi_6 + 1).d
                                        *(r15 + 8) = rax_23
                                        
                                        if (rax_23 s> *(r15 + 0xc))
                                            sub_1405a4d70(r15)
                                            r11_1 = var_448_1
                                            r10_1 = var_464_1
                                            r9_2 = var_440_1
                                        
                                        r8_1 = var_450_1
                                        *(*r15 + (rdi_6 << 3)) = *rbx_5
                                        continue
                                else if (*(r8_2 + 0xc) s<= 0 || ((rcx_9 u>> 0x17).b & 1) != 0)
                                    r8_1 = var_450_1
                                    continue
                                else
                                    *(r8_2 + 8) = rcx_9 | 0x800000
                                    int32_t rax_64 = *(r8_2 + 0xc)
                                    uint32_t rdx_23 = zx.d(rax_64.w)
                                    
                                    if (rax_64 s< 0)
                                        rax_64 += 0xffff
                                        rdx_23 -= 0x10000
                                    
                                    int64_t rdx_24 = sx.q(rdx_23) * 3
                                    int64_t rcx_37 =
                                        *(data_143e1d9a0 + (sx.q(rax_64 s>> 0x10) << 3))
                                    void* r8_4 = rcx_37 + (rdx_24 << 3)
                                    int32_t rcx_38 = *(rcx_37 + (rdx_24 << 3) + 8)
                                    
                                    if (((rcx_38 u>> 0x1c).b & 1) != 0)
                                        char var_468_2 = 0
                                        *(r8_4 + 8) = rcx_38 & 0xefffffff
                                        void* r11_8 =
                                            sx.q(not.d(*(r8_4 + 0xc))) * 0x50 + data_143e1d678
                                        int32_t* i_2 = *(r11_8 + 0x18)
                                        
                                        for (void* r10_4 = &i_2[sx.q(*(r11_8 + 0x20))]; 
                                                i_2 != r10_4; i_2 = &i_2[1])
                                            int32_t rax_74 = *i_2
                                            
                                            if (rax_74 s>= 0)
                                                int64_t rdx_26 = sx.q(zx.d(rax_74.w)) * 3
                                                int64_t rcx_41 =
                                                    *(data_143e1d9a0 + (sx.q(rax_74 s>> 0x10) << 3))
                                                int32_t rcx_42 = *(rcx_41 + (rdx_26 << 3) + 8)
                                                
                                                if (((rcx_42 u>> 0x1d).b & 1) != 0)
                                                    *i_2 = 0xffffffff
                                                    var_468_2 = 1
                                                else
                                                    *(rcx_41 + (rdx_26 << 3) + 8) =
                                                        rcx_42 & 0xefffffff
                                        
                                        int32_t* rsi_4 = *(r11_8 + 0x28)
                                        r12_2.b = 0
                                        void* r13_4 = &rsi_4[sx.q(*(r11_8 + 0x30))]
                                        
                                        if (rsi_4 != r13_4)
                                            do
                                                int32_t rax_81 = *rsi_4
                                                
                                                if (rax_81 s>= 0)
                                                    int64_t rdx_28 = sx.q(zx.d(rax_81.w)) * 3
                                                    int64_t rcx_45 = *(data_143e1d9a0
                                                        + (sx.q(rax_81 s>> 0x10) << 3))
                                                    int64_t* rbx_8 = rcx_45 + (rdx_28 << 3)
                                                    int32_t rcx_46 = *(rcx_45 + (rdx_28 << 3) + 8)
                                                    
                                                    if (((rcx_46 u>> 0x1d).b & 1) != 0)
                                                        *rsi_4 = 0xffffffff
                                                        r12_2.b = 1
                                                    else if (((rcx_46 u>> 0x1c).b & 1) != 0)
                                                        rbx_8[1].d = rcx_46 & 0xefffffff
                                                        int64_t rdi_9 = sx.q(*(r15 + 8))
                                                        int64_t r14_3 = *rbx_8
                                                        int32_t rax_89 = (rdi_9 + 1).d
                                                        *(r15 + 8) = rax_89
                                                        
                                                        if (rax_89 s> *(r15 + 0xc))
                                                            sub_1405a4d70(r15)
                                                        
                                                        *(*r15 + (rdi_9 << 3)) = r14_3
                                                        int32_t rcx_49 = *(rbx_8 + 0xc)
                                                        
                                                        if (rcx_49 s< 0)
                                                            sub_140cc2a60(not.d(rcx_49), r15)
                                                    else if (*(rbx_8 + 0xc) s> 0
                                                            && ((rcx_46 u>> 0x17).b & 1) == 0)
                                                        rbx_8[1].d = rcx_46 | 0x800000
                                                        int32_t rax_93 = *(rbx_8 + 0xc)
                                                        uint32_t rdx_31 = zx.d(rax_93.w)
                                                        
                                                        if (rax_93 s< 0)
                                                            rax_93 += 0xffff
                                                            rdx_31 -= 0x10000
                                                        
                                                        int64_t rdx_32 = sx.q(rdx_31) * 3
                                                        int64_t rcx_53 = *(data_143e1d9a0
                                                            + (sx.q(rax_93 s>> 0x10) << 3))
                                                        void* r8_5 = rcx_53 + (rdx_32 << 3)
                                                        int32_t rcx_54 =
                                                            *(rcx_53 + (rdx_32 << 3) + 8)
                                                        
                                                        if (((rcx_54 u>> 0x1c).b & 1) != 0)
                                                            *(r8_5 + 8) = rcx_54 & 0xefffffff
                                                            sub_140cc2a60(not.d(*(r8_5 + 0xc)), r15)
                                                
                                                rsi_4 = &rsi_4[1]
                                            while (rsi_4 != r13_4)
                                            
                                            if (r12_2.b == 0 && var_468_2 == 0)
                                                goto label_140cc9769
                                        else if (var_468_2 == 0)
                                            goto label_140cc9769
                                        
                                        r13_3 = r11_8
                                        int64_t rsi_5 = 0
                                        int32_t* rdi_10 = *(r13_3 + 8)
                                        uint64_t r12_6 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                                        
                                        if (rdi_10 u> &rdi_10[sx.q(*(r13_3 + 0x10))])
                                            r12_6 = 0
                                        
                                        if (r12_6 != 0)
                                            do
                                                int32_t rax_101 = *rdi_10
                                                uint32_t rdx_34 = zx.d(rax_101.w)
                                                
                                                if (rax_101 s< 0)
                                                    rax_101 += 0xffff
                                                    rdx_34 -= 0x10000
                                                
                                                int64_t rbx_9 = sx.q(*(r15 + 8))
                                                int32_t rax_105 = (rbx_9 + 1).d
                                                int64_t r14_4 = *(*(data_143e1d9a0
                                                    + (sx.q(rax_101 s>> 0x10) << 3))
                                                    + sx.q(rdx_34) * 0x18)
                                                *(r15 + 8) = rax_105
                                                
                                                if (rax_105 s> *(r15 + 0xc))
                                                    sub_1405a4d70(r15)
                                                
                                                rdi_10 = &rdi_10[1]
                                                rsi_5 += 1
                                                *(*r15 + (rbx_9 << 3)) = r14_4
                                            while (rsi_5 != r12_6)
                                        
                                        goto label_140cc9e15
                                    
                                    r13_1 = var_418_1
                                    r14 = var_458
                        case 2
                            r10_1 = zx.d(rax_13.b)
                            void* rbx_22 = (rax_13 u>> 0xd) + r11_1
                            var_464_1 = r10_1
                            void* rax_308 = *rbx_22
                            
                            if (rax_308 u< data_143e1d660 || rax_308 u>= data_143e1d668)
                                rcx_6.b = 0
                            else
                                rcx_6.b = 1
                            
                            if (rax_308 == 0)
                                continue
                            else if (rcx_6.b != 0)
                                continue
                            else
                                int32_t rax_309 = *(rax_308 + 0xc)
                                uint32_t rdx_108 = zx.d(rax_309.w)
                                
                                if (rax_309 s< 0)
                                    rax_309 += 0xffff
                                    rdx_108 -= 0x10000
                                
                                int64_t rdx_109 = sx.q(rdx_108) * 3
                                int64_t rcx_190 = *(data_143e1d9a0 + (sx.q(rax_309 s>> 0x10) << 3))
                                void* r8_14 = rcx_190 + (rdx_109 << 3)
                                int32_t rcx_191 = *(rcx_190 + (rdx_109 << 3) + 8)
                                
                                if (((rcx_191 u>> 0x1c).b & 1) != 0)
                                    int32_t rcx_192 = rcx_191 & 0xefffffff
                                    *(r8_14 + 8) = rcx_192
                                    
                                    if (((rcx_192 u>> 0x18).b & 1) != 0)
                                        char var_468_7 = 0
                                        void* r11_24 =
                                            sx.q(not.d(*(r8_14 + 0xc))) * 0x50 + data_143e1d678
                                        int32_t* i_3 = *(r11_24 + 0x18)
                                        
                                        for (void* r10_11 = &i_3[sx.q(*(r11_24 + 0x20))]; 
                                                i_3 != r10_11; i_3 = &i_3[1])
                                            int32_t rax_321 = *i_3
                                            
                                            if (rax_321 s>= 0)
                                                int64_t rdx_112 = sx.q(zx.d(rax_321.w)) * 3
                                                int64_t rcx_197 = *(data_143e1d9a0
                                                    + (sx.q(rax_321 s>> 0x10) << 3))
                                                int32_t rcx_198 = *(rcx_197 + (rdx_112 << 3) + 8)
                                                
                                                if (((rcx_198 u>> 0x1d).b & 1) != 0)
                                                    *i_3 = 0xffffffff
                                                    var_468_7 = 1
                                                else
                                                    *(rcx_197 + (rdx_112 << 3) + 8) =
                                                        rcx_198 & 0xefffffff
                                        
                                        int32_t* rsi_14 = *(r11_24 + 0x28)
                                        r12_2.b = 0
                                        void* r13_11 = &rsi_14[sx.q(*(r11_24 + 0x30))]
                                        
                                        if (rsi_14 != r13_11)
                                            do
                                                int32_t rax_328 = *rsi_14
                                                
                                                if (rax_328 s>= 0)
                                                    int64_t rdx_114 = sx.q(zx.d(rax_328.w)) * 3
                                                    int64_t rcx_201 = *(data_143e1d9a0
                                                        + (sx.q(rax_328 s>> 0x10) << 3))
                                                    int64_t* rbx_23 = rcx_201 + (rdx_114 << 3)
                                                    int32_t rcx_202 =
                                                        *(rcx_201 + (rdx_114 << 3) + 8)
                                                    
                                                    if (((rcx_202 u>> 0x1d).b & 1) != 0)
                                                        *rsi_14 = 0xffffffff
                                                        r12_2.b = 1
                                                    else if (((rcx_202 u>> 0x1c).b & 1) != 0)
                                                        rbx_23[1].d = rcx_202 & 0xefffffff
                                                        int64_t rdi_22 = sx.q(*(r15 + 8))
                                                        int64_t r14_13 = *rbx_23
                                                        int32_t rax_336 = (rdi_22 + 1).d
                                                        *(r15 + 8) = rax_336
                                                        
                                                        if (rax_336 s> *(r15 + 0xc))
                                                            sub_1405a4d70(r15)
                                                        
                                                        *(*r15 + (rdi_22 << 3)) = r14_13
                                                        int32_t rcx_205 = *(rbx_23 + 0xc)
                                                        
                                                        if (rcx_205 s< 0)
                                                            sub_140cc2a60(not.d(rcx_205), r15)
                                                    else if (*(rbx_23 + 0xc) s> 0
                                                            && ((rcx_202 u>> 0x17).b & 1) == 0)
                                                        rbx_23[1].d = rcx_202 | 0x800000
                                                        int32_t rax_340 = *(rbx_23 + 0xc)
                                                        uint32_t rdx_117 = zx.d(rax_340.w)
                                                        
                                                        if (rax_340 s< 0)
                                                            rax_340 += 0xffff
                                                            rdx_117 -= 0x10000
                                                        
                                                        int64_t rdx_118 = sx.q(rdx_117) * 3
                                                        int64_t rcx_209 = *(data_143e1d9a0
                                                            + (sx.q(rax_340 s>> 0x10) << 3))
                                                        void* r8_15 = rcx_209 + (rdx_118 << 3)
                                                        int32_t rcx_210 =
                                                            *(rcx_209 + (rdx_118 << 3) + 8)
                                                        
                                                        if (((rcx_210 u>> 0x1c).b & 1) != 0)
                                                            *(r8_15 + 8) = rcx_210 & 0xefffffff
                                                            sub_140cc2a60(not.d(*(r8_15 + 0xc)), 
                                                                r15)
                                                
                                                rsi_14 = &rsi_14[1]
                                            while (rsi_14 != r13_11)
                                            
                                            if (r12_2.b != 0 || var_468_7 != 0)
                                                goto label_140ccae2a
                                            
                                            goto label_140cc9769
                                        
                                        if (var_468_7 != 0)
                                        label_140ccae2a:
                                            r13_3 = r11_24
                                            int64_t rsi_15 = 0
                                            int32_t* rdi_23 = *(r13_3 + 8)
                                            uint64_t r12_15 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                                            
                                            if (rdi_23 u> &rdi_23[sx.q(*(r13_3 + 0x10))])
                                                r12_15 = 0
                                            
                                            if (r12_15 != 0)
                                                do
                                                    int32_t rax_348 = *rdi_23
                                                    uint32_t rdx_120 = zx.d(rax_348.w)
                                                    
                                                    if (rax_348 s< 0)
                                                        rax_348 += 0xffff
                                                        rdx_120 -= 0x10000
                                                    
                                                    int64_t rbx_24 = sx.q(*(r15 + 8))
                                                    int32_t rax_352 = (rbx_24 + 1).d
                                                    int64_t r14_14 = *(*(data_143e1d9a0
                                                        + (sx.q(rax_348 s>> 0x10) << 3))
                                                        + sx.q(rdx_120) * 0x18)
                                                    *(r15 + 8) = rax_352
                                                    
                                                    if (rax_352 s> *(r15 + 0xc))
                                                        sub_1405a4d70(r15)
                                                    
                                                    rdi_23 = &rdi_23[1]
                                                    rsi_15 += 1
                                                    *(*r15 + (rbx_24 << 3)) = r14_14
                                                while (rsi_15 != r12_15)
                                            
                                            goto label_140cc9e15
                                        
                                    label_140cc9769:
                                        r11_1 = var_448_1
                                        r9_2 = var_440_1
                                        r12_2 = var_430_1
                                        r10_1 = var_464_1
                                        r13_1 = var_418_1
                                        r14 = var_458
                                    else
                                        int64_t rdi_21 = sx.q(*(r15 + 8))
                                        int32_t rax_315 = (rdi_21 + 1).d
                                        *(r15 + 8) = rax_315
                                        
                                        if (rax_315 s> *(r15 + 0xc))
                                            sub_1405a4d70(r15)
                                            r11_1 = var_448_1
                                            r10_1 = var_464_1
                                            r9_2 = var_440_1
                                        
                                        *(*r15 + (rdi_21 << 3)) = *rbx_22
                                else if (*(r8_14 + 0xc) s<= 0 || ((rcx_191 u>> 0x17).b & 1) != 0)
                                    r8_1 = var_450_1
                                    continue
                                else
                                    *(r8_14 + 8) = rcx_191 | 0x800000
                                    int32_t rax_356 = *(r8_14 + 0xc)
                                    uint32_t rdx_123 = zx.d(rax_356.w)
                                    
                                    if (rax_356 s< 0)
                                        rax_356 += 0xffff
                                        rdx_123 -= 0x10000
                                    
                                    int64_t rdx_124 = sx.q(rdx_123) * 3
                                    int64_t rcx_219 =
                                        *(data_143e1d9a0 + (sx.q(rax_356 s>> 0x10) << 3))
                                    void* r8_16 = rcx_219 + (rdx_124 << 3)
                                    int32_t rcx_220 = *(rcx_219 + (rdx_124 << 3) + 8)
                                    
                                    if (((rcx_220 u>> 0x1c).b & 1) != 0)
                                        char var_468_8 = 0
                                        *(r8_16 + 8) = rcx_220 & 0xefffffff
                                        void* r11_27 =
                                            sx.q(not.d(*(r8_16 + 0xc))) * 0x50 + data_143e1d678
                                        int32_t* i_4 = *(r11_27 + 0x18)
                                        
                                        for (void* r10_12 = &i_4[sx.q(*(r11_27 + 0x20))]; 
                                                i_4 != r10_12; i_4 = &i_4[1])
                                            int32_t rax_366 = *i_4
                                            
                                            if (rax_366 s>= 0)
                                                int64_t rdx_126 = sx.q(zx.d(rax_366.w)) * 3
                                                int64_t rcx_223 = *(data_143e1d9a0
                                                    + (sx.q(rax_366 s>> 0x10) << 3))
                                                int32_t rcx_224 = *(rcx_223 + (rdx_126 << 3) + 8)
                                                
                                                if (((rcx_224 u>> 0x1d).b & 1) != 0)
                                                    *i_4 = 0xffffffff
                                                    var_468_8 = 1
                                                else
                                                    *(rcx_223 + (rdx_126 << 3) + 8) =
                                                        rcx_224 & 0xefffffff
                                        
                                        int32_t* rsi_16 = *(r11_27 + 0x28)
                                        r12_2.b = 0
                                        void* r13_12 = &rsi_16[sx.q(*(r11_27 + 0x30))]
                                        
                                        if (rsi_16 != r13_12)
                                            do
                                                int32_t rax_373 = *rsi_16
                                                
                                                if (rax_373 s>= 0)
                                                    int64_t rdx_128 = sx.q(zx.d(rax_373.w)) * 3
                                                    int64_t rcx_227 = *(data_143e1d9a0
                                                        + (sx.q(rax_373 s>> 0x10) << 3))
                                                    int64_t* rbx_25 = rcx_227 + (rdx_128 << 3)
                                                    int32_t rcx_228 =
                                                        *(rcx_227 + (rdx_128 << 3) + 8)
                                                    
                                                    if (((rcx_228 u>> 0x1d).b & 1) != 0)
                                                        *rsi_16 = 0xffffffff
                                                        r12_2.b = 1
                                                    else if (((rcx_228 u>> 0x1c).b & 1) != 0)
                                                        rbx_25[1].d = rcx_228 & 0xefffffff
                                                        int64_t rdi_24 = sx.q(*(r15 + 8))
                                                        int64_t r14_15 = *rbx_25
                                                        int32_t rax_381 = (rdi_24 + 1).d
                                                        *(r15 + 8) = rax_381
                                                        
                                                        if (rax_381 s> *(r15 + 0xc))
                                                            sub_1405a4d70(r15)
                                                        
                                                        *(*r15 + (rdi_24 << 3)) = r14_15
                                                        int32_t rcx_231 = *(rbx_25 + 0xc)
                                                        
                                                        if (rcx_231 s< 0)
                                                            sub_140cc2a60(not.d(rcx_231), r15)
                                                    else if (*(rbx_25 + 0xc) s> 0
                                                            && ((rcx_228 u>> 0x17).b & 1) == 0)
                                                        rbx_25[1].d = rcx_228 | 0x800000
                                                        int32_t rax_385 = *(rbx_25 + 0xc)
                                                        uint32_t rdx_131 = zx.d(rax_385.w)
                                                        
                                                        if (rax_385 s< 0)
                                                            rax_385 += 0xffff
                                                            rdx_131 -= 0x10000
                                                        
                                                        int64_t rdx_132 = sx.q(rdx_131) * 3
                                                        int64_t rcx_235 = *(data_143e1d9a0
                                                            + (sx.q(rax_385 s>> 0x10) << 3))
                                                        void* r8_17 = rcx_235 + (rdx_132 << 3)
                                                        int32_t rcx_236 =
                                                            *(rcx_235 + (rdx_132 << 3) + 8)
                                                        
                                                        if (((rcx_236 u>> 0x1c).b & 1) != 0)
                                                            *(r8_17 + 8) = rcx_236 & 0xefffffff
                                                            sub_140cc2a60(not.d(*(r8_17 + 0xc)), 
                                                                r15)
                                                
                                                rsi_16 = &rsi_16[1]
                                            while (rsi_16 != r13_12)
                                            
                                            if (r12_2.b == 0 && var_468_8 == 0)
                                                goto label_140cc9769
                                        else if (var_468_8 == 0)
                                            goto label_140cc9769
                                        
                                        r13_3 = r11_27
                                        int64_t rsi_17 = 0
                                        int32_t* rdi_25 = *(r13_3 + 8)
                                        uint64_t r12_17 = sx.q(*(r13_3 + 0x10)) << 2 u>> 2
                                        
                                        if (rdi_25 u> &rdi_25[sx.q(*(r13_3 + 0x10))])
                                            r12_17 = 0
                                        
                                        if (r12_17 != 0)
                                            do
                                                int32_t rax_393 = *rdi_25
                                                uint32_t rdx_134 = zx.d(rax_393.w)
                                                
                                                if (rax_393 s< 0)
                                                    rax_393 += 0xffff
                                                    rdx_134 -= 0x10000
                                                
                                                int64_t rbx_26 = sx.q(*(r15 + 8))
                                                int32_t rax_397 = (rbx_26 + 1).d
                                                int64_t r14_16 = *(*(data_143e1d9a0
                                                    + (sx.q(rax_393 s>> 0x10) << 3))
                                                    + sx.q(rdx_134) * 0x18)
                                                *(r15 + 8) = rax_397
                                                
                                                if (rax_397 s> *(r15 + 0xc))
                                                    sub_1405a4d70(r15)
                                                
                                                rdi_25 = &rdi_25[1]
                                                rsi_17 += 1
                                                *(*r15 + (rbx_26 << 3)) = r14_16
                                            while (rsi_17 != r12_17)
                                        
                                        goto label_140cc9e15
                                    
                                    r13_1 = var_418_1
                                    r14 = var_458
                        case 3
                            r10_1 = zx.d(rax_13.b)
                            var_464_1 = r10_1
                            int64_t rcx_61 = 0
                            void* rdx_39 = (rax_13 u>> 0xd) + r11_1
                            int64_t var_438_3 = 0
                            void* var_460_1 = rdx_39
                            int64_t rax_107 = sx.q(*(rdx_39 + 8))
                            
                            if (rax_107 s<= 0)
                                continue
                            else
                                do
                                    int64_t rax_108 = *rdx_39
                                    int64_t* rdi_11 = rax_108 + (rcx_61 << 3)
                                    void* rax_109 = *(rax_108 + (rcx_61 << 3))
                                    
                                    if (rax_109 u< data_143e1d660 || rax_109 u>= data_143e1d668)
                                        rcx_61.b = 0
                                    else
                                        rcx_61.b = 1
                                    
                                    if (rax_109 != 0 && rcx_61.b == 0)
                                        int32_t rax_110 = *(rax_109 + 0xc)
                                        uint32_t rdx_40 = zx.d(rax_110.w)
                                        
                                        if (rax_110 s< 0)
                                            rax_110 += 0xffff
                                            rdx_40 -= 0x10000
                                        
                                        int64_t rdx_41 = sx.q(rdx_40) * 3
                                        int64_t rcx_63 =
                                            *(data_143e1d9a0 + (sx.q(rax_110 s>> 0x10) << 3))
                                        void* r8_6 = rcx_63 + (rdx_41 << 3)
                                        int32_t rcx_64 = *(rcx_63 + (rdx_41 << 3) + 8)
                                        
                                        if (((rcx_64 u>> 0x1d).b & 1) != 0)
                                            *rdi_11 = 0
                                        else if (((rcx_64 u>> 0x1c).b & 1) != 0)
                                            int32_t rcx_65 = rcx_64 & 0xefffffff
                                            *(r8_6 + 8) = rcx_65
                                            
                                            if (((rcx_65 u>> 0x18).b & 1) != 0)
                                                char var_468_3 = 0
                                                void* r11_11 = sx.q(not.d(*(r8_6 + 0xc))) * 0x50
                                                    + data_143e1d678
                                                int32_t* i_5 = *(r11_11 + 0x18)
                                                
                                                for (void* r10_5 = &i_5[sx.q(*(r11_11 + 0x20))]; 
                                                        i_5 != r10_5; i_5 = &i_5[1])
                                                    int32_t rax_124 = *i_5
                                                    
                                                    if (rax_124 s>= 0)
                                                        int64_t rdx_44 = sx.q(zx.d(rax_124.w)) * 3
                                                        int64_t rcx_70 = *(data_143e1d9a0
                                                            + (sx.q(rax_124 s>> 0x10) << 3))
                                                        int32_t rcx_71 =
                                                            *(rcx_70 + (rdx_44 << 3) + 8)
                                                        
                                                        if (((rcx_71 u>> 0x1d).b & 1) != 0)
                                                            *i_5 = 0xffffffff
                                                            var_468_3 = 1
                                                        else
                                                            *(rcx_70 + (rdx_44 << 3) + 8) =
                                                                rcx_71 & 0xefffffff
                                                
                                                int32_t* rsi_6 = *(r11_11 + 0x28)
                                                r12_2.b = 0
                                                void* r13_5 = &rsi_6[sx.q(*(r11_11 + 0x30))]
                                                
                                                if (rsi_6 != r13_5)
                                                    do
                                                        int32_t rax_131 = *rsi_6
                                                        
                                                        if (rax_131 s>= 0)
                                                            int64_t rdx_46 =
                                                                sx.q(zx.d(rax_131.w)) * 3
                                                            int64_t rcx_74 = *(data_143e1d9a0
                                                                + (sx.q(rax_131 s>> 0x10) << 3))
                                                            int64_t* rbx_11 = rcx_74 + (rdx_46 << 3)
                                                            int32_t rcx_75 =
                                                                *(rcx_74 + (rdx_46 << 3) + 8)
                                                            
                                                            if (((rcx_75 u>> 0x1d).b & 1) != 0)
                                                                *rsi_6 = 0xffffffff
                                                                r12_2.b = 1
                                                            else if (((rcx_75 u>> 0x1c).b & 1) != 0)
                                                                rbx_11[1].d = rcx_75 & 0xefffffff
                                                                int64_t rdi_12 = sx.q(*(r15 + 8))
                                                                int64_t r14_5 = *rbx_11
                                                                int32_t rax_139 = (rdi_12 + 1).d
                                                                *(r15 + 8) = rax_139
                                                                
                                                                if (rax_139 s> *(r15 + 0xc))
                                                                    sub_1405a4d70(r15)
                                                                
                                                                *(*r15 + (rdi_12 << 3)) = r14_5
                                                                int32_t rcx_78 = *(rbx_11 + 0xc)
                                                                
                                                                if (rcx_78 s< 0)
                                                                    sub_140cc2a60(not.d(rcx_78), r15)
                                                            else if (*(rbx_11 + 0xc) s> 0
                                                                    && ((rcx_75 u>> 0x17).b & 1) == 0)
                                                                rbx_11[1].d = rcx_75 | 0x800000
                                                                int32_t rax_143 = *(rbx_11 + 0xc)
                                                                uint32_t rdx_49 = zx.d(rax_143.w)
                                                                
                                                                if (rax_143 s< 0)
                                                                    rax_143 += 0xffff
                                                                    rdx_49 -= 0x10000
                                                                
                                                                int64_t rdx_50 = sx.q(rdx_49) * 3
                                                                int64_t rcx_82 = *(data_143e1d9a0
                                                                    + (sx.q(rax_143 s>> 0x10) << 3))
                                                                void* r8_7 = rcx_82 + (rdx_50 << 3)
                                                                int32_t rcx_83 =
                                                                    *(rcx_82 + (rdx_50 << 3) + 8)
                                                                
                                                                if (((rcx_83 u>> 0x1c).b & 1) != 0)
                                                                    *(r8_7 + 8) = rcx_83 & 0xefffffff
                                                                    sub_140cc2a60(not.d(*(r8_7 + 0xc)), r15)
                                                        
                                                        rsi_6 = &rsi_6[1]
                                                    while (rsi_6 != r13_5)
                                                    
                                                    if (r12_2.b != 0 || var_468_3 != 0)
                                                        goto label_140cca0f8
                                                else if (var_468_3 != 0)
                                                label_140cca0f8:
                                                    int64_t rsi_7 = 0
                                                    int32_t* rdi_13 = *(r11_11 + 8)
                                                    r12_2 = sx.q(*(r11_11 + 0x10)) << 2 u>> 2
                                                    
                                                    if (rdi_13 u> &rdi_13[sx.q(*(r11_11 + 0x10))])
                                                        r12_2 = 0
                                                    
                                                    if (r12_2 != 0)
                                                        do
                                                            int32_t rax_151 = *rdi_13
                                                            uint32_t rdx_52 = zx.d(rax_151.w)
                                                            
                                                            if (rax_151 s< 0)
                                                                rax_151 += 0xffff
                                                                rdx_52 -= 0x10000
                                                            
                                                            int64_t rbx_12 = sx.q(*(r15 + 8))
                                                            int32_t rax_155 = (rbx_12 + 1).d
                                                            int64_t r14_6 = *(*(data_143e1d9a0
                                                                + (sx.q(rax_151 s>> 0x10) << 3))
                                                                + sx.q(rdx_52) * 0x18)
                                                            *(r15 + 8) = rax_155
                                                            
                                                            if (rax_155 s> *(r15 + 0xc))
                                                                sub_1405a4d70(r15)
                                                            
                                                            rdi_13 = &rdi_13[1]
                                                            rsi_7 += 1
                                                            *(*r15 + (rbx_12 << 3)) = r14_6
                                                        while (rsi_7 != r12_2)
                                                    
                                                    *(r11_11 + 0x48) = 1
                                                    data_143e1d69c = 1
                                            else
                                                int64_t rbx_10 = sx.q(*(r15 + 8))
                                                int32_t rax_118 = (rbx_10 + 1).d
                                                *(r15 + 8) = rax_118
                                                
                                                if (rax_118 s> *(r15 + 0xc))
                                                    sub_1405a4d70(r15)
                                                
                                                *(*r15 + (rbx_10 << 3)) = *rdi_11
                                        else if (*(r8_6 + 0xc) s> 0
                                                && ((rcx_64 u>> 0x17).b & 1) == 0)
                                            *(r8_6 + 8) = rcx_64 | 0x800000
                                            int32_t rax_159 = *(r8_6 + 0xc)
                                            uint32_t rdx_55 = zx.d(rax_159.w)
                                            
                                            if (rax_159 s< 0)
                                                rax_159 += 0xffff
                                                rdx_55 -= 0x10000
                                            
                                            int64_t rdx_56 = sx.q(rdx_55) * 3
                                            int64_t rcx_92 =
                                                *(data_143e1d9a0 + (sx.q(rax_159 s>> 0x10) << 3))
                                            void* r8_8 = rcx_92 + (rdx_56 << 3)
                                            int32_t rcx_93 = *(rcx_92 + (rdx_56 << 3) + 8)
                                            
                                            if (((rcx_93 u>> 0x1c).b & 1) != 0)
                                                char var_468_4 = 0
                                                *(r8_8 + 8) = rcx_93 & 0xefffffff
                                                void* r11_14 = sx.q(not.d(*(r8_8 + 0xc))) * 0x50
                                                    + data_143e1d678
                                                int32_t* i_6 = *(r11_14 + 0x18)
                                                
                                                for (void* r10_6 = &i_6[sx.q(*(r11_14 + 0x20))]; 
                                                        i_6 != r10_6; i_6 = &i_6[1])
                                                    int32_t rax_169 = *i_6
                                                    
                                                    if (rax_169 s>= 0)
                                                        int64_t rdx_58 = sx.q(zx.d(rax_169.w)) * 3
                                                        int64_t rcx_96 = *(data_143e1d9a0
                                                            + (sx.q(rax_169 s>> 0x10) << 3))
                                                        int32_t rcx_97 =
                                                            *(rcx_96 + (rdx_58 << 3) + 8)
                                                        
                                                        if (((rcx_97 u>> 0x1d).b & 1) != 0)
                                                            *i_6 = 0xffffffff
                                                            var_468_4 = 1
                                                        else
                                                            *(rcx_96 + (rdx_58 << 3) + 8) =
                                                                rcx_97 & 0xefffffff
                                                
                                                int32_t* rsi_8 = *(r11_14 + 0x28)
                                                r12_2.b = 0
                                                void* r13_7 = &rsi_8[sx.q(*(r11_14 + 0x30))]
                                                
                                                if (rsi_8 != r13_7)
                                                    do
                                                        int32_t rax_176 = *rsi_8
                                                        
                                                        if (rax_176 s>= 0)
                                                            int64_t rdx_60 =
                                                                sx.q(zx.d(rax_176.w)) * 3
                                                            int64_t rcx_100 = *(data_143e1d9a0
                                                                + (sx.q(rax_176 s>> 0x10) << 3))
                                                            int64_t* rbx_13 =
                                                                rcx_100 + (rdx_60 << 3)
                                                            int32_t rcx_101 =
                                                                *(rcx_100 + (rdx_60 << 3) + 8)
                                                            
                                                            if (((rcx_101 u>> 0x1d).b & 1) != 0)
                                                                *rsi_8 = 0xffffffff
                                                                r12_2.b = 1
                                                            else if (((rcx_101 u>> 0x1c).b & 1)
                                                                    != 0)
                                                                rbx_13[1].d = rcx_101 & 0xefffffff
                                                                int64_t rdi_14 = sx.q(*(r15 + 8))
                                                                int64_t r14_7 = *rbx_13
                                                                int32_t rax_184 = (rdi_14 + 1).d
                                                                *(r15 + 8) = rax_184
                                                                
                                                                if (rax_184 s> *(r15 + 0xc))
                                                                    sub_1405a4d70(r15)
                                                                
                                                                *(*r15 + (rdi_14 << 3)) = r14_7
                                                                int32_t rcx_104 = *(rbx_13 + 0xc)
                                                                
                                                                if (rcx_104 s< 0)
                                                                    sub_140cc2a60(not.d(rcx_104), r15)
                                                            else if (*(rbx_13 + 0xc) s> 0
                                                                    && ((rcx_101 u>> 0x17).b & 1) == 0)
                                                                rbx_13[1].d = rcx_101 | 0x800000
                                                                int32_t rax_188 = *(rbx_13 + 0xc)
                                                                uint32_t rdx_63 = zx.d(rax_188.w)
                                                                
                                                                if (rax_188 s< 0)
                                                                    rax_188 += 0xffff
                                                                    rdx_63 -= 0x10000
                                                                
                                                                int64_t rdx_64 = sx.q(rdx_63) * 3
                                                                int64_t rcx_108 = *(data_143e1d9a0
                                                                    + (sx.q(rax_188 s>> 0x10) << 3))
                                                                void* r8_9 = rcx_108 + (rdx_64 << 3)
                                                                int32_t rcx_109 =
                                                                    *(rcx_108 + (rdx_64 << 3) + 8)
                                                                
                                                                if (((rcx_109 u>> 0x1c).b & 1) != 0)
                                                                    *(r8_9 + 8) = rcx_109 & 0xefffffff
                                                                    sub_140cc2a60(not.d(*(r8_9 + 0xc)), r15)
                                                        
                                                        rsi_8 = &rsi_8[1]
                                                    while (rsi_8 != r13_7)
                                                    
                                                    if (r12_2.b != 0 || var_468_4 != 0)
                                                        goto label_140cca3b8
                                                else if (var_468_4 != 0)
                                                label_140cca3b8:
                                                    int64_t rsi_9 = 0
                                                    int32_t* rdi_15 = *(r11_14 + 8)
                                                    r12_2 = sx.q(*(r11_14 + 0x10)) << 2 u>> 2
                                                    
                                                    if (rdi_15 u> &rdi_15[sx.q(*(r11_14 + 0x10))])
                                                        r12_2 = 0
                                                    
                                                    if (r12_2 != 0)
                                                        do
                                                            int32_t rax_196 = *rdi_15
                                                            uint32_t rdx_66 = zx.d(rax_196.w)
                                                            
                                                            if (rax_196 s< 0)
                                                                rax_196 += 0xffff
                                                                rdx_66 -= 0x10000
                                                            
                                                            int64_t rbx_14 = sx.q(*(r15 + 8))
                                                            int32_t rax_200 = (rbx_14 + 1).d
                                                            int64_t r14_8 = *(*(data_143e1d9a0
                                                                + (sx.q(rax_196 s>> 0x10) << 3))
                                                                + sx.q(rdx_66) * 0x18)
                                                            *(r15 + 8) = rax_200
                                                            
                                                            if (rax_200 s> *(r15 + 0xc))
                                                                sub_1405a4d70(r15)
                                                            
                                                            rdi_15 = &rdi_15[1]
                                                            rsi_9 += 1
                                                            *(*r15 + (rbx_14 << 3)) = r14_8
                                                        while (rsi_9 != r12_2)
                                                    
                                                    *(r11_14 + 0x48) = 1
                                                    data_143e1d69c = 1
                                        
                                        rdx_39 = var_460_1
                                    
                                    rcx_61 = var_438_3 + 1
                                    var_438_3 = rcx_61
                                while (rcx_61 s< rax_107)
                            
                            goto label_140cc9769
                        case 4
                            r8_1 = &r8_1[3]
                            var_450_1 = r8_1
                            void* rdx_103 = (rax_13 u>> 0xd) + r11_1
                            r11_1 = *rdx_103
                            *r8_1 = r11_1
                            var_448_1 = r11_1
                            r8_1[1].d = *(*r9_2 + (sx.q(r12_2.d) << 2))
                            *(r8_1 + 0xc) = *(rdx_103 + 8)
                            int32_t rax_301 = *(*r9_2 + (sx.q(r12_2.d + 1) << 2))
                            int32_t rcx_177 = (r12_2.d + 1) << 8
                            r12_2 = zx.q(r12_2.d + 2)
                            int32_t rax_302 = rax_301 + rcx_177
                            r8_1[2].d = r12_2.d
                            
                            if (*(r8_1 + 0xc) != 0)
                                goto label_140ccb1c6
                            
                            r12_2 = zx.q(rax_302 u>> 8)
                            r10_1 = zx.d(*(*r9_2 + (r12_2 << 2) - 4)) - zx.d(rax_302.b)
                            var_464_1 = r10_1
                            continue
                        case 5
                            r8_1[3] = r11_1
                            r8_1 = &r8_1[3]
                            var_450_1 = r8_1
                            r8_1[1].d = *(*r9_2 + (sx.q(r12_2.d) << 2))
                            int64_t rcx_245 = sx.q(r12_2.d + 1)
                            r12_2 = zx.q(r12_2.d + 2)
                            *(r8_1 + 0xc) = *(*r9_2 + (rcx_245 << 2))
                            r8_1[2].d = r12_2.d
                        label_140ccb1c6:
                            r10_1 = 0
                            var_464_1 = 0
                            continue
                        case 6
                            int64_t r9_11 = sx.q(r12_2.d)
                            int64_t rdx_137 = sx.q(r12_2.d + 1)
                            r12_2 = zx.q(r12_2.d + 2)
                            var_464_1 = zx.d(rax_13.b)
                            rcx_249 = (rax_13 u>> 0xd) + r11_1
                            r8_21 = zx.q(*(r10_2 + (rdx_137 << 2))) << 0x20
                                | zx.q(*(r10_2 + (r9_11 << 2)))
                        label_140ccb204:
                            r8_21(rcx_249, &var_3d8)
                            r11_1 = var_448_1
                            r10_1 = var_464_1
                            r8_1 = var_450_1
                            r9_2 = var_440_1
                            continue
                        case 7
                            int64_t rdx_140 = sx.q(r12_2.d)
                            int64_t rcx_250 = sx.q(r12_2.d + 1)
                            r12_2 = zx.q(r12_2.d + 2)
                            var_464_1 = zx.d(rax_13.b)
                            r8_21 = zx.q(*(r10_2 + (rcx_250 << 2))) << 0x20
                                | zx.q(*(r10_2 + (rdx_140 << 2)))
                            rcx_249 = r13_1
                            goto label_140ccb204
                        case 8
                            rbx_27 = var_3d0
                            int64_t rdx_141 = sx.q(r12_2.d)
                            int64_t rcx_252 = sx.q(r12_2.d + 1)
                            r12_2 = zx.q(r12_2.d + 2)
                            uint64_t rdi_28 = zx.q(*(r10_2 + (rcx_252 << 2))) << 0x20
                                | zx.q(*(r10_2 + (rdx_141 << 2)))
                            var_464_1 = zx.d(rax_13.b)
                            
                            if (rbx_27 == 0)
                                sub_140d1e450(&var_3d8)
                                rbx_27 = var_3d0
                            
                            *(rbx_27 + 0x90) = r13_1
                            void var_378
                            void** var_368
                            (*(*rdi_28 + 0x88))(rdi_28, 
                                *SymBuffer::end(sub_140b4cb20(&var_368, rbx_27), &var_378), 
                                (rax_13 u>> 0xd) + r11_1, 0, var_488, var_480, var_478)
                            rcx_257 = &var_368
                        label_140ccb2c8:
                            sub_140b4cbb0(rcx_257)
                            r8_1 = var_450_1
                            r11_1 = var_448_1
                            r10_1 = var_464_1
                            r9_2 = var_440_1
                            *(rbx_27 + 0x90) = 0
                            continue
                        case 9
                            rbx_27 = var_3d0
                            int64_t rdx_146 = sx.q(r12_2.d)
                            int64_t rcx_258 = sx.q(r12_2.d + 1)
                            r12_2 = zx.q(r12_2.d + 2)
                            uint64_t rdi_31 = zx.q(*(r10_2 + (rcx_258 << 2))) << 0x20
                                | zx.q(*(r10_2 + (rdx_146 << 2)))
                            var_464_1 = zx.d(rax_13.b)
                            
                            if (rbx_27 == 0)
                                sub_140d1e450(&var_3d8)
                                rbx_27 = var_3d0
                            
                            *(rbx_27 + 0x90) = r13_1
                            void var_370
                            void** var_1d8
                            (*(*rdi_31 + 0x88))(rdi_31, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_27), &var_370), 
                                (rax_13 u>> 0xd) + r11_1, 0, var_488, var_480, var_478)
                            rcx_257 = &var_1d8
                            goto label_140ccb2c8
                        case 0xa
                            void* r14_19 = (rax_13 u>> 0xd) + r11_1
                            int32_t r9_12 = *(r14_19 + 0xc)
                            
                            if (r9_12 != 0)
                                int32_t rcx_263 = *(r14_19 + 8)
                                
                                if (rcx_263 s>= 0)
                                    if (rcx_263 s< data_143e1d9b4)
                                        uint32_t r8_29 = zx.d(rcx_263.w)
                                        
                                        if (rcx_263 s< 0)
                                            rcx_263 += 0xffff
                                            r8_29 -= 0x10000
                                        
                                        int64_t* rcx_267 =
                                            *(data_143e1d9a0 + (sx.q(rcx_263 s>> 0x10) << 3))
                                            + sx.q(r8_29) * 0x18
                                        
                                        if (rcx_267 != 0)
                                            r10_1 = zx.d(rax_13.b)
                                            var_464_1 = r10_1
                                            
                                            if (rcx_267[2].d == r9_12)
                                                void* rdi_32 = *rcx_267
                                                var_464_1 = r10_1
                                                
                                                if (rdi_32 u< data_143e1d660
                                                        || rdi_32 u>= data_143e1d668)
                                                    rax_13.b = 0
                                                else
                                                    rax_13.b = 1
                                                
                                                r8_1 = var_450_1
                                                r9_2 = var_440_1
                                                
                                                if (rdi_32 != 0)
                                                    void* rax_411
                                                    
                                                    if (rax_13.b != 0)
                                                        rax_411 = rdi_32
                                                    else
                                                        int32_t rax_405 = *(rdi_32 + 0xc)
                                                        uint32_t rdx_153 = zx.d(rax_405.w)
                                                        
                                                        if (rax_405 s< 0)
                                                            rax_405 += 0xffff
                                                            rdx_153 -= 0x10000
                                                        
                                                        int64_t rdx_154 = sx.q(rdx_153) * 3
                                                        int64_t rcx_269 = *(data_143e1d9a0
                                                            + (sx.q(rax_405 s>> 0x10) << 3))
                                                        void* r8_31 = rcx_269 + (rdx_154 << 3)
                                                        int32_t rcx_270 =
                                                            *(rcx_269 + (rdx_154 << 3) + 8)
                                                        
                                                        if (((rcx_270 u>> 0x1d).b & 1) != 0)
                                                            rax_411 = nullptr
                                                        else
                                                            void* r13_14
                                                            
                                                            if (((rcx_270 u>> 0x1c).b & 1) != 0)
                                                                int32_t rcx_271 = rcx_270 & 0xefffffff
                                                                *(r8_31 + 8) = rcx_271
                                                                
                                                                if (((rcx_271 u>> 0x18).b & 1) != 0)
                                                                    char var_468_9 = 0
                                                                    void* r11_30 =
                                                                        sx.q(not.d(*(r8_31 + 0xc))) * 0x50
                                                                        + data_143e1d678
                                                                    int32_t* i_7 = *(r11_30 + 0x18)
                                                                    
                                                                    for (void* r10_15 =
                                                                            &i_7[sx.q(*(r11_30 + 0x20))]; 
                                                                            i_7 != r10_15; i_7 = &i_7[1])
                                                                        int32_t rax_420 = *i_7
                                                                        
                                                                        if (rax_420 s>= 0)
                                                                            int64_t rdx_157 =
                                                                                sx.q(zx.d(rax_420.w)) * 3
                                                                            int64_t rcx_275 = *(data_143e1d9a0
                                                                                + (sx.q(rax_420 s>> 0x10) << 3))
                                                                            int32_t rcx_276 =
                                                                                *(rcx_275 + (rdx_157 << 3) + 8)
                                                                            
                                                                            if (((rcx_276 u>> 0x1d).b & 1) != 0)
                                                                                *i_7 = 0xffffffff
                                                                                var_468_9 = 1
                                                                            else
                                                                                *(rcx_275 + (rdx_157 << 3) + 8) =
                                                                                    rcx_276 & 0xefffffff
                                                                    
                                                                    int32_t* r14_20 = *(r11_30 + 0x28)
                                                                    r12_2.b = 0
                                                                    void* r13_13 =
                                                                        &r14_20[sx.q(*(r11_30 + 0x30))]
                                                                    
                                                                    if (r14_20 != r13_13)
                                                                        do
                                                                            int32_t rax_427 = *r14_20
                                                                            
                                                                            if (rax_427 s>= 0)
                                                                                int64_t rdx_159 =
                                                                                    sx.q(zx.d(rax_427.w)) * 3
                                                                                int64_t rcx_279 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_427 s>> 0x10) << 3))
                                                                                int64_t* rbx_29 =
                                                                                    rcx_279 + (rdx_159 << 3)
                                                                                int32_t rcx_280 =
                                                                                    *(rcx_279 + (rdx_159 << 3) + 8)
                                                                                
                                                                                if (((rcx_280 u>> 0x1d).b & 1) != 0)
                                                                                    *r14_20 = 0xffffffff
                                                                                    r12_2.b = 1
                                                                                else if (((rcx_280 u>> 0x1c).b & 1)
                                                                                        != 0)
                                                                                    rbx_29[1].d = rcx_280 & 0xefffffff
                                                                                    int64_t rdi_33 = sx.q(*(r15 + 8))
                                                                                    int64_t rsi_24 = *rbx_29
                                                                                    int32_t rax_435 = (rdi_33 + 1).d
                                                                                    *(r15 + 8) = rax_435
                                                                                    
                                                                                    if (rax_435 s> *(r15 + 0xc))
                                                                                        sub_1405a4d70(r15)
                                                                                    
                                                                                    *(*r15 + (rdi_33 << 3)) = rsi_24
                                                                                    int32_t rcx_283 = *(rbx_29 + 0xc)
                                                                                    
                                                                                    if (rcx_283 s< 0)
                                                                                        sub_140cc2a60(not.d(rcx_283), r15)
                                                                                else if (*(rbx_29 + 0xc) s> 0
                                                                                        && ((rcx_280 u>> 0x17).b & 1) == 0)
                                                                                    rbx_29[1].d = rcx_280 | 0x800000
                                                                                    int32_t rax_439 = *(rbx_29 + 0xc)
                                                                                    uint32_t rdx_162 = zx.d(rax_439.w)
                                                                                    
                                                                                    if (rax_439 s< 0)
                                                                                        rax_439 += 0xffff
                                                                                        rdx_162 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_163 = sx.q(rdx_162) * 3
                                                                                    int64_t rcx_287 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_439 s>> 0x10) << 3))
                                                                                    void* r8_32 = rcx_287 + (rdx_163 << 3)
                                                                                    int32_t rcx_288 =
                                                                                        *(rcx_287 + (rdx_163 << 3) + 8)
                                                                                    
                                                                                    if (((rcx_288 u>> 0x1c).b & 1) != 0)
                                                                                        *(r8_32 + 8) = rcx_288 & 0xefffffff
                                                                                        sub_140cc2a60(not.d(*(r8_32 + 0xc)), 
                                                                                            r15)
                                                                            
                                                                            r14_20 = &r14_20[1]
                                                                        while (r14_20 != r13_13)
                                                                        
                                                                        if (r12_2.b != 0 || var_468_9 != 0)
                                                                            goto label_140ccb6ca
                                                                        
                                                                        r12_2 = var_430_1
                                                                        rax_411 = rdi_32
                                                                    else if (var_468_9 == 0)
                                                                        r12_2 = var_430_1
                                                                        rax_411 = rdi_32
                                                                    else
                                                                    label_140ccb6ca:
                                                                        r13_14 = r11_30
                                                                        int64_t rsi_25 = 0
                                                                        int32_t* rdi_34 = *(r13_14 + 8)
                                                                        uint64_t r12_24 =
                                                                            sx.q(*(r13_14 + 0x10)) << 2 u>> 2
                                                                        
                                                                        if (rdi_34 u>
                                                                                &rdi_34[sx.q(*(r13_14 + 0x10))])
                                                                            r12_24 = 0
                                                                        
                                                                        if (r12_24 != 0)
                                                                            do
                                                                                int32_t rax_447 = *rdi_34
                                                                                uint32_t rdx_165 = zx.d(rax_447.w)
                                                                                
                                                                                if (rax_447 s< 0)
                                                                                    rax_447 += 0xffff
                                                                                    rdx_165 -= 0x10000
                                                                                
                                                                                int64_t rbx_30 = sx.q(*(r15 + 8))
                                                                                int32_t rax_451 = (rbx_30 + 1).d
                                                                                int64_t r14_21 = *(*(data_143e1d9a0
                                                                                    + (sx.q(rax_447 s>> 0x10) << 3))
                                                                                    + sx.q(rdx_165) * 0x18)
                                                                                *(r15 + 8) = rax_451
                                                                                
                                                                                if (rax_451 s> *(r15 + 0xc))
                                                                                    sub_1405a4d70(r15)
                                                                                
                                                                                rdi_34 = &rdi_34[1]
                                                                                rsi_25 += 1
                                                                                *(*r15 + (rbx_30 << 3)) = r14_21
                                                                            while (rsi_25 != r12_24)
                                                                        
                                                                    label_140ccb757:
                                                                        rax_411 = rdi_32
                                                                        r12_2 = var_430_1
                                                                        *(r13_14 + 0x48) = 1
                                                                        data_143e1d69c = 1
                                                                else
                                                                    int64_t rbx_28 = sx.q(*(r15 + 8))
                                                                    int32_t rax_414 = (rbx_28 + 1).d
                                                                    *(r15 + 8) = rax_414
                                                                    
                                                                    if (rax_414 s> *(r15 + 0xc))
                                                                        sub_1405a4d70(r15)
                                                                    
                                                                    *(*r15 + (rbx_28 << 3)) = rdi_32
                                                                    rax_411 = rdi_32
                                                            else if (*(r8_31 + 0xc) s<= 0
                                                                    || ((rcx_270 u>> 0x17).b & 1) != 0)
                                                                rax_411 = rdi_32
                                                            else
                                                                *(r8_31 + 8) = rcx_270 | 0x800000
                                                                int32_t rax_455 = *(r8_31 + 0xc)
                                                                uint32_t rdx_168 = zx.d(rax_455.w)
                                                                
                                                                if (rax_455 s< 0)
                                                                    rax_455 += 0xffff
                                                                    rdx_168 -= 0x10000
                                                                
                                                                int64_t rdx_169 = sx.q(rdx_168) * 3
                                                                int64_t rcx_297 = *(data_143e1d9a0
                                                                    + (sx.q(rax_455 s>> 0x10) << 3))
                                                                void* r8_33 = rcx_297 + (rdx_169 << 3)
                                                                int32_t rcx_298 =
                                                                    *(rcx_297 + (rdx_169 << 3) + 8)
                                                                
                                                                if (((rcx_298 u>> 0x1c).b & 1) == 0)
                                                                    rax_411 = rdi_32
                                                                else
                                                                    char var_468_10 = 0
                                                                    *(r8_33 + 8) = rcx_298 & 0xefffffff
                                                                    void* r11_33 =
                                                                        sx.q(not.d(*(r8_33 + 0xc))) * 0x50
                                                                        + data_143e1d678
                                                                    int32_t* i_8 = *(r11_33 + 0x18)
                                                                    
                                                                    for (void* r10_16 =
                                                                            &i_8[sx.q(*(r11_33 + 0x20))]; 
                                                                            i_8 != r10_16; i_8 = &i_8[1])
                                                                        int32_t rax_465 = *i_8
                                                                        
                                                                        if (rax_465 s>= 0)
                                                                            int64_t rdx_171 =
                                                                                sx.q(zx.d(rax_465.w)) * 3
                                                                            int64_t rcx_301 = *(data_143e1d9a0
                                                                                + (sx.q(rax_465 s>> 0x10) << 3))
                                                                            int32_t rcx_302 =
                                                                                *(rcx_301 + (rdx_171 << 3) + 8)
                                                                            
                                                                            if (((rcx_302 u>> 0x1d).b & 1) != 0)
                                                                                *i_8 = 0xffffffff
                                                                                var_468_10 = 1
                                                                            else
                                                                                *(rcx_301 + (rdx_171 << 3) + 8) =
                                                                                    rcx_302 & 0xefffffff
                                                                    
                                                                    int32_t* r14_22 = *(r11_33 + 0x28)
                                                                    r12_2.b = 0
                                                                    void* r13_15 =
                                                                        &r14_22[sx.q(*(r11_33 + 0x30))]
                                                                    
                                                                    if (r14_22 == r13_15)
                                                                        if (var_468_10 != 0)
                                                                        label_140ccb99a:
                                                                            r13_14 = r11_33
                                                                            int64_t rsi_27 = 0
                                                                            int32_t* rdi_36 = *(r13_14 + 8)
                                                                            uint64_t r12_26 =
                                                                                sx.q(*(r13_14 + 0x10)) << 2 u>> 2
                                                                            
                                                                            if (rdi_36 u>
                                                                                    &rdi_36[sx.q(*(r13_14 + 0x10))])
                                                                                r12_26 = 0
                                                                            
                                                                            if (r12_26 != 0)
                                                                                do
                                                                                    int32_t rax_492 = *rdi_36
                                                                                    uint32_t rdx_179 = zx.d(rax_492.w)
                                                                                    
                                                                                    if (rax_492 s< 0)
                                                                                        rax_492 += 0xffff
                                                                                        rdx_179 -= 0x10000
                                                                                    
                                                                                    int64_t rbx_32 = sx.q(*(r15 + 8))
                                                                                    int32_t rax_496 = (rbx_32 + 1).d
                                                                                    int64_t r14_23 = *(*(data_143e1d9a0
                                                                                        + (sx.q(rax_492 s>> 0x10) << 3))
                                                                                        + sx.q(rdx_179) * 0x18)
                                                                                    *(r15 + 8) = rax_496
                                                                                    
                                                                                    if (rax_496 s> *(r15 + 0xc))
                                                                                        sub_1405a4d70(r15)
                                                                                    
                                                                                    rdi_36 = &rdi_36[1]
                                                                                    rsi_27 += 1
                                                                                    *(*r15 + (rbx_32 << 3)) = r14_23
                                                                                while (rsi_27 != r12_26)
                                                                            
                                                                            goto label_140ccb757
                                                                        
                                                                        r12_2 = var_430_1
                                                                        rax_411 = rdi_32
                                                                    else
                                                                        do
                                                                            int32_t rax_472 = *r14_22
                                                                            
                                                                            if (rax_472 s>= 0)
                                                                                int64_t rdx_173 =
                                                                                    sx.q(zx.d(rax_472.w)) * 3
                                                                                int64_t rcx_305 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_472 s>> 0x10) << 3))
                                                                                int64_t* rbx_31 =
                                                                                    rcx_305 + (rdx_173 << 3)
                                                                                int32_t rcx_306 =
                                                                                    *(rcx_305 + (rdx_173 << 3) + 8)
                                                                                
                                                                                if (((rcx_306 u>> 0x1d).b & 1) != 0)
                                                                                    *r14_22 = 0xffffffff
                                                                                    r12_2.b = 1
                                                                                else if (((rcx_306 u>> 0x1c).b & 1)
                                                                                        != 0)
                                                                                    rbx_31[1].d = rcx_306 & 0xefffffff
                                                                                    int64_t rdi_35 = sx.q(*(r15 + 8))
                                                                                    int64_t rsi_26 = *rbx_31
                                                                                    int32_t rax_480 = (rdi_35 + 1).d
                                                                                    *(r15 + 8) = rax_480
                                                                                    
                                                                                    if (rax_480 s> *(r15 + 0xc))
                                                                                        sub_1405a4d70(r15)
                                                                                    
                                                                                    *(*r15 + (rdi_35 << 3)) = rsi_26
                                                                                    int32_t rcx_309 = *(rbx_31 + 0xc)
                                                                                    
                                                                                    if (rcx_309 s< 0)
                                                                                        sub_140cc2a60(not.d(rcx_309), r15)
                                                                                else if (*(rbx_31 + 0xc) s> 0
                                                                                        && ((rcx_306 u>> 0x17).b & 1) == 0)
                                                                                    rbx_31[1].d = rcx_306 | 0x800000
                                                                                    int32_t rax_484 = *(rbx_31 + 0xc)
                                                                                    uint32_t rdx_176 = zx.d(rax_484.w)
                                                                                    
                                                                                    if (rax_484 s< 0)
                                                                                        rax_484 += 0xffff
                                                                                        rdx_176 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_177 = sx.q(rdx_176) * 3
                                                                                    int64_t rcx_313 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_484 s>> 0x10) << 3))
                                                                                    void* r8_34 = rcx_313 + (rdx_177 << 3)
                                                                                    int32_t rcx_314 =
                                                                                        *(rcx_313 + (rdx_177 << 3) + 8)
                                                                                    
                                                                                    if (((rcx_314 u>> 0x1c).b & 1) != 0)
                                                                                        *(r8_34 + 8) = rcx_314 & 0xefffffff
                                                                                        sub_140cc2a60(not.d(*(r8_34 + 0xc)), 
                                                                                            r15)
                                                                            
                                                                            r14_22 = &r14_22[1]
                                                                        while (r14_22 != r13_15)
                                                                        
                                                                        if (r12_2.b != 0 || var_468_10 != 0)
                                                                            goto label_140ccb99a
                                                                        
                                                                        r12_2 = var_430_1
                                                                        rax_411 = rdi_32
                                                    
                                                    r8_1 = var_450_1
                                                    r11_1 = var_448_1
                                                    r10_1 = var_464_1
                                                    r9_2 = var_440_1
                                                    r13_1 = var_418_1
                                                    
                                                    if (rax_411 == 0)
                                                        *r14_19 = 0
                                                        *(r14_19 + 8) = 0xffffffff
                                                        *(r14_19 + 0xc) = 0
                                                        r14 = var_458
                                                        continue
                                                
                                                r14 = var_458
                                                continue
                                            else
                                                r14 = var_458
                                                r8_1 = var_450_1
                                                r9_2 = var_440_1
                                                continue
                                    
                                    r14 = var_458
                                    r8_1 = var_450_1
                                    r9_2 = var_440_1
                                    r10_1 = zx.d(rax_13.b)
                                    var_464_1 = r10_1
                                    continue
                                else
                                    r14 = var_458
                                    r9_2 = var_440_1
                                    r10_1 = zx.d(rax_13.b)
                                    var_464_1 = r10_1
                                    continue
                            else
                                r14 = var_458
                                r9_2 = var_440_1
                                r10_1 = zx.d(rax_13.b)
                                var_464_1 = r10_1
                                continue
                        case 0xb
                            r10_1 = zx.d(rax_13.b)
                            var_464_1 = r10_1
                            int64_t r12_27 = 0
                            void* r13_18 = (rax_13 u>> 0xd) + r11_1
                            int64_t var_428_4 = 0
                            void* var_438_9 = r13_18
                            int64_t rax_498 = sx.q(*(r13_18 + 8))
                            
                            if (rax_498 s<= 0)
                                r12_2 = var_430_1
                                r13_1 = var_418_1
                                continue
                            else
                                do
                                    int64_t rax_499 = *r13_18
                                    int64_t r14_25 = r12_27 << 5
                                    int32_t r8_35 = *(rax_499 + r14_25 + 0xc)
                                    
                                    if (r8_35 != 0)
                                        int32_t rax_500 = *(rax_499 + r14_25 + 8)
                                        
                                        if (rax_500 s>= 0 && rax_500 s< data_143e1d9b4)
                                            uint32_t rdx_182 = zx.d(rax_500.w)
                                            
                                            if (rax_500 s< 0)
                                                rax_500 += 0xffff
                                                rdx_182 -= 0x10000
                                            
                                            int64_t* rax_504 =
                                                *(data_143e1d9a0 + (sx.q(rax_500 s>> 0x10) << 3))
                                                + sx.q(rdx_182) * 0x18
                                            
                                            if (rax_504 != 0 && rax_504[2].d == r8_35)
                                                void* rdi_37 = *rax_504
                                                
                                                if (rdi_37 u< data_143e1d660
                                                        || rdi_37 u>= data_143e1d668)
                                                    rax_504.b = 0
                                                else
                                                    rax_504.b = 1
                                                
                                                if (rdi_37 != 0)
                                                    void* rax_511
                                                    
                                                    if (rax_504.b != 0)
                                                        rax_511 = rdi_37
                                                    else
                                                        int32_t rax_505 = *(rdi_37 + 0xc)
                                                        uint32_t rdx_184 = zx.d(rax_505.w)
                                                        
                                                        if (rax_505 s< 0)
                                                            rax_505 += 0xffff
                                                            rdx_184 -= 0x10000
                                                        
                                                        int64_t rdx_185 = sx.q(rdx_184) * 3
                                                        int64_t rcx_324 = *(data_143e1d9a0
                                                            + (sx.q(rax_505 s>> 0x10) << 3))
                                                        void* r8_36 = rcx_324 + (rdx_185 << 3)
                                                        int32_t rcx_325 =
                                                            *(rcx_324 + (rdx_185 << 3) + 8)
                                                        
                                                        if (((rcx_325 u>> 0x1d).b & 1) != 0)
                                                            rax_511 = nullptr
                                                        else
                                                            void* r13_20
                                                            
                                                            if (((rcx_325 u>> 0x1c).b & 1) != 0)
                                                                int32_t rcx_326 = rcx_325 & 0xefffffff
                                                                *(r8_36 + 8) = rcx_326
                                                                
                                                                if (((rcx_326 u>> 0x18).b & 1) != 0)
                                                                    char var_468_11 = 0
                                                                    void* r11_36 =
                                                                        sx.q(not.d(*(r8_36 + 0xc))) * 0x50
                                                                        + data_143e1d678
                                                                    int32_t* i_9 = *(r11_36 + 0x18)
                                                                    
                                                                    for (void* r10_17 =
                                                                            &i_9[sx.q(*(r11_36 + 0x20))]; 
                                                                            i_9 != r10_17; i_9 = &i_9[1])
                                                                        int32_t rax_520 = *i_9
                                                                        
                                                                        if (rax_520 s>= 0)
                                                                            int64_t rdx_188 =
                                                                                sx.q(zx.d(rax_520.w)) * 3
                                                                            int64_t rcx_330 = *(data_143e1d9a0
                                                                                + (sx.q(rax_520 s>> 0x10) << 3))
                                                                            int32_t rcx_331 =
                                                                                *(rcx_330 + (rdx_188 << 3) + 8)
                                                                            
                                                                            if (((rcx_331 u>> 0x1d).b & 1) != 0)
                                                                                *i_9 = 0xffffffff
                                                                                var_468_11 = 1
                                                                            else
                                                                                *(rcx_330 + (rdx_188 << 3) + 8) =
                                                                                    rcx_331 & 0xefffffff
                                                                    
                                                                    int32_t* r14_26 = *(r11_36 + 0x28)
                                                                    r12_27.b = 0
                                                                    void* r13_19 =
                                                                        &r14_26[sx.q(*(r11_36 + 0x30))]
                                                                    
                                                                    if (r14_26 != r13_19)
                                                                        do
                                                                            int32_t rax_527 = *r14_26
                                                                            
                                                                            if (rax_527 s>= 0)
                                                                                int64_t rdx_190 =
                                                                                    sx.q(zx.d(rax_527.w)) * 3
                                                                                int64_t rcx_334 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_527 s>> 0x10) << 3))
                                                                                int64_t* rbx_34 =
                                                                                    rcx_334 + (rdx_190 << 3)
                                                                                int32_t rcx_335 =
                                                                                    *(rcx_334 + (rdx_190 << 3) + 8)
                                                                                
                                                                                if (((rcx_335 u>> 0x1d).b & 1) != 0)
                                                                                    *r14_26 = 0xffffffff
                                                                                    r12_27.b = 1
                                                                                else if (((rcx_335 u>> 0x1c).b & 1)
                                                                                        != 0)
                                                                                    rbx_34[1].d = rcx_335 & 0xefffffff
                                                                                    int64_t rdi_38 = sx.q(*(r15 + 8))
                                                                                    int64_t rsi_28 = *rbx_34
                                                                                    int32_t rax_535 = (rdi_38 + 1).d
                                                                                    *(r15 + 8) = rax_535
                                                                                    
                                                                                    if (rax_535 s> *(r15 + 0xc))
                                                                                        sub_1405a4d70(r15)
                                                                                    
                                                                                    *(*r15 + (rdi_38 << 3)) = rsi_28
                                                                                    int32_t rcx_338 = *(rbx_34 + 0xc)
                                                                                    
                                                                                    if (rcx_338 s< 0)
                                                                                        sub_140cc2a60(not.d(rcx_338), r15)
                                                                                else if (*(rbx_34 + 0xc) s> 0
                                                                                        && ((rcx_335 u>> 0x17).b & 1) == 0)
                                                                                    rbx_34[1].d = rcx_335 | 0x800000
                                                                                    int32_t rax_539 = *(rbx_34 + 0xc)
                                                                                    uint32_t rdx_193 = zx.d(rax_539.w)
                                                                                    
                                                                                    if (rax_539 s< 0)
                                                                                        rax_539 += 0xffff
                                                                                        rdx_193 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_194 = sx.q(rdx_193) * 3
                                                                                    int64_t rcx_342 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_539 s>> 0x10) << 3))
                                                                                    void* r8_37 = rcx_342 + (rdx_194 << 3)
                                                                                    int32_t rcx_343 =
                                                                                        *(rcx_342 + (rdx_194 << 3) + 8)
                                                                                    
                                                                                    if (((rcx_343 u>> 0x1c).b & 1) != 0)
                                                                                        *(r8_37 + 8) = rcx_343 & 0xefffffff
                                                                                        sub_140cc2a60(not.d(*(r8_37 + 0xc)), 
                                                                                            r15)
                                                                            
                                                                            r14_26 = &r14_26[1]
                                                                        while (r14_26 != r13_19)
                                                                        
                                                                        if (r12_27.b != 0 || var_468_11 != 0)
                                                                            goto label_140ccbdcb
                                                                        
                                                                        goto label_140ccc133
                                                                    
                                                                    if (var_468_11 == 0)
                                                                    label_140ccc133:
                                                                        r13_18 = var_438_9
                                                                        r12_27 = var_428_4
                                                                        rax_511 = rdi_37
                                                                    else
                                                                    label_140ccbdcb:
                                                                        r13_20 = r11_36
                                                                        int64_t rsi_29 = 0
                                                                        int32_t* rdi_39 = *(r13_20 + 8)
                                                                        uint64_t r12_29 =
                                                                            sx.q(*(r13_20 + 0x10)) << 2 u>> 2
                                                                        
                                                                        if (rdi_39 u>
                                                                                &rdi_39[sx.q(*(r13_20 + 0x10))])
                                                                            r12_29 = 0
                                                                        
                                                                        if (r12_29 != 0)
                                                                            do
                                                                                int32_t rax_547 = *rdi_39
                                                                                uint32_t rdx_196 = zx.d(rax_547.w)
                                                                                
                                                                                if (rax_547 s< 0)
                                                                                    rax_547 += 0xffff
                                                                                    rdx_196 -= 0x10000
                                                                                
                                                                                int64_t rbx_35 = sx.q(*(r15 + 8))
                                                                                int32_t rax_551 = (rbx_35 + 1).d
                                                                                int64_t r14_27 = *(*(data_143e1d9a0
                                                                                    + (sx.q(rax_547 s>> 0x10) << 3))
                                                                                    + sx.q(rdx_196) * 0x18)
                                                                                *(r15 + 8) = rax_551
                                                                                
                                                                                if (rax_551 s> *(r15 + 0xc))
                                                                                    sub_1405a4d70(r15)
                                                                                
                                                                                rdi_39 = &rdi_39[1]
                                                                                rsi_29 += 1
                                                                                *(*r15 + (rbx_35 << 3)) = r14_27
                                                                            while (rsi_29 != r12_29)
                                                                        
                                                                    label_140ccbe57:
                                                                        rax_511 = rdi_37
                                                                        r12_27 = var_428_4
                                                                        *(r13_20 + 0x48) = 1
                                                                        r13_18 = var_438_9
                                                                        data_143e1d69c = 1
                                                                else
                                                                    int64_t rbx_33 = sx.q(*(r15 + 8))
                                                                    int32_t rax_514 = (rbx_33 + 1).d
                                                                    *(r15 + 8) = rax_514
                                                                    
                                                                    if (rax_514 s> *(r15 + 0xc))
                                                                        sub_1405a4d70(r15)
                                                                    
                                                                    *(*r15 + (rbx_33 << 3)) = rdi_37
                                                                    rax_511 = rdi_37
                                                            else if (*(r8_36 + 0xc) s<= 0
                                                                    || ((rcx_325 u>> 0x17).b & 1) != 0)
                                                                rax_511 = rdi_37
                                                            else
                                                                *(r8_36 + 8) = rcx_325 | 0x800000
                                                                int32_t rax_555 = *(r8_36 + 0xc)
                                                                uint32_t rdx_199 = zx.d(rax_555.w)
                                                                
                                                                if (rax_555 s< 0)
                                                                    rax_555 += 0xffff
                                                                    rdx_199 -= 0x10000
                                                                
                                                                int64_t rdx_200 = sx.q(rdx_199) * 3
                                                                int64_t rcx_352 = *(data_143e1d9a0
                                                                    + (sx.q(rax_555 s>> 0x10) << 3))
                                                                void* r8_38 = rcx_352 + (rdx_200 << 3)
                                                                int32_t rcx_353 =
                                                                    *(rcx_352 + (rdx_200 << 3) + 8)
                                                                
                                                                if (((rcx_353 u>> 0x1c).b & 1) != 0)
                                                                    char var_468_12 = 0
                                                                    *(r8_38 + 8) = rcx_353 & 0xefffffff
                                                                    void* r11_39 =
                                                                        sx.q(not.d(*(r8_38 + 0xc))) * 0x50
                                                                        + data_143e1d678
                                                                    int32_t* i_10 = *(r11_39 + 0x18)
                                                                    
                                                                    for (void* r10_18 =
                                                                            &i_10[sx.q(*(r11_39 + 0x20))]; 
                                                                            i_10 != r10_18; i_10 = &i_10[1])
                                                                        int32_t rax_565 = *i_10
                                                                        
                                                                        if (rax_565 s>= 0)
                                                                            int64_t rdx_202 =
                                                                                sx.q(zx.d(rax_565.w)) * 3
                                                                            int64_t rcx_356 = *(data_143e1d9a0
                                                                                + (sx.q(rax_565 s>> 0x10) << 3))
                                                                            int32_t rcx_357 =
                                                                                *(rcx_356 + (rdx_202 << 3) + 8)
                                                                            
                                                                            if (((rcx_357 u>> 0x1d).b & 1) != 0)
                                                                                *i_10 = 0xffffffff
                                                                                var_468_12 = 1
                                                                            else
                                                                                *(rcx_356 + (rdx_202 << 3) + 8) =
                                                                                    rcx_357 & 0xefffffff
                                                                    
                                                                    int32_t* r14_28 = *(r11_39 + 0x28)
                                                                    r12_27.b = 0
                                                                    void* r13_21 =
                                                                        &r14_28[sx.q(*(r11_39 + 0x30))]
                                                                    
                                                                    if (r14_28 != r13_21)
                                                                        do
                                                                            int32_t rax_572 = *r14_28
                                                                            
                                                                            if (rax_572 s>= 0)
                                                                                int64_t rdx_204 =
                                                                                    sx.q(zx.d(rax_572.w)) * 3
                                                                                int64_t rcx_360 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_572 s>> 0x10) << 3))
                                                                                int64_t* rbx_36 =
                                                                                    rcx_360 + (rdx_204 << 3)
                                                                                int32_t rcx_361 =
                                                                                    *(rcx_360 + (rdx_204 << 3) + 8)
                                                                                
                                                                                if (((rcx_361 u>> 0x1d).b & 1) != 0)
                                                                                    *r14_28 = 0xffffffff
                                                                                    r12_27.b = 1
                                                                                else if (((rcx_361 u>> 0x1c).b & 1)
                                                                                        != 0)
                                                                                    rbx_36[1].d = rcx_361 & 0xefffffff
                                                                                    int64_t rdi_40 = sx.q(*(r15 + 8))
                                                                                    int64_t rsi_30 = *rbx_36
                                                                                    int32_t rax_580 = (rdi_40 + 1).d
                                                                                    *(r15 + 8) = rax_580
                                                                                    
                                                                                    if (rax_580 s> *(r15 + 0xc))
                                                                                        sub_1405a4d70(r15)
                                                                                    
                                                                                    *(*r15 + (rdi_40 << 3)) = rsi_30
                                                                                    int32_t rcx_364 = *(rbx_36 + 0xc)
                                                                                    
                                                                                    if (rcx_364 s< 0)
                                                                                        sub_140cc2a60(not.d(rcx_364), r15)
                                                                                else if (*(rbx_36 + 0xc) s> 0
                                                                                        && ((rcx_361 u>> 0x17).b & 1) == 0)
                                                                                    rbx_36[1].d = rcx_361 | 0x800000
                                                                                    int32_t rax_584 = *(rbx_36 + 0xc)
                                                                                    uint32_t rdx_207 = zx.d(rax_584.w)
                                                                                    
                                                                                    if (rax_584 s< 0)
                                                                                        rax_584 += 0xffff
                                                                                        rdx_207 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_208 = sx.q(rdx_207) * 3
                                                                                    int64_t rcx_368 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_584 s>> 0x10) << 3))
                                                                                    void* r8_39 = rcx_368 + (rdx_208 << 3)
                                                                                    int32_t rcx_369 =
                                                                                        *(rcx_368 + (rdx_208 << 3) + 8)
                                                                                    
                                                                                    if (((rcx_369 u>> 0x1c).b & 1) != 0)
                                                                                        *(r8_39 + 8) = rcx_369 & 0xefffffff
                                                                                        sub_140cc2a60(not.d(*(r8_39 + 0xc)), 
                                                                                            r15)
                                                                            
                                                                            r14_28 = &r14_28[1]
                                                                        while (r14_28 != r13_21)
                                                                        
                                                                        if (r12_27.b == 0 && var_468_12 == 0)
                                                                            goto label_140ccc133
                                                                    else if (var_468_12 == 0)
                                                                        goto label_140ccc133
                                                                    
                                                                    r13_20 = r11_39
                                                                    int64_t rsi_31 = 0
                                                                    int32_t* rdi_41 = *(r13_20 + 8)
                                                                    uint64_t r12_31 =
                                                                        sx.q(*(r13_20 + 0x10)) << 2 u>> 2
                                                                    
                                                                    if (rdi_41 u>
                                                                            &rdi_41[sx.q(*(r13_20 + 0x10))])
                                                                        r12_31 = 0
                                                                    
                                                                    if (r12_31 != 0)
                                                                        do
                                                                            int32_t rax_592 = *rdi_41
                                                                            uint32_t rdx_210 = zx.d(rax_592.w)
                                                                            
                                                                            if (rax_592 s< 0)
                                                                                rax_592 += 0xffff
                                                                                rdx_210 -= 0x10000
                                                                            
                                                                            int64_t rbx_37 = sx.q(*(r15 + 8))
                                                                            int32_t rax_596 = (rbx_37 + 1).d
                                                                            int64_t r14_29 = *(*(data_143e1d9a0
                                                                                + (sx.q(rax_592 s>> 0x10) << 3))
                                                                                + sx.q(rdx_210) * 0x18)
                                                                            *(r15 + 8) = rax_596
                                                                            
                                                                            if (rax_596 s> *(r15 + 0xc))
                                                                                sub_1405a4d70(r15)
                                                                            
                                                                            rdi_41 = &rdi_41[1]
                                                                            rsi_31 += 1
                                                                            *(*r15 + (rbx_37 << 3)) = r14_29
                                                                        while (rsi_31 != r12_31)
                                                                    
                                                                    goto label_140ccbe57
                                                                
                                                                rax_511 = rdi_37
                                                    
                                                    if (rax_511 == 0)
                                                        int64_t rax_598 = *r13_18
                                                        *(r14_25 + rax_598) = 0
                                                        *(r14_25 + rax_598 + 8) = 0xffffffff
                                                        *(r14_25 + rax_598 + 0xc) = 0
                                    
                                    r12_27 += 1
                                    var_428_4 = r12_27
                                while (r12_27 s< rax_498)
                            
                            goto label_140cc9e21
                        case 0xc, 0xe, 0xf
                            r10_1 = zx.d(rax_13.b)
                            var_464_1 = r10_1
                            continue
                        case 0xd
                            break
                        case 0x10
                            r10_1 = zx.d(rax_13.b)
                            var_464_1 = r10_1
                            int64_t rcx_117 = 0
                            void* rdx_71 = (rax_13 u>> 0xd) + r11_1
                            int64_t var_438_4 = 0
                            void* var_460_2 = rdx_71
                            int64_t rax_202 = sx.q(*(rdx_71 + 8))
                            
                            if (rax_202 s<= 0)
                                continue
                            else
                                do
                                    void* rax_204 = *rdx_71
                                    
                                    if ((rax_204.b & 1) != 0)
                                        rax_204 = (rax_204 s>> 1) + rdx_71
                                    
                                    void* rdi_16 = rax_204 + (rcx_117 << 3)
                                    void* rax_205 = *(rax_204 + (rcx_117 << 3))
                                    
                                    if (rax_205 u< data_143e1d660 || rax_205 u>= data_143e1d668)
                                        rcx_117.b = 0
                                    else
                                        rcx_117.b = 1
                                    
                                    if (rax_205 != 0 && rcx_117.b == 0)
                                        int32_t rax_206 = *(rax_205 + 0xc)
                                        uint32_t rdx_72 = zx.d(rax_206.w)
                                        
                                        if (rax_206 s< 0)
                                            rax_206 += 0xffff
                                            rdx_72 -= 0x10000
                                        
                                        int64_t rdx_73 = sx.q(rdx_72) * 3
                                        int64_t rcx_119 =
                                            *(data_143e1d9a0 + (sx.q(rax_206 s>> 0x10) << 3))
                                        void* r8_10 = rcx_119 + (rdx_73 << 3)
                                        int32_t rcx_120 = *(rcx_119 + (rdx_73 << 3) + 8)
                                        
                                        if (((rcx_120 u>> 0x1d).b & 1) != 0)
                                            *rdi_16 = 0
                                        else if (((rcx_120 u>> 0x1c).b & 1) != 0)
                                            int32_t rcx_121 = rcx_120 & 0xefffffff
                                            *(r8_10 + 8) = rcx_121
                                            
                                            if (((rcx_121 u>> 0x18).b & 1) != 0)
                                                char var_468_5 = 0
                                                void* r11_17 = sx.q(not.d(*(r8_10 + 0xc))) * 0x50
                                                    + data_143e1d678
                                                int32_t* i_11 = *(r11_17 + 0x18)
                                                
                                                for (void* r10_7 = &i_11[sx.q(*(r11_17 + 0x20))]; 
                                                        i_11 != r10_7; i_11 = &i_11[1])
                                                    int32_t rax_220 = *i_11
                                                    
                                                    if (rax_220 s>= 0)
                                                        int64_t rdx_76 = sx.q(zx.d(rax_220.w)) * 3
                                                        int64_t rcx_126 = *(data_143e1d9a0
                                                            + (sx.q(rax_220 s>> 0x10) << 3))
                                                        int32_t rcx_127 =
                                                            *(rcx_126 + (rdx_76 << 3) + 8)
                                                        
                                                        if (((rcx_127 u>> 0x1d).b & 1) != 0)
                                                            *i_11 = 0xffffffff
                                                            var_468_5 = 1
                                                        else
                                                            *(rcx_126 + (rdx_76 << 3) + 8) =
                                                                rcx_127 & 0xefffffff
                                                
                                                int32_t* rsi_10 = *(r11_17 + 0x28)
                                                r12_2.b = 0
                                                void* r13_8 = &rsi_10[sx.q(*(r11_17 + 0x30))]
                                                
                                                if (rsi_10 != r13_8)
                                                    do
                                                        int32_t rax_227 = *rsi_10
                                                        
                                                        if (rax_227 s>= 0)
                                                            int64_t rdx_78 =
                                                                sx.q(zx.d(rax_227.w)) * 3
                                                            int64_t rcx_130 = *(data_143e1d9a0
                                                                + (sx.q(rax_227 s>> 0x10) << 3))
                                                            int64_t* rbx_16 =
                                                                rcx_130 + (rdx_78 << 3)
                                                            int32_t rcx_131 =
                                                                *(rcx_130 + (rdx_78 << 3) + 8)
                                                            
                                                            if (((rcx_131 u>> 0x1d).b & 1) != 0)
                                                                *rsi_10 = 0xffffffff
                                                                r12_2.b = 1
                                                            else if (((rcx_131 u>> 0x1c).b & 1)
                                                                    != 0)
                                                                rbx_16[1].d = rcx_131 & 0xefffffff
                                                                int64_t rdi_17 = sx.q(*(r15 + 8))
                                                                int64_t r14_9 = *rbx_16
                                                                int32_t rax_235 = (rdi_17 + 1).d
                                                                *(r15 + 8) = rax_235
                                                                
                                                                if (rax_235 s> *(r15 + 0xc))
                                                                    sub_1405a4d70(r15)
                                                                
                                                                *(*r15 + (rdi_17 << 3)) = r14_9
                                                                int32_t rcx_134 = *(rbx_16 + 0xc)
                                                                
                                                                if (rcx_134 s< 0)
                                                                    sub_140cc2a60(not.d(rcx_134), r15)
                                                            else if (*(rbx_16 + 0xc) s> 0
                                                                    && ((rcx_131 u>> 0x17).b & 1) == 0)
                                                                rbx_16[1].d = rcx_131 | 0x800000
                                                                int32_t rax_239 = *(rbx_16 + 0xc)
                                                                uint32_t rdx_81 = zx.d(rax_239.w)
                                                                
                                                                if (rax_239 s< 0)
                                                                    rax_239 += 0xffff
                                                                    rdx_81 -= 0x10000
                                                                
                                                                int64_t rdx_82 = sx.q(rdx_81) * 3
                                                                int64_t rcx_138 = *(data_143e1d9a0
                                                                    + (sx.q(rax_239 s>> 0x10) << 3))
                                                                void* r8_11 = rcx_138 + (rdx_82 << 3)
                                                                int32_t rcx_139 =
                                                                    *(rcx_138 + (rdx_82 << 3) + 8)
                                                                
                                                                if (((rcx_139 u>> 0x1c).b & 1) != 0)
                                                                    *(r8_11 + 8) = rcx_139 & 0xefffffff
                                                                    sub_140cc2a60(not.d(*(r8_11 + 0xc)), 
                                                                        r15)
                                                        
                                                        rsi_10 = &rsi_10[1]
                                                    while (rsi_10 != r13_8)
                                                    
                                                    if (r12_2.b != 0 || var_468_5 != 0)
                                                        goto label_140cca728
                                                else if (var_468_5 != 0)
                                                label_140cca728:
                                                    int64_t rsi_11 = 0
                                                    int32_t* rdi_18 = *(r11_17 + 8)
                                                    r12_2 = sx.q(*(r11_17 + 0x10)) << 2 u>> 2
                                                    
                                                    if (rdi_18 u> &rdi_18[sx.q(*(r11_17 + 0x10))])
                                                        r12_2 = 0
                                                    
                                                    if (r12_2 != 0)
                                                        do
                                                            int32_t rax_247 = *rdi_18
                                                            uint32_t rdx_84 = zx.d(rax_247.w)
                                                            
                                                            if (rax_247 s< 0)
                                                                rax_247 += 0xffff
                                                                rdx_84 -= 0x10000
                                                            
                                                            int64_t rbx_17 = sx.q(*(r15 + 8))
                                                            int32_t rax_251 = (rbx_17 + 1).d
                                                            int64_t r14_10 = *(*(data_143e1d9a0
                                                                + (sx.q(rax_247 s>> 0x10) << 3))
                                                                + sx.q(rdx_84) * 0x18)
                                                            *(r15 + 8) = rax_251
                                                            
                                                            if (rax_251 s> *(r15 + 0xc))
                                                                sub_1405a4d70(r15)
                                                            
                                                            rdi_18 = &rdi_18[1]
                                                            rsi_11 += 1
                                                            *(*r15 + (rbx_17 << 3)) = r14_10
                                                        while (rsi_11 != r12_2)
                                                    
                                                    *(r11_17 + 0x48) = 1
                                                    data_143e1d69c = 1
                                            else
                                                int64_t rbx_15 = sx.q(*(r15 + 8))
                                                int32_t rax_214 = (rbx_15 + 1).d
                                                *(r15 + 8) = rax_214
                                                
                                                if (rax_214 s> *(r15 + 0xc))
                                                    sub_1405a4d70(r15)
                                                
                                                *(*r15 + (rbx_15 << 3)) = *rdi_16
                                        else if (*(r8_10 + 0xc) s> 0
                                                && ((rcx_120 u>> 0x17).b & 1) == 0)
                                            *(r8_10 + 8) = rcx_120 | 0x800000
                                            int32_t rax_255 = *(r8_10 + 0xc)
                                            uint32_t rdx_87 = zx.d(rax_255.w)
                                            
                                            if (rax_255 s< 0)
                                                rax_255 += 0xffff
                                                rdx_87 -= 0x10000
                                            
                                            int64_t rdx_88 = sx.q(rdx_87) * 3
                                            int64_t rcx_148 =
                                                *(data_143e1d9a0 + (sx.q(rax_255 s>> 0x10) << 3))
                                            void* r8_12 = rcx_148 + (rdx_88 << 3)
                                            int32_t rcx_149 = *(rcx_148 + (rdx_88 << 3) + 8)
                                            
                                            if (((rcx_149 u>> 0x1c).b & 1) != 0)
                                                char var_468_6 = 0
                                                *(r8_12 + 8) = rcx_149 & 0xefffffff
                                                void* r11_20 = sx.q(not.d(*(r8_12 + 0xc))) * 0x50
                                                    + data_143e1d678
                                                int32_t* i_12 = *(r11_20 + 0x18)
                                                
                                                for (void* r10_8 = &i_12[sx.q(*(r11_20 + 0x20))]; 
                                                        i_12 != r10_8; i_12 = &i_12[1])
                                                    int32_t rax_265 = *i_12
                                                    
                                                    if (rax_265 s>= 0)
                                                        int64_t rdx_90 = sx.q(zx.d(rax_265.w)) * 3
                                                        int64_t rcx_152 = *(data_143e1d9a0
                                                            + (sx.q(rax_265 s>> 0x10) << 3))
                                                        int32_t rcx_153 =
                                                            *(rcx_152 + (rdx_90 << 3) + 8)
                                                        
                                                        if (((rcx_153 u>> 0x1d).b & 1) != 0)
                                                            *i_12 = 0xffffffff
                                                            var_468_6 = 1
                                                        else
                                                            *(rcx_152 + (rdx_90 << 3) + 8) =
                                                                rcx_153 & 0xefffffff
                                                
                                                int32_t* rsi_12 = *(r11_20 + 0x28)
                                                r12_2.b = 0
                                                void* r13_10 = &rsi_12[sx.q(*(r11_20 + 0x30))]
                                                
                                                if (rsi_12 != r13_10)
                                                    do
                                                        int32_t rax_272 = *rsi_12
                                                        
                                                        if (rax_272 s>= 0)
                                                            int64_t rdx_92 =
                                                                sx.q(zx.d(rax_272.w)) * 3
                                                            int64_t rcx_156 = *(data_143e1d9a0
                                                                + (sx.q(rax_272 s>> 0x10) << 3))
                                                            int64_t* rbx_18 =
                                                                rcx_156 + (rdx_92 << 3)
                                                            int32_t rcx_157 =
                                                                *(rcx_156 + (rdx_92 << 3) + 8)
                                                            
                                                            if (((rcx_157 u>> 0x1d).b & 1) != 0)
                                                                *rsi_12 = 0xffffffff
                                                                r12_2.b = 1
                                                            else if (((rcx_157 u>> 0x1c).b & 1)
                                                                    != 0)
                                                                rbx_18[1].d = rcx_157 & 0xefffffff
                                                                int64_t rdi_19 = sx.q(*(r15 + 8))
                                                                int64_t r14_11 = *rbx_18
                                                                int32_t rax_280 = (rdi_19 + 1).d
                                                                *(r15 + 8) = rax_280
                                                                
                                                                if (rax_280 s> *(r15 + 0xc))
                                                                    sub_1405a4d70(r15)
                                                                
                                                                *(*r15 + (rdi_19 << 3)) = r14_11
                                                                int32_t rcx_160 = *(rbx_18 + 0xc)
                                                                
                                                                if (rcx_160 s< 0)
                                                                    sub_140cc2a60(not.d(rcx_160), r15)
                                                            else if (*(rbx_18 + 0xc) s> 0
                                                                    && ((rcx_157 u>> 0x17).b & 1) == 0)
                                                                rbx_18[1].d = rcx_157 | 0x800000
                                                                int32_t rax_284 = *(rbx_18 + 0xc)
                                                                uint32_t rdx_95 = zx.d(rax_284.w)
                                                                
                                                                if (rax_284 s< 0)
                                                                    rax_284 += 0xffff
                                                                    rdx_95 -= 0x10000
                                                                
                                                                int64_t rdx_96 = sx.q(rdx_95) * 3
                                                                int64_t rcx_164 = *(data_143e1d9a0
                                                                    + (sx.q(rax_284 s>> 0x10) << 3))
                                                                void* r8_13 = rcx_164 + (rdx_96 << 3)
                                                                int32_t rcx_165 =
                                                                    *(rcx_164 + (rdx_96 << 3) + 8)
                                                                
                                                                if (((rcx_165 u>> 0x1c).b & 1) != 0)
                                                                    *(r8_13 + 8) = rcx_165 & 0xefffffff
                                                                    sub_140cc2a60(not.d(*(r8_13 + 0xc)), 
                                                                        r15)
                                                        
                                                        rsi_12 = &rsi_12[1]
                                                    while (rsi_12 != r13_10)
                                                    
                                                    if (r12_2.b != 0 || var_468_6 != 0)
                                                        goto label_140cca9e8
                                                else if (var_468_6 != 0)
                                                label_140cca9e8:
                                                    int64_t rsi_13 = 0
                                                    int32_t* rdi_20 = *(r11_20 + 8)
                                                    r12_2 = sx.q(*(r11_20 + 0x10)) << 2 u>> 2
                                                    
                                                    if (rdi_20 u> &rdi_20[sx.q(*(r11_20 + 0x10))])
                                                        r12_2 = 0
                                                    
                                                    if (r12_2 != 0)
                                                        do
                                                            int32_t rax_292 = *rdi_20
                                                            uint32_t rdx_98 = zx.d(rax_292.w)
                                                            
                                                            if (rax_292 s< 0)
                                                                rax_292 += 0xffff
                                                                rdx_98 -= 0x10000
                                                            
                                                            int64_t rbx_19 = sx.q(*(r15 + 8))
                                                            int32_t rax_296 = (rbx_19 + 1).d
                                                            int64_t r14_12 = *(*(data_143e1d9a0
                                                                + (sx.q(rax_292 s>> 0x10) << 3))
                                                                + sx.q(rdx_98) * 0x18)
                                                            *(r15 + 8) = rax_296
                                                            
                                                            if (rax_296 s> *(r15 + 0xc))
                                                                sub_1405a4d70(r15)
                                                            
                                                            rdi_20 = &rdi_20[1]
                                                            rsi_13 += 1
                                                            *(*r15 + (rbx_19 << 3)) = r14_12
                                                        while (rsi_13 != r12_2)
                                                    
                                                    *(r11_20 + 0x48) = 1
                                                    data_143e1d69c = 1
                                        
                                        rdx_71 = var_460_2
                                    
                                    rcx_117 = var_438_4 + 1
                                    var_438_4 = rcx_117
                                while (rcx_117 s< rax_202)
                            
                            goto label_140cc9769
                        case 0x11
                            r8_1 = &r8_1[3]
                            void* rdx_106 = (rax_13 u>> 0xd) + r11_1
                            var_450_1 = r8_1
                            r11_1 = *rdx_106
                            
                            if ((r11_1.b & 1) != 0)
                                r11_1 = (r11_1 s>> 1) + rdx_106
                            
                            *r8_1 = r11_1
                            var_448_1 = r11_1
                            r8_1[1].d = *(*r9_2 + (sx.q(r12_2.d) << 2))
                            *(r8_1 + 0xc) = *(rdx_106 + 8)
                            int32_t rax_306 = *(*r9_2 + (sx.q(r12_2.d + 1) << 2))
                            int32_t rcx_184 = (r12_2.d + 1) << 8
                            r12_2 = zx.q(r12_2.d + 2)
                            int32_t rax_307 = rax_306 + rcx_184
                            r8_1[2].d = r12_2.d
                            
                            if (*(r8_1 + 0xc) != 0)
                                goto label_140ccb1c6
                            
                            uint32_t rcx_186 = rax_307 u>> 8
                            r12_2 = zx.q(rcx_186)
                            r10_1 = zx.d(*(*r9_2 + (zx.q(rcx_186) << 2) - 4)) - zx.d(rax_307.b)
                            var_464_1 = r10_1
                            continue
                r8_1 = var_450_1
            
            rsi = arg2
            rdi += 1
            r12 += 1
            rax_4 = *(rsi + 8)
            
            if (rdi s>= rax_4)
                break
        
        r13 = arg1
    
    if (*(r15 + 8) != 0)
        if (rsi != r15)
            int128_t zmm1_1 = *rsi
            *rsi = *r15
            *r15 = zmm1_1
        
        *(r15 + 8) = 0
        rdi = 0
        r12 = 0
    
    sub_140d16360(&var_3d8)
    
    if (rdi s>= *(rsi + 8))
        break

int32_t rax_603 = *(r15 + 0xc)
void* rbx_39 = r13[1]
*(r15 + 8) = 0

if (rax_603 s< 0 && *(r15 + 0xc) != 0)
    sub_1405c5570(r15, 0)

int64_t result = sub_140ccd380(rbx_39, r15)
void** rcx_386 = var_3e8

if (rcx_386 != 0)
    result = sub_140a74f90(rcx_386)

__security_check_cookie(rax_1 ^ &var_4a8)
return result
