// 函数: sub_140cde730
// 地址: 0x140cde730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result_1 = arg1
int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_b8
void* rsp_1 = &var_b8
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t* _String_2
int64_t rax_1 = __security_cookie ^ &_String_2
int16_t* result_26 = arg1
uint32_t rcx = zx.d(*arg1)
_String_2 = arg3
uint64_t rax_3 = zx.q(rcx) & 0x3f

if (test_bit(sbb.q(rax_3, rax_3, rcx u< 0x40) & 0x100000200, zx.q(rax_3.b)))
    uint64_t rax_7
    uint32_t i
    
    do
        i = zx.d(result_26[1])
        result_26 = &result_26[1]
        rax_7 = zx.q(i) & 0x3f
    while (test_bit(sbb.q(rax_7, rax_7, i u< 0x40) & 0x100000200, zx.q(rax_7.b)))

uint32_t rdx_1 = zx.d(*result_26)
uint64_t rdi = 0
int64_t rcx_1 = 0
uint64_t rax_11 = zx.q(rdx_1) & 0xffffffc0
int16_t* result_2 = result_26

if (rax_11.d == 0x40)
    rcx_1 = 0x8000000

if (not(test_bit(rcx_1 | (sbb.q(rax_11, rax_11, rdx_1 u< 0x40) & 0x2000410000000001), 
        zx.q(rdx_1.b) & 0x3f)))
    uint64_t rax_16
    int64_t rcx_3
    uint32_t i_1
    
    do
        i_1 = zx.d(result_2[1])
        result_2 = &result_2[1]
        rcx_3 = 0
        rax_16 = zx.q(i_1) & 0xffffffc0
        
        if (rax_16.d == 0x40)
            rcx_3 = 0x8000000
    while (not(test_bit(rcx_3 | (sbb.q(rax_16, rax_16, i_1 u< 0x40) & 0x2000410000000001), 
        zx.q(i_1.b) & 0x3f)))

result_1 = result_2
int16_t* result

if (*result_2 == 0)
labelid_1:
    result = result_2
