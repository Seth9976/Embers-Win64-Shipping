// 函数: sub_140cc4b60
// 地址: 0x140cc4b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_538
int64_t rax_1 = __security_cookie ^ &var_538
int32_t var_478 = 0
int64_t* r13 = arg1
int32_t r14 = data_1439a9d70
uint64_t* rsi = arg2
int32_t r12 = 0
int32_t var_48c = r14
int32_t var_4d8 = 0
int64_t* rax_2 = sub_140cc3cb0(arg1[1])
int64_t* var_4f0 = rax_2

if (rax_2 == 0)
    int64_t* rax_3 = j_sub_140a82f30(0x20)
    var_4f0 = rax_3
    
    if (rax_3 == 0)
        var_4f0 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x20)

void** var_440 = nullptr
int64_t var_438 = 0x80
sub_1405a4df0(&var_440)
int32_t rdx_2 = rsi[1].d + 1

if (rdx_2 s> *(rsi + 0xc))
    sub_1405c5570(rsi, rdx_2)

int32_t rdi = 0
int32_t var_490 = 0
int64_t r15 = 0
int64_t var_468 = 0
int64_t* r15_45

while (true)
    int64_t rbx_1 = *r13
    void** const var_430
    std::exception::exception(&var_430)
    int64_t* r9_1 = var_4f0
    var_430 = &data_142ea1788
    int64_t* var_410_1 = r9_1
    int64_t var_418_1 = rbx_1
    char var_408_1 = 1
    int32_t rax_4 = rsi[1].d
    int32_t* var_518
    int32_t* var_510
    int16_t* const var_508
    int32_t rbx_37
    
    if (rdi s>= rax_4)
        rbx_37 = r9_1[1].d
    else
        while (true)
            uint64_t rdx_3 = *rsi
            int32_t rcx_4 = rax_4 - 1
            var_490 = rdi + 1
            void* r13_1 = *(rdx_3 + (r15 << 3))
            void* var_4a8_1 = r13_1
            var_468 = r15 + 1
            
            if (rdi + 1 s<= rcx_4)
                rcx_4 = rdi + 1
            
            int32_t rbx_2 = *(*(r13_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_4) << 3))
            int64_t rcx_5 = sx.q(sub_140b673d0())
            int32_t i_1 = divs.dp.d(sx.q((rcx_5 - 1).d + rbx_2), rcx_5.d)
            
            if (i_1 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_5
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            void* r11_1 = r13_1
            void** r8 = var_440
            int64_t* r14_2 = *(r13_1 + 0x10) + 0x1e8
            r9_1 = var_4f0
            uint32_t rbx_3 = 0
            int64_t* var_4c0_1 = r14_2
            uint32_t var_4f4_1 = 0
            uint64_t r15_2 = 0
            *r8 = r13_1
            r8[1].d = 0
            void** var_4e0_1 = r8
            void* var_4d0_1 = r13_1
            *(r8 + 0xc) = -1
            
            while (true)
            label_140cc4d05:
                int32_t rsi_1 = r15_2.d
                int32_t rax_11 = 0
                
                if (rbx_3 s> 0)
                    do
                        *(r8 + 0xc) -= 1
                        
                        if (*(r8 + 0xc) s> 0)
                            r11_1 = sx.q(r8[1].d) + *r8
                            *r8 = r11_1
                            r15_2 = zx.q(r8[2].d)
                            rsi_1 = r15_2.d
                            var_4d0_1 = r11_1
                            break
                        
                        r11_1 = r8[-3]
                        r8 -= 0x18
                        rax_11 += 1
                        var_4d0_1 = r11_1
                        var_4e0_1 = r8
                    while (rax_11 s< rbx_3)
                
                int64_t r10_1 = *r14_2
                r15_2 = zx.q(r15_2.d + 1)
                uint64_t var_4b8_1 = r15_2
                uint64_t rax_13 = zx.q(*(r10_1 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_13.d u>> 8 & 0x1f
                uint64_t rcx_6 = zx.q(rdi_5 - 1)
                void* var_428
                void* rcx_255
                void*** rcx_264
                void* rbx_25
                void* rdi_8
                uint64_t r8_27
                void* r13_6
                
                if (rcx_6.d u> 0x11)
                    int32_t* rax_740 = *(r13_1 + 0x10)
                    int32_t* var_488
                    int32_t* var_480
                    
                    if (rax_740 != 0)
                        int64_t var_400 = *(rax_740 + 0x18)
                        sub_140b63b70(&var_400, &var_488)
                    else
                        var_488 = rax_740
                        sub_1405947f0(&var_488, 5)
                        var_480.d = rax_740.d + 5
                        
                        if (rax_740.d + 5 s> var_480:4.d)
                            sub_140594770(&var_488)
                        
                        UnDecorator::getReferenceType(var_488, u"None", 0xa)
                    
                    int32_t* rbx_36 = &data_142d40450
                    
                    if (var_480.d != 0)
                        rbx_36 = var_488
                    
                    int16_t* var_3d8
                    sub_140d21e10(r13_1, &var_3d8, 0)
                    int16_t* const rax_743 = &data_142d40450
                    int32_t var_3d0
                    
                    if (var_3d0 != 0)
                        rax_743 = var_3d8
                    
                    var_508 = rax_743
                    var_510 = rbx_36
                    var_518.d = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    int16_t* rcx_393 = var_3d8
                    
                    if (rcx_393 != 0)
                        sub_140a74f90(rcx_393)
                    
                    int32_t* rcx_394 = var_488
                    r12 = (r12 | 1) & 0xfffffffe
                    var_4d8 = r12
                    
                    if (rcx_394 != 0)
                        sub_140a74f90(rcx_394)
                    
                    sub_140afbb40()
                    r9_1 = var_4f0
                    r8 = var_4e0_1
                    r11_1 = var_4d0_1
                    rbx_3 = var_4f4_1
                else
                    switch (rcx_6)
                        case 0, 1
                            rbx_3 = zx.d(rax_13.b)
                            rdi_8 = (rax_13 u>> 0xd) + r11_1
                            var_4f4_1 = rbx_3
                            void* rax_14 = *rdi_8
                            
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
                                void* r8_1 = rcx_8 + (rdx_9 << 3)
                                int32_t rdx_10 = *(rcx_8 + (rdx_9 << 3) + 8)
                                
                                if (((rdx_10 u>> 0x1d).b & 1) != 0)
                                    r8 = var_4e0_1
                                    *rdi_8 = 0
                                    continue
                                
                                void* var_4c8_1
                                
                                if (((rdx_10 u>> 0x1c).b & 1) != 0)
                                    if (not(test_bit(rdx_10, 0x1c)))
                                        goto label_140cc4e50
                                    
                                    while (true)
                                        bool z_1
                                        
                                        if (rdx_10 == *(r8_1 + 8))
                                            *(r8_1 + 8) = rdx_10 & 0xefffffff
                                            z_1 = true
                                        else
                                            *(r8_1 + 8)
                                            z_1 = false
                                        
                                        if (z_1)
                                            break
                                        
                                        rdx_10 = *(r8_1 + 8)
                                        
                                        if (not(test_bit(rdx_10, 0x1c)))
                                            goto label_140cc4e50
                                    
                                    if ((*(r8_1 + 0xb) & 1) != 0)
                                        r13_1.b = 0
                                        char var_4f8_1 = 0
                                        void* r11_5 =
                                            sx.q(not.d(*(r8_1 + 0xc))) * 0x50 + data_143e1d678
                                        var_4c8_1 = r11_5
                                        int32_t* r9_2 = *(r11_5 + 0x18)
                                        void* r10_2 = &r9_2[sx.q(*(r11_5 + 0x20))]
                                        
                                        if (r9_2 != r10_2)
                                            do
                                                int32_t rax_31 = *r9_2
                                                
                                                if (rax_31 s>= 0)
                                                    int64_t rdx_13 = sx.q(zx.d(rax_31.w)) * 3
                                                    int64_t rcx_14 = *(data_143e1d9a0
                                                        + (sx.q(rax_31 s>> 0x10) << 3))
                                                    void* r8_2 = rcx_14 + (rdx_13 << 3)
                                                    int32_t rdx_14 = *(rcx_14 + (rdx_13 << 3) + 8)
                                                    
                                                    if (((rdx_14 u>> 0x1d).b & 1) != 0)
                                                        *r9_2 = 0xffffffff
                                                        r13_1.b = 1
                                                    else if (((rdx_14 u>> 0x1c).b & 1) != 0
                                                            && test_bit(rdx_14, 0x1c))
                                                        do
                                                            bool z_2
                                                            
                                                            if (rdx_14 == *(r8_2 + 8))
                                                                *(r8_2 + 8) = rdx_14 & 0xefffffff
                                                                z_2 = true
                                                            else
                                                                *(r8_2 + 8)
                                                                z_2 = false
                                                            
                                                            if (z_2)
                                                                break
                                                            
                                                            rdx_14 = *(r8_2 + 8)
                                                        while (test_bit(rdx_14, 0x1c))
                                                
                                                r9_2 = &r9_2[1]
                                            while (r9_2 != r10_2)
                                            
                                            var_4f8_1 = r13_1.b
                                        
                                        int32_t* r14_3 = *(r11_5 + 0x28)
                                        r15_2.b = 0
                                        void* r12_1 = &r14_3[sx.q(*(r11_5 + 0x30))]
                                        
                                        if (r14_3 == r12_1)
                                            goto label_140cc5102
                                        
                                        do
                                            int32_t rax_42 = *r14_3
                                            
                                            if (rax_42 s>= 0)
                                                int64_t rdx_16 = sx.q(zx.d(rax_42.w)) * 3
                                                int64_t rcx_18 =
                                                    *(data_143e1d9a0 + (sx.q(rax_42 s>> 0x10) << 3))
                                                int64_t* rbx_5 = rcx_18 + (rdx_16 << 3)
                                                int32_t rdx_17 = *(rcx_18 + (rdx_16 << 3) + 8)
                                                
                                                if (((rdx_17 u>> 0x1d).b & 1) != 0)
                                                    *r14_3 = 0xffffffff
                                                    r15_2.b = 1
                                                else if (((rdx_17 u>> 0x1c).b & 1) == 0)
                                                    if (*(rbx_5 + 0xc) s> 0
                                                            && ((rdx_17 u>> 0x17).b & 1) == 0
                                                            && not(test_bit(rdx_17, 0x17)))
                                                        do
                                                            bool z_4
                                                            
                                                            if (rdx_17 == rbx_5[1].d)
                                                                rbx_5[1].d = rdx_17 | 0x800000
                                                                z_4 = true
                                                            else
                                                                rbx_5[1].d
                                                                z_4 = false
                                                            
                                                            if (z_4)
                                                                int32_t rax_58 = *(rbx_5 + 0xc)
                                                                uint32_t rdx_20 = zx.d(rax_58.w)
                                                                
                                                                if (rax_58 s< 0)
                                                                    rax_58 += 0xffff
                                                                    rdx_20 -= 0x10000
                                                                
                                                                int64_t rdx_21 = sx.q(rdx_20) * 3
                                                                int64_t rcx_27 = *(data_143e1d9a0
                                                                    + (sx.q(rax_58 s>> 0x10) << 3))
                                                                void* r8_3 = rcx_27 + (rdx_21 << 3)
                                                                int32_t rdx_22 =
                                                                    *(rcx_27 + (rdx_21 << 3) + 8)
                                                                
                                                                if (((rdx_22 u>> 0x1c).b & 1) != 0
                                                                        && test_bit(rdx_22, 0x1c))
                                                                    do
                                                                        bool z_5
                                                                        
                                                                        if (rdx_22 == *(r8_3 + 8))
                                                                            *(r8_3 + 8) = rdx_22 & 0xefffffff
                                                                            z_5 = true
                                                                        else
                                                                            *(r8_3 + 8)
                                                                            z_5 = false
                                                                        
                                                                        if (z_5)
                                                                            sub_140cc2730(not.d(*(r8_3 + 0xc)), 
                                                                                var_4f0)
                                                                            break
                                                                        
                                                                        rdx_22 = *(r8_3 + 8)
                                                                    while (test_bit(rdx_22, 0x1c))
                                                                
                                                                break
                                                            
                                                            rdx_17 = rbx_5[1].d
                                                        while (not(test_bit(rdx_17, 0x17)))
                                                else
                                                    for (; test_bit(rdx_17, 0x1c); 
                                                            rdx_17 = rbx_5[1].d)
                                                        bool z_3
                                                        
                                                        if (rdx_17 == rbx_5[1].d)
                                                            rbx_5[1].d = rdx_17 & 0xefffffff
                                                            z_3 = true
                                                        else
                                                            rbx_5[1].d
                                                            z_3 = false
                                                        
                                                        if (z_3)
                                                            int64_t rdi_9 = sx.q(var_4f0[1].d)
                                                            int64_t rsi_2 = *rbx_5
                                                            int32_t rax_52 = (rdi_9 + 1).d
                                                            var_4f0[1].d = rax_52
                                                            
                                                            if (rax_52 s> *(var_4f0 + 0xc))
                                                                sub_1405a4d70(var_4f0)
                                                            
                                                            *(*var_4f0 + (rdi_9 << 3)) = rsi_2
                                                            int32_t rcx_22 = *(rbx_5 + 0xc)
                                                            
                                                            if (rcx_22 s< 0)
                                                                sub_140cc2730(not.d(rcx_22), var_4f0)
                                                            
                                                            break
                                            
                                            r14_3 = &r14_3[1]
                                        while (r14_3 != r12_1)
                                        
                                        r13_1 = zx.q(var_4f8_1)
                                        
                                        if (r15_2.b == 0)
                                            rbx_3 = var_4f4_1
                                        label_140cc5102:
                                            
                                            if (r13_1.b == 0)
                                                goto label_140cc6d57
                                        
                                        r13_6 = var_4c8_1
                                        int64_t rsi_3 = 0
                                        int32_t* rdi_10 = *(r13_6 + 8)
                                        uint64_t r15_4 = sx.q(*(r13_6 + 0x10)) << 2 u>> 2
                                        
                                        if (rdi_10 u> &rdi_10[sx.q(*(r13_6 + 0x10))])
                                            r15_4 = 0
                                        
                                        if (r15_4 != 0)
                                            do
                                                int32_t rax_68 = *rdi_10
                                                uint32_t rdx_24 = zx.d(rax_68.w)
                                                
                                                if (rax_68 s< 0)
                                                    rax_68 += 0xffff
                                                    rdx_24 -= 0x10000
                                                
                                                int64_t rbx_6 = sx.q(var_4f0[1].d)
                                                int32_t rax_72 = (rbx_6 + 1).d
                                                int64_t r14_4 = *(
                                                    *(data_143e1d9a0 + (sx.q(rax_68 s>> 0x10) << 3))
                                                    + sx.q(rdx_24) * 0x18)
                                                var_4f0[1].d = rax_72
                                                
                                                if (rax_72 s> *(var_4f0 + 0xc))
                                                    sub_1405a4d70(var_4f0)
                                                
                                                rdi_10 = &rdi_10[1]
                                                rsi_3 += 1
                                                *(*var_4f0 + (rbx_6 << 3)) = r14_4
                                            while (rsi_3 != r15_4)
                                            
                                        label_140cc554f:
                                            r13_6 = var_4c8_1
                                        
                                        goto label_140cc5557
                                    
                                    goto label_140cc4e61
                                
                                if (*(r8_1 + 0xc) s<= 0 || ((rdx_10 u>> 0x17).b & 1) != 0
                                        || test_bit(rdx_10, 0x17))
                                    goto label_140cc4e50
                                
                                while (true)
                                    bool z_6
                                    
                                    if (rdx_10 == *(r8_1 + 8))
                                        *(r8_1 + 8) = rdx_10 | 0x800000
                                        z_6 = true
                                    else
                                        *(r8_1 + 8)
                                        z_6 = false
                                    
                                    if (z_6)
                                        int32_t rax_78 = *(r8_1 + 0xc)
                                        uint32_t rdx_27 = zx.d(rax_78.w)
                                        
                                        if (rax_78 s< 0)
                                            rax_78 += 0xffff
                                            rdx_27 -= 0x10000
                                        
                                        int64_t rdx_28 = sx.q(rdx_27) * 3
                                        int64_t rcx_38 =
                                            *(data_143e1d9a0 + (sx.q(rax_78 s>> 0x10) << 3))
                                        int32_t rax_82 = *(rcx_38 + (rdx_28 << 3) + 8)
                                        void* r8_4 = rcx_38 + (rdx_28 << 3)
                                        
                                        if (not(test_bit(rax_82, 0x1c)))
                                            goto label_140cc6d65
                                        
                                        while (true)
                                            bool z_7
                                            
                                            if (rax_82 == *(r8_4 + 8))
                                                *(r8_4 + 8) = rax_82 & 0xefffffff
                                                z_7 = true
                                            else
                                                *(r8_4 + 8)
                                                z_7 = false
                                            
                                            if (z_7)
                                                r13_1.b = 0
                                                char var_4f8_2 = 0
                                                void* r11_8 = sx.q(not.d(*(r8_4 + 0xc))) * 0x50
                                                    + data_143e1d678
                                                var_4c8_1 = r11_8
                                                int32_t* r9_3 = *(r11_8 + 0x18)
                                                void* r10_3 = &r9_3[sx.q(*(r11_8 + 0x20))]
                                                
                                                if (r9_3 != r10_3)
                                                    do
                                                        int32_t rax_88 = *r9_3
                                                        
                                                        if (rax_88 s>= 0)
                                                            int64_t rdx_30 =
                                                                sx.q(zx.d(rax_88.w)) * 3
                                                            int64_t rcx_42 = *(data_143e1d9a0
                                                                + (sx.q(rax_88 s>> 0x10) << 3))
                                                            void* r8_5 = rcx_42 + (rdx_30 << 3)
                                                            int32_t rdx_31 =
                                                                *(rcx_42 + (rdx_30 << 3) + 8)
                                                            
                                                            if (((rdx_31 u>> 0x1d).b & 1) != 0)
                                                                *r9_3 = 0xffffffff
                                                                r13_1.b = 1
                                                            else if (((rdx_31 u>> 0x1c).b & 1) != 0
                                                                    && test_bit(rdx_31, 0x1c))
                                                                do
                                                                    bool z_8
                                                                    
                                                                    if (rdx_31 == *(r8_5 + 8))
                                                                        *(r8_5 + 8) = rdx_31 & 0xefffffff
                                                                        z_8 = true
                                                                    else
                                                                        *(r8_5 + 8)
                                                                        z_8 = false
                                                                    
                                                                    if (z_8)
                                                                        break
                                                                    
                                                                    rdx_31 = *(r8_5 + 8)
                                                                while (test_bit(rdx_31, 0x1c))
                                                        
                                                        r9_3 = &r9_3[1]
                                                    while (r9_3 != r10_3)
                                                    
                                                    var_4f8_2 = r13_1.b
                                                
                                                int32_t* r14_5 = *(r11_8 + 0x28)
                                                r15_2.b = 0
                                                void* r12_2 = &r14_5[sx.q(*(r11_8 + 0x30))]
                                                
                                                if (r14_5 == r12_2)
                                                    goto label_140cc54b2
                                                
                                                do
                                                    int32_t rax_99 = *r14_5
                                                    
                                                    if (rax_99 s>= 0)
                                                        int64_t rdx_33 = sx.q(zx.d(rax_99.w)) * 3
                                                        int64_t rcx_46 = *(data_143e1d9a0
                                                            + (sx.q(rax_99 s>> 0x10) << 3))
                                                        int64_t* rbx_7 = rcx_46 + (rdx_33 << 3)
                                                        int32_t rdx_34 =
                                                            *(rcx_46 + (rdx_33 << 3) + 8)
                                                        
                                                        if (((rdx_34 u>> 0x1d).b & 1) != 0)
                                                            *r14_5 = 0xffffffff
                                                            r15_2.b = 1
                                                        else if (((rdx_34 u>> 0x1c).b & 1) == 0)
                                                            if (*(rbx_7 + 0xc) s> 0
                                                                    && ((rdx_34 u>> 0x17).b & 1) == 0
                                                                    && not(test_bit(rdx_34, 0x17)))
                                                                do
                                                                    bool z_10
                                                                    
                                                                    if (rdx_34 == rbx_7[1].d)
                                                                        rbx_7[1].d = rdx_34 | 0x800000
                                                                        z_10 = true
                                                                    else
                                                                        rbx_7[1].d
                                                                        z_10 = false
                                                                    
                                                                    if (z_10)
                                                                        int32_t rax_115 = *(rbx_7 + 0xc)
                                                                        uint32_t rdx_37 = zx.d(rax_115.w)
                                                                        
                                                                        if (rax_115 s< 0)
                                                                            rax_115 += 0xffff
                                                                            rdx_37 -= 0x10000
                                                                        
                                                                        int64_t rdx_38 = sx.q(rdx_37) * 3
                                                                        int64_t rcx_55 = *(data_143e1d9a0
                                                                            + (sx.q(rax_115 s>> 0x10) << 3))
                                                                        void* r8_6 = rcx_55 + (rdx_38 << 3)
                                                                        int32_t rdx_39 =
                                                                            *(rcx_55 + (rdx_38 << 3) + 8)
                                                                        
                                                                        if (((rdx_39 u>> 0x1c).b & 1) != 0
                                                                                && test_bit(rdx_39, 0x1c))
                                                                            do
                                                                                bool z_11
                                                                                
                                                                                if (rdx_39 == *(r8_6 + 8))
                                                                                    *(r8_6 + 8) = rdx_39 & 0xefffffff
                                                                                    z_11 = true
                                                                                else
                                                                                    *(r8_6 + 8)
                                                                                    z_11 = false
                                                                                
                                                                                if (z_11)
                                                                                    sub_140cc2730(not.d(*(r8_6 + 0xc)), 
                                                                                        var_4f0)
                                                                                    break
                                                                                
                                                                                rdx_39 = *(r8_6 + 8)
                                                                            while (test_bit(rdx_39, 0x1c))
                                                                        
                                                                        break
                                                                    
                                                                    rdx_34 = rbx_7[1].d
                                                                while (not(test_bit(rdx_34, 0x17)))
                                                        else
                                                            for (; test_bit(rdx_34, 0x1c); 
                                                                    rdx_34 = rbx_7[1].d)
                                                                bool z_9
                                                                
                                                                if (rdx_34 == rbx_7[1].d)
                                                                    rbx_7[1].d = rdx_34 & 0xefffffff
                                                                    z_9 = true
                                                                else
                                                                    rbx_7[1].d
                                                                    z_9 = false
                                                                
                                                                if (z_9)
                                                                    int64_t rdi_11 = sx.q(var_4f0[1].d)
                                                                    int64_t rsi_4 = *rbx_7
                                                                    int32_t rax_109 = (rdi_11 + 1).d
                                                                    var_4f0[1].d = rax_109
                                                                    
                                                                    if (rax_109 s> *(var_4f0 + 0xc))
                                                                        sub_1405a4d70(var_4f0)
                                                                    
                                                                    *(*var_4f0 + (rdi_11 << 3)) = rsi_4
                                                                    int32_t rcx_50 = *(rbx_7 + 0xc)
                                                                    
                                                                    if (rcx_50 s< 0)
                                                                        sub_140cc2730(not.d(rcx_50), var_4f0)
                                                                    
                                                                    break
                                                    
                                                    r14_5 = &r14_5[1]
                                                while (r14_5 != r12_2)
                                                
                                                r13_1 = zx.q(var_4f8_2)
                                                
                                                if (r15_2.b == 0)
                                                    rbx_3 = var_4f4_1
                                                label_140cc54b2:
                                                    
                                                    if (r13_1.b == 0)
                                                        goto label_140cc6d57
                                                
                                                r13_6 = var_4c8_1
                                                int64_t rsi_5 = 0
                                                int32_t* rdi_12 = *(r13_6 + 8)
                                                uint64_t r15_6 = sx.q(*(r13_6 + 0x10)) << 2 u>> 2
                                                
                                                if (rdi_12 u> &rdi_12[sx.q(*(r13_6 + 0x10))])
                                                    r15_6 = 0
                                                
                                                if (r15_6 == 0)
                                                    goto label_140cc5557
                                                
                                                do
                                                    int32_t rax_125 = *rdi_12
                                                    uint32_t rdx_41 = zx.d(rax_125.w)
                                                    
                                                    if (rax_125 s< 0)
                                                        rax_125 += 0xffff
                                                        rdx_41 -= 0x10000
                                                    
                                                    int64_t rbx_8 = sx.q(var_4f0[1].d)
                                                    int32_t rax_129 = (rbx_8 + 1).d
                                                    int64_t r14_6 = *(*(data_143e1d9a0
                                                        + (sx.q(rax_125 s>> 0x10) << 3))
                                                        + sx.q(rdx_41) * 0x18)
                                                    var_4f0[1].d = rax_129
                                                    
                                                    if (rax_129 s> *(var_4f0 + 0xc))
                                                        sub_1405a4d70(var_4f0)
                                                    
                                                    rdi_12 = &rdi_12[1]
                                                    rsi_5 += 1
                                                    *(*var_4f0 + (rbx_8 << 3)) = r14_6
                                                while (rsi_5 != r15_6)
                                                
                                                goto label_140cc554f
                                            
                                            rax_82 = *(r8_4 + 8)
                                            
                                            if (not(test_bit(rax_82, 0x1c)))
                                                r8 = var_4e0_1
                                                break
                                        
                                        goto label_140cc4d05
                                    
                                    rdx_10 = *(r8_1 + 8)
                                    
                                    if (test_bit(rdx_10, 0x17))
                                        r8 = var_4e0_1
                                        break
                                
                                continue
                        case 2
                            rbx_3 = zx.d(rax_13.b)
                            rdi_8 = (rax_13 u>> 0xd) + r11_1
                            var_4f4_1 = rbx_3
                            void* rax_380 = *rdi_8
                            
                            if (rax_380 u< data_143e1d660 || rax_380 u>= data_143e1d668)
                                rcx_6.b = 0
                            else
                                rcx_6.b = 1
                            
                            if (rax_380 == 0)
                                continue
                            else if (rcx_6.b != 0)
                                continue
                            else
                                int32_t rax_381 = *(rax_380 + 0xc)
                                uint32_t rdx_129 = zx.d(rax_381.w)
                                
                                if (rax_381 s< 0)
                                    rax_381 += 0xffff
                                    rdx_129 -= 0x10000
                                
                                int64_t rdx_130 = sx.q(rdx_129) * 3
                                int64_t rcx_196 = *(data_143e1d9a0 + (sx.q(rax_381 s>> 0x10) << 3))
                                void* r8_19 = rcx_196 + (rdx_130 << 3)
                                int32_t rdx_131 = *(rcx_196 + (rdx_130 << 3) + 8)
                                
                                if (((rdx_131 u>> 0x1c).b & 1) == 0)
                                    if (*(r8_19 + 0xc) s<= 0 || ((rdx_131 u>> 0x17).b & 1) != 0
                                            || test_bit(rdx_131, 0x17))
                                        goto label_140cc4e50
                                    
                                    while (true)
                                        bool z_39
                                        
                                        if (rdx_131 == *(r8_19 + 8))
                                            *(r8_19 + 8) = rdx_131 | 0x800000
                                            z_39 = true
                                        else
                                            *(r8_19 + 8)
                                            z_39 = false
                                        
                                        if (z_39)
                                            int32_t rax_440 = *(r8_19 + 0xc)
                                            uint32_t rdx_147 = zx.d(rax_440.w)
                                            
                                            if (rax_440 s< 0)
                                                rax_440 += 0xffff
                                                rdx_147 -= 0x10000
                                            
                                            int64_t rdx_148 = sx.q(rdx_147) * 3
                                            int64_t rcx_224 =
                                                *(data_143e1d9a0 + (sx.q(rax_440 s>> 0x10) << 3))
                                            int32_t rax_444 = *(rcx_224 + (rdx_148 << 3) + 8)
                                            void* r8_22 = rcx_224 + (rdx_148 << 3)
                                            
                                            if (not(test_bit(rax_444, 0x1c)))
                                                goto label_140cc6d65
                                            
                                            while (true)
                                                bool z_40
                                                
                                                if (rax_444 == *(r8_22 + 8))
                                                    *(r8_22 + 8) = rax_444 & 0xefffffff
                                                    z_40 = true
                                                else
                                                    *(r8_22 + 8)
                                                    z_40 = false
                                                
                                                if (z_40)
                                                    r13_1.b = 0
                                                    char var_4f8_8 = 0
                                                    void* r11_27 =
                                                        sx.q(not.d(*(r8_22 + 0xc))) * 0x50
                                                        + data_143e1d678
                                                    int32_t* r9_9 = *(r11_27 + 0x18)
                                                    void* r10_9 = &r9_9[sx.q(*(r11_27 + 0x20))]
                                                    
                                                    if (r9_9 != r10_9)
                                                        do
                                                            int32_t rax_450 = *r9_9
                                                            
                                                            if (rax_450 s>= 0)
                                                                int64_t rdx_150 =
                                                                    sx.q(zx.d(rax_450.w)) * 3
                                                                int64_t rcx_228 = *(data_143e1d9a0
                                                                    + (sx.q(rax_450 s>> 0x10) << 3))
                                                                void* r8_23 = rcx_228 + (rdx_150 << 3)
                                                                int32_t rdx_151 =
                                                                    *(rcx_228 + (rdx_150 << 3) + 8)
                                                                
                                                                if (((rdx_151 u>> 0x1d).b & 1) != 0)
                                                                    *r9_9 = 0xffffffff
                                                                    r13_1.b = 1
                                                                else if (((rdx_151 u>> 0x1c).b & 1) != 0
                                                                        && test_bit(rdx_151, 0x1c))
                                                                    do
                                                                        bool z_41
                                                                        
                                                                        if (rdx_151 == *(r8_23 + 8))
                                                                            *(r8_23 + 8) = rdx_151 & 0xefffffff
                                                                            z_41 = true
                                                                        else
                                                                            *(r8_23 + 8)
                                                                            z_41 = false
                                                                        
                                                                        if (z_41)
                                                                            break
                                                                        
                                                                        rdx_151 = *(r8_23 + 8)
                                                                    while (test_bit(rdx_151, 0x1c))
                                                            
                                                            r9_9 = &r9_9[1]
                                                        while (r9_9 != r10_9)
                                                        
                                                        var_4f8_8 = r13_1.b
                                                    
                                                    int32_t* r14_17 = *(r11_27 + 0x28)
                                                    r15_2.b = 0
                                                    void* r12_4 = &r14_17[sx.q(*(r11_27 + 0x30))]
                                                    
                                                    if (r14_17 == r12_4)
                                                        goto label_140cc6d52
                                                    
                                                    do
                                                        int32_t rax_461 = *r14_17
                                                        
                                                        if (rax_461 s>= 0)
                                                            int64_t rdx_153 =
                                                                sx.q(zx.d(rax_461.w)) * 3
                                                            int64_t rcx_232 = *(data_143e1d9a0
                                                                + (sx.q(rax_461 s>> 0x10) << 3))
                                                            int64_t* rbx_23 =
                                                                rcx_232 + (rdx_153 << 3)
                                                            int32_t rdx_154 =
                                                                *(rcx_232 + (rdx_153 << 3) + 8)
                                                            
                                                            if (((rdx_154 u>> 0x1d).b & 1) != 0)
                                                                *r14_17 = 0xffffffff
                                                                r15_2.b = 1
                                                            else if (((rdx_154 u>> 0x1c).b & 1)
                                                                    == 0)
                                                                if (*(rbx_23 + 0xc) s> 0
                                                                        && ((rdx_154 u>> 0x17).b & 1) == 0
                                                                        && not(test_bit(rdx_154, 0x17)))
                                                                    do
                                                                        bool z_43
                                                                        
                                                                        if (rdx_154 == rbx_23[1].d)
                                                                            rbx_23[1].d = rdx_154 | 0x800000
                                                                            z_43 = true
                                                                        else
                                                                            rbx_23[1].d
                                                                            z_43 = false
                                                                        
                                                                        if (z_43)
                                                                            int32_t rax_477 = *(rbx_23 + 0xc)
                                                                            uint32_t rdx_157 = zx.d(rax_477.w)
                                                                            
                                                                            if (rax_477 s< 0)
                                                                                rax_477 += 0xffff
                                                                                rdx_157 -= 0x10000
                                                                            
                                                                            int64_t rdx_158 = sx.q(rdx_157) * 3
                                                                            int64_t rcx_241 = *(data_143e1d9a0
                                                                                + (sx.q(rax_477 s>> 0x10) << 3))
                                                                            void* r8_24 = rcx_241 + (rdx_158 << 3)
                                                                            int32_t rdx_159 =
                                                                                *(rcx_241 + (rdx_158 << 3) + 8)
                                                                            
                                                                            if (((rdx_159 u>> 0x1c).b & 1) != 0
                                                                                    && test_bit(rdx_159, 0x1c))
                                                                                do
                                                                                    bool z_44
                                                                                    
                                                                                    if (rdx_159 == *(r8_24 + 8))
                                                                                        *(r8_24 + 8) = rdx_159 & 0xefffffff
                                                                                        z_44 = true
                                                                                    else
                                                                                        *(r8_24 + 8)
                                                                                        z_44 = false
                                                                                    
                                                                                    if (z_44)
                                                                                        sub_140cc2730(not.d(*(r8_24 + 0xc)), 
                                                                                            var_4f0)
                                                                                        break
                                                                                    
                                                                                    rdx_159 = *(r8_24 + 8)
                                                                                while (test_bit(rdx_159, 0x1c))
                                                                            
                                                                            break
                                                                        
                                                                        rdx_154 = rbx_23[1].d
                                                                    while (not(test_bit(rdx_154, 0x17)))
                                                            else
                                                                for (; test_bit(rdx_154, 0x1c); 
                                                                        rdx_154 = rbx_23[1].d)
                                                                    bool z_42
                                                                    
                                                                    if (rdx_154 == rbx_23[1].d)
                                                                        rbx_23[1].d = rdx_154 & 0xefffffff
                                                                        z_42 = true
                                                                    else
                                                                        rbx_23[1].d
                                                                        z_42 = false
                                                                    
                                                                    if (z_42)
                                                                        int64_t rdi_27 = sx.q(var_4f0[1].d)
                                                                        int64_t rsi_16 = *rbx_23
                                                                        int32_t rax_471 = (rdi_27 + 1).d
                                                                        var_4f0[1].d = rax_471
                                                                        
                                                                        if (rax_471 s> *(var_4f0 + 0xc))
                                                                            sub_1405a4d70(var_4f0)
                                                                        
                                                                        *(*var_4f0 + (rdi_27 << 3)) = rsi_16
                                                                        int32_t rcx_236 = *(rbx_23 + 0xc)
                                                                        
                                                                        if (rcx_236 s< 0)
                                                                            sub_140cc2730(not.d(rcx_236), var_4f0)
                                                                        
                                                                        break
                                                        
                                                        r14_17 = &r14_17[1]
                                                    while (r14_17 != r12_4)
                                                    
                                                    r13_1 = zx.q(var_4f8_8)
                                                    
                                                    if (r15_2.b == 0)
                                                        rbx_3 = var_4f4_1
                                                    label_140cc6d52:
                                                        
                                                        if (r13_1.b == 0)
                                                            goto label_140cc6d57
                                                    
                                                    r13_6 = r11_27
                                                    int64_t rsi_17 = 0
                                                    int32_t* rdi_28 = *(r13_6 + 8)
                                                    uint64_t r15_25 =
                                                        sx.q(*(r13_6 + 0x10)) << 2 u>> 2
                                                    
                                                    if (rdi_28 u> &rdi_28[sx.q(*(r13_6 + 0x10))])
                                                        r15_25 = 0
                                                    
                                                    if (r15_25 == 0)
                                                        goto label_140cc5557
                                                    
                                                    r9_1 = var_4f0
                                                    
                                                    do
                                                        int32_t rax_487 = *rdi_28
                                                        uint32_t rdx_161 = zx.d(rax_487.w)
                                                        
                                                        if (rax_487 s< 0)
                                                            rax_487 += 0xffff
                                                            rdx_161 -= 0x10000
                                                        
                                                        int64_t rbx_24 = sx.q(r9_1[1].d)
                                                        int32_t rax_491 = (rbx_24 + 1).d
                                                        int64_t r14_18 = *(*(data_143e1d9a0
                                                            + (sx.q(rax_487 s>> 0x10) << 3))
                                                            + sx.q(rdx_161) * 0x18)
                                                        r9_1[1].d = rax_491
                                                        
                                                        if (rax_491 s> *(r9_1 + 0xc))
                                                            sub_1405a4d70(r9_1)
                                                            r9_1 = var_4f0
                                                        
                                                        rdi_28 = &rdi_28[1]
                                                        rsi_17 += 1
                                                        *(*r9_1 + (rbx_24 << 3)) = r14_18
                                                    while (rsi_17 != r15_25)
                                                    
                                                    goto label_140cc555c
                                                
                                                rax_444 = *(r8_22 + 8)
                                                
                                                if (not(test_bit(rax_444, 0x1c)))
                                                    r8 = var_4e0_1
                                                    break
                                            
                                            goto label_140cc4d05
                                        
                                        rdx_131 = *(r8_19 + 8)
                                        
                                        if (test_bit(rdx_131, 0x17))
                                            r8 = var_4e0_1
                                            break
                                    
                                    continue
                                
                                if (not(test_bit(rdx_131, 0x1c)))
                                label_140cc4e50:
                                    r8 = var_4e0_1
                                    continue
                                else
                                    while (true)
                                        bool z_34
                                        
                                        if (rdx_131 == *(r8_19 + 8))
                                            *(r8_19 + 8) = rdx_131 & 0xefffffff
                                            z_34 = true
                                        else
                                            *(r8_19 + 8)
                                            z_34 = false
                                        
                                        if (z_34)
                                            break
                                        
                                        rdx_131 = *(r8_19 + 8)
                                        
                                        if (not(test_bit(rdx_131, 0x1c)))
                                            r8 = var_4e0_1
                                            goto label_140cc4d05
                                    
                                    if ((*(r8_19 + 0xb) & 1) == 0)
                                    label_140cc4e61:
                                        int64_t rbx_4 = sx.q(r9_1[1].d)
                                        int32_t rax_25 = (rbx_4 + 1).d
                                        r9_1[1].d = rax_25
                                        
                                        if (rax_25 s> *(r9_1 + 0xc))
                                            sub_1405a4d70(r9_1)
                                            r9_1 = var_4f0
                                            r11_1 = var_4d0_1
                                        
                                        r8 = var_4e0_1
                                        *(*r9_1 + (rbx_4 << 3)) = *rdi_8
                                        rbx_3 = var_4f4_1
                                        continue
                                    else
                                        r13_1.b = 0
                                        char var_4f8_7 = 0
                                        void* r11_24 =
                                            sx.q(not.d(*(r8_19 + 0xc))) * 0x50 + data_143e1d678
                                        int32_t* r9_8 = *(r11_24 + 0x18)
                                        void* r10_8 = &r9_8[sx.q(*(r11_24 + 0x20))]
                                        
                                        if (r9_8 != r10_8)
                                            do
                                                int32_t rax_393 = *r9_8
                                                
                                                if (rax_393 s>= 0)
                                                    int64_t rdx_133 = sx.q(zx.d(rax_393.w)) * 3
                                                    int64_t rcx_200 = *(data_143e1d9a0
                                                        + (sx.q(rax_393 s>> 0x10) << 3))
                                                    void* r8_20 = rcx_200 + (rdx_133 << 3)
                                                    int32_t rdx_134 =
                                                        *(rcx_200 + (rdx_133 << 3) + 8)
                                                    
                                                    if (((rdx_134 u>> 0x1d).b & 1) != 0)
                                                        *r9_8 = 0xffffffff
                                                        r13_1.b = 1
                                                    else if (((rdx_134 u>> 0x1c).b & 1) != 0
                                                            && test_bit(rdx_134, 0x1c))
                                                        do
                                                            bool z_35
                                                            
                                                            if (rdx_134 == *(r8_20 + 8))
                                                                *(r8_20 + 8) = rdx_134 & 0xefffffff
                                                                z_35 = true
                                                            else
                                                                *(r8_20 + 8)
                                                                z_35 = false
                                                            
                                                            if (z_35)
                                                                break
                                                            
                                                            rdx_134 = *(r8_20 + 8)
                                                        while (test_bit(rdx_134, 0x1c))
                                                
                                                r9_8 = &r9_8[1]
                                            while (r9_8 != r10_8)
                                            
                                            var_4f8_7 = r13_1.b
                                        
                                        int32_t* r14_15 = *(r11_24 + 0x28)
                                        r15_2.b = 0
                                        void* r12_3 = &r14_15[sx.q(*(r11_24 + 0x30))]
                                        
                                        if (r14_15 == r12_3)
                                            goto label_140cc69a2
                                        
                                        do
                                            int32_t rax_404 = *r14_15
                                            
                                            if (rax_404 s>= 0)
                                                int64_t rdx_136 = sx.q(zx.d(rax_404.w)) * 3
                                                int64_t rcx_204 = *(data_143e1d9a0
                                                    + (sx.q(rax_404 s>> 0x10) << 3))
                                                int64_t* rbx_21 = rcx_204 + (rdx_136 << 3)
                                                int32_t rdx_137 = *(rcx_204 + (rdx_136 << 3) + 8)
                                                
                                                if (((rdx_137 u>> 0x1d).b & 1) != 0)
                                                    *r14_15 = 0xffffffff
                                                    r15_2.b = 1
                                                else if (((rdx_137 u>> 0x1c).b & 1) == 0)
                                                    if (*(rbx_21 + 0xc) s> 0
                                                            && ((rdx_137 u>> 0x17).b & 1) == 0
                                                            && not(test_bit(rdx_137, 0x17)))
                                                        do
                                                            bool z_37
                                                            
                                                            if (rdx_137 == rbx_21[1].d)
                                                                rbx_21[1].d = rdx_137 | 0x800000
                                                                z_37 = true
                                                            else
                                                                rbx_21[1].d
                                                                z_37 = false
                                                            
                                                            if (z_37)
                                                                int32_t rax_420 = *(rbx_21 + 0xc)
                                                                uint32_t rdx_140 = zx.d(rax_420.w)
                                                                
                                                                if (rax_420 s< 0)
                                                                    rax_420 += 0xffff
                                                                    rdx_140 -= 0x10000
                                                                
                                                                int64_t rdx_141 = sx.q(rdx_140) * 3
                                                                int64_t rcx_213 = *(data_143e1d9a0
                                                                    + (sx.q(rax_420 s>> 0x10) << 3))
                                                                void* r8_21 = rcx_213 + (rdx_141 << 3)
                                                                int32_t rdx_142 =
                                                                    *(rcx_213 + (rdx_141 << 3) + 8)
                                                                
                                                                if (((rdx_142 u>> 0x1c).b & 1) != 0
                                                                        && test_bit(rdx_142, 0x1c))
                                                                    do
                                                                        bool z_38
                                                                        
                                                                        if (rdx_142 == *(r8_21 + 8))
                                                                            *(r8_21 + 8) = rdx_142 & 0xefffffff
                                                                            z_38 = true
                                                                        else
                                                                            *(r8_21 + 8)
                                                                            z_38 = false
                                                                        
                                                                        if (z_38)
                                                                            sub_140cc2730(not.d(*(r8_21 + 0xc)), 
                                                                                var_4f0)
                                                                            break
                                                                        
                                                                        rdx_142 = *(r8_21 + 8)
                                                                    while (test_bit(rdx_142, 0x1c))
                                                                
                                                                break
                                                            
                                                            rdx_137 = rbx_21[1].d
                                                        while (not(test_bit(rdx_137, 0x17)))
                                                else
                                                    for (; test_bit(rdx_137, 0x1c); 
                                                            rdx_137 = rbx_21[1].d)
                                                        bool z_36
                                                        
                                                        if (rdx_137 == rbx_21[1].d)
                                                            rbx_21[1].d = rdx_137 & 0xefffffff
                                                            z_36 = true
                                                        else
                                                            rbx_21[1].d
                                                            z_36 = false
                                                        
                                                        if (z_36)
                                                            int64_t rdi_25 = sx.q(var_4f0[1].d)
                                                            int64_t rsi_14 = *rbx_21
                                                            int32_t rax_414 = (rdi_25 + 1).d
                                                            var_4f0[1].d = rax_414
                                                            
                                                            if (rax_414 s> *(var_4f0 + 0xc))
                                                                sub_1405a4d70(var_4f0)
                                                            
                                                            *(*var_4f0 + (rdi_25 << 3)) = rsi_14
                                                            int32_t rcx_208 = *(rbx_21 + 0xc)
                                                            
                                                            if (rcx_208 s< 0)
                                                                sub_140cc2730(not.d(rcx_208), var_4f0)
                                                            
                                                            break
                                            
                                            r14_15 = &r14_15[1]
                                        while (r14_15 != r12_3)
                                        
                                        r13_1 = zx.q(var_4f8_7)
                                        
                                        if (r15_2.b == 0)
                                            rbx_3 = var_4f4_1
                                        label_140cc69a2:
                                            
                                            if (r13_1.b == 0)
                                            label_140cc6d57:
                                                r14_2 = var_4c0_1
                                                r15_2 = var_4b8_1
                                                r11_1 = var_4d0_1
                                            label_140cc6d65:
                                                r13_1 = var_4a8_1
                                                r12 = var_4d8
                                                r9_1 = var_4f0
                                                r8 = var_4e0_1
                                                continue
                                                continue
                                        
                                        r13_6 = r11_24
                                        int64_t rsi_15 = 0
                                        int32_t* rdi_26 = *(r13_6 + 8)
                                        uint64_t r15_23 = sx.q(*(r13_6 + 0x10)) << 2 u>> 2
                                        
                                        if (rdi_26 u> &rdi_26[sx.q(*(r13_6 + 0x10))])
                                            r15_23 = 0
                                        
                                        if (r15_23 == 0)
                                        label_140cc5557:
                                            r9_1 = var_4f0
                                        label_140cc555c:
                                            *(r13_6 + 0x48) = 1
                                            data_143e1d69c = 1
                                        label_140cc5568:
                                            r8 = var_4e0_1
                                            r11_1 = var_4d0_1
                                            rbx_3 = var_4f4_1
                                            r14_2 = var_4c0_1
                                        label_140cc557b:
                                            r15_2 = var_4b8_1
                                            r13_1 = var_4a8_1
                                            r12 = var_4d8
                                            continue
                                        
                                        r9_1 = var_4f0
                                        
                                        do
                                            int32_t rax_430 = *rdi_26
                                            uint32_t rdx_144 = zx.d(rax_430.w)
                                            
                                            if (rax_430 s< 0)
                                                rax_430 += 0xffff
                                                rdx_144 -= 0x10000
                                            
                                            int64_t rbx_22 = sx.q(r9_1[1].d)
                                            int32_t rax_434 = (rbx_22 + 1).d
                                            int64_t r14_16 = *(
                                                *(data_143e1d9a0 + (sx.q(rax_430 s>> 0x10) << 3))
                                                + sx.q(rdx_144) * 0x18)
                                            r9_1[1].d = rax_434
                                            
                                            if (rax_434 s> *(r9_1 + 0xc))
                                                sub_1405a4d70(r9_1)
                                                r9_1 = var_4f0
                                            
                                            rdi_26 = &rdi_26[1]
                                            rsi_15 += 1
                                            *(*r9_1 + (rbx_22 << 3)) = r14_16
                                        while (rsi_15 != r15_23)
                                        
                                        goto label_140cc555c
                        case 3
                            rbx_3 = zx.d(rax_13.b)
                            void* rdx_46 = (rax_13 u>> 0xd) + r11_1
                            var_4f4_1 = rbx_3
                            int64_t rcx_63 = 0
                            void* var_4e8_1 = rdx_46
                            int64_t var_498_1 = 0
                            int64_t rax_131 = sx.q(*(rdx_46 + 8))
                            
                            if (rax_131 s<= 0)
                                continue
                            else
                                do
                                    int64_t rax_132 = *rdx_46
                                    int64_t* rdi_13 = rax_132 + (rcx_63 << 3)
                                    void* rax_133 = *(rax_132 + (rcx_63 << 3))
                                    
                                    if (rax_133 u< data_143e1d660 || rax_133 u>= data_143e1d668)
                                        rcx_63.b = 0
                                    else
                                        rcx_63.b = 1
                                    
                                    if (rax_133 != 0 && rcx_63.b == 0)
                                        int32_t rax_134 = *(rax_133 + 0xc)
                                        uint32_t rdx_47 = zx.d(rax_134.w)
                                        
                                        if (rax_134 s< 0)
                                            rax_134 += 0xffff
                                            rdx_47 -= 0x10000
                                        
                                        int64_t rdx_48 = sx.q(rdx_47) * 3
                                        int64_t rcx_65 =
                                            *(data_143e1d9a0 + (sx.q(rax_134 s>> 0x10) << 3))
                                        void* r8_7 = rcx_65 + (rdx_48 << 3)
                                        int32_t rdx_49 = *(rcx_65 + (rdx_48 << 3) + 8)
                                        
                                        if (((rdx_49 u>> 0x1d).b & 1) != 0)
                                            *rdi_13 = 0
                                        else
                                            void* var_4c8_2
                                            
                                            if (((rdx_49 u>> 0x1c).b & 1) == 0)
                                                if (*(r8_7 + 0xc) s> 0
                                                        && ((rdx_49 u>> 0x17).b & 1) == 0
                                                        && not(test_bit(rdx_49, 0x17)))
                                                    while (true)
                                                        bool z_17
                                                        
                                                        if (rdx_49 == *(r8_7 + 8))
                                                            *(r8_7 + 8) = rdx_49 | 0x800000
                                                            z_17 = true
                                                        else
                                                            *(r8_7 + 8)
                                                            z_17 = false
                                                        
                                                        if (z_17)
                                                            break
                                                        
                                                        rdx_49 = *(r8_7 + 8)
                                                        
                                                        if (test_bit(rdx_49, 0x17))
                                                            goto label_140cc5d60
                                                    
                                                    int32_t rax_197 = *(r8_7 + 0xc)
                                                    uint32_t rdx_66 = zx.d(rax_197.w)
                                                    
                                                    if (rax_197 s< 0)
                                                        rax_197 += 0xffff
                                                        rdx_66 -= 0x10000
                                                    
                                                    int64_t rdx_67 = sx.q(rdx_66) * 3
                                                    int64_t rcx_95 = *(data_143e1d9a0
                                                        + (sx.q(rax_197 s>> 0x10) << 3))
                                                    int32_t rax_201 = *(rcx_95 + (rdx_67 << 3) + 8)
                                                    void* r8_10 = rcx_95 + (rdx_67 << 3)
                                                    
                                                    if (test_bit(rax_201, 0x1c))
                                                        while (true)
                                                            bool z_18
                                                            
                                                            if (rax_201 == *(r8_10 + 8))
                                                                *(r8_10 + 8) = rax_201 & 0xefffffff
                                                                z_18 = true
                                                            else
                                                                *(r8_10 + 8)
                                                                z_18 = false
                                                            
                                                            if (z_18)
                                                                break
                                                            
                                                            rax_201 = *(r8_10 + 8)
                                                            
                                                            if (not(test_bit(rax_201, 0x1c)))
                                                                goto label_140cc5d60
                                                        
                                                        r13_1.b = 0
                                                        char var_4f8_4 = 0
                                                        void* r11_14 =
                                                            sx.q(not.d(*(r8_10 + 0xc))) * 0x50
                                                            + data_143e1d678
                                                        var_4c8_2 = r11_14
                                                        int32_t* r8_11 = *(r11_14 + 0x18)
                                                        void* r10_5 = &r8_11[sx.q(*(r11_14 + 0x20))]
                                                        
                                                        if (r8_11 != r10_5)
                                                            do
                                                                int32_t rax_207 = *r8_11
                                                                
                                                                if (rax_207 s>= 0)
                                                                    int64_t rdx_69 =
                                                                        sx.q(zx.d(rax_207.w)) * 3
                                                                    int64_t rcx_99 = *(data_143e1d9a0
                                                                        + (sx.q(rax_207 s>> 0x10) << 3))
                                                                    void* r9_5 = rcx_99 + (rdx_69 << 3)
                                                                    int32_t rdx_70 =
                                                                        *(rcx_99 + (rdx_69 << 3) + 8)
                                                                    
                                                                    if (((rdx_70 u>> 0x1d).b & 1) != 0)
                                                                        *r8_11 = 0xffffffff
                                                                        r13_1.b = 1
                                                                    else if (((rdx_70 u>> 0x1c).b & 1) != 0
                                                                            && test_bit(rdx_70, 0x1c))
                                                                        do
                                                                            bool z_19
                                                                            
                                                                            if (rdx_70 == *(r9_5 + 8))
                                                                                *(r9_5 + 8) = rdx_70 & 0xefffffff
                                                                                z_19 = true
                                                                            else
                                                                                *(r9_5 + 8)
                                                                                z_19 = false
                                                                            
                                                                            if (z_19)
                                                                                break
                                                                            
                                                                            rdx_70 = *(r9_5 + 8)
                                                                        while (test_bit(rdx_70, 0x1c))
                                                                
                                                                r8_11 = &r8_11[1]
                                                            while (r8_11 != r10_5)
                                                            
                                                            var_4f8_4 = r13_1.b
                                                        
                                                        int32_t* r14_9 = *(r11_14 + 0x28)
                                                        r12.b = 0
                                                        void* r15_10 =
                                                            &r14_9[sx.q(*(r11_14 + 0x30))]
                                                        
                                                        if (r14_9 != r15_10)
                                                            do
                                                                int32_t rax_218 = *r14_9
                                                                
                                                                if (rax_218 s>= 0)
                                                                    int64_t rdx_72 =
                                                                        sx.q(zx.d(rax_218.w)) * 3
                                                                    int64_t rcx_103 = *(data_143e1d9a0
                                                                        + (sx.q(rax_218 s>> 0x10) << 3))
                                                                    int64_t* rbx_12 =
                                                                        rcx_103 + (rdx_72 << 3)
                                                                    int32_t rdx_73 =
                                                                        *(rcx_103 + (rdx_72 << 3) + 8)
                                                                    
                                                                    if (((rdx_73 u>> 0x1d).b & 1) != 0)
                                                                        *r14_9 = 0xffffffff
                                                                        r12.b = 1
                                                                    else if (((rdx_73 u>> 0x1c).b & 1) == 0)
                                                                        if (*(rbx_12 + 0xc) s> 0
                                                                                && ((rdx_73 u>> 0x17).b & 1) == 0
                                                                                && not(test_bit(rdx_73, 0x17)))
                                                                            do
                                                                                bool z_21
                                                                                
                                                                                if (rdx_73 == rbx_12[1].d)
                                                                                    rbx_12[1].d = rdx_73 | 0x800000
                                                                                    z_21 = true
                                                                                else
                                                                                    rbx_12[1].d
                                                                                    z_21 = false
                                                                                
                                                                                if (z_21)
                                                                                    int32_t rax_234 = *(rbx_12 + 0xc)
                                                                                    uint32_t rdx_76 = zx.d(rax_234.w)
                                                                                    
                                                                                    if (rax_234 s< 0)
                                                                                        rax_234 += 0xffff
                                                                                        rdx_76 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_77 = sx.q(rdx_76) * 3
                                                                                    int64_t rcx_112 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_234 s>> 0x10) << 3))
                                                                                    void* r8_12 = rcx_112 + (rdx_77 << 3)
                                                                                    int32_t rdx_78 =
                                                                                        *(rcx_112 + (rdx_77 << 3) + 8)
                                                                                    
                                                                                    if (((rdx_78 u>> 0x1c).b & 1) != 0
                                                                                            && test_bit(rdx_78, 0x1c))
                                                                                        do
                                                                                            bool z_22
                                                                                            
                                                                                            if (rdx_78 == *(r8_12 + 8))
                                                                                                *(r8_12 + 8) = rdx_78 & 0xefffffff
                                                                                                z_22 = true
                                                                                            else
                                                                                                *(r8_12 + 8)
                                                                                                z_22 = false
                                                                                            
                                                                                            if (z_22)
                                                                                                sub_140cc2730(not.d(*(r8_12 + 0xc)), 
                                                                                                    var_4f0)
                                                                                                break
                                                                                            
                                                                                            rdx_78 = *(r8_12 + 8)
                                                                                        while (test_bit(rdx_78, 0x1c))
                                                                                    
                                                                                    break
                                                                                
                                                                                rdx_73 = rbx_12[1].d
                                                                            while (not(test_bit(rdx_73, 0x17)))
                                                                    else
                                                                        for (; test_bit(rdx_73, 0x1c); 
                                                                                rdx_73 = rbx_12[1].d)
                                                                            bool z_20
                                                                            
                                                                            if (rdx_73 == rbx_12[1].d)
                                                                                rbx_12[1].d = rdx_73 & 0xefffffff
                                                                                z_20 = true
                                                                            else
                                                                                rbx_12[1].d
                                                                                z_20 = false
                                                                            
                                                                            if (z_20)
                                                                                int64_t rdi_16 = sx.q(var_4f0[1].d)
                                                                                int64_t rsi_8 = *rbx_12
                                                                                int32_t rax_228 = (rdi_16 + 1).d
                                                                                var_4f0[1].d = rax_228
                                                                                
                                                                                if (rax_228 s> *(var_4f0 + 0xc))
                                                                                    sub_1405a4d70(var_4f0)
                                                                                
                                                                                *(*var_4f0 + (rdi_16 << 3)) = rsi_8
                                                                                int32_t rcx_107 = *(rbx_12 + 0xc)
                                                                                
                                                                                if (rcx_107 s< 0)
                                                                                    sub_140cc2730(not.d(rcx_107), var_4f0)
                                                                                
                                                                                break
                                                                
                                                                r14_9 = &r14_9[1]
                                                            while (r14_9 != r15_10)
                                                            
                                                            if (r12.b != 0 || var_4f8_4 != 0)
                                                                goto label_140cc5cb7
                                                        else if (r13_1.b != 0)
                                                        label_140cc5cb7:
                                                            int64_t rsi_9 = 0
                                                            int32_t* rdi_17 = *(var_4c8_2 + 8)
                                                            uint64_t r15_12 =
                                                                sx.q(*(var_4c8_2 + 0x10)) << 2 u>> 2
                                                            
                                                            if (rdi_17 u>
                                                                    &rdi_17[sx.q(*(var_4c8_2 + 0x10))])
                                                                r15_12 = 0
                                                            
                                                            if (r15_12 == 0)
                                                                *(var_4c8_2 + 0x48) = 1
                                                                data_143e1d69c = 1
                                                            else
                                                                do
                                                                    int32_t rax_244 = *rdi_17
                                                                    uint32_t rdx_80 = zx.d(rax_244.w)
                                                                    
                                                                    if (rax_244 s< 0)
                                                                        rax_244 += 0xffff
                                                                        rdx_80 -= 0x10000
                                                                    
                                                                    int64_t rbx_13 = sx.q(var_4f0[1].d)
                                                                    int32_t rax_248 = (rbx_13 + 1).d
                                                                    int64_t r14_10 = *(*(data_143e1d9a0
                                                                        + (sx.q(rax_244 s>> 0x10) << 3))
                                                                        + sx.q(rdx_80) * 0x18)
                                                                    var_4f0[1].d = rax_248
                                                                    
                                                                    if (rax_248 s> *(var_4f0 + 0xc))
                                                                        sub_1405a4d70(var_4f0)
                                                                    
                                                                    rdi_17 = &rdi_17[1]
                                                                    rsi_9 += 1
                                                                    *(*var_4f0 + (rbx_13 << 3)) = r14_10
                                                                while (rsi_9 != r15_12)
                                                                
                                                            label_140cc5d4f:
                                                                *(var_4c8_2 + 0x48) = 1
                                                                data_143e1d69c = 1
                                            else if (test_bit(rdx_49, 0x1c))
                                                while (true)
                                                    bool z_12
                                                    
                                                    if (rdx_49 == *(r8_7 + 8))
                                                        *(r8_7 + 8) = rdx_49 & 0xefffffff
                                                        z_12 = true
                                                    else
                                                        *(r8_7 + 8)
                                                        z_12 = false
                                                    
                                                    if (z_12)
                                                        break
                                                    
                                                    rdx_49 = *(r8_7 + 8)
                                                    
                                                    if (not(test_bit(rdx_49, 0x1c)))
                                                        goto label_140cc5d60
                                                
                                                if ((*(r8_7 + 0xb) & 1) != 0)
                                                    r13_1.b = 0
                                                    char var_4f8_3 = 0
                                                    void* r11_11 = sx.q(not.d(*(r8_7 + 0xc))) * 0x50
                                                        + data_143e1d678
                                                    var_4c8_2 = r11_11
                                                    int32_t* r8_8 = *(r11_11 + 0x18)
                                                    void* r10_4 = &r8_8[sx.q(*(r11_11 + 0x20))]
                                                    
                                                    if (r8_8 != r10_4)
                                                        do
                                                            int32_t rax_150 = *r8_8
                                                            
                                                            if (rax_150 s>= 0)
                                                                int64_t rdx_52 =
                                                                    sx.q(zx.d(rax_150.w)) * 3
                                                                int64_t rcx_71 = *(data_143e1d9a0
                                                                    + (sx.q(rax_150 s>> 0x10) << 3))
                                                                void* r9_4 = rcx_71 + (rdx_52 << 3)
                                                                int32_t rdx_53 =
                                                                    *(rcx_71 + (rdx_52 << 3) + 8)
                                                                
                                                                if (((rdx_53 u>> 0x1d).b & 1) != 0)
                                                                    *r8_8 = 0xffffffff
                                                                    r13_1.b = 1
                                                                else if (((rdx_53 u>> 0x1c).b & 1) != 0
                                                                        && test_bit(rdx_53, 0x1c))
                                                                    do
                                                                        bool z_13
                                                                        
                                                                        if (rdx_53 == *(r9_4 + 8))
                                                                            *(r9_4 + 8) = rdx_53 & 0xefffffff
                                                                            z_13 = true
                                                                        else
                                                                            *(r9_4 + 8)
                                                                            z_13 = false
                                                                        
                                                                        if (z_13)
                                                                            break
                                                                        
                                                                        rdx_53 = *(r9_4 + 8)
                                                                    while (test_bit(rdx_53, 0x1c))
                                                            
                                                            r8_8 = &r8_8[1]
                                                        while (r8_8 != r10_4)
                                                        
                                                        var_4f8_3 = r13_1.b
                                                    
                                                    int32_t* r14_7 = *(r11_11 + 0x28)
                                                    r12.b = 0
                                                    void* r15_7 = &r14_7[sx.q(*(r11_11 + 0x30))]
                                                    
                                                    if (r14_7 != r15_7)
                                                        do
                                                            int32_t rax_161 = *r14_7
                                                            
                                                            if (rax_161 s>= 0)
                                                                int64_t rdx_55 =
                                                                    sx.q(zx.d(rax_161.w)) * 3
                                                                int64_t rcx_75 = *(data_143e1d9a0
                                                                    + (sx.q(rax_161 s>> 0x10) << 3))
                                                                int64_t* rbx_10 = rcx_75 + (rdx_55 << 3)
                                                                int32_t rdx_56 =
                                                                    *(rcx_75 + (rdx_55 << 3) + 8)
                                                                
                                                                if (((rdx_56 u>> 0x1d).b & 1) != 0)
                                                                    *r14_7 = 0xffffffff
                                                                    r12.b = 1
                                                                else if (((rdx_56 u>> 0x1c).b & 1) == 0)
                                                                    if (*(rbx_10 + 0xc) s> 0
                                                                            && ((rdx_56 u>> 0x17).b & 1) == 0
                                                                            && not(test_bit(rdx_56, 0x17)))
                                                                        do
                                                                            bool z_15
                                                                            
                                                                            if (rdx_56 == rbx_10[1].d)
                                                                                rbx_10[1].d = rdx_56 | 0x800000
                                                                                z_15 = true
                                                                            else
                                                                                rbx_10[1].d
                                                                                z_15 = false
                                                                            
                                                                            if (z_15)
                                                                                int32_t rax_177 = *(rbx_10 + 0xc)
                                                                                uint32_t rdx_59 = zx.d(rax_177.w)
                                                                                
                                                                                if (rax_177 s< 0)
                                                                                    rax_177 += 0xffff
                                                                                    rdx_59 -= 0x10000
                                                                                
                                                                                int64_t rdx_60 = sx.q(rdx_59) * 3
                                                                                int64_t rcx_84 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_177 s>> 0x10) << 3))
                                                                                void* r8_9 = rcx_84 + (rdx_60 << 3)
                                                                                int32_t rdx_61 =
                                                                                    *(rcx_84 + (rdx_60 << 3) + 8)
                                                                                
                                                                                if (((rdx_61 u>> 0x1c).b & 1) != 0
                                                                                        && test_bit(rdx_61, 0x1c))
                                                                                    do
                                                                                        bool z_16
                                                                                        
                                                                                        if (rdx_61 == *(r8_9 + 8))
                                                                                            *(r8_9 + 8) = rdx_61 & 0xefffffff
                                                                                            z_16 = true
                                                                                        else
                                                                                            *(r8_9 + 8)
                                                                                            z_16 = false
                                                                                        
                                                                                        if (z_16)
                                                                                            sub_140cc2730(not.d(*(r8_9 + 0xc)), 
                                                                                                var_4f0)
                                                                                            break
                                                                                        
                                                                                        rdx_61 = *(r8_9 + 8)
                                                                                    while (test_bit(rdx_61, 0x1c))
                                                                                
                                                                                break
                                                                            
                                                                            rdx_56 = rbx_10[1].d
                                                                        while (not(test_bit(rdx_56, 0x17)))
                                                                else
                                                                    for (; test_bit(rdx_56, 0x1c); 
                                                                            rdx_56 = rbx_10[1].d)
                                                                        bool z_14
                                                                        
                                                                        if (rdx_56 == rbx_10[1].d)
                                                                            rbx_10[1].d = rdx_56 & 0xefffffff
                                                                            z_14 = true
                                                                        else
                                                                            rbx_10[1].d
                                                                            z_14 = false
                                                                        
                                                                        if (z_14)
                                                                            int64_t rdi_14 = sx.q(var_4f0[1].d)
                                                                            int64_t rsi_6 = *rbx_10
                                                                            int32_t rax_171 = (rdi_14 + 1).d
                                                                            var_4f0[1].d = rax_171
                                                                            
                                                                            if (rax_171 s> *(var_4f0 + 0xc))
                                                                                sub_1405a4d70(var_4f0)
                                                                            
                                                                            *(*var_4f0 + (rdi_14 << 3)) = rsi_6
                                                                            int32_t rcx_79 = *(rbx_10 + 0xc)
                                                                            
                                                                            if (rcx_79 s< 0)
                                                                                sub_140cc2730(not.d(rcx_79), var_4f0)
                                                                            
                                                                            break
                                                            
                                                            r14_7 = &r14_7[1]
                                                        while (r14_7 != r15_7)
                                                        
                                                        if (r12.b != 0 || var_4f8_3 != 0)
                                                            goto label_140cc5917
                                                    else if (r13_1.b != 0)
                                                    label_140cc5917:
                                                        int64_t rsi_7 = 0
                                                        int32_t* rdi_15 = *(var_4c8_2 + 8)
                                                        uint64_t r15_9 =
                                                            sx.q(*(var_4c8_2 + 0x10)) << 2 u>> 2
                                                        
                                                        if (rdi_15 u>
                                                                &rdi_15[sx.q(*(var_4c8_2 + 0x10))])
                                                            r15_9 = 0
                                                        
                                                        if (r15_9 != 0)
                                                            do
                                                                int32_t rax_187 = *rdi_15
                                                                uint32_t rdx_63 = zx.d(rax_187.w)
                                                                
                                                                if (rax_187 s< 0)
                                                                    rax_187 += 0xffff
                                                                    rdx_63 -= 0x10000
                                                                
                                                                int64_t rbx_11 = sx.q(var_4f0[1].d)
                                                                int32_t rax_191 = (rbx_11 + 1).d
                                                                int64_t r14_8 = *(*(data_143e1d9a0
                                                                    + (sx.q(rax_187 s>> 0x10) << 3))
                                                                    + sx.q(rdx_63) * 0x18)
                                                                var_4f0[1].d = rax_191
                                                                
                                                                if (rax_191 s> *(var_4f0 + 0xc))
                                                                    sub_1405a4d70(var_4f0)
                                                                
                                                                rdi_15 = &rdi_15[1]
                                                                rsi_7 += 1
                                                                *(*var_4f0 + (rbx_11 << 3)) = r14_8
                                                            while (rsi_7 != r15_9)
                                                            
                                                            goto label_140cc5d4f
                                                        
                                                        *(var_4c8_2 + 0x48) = 1
                                                        data_143e1d69c = 1
                                                else
                                                    int64_t rbx_9 = sx.q(r9_1[1].d)
                                                    int32_t rax_144 = (rbx_9 + 1).d
                                                    r9_1[1].d = rax_144
                                                    
                                                    if (rax_144 s> *(r9_1 + 0xc))
                                                        sub_1405a4d70(r9_1)
                                                        r9_1 = var_4f0
                                                    
                                                    *(*r9_1 + (rbx_9 << 3)) = *rdi_13
                                        
                                    label_140cc5d60:
                                        rdx_46 = var_4e8_1
                                    
                                    r9_1 = var_4f0
                                    rcx_63 = var_498_1 + 1
                                    var_498_1 = rcx_63
                                while (rcx_63 s< rax_131)
                            
                            goto label_140cc5568
                        case 4
                            r8 = &r8[3]
                            var_4e0_1 = r8
                            void* rdx_124 = (rax_13 u>> 0xd) + r11_1
                            r11_1 = *rdx_124
                            *r8 = r11_1
                            var_4d0_1 = r11_1
                            r8[1].d = *(*r14_2 + (sx.q(r15_2.d) << 2))
                            *(r8 + 0xc) = *(rdx_124 + 8)
                            int32_t rax_373 = *(*r14_2 + (sx.q(r15_2.d + 1) << 2))
                            int32_t rcx_183 = (r15_2.d + 1) << 8
                            r15_2 = zx.q(r15_2.d + 2)
                            int32_t rax_374 = rax_373 + rcx_183
                            r8[2].d = r15_2.d
                            
                            if (*(r8 + 0xc) != 0)
                                goto label_140cc6e56
                            
                            r15_2 = zx.q(rax_374 u>> 8)
                            rbx_3 = zx.d(*(*r14_2 + (r15_2 << 2) - 4)) - zx.d(rax_374.b)
                            var_4f4_1 = rbx_3
                            continue
                        case 5
                            r8[3] = r11_1
                            r8 = &r8[3]
                            var_4e0_1 = r8
                            r8[1].d = *(*r14_2 + (sx.q(r15_2.d) << 2))
                            int64_t rcx_251 = sx.q(r15_2.d + 1)
                            r15_2 = zx.q(r15_2.d + 2)
                            *(r8 + 0xc) = *(*r14_2 + (rcx_251 << 2))
                            r8[2].d = r15_2.d
                        label_140cc6e56:
                            rbx_3 = 0
                            var_4f4_1 = 0
                            continue
                        case 6
                            int64_t r9_10 = sx.q(r15_2.d)
                            int64_t rdx_164 = sx.q(r15_2.d + 1)
                            rcx_255 = (rax_13 u>> 0xd) + r11_1
                            r15_2 = zx.q(r15_2.d + 2)
                            r8_27 = zx.q(*(r10_1 + (rdx_164 << 2))) << 0x20
                                | zx.q(*(r10_1 + (r9_10 << 2)))
                        label_140cc6e87:
                            rbx_3 = zx.d(rax_13.b)
                            var_4f4_1 = rbx_3
                            r8_27(rcx_255, &var_430)
                            r11_1 = var_4d0_1
                            r9_1 = var_4f0
                            r8 = var_4e0_1
                            continue
                        case 7
                            int64_t rdx_167 = sx.q(r15_2.d)
                            int64_t rcx_256 = sx.q(r15_2.d + 1)
                            r15_2 = zx.q(r15_2.d + 2)
                            r8_27 = zx.q(*(r10_1 + (rcx_256 << 2))) << 0x20
                                | zx.q(*(r10_1 + (rdx_167 << 2)))
                            rcx_255 = r13_1
                            goto label_140cc6e87
                        case 8
                            rbx_25 = var_428
                            int64_t rdx_168 = sx.q(r15_2.d)
                            int64_t rcx_258 = sx.q(r15_2.d + 1)
                            r15_2 = zx.q(r15_2.d + 2)
                            uint64_t rdi_31 = zx.q(*(r10_1 + (rcx_258 << 2))) << 0x20
                                | zx.q(*(r10_1 + (rdx_168 << 2)))
                            var_4f4_1 = zx.d(rax_13.b)
                            
                            if (rbx_25 == 0)
                                sub_140d1e450(&var_430)
                                rbx_25 = var_428
                            
                            *(rbx_25 + 0x90) = r13_1
                            void var_3c8
                            void** var_368
                            (*(*rdi_31 + 0x88))(rdi_31, 
                                *SymBuffer::end(sub_140b4cb20(&var_368, rbx_25), &var_3c8), 
                                (rax_13 u>> 0xd) + r11_1, 0, var_518, var_510, var_508)
                            rcx_264 = &var_368
                        label_140cc6f4d:
                            sub_140b4cbb0(rcx_264)
                            r9_1 = var_4f0
                            r8 = var_4e0_1
                            r11_1 = var_4d0_1
                            *(rbx_25 + 0x90) = 0
                            rbx_3 = var_4f4_1
                            continue
                        case 9
                            rbx_25 = var_428
                            int64_t rdx_173 = sx.q(r15_2.d)
                            int64_t rcx_265 = sx.q(r15_2.d + 1)
                            r15_2 = zx.q(r15_2.d + 2)
                            uint64_t rdi_34 = zx.q(*(r10_1 + (rcx_265 << 2))) << 0x20
                                | zx.q(*(r10_1 + (rdx_173 << 2)))
                            var_4f4_1 = zx.d(rax_13.b)
                            
                            if (rbx_25 == 0)
                                sub_140d1e450(&var_430)
                                rbx_25 = var_428
                            
                            *(rbx_25 + 0x90) = r13_1
                            void var_3c0
                            void** var_1d8
                            (*(*rdi_34 + 0x88))(rdi_34, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_25), &var_3c0), 
                                (rax_13 u>> 0xd) + r11_1, 0, var_518, var_510, var_508)
                            rcx_264 = &var_1d8
                            goto label_140cc6f4d
                        case 0xa
                            void* r14_21 = (rax_13 u>> 0xd) + r11_1
                            int32_t r9_11 = *(r14_21 + 0xc)
                            
                            if (r9_11 != 0)
                                int32_t rcx_271 = *(r14_21 + 8)
                                
                                if (rcx_271 s>= 0)
                                    if (rcx_271 s< data_143e1d9b4)
                                        uint32_t r8_32 = zx.d(rcx_271.w)
                                        
                                        if (rcx_271 s< 0)
                                            rcx_271 += 0xffff
                                            r8_32 -= 0x10000
                                        
                                        int64_t* rcx_275 =
                                            *(data_143e1d9a0 + (sx.q(rcx_271 s>> 0x10) << 3))
                                            + sx.q(r8_32) * 0x18
                                        
                                        if (rcx_275 != 0)
                                            rbx_3 = zx.d(rax_13.b)
                                            var_4f4_1 = rbx_3
                                            
                                            if (rcx_275[2].d == r9_11)
                                                void* rdi_35 = *rcx_275
                                                var_4f4_1 = rbx_3
                                                
                                                if (rdi_35 u< data_143e1d660
                                                        || rdi_35 u>= data_143e1d668)
                                                    rax_13.b = 0
                                                else
                                                    rax_13.b = 1
                                                
                                                r9_1 = var_4f0
                                                r8 = var_4e0_1
                                                
                                                if (rdi_35 != 0)
                                                    void* rax_505
                                                    
                                                    if (rax_13.b != 0)
                                                    labelid_1d2:
                                                        rax_505 = rdi_35
                                                    else
                                                        int32_t rax_499 = *(rdi_35 + 0xc)
                                                        uint32_t rdx_180 = zx.d(rax_499.w)
                                                        
                                                        if (rax_499 s< 0)
                                                            rax_499 += 0xffff
                                                            rdx_180 -= 0x10000
                                                        
                                                        int64_t rdx_181 = sx.q(rdx_180) * 3
                                                        int64_t rcx_277 = *(data_143e1d9a0
                                                            + (sx.q(rax_499 s>> 0x10) << 3))
                                                        void* r8_34 = rcx_277 + (rdx_181 << 3)
                                                        int32_t rdx_182 =
                                                            *(rcx_277 + (rdx_181 << 3) + 8)
                                                        
                                                        if (((rdx_182 u>> 0x1d).b & 1) != 0)
                                                            rax_505 = nullptr
                                                        else
                                                            void* r13_18
                                                            
                                                            if (((rdx_182 u>> 0x1c).b & 1) == 0)
                                                                if (*(r8_34 + 0xc) s<= 0
                                                                    || ((rdx_182 u>> 0x17).b & 1) != 0
                                                                    || test_bit(rdx_182, 0x17))
                                                                label_140cc750a:
                                                                    rax_505 = rdi_35
                                                                else
                                                                    while (true)
                                                                        bool z_50
                                                                        
                                                                        if (rdx_182 == *(r8_34 + 8))
                                                                            *(r8_34 + 8) = rdx_182 | 0x800000
                                                                            z_50 = true
                                                                        else
                                                                            *(r8_34 + 8)
                                                                            z_50 = false
                                                                        
                                                                        if (z_50)
                                                                            break
                                                                        
                                                                        rdx_182 = *(r8_34 + 8)
                                                                        
                                                                        if (test_bit(rdx_182, 0x17))
                                                                            goto label_140cc750a_2
                                                                    
                                                                    int32_t rax_563 = *(r8_34 + 0xc)
                                                                    uint32_t rdx_199 = zx.d(rax_563.w)
                                                                    
                                                                    if (rax_563 s< 0)
                                                                        rax_563 += 0xffff
                                                                        rdx_199 -= 0x10000
                                                                    
                                                                    int64_t rdx_200 = sx.q(rdx_199) * 3
                                                                    int64_t rcx_306 = *(data_143e1d9a0
                                                                        + (sx.q(rax_563 s>> 0x10) << 3))
                                                                    int32_t rax_567 =
                                                                        *(rcx_306 + (rdx_200 << 3) + 8)
                                                                    void* r8_37 = rcx_306 + (rdx_200 << 3)
                                                                    
                                                                    if (not(test_bit(rax_567, 0x1c)))
                                                                    label_140cc750a_1:
                                                                        rax_505 = rdi_35
                                                                    else
                                                                        while (true)
                                                                            bool z_51
                                                                            
                                                                            if (rax_567 == *(r8_37 + 8))
                                                                                *(r8_37 + 8) = rax_567 & 0xefffffff
                                                                                z_51 = true
                                                                            else
                                                                                *(r8_37 + 8)
                                                                                z_51 = false
                                                                            
                                                                            if (z_51)
                                                                                r13_1.b = 0
                                                                                char var_4f8_10 = 0
                                                                                void* r11_33 =
                                                                                    sx.q(not.d(*(r8_37 + 0xc))) * 0x50
                                                                                    + data_143e1d678
                                                                                int32_t* r9_13 = *(r11_33 + 0x18)
                                                                                void* r10_13 =
                                                                                    &r9_13[sx.q(*(r11_33 + 0x20))]
                                                                                
                                                                                if (r9_13 != r10_13)
                                                                                    do
                                                                                        int32_t rax_573 = *r9_13
                                                                                        
                                                                                        if (rax_573 s>= 0)
                                                                                            int64_t rdx_202 =
                                                                                                sx.q(zx.d(rax_573.w)) * 3
                                                                                            int64_t rcx_310 = *(data_143e1d9a0
                                                                                                + (sx.q(rax_573 s>> 0x10) << 3))
                                                                                            void* r8_38 = rcx_310 + (rdx_202 << 3)
                                                                                            int32_t rdx_203 =
                                                                                                *(rcx_310 + (rdx_202 << 3) + 8)
                                                                                            
                                                                                            if (((rdx_203 u>> 0x1d).b & 1) != 0)
                                                                                                *r9_13 = 0xffffffff
                                                                                                r13_1.b = 1
                                                                                            else if (((rdx_203 u>> 0x1c).b & 1) != 0
                                                                                                    && test_bit(rdx_203, 0x1c))
                                                                                                do
                                                                                                    bool z_52
                                                                                                    
                                                                                                    if (rdx_203 == *(r8_38 + 8))
                                                                                                        *(r8_38 + 8) = rdx_203 & 0xefffffff
                                                                                                        z_52 = true
                                                                                                    else
                                                                                                        *(r8_38 + 8)
                                                                                                        z_52 = false
                                                                                                    
                                                                                                    if (z_52)
                                                                                                        break
                                                                                                    
                                                                                                    rdx_203 = *(r8_38 + 8)
                                                                                                while (test_bit(rdx_203, 0x1c))
                                                                                        
                                                                                        r9_13 = &r9_13[1]
                                                                                    while (r9_13 != r10_13)
                                                                                    
                                                                                    var_4f8_10 = r13_1.b
                                                                                
                                                                                int32_t* r14_24 = *(r11_33 + 0x28)
                                                                                r12.b = 0
                                                                                void* r15_34 =
                                                                                    &r14_24[sx.q(*(r11_33 + 0x30))]
                                                                                
                                                                                if (r14_24 == r15_34)
                                                                                label_140cc77be:
                                                                                    
                                                                                    if (r13_1.b == 0)
                                                                                        goto label_140cc7868
                                                                                else
                                                                                    do
                                                                                        int32_t rax_584 = *r14_24
                                                                                        
                                                                                        if (rax_584 s>= 0)
                                                                                            int64_t rdx_205 =
                                                                                                sx.q(zx.d(rax_584.w)) * 3
                                                                                            int64_t rcx_314 = *(data_143e1d9a0
                                                                                                + (sx.q(rax_584 s>> 0x10) << 3))
                                                                                            int64_t* rbx_29 =
                                                                                                rcx_314 + (rdx_205 << 3)
                                                                                            int32_t rdx_206 =
                                                                                                *(rcx_314 + (rdx_205 << 3) + 8)
                                                                                            
                                                                                            if (((rdx_206 u>> 0x1d).b & 1) != 0)
                                                                                                *r14_24 = 0xffffffff
                                                                                                r12.b = 1
                                                                                            else if (((rdx_206 u>> 0x1c).b & 1)
                                                                                                    == 0)
                                                                                                if (*(rbx_29 + 0xc) s> 0
                                                                                                        && ((rdx_206 u>> 0x17).b & 1) == 0
                                                                                                        && not(test_bit(rdx_206, 0x17)))
                                                                                                    do
                                                                                                        bool z_54
                                                                                                        
                                                                                                        if (rdx_206 == rbx_29[1].d)
                                                                                                            rbx_29[1].d = rdx_206 | 0x800000
                                                                                                            z_54 = true
                                                                                                        else
                                                                                                            rbx_29[1].d
                                                                                                            z_54 = false
                                                                                                        
                                                                                                        if (z_54)
                                                                                                            int32_t rax_600 = *(rbx_29 + 0xc)
                                                                                                            uint32_t rdx_209 = zx.d(rax_600.w)
                                                                                                            
                                                                                                            if (rax_600 s< 0)
                                                                                                                rax_600 += 0xffff
                                                                                                                rdx_209 -= 0x10000
                                                                                                            
                                                                                                            int64_t rdx_210 = sx.q(rdx_209) * 3
                                                                                                            int64_t rcx_323 = *(data_143e1d9a0
                                                                                                                + (sx.q(rax_600 s>> 0x10) << 3))
                                                                                                            void* r8_39 = rcx_323 + (rdx_210 << 3)
                                                                                                            int32_t rdx_211 =
                                                                                                                *(rcx_323 + (rdx_210 << 3) + 8)
                                                                                                            
                                                                                                            if (((rdx_211 u>> 0x1c).b & 1) != 0
                                                                                                                    && test_bit(rdx_211, 0x1c))
                                                                                                                do
                                                                                                                    bool z_55
                                                                                                                    
                                                                                                                    if (rdx_211 == *(r8_39 + 8))
                                                                                                                        *(r8_39 + 8) = rdx_211 & 0xefffffff
                                                                                                                        z_55 = true
                                                                                                                    else
                                                                                                                        *(r8_39 + 8)
                                                                                                                        z_55 = false
                                                                                                                    
                                                                                                                    if (z_55)
                                                                                                                        sub_140cc2730(not.d(*(r8_39 + 0xc)), 
                                                                                                                            var_4f0)
                                                                                                                        break
                                                                                                                    
                                                                                                                    rdx_211 = *(r8_39 + 8)
                                                                                                                while (test_bit(rdx_211, 0x1c))
                                                                                                            
                                                                                                            break
                                                                                                        
                                                                                                        rdx_206 = rbx_29[1].d
                                                                                                    while (not(test_bit(rdx_206, 0x17)))
                                                                                            else
                                                                                                for (; test_bit(rdx_206, 0x1c); 
                                                                                                        rdx_206 = rbx_29[1].d)
                                                                                                    bool z_53
                                                                                                    
                                                                                                    if (rdx_206 == rbx_29[1].d)
                                                                                                        rbx_29[1].d = rdx_206 & 0xefffffff
                                                                                                        z_53 = true
                                                                                                    else
                                                                                                        rbx_29[1].d
                                                                                                        z_53 = false
                                                                                                    
                                                                                                    if (z_53)
                                                                                                        int64_t rdi_38 = sx.q(var_4f0[1].d)
                                                                                                        int64_t rsi_26 = *rbx_29
                                                                                                        int32_t rax_594 = (rdi_38 + 1).d
                                                                                                        var_4f0[1].d = rax_594
                                                                                                        
                                                                                                        if (rax_594 s> *(var_4f0 + 0xc))
                                                                                                            sub_1405a4d70(var_4f0)
                                                                                                        
                                                                                                        *(*var_4f0 + (rdi_38 << 3)) = rsi_26
                                                                                                        int32_t rcx_318 = *(rbx_29 + 0xc)
                                                                                                        
                                                                                                        if (rcx_318 s< 0)
                                                                                                            sub_140cc2730(not.d(rcx_318), var_4f0)
                                                                                                        
                                                                                                        break
                                                                                        
                                                                                        r14_24 = &r14_24[1]
                                                                                    while (r14_24 != r15_34)
                                                                                    
                                                                                    r13_1 = zx.q(var_4f8_10)
                                                                                    
                                                                                    if (r12.b == 0)
                                                                                        goto label_140cc77be
                                                                                
                                                                                r13_18 = r11_33
                                                                                r9_1 = var_4f0
                                                                                int64_t rsi_27 = 0
                                                                                int32_t* rdi_39 = *(r13_18 + 8)
                                                                                uint64_t r15_36 =
                                                                                    sx.q(*(r13_18 + 0x10)) << 2 u>> 2
                                                                                
                                                                                if (rdi_39 u>
                                                                                        &rdi_39[sx.q(*(r13_18 + 0x10))])
                                                                                    r15_36 = 0
                                                                                
                                                                                if (r15_36 != 0)
                                                                                    do
                                                                                        int32_t rax_610 = *rdi_39
                                                                                        uint32_t rdx_213 = zx.d(rax_610.w)
                                                                                        
                                                                                        if (rax_610 s< 0)
                                                                                            rax_610 += 0xffff
                                                                                            rdx_213 -= 0x10000
                                                                                        
                                                                                        int64_t rbx_30 = sx.q(r9_1[1].d)
                                                                                        int32_t rax_614 = (rbx_30 + 1).d
                                                                                        int64_t r14_25 = *(*(data_143e1d9a0
                                                                                            + (sx.q(rax_610 s>> 0x10) << 3))
                                                                                            + sx.q(rdx_213) * 0x18)
                                                                                        r9_1[1].d = rax_614
                                                                                        
                                                                                        if (rax_614 s> *(r9_1 + 0xc))
                                                                                            sub_1405a4d70(r9_1)
                                                                                            r9_1 = var_4f0
                                                                                        
                                                                                        rdi_39 = &rdi_39[1]
                                                                                        rsi_27 += 1
                                                                                        *(*r9_1 + (rbx_30 << 3)) = r14_25
                                                                                    while (rsi_27 != r15_36)
                                                                                
                                                                                goto label_140cc74b6
                                                                            
                                                                            rax_567 = *(r8_37 + 8)
                                                                            
                                                                            if (not(test_bit(rax_567, 0x1c)))
                                                                                rax_505 = rdi_35
                                                                                break
                                                            else if (not(test_bit(rdx_182, 0x1c)))
                                                            label_140cc750a_2:
                                                                rax_505 = rdi_35
                                                            else
                                                                while (true)
                                                                    bool z_45
                                                                    
                                                                    if (rdx_182 == *(r8_34 + 8))
                                                                        *(r8_34 + 8) = rdx_182 & 0xefffffff
                                                                        z_45 = true
                                                                    else
                                                                        *(r8_34 + 8)
                                                                        z_45 = false
                                                                    
                                                                    if (z_45)
                                                                        if ((*(r8_34 + 0xb) & 1) != 0)
                                                                            r13_1.b = 0
                                                                            char var_4f8_9 = 0
                                                                            void* r11_30 =
                                                                                sx.q(not.d(*(r8_34 + 0xc))) * 0x50
                                                                                + data_143e1d678
                                                                            int32_t* r9_12 = *(r11_30 + 0x18)
                                                                            void* r10_12 =
                                                                                &r9_12[sx.q(*(r11_30 + 0x20))]
                                                                            
                                                                            if (r9_12 != r10_12)
                                                                                do
                                                                                    int32_t rax_516 = *r9_12
                                                                                    
                                                                                    if (rax_516 s>= 0)
                                                                                        int64_t rdx_185 =
                                                                                            sx.q(zx.d(rax_516.w)) * 3
                                                                                        int64_t rcx_282 = *(data_143e1d9a0
                                                                                            + (sx.q(rax_516 s>> 0x10) << 3))
                                                                                        void* r8_35 = rcx_282 + (rdx_185 << 3)
                                                                                        int32_t rdx_186 =
                                                                                            *(rcx_282 + (rdx_185 << 3) + 8)
                                                                                        
                                                                                        if (((rdx_186 u>> 0x1d).b & 1) != 0)
                                                                                            *r9_12 = 0xffffffff
                                                                                            r13_1.b = 1
                                                                                        else if (((rdx_186 u>> 0x1c).b & 1) != 0
                                                                                                && test_bit(rdx_186, 0x1c))
                                                                                            do
                                                                                                bool z_46
                                                                                                
                                                                                                if (rdx_186 == *(r8_35 + 8))
                                                                                                    *(r8_35 + 8) = rdx_186 & 0xefffffff
                                                                                                    z_46 = true
                                                                                                else
                                                                                                    *(r8_35 + 8)
                                                                                                    z_46 = false
                                                                                                
                                                                                                if (z_46)
                                                                                                    break
                                                                                                
                                                                                                rdx_186 = *(r8_35 + 8)
                                                                                            while (test_bit(rdx_186, 0x1c))
                                                                                    
                                                                                    r9_12 = &r9_12[1]
                                                                                while (r9_12 != r10_12)
                                                                                
                                                                                var_4f8_9 = r13_1.b
                                                                            
                                                                            int32_t* r14_22 = *(r11_30 + 0x28)
                                                                            r12.b = 0
                                                                            void* r15_31 =
                                                                                &r14_22[sx.q(*(r11_30 + 0x30))]
                                                                            
                                                                            if (r14_22 != r15_31)
                                                                                do
                                                                                    int32_t rax_527 = *r14_22
                                                                                    
                                                                                    if (rax_527 s>= 0)
                                                                                        int64_t rdx_188 =
                                                                                            sx.q(zx.d(rax_527.w)) * 3
                                                                                        int64_t rcx_286 = *(data_143e1d9a0
                                                                                            + (sx.q(rax_527 s>> 0x10) << 3))
                                                                                        int64_t* rbx_27 =
                                                                                            rcx_286 + (rdx_188 << 3)
                                                                                        int32_t rdx_189 =
                                                                                            *(rcx_286 + (rdx_188 << 3) + 8)
                                                                                        
                                                                                        if (((rdx_189 u>> 0x1d).b & 1) != 0)
                                                                                            *r14_22 = 0xffffffff
                                                                                            r12.b = 1
                                                                                        else if (((rdx_189 u>> 0x1c).b & 1)
                                                                                                == 0)
                                                                                            if (*(rbx_27 + 0xc) s> 0
                                                                                                    && ((rdx_189 u>> 0x17).b & 1) == 0
                                                                                                    && not(test_bit(rdx_189, 0x17)))
                                                                                                do
                                                                                                    bool z_48
                                                                                                    
                                                                                                    if (rdx_189 == rbx_27[1].d)
                                                                                                        rbx_27[1].d = rdx_189 | 0x800000
                                                                                                        z_48 = true
                                                                                                    else
                                                                                                        rbx_27[1].d
                                                                                                        z_48 = false
                                                                                                    
                                                                                                    if (z_48)
                                                                                                        int32_t rax_543 = *(rbx_27 + 0xc)
                                                                                                        uint32_t rdx_192 = zx.d(rax_543.w)
                                                                                                        
                                                                                                        if (rax_543 s< 0)
                                                                                                            rax_543 += 0xffff
                                                                                                            rdx_192 -= 0x10000
                                                                                                        
                                                                                                        int64_t rdx_193 = sx.q(rdx_192) * 3
                                                                                                        int64_t rcx_295 = *(data_143e1d9a0
                                                                                                            + (sx.q(rax_543 s>> 0x10) << 3))
                                                                                                        void* r8_36 = rcx_295 + (rdx_193 << 3)
                                                                                                        int32_t rdx_194 =
                                                                                                            *(rcx_295 + (rdx_193 << 3) + 8)
                                                                                                        
                                                                                                        if (((rdx_194 u>> 0x1c).b & 1) != 0
                                                                                                                && test_bit(rdx_194, 0x1c))
                                                                                                            do
                                                                                                                bool z_49
                                                                                                                
                                                                                                                if (rdx_194 == *(r8_36 + 8))
                                                                                                                    *(r8_36 + 8) = rdx_194 & 0xefffffff
                                                                                                                    z_49 = true
                                                                                                                else
                                                                                                                    *(r8_36 + 8)
                                                                                                                    z_49 = false
                                                                                                                
                                                                                                                if (z_49)
                                                                                                                    sub_140cc2730(not.d(*(r8_36 + 0xc)), 
                                                                                                                        var_4f0)
                                                                                                                    break
                                                                                                                
                                                                                                                rdx_194 = *(r8_36 + 8)
                                                                                                            while (test_bit(rdx_194, 0x1c))
                                                                                                        
                                                                                                        break
                                                                                                    
                                                                                                    rdx_189 = rbx_27[1].d
                                                                                                while (not(test_bit(rdx_189, 0x17)))
                                                                                        else
                                                                                            for (; test_bit(rdx_189, 0x1c); 
                                                                                                    rdx_189 = rbx_27[1].d)
                                                                                                bool z_47
                                                                                                
                                                                                                if (rdx_189 == rbx_27[1].d)
                                                                                                    rbx_27[1].d = rdx_189 & 0xefffffff
                                                                                                    z_47 = true
                                                                                                else
                                                                                                    rbx_27[1].d
                                                                                                    z_47 = false
                                                                                                
                                                                                                if (z_47)
                                                                                                    int64_t rdi_36 = sx.q(var_4f0[1].d)
                                                                                                    int64_t rsi_24 = *rbx_27
                                                                                                    int32_t rax_537 = (rdi_36 + 1).d
                                                                                                    var_4f0[1].d = rax_537
                                                                                                    
                                                                                                    if (rax_537 s> *(var_4f0 + 0xc))
                                                                                                        sub_1405a4d70(var_4f0)
                                                                                                    
                                                                                                    *(*var_4f0 + (rdi_36 << 3)) = rsi_24
                                                                                                    int32_t rcx_290 = *(rbx_27 + 0xc)
                                                                                                    
                                                                                                    if (rcx_290 s< 0)
                                                                                                        sub_140cc2730(not.d(rcx_290), var_4f0)
                                                                                                    
                                                                                                    break
                                                                                    
                                                                                    r14_22 = &r14_22[1]
                                                                                while (r14_22 != r15_31)
                                                                                
                                                                                if (r12.b != 0 || var_4f8_9 != 0)
                                                                                    goto label_140cc7417
                                                                                
                                                                                goto label_140cc7868
                                                                            
                                                                            if (r13_1.b == 0)
                                                                            label_140cc7868:
                                                                                r15_2 = var_4b8_1
                                                                                r9_1 = var_4f0
                                                                                rax_505 = rdi_35
                                                                            else
                                                                            label_140cc7417:
                                                                                r13_18 = r11_30
                                                                                r9_1 = var_4f0
                                                                                int64_t rsi_25 = 0
                                                                                int32_t* rdi_37 = *(r13_18 + 8)
                                                                                uint64_t r15_33 =
                                                                                    sx.q(*(r13_18 + 0x10)) << 2 u>> 2
                                                                                
                                                                                if (rdi_37 u>
                                                                                        &rdi_37[sx.q(*(r13_18 + 0x10))])
                                                                                    r15_33 = 0
                                                                                
                                                                                if (r15_33 != 0)
                                                                                    do
                                                                                        int32_t rax_553 = *rdi_37
                                                                                        uint32_t rdx_196 = zx.d(rax_553.w)
                                                                                        
                                                                                        if (rax_553 s< 0)
                                                                                            rax_553 += 0xffff
                                                                                            rdx_196 -= 0x10000
                                                                                        
                                                                                        int64_t rbx_28 = sx.q(r9_1[1].d)
                                                                                        int32_t rax_557 = (rbx_28 + 1).d
                                                                                        int64_t r14_23 = *(*(data_143e1d9a0
                                                                                            + (sx.q(rax_553 s>> 0x10) << 3))
                                                                                            + sx.q(rdx_196) * 0x18)
                                                                                        r9_1[1].d = rax_557
                                                                                        
                                                                                        if (rax_557 s> *(r9_1 + 0xc))
                                                                                            sub_1405a4d70(r9_1)
                                                                                            r9_1 = var_4f0
                                                                                        
                                                                                        rdi_37 = &rdi_37[1]
                                                                                        rsi_25 += 1
                                                                                        *(*r9_1 + (rbx_28 << 3)) = r14_23
                                                                                    while (rsi_25 != r15_33)
                                                                                
                                                                            label_140cc74b6:
                                                                                rax_505 = rdi_35
                                                                                r15_2 = var_4b8_1
                                                                                *(r13_18 + 0x48) = 1
                                                                                data_143e1d69c = 1
                                                                        else
                                                                            int64_t rbx_26 = sx.q(r9_1[1].d)
                                                                            int32_t rax_510 = (rbx_26 + 1).d
                                                                            r9_1[1].d = rax_510
                                                                            
                                                                            if (rax_510 s> *(r9_1 + 0xc))
                                                                                sub_1405a4d70(r9_1)
                                                                                r9_1 = var_4f0
                                                                            
                                                                            *(*r9_1 + (rbx_26 << 3)) = rdi_35
                                                                            rax_505 = rdi_35
                                                                        
                                                                        break
                                                                    
                                                                    rdx_182 = *(r8_34 + 8)
                                                                    
                                                                    if (not(test_bit(rdx_182, 0x1c)))
                                                                        rax_505 = rdi_35
                                                                        break
                                                    
                                                    r8 = var_4e0_1
                                                    r11_1 = var_4d0_1
                                                    rbx_3 = var_4f4_1
                                                    r13_1 = var_4a8_1
                                                    r12 = var_4d8
                                                    
                                                    if (rax_505 == 0)
                                                        *r14_21 = 0
                                                        *(r14_21 + 8) = 0xffffffff
                                                        *(r14_21 + 0xc) = 0
                                                
                                                r14_2 = var_4c0_1
                                                continue
                                            else
                                                r14_2 = var_4c0_1
                                                r9_1 = var_4f0
                                                r8 = var_4e0_1
                                                continue
                                    
                                    r14_2 = var_4c0_1
                                    r9_1 = var_4f0
                                    r8 = var_4e0_1
                                    rbx_3 = zx.d(rax_13.b)
                                    var_4f4_1 = rbx_3
                                    continue
                                else
                                    r9_1 = var_4f0
                                    r14_2 = var_4c0_1
                                    rbx_3 = zx.d(rax_13.b)
                                    var_4f4_1 = rbx_3
                                    continue
                            else
                                r9_1 = var_4f0
                                r14_2 = var_4c0_1
                                rbx_3 = zx.d(rax_13.b)
                                var_4f4_1 = rbx_3
                                continue
                        case 0xb
                            rbx_3 = zx.d(rax_13.b)
                            var_4f4_1 = rbx_3
                            int64_t r15_37 = 0
                            void* r12_7 = (rax_13 u>> 0xd) + r11_1
                            int64_t var_4a0_2 = 0
                            void* var_498_3 = r12_7
                            int64_t r13_20 = sx.q(*(r12_7 + 8))
                            int64_t var_4c8_4 = r13_20
                            
                            if (r13_20 s<= 0)
                                goto label_140cc557b
                            
                            do
                                int64_t rax_616 = *r12_7
                                int64_t r14_27 = r15_37 << 5
                                int32_t r8_40 = *(rax_616 + r14_27 + 0xc)
                                
                                if (r8_40 != 0)
                                    int32_t rax_617 = *(rax_616 + r14_27 + 8)
                                    
                                    if (rax_617 s>= 0 && rax_617 s< data_143e1d9b4)
                                        uint32_t rdx_216 = zx.d(rax_617.w)
                                        
                                        if (rax_617 s< 0)
                                            rax_617 += 0xffff
                                            rdx_216 -= 0x10000
                                        
                                        int64_t* rax_621 =
                                            *(data_143e1d9a0 + (sx.q(rax_617 s>> 0x10) << 3))
                                            + sx.q(rdx_216) * 0x18
                                        
                                        if (rax_621 != 0 && rax_621[2].d == r8_40)
                                            void* rdi_40 = *rax_621
                                            
                                            if (rdi_40 u< data_143e1d660
                                                    || rdi_40 u>= data_143e1d668)
                                                rax_621.b = 0
                                            else
                                                rax_621.b = 1
                                            
                                            if (rdi_40 != 0)
                                                void* rax_628
                                                
                                                if (rax_621.b != 0)
                                                labelid_b4:
                                                    rax_628 = rdi_40
                                                else
                                                    int32_t rax_622 = *(rdi_40 + 0xc)
                                                    uint32_t rdx_218 = zx.d(rax_622.w)
                                                    
                                                    if (rax_622 s< 0)
                                                        rax_622 += 0xffff
                                                        rdx_218 -= 0x10000
                                                    
                                                    int64_t rdx_219 = sx.q(rdx_218) * 3
                                                    int64_t rcx_334 = *(data_143e1d9a0
                                                        + (sx.q(rax_622 s>> 0x10) << 3))
                                                    void* r8_41 = rcx_334 + (rdx_219 << 3)
                                                    int32_t rdx_220 =
                                                        *(rcx_334 + (rdx_219 << 3) + 8)
                                                    
                                                    if (((rdx_220 u>> 0x1d).b & 1) != 0)
                                                        rax_628 = nullptr
                                                    else
                                                        void* r13_23
                                                        
                                                        if (((rdx_220 u>> 0x1c).b & 1) == 0)
                                                            if (*(r8_41 + 0xc) s<= 0
                                                                || ((rdx_220 u>> 0x17).b & 1) != 0
                                                                || test_bit(rdx_220, 0x17))
                                                            label_140cc7d9a:
                                                                rax_628 = rdi_40
                                                            else
                                                                while (true)
                                                                    bool z_61
                                                                    
                                                                    if (rdx_220 == *(r8_41 + 8))
                                                                        *(r8_41 + 8) = rdx_220 | 0x800000
                                                                        z_61 = true
                                                                    else
                                                                        *(r8_41 + 8)
                                                                        z_61 = false
                                                                    
                                                                    if (z_61)
                                                                        break
                                                                    
                                                                    rdx_220 = *(r8_41 + 8)
                                                                    
                                                                    if (test_bit(rdx_220, 0x17))
                                                                        goto label_140cc7d9a_2
                                                                
                                                                int32_t rax_686 = *(r8_41 + 0xc)
                                                                uint32_t rdx_237 = zx.d(rax_686.w)
                                                                
                                                                if (rax_686 s< 0)
                                                                    rax_686 += 0xffff
                                                                    rdx_237 -= 0x10000
                                                                
                                                                int64_t rdx_238 = sx.q(rdx_237) * 3
                                                                int64_t rcx_363 = *(data_143e1d9a0
                                                                    + (sx.q(rax_686 s>> 0x10) << 3))
                                                                int32_t rax_690 =
                                                                    *(rcx_363 + (rdx_238 << 3) + 8)
                                                                void* r8_44 = rcx_363 + (rdx_238 << 3)
                                                                
                                                                if (not(test_bit(rax_690, 0x1c)))
                                                                label_140cc7d9a_1:
                                                                    rax_628 = rdi_40
                                                                else
                                                                    while (true)
                                                                        bool z_62
                                                                        
                                                                        if (rax_690 == *(r8_44 + 8))
                                                                            *(r8_44 + 8) = rax_690 & 0xefffffff
                                                                            z_62 = true
                                                                        else
                                                                            *(r8_44 + 8)
                                                                            z_62 = false
                                                                        
                                                                        if (z_62)
                                                                            r13_20.b = 0
                                                                            char var_4f8_12 = 0
                                                                            void* r11_39 =
                                                                                sx.q(not.d(*(r8_44 + 0xc))) * 0x50
                                                                                + data_143e1d678
                                                                            int32_t* r8_45 = *(r11_39 + 0x18)
                                                                            void* r10_15 =
                                                                                &r8_45[sx.q(*(r11_39 + 0x20))]
                                                                            
                                                                            if (r8_45 != r10_15)
                                                                                do
                                                                                    int32_t rax_696 = *r8_45
                                                                                    
                                                                                    if (rax_696 s>= 0)
                                                                                        int64_t rdx_240 =
                                                                                            sx.q(zx.d(rax_696.w)) * 3
                                                                                        int64_t rcx_367 = *(data_143e1d9a0
                                                                                            + (sx.q(rax_696 s>> 0x10) << 3))
                                                                                        void* r9_15 = rcx_367 + (rdx_240 << 3)
                                                                                        int32_t rdx_241 =
                                                                                            *(rcx_367 + (rdx_240 << 3) + 8)
                                                                                        
                                                                                        if (((rdx_241 u>> 0x1d).b & 1) != 0)
                                                                                            *r8_45 = 0xffffffff
                                                                                            r13_20.b = 1
                                                                                        else if (((rdx_241 u>> 0x1c).b & 1) != 0
                                                                                                && test_bit(rdx_241, 0x1c))
                                                                                            do
                                                                                                bool z_63
                                                                                                
                                                                                                if (rdx_241 == *(r9_15 + 8))
                                                                                                    *(r9_15 + 8) = rdx_241 & 0xefffffff
                                                                                                    z_63 = true
                                                                                                else
                                                                                                    *(r9_15 + 8)
                                                                                                    z_63 = false
                                                                                                
                                                                                                if (z_63)
                                                                                                    break
                                                                                                
                                                                                                rdx_241 = *(r9_15 + 8)
                                                                                            while (test_bit(rdx_241, 0x1c))
                                                                                    
                                                                                    r8_45 = &r8_45[1]
                                                                                while (r8_45 != r10_15)
                                                                                
                                                                                var_4f8_12 = r13_20.b
                                                                            
                                                                            int32_t* r14_30 = *(r11_39 + 0x28)
                                                                            r12_7.b = 0
                                                                            void* r15_41 =
                                                                                &r14_30[sx.q(*(r11_39 + 0x30))]
                                                                            
                                                                            if (r14_30 == r15_41)
                                                                            label_140cc804e:
                                                                                
                                                                                if (r13_20.b == 0)
                                                                                    goto label_140cc80fe
                                                                            else
                                                                                do
                                                                                    int32_t rax_707 = *r14_30
                                                                                    
                                                                                    if (rax_707 s>= 0)
                                                                                        int64_t rdx_243 =
                                                                                            sx.q(zx.d(rax_707.w)) * 3
                                                                                        int64_t rcx_371 = *(data_143e1d9a0
                                                                                            + (sx.q(rax_707 s>> 0x10) << 3))
                                                                                        int64_t* rbx_34 =
                                                                                            rcx_371 + (rdx_243 << 3)
                                                                                        int32_t rdx_244 =
                                                                                            *(rcx_371 + (rdx_243 << 3) + 8)
                                                                                        
                                                                                        if (((rdx_244 u>> 0x1d).b & 1) != 0)
                                                                                            *r14_30 = 0xffffffff
                                                                                            r12_7.b = 1
                                                                                        else if (((rdx_244 u>> 0x1c).b & 1)
                                                                                                == 0)
                                                                                            if (*(rbx_34 + 0xc) s> 0
                                                                                                    && ((rdx_244 u>> 0x17).b & 1) == 0
                                                                                                    && not(test_bit(rdx_244, 0x17)))
                                                                                                do
                                                                                                    bool z_65
                                                                                                    
                                                                                                    if (rdx_244 == rbx_34[1].d)
                                                                                                        rbx_34[1].d = rdx_244 | 0x800000
                                                                                                        z_65 = true
                                                                                                    else
                                                                                                        rbx_34[1].d
                                                                                                        z_65 = false
                                                                                                    
                                                                                                    if (z_65)
                                                                                                        int32_t rax_723 = *(rbx_34 + 0xc)
                                                                                                        uint32_t rdx_247 = zx.d(rax_723.w)
                                                                                                        
                                                                                                        if (rax_723 s< 0)
                                                                                                            rax_723 += 0xffff
                                                                                                            rdx_247 -= 0x10000
                                                                                                        
                                                                                                        int64_t rdx_248 = sx.q(rdx_247) * 3
                                                                                                        int64_t rcx_380 = *(data_143e1d9a0
                                                                                                            + (sx.q(rax_723 s>> 0x10) << 3))
                                                                                                        void* r8_46 = rcx_380 + (rdx_248 << 3)
                                                                                                        int32_t rdx_249 =
                                                                                                            *(rcx_380 + (rdx_248 << 3) + 8)
                                                                                                        
                                                                                                        if (((rdx_249 u>> 0x1c).b & 1) != 0
                                                                                                                && test_bit(rdx_249, 0x1c))
                                                                                                            do
                                                                                                                bool z_66
                                                                                                                
                                                                                                                if (rdx_249 == *(r8_46 + 8))
                                                                                                                    *(r8_46 + 8) = rdx_249 & 0xefffffff
                                                                                                                    z_66 = true
                                                                                                                else
                                                                                                                    *(r8_46 + 8)
                                                                                                                    z_66 = false
                                                                                                                
                                                                                                                if (z_66)
                                                                                                                    sub_140cc2730(not.d(*(r8_46 + 0xc)), 
                                                                                                                        var_4f0)
                                                                                                                    break
                                                                                                                
                                                                                                                rdx_249 = *(r8_46 + 8)
                                                                                                            while (test_bit(rdx_249, 0x1c))
                                                                                                        
                                                                                                        break
                                                                                                    
                                                                                                    rdx_244 = rbx_34[1].d
                                                                                                while (not(test_bit(rdx_244, 0x17)))
                                                                                        else
                                                                                            for (; test_bit(rdx_244, 0x1c); 
                                                                                                    rdx_244 = rbx_34[1].d)
                                                                                                bool z_64
                                                                                                
                                                                                                if (rdx_244 == rbx_34[1].d)
                                                                                                    rbx_34[1].d = rdx_244 & 0xefffffff
                                                                                                    z_64 = true
                                                                                                else
                                                                                                    rbx_34[1].d
                                                                                                    z_64 = false
                                                                                                
                                                                                                if (z_64)
                                                                                                    int64_t rdi_43 = sx.q(var_4f0[1].d)
                                                                                                    int64_t rsi_30 = *rbx_34
                                                                                                    int32_t rax_717 = (rdi_43 + 1).d
                                                                                                    var_4f0[1].d = rax_717
                                                                                                    
                                                                                                    if (rax_717 s> *(var_4f0 + 0xc))
                                                                                                        sub_1405a4d70(var_4f0)
                                                                                                    
                                                                                                    *(*var_4f0 + (rdi_43 << 3)) = rsi_30
                                                                                                    int32_t rcx_375 = *(rbx_34 + 0xc)
                                                                                                    
                                                                                                    if (rcx_375 s< 0)
                                                                                                        sub_140cc2730(not.d(rcx_375), var_4f0)
                                                                                                    
                                                                                                    break
                                                                                    
                                                                                    r14_30 = &r14_30[1]
                                                                                while (r14_30 != r15_41)
                                                                                
                                                                                r13_20 = zx.q(var_4f8_12)
                                                                                
                                                                                if (r12_7.b == 0)
                                                                                    goto label_140cc804e
                                                                            
                                                                            r13_23 = r11_39
                                                                            int64_t r14_31 = 0
                                                                            int32_t* rdi_44 = *(r13_23 + 8)
                                                                            uint64_t r15_43 =
                                                                                sx.q(*(r13_23 + 0x10)) << 2 u>> 2
                                                                            
                                                                            if (rdi_44 u>
                                                                                    &rdi_44[sx.q(*(r13_23 + 0x10))])
                                                                                r15_43 = 0
                                                                            
                                                                            if (r15_43 != 0)
                                                                                do
                                                                                    int32_t rax_733 = *rdi_44
                                                                                    uint32_t rdx_251 = zx.d(rax_733.w)
                                                                                    
                                                                                    if (rax_733 s< 0)
                                                                                        rax_733 += 0xffff
                                                                                        rdx_251 -= 0x10000
                                                                                    
                                                                                    int64_t rbx_35 = sx.q(var_4f0[1].d)
                                                                                    int32_t rax_737 = (rbx_35 + 1).d
                                                                                    int64_t rsi_31 = *(*(data_143e1d9a0
                                                                                        + (sx.q(rax_733 s>> 0x10) << 3))
                                                                                        + sx.q(rdx_251) * 0x18)
                                                                                    var_4f0[1].d = rax_737
                                                                                    
                                                                                    if (rax_737 s> *(var_4f0 + 0xc))
                                                                                        sub_1405a4d70(var_4f0)
                                                                                    
                                                                                    rdi_44 = &rdi_44[1]
                                                                                    r14_31 += 1
                                                                                    *(*var_4f0 + (rbx_35 << 3)) = rsi_31
                                                                                while (r14_31 != r15_43)
                                                                            
                                                                            goto label_140cc80f2
                                                                        
                                                                        rax_690 = *(r8_44 + 8)
                                                                        
                                                                        if (not(test_bit(rax_690, 0x1c)))
                                                                            rax_628 = rdi_40
                                                                            break
                                                        else if (not(test_bit(rdx_220, 0x1c)))
                                                        label_140cc7d9a_2:
                                                            rax_628 = rdi_40
                                                        else
                                                            while (true)
                                                                bool z_56
                                                                
                                                                if (rdx_220 == *(r8_41 + 8))
                                                                    *(r8_41 + 8) = rdx_220 & 0xefffffff
                                                                    z_56 = true
                                                                else
                                                                    *(r8_41 + 8)
                                                                    z_56 = false
                                                                
                                                                if (z_56)
                                                                    if ((*(r8_41 + 0xb) & 1) != 0)
                                                                        r13_20.b = 0
                                                                        char var_4f8_11 = 0
                                                                        void* r11_36 =
                                                                            sx.q(not.d(*(r8_41 + 0xc))) * 0x50
                                                                            + data_143e1d678
                                                                        int32_t* r8_42 = *(r11_36 + 0x18)
                                                                        void* r10_14 =
                                                                            &r8_42[sx.q(*(r11_36 + 0x20))]
                                                                        
                                                                        if (r8_42 != r10_14)
                                                                            do
                                                                                int32_t rax_639 = *r8_42
                                                                                
                                                                                if (rax_639 s>= 0)
                                                                                    int64_t rdx_223 =
                                                                                        sx.q(zx.d(rax_639.w)) * 3
                                                                                    int64_t rcx_339 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_639 s>> 0x10) << 3))
                                                                                    void* r9_14 = rcx_339 + (rdx_223 << 3)
                                                                                    int32_t rdx_224 =
                                                                                        *(rcx_339 + (rdx_223 << 3) + 8)
                                                                                    
                                                                                    if (((rdx_224 u>> 0x1d).b & 1) != 0)
                                                                                        *r8_42 = 0xffffffff
                                                                                        r13_20.b = 1
                                                                                    else if (((rdx_224 u>> 0x1c).b & 1) != 0
                                                                                            && test_bit(rdx_224, 0x1c))
                                                                                        do
                                                                                            bool z_57
                                                                                            
                                                                                            if (rdx_224 == *(r9_14 + 8))
                                                                                                *(r9_14 + 8) = rdx_224 & 0xefffffff
                                                                                                z_57 = true
                                                                                            else
                                                                                                *(r9_14 + 8)
                                                                                                z_57 = false
                                                                                            
                                                                                            if (z_57)
                                                                                                break
                                                                                            
                                                                                            rdx_224 = *(r9_14 + 8)
                                                                                        while (test_bit(rdx_224, 0x1c))
                                                                                
                                                                                r8_42 = &r8_42[1]
                                                                            while (r8_42 != r10_14)
                                                                            
                                                                            var_4f8_11 = r13_20.b
                                                                        
                                                                        int32_t* r14_28 = *(r11_36 + 0x28)
                                                                        r12_7.b = 0
                                                                        void* r15_38 =
                                                                            &r14_28[sx.q(*(r11_36 + 0x30))]
                                                                        
                                                                        if (r14_28 != r15_38)
                                                                            do
                                                                                int32_t rax_650 = *r14_28
                                                                                
                                                                                if (rax_650 s>= 0)
                                                                                    int64_t rdx_226 =
                                                                                        sx.q(zx.d(rax_650.w)) * 3
                                                                                    int64_t rcx_343 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_650 s>> 0x10) << 3))
                                                                                    int64_t* rbx_32 =
                                                                                        rcx_343 + (rdx_226 << 3)
                                                                                    int32_t rdx_227 =
                                                                                        *(rcx_343 + (rdx_226 << 3) + 8)
                                                                                    
                                                                                    if (((rdx_227 u>> 0x1d).b & 1) != 0)
                                                                                        *r14_28 = 0xffffffff
                                                                                        r12_7.b = 1
                                                                                    else if (((rdx_227 u>> 0x1c).b & 1)
                                                                                            == 0)
                                                                                        if (*(rbx_32 + 0xc) s> 0
                                                                                                && ((rdx_227 u>> 0x17).b & 1) == 0
                                                                                                && not(test_bit(rdx_227, 0x17)))
                                                                                            do
                                                                                                bool z_59
                                                                                                
                                                                                                if (rdx_227 == rbx_32[1].d)
                                                                                                    rbx_32[1].d = rdx_227 | 0x800000
                                                                                                    z_59 = true
                                                                                                else
                                                                                                    rbx_32[1].d
                                                                                                    z_59 = false
                                                                                                
                                                                                                if (z_59)
                                                                                                    int32_t rax_666 = *(rbx_32 + 0xc)
                                                                                                    uint32_t rdx_230 = zx.d(rax_666.w)
                                                                                                    
                                                                                                    if (rax_666 s< 0)
                                                                                                        rax_666 += 0xffff
                                                                                                        rdx_230 -= 0x10000
                                                                                                    
                                                                                                    int64_t rdx_231 = sx.q(rdx_230) * 3
                                                                                                    int64_t rcx_352 = *(data_143e1d9a0
                                                                                                        + (sx.q(rax_666 s>> 0x10) << 3))
                                                                                                    void* r8_43 = rcx_352 + (rdx_231 << 3)
                                                                                                    int32_t rdx_232 =
                                                                                                        *(rcx_352 + (rdx_231 << 3) + 8)
                                                                                                    
                                                                                                    if (((rdx_232 u>> 0x1c).b & 1) != 0
                                                                                                            && test_bit(rdx_232, 0x1c))
                                                                                                        do
                                                                                                            bool z_60
                                                                                                            
                                                                                                            if (rdx_232 == *(r8_43 + 8))
                                                                                                                *(r8_43 + 8) = rdx_232 & 0xefffffff
                                                                                                                z_60 = true
                                                                                                            else
                                                                                                                *(r8_43 + 8)
                                                                                                                z_60 = false
                                                                                                            
                                                                                                            if (z_60)
                                                                                                                sub_140cc2730(not.d(*(r8_43 + 0xc)), 
                                                                                                                    var_4f0)
                                                                                                                break
                                                                                                            
                                                                                                            rdx_232 = *(r8_43 + 8)
                                                                                                        while (test_bit(rdx_232, 0x1c))
                                                                                                    
                                                                                                    break
                                                                                                
                                                                                                rdx_227 = rbx_32[1].d
                                                                                            while (not(test_bit(rdx_227, 0x17)))
                                                                                    else
                                                                                        for (; test_bit(rdx_227, 0x1c); 
                                                                                                rdx_227 = rbx_32[1].d)
                                                                                            bool z_58
                                                                                            
                                                                                            if (rdx_227 == rbx_32[1].d)
                                                                                                rbx_32[1].d = rdx_227 & 0xefffffff
                                                                                                z_58 = true
                                                                                            else
                                                                                                rbx_32[1].d
                                                                                                z_58 = false
                                                                                            
                                                                                            if (z_58)
                                                                                                int64_t rdi_41 = sx.q(var_4f0[1].d)
                                                                                                int64_t rsi_28 = *rbx_32
                                                                                                int32_t rax_660 = (rdi_41 + 1).d
                                                                                                var_4f0[1].d = rax_660
                                                                                                
                                                                                                if (rax_660 s> *(var_4f0 + 0xc))
                                                                                                    sub_1405a4d70(var_4f0)
                                                                                                
                                                                                                *(*var_4f0 + (rdi_41 << 3)) = rsi_28
                                                                                                int32_t rcx_347 = *(rbx_32 + 0xc)
                                                                                                
                                                                                                if (rcx_347 s< 0)
                                                                                                    sub_140cc2730(not.d(rcx_347), var_4f0)
                                                                                                
                                                                                                break
                                                                                
                                                                                r14_28 = &r14_28[1]
                                                                            while (r14_28 != r15_38)
                                                                            
                                                                            if (r12_7.b != 0 || var_4f8_11 != 0)
                                                                                goto label_140cc7cc7
                                                                        else if (r13_20.b != 0)
                                                                        label_140cc7cc7:
                                                                            r13_23 = r11_36
                                                                            int64_t r14_29 = 0
                                                                            int32_t* rdi_42 = *(r13_23 + 8)
                                                                            uint64_t r15_40 =
                                                                                sx.q(*(r13_23 + 0x10)) << 2 u>> 2
                                                                            
                                                                            if (rdi_42 u>
                                                                                    &rdi_42[sx.q(*(r13_23 + 0x10))])
                                                                                r15_40 = 0
                                                                            
                                                                            if (r15_40 != 0)
                                                                                do
                                                                                    int32_t rax_676 = *rdi_42
                                                                                    uint32_t rdx_234 = zx.d(rax_676.w)
                                                                                    
                                                                                    if (rax_676 s< 0)
                                                                                        rax_676 += 0xffff
                                                                                        rdx_234 -= 0x10000
                                                                                    
                                                                                    int64_t rbx_33 = sx.q(var_4f0[1].d)
                                                                                    int32_t rax_680 = (rbx_33 + 1).d
                                                                                    int64_t rsi_29 = *(*(data_143e1d9a0
                                                                                        + (sx.q(rax_676 s>> 0x10) << 3))
                                                                                        + sx.q(rdx_234) * 0x18)
                                                                                    var_4f0[1].d = rax_680
                                                                                    
                                                                                    if (rax_680 s> *(var_4f0 + 0xc))
                                                                                        sub_1405a4d70(var_4f0)
                                                                                    
                                                                                    rdi_42 = &rdi_42[1]
                                                                                    r14_29 += 1
                                                                                    *(*var_4f0 + (rbx_33 << 3)) = rsi_29
                                                                                while (r14_29 != r15_40)
                                                                                
                                                                                r13_23 = r11_36
                                                                            
                                                                        label_140cc80f2:
                                                                            *(r13_23 + 0x48) = 1
                                                                            data_143e1d69c = 1
                                                                        
                                                                    label_140cc80fe:
                                                                        r13_20 = var_4c8_4
                                                                        r12_7 = var_498_3
                                                                        r15_37 = var_4a0_2
                                                                        rax_628 = rdi_40
                                                                    else
                                                                        int64_t rbx_31 = sx.q(r9_1[1].d)
                                                                        int32_t rax_633 = (rbx_31 + 1).d
                                                                        r9_1[1].d = rax_633
                                                                        
                                                                        if (rax_633 s> *(r9_1 + 0xc))
                                                                            sub_1405a4d70(r9_1)
                                                                            r9_1 = var_4f0
                                                                        
                                                                        *(*r9_1 + (rbx_31 << 3)) = rdi_40
                                                                        rax_628 = rdi_40
                                                                    
                                                                    break
                                                                
                                                                rdx_220 = *(r8_41 + 8)
                                                                
                                                                if (not(test_bit(rdx_220, 0x1c)))
                                                                    rax_628 = rdi_40
                                                                    break
                                                
                                                if (rax_628 == 0)
                                                    int64_t rax_739 = *r12_7
                                                    *(r14_27 + rax_739) = 0
                                                    *(r14_27 + rax_739 + 8) = 0xffffffff
                                                    *(r14_27 + rax_739 + 0xc) = 0
                                
                                r9_1 = var_4f0
                                r15_37 += 1
                                var_4a0_2 = r15_37
                            while (r15_37 s< r13_20)
                            
                            goto label_140cc5568
                        case 0xc, 0xe, 0xf
                            rbx_3 = zx.d(rax_13.b)
                            var_4f4_1 = rbx_3
                            continue
                        case 0xd
                            break
                        case 0x10
                            rbx_3 = zx.d(rax_13.b)
                            void* rdx_85 = (rax_13 u>> 0xd) + r11_1
                            var_4f4_1 = rbx_3
                            int64_t rcx_121 = 0
                            void* var_4e8_2 = rdx_85
                            int64_t var_498_2 = 0
                            int64_t rax_250 = sx.q(*(rdx_85 + 8))
                            
                            if (rax_250 s<= 0)
                                continue
                            else
                                do
                                    void* rax_252 = *rdx_85
                                    
                                    if ((rax_252.b & 1) != 0)
                                        rax_252 = (rax_252 s>> 1) + rdx_85
                                    
                                    void* rdi_18 = rax_252 + (rcx_121 << 3)
                                    void* rax_253 = *(rax_252 + (rcx_121 << 3))
                                    
                                    if (rax_253 u< data_143e1d660 || rax_253 u>= data_143e1d668)
                                        rcx_121.b = 0
                                    else
                                        rcx_121.b = 1
                                    
                                    if (rax_253 != 0 && rcx_121.b == 0)
                                        int32_t rax_254 = *(rax_253 + 0xc)
                                        uint32_t rdx_86 = zx.d(rax_254.w)
                                        
                                        if (rax_254 s< 0)
                                            rax_254 += 0xffff
                                            rdx_86 -= 0x10000
                                        
                                        int64_t rdx_87 = sx.q(rdx_86) * 3
                                        int64_t rcx_123 =
                                            *(data_143e1d9a0 + (sx.q(rax_254 s>> 0x10) << 3))
                                        void* r8_13 = rcx_123 + (rdx_87 << 3)
                                        int32_t rdx_88 = *(rcx_123 + (rdx_87 << 3) + 8)
                                        
                                        if (((rdx_88 u>> 0x1d).b & 1) != 0)
                                            *rdi_18 = 0
                                        else
                                            void* var_4c8_3
                                            
                                            if (((rdx_88 u>> 0x1c).b & 1) == 0)
                                                if (*(r8_13 + 0xc) s> 0
                                                        && ((rdx_88 u>> 0x17).b & 1) == 0
                                                        && not(test_bit(rdx_88, 0x17)))
                                                    while (true)
                                                        bool z_28
                                                        
                                                        if (rdx_88 == *(r8_13 + 8))
                                                            *(r8_13 + 8) = rdx_88 | 0x800000
                                                            z_28 = true
                                                        else
                                                            *(r8_13 + 8)
                                                            z_28 = false
                                                        
                                                        if (z_28)
                                                            break
                                                        
                                                        rdx_88 = *(r8_13 + 8)
                                                        
                                                        if (test_bit(rdx_88, 0x17))
                                                            goto label_140cc6560
                                                    
                                                    int32_t rax_317 = *(r8_13 + 0xc)
                                                    uint32_t rdx_105 = zx.d(rax_317.w)
                                                    
                                                    if (rax_317 s< 0)
                                                        rax_317 += 0xffff
                                                        rdx_105 -= 0x10000
                                                    
                                                    int64_t rdx_106 = sx.q(rdx_105) * 3
                                                    int64_t rcx_153 = *(data_143e1d9a0
                                                        + (sx.q(rax_317 s>> 0x10) << 3))
                                                    int32_t rax_321 =
                                                        *(rcx_153 + (rdx_106 << 3) + 8)
                                                    void* r8_16 = rcx_153 + (rdx_106 << 3)
                                                    
                                                    if (test_bit(rax_321, 0x1c))
                                                        while (true)
                                                            bool z_29
                                                            
                                                            if (rax_321 == *(r8_16 + 8))
                                                                *(r8_16 + 8) = rax_321 & 0xefffffff
                                                                z_29 = true
                                                            else
                                                                *(r8_16 + 8)
                                                                z_29 = false
                                                            
                                                            if (z_29)
                                                                break
                                                            
                                                            rax_321 = *(r8_16 + 8)
                                                            
                                                            if (not(test_bit(rax_321, 0x1c)))
                                                                goto label_140cc6560
                                                        
                                                        r13_1.b = 0
                                                        char var_4f8_6 = 0
                                                        void* r11_20 =
                                                            sx.q(not.d(*(r8_16 + 0xc))) * 0x50
                                                            + data_143e1d678
                                                        var_4c8_3 = r11_20
                                                        int32_t* r8_17 = *(r11_20 + 0x18)
                                                        void* r10_7 = &r8_17[sx.q(*(r11_20 + 0x20))]
                                                        
                                                        if (r8_17 != r10_7)
                                                            do
                                                                int32_t rax_327 = *r8_17
                                                                
                                                                if (rax_327 s>= 0)
                                                                    int64_t rdx_108 =
                                                                        sx.q(zx.d(rax_327.w)) * 3
                                                                    int64_t rcx_157 = *(data_143e1d9a0
                                                                        + (sx.q(rax_327 s>> 0x10) << 3))
                                                                    void* r9_7 = rcx_157 + (rdx_108 << 3)
                                                                    int32_t rdx_109 =
                                                                        *(rcx_157 + (rdx_108 << 3) + 8)
                                                                    
                                                                    if (((rdx_109 u>> 0x1d).b & 1) != 0)
                                                                        *r8_17 = 0xffffffff
                                                                        r13_1.b = 1
                                                                    else if (((rdx_109 u>> 0x1c).b & 1) != 0
                                                                            && test_bit(rdx_109, 0x1c))
                                                                        do
                                                                            bool z_30
                                                                            
                                                                            if (rdx_109 == *(r9_7 + 8))
                                                                                *(r9_7 + 8) = rdx_109 & 0xefffffff
                                                                                z_30 = true
                                                                            else
                                                                                *(r9_7 + 8)
                                                                                z_30 = false
                                                                            
                                                                            if (z_30)
                                                                                break
                                                                            
                                                                            rdx_109 = *(r9_7 + 8)
                                                                        while (test_bit(rdx_109, 0x1c))
                                                                
                                                                r8_17 = &r8_17[1]
                                                            while (r8_17 != r10_7)
                                                            
                                                            var_4f8_6 = r13_1.b
                                                        
                                                        int32_t* r14_13 = *(r11_20 + 0x28)
                                                        r12.b = 0
                                                        void* r15_16 =
                                                            &r14_13[sx.q(*(r11_20 + 0x30))]
                                                        
                                                        if (r14_13 != r15_16)
                                                            do
                                                                int32_t rax_338 = *r14_13
                                                                
                                                                if (rax_338 s>= 0)
                                                                    int64_t rdx_111 =
                                                                        sx.q(zx.d(rax_338.w)) * 3
                                                                    int64_t rcx_161 = *(data_143e1d9a0
                                                                        + (sx.q(rax_338 s>> 0x10) << 3))
                                                                    int64_t* rbx_17 =
                                                                        rcx_161 + (rdx_111 << 3)
                                                                    int32_t rdx_112 =
                                                                        *(rcx_161 + (rdx_111 << 3) + 8)
                                                                    
                                                                    if (((rdx_112 u>> 0x1d).b & 1) != 0)
                                                                        *r14_13 = 0xffffffff
                                                                        r12.b = 1
                                                                    else if (((rdx_112 u>> 0x1c).b & 1)
                                                                            == 0)
                                                                        if (*(rbx_17 + 0xc) s> 0
                                                                                && ((rdx_112 u>> 0x17).b & 1) == 0
                                                                                && not(test_bit(rdx_112, 0x17)))
                                                                            do
                                                                                bool z_32
                                                                                
                                                                                if (rdx_112 == rbx_17[1].d)
                                                                                    rbx_17[1].d = rdx_112 | 0x800000
                                                                                    z_32 = true
                                                                                else
                                                                                    rbx_17[1].d
                                                                                    z_32 = false
                                                                                
                                                                                if (z_32)
                                                                                    int32_t rax_354 = *(rbx_17 + 0xc)
                                                                                    uint32_t rdx_115 = zx.d(rax_354.w)
                                                                                    
                                                                                    if (rax_354 s< 0)
                                                                                        rax_354 += 0xffff
                                                                                        rdx_115 -= 0x10000
                                                                                    
                                                                                    int64_t rdx_116 = sx.q(rdx_115) * 3
                                                                                    int64_t rcx_170 = *(data_143e1d9a0
                                                                                        + (sx.q(rax_354 s>> 0x10) << 3))
                                                                                    void* r8_18 = rcx_170 + (rdx_116 << 3)
                                                                                    int32_t rdx_117 =
                                                                                        *(rcx_170 + (rdx_116 << 3) + 8)
                                                                                    
                                                                                    if (((rdx_117 u>> 0x1c).b & 1) != 0
                                                                                            && test_bit(rdx_117, 0x1c))
                                                                                        do
                                                                                            bool z_33
                                                                                            
                                                                                            if (rdx_117 == *(r8_18 + 8))
                                                                                                *(r8_18 + 8) = rdx_117 & 0xefffffff
                                                                                                z_33 = true
                                                                                            else
                                                                                                *(r8_18 + 8)
                                                                                                z_33 = false
                                                                                            
                                                                                            if (z_33)
                                                                                                sub_140cc2730(not.d(*(r8_18 + 0xc)), 
                                                                                                    var_4f0)
                                                                                                break
                                                                                            
                                                                                            rdx_117 = *(r8_18 + 8)
                                                                                        while (test_bit(rdx_117, 0x1c))
                                                                                    
                                                                                    break
                                                                                
                                                                                rdx_112 = rbx_17[1].d
                                                                            while (not(test_bit(rdx_112, 0x17)))
                                                                    else
                                                                        for (; test_bit(rdx_112, 0x1c); 
                                                                                rdx_112 = rbx_17[1].d)
                                                                            bool z_31
                                                                            
                                                                            if (rdx_112 == rbx_17[1].d)
                                                                                rbx_17[1].d = rdx_112 & 0xefffffff
                                                                                z_31 = true
                                                                            else
                                                                                rbx_17[1].d
                                                                                z_31 = false
                                                                            
                                                                            if (z_31)
                                                                                int64_t rdi_21 = sx.q(var_4f0[1].d)
                                                                                int64_t rsi_12 = *rbx_17
                                                                                int32_t rax_348 = (rdi_21 + 1).d
                                                                                var_4f0[1].d = rax_348
                                                                                
                                                                                if (rax_348 s> *(var_4f0 + 0xc))
                                                                                    sub_1405a4d70(var_4f0)
                                                                                
                                                                                *(*var_4f0 + (rdi_21 << 3)) = rsi_12
                                                                                int32_t rcx_165 = *(rbx_17 + 0xc)
                                                                                
                                                                                if (rcx_165 s< 0)
                                                                                    sub_140cc2730(not.d(rcx_165), var_4f0)
                                                                                
                                                                                break
                                                                
                                                                r14_13 = &r14_13[1]
                                                            while (r14_13 != r15_16)
                                                            
                                                            if (r12.b != 0 || var_4f8_6 != 0)
                                                                goto label_140cc64b7
                                                        else if (r13_1.b != 0)
                                                        label_140cc64b7:
                                                            int64_t rsi_13 = 0
                                                            int32_t* rdi_22 = *(var_4c8_3 + 8)
                                                            uint64_t r15_18 =
                                                                sx.q(*(var_4c8_3 + 0x10)) << 2 u>> 2
                                                            
                                                            if (rdi_22 u>
                                                                    &rdi_22[sx.q(*(var_4c8_3 + 0x10))])
                                                                r15_18 = 0
                                                            
                                                            if (r15_18 == 0)
                                                                *(var_4c8_3 + 0x48) = 1
                                                                data_143e1d69c = 1
                                                            else
                                                                do
                                                                    int32_t rax_364 = *rdi_22
                                                                    uint32_t rdx_119 = zx.d(rax_364.w)
                                                                    
                                                                    if (rax_364 s< 0)
                                                                        rax_364 += 0xffff
                                                                        rdx_119 -= 0x10000
                                                                    
                                                                    int64_t rbx_18 = sx.q(var_4f0[1].d)
                                                                    int32_t rax_368 = (rbx_18 + 1).d
                                                                    int64_t r14_14 = *(*(data_143e1d9a0
                                                                        + (sx.q(rax_364 s>> 0x10) << 3))
                                                                        + sx.q(rdx_119) * 0x18)
                                                                    var_4f0[1].d = rax_368
                                                                    
                                                                    if (rax_368 s> *(var_4f0 + 0xc))
                                                                        sub_1405a4d70(var_4f0)
                                                                    
                                                                    rdi_22 = &rdi_22[1]
                                                                    rsi_13 += 1
                                                                    *(*var_4f0 + (rbx_18 << 3)) = r14_14
                                                                while (rsi_13 != r15_18)
                                                                
                                                            label_140cc654f:
                                                                *(var_4c8_3 + 0x48) = 1
                                                                data_143e1d69c = 1
                                            else if (test_bit(rdx_88, 0x1c))
                                                while (true)
                                                    bool z_23
                                                    
                                                    if (rdx_88 == *(r8_13 + 8))
                                                        *(r8_13 + 8) = rdx_88 & 0xefffffff
                                                        z_23 = true
                                                    else
                                                        *(r8_13 + 8)
                                                        z_23 = false
                                                    
                                                    if (z_23)
                                                        break
                                                    
                                                    rdx_88 = *(r8_13 + 8)
                                                    
                                                    if (not(test_bit(rdx_88, 0x1c)))
                                                        goto label_140cc6560
                                                
                                                if ((*(r8_13 + 0xb) & 1) != 0)
                                                    r13_1.b = 0
                                                    char var_4f8_5 = 0
                                                    void* r11_17 =
                                                        sx.q(not.d(*(r8_13 + 0xc))) * 0x50
                                                        + data_143e1d678
                                                    var_4c8_3 = r11_17
                                                    int32_t* r8_14 = *(r11_17 + 0x18)
                                                    void* r10_6 = &r8_14[sx.q(*(r11_17 + 0x20))]
                                                    
                                                    if (r8_14 != r10_6)
                                                        do
                                                            int32_t rax_270 = *r8_14
                                                            
                                                            if (rax_270 s>= 0)
                                                                int64_t rdx_91 =
                                                                    sx.q(zx.d(rax_270.w)) * 3
                                                                int64_t rcx_129 = *(data_143e1d9a0
                                                                    + (sx.q(rax_270 s>> 0x10) << 3))
                                                                void* r9_6 = rcx_129 + (rdx_91 << 3)
                                                                int32_t rdx_92 =
                                                                    *(rcx_129 + (rdx_91 << 3) + 8)
                                                                
                                                                if (((rdx_92 u>> 0x1d).b & 1) != 0)
                                                                    *r8_14 = 0xffffffff
                                                                    r13_1.b = 1
                                                                else if (((rdx_92 u>> 0x1c).b & 1) != 0
                                                                        && test_bit(rdx_92, 0x1c))
                                                                    do
                                                                        bool z_24
                                                                        
                                                                        if (rdx_92 == *(r9_6 + 8))
                                                                            *(r9_6 + 8) = rdx_92 & 0xefffffff
                                                                            z_24 = true
                                                                        else
                                                                            *(r9_6 + 8)
                                                                            z_24 = false
                                                                        
                                                                        if (z_24)
                                                                            break
                                                                        
                                                                        rdx_92 = *(r9_6 + 8)
                                                                    while (test_bit(rdx_92, 0x1c))
                                                            
                                                            r8_14 = &r8_14[1]
                                                        while (r8_14 != r10_6)
                                                        
                                                        var_4f8_5 = r13_1.b
                                                    
                                                    int32_t* r14_11 = *(r11_17 + 0x28)
                                                    r12.b = 0
                                                    void* r15_13 = &r14_11[sx.q(*(r11_17 + 0x30))]
                                                    
                                                    if (r14_11 != r15_13)
                                                        do
                                                            int32_t rax_281 = *r14_11
                                                            
                                                            if (rax_281 s>= 0)
                                                                int64_t rdx_94 =
                                                                    sx.q(zx.d(rax_281.w)) * 3
                                                                int64_t rcx_133 = *(data_143e1d9a0
                                                                    + (sx.q(rax_281 s>> 0x10) << 3))
                                                                int64_t* rbx_15 =
                                                                    rcx_133 + (rdx_94 << 3)
                                                                int32_t rdx_95 =
                                                                    *(rcx_133 + (rdx_94 << 3) + 8)
                                                                
                                                                if (((rdx_95 u>> 0x1d).b & 1) != 0)
                                                                    *r14_11 = 0xffffffff
                                                                    r12.b = 1
                                                                else if (((rdx_95 u>> 0x1c).b & 1) == 0)
                                                                    if (*(rbx_15 + 0xc) s> 0
                                                                            && ((rdx_95 u>> 0x17).b & 1) == 0
                                                                            && not(test_bit(rdx_95, 0x17)))
                                                                        do
                                                                            bool z_26
                                                                            
                                                                            if (rdx_95 == rbx_15[1].d)
                                                                                rbx_15[1].d = rdx_95 | 0x800000
                                                                                z_26 = true
                                                                            else
                                                                                rbx_15[1].d
                                                                                z_26 = false
                                                                            
                                                                            if (z_26)
                                                                                int32_t rax_297 = *(rbx_15 + 0xc)
                                                                                uint32_t rdx_98 = zx.d(rax_297.w)
                                                                                
                                                                                if (rax_297 s< 0)
                                                                                    rax_297 += 0xffff
                                                                                    rdx_98 -= 0x10000
                                                                                
                                                                                int64_t rdx_99 = sx.q(rdx_98) * 3
                                                                                int64_t rcx_142 = *(data_143e1d9a0
                                                                                    + (sx.q(rax_297 s>> 0x10) << 3))
                                                                                void* r8_15 = rcx_142 + (rdx_99 << 3)
                                                                                int32_t rdx_100 =
                                                                                    *(rcx_142 + (rdx_99 << 3) + 8)
                                                                                
                                                                                if (((rdx_100 u>> 0x1c).b & 1) != 0
                                                                                        && test_bit(rdx_100, 0x1c))
                                                                                    do
                                                                                        bool z_27
                                                                                        
                                                                                        if (rdx_100 == *(r8_15 + 8))
                                                                                            *(r8_15 + 8) = rdx_100 & 0xefffffff
                                                                                            z_27 = true
                                                                                        else
                                                                                            *(r8_15 + 8)
                                                                                            z_27 = false
                                                                                        
                                                                                        if (z_27)
                                                                                            sub_140cc2730(not.d(*(r8_15 + 0xc)), 
                                                                                                var_4f0)
                                                                                            break
                                                                                        
                                                                                        rdx_100 = *(r8_15 + 8)
                                                                                    while (test_bit(rdx_100, 0x1c))
                                                                                
                                                                                break
                                                                            
                                                                            rdx_95 = rbx_15[1].d
                                                                        while (not(test_bit(rdx_95, 0x17)))
                                                                else
                                                                    for (; test_bit(rdx_95, 0x1c); 
                                                                            rdx_95 = rbx_15[1].d)
                                                                        bool z_25
                                                                        
                                                                        if (rdx_95 == rbx_15[1].d)
                                                                            rbx_15[1].d = rdx_95 & 0xefffffff
                                                                            z_25 = true
                                                                        else
                                                                            rbx_15[1].d
                                                                            z_25 = false
                                                                        
                                                                        if (z_25)
                                                                            int64_t rdi_19 = sx.q(var_4f0[1].d)
                                                                            int64_t rsi_10 = *rbx_15
                                                                            int32_t rax_291 = (rdi_19 + 1).d
                                                                            var_4f0[1].d = rax_291
                                                                            
                                                                            if (rax_291 s> *(var_4f0 + 0xc))
                                                                                sub_1405a4d70(var_4f0)
                                                                            
                                                                            *(*var_4f0 + (rdi_19 << 3)) = rsi_10
                                                                            int32_t rcx_137 = *(rbx_15 + 0xc)
                                                                            
                                                                            if (rcx_137 s< 0)
                                                                                sub_140cc2730(not.d(rcx_137), var_4f0)
                                                                            
                                                                            break
                                                            
                                                            r14_11 = &r14_11[1]
                                                        while (r14_11 != r15_13)
                                                        
                                                        if (r12.b != 0 || var_4f8_5 != 0)
                                                            goto label_140cc6117
                                                    else if (r13_1.b != 0)
                                                    label_140cc6117:
                                                        int64_t rsi_11 = 0
                                                        int32_t* rdi_20 = *(var_4c8_3 + 8)
                                                        uint64_t r15_15 =
                                                            sx.q(*(var_4c8_3 + 0x10)) << 2 u>> 2
                                                        
                                                        if (rdi_20 u>
                                                                &rdi_20[sx.q(*(var_4c8_3 + 0x10))])
                                                            r15_15 = 0
                                                        
                                                        if (r15_15 != 0)
                                                            do
                                                                int32_t rax_307 = *rdi_20
                                                                uint32_t rdx_102 = zx.d(rax_307.w)
                                                                
                                                                if (rax_307 s< 0)
                                                                    rax_307 += 0xffff
                                                                    rdx_102 -= 0x10000
                                                                
                                                                int64_t rbx_16 = sx.q(var_4f0[1].d)
                                                                int32_t rax_311 = (rbx_16 + 1).d
                                                                int64_t r14_12 = *(*(data_143e1d9a0
                                                                    + (sx.q(rax_307 s>> 0x10) << 3))
                                                                    + sx.q(rdx_102) * 0x18)
                                                                var_4f0[1].d = rax_311
                                                                
                                                                if (rax_311 s> *(var_4f0 + 0xc))
                                                                    sub_1405a4d70(var_4f0)
                                                                
                                                                rdi_20 = &rdi_20[1]
                                                                rsi_11 += 1
                                                                *(*var_4f0 + (rbx_16 << 3)) = r14_12
                                                            while (rsi_11 != r15_15)
                                                            
                                                            goto label_140cc654f
                                                        
                                                        *(var_4c8_3 + 0x48) = 1
                                                        data_143e1d69c = 1
                                                else
                                                    int64_t rbx_14 = sx.q(r9_1[1].d)
                                                    int32_t rax_264 = (rbx_14 + 1).d
                                                    r9_1[1].d = rax_264
                                                    
                                                    if (rax_264 s> *(r9_1 + 0xc))
                                                        sub_1405a4d70(r9_1)
                                                        r9_1 = var_4f0
                                                    
                                                    *(*r9_1 + (rbx_14 << 3)) = *rdi_18
                                        
                                    label_140cc6560:
                                        rdx_85 = var_4e8_2
                                    
                                    r9_1 = var_4f0
                                    rcx_121 = var_498_2 + 1
                                    var_498_2 = rcx_121
                                while (rcx_121 s< rax_250)
                            
                            goto label_140cc5568
                        case 0x11
                            r8 = &r8[3]
                            void* rdx_127 = (rax_13 u>> 0xd) + r11_1
                            var_4e0_1 = r8
                            r11_1 = *rdx_127
                            
                            if ((r11_1.b & 1) != 0)
                                r11_1 = (r11_1 s>> 1) + rdx_127
                            
                            *r8 = r11_1
                            var_4d0_1 = r11_1
                            r8[1].d = *(*r14_2 + (sx.q(r15_2.d) << 2))
                            *(r8 + 0xc) = *(rdx_127 + 8)
                            int32_t rax_378 = *(*r14_2 + (sx.q(r15_2.d + 1) << 2))
                            int32_t rcx_190 = (r15_2.d + 1) << 8
                            r15_2 = zx.q(r15_2.d + 2)
                            int32_t rax_379 = rax_378 + rcx_190
                            r8[2].d = r15_2.d
                            
                            if (*(r8 + 0xc) != 0)
                                goto label_140cc6e56
                            
                            uint32_t rcx_192 = rax_379 u>> 8
                            r15_2 = zx.q(rcx_192)
                            rbx_3 = zx.d(*(*r14_2 + (zx.q(rcx_192) << 2) - 4)) - zx.d(rax_379.b)
                            var_4f4_1 = rbx_3
                            continue
            
            rbx_37 = r9_1[1].d
            r14 = var_48c
            
            if (rbx_37 s>= r14)
                int64_t* rax_744 = sub_140a242a0()
                int64_t rdx_257 = *rax_744
                int32_t rbx_38 = var_4f0[1].d
                int32_t rax_745 = (*(rdx_257 + 0x18))(rax_744, rdx_257)
                r9_1 = var_4f0
                rbx_37 = var_4f0[1].d
                int32_t temp0_2 = divs.dp.d(sx.q(rbx_38), rax_745)
                int32_t rsi_32 = temp0_2
                
                if (r14 s>= temp0_2)
                    rsi_32 = r14
                
                if (rbx_37 s>= r14)
                    int32_t r9_17 = rbx_37
                    
                    do
                        rbx_37 = r9_17 - rsi_32
                        
                        if (rbx_37 s<= 0)
                            rbx_37 = 0
                        
                        int32_t r9_18 = r9_17 - rbx_37
                        int32_t var_45c = rbx_37
                        int32_t var_460 = r9_18
                        void* rdi_45 = *arg3
                        
                        if (rdi_45 == 0)
                            sub_140cb0210(&arg1[2], var_4f0, rbx_37, r9_18)
                        else
                            int64_t* var_3f8 = var_4f0
                            int64_t* var_3f0 = arg1
                            void var_3a8
                            int64_t* rax_750 = sub_140cb6d00(&var_3a8, nullptr, 0xff)
                            var_508 = arg1[1]
                            var_510 = &var_460
                            var_518 = &var_45c
                            void var_3b8
                            sub_14084e1b0(rdi_45, 
                                sub_140ca9b50(rax_750, &var_3b8, &var_3f0, &var_3f8, var_518, 
                                    var_510, var_508))
                        
                        var_4f0[1].d = rbx_37
                        r9_17 = rbx_37
                    while (rbx_37 s>= r14)
                    
                    r12 = var_4d8
                    r9_1 = var_4f0
            
            rsi = arg2
            rdi = var_490
            r15 = var_468
            rax_4 = rsi[1].d
            
            if (rdi s>= rax_4)
                break
        
        r13 = arg1
    
    if (rbx_37 s< r14)
        if (rbx_37 != 0)
            if (rsi != r9_1)
                int128_t zmm1_1 = *rsi
                int128_t var_378_1 = zmm1_1
                *rsi = *r9_1
                *r9_1 = zmm1_1
            
            r9_1[1].d = 0
            rdi = 0
            var_490 = 0
            var_468 = 0
        
        r15_45 = var_4f0
    else
        int64_t* rax_753 = sub_140a242a0()
        r15_45 = var_4f0
        int64_t rdx_262 = *rax_753
        int32_t rbx_40 = r15_45[1].d
        int32_t rax_754 = (*(rdx_262 + 0x18))(rax_753, rdx_262)
        int32_t rbx_41 = r15_45[1].d
        int32_t temp0_3 = divs.dp.d(sx.q(rbx_40), rax_754)
        int32_t r14_32 = temp0_3
        
        if (var_48c s>= temp0_3)
            r14_32 = var_48c
        
        int32_t var_474 = 0
        int32_t rdx_265 = 0
        
        if (rbx_41 s> 0)
            int32_t rdi_46 = 0
            
            do
                void* rsi_33 = *arg3
                int32_t rbx_42 = rbx_41 - rdi_46
                
                if (r14_32 s<= rbx_42)
                    rbx_42 = r14_32
                
                var_478 = rbx_42
                
                if (rsi_33 == 0)
                    sub_140cb0210(&r13[2], r15_45, rdx_265, rbx_42)
                else
                    int64_t* var_3e8 = r15_45
                    int64_t* var_3e0 = r13
                    void var_390
                    int64_t* rax_758 = sub_140cb6d00(&var_390, nullptr, 0xff)
                    var_508 = r13[1]
                    var_510 = &var_478
                    var_518 = &var_474
                    void var_3b0
                    sub_14084e1b0(rsi_33, 
                        sub_140ca9b50(rax_758, &var_3b0, &var_3e0, &var_3e8, var_518, var_510, 
                            var_508))
                
                rdx_265 = rdi_46 + rbx_42
                rbx_41 = r15_45[1].d
                var_474 = rdx_265
                rdi_46 = rdx_265
            while (rdx_265 s< rbx_41)
            
            r12 = var_4d8
        
        r14 = var_48c
        rdi = var_490
        rsi = arg2
        r15_45[1].d = 0
    
    sub_140d16360(&var_430)
    
    if (rdi s>= rsi[1].d)
        break
    
    r15 = var_468

int32_t rax_761 = *(r15_45 + 0xc)
void* rbx_43 = r13[1]
r15_45[1].d = 0

if (rax_761 s< 0 && rax_761 != 0)
    sub_1405c5570(r15_45, 0)

int64_t result = sub_140ccd380(rbx_43, r15_45)
void** rcx_410 = var_440

if (rcx_410 != 0)
    result = sub_140a74f90(rcx_410)

__security_check_cookie(rax_1 ^ &var_538)
return result
