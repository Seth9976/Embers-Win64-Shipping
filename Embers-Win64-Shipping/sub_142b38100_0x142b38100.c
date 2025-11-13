// 函数: sub_142b38100
// 地址: 0x142b38100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
int32_t* result_8 = arg1
int16_t* rbx = arg2
*arg5 = 0
int32_t r11 = *arg1
void* rdi = &arg2[sx.q(arg3)]
int32_t* result_3 = arg1
uint8_t rax_4 = (r11 u>> 2).b & 1
uint64_t result
result.b = (r11 u>> 4).b & 1
uint8_t r8_1 = (r11 u>> 3).b & 1
int16_t* var_390 = arg2
uint8_t result_4 = (r11 u>> 6).b & 1
char var_368 = result.b

if (arg2 == rdi)
    *(arg1 + 8)
else if (r8_1 != 0 || result.b != 0)
label_142b381d0:
    uint32_t rdx = zx.d(*rbx)
    
    if (rdx u>= 0x80)
        for (int16_t* i = &data_14366c430; i s< &data_14366c458; i = &i[1])
            result = zx.q(*i)
            
            if (result.d == rdx)
                goto label_142b382f5
    else
        for (int64_t i_1 = 0; i_1 s< 6; i_1 += 1)
            result = zx.q(sx.d((*" \r\n\t")[i_1]))
            
            if (result.d == rdx)
            label_142b382f5:
                rbx = &rbx[1]
                var_390 = rbx
                
                if (rbx != rdi)
                    goto label_142b381d0
                
                *arg5 = ((rbx - arg2) s>> 1).d
                *(result_8 + 8)
                goto label_142b38328
    
    if (r8_1 != 0 || arg2 == rbx)
        goto label_142b3820c
    
labelid_a:
    *(result_8 + 0x10)
