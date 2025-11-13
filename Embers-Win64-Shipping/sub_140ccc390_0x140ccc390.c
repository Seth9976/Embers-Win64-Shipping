// 函数: sub_140ccc390
// 地址: 0x140ccc390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int64_t* r15 = arg1
int32_t var_410 = 0
int32_t r14 = 0
int32_t var_3e8 = 0
int128_t* rsi = arg2
uint64_t* rax_2 = sub_140cc3cb0(arg1[1])
uint64_t* r12 = rax_2

if (rax_2 == 0)
    uint64_t* rax_3 = j_sub_140a82f30(0x20)
    r12 = rax_3
    
    if (rax_3 == 0)
        r12 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

void** var_3d8 = nullptr
int64_t var_3d0 = 0x80
sub_1405a4df0(&var_3d8)
int32_t rdx_2 = *(rsi + 8) + 1

if (rdx_2 s> *(rsi + 0xc))
    sub_1405c5570(rsi, rdx_2)

int32_t rdi = 0
int64_t r13 = 0

while (true)
    int64_t rbx_1 = *r15
    void** const var_3c8
    std::exception::exception(&var_3c8)
    int64_t var_3b0_1 = rbx_1
    var_3c8 = &data_142ea1908
    uint64_t* var_3a8_1 = r12
    char var_3a0_1 = 1
    int32_t rax_4 = *(rsi + 8)
    
    if (rdi s< rax_4)
        while (true)
            int64_t rdx_3 = *rsi
            int32_t rcx_4 = rax_4 - 1
            void* r15_1 = *(rdx_3 + (r13 << 3))
            void* var_400_1 = r15_1
            
            if (rdi + 1 s<= rcx_4)
                rcx_4 = rdi + 1
            
            int32_t rbx_2 = *(*(r15_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_4) << 3))
            int64_t rcx_5 = sx.q(sub_140b673d0())
            int32_t i_2 = divs.dp.d(sx.q((rcx_5 - 1).d + rbx_2), rcx_5.d)
            
            if (i_2 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_5
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            uint64_t r11_1 = 0
            void** r13_2 = var_3d8
            int64_t* r9_2 = *(r15_1 + 0x10) + 0x1e8
            uint32_t rdx_6 = 0
            int64_t* var_418_1 = r9_2
            void* r8_1 = r15_1
            void* var_420_1 = r15_1
            uint32_t var_428_1 = 0
            *r13_2 = r15_1
            r13_2[1].d = 0
            *(r13_2 + 0xc) = -1
            
            while (true)
                int32_t rax_11 = 0
                int32_t rsi_1 = r11_1.d
                
                if (rdx_6 s> 0)
                    do
                        *(r13_2 + 0xc) -= 1
                        
                        if (*(r13_2 + 0xc) s> 0)
                            r8_1 = sx.q(r13_2[1].d) + *r13_2
                            *r13_2 = r8_1
                            r11_1 = zx.q(r13_2[2].d)
                            rsi_1 = r11_1.d
                            var_420_1 = r8_1
                            break
                        
                        r8_1 = r13_2[-3]
                        r13_2 -= 0x18
                        rax_11 += 1
                        var_420_1 = r8_1
                    while (rax_11 s< rdx_6)
                
                int64_t r10_1 = *r9_2
                r11_1 = zx.q(r11_1.d + 1)
                uint64_t rax_13 = zx.q(*(r10_1 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_13.d u>> 8 & 0x1f
                uint64_t rcx_6 = zx.q(rdi_5 - 1)
                int32_t var_448
                int16_t* const var_440
                int16_t* const var_438
                
                if (rcx_6.d u> 0x11)
                    int16_t* rax_101 = *(r15_1 + 0x10)
                    int16_t* var_3f8
                    int16_t* var_3f0
                    
                    if (rax_101 != 0)
                        int64_t var_398 = *(rax_101 + 0x18)
                        sub_140b63b70(&var_398, &var_3f8)
                    else
                        var_3f8 = rax_101
                        sub_1405947f0(&var_3f8, 5)
                        var_3f0.d = rax_101.d + 5
                        
                        if (rax_101.d + 5 s> var_3f0:4.d)
                            sub_140594770(&var_3f8)
                        
                        UnDecorator::getReferenceType(var_3f8, u"None", 0xa)
                    
                    int16_t* const rbx_14 = &data_142d40450
                    
                    if (var_3f0.d != 0)
                        rbx_14 = var_3f8
                    
                    int16_t* var_380
                    sub_140d21e10(r15_1, &var_380, 0)
                    int16_t* const rax_104 = &data_142d40450
                    int32_t var_378
                    
                    if (var_378 != 0)
                        rax_104 = var_380
                    
                    var_438 = rax_104
                    var_440 = rbx_14
                    var_448 = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    int16_t* rcx_84 = var_380
                    
                    if (rcx_84 != 0)
                        sub_140a74f90(rcx_84)
                    
                    int16_t* rcx_85 = var_3f8
                    r14 = (r14 | 1) & 0xfffffffe
                    var_410 = r14
                    
                    if (rcx_85 != 0)
                        sub_140a74f90(rcx_85)
                    
                    sub_140afbb40()
                    rdx_6 = var_428_1
                label_140ccd008:
                    r9_2 = var_418_1
                    r8_1 = var_420_1
                else
                    uint64_t var_408_3
                    void* var_3c0
                    void* rcx_49
                    void*** rcx_57
                    void* rbx_9
                    uint64_t r8_10
                    uint64_t r11_7
                    
                    switch (rcx_6)
                        case 0, 1
                            rdx_6 = zx.d(rax_13.b)
                            void* rbx_5 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = rdx_6
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
                                uint32_t rdx_9 = zx.d(rax_15.w)
                                
                                if (rax_15 s< 0)
                                    rax_15 += 0xffff
                                    rdx_9 -= 0x10000
                                
                                void* r8_3 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                    + sx.q(rdx_9) * 0x18
                                rdx_6 = var_428_1
                                int32_t rcx_9 = *(r8_3 + 8)
                                
                                if (((rcx_9 u>> 0x1d).b & 1) != 0)
                                    *rbx_5 = 0
                                    r8_1 = var_420_1
                                    continue
                                    continue
                                else if (((rcx_9 u>> 0x1c).b & 1) == 0)
                                    r8_1 = var_420_1
                                    continue
                                    continue
                                else
                                    *(r8_3 + 8) = rcx_9 & 0xefffffff
                                    int64_t rdi_6 = sx.q(r12[1].d)
                                    int32_t rax_23 = (rdi_6 + 1).d
                                    r12[1].d = rax_23
                                    
                                    if (rax_23 s> *(r12 + 0xc))
                                        sub_1405a4d70(r12)
                                        r9_2 = var_418_1
                                    
                                    *(*r12 + (rdi_6 << 3)) = *rbx_5
                        case 2
                            rdx_6 = zx.d(rax_13.b)
                            void* rdi_11 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = rdx_6
                            void* rax_60 = *rdi_11
                            
                            if (rax_60 u< data_143e1d660 || rax_60 u>= data_143e1d668)
                                rcx_6.b = 0
                            else
                                rcx_6.b = 1
                            
                            if (rax_60 == 0)
                                continue
                            else if (rcx_6.b != 0)
                                continue
                            else
                                int32_t rax_61 = *(rax_60 + 0xc)
                                uint32_t rdx_27 = zx.d(rax_61.w)
                                
                                if (rax_61 s< 0)
                                    rax_61 += 0xffff
                                    rdx_27 -= 0x10000
                                
                                void* r8_7 = *(data_143e1d9a0 + (sx.q(rax_61 s>> 0x10) << 3))
                                    + sx.q(rdx_27) * 0x18
                                rdx_6 = var_428_1
                                int32_t rcx_39 = *(r8_7 + 8)
                                
                                if (((rcx_39 u>> 0x1c).b & 1) == 0)
                                    r8_1 = var_420_1
                                    continue
                                else
                                    *(r8_7 + 8) = rcx_39 & 0xefffffff
                                    int64_t rbx_8 = sx.q(r12[1].d)
                                    int32_t rax_67 = (rbx_8 + 1).d
                                    r12[1].d = rax_67
                                    
                                    if (rax_67 s> *(r12 + 0xc))
                                        sub_1405a4d70(r12)
                                        r9_2 = var_418_1
                                    
                                    *(*r12 + (rbx_8 << 3)) = *rdi_11
                        case 3
                            rdx_6 = zx.d(rax_13.b)
                            int64_t rdi_7 = 0
                            void* r14_3 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = rdx_6
                            int64_t r15_2 = sx.q(*(r14_3 + 8))
                            
                            if (r15_2 s<= 0)
                            label_140ccc4fb:
                                r14 = var_410
                                r15_1 = var_400_1
                                continue
                                continue
                            else
                                do
                                    int64_t rax_25 = *r14_3
                                    int64_t* rsi_2 = rax_25 + (rdi_7 << 3)
                                    void* rax_26 = *(rax_25 + (rdi_7 << 3))
                                    
                                    if (rax_26 u< data_143e1d660 || rax_26 u>= data_143e1d668)
                                        rcx_6.b = 0
                                    else
                                        rcx_6.b = 1
                                    
                                    if (rax_26 != 0 && rcx_6.b == 0)
                                        int32_t rax_27 = *(rax_26 + 0xc)
                                        uint32_t rdx_12 = zx.d(rax_27.w)
                                        
                                        if (rax_27 s< 0)
                                            rax_27 += 0xffff
                                            rdx_12 -= 0x10000
                                        
                                        int64_t rdx_13 = sx.q(rdx_12) * 3
                                        int64_t rcx_14 =
                                            *(data_143e1d9a0 + (sx.q(rax_27 s>> 0x10) << 3))
                                        rcx_6 = zx.q(*(rcx_14 + (rdx_13 << 3) + 8))
                                        
                                        if (((rcx_6.d u>> 0x1d).b & 1) != 0)
                                            *rsi_2 = 0
                                        else if (((rcx_6.d u>> 0x1c).b & 1) != 0)
                                            *(rcx_14 + (rdx_13 << 3) + 8) = rcx_6.d & 0xefffffff
                                            int64_t rbx_6 = sx.q(r12[1].d)
                                            int32_t rax_35 = (rbx_6 + 1).d
                                            r12[1].d = rax_35
                                            
                                            if (rax_35 s> *(r12 + 0xc))
                                                sub_1405a4d70(r12)
                                            
                                            *(*r12 + (rbx_6 << 3)) = *rsi_2
                                    
                                    rdi_7 += 1
                                while (rdi_7 s< r15_2)
                                
                            label_140ccc748:
                                r14 = var_410
                                r9_2 = var_418_1
                                r15_1 = var_400_1
                        case 4
                            r13_2 = &r13_2[3]
                            void* rdx_20 = (rax_13 u>> 0xd) + r8_1
                            r8_1 = *rdx_20
                            *r13_2 = r8_1
                            var_420_1 = r8_1
                            r13_2[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            *(r13_2 + 0xc) = *(rdx_20 + 8)
                            int32_t rax_53 = *(*r9_2 + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_25 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_54 = rax_53 + rcx_25
                            r13_2[2].d = r11_1.d
                            
                            if (*(r13_2 + 0xc) != 0)
                                goto label_140ccca31
                            
                            r11_1 = zx.q(rax_54 u>> 8)
                            rdx_6 = zx.d(*(*r9_2 + (r11_1 << 2) - 4)) - zx.d(rax_54.b)
                            var_428_1 = rdx_6
                            continue
                        case 5
                            r13_2[3] = r8_1
                            r13_2 = &r13_2[3]
                            r13_2[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            int64_t rcx_45 = sx.q(r11_1.d + 1)
                            r11_1 = zx.q(r11_1.d + 2)
                            *(r13_2 + 0xc) = *(*r9_2 + (rcx_45 << 2))
                            r13_2[2].d = r11_1.d
                        label_140ccca31:
                            rdx_6 = 0
                            var_428_1 = 0
                            continue
                            continue
                        case 6
                            rcx_49 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = zx.d(rax_13.b)
                            r11_7 = zx.q(r11_1.d + 2)
                            r8_10 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                        label_140ccca73:
                            r8_10(rcx_49, &var_3c8)
                            r8_1 = var_420_1
                            rdx_6 = var_428_1
                            r11_1 = r11_7
                            r9_2 = var_418_1
                            continue
                            continue
                        case 7
                            r11_7 = zx.q(r11_1.d + 2)
                            var_428_1 = zx.d(rax_13.b)
                            r8_10 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            rcx_49 = r15_1
                            goto label_140ccca73
                        case 8
                            rbx_9 = var_3c0
                            uint64_t rdi_14 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            var_408_3 = zx.q(r11_1.d + 2)
                            var_428_1 = zx.d(rax_13.b)
                            
                            if (rbx_9 == 0)
                                sub_140d1e450(&var_3c8)
                                rbx_9 = var_3c0
                            
                            *(rbx_9 + 0x90) = r15_1
                            void var_370
                            void** var_360
                            (*(*rdi_14 + 0x88))(rdi_14, 
                                *SymBuffer::end(sub_140b4cb20(&var_360, rbx_9), &var_370), 
                                (rax_13 u>> 0xd) + r8_1, 0, var_448, var_440, var_438)
                            rcx_57 = &var_360
                        label_140cccb39:
                            sub_140b4cbb0(rcx_57)
                            r11_1 = var_408_3
                            rdx_6 = var_428_1
                            r9_2 = var_418_1
                            *(rbx_9 + 0x90) = 0
                            r8_1 = var_420_1
                            continue
                            continue
                        case 9
                            rbx_9 = var_3c0
                            uint64_t rdi_17 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            var_408_3 = zx.q(r11_1.d + 2)
                            var_428_1 = zx.d(rax_13.b)
                            
                            if (rbx_9 == 0)
                                sub_140d1e450(&var_3c8)
                                rbx_9 = var_3c0
                            
                            *(rbx_9 + 0x90) = r15_1
                            void var_368
                            void** var_1d0
                            (*(*rdi_17 + 0x88))(rdi_17, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d0, rbx_9), &var_368), 
                                (rax_13 u>> 0xd) + r8_1, 0, var_448, var_440, var_438)
                            rcx_57 = &var_1d0
                            goto label_140cccb39
                        case 0xa
                            void* rdi_20 = (rax_13 u>> 0xd) + r8_1
                            int32_t r9_8 = *(rdi_20 + 0xc)
                            
                            if (r9_8 != 0)
                                int32_t rcx_63 = *(rdi_20 + 8)
                                
                                if (rcx_63 s>= 0)
                                    if (rcx_63 s>= data_143e1d9b4)
                                        goto label_140cccd78
                                    
                                    uint32_t r8_15 = zx.d(rcx_63.w)
                                    
                                    if (rcx_63 s< 0)
                                        rcx_63 += 0xffff
                                        r8_15 -= 0x10000
                                    
                                    int64_t* rbx_10 =
                                        *(data_143e1d9a0 + (sx.q(rcx_63 s>> 0x10) << 3))
                                        + sx.q(r8_15) * 0x18
                                    
                                    if (rbx_10 == 0)
                                        r8_1 = var_420_1
                                    label_140cccd78:
                                        r9_2 = var_418_1
                                        rdx_6 = zx.d(rax_13.b)
                                        var_428_1 = rdx_6
                                        continue
                                    
                                    rdx_6 = zx.d(rax_13.b)
                                    var_428_1 = rdx_6
                                    
                                    if (rbx_10[2].d == r9_8)
                                        void* const rbx_11 = *rbx_10
                                        var_428_1 = rdx_6
                                        
                                        if (rbx_11 u< data_143e1d660 || rbx_11 u>= data_143e1d668)
                                            rax_13.b = 0
                                        else
                                            rax_13.b = 1
                                        
                                        r8_1 = var_420_1
                                        r9_2 = var_418_1
                                        
                                        if (rbx_11 == 0)
                                            continue
                                        else
                                            if (rax_13.b == 0)
                                                int32_t rax_75 = *(rbx_11 + 0xc)
                                                uint32_t rdx_46 = zx.d(rax_75.w)
                                                
                                                if (rax_75 s< 0)
                                                    rax_75 += 0xffff
                                                    rdx_46 -= 0x10000
                                                
                                                int64_t rdx_47 = sx.q(rdx_46) * 3
                                                int64_t rcx_68 =
                                                    *(data_143e1d9a0 + (sx.q(rax_75 s>> 0x10) << 3))
                                                int32_t rcx_69 = *(rcx_68 + (rdx_47 << 3) + 8)
                                                
                                                if (((rcx_69 u>> 0x1d).b & 1) != 0)
                                                    rbx_11 = nullptr
                                                else if (((rcx_69 u>> 0x1c).b & 1) != 0)
                                                    *(rcx_68 + (rdx_47 << 3) + 8) =
                                                        rcx_69 & 0xefffffff
                                                    int64_t rsi_10 = sx.q(r12[1].d)
                                                    int32_t rax_83 = (rsi_10 + 1).d
                                                    r12[1].d = rax_83
                                                    
                                                    if (rax_83 s> *(r12 + 0xc))
                                                        sub_1405a4d70(r12)
                                                    
                                                    *(*r12 + (rsi_10 << 3)) = rbx_11
                                                
                                                rdx_6 = var_428_1
                                            
                                            r8_1 = var_420_1
                                            r9_2 = var_418_1
                                            
                                            if (rbx_11 != 0)
                                                continue
                                            else
                                                *rdi_20 = 0
                                                *(rdi_20 + 8) = 0xffffffff
                                                *(rdi_20 + 0xc) = 0
                                                continue
                                else
                                    r9_2 = var_418_1
                                    rdx_6 = zx.d(rax_13.b)
                                    var_428_1 = rdx_6
                                    continue
                            else
                                r9_2 = var_418_1
                                rdx_6 = zx.d(rax_13.b)
                                var_428_1 = rdx_6
                                continue
                            
                            goto label_140ccd008
                        case 0xb
                            rdx_6 = zx.d(rax_13.b)
                            void* r14_9 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = rdx_6
                            int64_t i_3 = sx.q(*(r14_9 + 8))
                            
                            if (i_3 s<= 0)
                                goto label_140ccc4fb
                            
                            void** rsi_11 = nullptr
                            int64_t i_1
                            
                            do
                                int64_t rax_85 = *r14_9
                                int32_t r8_18 = *(rax_85 + rsi_11 + 0xc)
                                
                                if (r8_18 != 0)
                                    int32_t rax_86 = *(rax_85 + rsi_11 + 8)
                                    
                                    if (rax_86 s>= 0 && rax_86 s< data_143e1d9b4)
                                        uint32_t rdx_49 = zx.d(rax_86.w)
                                        
                                        if (rax_86 s< 0)
                                            rax_86 += 0xffff
                                            rdx_49 -= 0x10000
                                        
                                        int64_t* rbx_12 =
                                            *(data_143e1d9a0 + (sx.q(rax_86 s>> 0x10) << 3))
                                            + sx.q(rdx_49) * 0x18
                                        
                                        if (rbx_12 != 0 && rbx_12[2].d == r8_18)
                                            void* const rbx_13 = *rbx_12
                                            int64_t rax_89
                                            
                                            if (rbx_13 u< data_143e1d660
                                                    || rbx_13 u>= data_143e1d668)
                                                rax_89.b = 0
                                            else
                                                rax_89.b = 1
                                            
                                            if (rbx_13 != 0)
                                                if (rax_89.b == 0)
                                                    int32_t rax_90 = *(rbx_13 + 0xc)
                                                    uint32_t rdx_51 = zx.d(rax_90.w)
                                                    
                                                    if (rax_90 s< 0)
                                                        rax_90 += 0xffff
                                                        rdx_51 -= 0x10000
                                                    
                                                    int64_t rdx_52 = sx.q(rdx_51) * 3
                                                    int64_t rcx_75 = *(data_143e1d9a0
                                                        + (sx.q(rax_90 s>> 0x10) << 3))
                                                    int32_t rcx_76 = *(rcx_75 + (rdx_52 << 3) + 8)
                                                    
                                                    if (((rcx_76 u>> 0x1d).b & 1) != 0)
                                                        rbx_13 = nullptr
                                                    else if (((rcx_76 u>> 0x1c).b & 1) != 0)
                                                        *(rcx_75 + (rdx_52 << 3) + 8) =
                                                            rcx_76 & 0xefffffff
                                                        int64_t rdi_21 = sx.q(r12[1].d)
                                                        int32_t rax_98 = (rdi_21 + 1).d
                                                        r12[1].d = rax_98
                                                        
                                                        if (rax_98 s> *(r12 + 0xc))
                                                            sub_1405a4d70(r12)
                                                        
                                                        *(*r12 + (rdi_21 << 3)) = rbx_13
                                                
                                                if (rbx_13 == 0)
                                                    int64_t rax_100 = *r14_9
                                                    *(rsi_11 + rax_100) = rbx_13
                                                    *(rsi_11 + rax_100 + 8) = 0xffffffff
                                                    *(rsi_11 + rax_100 + 0xc) = rbx_13.d
                                
                                rsi_11 = &rsi_11[4]
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            r14 = var_410
                            r15_1 = var_400_1
                            rdx_6 = var_428_1
                            r9_2 = var_418_1
                            r8_1 = var_420_1
                            continue
                            continue
                        case 0xc, 0xe, 0xf
                            rdx_6 = zx.d(rax_13.b)
                            var_428_1 = rdx_6
                            continue
                            continue
                        case 0xd
                            break
                        case 0x10
                            rdx_6 = zx.d(rax_13.b)
                            int64_t rsi_3 = 0
                            void* r14_6 = (rax_13 u>> 0xd) + r8_1
                            var_428_1 = rdx_6
                            int64_t r15_3 = sx.q(*(r14_6 + 8))
                            
                            if (r15_3 s<= 0)
                                goto label_140ccc4fb
                            
                            do
                                void* rax_38 = *r14_6
                                
                                if ((rax_38.b & 1) != 0)
                                    rax_38 = (rax_38 s>> 1) + r14_6
                                
                                void* rdi_8 = rax_38 + (rsi_3 << 3)
                                void* rax_39 = *(rax_38 + (rsi_3 << 3))
                                
                                if (rax_39 u< data_143e1d660 || rax_39 u>= data_143e1d668)
                                    rcx_6.b = 0
                                else
                                    rcx_6.b = 1
                                
                                if (rax_39 != 0 && rcx_6.b == 0)
                                    int32_t rax_40 = *(rax_39 + 0xc)
                                    uint32_t rdx_15 = zx.d(rax_40.w)
                                    
                                    if (rax_40 s< 0)
                                        rax_40 += 0xffff
                                        rdx_15 -= 0x10000
                                    
                                    int64_t rdx_16 = sx.q(rdx_15) * 3
                                    int64_t rcx_18 =
                                        *(data_143e1d9a0 + (sx.q(rax_40 s>> 0x10) << 3))
                                    rcx_6 = zx.q(*(rcx_18 + (rdx_16 << 3) + 8))
                                    
                                    if (((rcx_6.d u>> 0x1d).b & 1) != 0)
                                        *rdi_8 = 0
                                    else if (((rcx_6.d u>> 0x1c).b & 1) != 0)
                                        *(rcx_18 + (rdx_16 << 3) + 8) = rcx_6.d & 0xefffffff
                                        int64_t rbx_7 = sx.q(r12[1].d)
                                        int32_t rax_48 = (rbx_7 + 1).d
                                        r12[1].d = rax_48
                                        
                                        if (rax_48 s> *(r12 + 0xc))
                                            sub_1405a4d70(r12)
                                        
                                        *(*r12 + (rbx_7 << 3)) = *rdi_8
                                
                                rsi_3 += 1
                            while (rsi_3 s< r15_3)
                            
                            goto label_140ccc748
                        case 0x11
                            r13_2 = &r13_2[3]
                            void* rdx_24 = (rax_13 u>> 0xd) + r8_1
                            r8_1 = *rdx_24
                            
                            if ((r8_1.b & 1) != 0)
                                r8_1 = (r8_1 s>> 1) + rdx_24
                            
                            *r13_2 = r8_1
                            var_420_1 = r8_1
                            r13_2[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            *(r13_2 + 0xc) = *(rdx_24 + 8)
                            int32_t rax_58 = *(*r9_2 + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_32 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_59 = rax_58 + rcx_32
                            r13_2[2].d = r11_1.d
                            
                            if (*(r13_2 + 0xc) != 0)
                                goto label_140ccca31
                            
                            uint32_t rcx_34 = rax_59 u>> 8
                            r11_1 = zx.q(rcx_34)
                            rdx_6 = zx.d(*(*r9_2 + (zx.q(rcx_34) << 2) - 4)) - zx.d(rax_59.b)
                            var_428_1 = rdx_6
                            continue
                    
                    if (rcx_6 == 0xd)
                        break
                    
                    rdx_6 = var_428_1
                    r8_1 = var_420_1
            
            rsi = arg2
            rdi += 1
            r13 += 1
            rax_4 = *(rsi + 8)
            
            if (rdi s>= rax_4)
                break
        
        r15 = arg1
    
    if (r12[1].d != 0)
        if (rsi != r12)
            int128_t zmm1_1 = *rsi
            *rsi = *r12
            *r12 = zmm1_1
        
        rdi = 0
        r12[1].d = 0
        r13 = 0
    
    sub_140d16360(&var_3c8)
    
    if (rdi s>= *(rsi + 8))
        break

int32_t rax_105 = *(r12 + 0xc)
void* rbx_15 = r15[1]
r12[1].d = 0

if (rax_105 s< 0 && rax_105 != 0)
    sub_1405c5570(r12, 0)

int64_t result = sub_140ccd380(rbx_15, r12)
void** rcx_89 = var_3d8

if (rcx_89 != 0)
    result = sub_140a74f90(rcx_89)

__security_check_cookie(rax_1 ^ &var_468)
return result