else
    int32_t i_22 = ((result_2 - result_26) s>> 1).d
    int64_t i_2 = sx.q(i_22)
    
    if (i_22 s> 0)
        void* r9_1 = &result_26[i_2 - 1]
        
        do
            uint32_t rcx_5 = zx.d(*r9_1)
            uint64_t rax_21 = zx.q(rcx_5) & 0x3f
            
            if (not(test_bit(sbb.q(rax_21, rax_21, rcx_5 u< 0x40) & 0x100000200, zx.q(rax_21.b))))
                break
            
            i_22 -= 1
            i_2 -= 1
            r9_1 -= 2
        while (i_2 s> 0)
    
    uint64_t var_40
    sub_140b580e0(&var_40, i_22, result_26, 1)
    void* rax_24
    int32_t r9_2
    rax_24, r9_2 = sub_140bd3220(arg3, var_40)
    void* rsi = rax_24
    void** const var_70
    
    if (rax_24 == 0)
        sub_140cdb930(&var_70, arg3, var_40)
        void** const rbx_1 = var_70
        int32_t rcx_9
        rcx_9.b = sub_140b5b8a0(rbx_1.d, 0) == 0
        rcx_9.b |= var_70:4.d != 0
        void* rax_26
        
        if (rcx_9.b != 0)
            rax_26, r9_2 = sub_140bd3220(arg3, rbx_1)
            rsi = rax_26
        
        if (rcx_9.b == 0 || rax_26 == 0)
            void* rax_28
            rax_28, r9_2 = (*(*arg3 + 0x2b0))(arg3, var_40)
            rsi = rax_28
            
            if (rax_28 == 0)
                goto label_140cdf7db
    
    char rax_29
    int64_t r8_2
    rax_29, r8_2 = sub_140cea010(rsi, arg5)
    
    if (rax_29 == 0)
        goto label_140cdf7db
    
    result_2 = result_1
    int32_t r14_1 = 0
    
    if (*result_2 == 0x2e)
        r8_2.b = 1
        result_1 = &result_2[1]
        char rax_30
        int64_t r8_3
        rax_30, r8_3, r9_2 = sub_140b0f6c0(&result_1, u"Empty")
        
        if (rax_30 == 0)
            r8_3.b = 1
            char rax_31
            int64_t r8_4
            rax_31, r8_4, r9_2 = sub_140b0f6c0(&result_1, &data_142ea6568)
            
            if (rax_31 == 0)
                r8_4.b = 1
                char rax_32
                int64_t r8_5
                rax_32, r8_5, r9_2 = sub_140b0f6c0(&result_1, u"Remove")
                
                if (rax_32 == 0)
                    r8_5.b = 1
                    char rax_33
                    rax_33, r9_2 = sub_140b0f6c0(&result_1, u"RemoveIndex")
                    
                    if (rax_33 != 0)
                        r14_1 = 3
                else
                    r14_1 = 2
            else
                r14_1 = 1
        else
            r14_1 = 4
        
        result_2 = result_1
    
    int64_t rbx_3
    void* r13
    
    if (rsi != 0)
        rbx_3 = *(rsi + 8)
        r9_2 = sub_140cea1e0()
        r13 = rsi
        result_2 = result_1
    
    if (rsi == 0 || rbx_3 != &data_143e1b870)
        r13 = nullptr
    
    int32_t var_98
    int32_t i_21
    int32_t var_68
    int32_t var_60
    
    if (rsi != 0 && ((zx.q(*(*(rsi + 8) + 0x10)) u>> 0x19).b & 1) != 0)
        if (r14_1 == 0)
            goto label_140cdf2f3
        
        if (((r14_1 - 1) & 0xfffffffc) != 0 || r14_1 == 3)
        labelid_1:
            result = result_2
        else
            if (iswspace(*result_2) != 0)
                int32_t i_3
                
                do
                    void* result_3 = &result_1[1]
                    result_1 = result_3
                    i_3 = iswspace(*result_3)
                while (i_3 != 0)
            
            int16_t* result_20 = result_1
            int16_t rax_38 = *result_20
            result_2 = &result_20[1]
            result_1 = result_2
            
            if (rax_38 == 0x28)
                if (iswspace(*result_2) != 0)
                    int32_t i_4
                    
                    do
                        void* result_4 = &result_1[1]
                        result_1 = result_4
                        i_4 = iswspace(*result_4)
                    while (i_4 != 0)
                
                if (r14_1 != 4)
                    var_60.q = 0
                    var_70 = &data_142ea3a00
                    int16_t* result_28 = nullptr
                    int32_t var_58_1 = 0
                    var_68.w = 0
                    int16_t* result_29
                    
                    if (r14_1 != 1)
                        if (r14_1 == 2)
                            var_98.q = arg4
                            result_29 = sub_140d085d0(rsi, result_1, sx.q(*(rsi + 0x4c)) + arg2, 
                                arg5.b, var_98, &var_70)
                            goto label_140cdeb6d
                        
                        var_98.q = result_26
                        sub_140b1f850(arg6, 3, 
                            Unable to parse parameter value '%s' in defaultproperties multi-cast "
                        "delegate operation: %s", result_1)
                    else
                        var_98.q = arg4
                        result_29 = sub_140d06810(rsi, result_1, sx.q(*(rsi + 0x4c)) + arg2, 
                            arg5.b, var_98, &var_70)
                    label_140cdeb6d:
                        result_28 = result_29
                        
                        if (var_58_1 != 0 && var_58_1 - 1 s> 0)
                            _String_2 = nullptr
                            i_21.q = 0
                            sub_140a2ccb0(&var_60, &_String_2, &data_142d6acb4, 1)
                            int32_t i_5 = i_21
                            
                            if (i_5 s> 0)
                                int64_t* rbx_4 = nullptr
                                
                                do
                                    int64_t* _String_3 = _String_2
                                    int16_t* const r9_6
                                    
                                    if (*(rbx_4 + _String_3 + 8) == 0)
                                        r9_6 = &data_142d40450
                                    else
                                        r9_6 = *(rbx_4 + _String_3)
                                    
                                    sub_140b1f850(arg6, 3, u"%s", r9_6)
                                    i_5 = i_21
                                    rdi = zx.q(rdi.d + 1)
                                    rbx_4 = &rbx_4[2]
                                while (rdi.d s< i_5)
                            
                            int64_t* _String_8 = _String_2
                            
                            if (i_5 != 0)
                                int32_t i_6
                                
                                do
                                    int64_t rcx_28 = *_String_8
                                    
                                    if (rcx_28 != 0)
                                        sub_140a74f90(rcx_28)
                                    
                                    _String_8 = &_String_8[2]
                                    i_6 = i_5
                                    i_5 -= 1
                                while (i_6 != 1)
                                _String_8 = _String_2
                            
                            if (_String_8 != 0)
                                sub_140a74f90(_String_8)
                        else if (result_28 == 0 || result_28 == result_1)
                            var_98.q = result_26
                            sub_140b1f850(arg6, 3, 
                                Unable to parse parameter value '%s' in defaultproperties multi-cast "
                            "delegate operation: %s", result_1)
                    int16_t* result_5 = result_1
                    int64_t rcx_31 = var_60.q
                    
                    if (result_28 != 0)
                        result_5 = result_28
                    
                    result_1 = result_5
                    
                    if (rcx_31 != 0)
                        sub_140a74f90(rcx_31)
                else
                    (*(*rsi + 0x150))(rsi, arg4, sx.q(*(rsi + 0x4c)) + arg2)
                
                if (iswspace(*result_1) != 0)
                    int32_t i_7
                    
                    do
                        void* result_6 = &result_1[1]
                        result_1 = result_6
                        i_7 = iswspace(*result_6)
                    while (i_7 != 0)
                
                goto label_140cdf27f
            
        labelid_1:
            result = result_2
    else if (r14_1 == 0)
    label_140cdf2f3:
        int32_t r14_2 = sub_140ce34b0(_String_2, &result_1, arg6, r9_2)
        int32_t rax_89
        
        if (r13 == 0)
            rax_89 = *(rsi + 0x38)
        
        if (r13 != 0 || r14_2 s< rax_89)
            var_70 = rsi
            int32_t var_68_1 = r14_2
            int64_t* rdx_38 = *arg7
            int64_t r8_25 = sx.q(arg7[1].d)
            int64_t* rax_90 = rdx_38
            _String_2 = r8_25 << 4
            void* rcx_83 = &rdx_38[r8_25 * 2]
            bool cond:2_1 = rdx_38 == rcx_83
            
            while (true)
                if (cond:2_1)
                    goto label_140cdf39d
                
                if (*rax_90 == rsi && rax_90[1].d == r14_2)
                    break
                
                rax_90 = &rax_90[2]
                cond:2_1 = rax_90 == rcx_83
            
            if (((rax_90 - rdx_38) s>> 4).d == 0xffffffff)
            label_140cdf39d:
                int32_t rax_93 = (r8_25 + 1).d
                arg7[1].d = rax_93
                
                if (rax_93 s> *(arg7 + 0xc))
                    sub_1405a4f90(arg7)
                
                *(_String_2 + *arg7) = var_70.o
                
                if (iswspace(*result_1) != 0)
                    int32_t i_8
                    
                    do
                        void* result_15 = &result_1[1]
                        result_1 = result_15
                        i_8 = iswspace(*result_15)
                    while (i_8 != 0)
                
                int16_t* result_19 = result_1
                int16_t rax_98 = *result_19
                result_1 = &result_19[1]
                
                if (rax_98 == 0x3d)
                    if (iswspace(result_19[1]) != 0)
                        int32_t i_9
                        
                        do
                            void* result_16 = &result_1[1]
                            result_1 = result_16
                            i_9 = iswspace(*result_16)
                        while (i_9 != 0)
                    
                    result_2 = result_1
                    
                    if (result_2 == 0)
                        if (r13 != 0)
                            goto label_140cdf483
                        
                    labelid_1:
                        result = result_2
                    else
                        uint64_t rax_101 = zx.q(*result_2)
                        
                        if (rax_101.w u> 0x2c || not(test_bit(0x120000000001, rax_101)) || r13 != 0)
                        label_140cdf483:
                            int32_t rcx_92
                            uint32_t rbx_9
                            
                            if (rsi == 0)
                                rcx_92 = 0
                                rbx_9 = 0
                            else
                                int64_t* _String_9 = *(rsi + 0x28)
                                _String_2 = _String_9
                                rcx_92 = _String_2.d
                                rbx_9 = (_String_9 u>> 0x20).d
                            
                            rcx_92.b = sub_140b5b8a0(rcx_92, 0x3a) == 0
                            rcx_92.b |= rbx_9 != 0
                            
                            if (rcx_92.b == 0 && _mm_bsrli_si128(*(rsi + 0x10), 8).b != 0)
                                int64_t rbx_10 = *(sub_140cd2b70(rsi) + 0x18)
                                int32_t rcx_94
                                rcx_94.b = sub_140b5b8a0(rbx_10.d, 0x64) == 0
                                rcx_94.b |= (rbx_10 u>> 0x20).d != 0
                                
                                if (rcx_94.b == 0)
                                    goto label_140cdf7db
                            
                            bool cond:4_1 = r14_2 == 0xffffffff
                            
                            if (r14_2 s<= 0xffffffff)
                                goto label_140cdf6b1
                            
                            if (r13 == 0)
                                cond:4_1 = r14_2 == 0xffffffff
                            label_140cdf6b1:
                                int64_t r8_31 = sx.q(*(rsi + 0x4c))
                                
                                if (cond:4_1)
                                    r14_2 = 0
                                
                                var_70 = &data_142ea3a00
                                var_60.q = 0
                                int32_t var_58_3 = 0
                                var_68_1.w = 0
                                var_98.q = arg4
                                int16_t* result_18 = sub_140941070(rsi, result_1, 
                                    r8_31 + arg2 + sx.q(*(rsi + 0x3c) * r14_2), arg5, var_98, 
                                    &var_70)
                                
                                if (var_58_3 != 0 && var_58_3 - 1 s> 0)
                                    _String_2 = nullptr
                                    i_21.q = 0
                                    sub_140a2ccb0(&var_60, &_String_2, &data_142d6acb4, 1)
                                    int32_t i_10 = i_21
                                    
                                    if (i_10 s> 0)
                                        int64_t* rbx_13 = nullptr
                                        
                                        do
                                            int64_t* _String_5 = _String_2
                                            int16_t* const r9_21
                                            
                                            if (*(rbx_13 + _String_5 + 8) == 0)
                                                r9_21 = &data_142d40450
                                            else
                                                r9_21 = *(rbx_13 + _String_5)
                                            
                                            sub_140b1f850(arg6, 3, u"%s", r9_21)
                                            i_10 = i_21
                                            rdi = zx.q(rdi.d + 1)
                                            rbx_13 = &rbx_13[2]
                                        while (rdi.d s< i_10)
                                    
                                    int64_t* _String_11 = _String_2
                                    
                                    if (i_10 != 0)
                                        int32_t i_11
                                        
                                        do
                                            int64_t rcx_105 = *_String_11
                                            
                                            if (rcx_105 != 0)
                                                sub_140a74f90(rcx_105)
                                            
                                            _String_11 = &_String_11[2]
                                            i_11 = i_10
                                            i_10 -= 1
                                        while (i_11 != 1)
                                        _String_11 = _String_2
                                    
                                    if (_String_11 != 0)
                                        sub_140a74f90(_String_11)
                                
                                result_2 = result_1
                                
                                if (result_18 != 0)
                                    result_2 = result_18
                            else
                                int64_t* _String_7 = *(r13 + 0x78)
                                char rax_106 = (*(r13 + 0x80)).b
                                void** rdx_41 = sx.q(*(r13 + 0x4c)) + arg2
                                int32_t r8_27 = *(_String_7 + 0x3c)
                                _String_2 = _String_7
                                int32_t rax_107 = rdx_41[1].d
                                i_21.q = rdx_41
                                
                                if (r14_2 s>= rax_107)
                                    sub_140cd78f0(&_String_2, r14_2 - rax_107 + 1)
                                    _String_7 = *(r13 + 0x78)
                                    rdx_41 = i_21.q
                                
                                var_60.q = 0
                                var_70 = &data_142ea3a00
                                int32_t var_58_2 = 0
                                var_68_1.w = 0
                                void* r8_28
                                
                                if (rdx_41[1].d != 0)
                                    void* rax_109 = *rdx_41
                                    
                                    if ((not.b(rax_106) & 1) == 0 && (rax_109.b & 1) != 0)
                                        rax_109 = (rax_109 s>> 1) + rdx_41
                                    
                                    r8_28 = sx.q(r8_27 * r14_2) + rax_109
                                else
                                    r8_28 = nullptr
                                
                                var_98.q = arg4
                                int16_t* result_17 =
                                    sub_140941070(_String_7, result_1, r8_28, arg5, var_98, &var_70)
                                
                                if (var_58_2 == 0 || var_58_2 - 1 s<= 0)
                                    if (result_17 != result_1)
                                        goto label_140cdf69a
                                    
                                    sub_140b1f850(arg6, 3, Invalid property value in defaults: %s", 
                                        result_26)
                                label_140cdf69a:
                                    result_2 = result_1
                                    
                                    if (result_17 != 0)
                                        result_2 = result_17
                                else
                                    _String_2 = nullptr
                                    i_21.q = 0
                                    sub_140a2ccb0(&var_60, &_String_2, &data_142d6acb4, 1)
                                    int32_t i_12 = i_21
                                    
                                    if (i_12 s> 0)
                                        int64_t* rbx_12 = nullptr
                                        
                                        do
                                            int64_t* _String_4 = _String_2
                                            int16_t* const r9_17
                                            
                                            if (*(rbx_12 + _String_4 + 8) == 0)
                                                r9_17 = &data_142d40450
                                            else
                                                r9_17 = *(rbx_12 + _String_4)
                                            
                                            sub_140b1f850(arg6, 3, u"%s", r9_17)
                                            i_12 = i_21
                                            rdi = zx.q(rdi.d + 1)
                                            rbx_12 = &rbx_12[2]
                                        while (rdi.d s< i_12)
                                    
                                    int64_t* _String_10 = _String_2
                                    
                                    if (i_12 != 0)
                                        int32_t i_13
                                        
                                        do
                                            int64_t rcx_98 = *_String_10
                                            
                                            if (rcx_98 != 0)
                                                sub_140a74f90(rcx_98)
                                            
                                            _String_10 = &_String_10[2]
                                            i_13 = i_12
                                            i_12 -= 1
                                        while (i_13 != 1)
                                        _String_10 = _String_2
                                    
                                    if (_String_10 == 0)
                                        goto label_140cdf69a
                                    
                                    sub_140a74f90(_String_10)
                                    result_2 = result_1
                                    
                                    if (result_17 != 0)
                                        result_2 = result_17
                            
                            int64_t rcx_107 = var_60.q
                            result_1 = result_2
                            
                            if (rcx_107 == 0)
                            labelid_1:
                                result = result_2
                            else
                                sub_140a74f90(rcx_107)
                            label_140cdf7db:
                            labelid_1:
                                result = result_1
                        else
                        labelid_1:
                            result = result_2
                else
                    sub_140b1f850(arg6, 3, Missing '=' in default properties assignment: %s", 
                        result_26)
                    result = result_1
            else
                sub_140b1f850(arg6, 3, u"redundant data: %s", result_26)
                result = result_1
        else
            int16_t* result_27 = result_26
            int32_t var_98_1 = rax_89
            sub_140b1f850(arg6, (r13 + 3).b, Out of bound array default property (%i/%i): %s", 
                zx.q(r14_2))
            result = result_1
    else if (r13 == 0)
    labelid_1:
        result = result_2
    else
        void** rax_47 = *(r13 + 0x78)
        char rdx_17 = (*(r13 + 0x80)).b
        void* r8_13 = sx.q(*(r13 + 0x4c)) + arg2
        int32_t rcx_34 = *(rax_47 + 0x3c)
        var_70 = rax_47
        var_60 = rcx_34
        var_68.q = r8_13
        
        if (r14_1 == 4)
            int32_t r8_14 = *(r8_13 + 8)
            
            if (r8_14 != 0)
                sub_140cd9680(&var_70, 0, r8_14)
                int64_t* rcx_36 = var_68.q
                int32_t r8_15 = var_60
                rcx_36[1].d = 0
                
                if ((not.b(rdx_17) & 1) != 0)
                    if (*(rcx_36 + 0xc) != 0)
                        sub_140ce4fc0(rcx_36, 0, r8_15)
                else if (*(rcx_36 + 0xc) != 0)
                    sub_140ce4f50(rcx_36, 0, r8_15)
                
                result_2 = result_1
            
            if (iswspace(*result_2) != 0)
                int32_t i_14
                
                do
                    void* result_7 = &result_1[1]
                    result_1 = result_7
                    i_14 = iswspace(*result_7)
                while (i_14 != 0)
            
            int16_t* result_21 = result_1
            int16_t rax_51 = *result_21
            result_2 = &result_21[1]
            result_1 = result_2
            
            if (rax_51 == 0x28)
                goto label_140cdf250
            
        labelid_1:
            result = result_2
        else if (r14_1 - 1 u<= 1)
            if (iswspace(*result_2) != 0)
                int32_t i_15
                
                do
                    void* result_10 = &result_1[1]
                    result_1 = result_10
                    i_15 = iswspace(*result_10)
                while (i_15 != 0)
            
            int16_t* result_23 = result_1
            int16_t rax_62 = *result_23
            result_2 = &result_23[1]
            result_1 = result_2
            
            if (rax_62 != 0x28)
            label_140cdf7e2:
                result = result_2
            else
                if (iswspace(*result_2) != 0)
                    int32_t i_16
                    
                    do
                        void* result_11 = &result_1[1]
                        result_1 = result_11
                        i_16 = iswspace(*result_11)
                    while (i_16 != 0)
                
                if (r14_1 != 1)
                    int64_t* r8_19 = *(r13 + 0x78)
                    int32_t rdx_25 = *(r8_19 + 0x3c)
                    void* r12_1
                    
                    if (rdx_25 != 0)
                        int64_t rcx_62 = sx.q(rdx_25 + 0xf)
                        int64_t rax_69 = rcx_62 + 0xf
                        
                        if (rax_69 u<= rcx_62)
                            rax_69 = 0xffffffffffffff0
                        
                        int64_t rax_70 = rax_69 & 0xfffffffffffffff0
                        __chkstk(rax_70)
                        rsp_1 = &var_b8 - rax_70
                        r12_1 = (rsp_1 + 0x3f) & 0xfffffffffffffff0
                    else
                        r12_1 = nullptr
                    
                    if (not(test_bit(zx.q(r8_19[8].d), 9)))
                        (*(*r8_19 + 0xf0))(r8_19, r12_1)
                    else
                        memset(r12_1, 0, sx.q(r8_19[7].d * rdx_25))
                    
                    int64_t rcx_65 = *(r13 + 0x78)
                    *(rsp_1 + 0x28) = arg6
                    *(rsp_1 + 0x20) = arg4
                    int16_t* result_13
                    int512_t zmm0_1
                    int512_t zmm1_1
                    int512_t zmm2_1
                    result_13, zmm0_1, zmm1_1, zmm2_1 =
                        sub_140941070(rcx_65, result_1, r12_1, zx.q(arg5))
                    int16_t* result_25 = result_1
                    result_2 = result_13
                    
                    if (result_13 == 0 || result_13 == result_25)
                        *(rsp_1 + 0x20) = result_26
                        sub_140b1f850(arg6, 2, 
                            Unable to parse parameter value '%s' in defaultproperties array operation: "
                        "result_25)
                        int64_t* rcx_78 = *(r13 + 0x78)
                        
                        if ((not.b((rcx_78[8] u>> 0x24).b) & 1) != 0)
                            (*(*rcx_78 + 0xe8))(rcx_78, r12_1)
                        
                        goto label_140cdf7db
                    
                    r14_1.b = 0
                    int32_t i_23 = 0
                    
                    while (true)
                        void** rax_75 = var_68.q
                        
                        if (i_23 u>= rax_75[1].d)
                            break
                        
                        *rax_75
                        
                        if ((*(**(r13 + 0x78) + 0x80))(nop) != 0)
                            sub_140cd9680(&var_70, i_23, 1)
                            i_21 = i_23
                            _String_2 = &var_70
                            int32_t var_7c_3 = 1
                            sub_140cd32c0(&var_70, &_String_2)
                            i_23 -= 1
                            r14_1.b = 1
                        
                        i_23 += 1
                    
                    if (r14_1.b == 0)
                        sub_140b63b70(r13 + 0x28, &_String_2)
                        int64_t* _String_12 = &data_142d40450
                        
                        if (i_21 != 0)
                            _String_12 = _String_2
                        
                        sub_140b1f850(arg6, 3, u"%s.Remove(): Value not found in array", _String_12)
                        int64_t* _String_6 = _String_2
                        
                        if (_String_6 != 0)
                            sub_140a74f90(_String_6)
                    
                    int64_t* rcx_74 = *(r13 + 0x78)
                    
                    if ((not.b((rcx_74[8] u>> 0x24).b) & 1) != 0)
                        (*(*rcx_74 + 0xe8))(rcx_74, r12_1)
                    
                    result_1 = result_2
                    goto label_140cdf250
                
                int32_t rax_65 = sub_140cd78f0(&var_70, r14_1)
                void** rdx_22 = var_68.q
                
                if (rdx_22[1].d != 0)
                    void* rcx_58 = *rdx_22
                    
                    if ((not.b(rdx_17) & r14_1.b) == 0 && (r14_1.b & rcx_58.b) != 0)
                        rcx_58 = (rcx_58 s>> 1) + rdx_22
                    
                    rdi = sx.q(var_60 * rax_65) + rcx_58
                
                var_98.q = arg4
                int16_t* result_12 = sub_140941070(*(r13 + 0x78), result_1, rdi, arg5, var_98, arg6)
                int16_t* result_24 = result_1
                result_2 = result_12
                
                if (result_12 == 0 || result_12 == result_24)
                    var_98.q = result_26
                    sub_140b1f850(arg6, 3, 
                        Unable to parse parameter value '%s' in defaultproperties array operation: %s", 
                        result_24)
                    result = result_1
                else
                    result_1 = result_12
                label_140cdf250:
                    
                    if (iswspace(*result_2) != 0)
                        int32_t i_17
                        
                        do
                            void* result_14 = &result_1[1]
                            result_1 = result_14
                            i_17 = iswspace(*result_14)
                        while (i_17 != 0)
                    
                label_140cdf27f:
                    result_2 = result_1
                    
                    if (*result_2 == 0x29)
                        result_2 = &result_2[1]
                    
                label_140cdf7e2_1:
                    result = result_2
        else
            if (r14_1 != 3)
                goto label_140cdf250
            
            if (iswspace(*result_2) != 0)
                int32_t i_18
                
                do
                    void* result_8 = &result_1[1]
                    result_1 = result_8
                    i_18 = iswspace(*result_8)
                while (i_18 != 0)
            
            int16_t* result_22 = result_1
            int16_t rax_55 = *result_22
            result_2 = &result_22[1]
            result_1 = result_2
            
            if (rax_55 == 0x28)
                if (iswspace(*result_2) != 0)
                    int32_t i_19
                    
                    do
                        void* result_9 = &result_1[1]
                        result_1 = result_9
                        i_19 = iswspace(*result_9)
                    while (i_19 != 0)
                
                result_2 = result_1
                int64_t* _String_1 = nullptr
                _String_2 = nullptr
                int32_t rcx_43 = 0
                int32_t r8_16 = 0
                int32_t var_7c_1 = 0
                int16_t i_20 = *result_2
                int64_t* _String
                
                if (i_20 == 0x29)
                    _String = &data_142d40450
                else
                    do
                        if (i_20 == 0)
                            if (_String_1 != 0)
                                sub_140a74f90(_String_1)
                            
                            goto label_140cdf7e2_2
                        
                        int32_t rbx_5 = rcx_43 - 1
                        
                        if (rcx_43 s<= 0)
                            rbx_5 = 0
                        
                        int32_t rcx_44
                        rcx_44.b = rcx_43 s<= 0
                        rcx_43 += rcx_44 + 1
                        
                        if (rcx_43 s> r8_16)
                            sub_140594770(&_String_2)
                            r8_16 = var_7c_1
                            _String_1 = _String_2
                        
                        int64_t rax_58 = sx.q(rbx_5)
                        *(_String_1 + (rax_58 << 1)) = i_20
                        *(_String_1 + (rax_58 << 1) + 2) = 0
                        result_2 = &result_1[1]
                        result_1 = result_2
                        i_20 = *result_2
                    while (i_20 != 0x29)
                    
                    _String = rcx_43 == 0 ? &data_142d40450 : _String_1
                
                int32_t rax_59 = _wtoi(_String)
                sub_140cd9680(&var_70, rax_59, 1)
                int32_t var_80_1 = rax_59
                _String_2 = &var_70
                int32_t var_7c_2 = 1
                sub_140cd32c0(&var_70, &_String_2)
                
                if (_String_1 != 0)
                    sub_140a74f90(_String_1)
                
                result_2 = result_1
                goto label_140cdf250
            
        label_140cdf7e2_2:
            result = result_2

__security_check_cookie(rax_1 ^ &_String_2)
return result
