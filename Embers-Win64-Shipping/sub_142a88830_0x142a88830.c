// 函数: sub_142a88830
// 地址: 0x142a88830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_178 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char* result_6 = arg1
char rax_2 = *arg5
int32_t rbx = 0
char** i_10 = nullptr
*arg5 = 0
char* result_1 = nullptr
int64_t* i_11 = nullptr
int32_t r14 = 0
int32_t var_234 = 0
int32_t var_1f8 = 0
void var_1e0
void* result = &var_1e0
void* result_2 = &var_1e0
int32_t r8 = 8
int32_t var_1e8 = 8
char var_1e4 = 0
void* var_210
int64_t* var_168

if (*result_6 == 0)
label_142a88d26:
    int32_t rsi_1 = 0
    
    if (var_1f8 s> 0)
        int64_t rdi_8 = 0
        
        do
            result = sub_142a47920(*(result_2 + rdi_8))
            rsi_1 += 1
            rdi_8 += 8
        while (rsi_1 s< var_1f8)
    
    if (var_1e4 != 0)
        result = sub_142a7dcd0(result_2)
    
    char* _Source_2 = result_1
    
    if (_Source_2 != 0)
        char* _Source = nullptr
        char* _Source_1 = nullptr
        int32_t _Count_3 = 0
        int32_t _Count_4 = 0
        int32_t _Count_2 = 0
        char var_238_1 = 0
        
        while (true)
            char* result_3 = nullptr
            var_210.d = 0
            result_6.b = 0
            char i_7 = *_Source_2
            
            if (i_7 == 0)
                var_238_1 = 1
            else
                int32_t _Count_5 = 0
                char* rsi_2 = nullptr
                char i = i_7
                
                while (i != 0x2d)
                    _Count_5 += 1
                    rsi_2 = &rsi_2[1]
                    i = *(rsi_2 + _Source_2)
                    
                    if (i == 0)
                        break
                
                uint64_t _Count_6 = zx.q(_Count_5)
                
                if (_Count_5 s< 0)
                    _Count_6 = -1
                    
                    do
                        _Count_6 += 1
                    while (_Source_2[_Count_6] != 0)
                
                if (_Count_6.d != 2)
                    goto label_142a88e1f
                
                _Source_2 = result_1
                
                if (sub_142a86230(i_7) != 0 || *_Source_2 - 0x30 u<= 9)
                    char rax_19 = sub_142a86230(_Source_2[1])
                    _Source_2 = result_1
                    
                    if (rax_19 == 0)
                        goto label_142a88e18
                    
                    _Count_4 = _Count_2
                    
                    if (_Source == 0)
                        _Source = _Source_2
                        _Count_3 = _Count_5
                    else
                        result_6.b = 1
                        result_3 = _Source_2
                        var_210.d = _Count_5
                else
                label_142a88e18:
                    _Count_4 = _Count_2
                label_142a88e1f:
                    
                    if (_Source_1 == 0)
                        _Source_1 = _Source_2
                        _Count_4 = _Count_5
                    else
                        _Count_4 = _Count_4 + 1 + _Count_5
                    
                    _Count_2 = _Count_4
                
                char* _Source_3 = _Source_2 + rsi_2
                result = zx.q(*_Source_3)
                _Source_2 = &_Source_3[1]
                
                if (result.b == 0)
                    _Source_2 = _Source_3
                
                result_1 = _Source_2
                
                if (result_6.b == 0)
                    continue
            
            if (_Count_3 s< 9)
                int64_t _Count_1 = sx.q(_Count_3)
                char _Destination[0x10]
                strncpy(&_Destination, _Source, _Count_1)
                
                if (_Count_1 u>= 9)
                    __report_rangecheckfailure()
                    noreturn
                
                _Destination[_Count_1] = 0
                result = sub_142a4e2f0(&_Destination)
                result_6 = result
                
                if (result != 0)
                    result = &_Destination
                    int32_t* r12_2
                    int32_t* r14_4
                    
                    if (result_6 != &_Destination)
                        r12_2 = arg6
                        r14_4 = arg4
                    else
                        sub_142a861c0(&_Destination)
                        int32_t r8_6 = arg4[4]
                        
                        if (*arg4 == r8_6)
                            int32_t rax_20 = 2
                            
                            if (r8_6 == 8)
                                rax_20 = 4
                            
                            result = sub_142a5da90(&arg4[2], r8_6 * rax_20, r8_6)
                        
                        if (*arg4 == r8_6 && result == 0)
                            *arg6 = 7
                            goto label_142a892e8
                        
                        int64_t* rax_21 = j_sub_142a7dd00(0x40)
                        int64_t* rdi_9 = rax_21
                        int64_t* var_170_1 = rax_21
                        
                        if (rax_21 == 0)
                            rdi_9 = nullptr
                            r12_2 = arg6
                        else
                            *rax_21 = rax_21 + 0xd
                            rax_21[1].d = 0x28
                            *(rax_21 + 0xc) = 0
                            rax_21[7].d = 0
                            *(rax_21 + 0xd) = 0
                            r12_2 = arg6
                            sub_142a8cbd0(rax_21, &_Destination, _Count_3, r12_2)
                        
                        r14_4 = arg4
                        int64_t rax_22 = sx.q(*r14_4)
                        *r14_4 = rax_22.d + 1
                        result = *(r14_4 + 8)
                        *(result + (rax_22 << 3)) = rdi_9
                        
                        if (rdi_9 == 0)
                            *arg6 = 7
                            goto label_142a892e8
                        
                        if (*r12_2 s> 0)
                            goto label_142a892e8
                        
                        result_6 = *rdi_9
                    
                    void* result_5
                    
                    if (_Source_1 == 0)
                        result_5 = &data_14364175c
                    label_142a89086:
                        
                        if (rax_2 != 0)
                        label_142a890eb:
                            int32_t r8_13 = arg3[4]
                            
                            if (*arg3 == r8_13)
                                int32_t rax_29 = 2
                                
                                if (r8_13 == 8)
                                    rax_29 = 4
                                
                                result = sub_142a5da90(&arg3[2], r8_13 * rax_29, r8_13)
                            
                            if (*arg3 != r8_13 || result != 0)
                                char** i_18 = j_sub_142a7dd00(0x18)
                                char** i_16 = i_18
                                
                                if (i_18 == 0)
                                    i_16 = nullptr
                                else
                                    __builtin_memset(i_16, 0, 0x18)
                                
                                int64_t rax_30 = sx.q(*arg3)
                                *arg3 = rax_30.d + 1
                                result = *(arg3 + 8)
                                *(result + (rax_30 << 3)) = i_16
                                
                                if (i_16 != 0)
                                    *i_16 = result_6
                                    i_16[1] = result_5
                                    
                                    if (i_10 != 0)
                                        char** i_20 = nullptr
                                        char** i_15 = i_10
                                        
                                        while (true)
                                            char* result_9 = result_6
                                            int32_t rax_32
                                            
                                            while (true)
                                                char rcx_48 = *result_9
                                                char temp6_1 = *(result_9 + *i_15 - result_6)
                                                
                                                if (rcx_48 != temp6_1)
                                                    rax_32 = sbb.d(result_9.d, result_9.d, 
                                                        rcx_48 u< temp6_1) | 1
                                                    break
                                                
                                                result_9 = &result_9[1]
                                                
                                                if (rcx_48 == 0)
                                                    rax_32 = 0
                                                    break
                                            
                                            if (rax_32 s< 0)
                                                if (i_20 != 0)
                                                    i_20[2] = i_16
                                                else
                                                    i_10 = i_16
                                                
                                                i_16[2] = i_15
                                                break
                                            
                                            if (rax_32 == 0)
                                                break
                                            
                                            i_20 = i_15
                                            i_15 = i_15[2]
                                            
                                            if (i_15 == 0)
                                                i_20[2] = i_16
                                                i_16[2] = 0
                                                break
                                    else
                                        i_16[2] = 0
                                        i_10 = i_16
                                    
                                    goto label_142a891d8
                        else
                            char* result_7 = result_6
                            uint32_t i_1
                            uint32_t rdx_21
                            
                            do
                                rdx_21 = zx.d(*result_7)
                                i_1 = zx.d(result_7[&data_143641744 - result_6])
                                
                                if (rdx_21 != i_1)
                                    break
                                
                                result_7 = &result_7[1]
                            while (i_1 != 0)
                            
                            if (rdx_21 - i_1 != 0)
                                goto label_142a890eb
                            
                            void* result_8 = result_5
                            uint32_t i_2
                            uint32_t rdx_23
                            
                            do
                                rdx_23 = zx.d(*result_8)
                                i_2 = zx.d(*(result_8 + "posix" - result_5))
                                
                                if (rdx_23 != i_2)
                                    break
                                
                                result_8 += 1
                            while (i_2 != 0)
                            
                            if (rdx_23 - i_2 != 0)
                                goto label_142a890eb
                            
                            *arg5 = 1
                        label_142a891d8:
                            result = result_3
                            _Source = result
                            _Count_3 = 0
                            
                            if (result != 0)
                                _Count_3 = var_210.d
                            
                            _Source_1 = nullptr
                            _Count_4 = 0
                            _Count_2 = 0
                            
                            if (var_238_1 != 0)
                                break
                            
                            _Source_2 = result_1
                            continue
                    else
                        uint64_t _Count = sx.q(_Count_2)
                        
                        if (_Count.d s>= 0x80)
                            *r12_2 = 1
                            goto label_142a892e8
                        
                        char _Destination_1[0x80]
                        strncpy(&_Destination_1, _Source_1, _Count)
                        
                        if (_Count u>= 0x80)
                            __report_rangecheckfailure()
                            noreturn
                        
                        _Destination_1[_Count] = 0
                        result = sub_142a4e360(result_6, &_Destination_1)
                        result_5 = result
                        
                        if (result == 0)
                            *r12_2 = 1
                            goto label_142a892e8
                        
                        if (result_5 != &_Destination_1)
                            goto label_142a89086
                        
                        sub_142a861c0(&_Destination_1)
                        int32_t r8_9 = r14_4[4]
                        
                        if (*r14_4 == r8_9)
                            int32_t rax_24 = 2
                            
                            if (r8_9 == 8)
                                rax_24 = 4
                            
                            result = sub_142a5da90(&r14_4[2], r8_9 * rax_24, r8_9)
                        
                        if (*r14_4 != r8_9 || result != 0)
                            int64_t* rax_25 = j_sub_142a7dd00(0x40)
                            int64_t* rdi_10 = rax_25
                            var_168 = rax_25
                            
                            if (rax_25 == 0)
                                rdi_10 = nullptr
                            else
                                *rax_25 = rax_25 + 0xd
                                rax_25[1].d = 0x28
                                *(rax_25 + 0xc) = 0
                                rax_25[7].d = 0
                                *(rax_25 + 0xd) = 0
                                sub_142a8cbd0(rax_25, &_Destination_1, _Count.d, r12_2)
                            
                            int64_t rax_26 = sx.q(*r14_4)
                            *r14_4 = rax_26.d + 1
                            result = *(r14_4 + 8)
                            *(result + (rax_26 << 3)) = rdi_10
                            
                            if (rdi_10 != 0)
                                if (*r12_2 s> 0)
                                    goto label_142a892e8
                                
                                result_5 = *rdi_10
                                goto label_142a89086
                    *r12_2 = 7
                    goto label_142a892e8
            
            *arg6 = 1
            goto label_142a892e8
    
    char** i_9 = i_10
    
    if (i_9 != 0)
        char** i_3
        
        do
            i_3 = i_9[2]
            int64_t* r8_14 = *arg2
            
            if (r8_14 != 0)
                int64_t* r9_3 = nullptr
                char* r10_2 = *i_9
                
                while (true)
                    char* rax_34 = r10_2
                    
                    while (true)
                        char rcx_49 = *rax_34
                        char temp0_2 = *(rax_34 + *r8_14 - r10_2)
                        
                        if (rcx_49 != temp0_2)
                            result = zx.q(sbb.d(rax_34.d, rax_34.d, rcx_49 u< temp0_2)) | 1
                            break
                        
                        rax_34 = &rax_34[1]
                        
                        if (rcx_49 == 0)
                            result = nullptr
                            break
                    
                    int32_t temp1_1 = result.d
                    
                    if (temp1_1 s< 0)
                        if (r9_3 != 0)
                            r9_3[2] = i_9
                        else
                            *arg2 = i_9
                        
                        i_9[2] = r8_14
                        break
                    
                    if (temp1_1 == 0)
                        break
                    
                    r9_3 = r8_14
                    r8_14 = r8_14[2]
                    
                    if (r8_14 == 0)
                        r9_3[2] = i_9
                        i_9[2] = 0
                        break
            else
                i_9[2] = 0
                *arg2 = i_9
            
            i_9 = i_3
        while (i_3 != 0)
