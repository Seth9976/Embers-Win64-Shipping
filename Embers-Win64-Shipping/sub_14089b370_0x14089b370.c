// 函数: sub_14089b370
// 地址: 0x14089b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t result

if (data_143ceaef0 == 0 || (arg2 != 0 && data_143ceab00 == 0))
labelid_1:
    result = 0
else
    char var_88[0x40]
    char (* rsi_1)[0x40] = &var_88
    
    if (arg4 != 0)
        rsi_1 = arg4
    
    *rsi_1 = *arg3
    *(rsi_1 + 0x10) = arg3[1]
    
    if (arg3[1].q == 0)
    labelid_1:
        result = 0
    else
        if (*arg3 == 0)
            *rsi_1 = 0x5622
        
        if (*(arg3 + 4) == 0)
            *(rsi_1 + 4) = 0x8010
        
        uint32_t rcx = zx.d(*(arg3 + 6))
        
        if (rcx == 0)
            (*rsi_1)[6] = 2
        label_14089b419:
            uint32_t r8
            
            if (*(arg3 + 8) != 0)
                r8 = zx.d(*(rsi_1 + 8))
            else
                r8 = 1
                int32_t temp2_1
                int32_t temp3_1
                temp2_1:temp3_1 = muls.dp.d(0x10624dd3, *rsi_1)
                int32_t rdx_1 = temp2_1 s>> 6
                int32_t rax_4 = (rdx_1 + (rdx_1 u>> 0x1f)) * 0x2e
                
                if (rax_4 s> 1)
                    do
                        r8 *= 2
                    while (r8 s< rax_4)
                
                *(rsi_1 + 8) = r8.w
            
            uint32_t rdx_3 = zx.d(*(rsi_1 + 4))
            char rbp_1 = 0
            char rax_5 = 0
            char* _Str1 = nullptr
            
            if (rdx_3.w == 8)
                rax_5 = -0x80
            
            (*rsi_1)[7] = rax_5
            
            if (arg1 != 0)
                _Str1 = arg1
            
            char* _Str1_1 = _Str1
            *(rsi_1 + 0xc) = zx.d(r8.w) * (rdx_3 u>> 3 & 0x1f) * zx.d((*rsi_1)[6])
            
            if (arg2 != 0)
                if (data_143ceab08 == 0)
                    goto label_14089b544
                
                int32_t rax_9
                
                if (_Str1 != 0)
                    rax_9 = strcmp(_Str1, "System audio capture device")
                
                if (_Str1 == 0 || rax_9 == 0)
                    _Str1_1 = nullptr
                    int32_t i = 0
                    int64_t* rax_10 = &data_143ceab30
                    
                    do
                        void* rdx_7 = *rax_10
                        
                        if (rdx_7 != 0 && *(rdx_7 + 0xc8) != 0)
                            goto label_14089b408_2
                        
                        i += 1
                        rax_10 = &rax_10[1]
                    while (i u< 0x10)
                    
                    goto label_14089b544
                
            labelid_1:
                result = 0
            else if (data_143ceab04 == 0)
            label_14089b544:
                int32_t* rax_13 = malloc(0x100)
                
                if (rax_13 == 0)
                label_14089b408:
                    result = 0
                else
                    memset(rax_13, 0, 0x100)
                    *rax_13 = *rsi_1
                    int128_t zmm1 = *(rsi_1 + 0x10)
                    rax_13[0x33] = 1
                    rax_13[0x34] = 1
                    *(rax_13 + 0x10) = zmm1
                    rax_13[0x32] = arg2
                    
                    if (data_143ceaafc != 0)
                        goto label_14089b5c7
                    
                    CRITICAL_SECTION* lpCriticalSection = malloc(0x28)
                    
                    if (lpCriticalSection == 0)
                        *(rax_13 + 0xe0) = lpCriticalSection
                        sub_14089b2a0(rax_13)
                        result = 0
                    else
                        InitializeCriticalSectionAndSpinCount(lpCriticalSection, 0x7d0)
                        *(rax_13 + 0xe0) = lpCriticalSection
                    label_14089b5c7:
                        int64_t rcx_13 = data_143ceab10
                        int64_t rax_14 = data_143ceab20
                        
                        if (arg2 == 0)
                            if (rcx_13 == 0)
                            label_14089b623:
                                
                                if (data_143ceaef0 != 0)
                                    if (arg2 == 0)
                                        if (data_143ceab04 == 0)
                                            int64_t i_4 = sx.q(data_143ceab18)
                                            
                                            if (i_4.d s> 0 && rcx_13 != 0)
                                                int64_t i_1 = i_4
                                                
                                                if (i_4.d != 0)
                                                    do
                                                        int64_t rcx_12 = *(rcx_13 + (i_1 << 3) - 8)
                                                        i_1 -= 1
                                                        free(rcx_12)
                                                        rcx_13 = data_143ceab10
                                                    while (i_1 != 0)
                                            
                                            free(rcx_13)
                                            data_143ceab10 = 0
                                            data_143ceab18 = 0
                                            data_143ceaaa0(0, sub_14089a470)
                                    else if (data_143ceab00 != 0 && data_143ceab08 == 0)
                                        int64_t i_5 = sx.q(data_143ceab28)
                                        
                                        if (i_5.d s> 0 && rax_14 != 0)
                                            int64_t i_2 = i_5
                                            
                                            if (i_5.d != 0)
                                                do
                                                    int64_t rcx_9 = *(rax_14 + (i_2 << 3) - 8)
                                                    i_2 -= 1
                                                    free(rcx_9)
                                                    rax_14 = data_143ceab20
                                                while (i_2 != 0)
                                        
                                        free(rax_14)
                                        data_143ceab20 = 0
                                        data_143ceab28 = 0
                                        data_143ceaaa0(zx.q(arg2), sub_14089a410)
                        else if (rax_14 == 0)
                            goto label_14089b623
                        
                        if (data_143ceaaa8(rax_13, _Str1_1, zx.q(arg2)) s< 0)
                            sub_14089b2a0(rax_13)
                            result = 0
                        else
                            uint64_t _Size = zx.q(rax_13[3])
                            rax_13[0x35] = 1
                            int64_t rax_16 = malloc(_Size)
                            *(rax_13 + 0xd8) = rax_16
                            
                            if (rax_16 == 0)
                                sub_14089b2a0(rax_13)
                                result = 0
                            else
                                int32_t rax_17 = *rax_13
                                int32_t rdx_11 = 0
                                
                                if (*rsi_1 != rax_17)
                                    if ((arg5 & 1) == 0)
                                        rdx_11 = 1
                                    else
                                        *rsi_1 = rax_17
                                
                                int16_t rax_18 = *(rsi_1 + 4)
                                int16_t rcx_15 = rax_13[1].w
                                int16_t r10_1 = rax_18
                                
                                if (rax_18 != rcx_15)
                                    if ((arg5 & 2) == 0)
                                        rdx_11 = 1
                                    else
                                        *(rsi_1 + 4) = rcx_15
                                        r10_1 = rcx_15
                                        rax_18 = rcx_15
                                
                                char r8_2 = *(rax_13 + 6)
                                char rax_19 = (*rsi_1)[6]
                                
                                if (rax_19 != r8_2)
                                    if ((arg5 & 4) == 0)
                                        rdx_11 = 1
                                    else
                                        (*rsi_1)[6] = r8_2
                                        rax_19 = r8_2
                                
                                uint32_t r8_3 = zx.d(rax_13[2].w)
                                
                                if (r8_3.w != *(rsi_1 + 8))
                                    *(rsi_1 + 8) = r8_3.w
                                    
                                    if (r10_1 == 8)
                                        rbp_1 = -0x80
                                    
                                    (*rsi_1)[7] = rbp_1
                                    *(rsi_1 + 0xc) =
                                        r8_3 * (zx.d(rax_18) u>> 3 & 0x1f) * zx.d(rax_19)
                                
                                int64_t rax_26
                                
                                if (rdx_11 != 0 && rax_13[8] != 0)
                                    int128_t zmm0_1
                                    zmm0_1.q = float.d(zx.q(rax_13[3]))
                                    zmm0_1.q = zmm0_1.q f/ *(rax_13 + 0x48)
                                    int32_t rax_24 = int.d(zmm0_1.q)
                                    rax_13[0xe] = rax_24
                                    rax_26 = malloc(sx.q(rax_24 * rax_13[0x10]))
                                    *(rax_13 + 0x30) = rax_26
                                
                                if (rdx_11 != 0 && rax_13[8] != 0 && rax_26 == 0)
                                    sub_14089b2a0(rax_13)
                                    result = 0
                                else
                                    uint64_t rbx_3 = zx.q(arg6 - 1)
                                    bool cond:4_1 = rbx_3.d == 0x10
                                    
                                    if (rbx_3.d u< 0x10)
                                        void* rcx_21 = &(&data_143ceab30)[rbx_3]
                                        
                                        do
                                            if (*rcx_21 == 0)
                                                (&data_143ceab30)[rbx_3] = rax_13
                                                goto label_14089b84e
                                            
                                            rbx_3 = zx.q(rbx_3.d + 1)
                                            rcx_21 += 8
                                        while (rbx_3.d u< 0x10)
                                        
                                        cond:4_1 = rbx_3.d == 0x10
                                    
                                    if (cond:4_1)
                                        sub_14089b2a0(rax_13)
                                        result = 0
                                    else
                                    label_14089b84e:
                                        void* rax_27
                                        
                                        if (data_143ceaaf8 == 0)
                                            _snprintf(&var_88, 0x40, "SDLAudioDev%d", 
                                                zx.q((rbx_3 + 1).d))
                                            rax_27 = sub_14089a950(sub_14089ae60, &var_88, rax_13)
                                            *(rax_13 + 0xe8) = rax_27
                                        
                                        if (data_143ceaaf8 != 0 || rax_27 != 0)
                                            result = zx.q((rbx_3 + 1).d)
                                        else
                                            sub_14089a8d0((rbx_3 + 1).d)
                                            result = 0
            else
                int32_t rax_11
                
                if (_Str1 != 0)
                    rax_11 = strcmp(_Str1, "System audio output device")
                
                if (_Str1 == 0 || rax_11 == 0)
                    _Str1_1 = nullptr
                    int32_t i_3 = 0
                    int64_t* rax_12 = &data_143ceab30
                    
                    do
                        void* rdx_8 = *rax_12
                        
                        if (rdx_8 != 0 && *(rdx_8 + 0xc8) == 0)
                            goto label_14089b408_2
                        
                        i_3 += 1
                        rax_12 = &rax_12[1]
                    while (i_3 u< 0x10)
                    
                    goto label_14089b544
                
            label_14089b408_1:
                result = 0
        else
            if (rcx == 1 || rcx == 2 || rcx == 4 || rcx == 6)
                goto label_14089b419
            
        label_14089b408_2:
            result = 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