else
label_142b3820c:
    uint32_t rcx = zx.d(*rbx)
    int32_t* r12
    r12.b = 0
    bool r13_1 = false
    int32_t result_2 = 0
    int32_t result_1 = 0
    int32_t r14_1 = 0
    int32_t var_37c_1 = 0
    result = zx.q(rcx - 0x2b)
    int32_t var_364_1 = 0
    char var_398 = 0
    bool var_397_1 = nullptr
    
    if ((0xfffd & result.w) != 0)
        goto label_142b382b5
    
    r13_1 = rcx.w == 0x2d
    var_397_1 = r13_1
    void* r8_2 = &rbx[1]
    
    if (&rbx[1] == rdi)
    labelid_a:
        *(result_8 + 0x10)
    else
    label_142b38270:
        uint32_t rdx_1 = zx.d(*r8_2)
        
        if (rdx_1 u>= 0x80)
            for (int16_t* i_2 = &data_14366c430; i_2 s< &data_14366c458; )
                result = zx.q(*i_2)
                
                if (result.d == rdx_1)
                    goto label_142b3836c
                
                i_2 = &i_2[1]
                result = &data_14366c458
        else
            for (int64_t i_3 = 0; i_3 s< 6; i_3 += 1)
                result = zx.q(sx.d((*" \r\n\t")[i_3]))
                
                if (result.d == rdx_1)
                label_142b3836c:
                    r8_2 += 2
                    
                    if (r8_2 != rdi)
                        goto label_142b38270
                    
                    *(result_8 + 0x10)
                    goto label_142b38328
        
        if (((r11 u>> 5).b & 1) != 0 || &rbx[1] == r8_2)
            rbx = r8_2
            var_390 = rbx
        label_142b382b5:
            char* rcx_1 = *(result_8 + 0x18)
            int128_t zmm0_1
            
            if (rcx_1 == 0)
            label_142b38413:
                char* rcx_7 = *(result_8 + 0x20)
                
                if (rcx_7 == 0)
                label_142b384c6:
                    r13_1 = false
                    
                    if (*rbx != 0x30)
                    label_142b386b0:
                        result_4 = 0
                    label_142b386b3:
                        uint32_t rax_11 = zx.d(*rbx)
                        char var_348[0x60]
                        
                        if (rax_11.w u>= 0x30)
                            void* rcx_19 = &rbx[1]
                            char* r9_4 = &var_348
                            
                            while (true)
                                if (rax_11.w u> 0x39)
                                    goto label_142b38797
                                
                                if (r14_1 s>= 0x304)
                                    var_364_1 += 1
                                    
                                    if (r12.b != 0 || rax_11.w != 0x30)
                                        r12.b = 1
                                    
                                    var_398 = r12.b
                                else
                                    result_2 += 1
                                    *r9_4 = *rbx
                                    r9_4 = &r9_4[1]
                                    r14_1 += 1
                                    var_37c_1 = r14_1
                                
                                if (result_4 == 0 || *rbx u>= 0x38)
                                    result_4 = 0
                                else
                                    result_4 = 1
                                
                                int16_t r8_5 = result_8[0xa].w
                                
                                if (r8_5 == 0)
                                label_142b3876f:
                                    rbx = &rbx[1]
                                    var_390 = rbx
                                    rcx_19 += 2
                                label_142b3877f:
                                    rax_11.b = rbx == rdi
                                    
                                    if (rax_11.b != 0)
                                        break
                                else
                                    uint32_t rdx_10 = zx.d(*rbx)
                                    
                                    if (rdx_10 - 0x30 u> 9 || rdx_10 u>= 0x3a)
                                        goto label_142b3876f
                                    
                                    rbx = &rbx[1]
                                    rcx_19 += 2
                                    var_390 = rbx
                                    
                                    if (rbx == rdi)
                                        break
                                    
                                    if (rcx_19 != rdi)
                                        if (*rbx != r8_5)
                                            goto label_142b3877f
                                        
                                        uint32_t rdx_11 = zx.d(*rcx_19)
                                        
                                        if (rdx_11 - 0x30 u> 9 || rdx_11 u>= 0x3a)
                                            goto label_142b3877f
                                        
                                        goto label_142b3876f
                                
                                rax_11 = zx.d(*rbx)
                                
                                if (rax_11.w u< 0x30)
                                    goto label_142b38797
                            
                            goto label_142b38a17
                        
                    label_142b38797:
                        uint64_t r9_6 = 0
                        result = zx.q(result_4)
                        uint8_t result_5 = 0
                        
                        if (r14_1 != 0)
                            result_5 = result.b
                        
                        result_4 = result_5
                        int32_t rcx_21
                        int32_t* result_9
                        
                        if (*rbx != 0x2e)
                            result_9 = result_3
                        label_142b389ae:
                            
                            if (r13_1 != 0 || result_1 != 0 || var_37c_1 != result_1)
                                result.w = *rbx - 0x45
                                uint8_t r8_7
                                
                                if ((0xffdf & result.w) != 0)
                                label_142b38b48:
                                    r8_7 = rax_4
                                    
                                    if (var_368 != 0)
                                        if (r8_7 != 0)
                                            goto label_142b38ba6
                                        
                                    label_142b38b93:
                                        
                                        if (sub_142b36ed0(&var_390, rdi) == 0)
                                            rbx = var_390
                                            r8_7 = rax_4
                                        label_142b38ba6:
                                            
                                            if (var_368 == 0)
                                                goto label_142b38bc2
                                            
                                            sub_142b36ed0(&var_390, rdi)
                                            r8_7 = rax_4
                                            rbx = var_390
                                        label_142b38bc2:
                                            result_8 = result_3
                                            result_4 = result_5
                                            goto label_142b38a20
                                        
                                        result = result_3
                                        *(result + 0x10)
                                    else
                                        if (r8_7 != 0)
                                            goto label_142b38bc2
                                        
                                        if (rbx == rdi)
                                            goto label_142b38b93
                                        
                                        result = result_3
                                        *(result + 0x10)
                                else if (result_5 == 0)
                                label_142b389f3:
                                    int16_t* rdx_14 = rbx
                                    rbx = &rbx[1]
                                    
                                    if (rbx != rdi)
                                        result_9.b = 0x2b
                                        
                                        if ((0xfffd & (*rbx - 0x2b)) != 0)
                                        label_142b38adc:
                                            int16_t i_4 = *rbx
                                            
                                            if (i_4 - 0x30 u<= 9)
                                                do
                                                    if (r9_6.d s< 0x6666666 || (r9_6.d == 0x6666666
                                                            && zx.d(i_4) - 0x30 s<= 3))
                                                        r9_6 = zx.q(zx.d(i_4) - 0x30
                                                            + ((r9_6 * 5).d << 1))
                                                    else
                                                        r9_6 = 0x3fffffff
                                                    
                                                    rbx = &rbx[1]
                                                    
                                                    if (rbx == rdi)
                                                        break
                                                    
                                                    i_4 = *rbx
                                                    
                                                    if (i_4 u< 0x30)
                                                        break
                                                while (i_4 u<= 0x39)
                                                
                                                var_390 = rbx
                                                
                                                if (result_9.b == 0x2d)
                                                    r9_6 = zx.q(neg.d(r9_6.d))
                                                
                                                result_1 += r9_6.d
                                                goto label_142b38b48
                                            
                                            r8_7 = rax_4
                                            
                                            if (r8_7 != 0)
                                                result_8 = result_3
                                                rbx = rdx_14
                                                result_4 = result_5
                                                goto label_142b38a20
                                            
                                            result = result_3
                                            *(result + 0x10)
                                        else
                                            result_9 = zx.q(*rbx)
                                            rbx = &rbx[1]
                                            
                                            if (rbx != rdi)
                                                goto label_142b38adc
                                            
                                            if (rax_4 != 0)
                                                rbx = rdx_14
                                                result_4 = result_5
                                                goto label_142b38a12
                                            
                                            result = result_3
                                            *(result + 0x10)
                                    else if (rax_4 == 0)
                                        *(result_9 + 0x10)
                                    else
                                        rbx = rdx_14
                                        result_4 = result_5
                                    label_142b38a12:
                                        result_8 = result_3
                                    label_142b38a17:
                                        r8_7 = rax_4
                                    label_142b38a20:
                                        rcx_21 = result_1 + var_364_1
                                        
                                        if (result_4 == 0)
                                            goto label_142b38818
                                        
                                        uint128_t zmm0 = zx.o(*(result_8 + 0x10))
                                        int16_t r9_7 = result_8[0xa].w
                                        result_3 = &var_348
                                        result = sub_142b373c0(&result_3, &var_348[sx.q(result_2)], 
                                            var_397_1, r9_7, 0, r8_7, zmm0.q, arg4, &var_398)
                                        *arg5 = ((rbx - arg2) s>> 1).d
                                else
                                    if (rax_4 != 0)
                                        if (result_5 != 0)
                                            goto label_142b38a12
                                        
                                        goto label_142b389f3
                                    
                                    *(result_9 + 0x10)
                            else
                                *(result_9 + 0x10)
                        else if (result_5 == 0)
                        label_142b387df:
                            result_9 = result_3
                            rbx = &rbx[1]
                            var_390 = rbx
                            result.b = rbx == rdi
                            int16_t r9_5 = result_9[0xa].w
                            
                            if (result.b == 0)
                                if (var_37c_1 != 0 || *rbx != 0x30)
                                label_142b388ae:
                                    int16_t rcx_23 = *rbx
                                    
                                    if (rcx_23 u>= 0x30)
                                        result = sx.q(result_2)
                                        void* r8_6 = &var_348[result]
                                        void* rdx_13 = &rbx[1]
                                        
                                        while (true)
                                            if (rcx_23 u<= 0x39)
                                                if (var_37c_1 s< 0x304)
                                                    result_2 += 1
                                                    var_37c_1 += 1
                                                    *r8_6 = *rbx
                                                    r8_6 += 1
                                                    result_1 -= 1
                                                else if (var_398 != 0)
                                                    var_398 = 1
                                                else
                                                    var_398 = 0
                                                    
                                                    if (rcx_23 != 0x30)
                                                        var_398 = 1
                                                
                                                if (r9_5 == 0)
                                                label_142b38982:
                                                    rbx = &rbx[1]
                                                    var_390 = rbx
                                                    rdx_13 += 2
                                                label_142b38992:
                                                    result.b = rbx == rdi
                                                    
                                                    if (result.b != 0)
                                                        goto label_142b38a12
                                                else
                                                    uint32_t rcx_25 = zx.d(*rbx)
                                                    result = zx.q(rcx_25 - 0x30)
                                                    
                                                    if (result.d u> 9 || rcx_25 u>= 0x3a)
                                                        goto label_142b38982
                                                    
                                                    rbx = &rbx[1]
                                                    rdx_13 += 2
                                                    var_390 = rbx
                                                    
                                                    if (rbx == rdi)
                                                        goto label_142b38a12
                                                    
                                                    if (rdx_13 != rdi)
                                                        if (*rbx != r9_5)
                                                            goto label_142b38992
                                                        
                                                        uint32_t rcx_26 = zx.d(*rdx_13)
                                                        
                                                        if (rcx_26 - 0x30 u> 9 || rcx_26 u>= 0x3a)
                                                            goto label_142b38992
                                                        
                                                        goto label_142b38982
                                                
                                                rcx_23 = *rbx
                                                
                                                if (rcx_23 u>= 0x30)
                                                    continue
                                            
                                            result_9 = result_3
                                            break
                                    
                                    r9_6 = 0
                                    goto label_142b389ae
                                
                                result = zx.q(result_1)
                                void* rcx_22 = &rbx[1]
                                
                                while (true)
                                    rbx = &rbx[1]
                                    rcx_22 += 2
                                    var_390 = rbx
                                    
                                    if (r9_5 == 0)
                                    label_142b38897:
                                        result.b = rbx == rdi
                                        
                                        if (result.b == 0)
                                            result = zx.q(result_1)
                                        label_142b388a2:
                                            result = zx.q(result.d - 1)
                                            result_1 = result.d
                                            
                                            if (*rbx != 0x30)
                                                goto label_142b388ae
                                            
                                            continue
                                    else if (rbx != rdi)
                                        if (rcx_22 == rdi)
                                            goto label_142b388a2
                                        
                                        if (*rbx == r9_5)
                                            uint32_t rdx_12 = zx.d(*rcx_22)
                                            
                                            if (rdx_12 - 0x30 u<= 9 && rdx_12 u< 0x3a)
                                                rbx = &rbx[1]
                                                var_390 = rbx
                                                rcx_22 += 2
                                        
                                        goto label_142b38897
                                    
                                    *arg5 = ((rbx - arg2) s>> 1).d
                                    
                                    if (var_397_1 == 0)
                                        break
                                    
                                    break
                            else if (var_37c_1 != 0 || r13_1 != 0)
                                rcx_21 = result_1 + var_364_1
                            label_142b38818:
                                int32_t result_7
                                
                                if (var_398 == 0)
                                    result_7 = result_2
                                else
                                    int64_t result_6 = sx.q(result_2)
                                    var_348[result_6] = 0x31
                                    result_7 = result_6.d + 1
                                    rcx_21 -= 1
                                
                                int64_t result_11 = sx.q(result_7)
                                
                                if (result_11 u>= 0x30e)
                                    __report_rangecheckfailure()
                                    noreturn
                                
                                int32_t result_10 = result_7
                                var_348[result_11] = 0
                                int32_t** rcx_35 = &result_3
                                result_3 = &var_348
                                result_3.o = result_3.o
                                int128_t zmm0_2
                                
                                if (arg4 == 0)
                                    result, zmm0_2 = sub_142b852c0(rcx_35, rcx_21)
                                    zmm0_2.q = fconvert.d(zmm0_2.d)
                                else
                                    result, zmm0_2 = sub_142b84ed0(rcx_35, rcx_21)
                                *arg5 = ((rbx - arg2) s>> 1).d
                                
                                if (var_397_1 != 0)
                                    data_142d8e3c0
                            else
                                *(result_9 + 0x10)
                        else
                            if (rax_4 != 0)
                                if (result_5 != 0)
                                    goto label_142b38a12
                                
                                goto label_142b387df
                            
                            result = result_3
                            *(result + 0x10)
                    else
                        int16_t r8_3 = result_8[0xa].w
                        rbx = &rbx[1]
                        var_390 = rbx
                        
                        if (r8_3 == 0)
                        label_142b38523:
                            result.b = rbx == rdi
                            
                            if (result.b != 0)
                                goto label_142b38696
                            
                        label_142b3852e:
                            r13_1 = true
                            
                            if ((r11.b & 0x81) != 0)
                                result.w = *rbx - 0x58
                            
                            if ((r11.b & 0x81) == 0 || (0xffdf & result.w) != 0)
                                if (*rbx == 0x30)
                                    void* rcx_17 = &rbx[1]
                                    
                                    do
                                        rbx = &rbx[1]
                                        rcx_17 += 2
                                        var_390 = rbx
                                        
                                        if (r8_3 == 0)
                                        label_142b38673:
                                            result.b = rbx == rdi
                                            
                                            if (result.b != 0)
                                                goto label_142b38696
                                        else
                                            if (rbx == rdi)
                                                goto label_142b38696
                                            
                                            if (rcx_17 != rdi)
                                                if (*rbx == r8_3)
                                                    uint32_t rdx_9 = zx.d(*rcx_17)
                                                    
                                                    if (rdx_9 - 0x30 u<= 9 && rdx_9 u< 0x3a)
                                                        rbx = &rbx[1]
                                                        var_390 = rbx
                                                        rcx_17 += 2
                                                
                                                goto label_142b38673
                                    while (*rbx == 0x30)
                                
                                if ((r11.b & 2) == 0)
                                    goto label_142b386b0
                                
                                result_4 = 1
                                goto label_142b386b3
                            
                            var_390 = &rbx[1]
                            
                            if (r11.b s< 0)
                                result = sub_142b36f70(&rbx[1], rdi, r8_3, rax_4)
                            
                            char rdx_4
                            
                            if (r11.b s>= 0 || result.b == 0)
                                rdx_4 = 0
                            else
                                rdx_4 = 1
                            
                            if (&rbx[1] == rdi)
                            labelid_a:
                                *(result_8 + 0x10)
                            else if (rdx_4 != 0)
                            label_142b385e4:
                                result = sub_142b379b0(&var_390, rdi, var_397_1, result_8[0xa].w, 
                                    rdx_4, rax_4, *(result_8 + 0x10), arg4, &var_398)
                                
                                if (var_398 == 0)
                                    if (var_368 != 0)
                                        sub_142b36ed0(&var_390, rdi)
                                    
                                    result = (var_390 - arg2) s>> 1
                                    *arg5 = result.d
                            else
                                uint32_t rcx_13 = zx.d(rbx[1])
                                
                                if ((rcx_13 - 0x30 u<= 9 && rcx_13 u< 0x40) || rcx_13 - 0x61 u<= 5)
                                    goto label_142b385e4
                                
                                result = zx.q(rcx_13 - 0x41)
                                
                                if (result.d u<= 5)
                                    goto label_142b385e4
                                
                            labelid_a:
                                *(result_8 + 0x10)
                        else
                            if (rbx != rdi)
                                if (&rbx[1] == rdi)
                                    goto label_142b3852e
                                
                                if (*rbx == r8_3)
                                    uint32_t rdx_5 = zx.d(rbx[1])
                                    
                                    if (rdx_5 - 0x30 u<= 9)
                                        if (rdx_5 u< 0x3a)
                                            rbx = &rbx[1]
                                        
                                        var_390 = rbx
                                
                                goto label_142b38523
                            
                        label_142b38696:
                            *arg5 = ((rbx - arg2) s>> 1).d
                else
                    result = zx.q(*rbx)
                    
                    if (result_4 != 0)
                        abort()
                        noreturn
                    
                    if (result.b != *rcx_7)
                        goto label_142b384c6
                    
                    result = zx.q(rcx_7[1])
                    void* rcx_8 = &rcx_7[1]
                    
                    while (result.b != 0)
                        rbx = &rbx[1]
                        
                        if (rbx == rdi)
                            goto label_142b38478_2
                        
                        if (*rbx != result.b)
                            goto label_142b38478_2
                        
                        result = zx.q(*(rcx_8 + 1))
                        rcx_8 += 1
                    
                    int16_t* rbx_7 = &rbx[1]
                    var_390 = rbx_7
                    
                    if (var_368 != 0)
                        if (rax_4 != 0)
                            goto label_142b384aa
                        
                    label_142b38491:
                        result = sub_142b36ed0(&var_390, rdi)
                        
                        if (result.b == 0)
                            rbx_7 = var_390
                        label_142b384aa:
                            *arg5 = ((rbx_7 - arg2) s>> 1).d
                            zmm0_1, result = sub_142b38e30()
                            goto label_142b384b1
                        
                    labelid_a:
                        *(result_8 + 0x10)
                    else
                        if (rax_4 != 0)
                            goto label_142b384aa
                        
                        if (rbx_7 == rdi)
                            goto label_142b38491
                        
                    label_142b38478:
                        *(result_8 + 0x10)
            else
                result = zx.q(*rbx)
                
                if (result_4 != 0)
                    abort()
                    noreturn
                
                if (result.b != *rcx_1)
                    goto label_142b38413
                
                result = zx.q(rcx_1[1])
                void* rcx_4 = &rcx_1[1]
                
                while (result.b != 0)
                    rbx = &rbx[1]
                    
                    if (rbx == rdi)
                        goto label_142b38478_2
                    
                    if (*rbx != result.b)
                        goto label_142b38478_2
                    
                    result = zx.q(*(rcx_4 + 1))
                    rcx_4 += 1
                
                void* rbx_4 = &rbx[1]
                var_390 = rbx_4
                
                if (var_368 != 0)
                    if (rax_4 != 0)
                        goto label_142b38407
                    
                label_142b383ea:
                    result = sub_142b36ed0(&var_390, rdi)
                    
                    if (result.b != 0)
                    label_142b38478_1:
                        *(result_8 + 0x10)
                    else
                        rbx_4 = var_390
                    label_142b38407:
                        *arg5 = ((rbx_4 - arg2) s>> 1).d
                        zmm0_1, result = sub_142b38db0()
                    label_142b384b1:
                        
                        if (r13_1 != 0)
                            data_142d8e3c0
                else
                    if (rax_4 != 0)
                        goto label_142b38407
                    
                    if (rbx_4 == rdi)
                        goto label_142b383ea
                    
                    *(result_8 + 0x10)
        else
        label_142b38478_2:
            *(result_8 + 0x10)

label_142b38328:
__security_check_cookie(rax_1 ^ &var_3e8)
return result