else
    var_210 = nullptr
    
    while (true)
        uint32_t count = 0
        char* r12_1 = nullptr
        char i_6 = *result_6
        
        if (i_6 != 0)
            char i_4 = i_6
            
            while (i_4 != 0x2d)
                count += 1
                r12_1 = &r12_1[1]
                i_4 = *(r12_1 + result_6)
                
                if (i_4 == 0)
                    break
        
        uint64_t count_1 = zx.q(count)
        
        if (count s< 0)
            count_1 = -1
            
            do
                count_1 += 1
            while (result_6[count_1] != 0)
        
        if (count_1.d != 2)
            goto label_142a88949
        
        char rax_3 = sub_142a86230(i_6)
        char rax_5
        
        if (rax_3 != 0 || *result_6 - 0x30 u<= 9)
            rax_5 = sub_142a86230(result_6[1])
        
        if ((rax_3 != 0 || *result_6 - 0x30 u<= 9) && rax_5 != 0)
            result = result_6
            result_1 = result
        label_142a88af1:
            
            if (i_11 == 0)
                goto label_142a88d26
            
            int32_t r8_2 = arg3[4]
            
            if (*arg3 == r8_2)
                int32_t rdx_6 = 2
                
                if (r8_2 == 8)
                    rdx_6 = 4
                
                result = sub_142a5da90(&arg3[2], rdx_6 * r8_2, r8_2)
            
            if (*arg3 == r8_2 && result == 0)
            label_142a88b72:
                *arg6 = 7
                
                if (var_1f8 s> 0)
                    int64_t rdi_3 = 0
                    
                    do
                        result = sub_142a47920(*(result_2 + rdi_3))
                        rbx += 1
                        rdi_3 += 8
                    while (rbx s< var_1f8)
            else
                char** i_12 = j_sub_142a7dd00(0x18)
                char** i_21 = i_12
                i_10 = i_12
                
                if (i_12 == 0)
                    i_21 = nullptr
                    i_10 = nullptr
                else
                    __builtin_memset(i_21, 0, 0x18)
                
                int64_t rax_13 = sx.q(*arg3)
                *arg3 = rax_13.d + 1
                result = *(arg3 + 8)
                *(result + (rax_13 << 3)) = i_21
                
                if (i_21 == 0)
                    goto label_142a88b72
                
                result = sub_142a87070(arg4)
                void* result_4 = result
                result_6 = arg6
                
                if (result != 0)
                    int64_t* i_8 = i_11
                    int64_t* i_5
                    
                    do
                        i_5 = i_8[1]
                        
                        if (i_8 != i_11)
                            sub_142a8cb30(result_4, 0x2d, result_6)
                        
                        uint128_t zmm1 = *sub_142a85330(&var_168, *i_8)
                        result =
                            sub_142a8cbd0(result_4, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, result_6)
                        i_8 = i_5
                    while (i_5 != 0)
                    
                    if (*result_6 s<= i_5.d)
                        *i_21 = "attribute"
                        result = *result_4
                        i_21[1] = result
                        i_21[2] = 0
                        goto label_142a88d26
                    
                    if (var_1f8 s> i_5.d)
                        int64_t rdi_5 = 0
                        
                        do
                            result = sub_142a47920(*(result_2 + rdi_5))
                            rbx += 1
                            rdi_5 += 8
                        while (rbx s< var_1f8)
                else
                    *result_6 = 7
                    
                    if (var_1f8 s> result.d)
                        int64_t rdi_4 = 0
                        
                        do
                            result = sub_142a47920(*(result_2 + rdi_4))
                            rbx += 1
                            rdi_4 += 8
                        while (rbx s< var_1f8)
        else
            r8 = var_1e8
        label_142a88949:
            
            if (var_1f8 != r8)
            label_142a8897a:
                int64_t* i_17 = j_sub_142a7dd00(0x10)
                int64_t* i_13 = i_17
                
                if (i_17 == 0)
                    i_13 = nullptr
                else
                    *i_13 = 0
                    i_13[1] = 0
                
                int64_t rax_7 = sx.q(var_1f8)
                var_1f8 = rax_7.d + 1
                result = result_2
                *(result + (rax_7 << 3)) = i_13
                
                if (i_13 == 0)
                    goto label_142a88ce1
                
                result = zx.q(0x64 - r14)
                
                if (count s>= result.d)
                    *arg6 = 1
                    
                    if (var_1f8 s> 0)
                        int64_t rdi_6 = 0
                        
                        do
                            result = sub_142a47920(*(result_2 + rdi_6))
                            rbx += 1
                            rdi_6 += 8
                        while (rbx s< var_1f8)
                else
                    char var_c8[0x70]
                    void* r14_1 = &var_c8[sx.q(r14)]
                    memcpy(r14_1, result_6, count)
                    void* rax_10 = r12_1 + var_210
                    
                    if (rax_10 u>= 0x64)
                        __report_rangecheckfailure()
                        noreturn
                    
                    *(&var_c8 + rax_10) = 0
                    *i_13 = r14_1
                    r14 = var_234 + 1 + count
                    var_234 = r14
                    var_210 = rax_10 + 1
                    
                    if (i_11 == 0)
                        i_13[1] = 0
                        i_11 = i_13
                    label_142a88a86:
                        char* result_10 = result_6 + r12_1
                        result = zx.q(*result_10)
                        result_6 = &result_10[1]
                        
                        if (result.b == 0)
                            result_6 = result_10
                        
                        if (*result_6 == 0)
                            goto label_142a88af1
                        
                        r8 = var_1e8
                        continue
                    
                    int64_t* i_19 = nullptr
                    int64_t* i_14 = i_11
                    char* r10_1 = *i_13
                    
                    while (true)
                        char* rax_11 = r10_1
                        
                        while (true)
                            char rcx_6 = *rax_11
                            char temp2_1 = *(rax_11 + *i_14 - r10_1)
                            
                            if (rcx_6 != temp2_1)
                                result = zx.q(sbb.d(rax_11.d, rax_11.d, rcx_6 u< temp2_1)) | 1
                                break
                            
                            rax_11 = &rax_11[1]
                            
                            if (rcx_6 == 0)
                                result = nullptr
                                break
                        
                        int32_t temp4_1 = result.d
                        
                        if (temp4_1 s< 0)
                            if (i_19 != 0)
                                i_19[1] = i_13
                            else
                                i_11 = i_13
                            
                            i_13[1] = i_14
                            goto label_142a88a86
                        
                        if (temp4_1 == 0)
                            *arg6 = 1
                            
                            if (var_1f8 s> 0)
                                int64_t rdi_1 = 0
                                
                                do
                                    result = sub_142a47920(*(result_2 + rdi_1))
                                    rbx += 1
                                    rdi_1 += 8
                                while (rbx s< var_1f8)
                            
                            break
                        
                        i_19 = i_14
                        i_14 = i_14[1]
                        
                        if (i_14 == 0)
                            i_19[1] = i_13
                            i_13[1] = 0
                            goto label_142a88a86
            else
                int32_t rax_6 = 2
                
                if (r8 == 8)
                    rax_6 = 4
                
                result = sub_142a5da90(&result_2, r8 * rax_6, r8)
                
                if (result != 0)
                    goto label_142a8897a
                
            label_142a88ce1:
                *arg6 = 7
                
                if (var_1f8 s> 0)
                    int64_t rdi_7 = 0
                    
                    do
                        result = sub_142a47920(*(result_2 + rdi_7))
                        rbx += 1
                        rdi_7 += 8
                    while (rbx s< var_1f8)
        
        if (var_1e4 == 0)
            break
        
        result = sub_142a7dcd0(result_2)
        break
label_142a892e8:
__security_check_cookie(rax_1 ^ &var_258)
return result
