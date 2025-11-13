// 函数: sub_142c56ed0
// 地址: 0x142c56ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x11f8)
void var_1228
int64_t rax_1 = __security_cookie ^ &var_1228
char* rbx = arg3
int64_t r12 = arg2
int64_t r13 = arg1
char const* const var_11e8 = "0123456789abcdefghijklmnopqrstuvwxyz"
int32_t result_1 = 0
int32_t r14 = 0
void var_11d8
void var_5d8
uint64_t result

if (sub_142c56770(rbx, &var_11d8, &var_5d8, arg4) == 0)
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    void* var_11e0_1 = &var_5d8
    
    if (*rbx == 0)
    label_142c57865:
        result = zx.q(result_1)
    else
        zmm6 = 0x4024000000000000
        
        while (true)
            char i_11 = *rbx
            
            if (i_11 == 0x25)
                char rax_4 = rbx[1]
                void* rbx_1 = &rbx[1]
                
                if (rax_4 != 0x25)
                    int32_t rsi_1 = 0
                    int32_t rax_6 = isdigit(zx.d(rax_4))
                    
                    if (rax_6 != 0)
                        int32_t i
                        
                        do
                            int32_t rax_7 = sx.d(*rbx_1)
                            rbx_1 += 1
                            rsi_1 = rax_7 + ((rsi_1 + ((rsi_1 - 6) << 2)) << 1)
                            i = isdigit(zx.d(*rbx_1))
                        while (i != 0)
                    
                    int32_t rsi_2
                    
                    if (rax_6 == 0 || rsi_1 == 0 || *rbx_1 != 0x24)
                        rsi_2 = r14
                    else
                        rsi_2 = rsi_1 - 1
                    
                    r14 += 1
                    int32_t var_1208_1 = r14
                    int64_t r12_1 = sx.q(rsi_2) * 3
                    void var_11d4
                    int32_t rdx_3 = *(&var_11d4 + (r12_1 << 3))
                    void var_11c8
                    int32_t i_8
                    int64_t r10_1
                    void var_11d0
                    
                    if (not(test_bit(rdx_3, 0xe)))
                        r10_1 = zx.q(*(&var_11d0 + (r12_1 << 3)))
                        i_8 = r10_1.d
                    else
                        r10_1 = sx.q(*(&var_11d0 + (r12_1 << 3)))
                        r14 += 1
                        var_1208_1 = r14
                        i_8 = *(&var_11c8 + r10_1 * 0x18)
                        
                        if (i_8 s< 0)
                            i_8 = neg.d(i_8)
                            *(&var_11d4 + (r12_1 << 3)) = (rdx_3 & 0xfffffeff) | 4
                    int32_t r15_1 = *(&var_11d4 + (r12_1 << 3))
                    int32_t rdx_7 = r15_1 & 0x10000
                    void var_11cc
                    int32_t i_12
                    
                    if (rdx_7 != 0)
                        r14 += 1
                        var_1208_1 = r14
                        i_12 = *(&var_11c8 + sx.q(*(&var_11cc + (r12_1 << 3))) * 0x18)
                        
                        if (i_12 s< 0)
                            i_12 = -1
                    else if (not(test_bit(r15_1, 0xf)))
                        i_12 = -1
                    else
                        i_12 = *(&var_11cc + (r12_1 << 3))
                    
                    int32_t rcx_8 = *(&var_11d8 + (r12_1 << 3))
                    int32_t r9_2 = r15_1 u>> 3 & 1
                    int32_t var_11f0_1 = r9_2
                    
                    if (rcx_8 == 1)
                        void* const r14_5 = *(&var_11c8 + (r12_1 << 3))
                        int64_t i_2
                        
                        if (r14_5 != 0)
                            if (i_12 == 0xffffffff)
                                i_2 = -1
                                
                                do
                                    i_2 += 1
                                while (*(r14_5 + i_2) != 0)
                            else
                                i_2 = sx.q(i_12)
                        else if (i_12 == 0xffffffff || i_12 s>= 5)
                            r14_5 = "(nil)"
                            *(&var_11d4 + (r12_1 << 3)) = r15_1 & 0xfffffff7
                            i_2 = 5
                        else
                            r14_5 = &data_1434cce10
                            i_2 = 0
                        
                        int32_t r15_7 = *(&var_11d4 + (r12_1 << 3))
                        int32_t rax_40 = i_2.d
                        
                        if (i_2 u> 0x7fffffff)
                            rax_40 = 0x7fffffff
                        
                        int32_t i_1 = i_8 - rax_40
                        int32_t r12_5 = r15_7 & 8
                        
                        if (r12_5 != 0)
                            if (arg2(0x22, r13) == 0xffffffff)
                                goto label_142c57865
                            
                            result_1 += 1
                        
                        int32_t r15_8 = r15_7 & 4
                        
                        if (r15_8 == 0)
                            while (i_1 s> 0)
                                i_1 -= 1
                                
                                if (arg2(0x20, r13) == 0xffffffff)
                                    goto label_142c57865
                                
                                result_1 += 1
                            
                            i_1 -= 1
                        
                        while (i_2 != 0)
                            char rax_43 = *r14_5
                            i_2 -= 1
                            
                            if (rax_43 == 0)
                                break
                            
                            r14_5 += 1
                            
                            if (arg2(zx.q(rax_43), r13) == 0xffffffff)
                                goto label_142c57865
                            
                            result_1 += 1
                        
                        if (r15_8 != 0 && i_1 s> 0)
                            do
                                i_1 -= 1
                                
                                if (arg2(0x20, r13) == 0xffffffff)
                                    goto label_142c57865
                                
                                result_1 += 1
                            while (i_1 s> 0)
                        
                        r12 = arg2
                        
                        if (r12_5 != 0)
                            if (r12(0x22, r13) == 0xffffffff)
                                goto label_142c57865
                            
                            result_1 += 1
                        
                        r14 = var_1208_1
                    else
                        char const* const r10_2
                        uint32_t r12_2
                        int32_t r13_1
                        uint64_t i_4
                        
                        if (rcx_8 == 2)
                            i_4 = *(&var_11c8 + (r12_1 << 3))
                            
                            if (i_4 == 0)
                                int32_t i_3 = i_8 - 5
                                int32_t r15_5 = r15_1 & 4
                                
                                if (r15_5 != 0)
                                    while (i_3 s> 0)
                                        i_3 -= 1
                                        
                                        if (arg2(0x20, r13) == 0xffffffff)
                                            goto label_142c57865
                                        
                                        result_1 += 1
                                    
                                    i_3 -= 1
                                
                                r12 = arg2
                                char const* const rsi_5 = "(nil)"
                                
                                while (true)
                                    if (r12(zx.q(*rsi_5), r13) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    rsi_5 = &rsi_5[1]
                                    result_1 += 1
                                    
                                    if (*rsi_5 == 0)
                                        if (r15_5 == 0 && i_3 s> 0)
                                            do
                                                i_3 -= 1
                                                
                                                if (r12(0x20, r13) == 0xffffffff)
                                                    goto label_142c57865
                                                
                                                result_1 += 1
                                            while (i_3 s> 0)
                                        
                                        break
                                
                                r14 = var_1208_1
                            else
                                r10_2 = "0123456789abcdefghijklmnopqrstuvwxyz"
                                r9_2 = 1
                                
                                if (test_bit(r15_1, 0xc))
                                    r10_2 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                
                                var_11f0_1 = 1
                                var_11e8 = r10_2
                                r13_1 = 0x10
                                r12_2 = 0
                            label_142c57428:
                                void var_74
                                void* rsi_4 = &var_74
                                
                                if (i_12 == 0xffffffff)
                                    i_12 = 1
                                
                                if (i_4 != 0)
                                    uint64_t rcx_25 = zx.q(r13_1)
                                    
                                    do
                                        int64_t rdx_15 = 0
                                        char* temp1_1 = modu.dp.q(rdx_15:i_4, rcx_25)
                                        i_4 = divu.dp.q(rdx_15:i_4, rcx_25)
                                        *rsi_4 = *(temp1_1 + r10_2)
                                        rsi_4 -= 1
                                    while (i_4 != 0)
                                
                                int32_t rax_28 = rsi_4.d - &var_74
                                int32_t i_6 = i_8 + rax_28
                                int32_t i_5 = i_12 + rax_28
                                
                                if (r9_2 == 0 || r13_1 != 8)
                                    goto label_142c57482
                                
                                if (i_5 s> 0)
                                    goto label_142c57487
                                
                                *rsi_4 = 0x30
                                rsi_4 -= 1
                                i_6 -= 1
                            label_142c57482:
                                
                                if (i_5 s> 0)
                                label_142c57487:
                                    i_6 -= i_5
                                    
                                    do
                                        *rsi_4 = 0x30
                                        i_5 -= 1
                                        rsi_4 -= 1
                                    while (i_5 s> 0)
                                
                                if (r9_2 != 0 && r13_1 == 0x10)
                                    i_6 -= 2
                                
                                if (r12_2 != 0 || (r15_1.b & 3) != 0)
                                    i_6 -= 1
                                
                                if ((r15_1 & 0x104) == 0)
                                    while (i_6 s> 0)
                                        i_6 -= 1
                                        
                                        if (arg2(0x20, arg1) == 0xffffffff)
                                            goto label_142c57865
                                        
                                        result_1 += 1
                                    
                                    i_6 -= 1
                                
                                r12 = arg2
                                int64_t rcx_26
                                
                                if (r12_2 == 0)
                                    if ((r15_1.b & 2) != 0)
                                        rcx_26 = 0x2b
                                        goto label_142c57576
                                    
                                    if ((r15_1.b & 1) != 0)
                                        rcx_26 = 0x20
                                        goto label_142c57576
                                else
                                    rcx_26 = 0x2d
                                label_142c57576:
                                    
                                    if (r12(rcx_26, arg1) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    result_1 += 1
                                
                                if (var_11f0_1 == 0)
                                    r13 = arg1
                                else
                                    r13 = arg1
                                    
                                    if (r13_1 == 0x10)
                                        if (r12(0x30, r13) == 0xffffffff)
                                            goto label_142c57865
                                        
                                        if (not(test_bit(r15_1, 0xc)))
                                            if (r12(0x78, r13) == 0xffffffff)
                                                result = zx.q(result_1 + 1)
                                                break
                                            
                                            result_1 += 2
                                        else
                                            if (r12(0x58, r13) == 0xffffffff)
                                                result = zx.q(result_1 + 1)
                                                break
                                            
                                            result_1 += 2
                                
                                int32_t r14_4 = r15_1 & 4
                                
                                if (r14_4 == 0 && test_bit(r15_1, 8))
                                    while (i_6 s> 0)
                                        i_6 -= 1
                                        
                                        if (r12(0x30, r13) == 0xffffffff)
                                            goto label_142c57865
                                        
                                        result_1 += 1
                                    
                                    i_6 -= 1
                                
                                for (void* i_7 = rsi_4 + 1; i_7 u<= &var_74; i_7 += 1)
                                    if (r12(zx.q(*i_7), r13) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    result_1 += 1
                                
                                if (r14_4 != 0 && i_6 s> 0)
                                    do
                                        i_6 -= 1
                                        
                                        if (r12(0x20, r13) == 0xffffffff)
                                            goto label_142c57865
                                        
                                        result_1 += 1
                                    while (i_6 s> 0)
                                
                                r14 = var_1208_1
                        else if (rcx_8 == 3)
                            i_4 = *(&var_11c8 + (r12_1 << 3))
                            
                            if (not(test_bit(r15_1, 0x11)))
                                if (test_bit(r15_1, 0xa))
                                    r13_1 = 8
                                    r12_2 = 0
                                else if (not(test_bit(r15_1, 0xb)))
                                    r13_1 = 0xa
                                    
                                    if (not(test_bit(r15_1, 9)))
                                        r12_2 = (i_4 u>> 0x3f).d
                                        
                                        if (r12_2 != 0)
                                            i_4 = neg.q(i_4)
                                    else
                                        r12_2 = 0
                                else
                                    char* rax_23 = "0123456789abcdefghijklmnopqrstuvwxyz"
                                    r13_1 = 0x10
                                    
                                    if (test_bit(r15_1, 0xc))
                                        rax_23 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                                    
                                    var_11e8 = rax_23
                                    r12_2 = 0
                                
                                r10_2 = var_11e8
                                goto label_142c57428
                            
                            r12 = arg2
                            int32_t r15_4 = r15_1 & 4
                            
                            if (r15_4 == 0)
                                for (i_8 -= 1; i_8 s> 0; i_8 -= 1)
                                    if (r12(0x20, r13) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    result_1 += 1
                            
                            if (r12(zx.q(i_4.b), r13) == 0xffffffff)
                                goto label_142c57865
                            
                            result_1 += 1
                            
                            if (r15_4 != 0)
                                for (int32_t i_9 = i_8 - 1; i_9 s> 0; i_9 -= 1)
                                    if (r12(0x20, r13) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    result_1 += 1
                            
                            r14 = var_1208_1
                        else if (rcx_8 == 4)
                            int64_t* rax_19 = *(&var_11c8 + (r12_1 << 3))
                            
                            if ((r15_1.b & 0x40) != 0)
                                r12 = arg2
                                *rax_19 = sx.q(result_1)
                            else if ((r15_1.b & 0x20) == 0)
                                r12 = arg2
                                
                                if ((r15_1.b & 0x10) != 0)
                                    *rax_19 = result_1.w
                                else
                                    *rax_19 = result_1
                            else
                                *rax_19 = result_1
                                r12 = arg2
                        else if (rcx_8 != 7)
                            r12 = arg2
                        else
                            int16_t var_1d8 = 0x25
                            int64_t var_1d6
                            __builtin_memset(&var_1d6, 0, 0x1e)
                            int64_t rax_11 = -1
                            
                            do
                                rax_11 += 1
                            while (*(&var_1d8 + rax_11) != 0)
                            
                            uint64_t r9_3 = 0xffffffff
                            int64_t r14_1 = 0x20 - rax_11
                            
                            if (test_bit(r15_1, 0xd))
                                r9_3 = zx.q(r10_1.d)
                            else if (test_bit(r15_1, 0xe))
                                r9_3 = zx.q(*(&var_11c8 + sx.q(r10_1.d) * 0x18))
                            
                            int32_t rsi_3 = -1
                            
                            if (test_bit(r15_1, 0xf))
                                rsi_3 = *(&var_11cc + (r12_1 << 3))
                            else if (rdx_7 != 0)
                                rsi_3 = *(&var_11c8 + sx.q(*(&var_11cc + (r12_1 << 3))) * 0x18)
                            
                            char rax_14 = var_1d8:1.b
                            char* rbx_2 = &var_1d8:1
                            int32_t rcx_16 = r15_1 & 4
                            
                            if (rcx_16 != 0)
                                rax_14 = 0x2d
                            
                            var_1d8:1.b = rax_14
                            
                            if (rcx_16 != 0)
                                rbx_2 = &var_1d6
                            
                            if ((r15_1.b & 2) != 0)
                                *rbx_2 = 0x2b
                                rbx_2 = &rbx_2[1]
                            
                            if ((r15_1.b & 1) != 0)
                                *rbx_2 = 0x20
                                rbx_2 = &rbx_2[1]
                            
                            if ((r15_1.b & 8) != 0)
                                *rbx_2 = 0x23
                                rbx_2 = &rbx_2[1]
                            
                            *rbx_2 = 0
                            
                            if (r9_3.d s>= 0)
                                if (r9_3.d s>= 0x146)
                                    r9_3 = 0x145
                                
                                int32_t rax_15
                                rax_15, arg5, zmm6 = sub_142c564b0(rbx_2, r14_1, "%ld", r9_3, arg5)
                                int64_t rcx_18 = sx.q(rax_15)
                                rbx_2 = &rbx_2[rcx_18]
                                r14_1 -= rcx_18
                            
                            if (rsi_3 s>= 0)
                                double i_10 = *(&var_11c8 + (r12_1 << 3))
                                int64_t rax_16 = 0x144
                                
                                if (not(i_10 f< zmm6.q))
                                    do
                                        i_10 = i_10 f/ zmm6.q
                                        rax_16 -= 1
                                    while (i_10 f>= zmm6.q)
                                
                                if (rsi_3 s> rax_16.d)
                                    rsi_3 = (rax_16 - 1).d
                                
                                int32_t rax_17
                                rax_17, arg5, zmm6 =
                                    sub_142c564b0(rbx_2, r14_1, ".%ld", zx.q(rsi_3), arg5)
                                rbx_2 = &rbx_2[sx.q(rax_17)]
                            
                            if ((r15_1.b & 0x20) != 0)
                                *rbx_2 = 0x6c
                                rbx_2 = &rbx_2[1]
                            
                            if (test_bit(r15_1, 0x12))
                                *rbx_2 = (not.b((r15_1 u>> 7).b) & 0x20) | 0x45
                            else if (not(test_bit(r15_1, 0x13)))
                                *rbx_2 = 0x66
                            else
                                *rbx_2 = (not.b((r15_1 u>> 7).b) & 0x20) | 0x47
                            
                            arg5.o = zx.o(*(&var_11c8 + (r12_1 << 3)))
                            rbx_2[1] = 0
                            char var_1b8[0x144]
                            sub_1425f2950(&var_1b8, &var_1d8, arg5.q)
                            char (* rbx_3)[0x144] = &var_1b8
                            r12 = arg2
                            
                            if (var_1b8[0] != 0)
                                do
                                    if (r12(zx.q(*rbx_3), r13) == 0xffffffff)
                                        goto label_142c57865
                                    
                                    rbx_3 = &(*rbx_3)[1]
                                    result_1 += 1
                                while (*rbx_3 != 0)
                            
                            r14 = var_1208_1
                    
                    rbx = *var_11e0_1
                    var_11e0_1 += 8
                else
                    rbx = rbx_1 + 1
                    
                    if (r12(0x25, r13) == 0xffffffff)
                        goto label_142c57865
                    
                    result_1 += 1
            else
                do
                    if (r12(zx.q(i_11), r13) == 0xffffffff)
                        goto label_142c57865
                    
                    i_11 = rbx[1]
                    rbx = &rbx[1]
                    result_1 += 1
                    
                    if (i_11 == 0)
                        goto label_142c57865
                while (i_11 != 0x25)
            
            if (*rbx == 0)
                goto label_142c57865
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_1228)
return result
