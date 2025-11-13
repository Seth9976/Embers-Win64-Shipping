// 函数: sub_142af7210
// 地址: 0x142af7210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int32_t rdx = -1
char arg_20 = 0
int32_t rbx = 0
char var_88 = 0
int32_t var_64 = 0xffffffff

if (*(rdi + 0xd0) s< 0)
    goto label_142af726f

int32_t* result = sub_142b6c150(rdi, arg1, 0xffffffff, arg2)

if (*arg2 s<= 0 && *(rdi + 0x119) s>= 0)
    rdx = -1
label_142af726f:
    void* rax_1 = *(rdi + 0x30)
    char r9_2 = *(rax_1 + 0xfc)
    char rcx_1 = *(rax_1 + 0xfd)
    char var_98_1 = r9_2
    
    if (r9_2 != 0)
        if (r9_2 == 1 && *(rax_1 + 0xfe) != 0)
            return sub_142afb040(arg1, arg2, rdi)
    else if ((rcx_1 & 2) == 0)
        if ((rcx_1 & 1) != 0)
            return sub_142afb830(arg1, arg2)
        
        return sub_142afb510(arg1, arg2, rdi)
    
    int32_t r10_1 = *(arg1 + 0x28)
    int16_t* var_60 = *(arg1 + 0x10)
    int64_t rax_6 = *(arg1 + 0x18)
    uint8_t* rax_7 = *(arg1 + 0x20)
    uint8_t* var_90 = rax_7
    int32_t r10_2 = r10_1 - rax_7.d
    int32_t* result_1 = *(arg1 + 0x30)
    void* rax_9 = *(rdi + 0x30)
    int64_t arg_10 = arg3
    int64_t rcx_4 = *(rax_9 + 0x58)
    int64_t var_48_1
    
    if (*(rax_9 + 0xfe) == 0)
        var_48_1 = 0
    else
        var_48_1 = *(rax_9 + 0x60)
    
    int32_t rcx_5 = *(rdi + 0x38)
    int64_t var_70_1
    
    if ((rcx_5.b & 0x10) == 0)
        var_70_1 = *(rax_9 + 0xe8)
    else
        var_70_1 = *(rax_9 + 0xf0)
    
    int32_t rax_10 = *(rax_9 + 0x104)
    uint64_t r8_3 = zx.q(*(rdi + 0x54))
    int32_t r11_2
    
    if (r9_2 != 0xc)
        r11_2 = 0
    else
        r11_2 = *(rdi + 0x50)
        
        if (r11_2 == 0)
            r11_2 = 1
    
    int32_t rsi = sbb.d(arg3.d, arg3.d, r8_3.d != 0)
    int32_t r12_1 = 0
    uint8_t arg_8
    char r13_1
    
    if (test_bit(rcx_5, 0xc))
        arg_8 = 0xa
        r13_1 = 2
        arg_20 = 0x41
    else if (test_bit(rcx_5, 0xd))
        arg_8 = 0x29
        r13_1 = 1
    else if (not(test_bit(rcx_5, 0xe)))
        arg_8 = 0xf
        r13_1 = 1
    else
        arg_8 = 0x1a
        r13_1 = 2
        arg_20 = 0x71
    
    char var_68_1
    char arg_18
    
    if (test_bit(rcx_5, 0xc))
        arg_18 = 0xa
        var_88 = 0x42
        var_68_1 = 2
    else if (test_bit(rcx_5, 0xd))
        arg_18 = 0x28
        var_68_1 = 1
    else if (not(test_bit(rcx_5, 0xe)))
        arg_18 = 0xe
        var_68_1 = 1
    else
        arg_18 = 0x1a
        var_88 = 0x70
        var_68_1 = 2
    
    if (r8_3.d == 0)
        goto label_142af7434
    
    if (r10_2 s<= 0)
        goto label_142af7434
    
    int64_t rcx_6 = rax_6
