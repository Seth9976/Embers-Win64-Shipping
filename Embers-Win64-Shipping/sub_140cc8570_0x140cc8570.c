// 函数: sub_140cc8570
// 地址: 0x140cc8570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
int64_t rax_1 = __security_cookie ^ &var_4f8
int32_t var_46c = 0
int64_t* r13 = arg1
int32_t r14 = data_1439a9d70
uint64_t* rsi = arg2
int32_t r15 = 0
int32_t var_48c = r14
int32_t var_4a8 = 0
int64_t* rax_2 = sub_140cc3cb0(arg1[1])
int64_t* r12 = rax_2

if (rax_2 == 0)
    int64_t* rax_3 = j_sub_140a82f30(0x20)
    r12 = rax_3
    
    if (rax_3 == 0)
        r12 = nullptr
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
int64_t var_460 = 0

while (true)
    int64_t rbx_1 = *r13
    void** const var_430
    std::exception::exception(&var_430)
    int64_t var_418_1 = rbx_1
    var_430 = &data_142ea18b0
    int64_t* var_410_1 = r12
    char var_408_1 = 1
    int32_t rax_4 = rsi[1].d
    int32_t* var_4d8
    int32_t* var_4d0
    int16_t* const var_4c8
    int32_t rbx_13
    
    if (rdi s>= rax_4)
        rbx_13 = r12[1].d
    else
        while (true)
            uint64_t rdx_3 = *rsi
            var_490 = rdi + 1
            void* r14_1 = *(rdx_3 + (var_460 << 3))
            var_460 += 1
            int32_t rcx_6 = rax_4 - 1
            void* var_488_1 = r14_1
            
            if (rdi + 1 s<= rcx_6)
                rcx_6 = rdi + 1
            
            int32_t rbx_2 = *(*(r14_1 + 0x10) + 0x58)
            int64_t rdi_2 = *(rdx_3 + (sx.q(rcx_6) << 3))
            int64_t rcx_7 = sx.q(sub_140b673d0())
            int32_t i_2 = divs.dp.d(sx.q((rcx_7 - 1).d + rbx_2), rcx_7.d)
            
            if (i_2 != 0)
                int32_t i
                
                do
                    rdi_2 += rcx_7
                    i = i_2
                    i_2 -= 1
                while (i != 1)
            
            void* r8 = r14_1
            void** r13_1 = var_440
            int64_t* r9_2 = *(r14_1 + 0x10) + 0x1e8
            int64_t* var_4a0_1 = r9_2
            uint32_t rbx_3 = 0
            void* var_4b0_1 = r14_1
            uint32_t var_4b8_1 = 0
            uint64_t r11_1 = 0
            *r13_1 = r14_1
            r13_1[1].d = 0
            *(r13_1 + 0xc) = -1
            
            while (true)
                int32_t rsi_1 = r11_1.d
                int32_t rax_11 = 0
                
                if (rbx_3 s> 0)
                    do
                        *(r13_1 + 0xc) -= 1
                        
                        if (*(r13_1 + 0xc) s> 0)
                            r8 = sx.q(r13_1[1].d) + *r13_1
                            *r13_1 = r8
                            r11_1 = zx.q(r13_1[2].d)
                            rsi_1 = r11_1.d
                            var_4b0_1 = r8
                            break
                        
                        r8 = r13_1[-3]
                        r13_1 -= 0x18
                        rax_11 += 1
                        var_4b0_1 = r8
                    while (rax_11 s< rbx_3)
                
                int64_t r10_1 = *r9_2
                r11_1 = zx.q(r11_1.d + 1)
                uint64_t rax_13 = zx.q(*(r10_1 + (sx.q(rsi_1) << 2)))
                int32_t rdi_5 = rax_13.d u>> 8 & 0x1f
                uint64_t rcx_8 = zx.q(rdi_5 - 1)
                uint64_t var_498_3
                void* var_428
                void* rcx_47
                void*** rcx_56
                void* rbx_9
                void* rdi_8
                uint64_t r8_9
                uint64_t r11_7
                
                if (rcx_8.d u> 0x11)
                    int32_t* rax_108 = *(r14_1 + 0x10)
                    int32_t* var_480
                    int32_t* var_478
                    
                    if (rax_108 != 0)
                        int64_t var_3f0 = *(rax_108 + 0x18)
                        sub_140b63b70(&var_3f0, &var_480)
                    else
                        var_480 = rax_108
                        sub_1405947f0(&var_480, 5)
                        var_478.d = rax_108.d + 5
                        
                        if (rax_108.d + 5 s> var_478:4.d)
                            sub_140594770(&var_480)
                        
                        UnDecorator::getReferenceType(var_480, u"None", 0xa)
                    
                    int32_t* rbx_12 = &data_142d40450
                    
                    if (var_478.d != 0)
                        rbx_12 = var_480
                    
                    int16_t* var_3e0
                    sub_140d21e10(r14_1, &var_3e0, 0)
                    int16_t* const rax_111 = &data_142d40450
                    int32_t var_3d8
                    
                    if (var_3d8 != 0)
                        rax_111 = var_3e0
                    
                    var_4c8 = rax_111
                    var_4d0 = rbx_12
                    var_4d8.d = rsi_1
                    sub_140af98a0("Unknown", 0x388, 
                        Unknown token. Type:%d ReferenceTokenStreamIndex:%d Class:%s Obj:%s", 
                        zx.q(rdi_5))
                    int16_t* rcx_89 = var_3e0
                    
                    if (rcx_89 != 0)
                        sub_140a74f90(rcx_89)
                    
                    int32_t* rcx_90 = var_480
                    r15 = (r15 | 1) & 0xfffffffe
                    var_4a8 = r15
                    
                    if (rcx_90 != 0)
                        sub_140a74f90(rcx_90)
                    
                    sub_140afbb40()
                    r8 = var_4b0_1
                    r9_2 = var_4a0_1
                    rbx_3 = var_4b8_1
                else
                    switch (rcx_8)
                        case 0, 1
                            rbx_3 = zx.d(rax_13.b)
                            rdi_8 = (rax_13 u>> 0xd) + r8
                            var_4b8_1 = rbx_3
                            void* rax_14 = *rdi_8
                            
                            if (rax_14 u< data_143e1d660 || rax_14 u>= data_143e1d668)
                                rcx_8.b = 0
                            else
                                rcx_8.b = 1
                            
                            if (rax_14 == 0)
                                continue
                            else if (rcx_8.b != 0)
                                continue
                            else
                                int32_t rax_15 = *(rax_14 + 0xc)
                                uint32_t rdx_8 = zx.d(rax_15.w)
                                
                                if (rax_15 s< 0)
                                    rax_15 += 0xffff
                                    rdx_8 -= 0x10000
                                
                                int64_t rdx_9 = sx.q(rdx_8) * 3
                                int64_t rcx_10 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                                void* r8_2 = rcx_10 + (rdx_9 << 3)
                                int32_t rdx_10 = *(rcx_10 + (rdx_9 << 3) + 8)
                                
                                if (((rdx_10 u>> 0x1d).b & 1) != 0)
                                    *rdi_8 = 0
                                else if (((rdx_10 u>> 0x1c).b & 1) != 0 && test_bit(rdx_10, 0x1c))
                                    do
                                        bool z_1
                                        
                                        if (rdx_10 == *(r8_2 + 8))
                                            *(r8_2 + 8) = rdx_10 & 0xefffffff
                                            z_1 = true
                                        else
                                            *(r8_2 + 8)
                                            z_1 = false
                                        
                                        if (z_1)
                                            goto label_140cc8844
                                        
                                        rdx_10 = *(r8_2 + 8)
                                    while (test_bit(rdx_10, 0x1c))
                                    
                                    r8 = var_4b0_1
                                    continue
                            
                            r8 = var_4b0_1
                            continue
                        case 2
                            rbx_3 = zx.d(rax_13.b)
                            rdi_8 = (rax_13 u>> 0xd) + r8
                            var_4b8_1 = rbx_3
                            void* rax_66 = *rdi_8
                            
                            if (rax_66 u< data_143e1d660 || rax_66 u>= data_143e1d668)
                                rcx_8.b = 0
                            else
                                rcx_8.b = 1
                            
                            if (rax_66 == 0)
                                continue
                            else if (rcx_8.b != 0)
                                continue
                            else
                                int32_t rax_67 = *(rax_66 + 0xc)
                                uint32_t rdx_27 = zx.d(rax_67.w)
                                
                                if (rax_67 s< 0)
                                    rax_67 += 0xffff
                                    rdx_27 -= 0x10000
                                
                                int64_t rdx_28 = sx.q(rdx_27) * 3
                                int64_t rcx_38 = *(data_143e1d9a0 + (sx.q(rax_67 s>> 0x10) << 3))
                                void* r8_6 = rcx_38 + (rdx_28 << 3)
                                int32_t rdx_29 = *(rcx_38 + (rdx_28 << 3) + 8)
                                
                                if (((rdx_29 u>> 0x1c).b & 1) != 0 && test_bit(rdx_29, 0x1c))
                                    while (true)
                                        bool z_4
                                        
                                        if (rdx_29 == *(r8_6 + 8))
                                            *(r8_6 + 8) = rdx_29 & 0xefffffff
                                            z_4 = true
                                        else
                                            *(r8_6 + 8)
                                            z_4 = false
                                        
                                        if (z_4)
                                        label_140cc8844:
                                            int64_t rbx_4 = sx.q(r12[1].d)
                                            int32_t rax_25 = (rbx_4 + 1).d
                                            r12[1].d = rax_25
                                            
                                            if (rax_25 s> *(r12 + 0xc))
                                                sub_1405a4d70(r12)
                                                r9_2 = var_4a0_1
                                            
                                            r8 = var_4b0_1
                                            *(*r12 + (rbx_4 << 3)) = *rdi_8
                                            rbx_3 = var_4b8_1
                                            break
                                        
                                        rdx_29 = *(r8_6 + 8)
                                        
                                        if (not(test_bit(rdx_29, 0x1c)))
                                            r8 = var_4b0_1
                                            break
                                    
                                    continue
                            
                            r8 = var_4b0_1
                            continue
                        case 3
                            rbx_3 = zx.d(rax_13.b)
                            var_4b8_1 = rbx_3
                            int64_t rsi_2 = 0
                            void* r14_4 = (rax_13 u>> 0xd) + r8
                            int64_t r15_1 = sx.q(*(r14_4 + 8))
                            
                            if (r15_1 s> 0)
                                do
                                    int64_t rax_27 = *r14_4
                                    int64_t* rdi_9 = rax_27 + (rsi_2 << 3)
                                    void* rax_28 = *(rax_27 + (rsi_2 << 3))
                                    
                                    if (rax_28 u< data_143e1d660 || rax_28 u>= data_143e1d668)
                                        rcx_8.b = 0
                                    else
                                        rcx_8.b = 1
                                    
                                    if (rax_28 != 0 && rcx_8.b == 0)
                                        int32_t rax_29 = *(rax_28 + 0xc)
                                        uint32_t rdx_12 = zx.d(rax_29.w)
                                        
                                        if (rax_29 s< 0)
                                            rax_29 += 0xffff
                                            rdx_12 -= 0x10000
                                        
                                        int64_t rdx_13 = sx.q(rdx_12) * 3
                                        rcx_8 = *(data_143e1d9a0 + (sx.q(rax_29 s>> 0x10) << 3))
                                        int64_t r8_3 = rcx_8 + (rdx_13 << 3)
                                        int32_t rdx_14 = *(rcx_8 + (rdx_13 << 3) + 8)
                                        
                                        if (((rdx_14 u>> 0x1d).b & 1) != 0)
                                            *rdi_9 = 0
                                        else if (((rdx_14 u>> 0x1c).b & 1) != 0
                                                && test_bit(rdx_14, 0x1c))
                                            do
                                                bool z_2
                                                
                                                if (rdx_14 == *(r8_3 + 8))
                                                    *(r8_3 + 8) = rdx_14 & 0xefffffff
                                                    z_2 = true
                                                else
                                                    *(r8_3 + 8)
                                                    z_2 = false
                                                
                                                if (z_2)
                                                    int64_t rbx_5 = sx.q(r12[1].d)
                                                    int32_t rax_39 = (rbx_5 + 1).d
                                                    r12[1].d = rax_39
                                                    
                                                    if (rax_39 s> *(r12 + 0xc))
                                                        sub_1405a4d70(r12)
                                                    
                                                    *(*r12 + (rbx_5 << 3)) = *rdi_9
                                                    break
                                                
                                                rdx_14 = *(r8_3 + 8)
                                            while (test_bit(rdx_14, 0x1c))
                                    
                                    rsi_2 += 1
                                while (rsi_2 s< r15_1)
                                
                                r8 = var_4b0_1
                                rbx_3 = var_4b8_1
                                r9_2 = var_4a0_1
                            
                        label_140cc86f6:
                            r15 = var_4a8
                            r14_1 = var_488_1
                            continue
                        case 4
                            r13_1 = &r13_1[3]
                            void* rdx_22 = (rax_13 u>> 0xd) + r8
                            r8 = *rdx_22
                            *r13_1 = r8
                            var_4b0_1 = r8
                            r13_1[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            *(r13_1 + 0xc) = *(rdx_22 + 8)
                            int32_t rax_59 = *(*r9_2 + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_25 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_60 = rax_59 + rcx_25
                            r13_1[2].d = r11_1.d
                            
                            if (*(r13_1 + 0xc) != 0)
                                goto label_140cc8cb7
                            
                            r11_1 = zx.q(rax_60 u>> 8)
                            rbx_3 = zx.d(*(*r9_2 + (r11_1 << 2) - 4)) - zx.d(rax_60.b)
                            var_4b8_1 = rbx_3
                            continue
                        case 5
                            r13_1[3] = r8
                            r13_1 = &r13_1[3]
                            r13_1[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            int64_t rcx_43 = sx.q(r11_1.d + 1)
                            r11_1 = zx.q(r11_1.d + 2)
                            *(r13_1 + 0xc) = *(*r9_2 + (rcx_43 << 2))
                            r13_1[2].d = r11_1.d
                        label_140cc8cb7:
                            rbx_3 = 0
                            var_4b8_1 = 0
                            continue
                        case 6
                            rcx_47 = (rax_13 u>> 0xd) + r8
                            r11_7 = zx.q(r11_1.d + 2)
                            r8_9 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                        label_140cc8ce8:
                            rbx_3 = zx.d(rax_13.b)
                            var_4b8_1 = rbx_3
                            r8_9(rcx_47, &var_430)
                            r11_1 = r11_7
                        label_140cc8d00:
                            r8 = var_4b0_1
                            r9_2 = var_4a0_1
                            continue
                        case 7
                            r11_7 = zx.q(r11_1.d + 2)
                            r8_9 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            rcx_47 = r14_1
                            goto label_140cc8ce8
                        case 8
                            rbx_9 = var_428
                            var_498_3 = zx.q(r11_1.d + 2)
                            uint64_t rdi_15 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            var_4b8_1 = zx.d(rax_13.b)
                            
                            if (rbx_9 == 0)
                                sub_140d1e450(&var_430)
                                rbx_9 = var_428
                            
                            *(rbx_9 + 0x90) = r14_1
                            void var_3c8
                            void** var_368
                            (*(*rdi_15 + 0x88))(rdi_15, 
                                *SymBuffer::end(sub_140b4cb20(&var_368, rbx_9), &var_3c8), 
                                (rax_13 u>> 0xd) + r8, 0, var_4d8, var_4d0, var_4c8)
                            rcx_56 = &var_368
                        label_140cc8db8:
                            sub_140b4cbb0(rcx_56)
                            r8 = var_4b0_1
                            r11_1 = var_498_3
                            r9_2 = var_4a0_1
                            *(rbx_9 + 0x90) = 0
                            rbx_3 = var_4b8_1
                            continue
                        case 9
                            rbx_9 = var_428
                            var_498_3 = zx.q(r11_1.d + 2)
                            uint64_t rdi_18 = zx.q(*(r10_1 + (sx.q(r11_1.d + 1) << 2))) << 0x20
                                | zx.q(*(r10_1 + (sx.q(r11_1.d) << 2)))
                            var_4b8_1 = zx.d(rax_13.b)
                            
                            if (rbx_9 == 0)
                                sub_140d1e450(&var_430)
                                rbx_9 = var_428
                            
                            *(rbx_9 + 0x90) = r14_1
                            void var_3c0
                            void** var_1d8
                            (*(*rdi_18 + 0x88))(rdi_18, 
                                *SymBuffer::end(sub_140b4cb20(&var_1d8, rbx_9), &var_3c0), 
                                (rax_13 u>> 0xd) + r8, 0, var_4d8, var_4d0, var_4c8)
                            rcx_56 = &var_1d8
                            goto label_140cc8db8
                        case 0xa
                            void* rsi_12 = (rax_13 u>> 0xd) + r8
                            int32_t r9_4 = *(rsi_12 + 0xc)
                            
                            if (r9_4 != 0)
                                int32_t rcx_63 = *(rsi_12 + 8)
                                
                                if (rcx_63 s>= 0)
                                    if (rcx_63 s>= data_143e1d9b4)
                                        goto label_140cc9019
                                    
                                    uint32_t r8_14 = zx.d(rcx_63.w)
                                    
                                    if (rcx_63 s< 0)
                                        rcx_63 += 0xffff
                                        r8_14 -= 0x10000
                                    
                                    int64_t* rcx_67 =
                                        *(data_143e1d9a0 + (sx.q(rcx_63 s>> 0x10) << 3))
                                        + sx.q(r8_14) * 0x18
                                    
                                    if (rcx_67 == 0)
                                        r8 = var_4b0_1
                                    label_140cc9019:
                                        r9_2 = var_4a0_1
                                        rbx_3 = zx.d(rax_13.b)
                                        var_4b8_1 = rbx_3
                                        continue
                                    
                                    rbx_3 = zx.d(rax_13.b)
                                    var_4b8_1 = rbx_3
                                    
                                    if (rcx_67[2].d == r9_4)
                                        void* const rdi_19 = *rcx_67
                                        var_4b8_1 = rbx_3
                                        
                                        if (rdi_19 u< data_143e1d660 || rdi_19 u>= data_143e1d668)
                                            rax_13.b = 0
                                        else
                                            rax_13.b = 1
                                        
                                        r8 = var_4b0_1
                                        r9_2 = var_4a0_1
                                        
                                        if (rdi_19 == 0)
                                            continue
                                        else
                                            if (rax_13.b == 0)
                                                int32_t rax_81 = *(rdi_19 + 0xc)
                                                uint32_t rdx_46 = zx.d(rax_81.w)
                                                
                                                if (rax_81 s< 0)
                                                    rax_81 += 0xffff
                                                    rdx_46 -= 0x10000
                                                
                                                int64_t rdx_47 = sx.q(rdx_46) * 3
                                                int64_t rcx_69 =
                                                    *(data_143e1d9a0 + (sx.q(rax_81 s>> 0x10) << 3))
                                                void* r8_16 = rcx_69 + (rdx_47 << 3)
                                                int32_t rdx_48 = *(rcx_69 + (rdx_47 << 3) + 8)
                                                
                                                if (((rdx_48 u>> 0x1d).b & 1) != 0)
                                                    rdi_19 = nullptr
                                                else if (((rdx_48 u>> 0x1c).b & 1) != 0
                                                        && test_bit(rdx_48, 0x1c))
                                                    do
                                                        bool z_5
                                                        
                                                        if (rdx_48 == *(r8_16 + 8))
                                                            *(r8_16 + 8) = rdx_48 & 0xefffffff
                                                            z_5 = true
                                                        else
                                                            *(r8_16 + 8)
                                                            z_5 = false
                                                        
                                                        if (z_5)
                                                            int64_t rbx_10 = sx.q(r12[1].d)
                                                            int32_t rax_91 = (rbx_10 + 1).d
                                                            r12[1].d = rax_91
                                                            
                                                            if (rax_91 s> *(r12 + 0xc))
                                                                sub_1405a4d70(r12)
                                                            
                                                            *(*r12 + (rbx_10 << 3)) = rdi_19
                                                            rbx_3 = var_4b8_1
                                                            break
                                                        
                                                        rdx_48 = *(r8_16 + 8)
                                                    while (test_bit(rdx_48, 0x1c))
                                            
                                            r8 = var_4b0_1
                                            r9_2 = var_4a0_1
                                            
                                            if (rdi_19 != 0)
                                                continue
                                            else
                                                *rsi_12 = 0
                                                *(rsi_12 + 8) = 0xffffffff
                                                *(rsi_12 + 0xc) = 0
                                                continue
                                else
                                    r9_2 = var_4a0_1
                                    rbx_3 = zx.d(rax_13.b)
                                    var_4b8_1 = rbx_3
                                    continue
                            else
                                r9_2 = var_4a0_1
                                rbx_3 = zx.d(rax_13.b)
                                var_4b8_1 = rbx_3
                                continue
                            
                            goto label_140cc8d00
                        case 0xb
                            rbx_3 = zx.d(rax_13.b)
                            void* r14_10 = (rax_13 u>> 0xd) + r8
                            var_4b8_1 = rbx_3
                            int64_t i_3 = sx.q(*(r14_10 + 8))
                            
                            if (i_3 s> 0)
                                int64_t* rsi_13 = nullptr
                                int64_t i_1
                                
                                do
                                    int64_t rax_93 = *r14_10
                                    int32_t r8_17 = *(rax_93 + rsi_13 + 0xc)
                                    
                                    if (r8_17 != 0)
                                        int32_t rax_94 = *(rax_93 + rsi_13 + 8)
                                        
                                        if (rax_94 s>= 0 && rax_94 s< data_143e1d9b4)
                                            uint32_t rdx_50 = zx.d(rax_94.w)
                                            
                                            if (rax_94 s< 0)
                                                rax_94 += 0xffff
                                                rdx_50 -= 0x10000
                                            
                                            int64_t* rax_98 =
                                                *(data_143e1d9a0 + (sx.q(rax_94 s>> 0x10) << 3))
                                                + sx.q(rdx_50) * 0x18
                                            
                                            if (rax_98 != 0 && rax_98[2].d == r8_17)
                                                void* const rdi_20 = *rax_98
                                                
                                                if (rdi_20 u< data_143e1d660
                                                        || rdi_20 u>= data_143e1d668)
                                                    rax_98.b = 0
                                                else
                                                    rax_98.b = 1
                                                
                                                if (rdi_20 != 0)
                                                    if (rax_98.b == 0)
                                                        int32_t rax_99 = *(rdi_20 + 0xc)
                                                        uint32_t rdx_52 = zx.d(rax_99.w)
                                                        
                                                        if (rax_99 s< 0)
                                                            rax_99 += 0xffff
                                                            rdx_52 -= 0x10000
                                                        
                                                        int64_t rdx_53 = sx.q(rdx_52) * 3
                                                        int64_t rcx_76 = *(data_143e1d9a0
                                                            + (sx.q(rax_99 s>> 0x10) << 3))
                                                        int32_t rax_103 =
                                                            *(rcx_76 + (rdx_53 << 3) + 8)
                                                        void* r8_18 = rcx_76 + (rdx_53 << 3)
                                                        
                                                        if (((rax_103 u>> 0x1d).b & 1) != 0)
                                                            rdi_20 = nullptr
                                                        else if (((rax_103 u>> 0x1c).b & 1) != 0
                                                                && test_bit(rax_103, 0x1c))
                                                            do
                                                                bool z_6
                                                                
                                                                if (rax_103 == *(r8_18 + 8))
                                                                    *(r8_18 + 8) = rax_103 & 0xefffffff
                                                                    z_6 = true
                                                                else
                                                                    *(r8_18 + 8)
                                                                    z_6 = false
                                                                
                                                                if (z_6)
                                                                    int64_t rbx_11 = sx.q(r12[1].d)
                                                                    int32_t rax_105 = (rbx_11 + 1).d
                                                                    r12[1].d = rax_105
                                                                    
                                                                    if (rax_105 s> *(r12 + 0xc))
                                                                        sub_1405a4d70(r12)
                                                                    
                                                                    *(*r12 + (rbx_11 << 3)) = rdi_20
                                                                    break
                                                                
                                                                rax_103 = *(r8_18 + 8)
                                                            while (test_bit(rax_103, 0x1c))
                                                    
                                                    if (rdi_20 == 0)
                                                        int64_t rax_107 = *r14_10
                                                        *(rsi_13 + rax_107) = 0
                                                        *(rsi_13 + rax_107 + 8) = 0xffffffff
                                                        *(rsi_13 + rax_107 + 0xc) = 0
                                    
                                    rsi_13 = &rsi_13[4]
                                    i_1 = i_3
                                    i_3 -= 1
                                while (i_1 != 1)
                                r8 = var_4b0_1
                                rbx_3 = var_4b8_1
                                r9_2 = var_4a0_1
                            
                            goto label_140cc86f6
                        case 0xc, 0xe, 0xf
                            rbx_3 = zx.d(rax_13.b)
                            var_4b8_1 = rbx_3
                            continue
                        case 0xd
                            break
                        case 0x10
                            rbx_3 = zx.d(rax_13.b)
                            var_4b8_1 = rbx_3
                            int64_t rsi_3 = 0
                            void* r14_7 = (rax_13 u>> 0xd) + r8
                            int64_t r15_2 = sx.q(*(r14_7 + 8))
                            
                            if (r15_2 s> 0)
                                do
                                    void* rax_42 = *r14_7
                                    
                                    if ((rax_42.b & 1) != 0)
                                        rax_42 = (rax_42 s>> 1) + r14_7
                                    
                                    void* rdi_10 = rax_42 + (rsi_3 << 3)
                                    void* rax_43 = *(rax_42 + (rsi_3 << 3))
                                    
                                    if (rax_43 u< data_143e1d660 || rax_43 u>= data_143e1d668)
                                        rcx_8.b = 0
                                    else
                                        rcx_8.b = 1
                                    
                                    if (rax_43 != 0 && rcx_8.b == 0)
                                        int32_t rax_44 = *(rax_43 + 0xc)
                                        uint32_t rdx_16 = zx.d(rax_44.w)
                                        
                                        if (rax_44 s< 0)
                                            rax_44 += 0xffff
                                            rdx_16 -= 0x10000
                                        
                                        int64_t rdx_17 = sx.q(rdx_16) * 3
                                        rcx_8 = *(data_143e1d9a0 + (sx.q(rax_44 s>> 0x10) << 3))
                                        int64_t r8_4 = rcx_8 + (rdx_17 << 3)
                                        int32_t rdx_18 = *(rcx_8 + (rdx_17 << 3) + 8)
                                        
                                        if (((rdx_18 u>> 0x1d).b & 1) != 0)
                                            *rdi_10 = 0
                                        else if (((rdx_18 u>> 0x1c).b & 1) != 0
                                                && test_bit(rdx_18, 0x1c))
                                            do
                                                bool z_3
                                                
                                                if (rdx_18 == *(r8_4 + 8))
                                                    *(r8_4 + 8) = rdx_18 & 0xefffffff
                                                    z_3 = true
                                                else
                                                    *(r8_4 + 8)
                                                    z_3 = false
                                                
                                                if (z_3)
                                                    int64_t rbx_6 = sx.q(r12[1].d)
                                                    int32_t rax_54 = (rbx_6 + 1).d
                                                    r12[1].d = rax_54
                                                    
                                                    if (rax_54 s> *(r12 + 0xc))
                                                        sub_1405a4d70(r12)
                                                    
                                                    *(*r12 + (rbx_6 << 3)) = *rdi_10
                                                    break
                                                
                                                rdx_18 = *(r8_4 + 8)
                                            while (test_bit(rdx_18, 0x1c))
                                    
                                    rsi_3 += 1
                                while (rsi_3 s< r15_2)
                                
                                r8 = var_4b0_1
                                rbx_3 = var_4b8_1
                                r9_2 = var_4a0_1
                            
                            goto label_140cc86f6
                        case 0x11
                            r13_1 = &r13_1[3]
                            void* rdx_25 = (rax_13 u>> 0xd) + r8
                            r8 = *rdx_25
                            
                            if ((r8.b & 1) != 0)
                                r8 = (r8 s>> 1) + rdx_25
                            
                            *r13_1 = r8
                            var_4b0_1 = r8
                            r13_1[1].d = *(*r9_2 + (sx.q(r11_1.d) << 2))
                            *(r13_1 + 0xc) = *(rdx_25 + 8)
                            int32_t rax_64 = *(*r9_2 + (sx.q(r11_1.d + 1) << 2))
                            int32_t rcx_32 = (r11_1.d + 1) << 8
                            r11_1 = zx.q(r11_1.d + 2)
                            int32_t rax_65 = rax_64 + rcx_32
                            r13_1[2].d = r11_1.d
                            
                            if (*(r13_1 + 0xc) != 0)
                                goto label_140cc8cb7
                            
                            uint32_t rcx_34 = rax_65 u>> 8
                            r11_1 = zx.q(rcx_34)
                            rbx_3 = zx.d(*(*r9_2 + (zx.q(rcx_34) << 2) - 4)) - zx.d(rax_65.b)
                            var_4b8_1 = rbx_3
                            continue
            
            rbx_13 = r12[1].d
            r14 = var_48c
            
            if (rbx_13 s>= r14)
                int64_t* rax_112 = sub_140a242a0()
                int32_t rbx_14 = r12[1].d
                int64_t rdx_58 = *rax_112
                int32_t rax_113 = (*(rdx_58 + 0x18))(rax_112, rdx_58)
                rbx_13 = r12[1].d
                int32_t temp0_2 = divs.dp.d(sx.q(rbx_14), rax_113)
                int32_t rsi_14 = temp0_2
                
                if (r14 s>= temp0_2)
                    rsi_14 = r14
                
                if (rbx_13 s>= r14)
                    int32_t r9_6 = rbx_13
                    
                    do
                        rbx_13 = r9_6 - rsi_14
                        
                        if (rbx_13 s<= 0)
                            rbx_13 = 0
                        
                        int32_t r9_7 = r9_6 - rbx_13
                        int32_t var_464 = rbx_13
                        int32_t var_468 = r9_7
                        void* rdi_21 = *arg3
                        
                        if (rdi_21 == 0)
                            sub_140cb0210(&arg1[2], r12, rbx_13, r9_7)
                        else
                            int64_t* var_3e8 = r12
                            int64_t* var_3d0 = arg1
                            void var_3a8
                            int64_t* rax_118 = sub_140cb6e80(&var_3a8, nullptr, 0xff)
                            var_4c8 = arg1[1]
                            var_4d0 = &var_468
                            var_4d8 = &var_464
                            void var_3b8
                            sub_14084e1b0(rdi_21, 
                                sub_140ca9b50(rax_118, &var_3b8, &var_3d0, &var_3e8, var_4d8, 
                                    var_4d0, var_4c8))
                        
                        r12[1].d = rbx_13
                        r9_6 = rbx_13
                    while (rbx_13 s>= r14)
                    
                    r15 = var_4a8
            
            rsi = arg2
            rdi = var_490
            rax_4 = rsi[1].d
            
            if (rdi s>= rax_4)
                break
        
        r13 = arg1
    
    if (rbx_13 s>= r14)
        int64_t* rax_121 = sub_140a242a0()
        int32_t rbx_16 = r12[1].d
        int64_t rdx_63 = *rax_121
        int32_t rax_122 = (*(rdx_63 + 0x18))(rax_121, rdx_63)
        int32_t rbx_17 = r12[1].d
        int32_t temp0_3 = divs.dp.d(sx.q(rbx_16), rax_122)
        int32_t r14_11 = temp0_3
        
        if (var_48c s>= temp0_3)
            r14_11 = var_48c
        
        int32_t var_470 = 0
        int32_t rdx_66 = 0
        
        if (rbx_17 s> 0)
            int32_t rdi_22 = 0
            
            do
                void* rsi_15 = *arg3
                int32_t rbx_18 = rbx_17 - rdi_22
                
                if (r14_11 s<= rbx_18)
                    rbx_18 = r14_11
                
                var_46c = rbx_18
                
                if (rsi_15 == 0)
                    sub_140cb0210(&r13[2], r12, rdx_66, rbx_18)
                else
                    int64_t* var_400 = r12
                    int64_t* var_3f8 = r13
                    void var_390
                    int64_t* rax_126 = sub_140cb6e80(&var_390, nullptr, 0xff)
                    var_4c8 = r13[1]
                    var_4d0 = &var_46c
                    var_4d8 = &var_470
                    void var_3b0
                    sub_14084e1b0(rsi_15, 
                        sub_140ca9b50(rax_126, &var_3b0, &var_3f8, &var_400, var_4d8, var_4d0, 
                            var_4c8))
                
                rdx_66 = rdi_22 + rbx_18
                rbx_17 = r12[1].d
                var_470 = rdx_66
                rdi_22 = rdx_66
            while (rdx_66 s< rbx_17)
            
            r15 = var_4a8
        
        r14 = var_48c
        rdi = var_490
        rsi = arg2
        r12[1].d = 0
    else if (rbx_13 != 0)
        if (rsi != r12)
            int128_t zmm1_1 = *rsi
            int128_t var_378_1 = zmm1_1
            *rsi = *r12
            *r12 = zmm1_1
        
        rdi = 0
        var_490 = 0
        var_460 = 0
        r12[1].d = 0
    
    sub_140d16360(&var_430)
    
    if (rdi s>= rsi[1].d)
        break

int32_t rax_129 = *(r12 + 0xc)
void* rbx_19 = r13[1]
r12[1].d = 0

if (rax_129 s< 0 && rax_129 != 0)
    sub_1405c5570(r12, 0)

int64_t result = sub_140ccd380(rbx_19, r12)
void** rcx_106 = var_440

if (rcx_106 != 0)
    result = sub_140a74f90(rcx_106)

__security_check_cookie(rax_1 ^ &var_4f8)
return result