label_142af77c3:
    int16_t* rax_58 = var_60
    
    if (rax_58 u>= rcx_6)
    label_142af7d87:
        
        if (*arg2 s<= 0 && r9_2 == 0xc && r11_2 == 2 && *(arg1 + 2) != 0 && var_60 u>= rcx_6
                && r8_3.d == 0)
            if (r10_2 s<= 0)
                *(rdi + 0x68) = arg_8
                
                if (r13_1 == 2)
                    *(rdi + 0x69) = arg_20
                
                *(rdi + 0x5b) = r13_1
                *arg2 = 0xf
            else
                *var_90 = arg_8
                void* rax_131 = &var_90[1]
                var_90 = rax_131
                
                if (r13_1 == r11_2.b)
                    if (r10_2 s>= r11_2)
                        *rax_131 = arg_20
                        var_90 = &var_90[1]
                    else
                        *(rdi + 0x68) = arg_20
                        *(rdi + 0x5b) = 1
                        *arg2 = 0xf
                
                int32_t* result_10 = result_1
                
                if (result_10 != 0)
                    *result_10 = rdx
                    result_1 = &result_1[1]
            
            r11_2 = 1
    else
        uint32_t rcx_28 = zx.d(*rax_58)
        
        if ((rcx_28 & 0xfffffc00) != 0xdc00)
        label_142af77b3:
            *arg2 = 0xc
        else
            var_60 = &var_60[1]
            r12_1 += 1
            r8_3 = zx.q(((r8_3.d - 0xd7f7) << 0xa) + rcx_28)
            
            if ((rcx_1 & 1) != 0)
            label_142af7826:
                int32_t r9_3 = *(rcx_4 + (
                    zx.q(zx.d(*(rcx_4 + (sx.q(r8_3.d) s>> 0xa << 1))) + (r8_3.d s>> 4 & 0x3f))
                    << 2))
                uint32_t rdx_5
                
                if (zx.d(var_98_1) - 1 u> 0xda)
                label_142af7ae6:
                    r9_3 = 0
                    rdx_5 = 0
                    rbx = 0
                else
                    switch (var_98_1)
                        case 1
                            rdx_5 = zx.d(
                                *(var_70_1 + (zx.q((r8_3.d & 0xf) + (zx.d(r9_3.w) << 4)) << 1)))
                            int32_t rbx_3
                            rbx_3.b = rdx_5 u> 0xff
                            rbx = rbx_3 + 1
                        case 2
                            char* rcx_54 =
                                zx.q(((zx.d(r9_3.w) << 4) + (r8_3.d & 0xf)) * 3) + var_70_1
                            rdx_5 = (zx.d(*rcx_54) << 8 | zx.d(rcx_54[1])) << 8 | zx.d(rcx_54[2])
                            
                            if (rdx_5 u> 0xff)
                                int32_t rbx_4
                                rbx_4.b = rdx_5 u> 0xffff
                                rbx = rbx_4 + 2
                            else
                                rbx = 1
                        case 3
                            rdx_5 = *(var_70_1 + (zx.q((r8_3.d & 0xf) + (zx.d(r9_3.w) << 4)) << 2))
                            
                            if (rdx_5 u<= 0xff)
                                rbx = 1
                            else if (rdx_5 u> 0xffff)
                                int32_t rbx_5
                                rbx_5.b = rdx_5 u> 0xffffff
                                rbx = rbx_5 + 3
                            else
                                rbx = 2
                        case 4, 5, 6, 7, 0xa, 0xb, 0xd, 0xe, 0xf, 0x10, 0x11, 0x12, 0x13, 0x14, 
                                0x15, 0x16, 0x17, 0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, 
                                0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 
                                0x2b, 0x2c, 0x2d, 0x2e, 0x2f, 0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 
                                0x36, 0x37, 0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, 0x40, 
                                0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4a, 0x4b, 
                                0x4c, 0x4d, 0x4e, 0x4f, 0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 
                                0x57, 0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, 0x60, 0x61, 
                                0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x6a, 0x6b, 0x6c, 
                                0x6d, 0x6e, 0x6f, 0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, 
                                0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, 0x80, 0x81, 0x82, 
                                0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 
                                0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 
                                0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, 0xa0, 0xa1, 0xa2, 0xa3, 
                                0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 
                                0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, 0xb8, 0xb9, 
                                0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, 0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 
                                0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 
                                0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, 0xd8, 0xd9, 0xda
                            goto label_142af7ae6
                        case 8
                            rdx_5 = zx.d(
                                *(var_70_1 + (zx.q((r8_3.d & 0xf) + (zx.d(r9_3.w) << 4)) << 1)))
                            
                            if (rdx_5 u<= 0xff)
                                rbx = 1
                            else if (not(test_bit(rdx_5, 0xf)))
                                rdx_5 |= 0x8e8000
                                rbx = 3
                            else if (rdx_5.b s< 0)
                                rbx = 2
                            else
                                rdx_5 |= 0x8f0080
                                rbx = 3
                        case 9
                            char* rcx_65 =
                                zx.q(((zx.d(r9_3.w) << 4) + (r8_3.d & 0xf)) * 3) + var_70_1
                            rdx_5 = (zx.d(*rcx_65) << 8 | zx.d(rcx_65[1])) << 8 | zx.d(rcx_65[2])
                            
                            if (rdx_5 u<= 0xff)
                                rbx = 1
                            else if (rdx_5 u<= 0xffff)
                                rbx = 2
                            else if (not(test_bit(rdx_5, 0x17)))
                                rdx_5 |= 0x8e800000
                                rbx = 4
                            else if (test_bit(rdx_5, 0xf))
                                rbx = 3
                            else
                                rdx_5 |= 0x8f008000
                                rbx = 4
                        case 0xc
                            int32_t rcx_37 = r8_3.d & 0xf
                            *(rdi + 0x50) = r11_2
                            rdx_5 = zx.d(*(var_70_1 + (zx.q((zx.d(r9_3.w) << 4) + rcx_37) << 1)))
                            
                            if (rdx_5 u> 0xff)
                                if (r11_2 == 2)
                                    rbx = r11_2
                                else if (var_68_1 != 1)
                                    if (var_68_1 == 2)
                                        rbx = 4
                                        rdx_5 |= (zx.d(arg_18) << 8 | zx.d(var_88)) << 0x10
                                    
                                    r11_2 = 2
                                else
                                    rbx = 3
                                    rdx_5 |= zx.d(arg_18) << 0x10
                                    r11_2 = 2
                            else if (rdx_5 == 0 && not(test_bit(r9_3, zx.d(rcx_37.b + 0x10))))
                                rbx = 0
                            else if (r11_2 s<= 1)
                                rbx = 1
                            else if (r13_1 != 1)
                                if (r13_1 == 2)
                                    rbx = 3
                                    rdx_5 |= (zx.d(arg_8) << 8 | zx.d(arg_20)) << 8
                                
                                r11_2 = 1
                            else
                                rbx = 2
                                rdx_5 |= zx.d(arg_8) << 8
                                r11_2 = 1
                        case 0xdb
                            rdx_5 = zx.d(
                                *(var_70_1 + (zx.q((r8_3.d & 0xf) + (zx.d(r9_3.w) << 4)) << 1)))
                            
                            if (rdx_5 u<= 0xff)
                                goto label_142af7ae6
                            
                            rbx = 2
                
                if (test_bit(r9_3, zx.d((r8_3.b & 0xf) + 0x10)))
                label_142af7bc5:
                    r9_2 = var_98_1
                    
                    while (true)
                        if (rbx s> r10_2)
                            uint64_t rbx_6 = zx.q(rbx - r10_2)
                            void* rcx_88 = rdi + 0x68
                            int32_t r8_6 = rbx_6.d
                            
                            if (r8_6 == 1)
                                *rcx_88 = rdx_5.b
                            else
                                if (r8_6 == 2)
                                    goto label_142af7cef
                                
                                if (r8_6 == 3)
                                    *rcx_88 = (rdx_5 u>> 0x10).b
                                    rcx_88 += 1
                                label_142af7cef:
                                    *rcx_88 = (rdx_5 u>> 8).b
                                    *(rcx_88 + 1) = rdx_5.b
                            
                            *(rdi + 0x5b) = rbx_6.b
                            uint32_t rdx_25 = rdx_5 u>> (rbx_6 << 3).b
                            
                            if (r10_2 == 1)
                            label_142af7d56:
                                *var_90 = rdx_25.b
                                var_90 = &var_90[1]
                                int32_t* result_9 = result_1
                                
                                if (result_9 != 0)
                                    *result_9 = rsi
                                    result_1 = &result_1[1]
                            else
                                if (r10_2 == 2)
                                label_142af7d3c:
                                    *var_90 = (rdx_25 u>> 8).b
                                    var_90 = &var_90[1]
                                    int32_t* result_8 = result_1
                                    
                                    if (result_8 != 0)
                                        *result_8 = rsi
                                        result_1 = &result_1[1]
                                    
                                    goto label_142af7d56
                                
                                if (r10_2 == 3)
                                    *var_90 = (rdx_25 u>> 0x10).b
                                    var_90 = &var_90[1]
                                    int32_t* result_7 = result_1
                                    
                                    if (result_7 != 0)
                                        *result_7 = rsi
                                        result_1 = &result_1[1]
                                    
                                    goto label_142af7d3c
                            
                            *arg2 = 0xf
                            r8_3 = 0
                            goto label_142af7e4c
                        
                        if (result_1 != 0)
                            if (rbx == 1)
                                goto label_142af7c93
                            
                            if (rbx == 2)
                                goto label_142af7c7e
                            
                            if (rbx == 3)
                                goto label_142af7c64
                            
                            if (rbx == 4)
                                *var_90 = (rdx_5 u>> 0x18).b
                                int32_t* result_3 = result_1
                                var_90 = &var_90[1]
                                *result_3 = rsi
                                result_1 = &result_1[1]
                            label_142af7c64:
                                *var_90 = (rdx_5 u>> 0x10).b
                                int32_t* result_4 = result_1
                                var_90 = &var_90[1]
                                *result_4 = rsi
                                result_1 = &result_1[1]
                            label_142af7c7e:
                                *var_90 = (rdx_5 u>> 8).b
                                int32_t* result_5 = result_1
                                var_90 = &var_90[1]
                                *result_5 = rsi
                                result_1 = &result_1[1]
                            label_142af7c93:
                                *var_90 = rdx_5.b
                                int32_t* result_6 = result_1
                                var_90 = &var_90[1]
                                *result_6 = rsi
                                result_1 = &result_1[1]
                        else if (rbx == 1)
                            *var_90 = rdx_5.b
                            var_90 = &var_90[1]
                        else
                            if (rbx == 2)
                                goto label_142af7c1b
                            
                            if (rbx == 3)
                                goto label_142af7c0c
                            
                            if (rbx == 4)
                                *var_90 = (rdx_5 u>> 0x18).b
                                var_90 = &var_90[1]
                            label_142af7c0c:
                                *var_90 = (rdx_5 u>> 0x10).b
                                var_90 = &var_90[1]
                            label_142af7c1b:
                                *var_90 = (rdx_5 u>> 8).b
                                var_90 = &var_90[1]
                                *var_90 = rdx_5.b
                                var_90 = &var_90[1]
                        
                        rdx = var_64
                        r10_2 -= rbx
                        r8_3 = 0
                        
                        if (result_1 != 0)
                            rdx = rsi
                            rsi = r12_1
                            var_64 = rdx
                        
                    label_142af7434:
                        int16_t* rax_13 = var_60
                        rcx_6 = rax_6
                        
                        if (rax_13 u>= rcx_6)
                            break
                        
                        if (r10_2 s<= 0)
                            *arg2 = 0xf
                            goto label_142af7e4c
                        
                        r8_3 = zx.q(*rax_13)
                        r12_1 += 1
                        var_60 = &var_60[1]
                        
                        if (r8_3.d s<= 0x7f)
                            if (test_bit(rax_10, zx.d((r8_3.d s>> 2).b)))
                                *var_90 = r8_3.b
                                var_90 = &var_90[1]
                                int32_t* result_2 = result_1
                                
                                if (result_2 != 0)
                                    rdx = rsi
                                    *result_2 = rsi
                                    result_1 = &result_1[1]
                                    rsi = r12_1
                                    var_64 = rdx
                                
                                r10_2 -= 1
                                r8_3 = 0
                                goto label_142af7434
                            
                            rcx_6 = rax_6
                        
                        if (r8_3.d s> 0xd7ff || var_48_1 == 0)
                            if ((r8_3.d & 0xfffff800) != 0xd800)
                                goto label_142af7826
                            
                            if ((rcx_1 & 2) != 0)
                                goto label_142af7826
                            
                            if (not(test_bit(r8_3.d, 0xa)))
                                goto label_142af77c3
                            
                            goto label_142af77b3
                        
                        uint32_t rdx_4 = zx.d(*(var_48_1 + (r8_3 s>> 6 << 1)))
                        
                        if (zx.d(r9_2) - 1 u<= 0xda)
                            switch (r9_2)
                                case 1
                                    rdx_5 = zx.d(*(var_70_1 + (zx.q((r8_3.d & 0x3f) + rdx_4) << 1)))
                                    
                                    if (rdx_5 u> 0xff)
                                        rbx = 2
                                        continue
                                    
                                    if (rdx_5 == 0)
                                        goto label_142af7b35
                                    
                                    rbx = 1
                                    continue
                                case 2
                                    char* rcx_23 = zx.q(((r8_3.d & 0x3f) + rdx_4) * 3) + var_70_1
                                    rdx_5 = (zx.d(*rcx_23) << 8 | zx.d(rcx_23[1])) << 8
                                        | zx.d(rcx_23[2])
                                    
                                    if (rdx_5 u> 0xff)
                                        int32_t rbx_1
                                        rbx_1.b = rdx_5 u> 0xffff
                                        rbx = rbx_1 + 2
                                        continue
                                    else
                                        if (rdx_5 == 0)
                                            goto label_142af7b35
                                        
                                        rbx = 1
                                        continue
                                case 3
                                    rdx_5 = *(var_70_1 + (zx.q((r8_3.d & 0x3f) + rdx_4) << 2))
                                    
                                    if (rdx_5 u<= 0xff)
                                        if (rdx_5 == 0)
                                            goto label_142af7b35
                                        
                                        rbx = 1
                                        continue
                                    else if (rdx_5 u> 0xffff)
                                        int32_t rbx_2
                                        rbx_2.b = rdx_5 u> 0xffffff
                                        rbx = rbx_2 + 3
                                        continue
                                    else
                                        rbx = 2
                                        continue
                                case 8
                                    rdx_5 = zx.d(*(var_70_1 + (zx.q((r8_3.d & 0x3f) + rdx_4) << 1)))
                                    
                                    if (rdx_5 u<= 0xff)
                                        if (rdx_5 == 0)
                                            goto label_142af7b35
                                        
                                        rbx = 1
                                        continue
                                    else if (not(test_bit(rdx_5, 0xf)))
                                        rdx_5 |= 0x8e8000
                                        rbx = 3
                                        continue
                                    else if (rdx_5.b s< 0)
                                        rbx = 2
                                        continue
                                    else
                                        rdx_5 |= 0x8f0080
                                        rbx = 3
                                        continue
                                case 9
                                    char* rcx_27 = zx.q(((r8_3.d & 0x3f) + rdx_4) * 3) + var_70_1
                                    rdx_5 = (zx.d(*rcx_27) << 8 | zx.d(rcx_27[1])) << 8
                                        | zx.d(rcx_27[2])
                                    
                                    if (rdx_5 u<= 0xff)
                                        if (rdx_5 == 0)
                                            goto label_142af7b35
                                        
                                        rbx = 1
                                        continue
                                    else if (rdx_5 u<= 0xffff)
                                        rbx = 2
                                        continue
                                    else if (not(test_bit(rdx_5, 0x17)))
                                        rdx_5 |= 0x8e800000
                                        rbx = 4
                                        continue
                                    else if (not(test_bit(rdx_5, 0xf)))
                                        rdx_5 |= 0x8f008000
                                        rbx = 4
                                        continue
                                    
                                    rbx = 3
                                    continue
                                case 0xc
                                    *(rdi + 0x50) = r11_2
                                    rdx_5 = zx.d(*(var_70_1 + (zx.q((r8_3.d & 0x3f) + rdx_4) << 1)))
                                    
                                    if (rdx_5 u<= 0xff)
                                        if (rdx_5 == 0)
                                            goto label_142af7b35
                                        
                                        if (r11_2 s<= 1)
                                            rbx = 1
                                            continue
                                        else if (r13_1 != 1)
                                            if (r13_1 == 2)
                                                rbx = 3
                                                rdx_5 |= (zx.d(arg_8) << 8 | zx.d(arg_20)) << 8
                                            
                                            r11_2 = 1
                                            continue
                                        else
                                            rbx = 2
                                            rdx_5 |= zx.d(arg_8) << 8
                                            r11_2 = 1
                                            continue
                                    else if (r11_2 == 2)
                                        rbx = r11_2
                                        continue
                                    else if (var_68_1 != 1)
                                        if (var_68_1 == 2)
                                            rbx = 4
                                            rdx_5 |= (zx.d(arg_18) << 8 | zx.d(var_88)) << 0x10
                                        
                                        r11_2 = 2
                                        continue
                                    else
                                        rbx = 3
                                        rdx_5 |= zx.d(arg_18) << 0x10
                                        r11_2 = 2
                                        continue
                                case 0xdb
                                    rdx_5 = zx.d(*(var_70_1 + (zx.q((r8_3.d & 0x3f) + rdx_4) << 1)))
                                    
                                    if (rdx_5 u<= 0xff)
                                        goto label_142af7b35
                                    
                                    rbx = 2
                                    continue
                        
                        rdx_5 = 0
                        rbx = 0
                        continue
                    
                    goto label_142af7d87
                
                if (*(rdi + 0x3f) != 0 || (r8_3 - 0xe000).d u< 0x1900)
                    if (rdx_5 != 0)
                        goto label_142af7bc5
                else if ((r8_3 - 0xf0000).d u< 0x20000 && rdx_5 != 0)
                    goto label_142af7bc5
            else
                *(rdi + 0x50) = r11_2
            
        label_142af7b35:
            *(arg1 + 0x10) = var_60
            int32_t rax_110 = sub_142afa850(rdi, *(rdi + 0x30), r8_3.d, &var_60, rax_6, &var_90, 
                &var_90[sx.q(r10_2)], &result_1, rsi, *(arg1 + 2), arg2)
            r11_2 = *(rdi + 0x50)
            r8_3 = zx.q(rax_110)
            r12_1 += ((var_60 - *(arg1 + 0x10)) s>> 1).d
            
            if (*arg2 s<= 0)
                r10_2 = *(arg1 + 0x28) - var_90.d
                rdx = var_64
                r9_2 = var_98_1
                
                if (result_1 == 0)
                    goto label_142af7434
                
                rdx = rsi
                rsi = r12_1
                var_64 = rdx
                goto label_142af7434
    
label_142af7e4c:
    *(rdi + 0x54) = r8_3.d
    *(rdi + 0x50) = r11_2
    *(arg1 + 0x10) = var_60
    *(arg1 + 0x20) = var_90
    result = result_1
    *(arg1 + 0x30) = result

return result
