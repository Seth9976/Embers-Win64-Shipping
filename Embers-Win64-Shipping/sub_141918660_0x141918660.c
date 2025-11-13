// 函数: sub_141918660
// 地址: 0x141918660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a28
int64_t rax_1 = __security_cookie ^ &var_a28
int64_t rax_2 = sx.q(arg5)
int64_t rdi = arg1
void* r15 = arg6
int64_t r12 = sx.q(arg2)
int128_t* rsi = arg4
int32_t rax_3 = *(arg3 + 0x10)
int64_t* r14_1 = rax_2 * 0xb8 + arg1
void** r13_1 = r12 * 0xb8 + arg1
void* var_9a0 = r15
void var_5c8
sub_14192af30(&var_5c8, arg3 + 0x18)

if (data_143eff5c6 != 0)
    void var_518
    sub_14192a540(&var_518)
    sub_14192bc70(&var_518, r14_1)
    int32_t var_468_1 = r14_1[0x16].d
    int64_t rax_5 = rax_2 * 5
    int32_t var_b8_1 = *(rdi + (rax_5 << 2) + 0x460)
    int128_t var_c8 = *(rdi + (rax_5 << 2) + 0x450)
    void var_460
    sub_14192bc70(&var_460, r13_1)
    int32_t var_3b0_1 = r13_1[0x16].d
    int64_t rax_8 = r12 * 5
    int32_t var_a4_1 = *(rdi + (rax_8 << 2) + 0x460)
    int128_t var_b4_1 = *(rdi + (rax_8 << 2) + 0x450)
    sub_14193d390()
    uint64_t rdx_3
    int64_t* _Str1_1
    
    if (data_1439c77f8 == data_1439c7824)
    label_1419187fd:
        _Str1_1 = nullptr
    else
        int32_t rax_10 = sub_140b21160(&var_c8, 0x78, 0)
        void* rcx_6 = data_1439c7830
        void* r8 = &data_1439c7828
        
        if (rcx_6 != 0)
            r8 = rcx_6
        
        int32_t rbx_1 = *(r8 + (((sx.q(data_1439c7838) - 1) & sx.q(rax_10)) << 2))
        
        if (rbx_1 == 0xffffffff)
        label_1419187fd_1:
            _Str1_1 = nullptr
        else
            int64_t rsi_1 = data_1439c77f0
            
            while (true)
                _Str1_1 = sx.q(rbx_1) * 0x588 + rsi_1
                bool rax_13
                rax_13, rdx_3 = sub_14192cef0(_Str1_1, &var_518)
                
                if (rax_13 != 0)
                    break
                
                rbx_1 = _Str1_1[0xb0].d
                
                if (rbx_1 == 0xffffffff)
                    goto label_1419187fd_2
            
            if (rbx_1 == 0xffffffff)
            label_1419187fd_2:
                _Str1_1 = nullptr
    
    void* _Str1 = &_Str1_1[0x99]
    
    if (_Str1_1 == 0)
        _Str1 = nullptr
    
    if (_Str1 == 0)
        int32_t rax_15 = *(r15 + 0x50)
        int32_t var_7f8_1 = 0xffffffff
        int32_t rsi_2 = _Str1.d
        void* _Str1_8 = _Str1
        int32_t var_820_1 = _Str1.d
        void* _Str1_11 = _Str1
        int32_t var_800_1 = _Str1.d
        int32_t var_7fc_1 = 0x80
        void* _Str1_9 = _Str1
        void* _Str1_10 = _Str1
        int32_t var_7f4_1 = _Str1.d
        void* _Str1_12 = _Str1
        int32_t var_7e0_1 = _Str1.d
        int16_t* _Str1_3
        uint32_t _Str1_4
        int32_t var_9e4
        
        if (rax_15 s> 0)
            void* _Str1_29 = _Str1
            
            do
                int64_t rax_16 = *(r15 + 0x48)
                _Str1_3 = _Str1
                _Str1_1 = sx.q(*(_Str1_29 + rax_16 + 8))
                int64_t r15_1 = *(_Str1_29 + rax_16)
                _Str1_4 = _Str1_1.d
                
                if (_Str1_1.d != 0)
                    sub_1405da9e0(&_Str1_3, _Str1_1.d, 0)
                    _Str1 = _Str1_3
                    memcpy(_Str1, r15_1, _Str1_1.d)
                    _Str1_1 = zx.q(_Str1_4)
                else
                    var_9e4 = 0
                
                if (_Str1_1.d s>= 4)
                    int32_t rax_17 = strncmp(_Str1, "out_", 4)
                    int32_t rax_18
                    
                    if (rax_17 != 0)
                        rax_18 = strncmp(_Str1, "var_", 4)
                    
                    if (rax_17 == 0 || rax_18 == 0)
                        int32_t temp1_1 = _Str1_1.d
                        _Str1_1 = zx.q(_Str1_1.d - 4)
                        
                        if (temp1_1 != 4)
                            memmove(_Str1, _Str1 + 4, _Str1_1.d)
                        
                        _Str1_4 = _Str1_1.d
                        sub_1405dac10(&_Str1_3)
                
                r15 = var_9a0
                sub_1419265c0(&_Str1_8, &_Str1_3, *(r15 + 0x48) + ((sx.q(rsi_2) * 3 + 2) << 3))
                int16_t* _Str1_32 = _Str1_3
                
                if (_Str1_32 != 0)
                    sub_140a74f90(_Str1_32)
                
                rax_15 = *(r15 + 0x50)
                rsi_2 += 1
                _Str1_29 += 0x18
                _Str1 = nullptr
            while (rsi_2 s< rax_15)
        
        int32_t i_20
        uint64_t i_18 = zx.q(i_20)
        rdx_3.b = 1
        char var_9f8_1 = 1
        int32_t r14_2 = _Str1.d
        void* _Str1_13 = _Str1
        int32_t var_7d0_1 = 0
        void* _Str1_14 = _Str1
        int32_t var_7b0_1 = _Str1.d
        int32_t var_7ac_1 = 0x80
        int64_t var_7c8_1 = 0
        int64_t var_7c0_1 = 0
        int32_t var_7a8_1 = 0xffffffff
        int32_t var_7a4_1 = _Str1.d
        void* _Str1_15 = _Str1
        int32_t var_790_1 = _Str1.d
        void* _Str1_6 = _Str1
        int32_t i_14 = _Str1.d
        int32_t var_9a4_1 = _Str1.d
        void* _Str1_7 = _Str1
        int32_t i_16 = _Str1.d
        int32_t var_954_1 = _Str1.d
        int32_t var_a08
        void* var_9d8
        int16_t* _Str1_5
        int32_t* var_998
        uint64_t i_8
        int64_t var_950
        void* var_848
        int32_t var_840
        int32_t var_788
        
        if (i_18.d s> 0)
            void* var_5a8
            int32_t* r13_3 = var_5a8 + 0x10
            i_8 = i_18
            int32_t* r15_2 = r13_3
            var_998 = r13_3
            uint64_t i
            
            do
                int64_t rsi_3 = *(r13_3 - 0x10)
                _Str1_1 = _Str1
                var_9d8 = _Str1
                uint32_t count_4 = r13_3[-2]
                uint32_t count = count_4
                
                if (count_4 != 0)
                    sub_1405da9e0(&var_9d8, count_4, 0)
                    _Str1_1 = var_9d8
                    memcpy(_Str1_1, rsi_3, count_4)
                    count_4 = count
                else
                    int32_t var_9cc_1 = 0
                
                if (count_4 s>= 3 && strncmp(_Str1_1, "in_", 3) == 0)
                    if (count_4 != 3)
                        memmove(_Str1_1, _Str1_1 + 3, count_4 - 3)
                    
                    count = count_4 - 3
                    sub_1405dac10(&var_9d8)
                    count_4 = count
                    _Str1_1 = var_9d8
                
                if (count_4 s>= 4 && strncmp(_Str1_1, "var_", 4) == 0)
                    if (count_4 != 4)
                        memmove(_Str1_1, _Str1_1 + 4, count_4 - 4)
                    
                    count = count_4 - 4
                    sub_1405dac10(&var_9d8)
                
                sub_1419265c0(&_Str1_13, &var_9d8, r15_2)
                void* buffer2 = var_9d8
                int64_t var_688
                int64_t var_680
                
                if (var_820_1 == var_7f4_1)
                label_141918bac:
                    sub_1405eb940(&var_788, *(r13_3 - 0x10))
                    *r13_3
                    int32_t var_a00_1 = 0x8b31
                    var_a08 = 0x8b30
                    sub_140a2e390(&var_848, 
                        Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x not written by "
                    "stage 0x%x", var_680)
                    int64_t i_26 = sx.q(i_14)
                    int32_t i_22 = (i_26 + 1).d
                    i_14 = i_22
                    
                    if (i_22 s> r14_2)
                        sub_1405a4f90(&_Str1_6)
                        i_14 = i_22
                    
                    _Str1 = nullptr
                    void* rcx_36 = (i_26 << 4) + _Str1_6
                    *rcx_36 = 0
                    *rcx_36 = var_848
                    var_848 = nullptr
                    *(rcx_36 + 8) = var_840
                    int32_t var_83c
                    *(rcx_36 + 0xc) = var_83c
                    void* rcx_37 = var_848
                    var_840.q = 0
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    if (var_688 != 0)
                        sub_140a74f90(var_688)
                    
                    var_9f8_1 = 0
                else
                    void var_7f0
                    void* _Str1_33 = &var_7f0
                    int64_t rdx_19 = sx.q(var_7e0_1 - 1) & sx.q(sub_140b21160(buffer2, count, 0))
                    
                    if (_Str1_12 != 0)
                        _Str1_33 = _Str1_12
                    
                    int32_t rbx_4 = *(_Str1_33 + (rdx_19 << 2))
                    
                    if (rbx_4 == 0xffffffff)
                        goto label_141918bac
                    
                    void* _Str1_44 = _Str1_8
                    
                    while (true)
                        _Str1_1 = (sx.q(rbx_4) << 5) + _Str1_44
                        int64_t count_1 = sx.q(_Str1_1[1].d)
                        
                        if (count_1.d == count && memcmp(*_Str1_1, buffer2, count_1) == 0)
                            break
                        
                        rbx_4 = _Str1_1[3].d
                        
                        if (rbx_4 == 0xffffffff)
                            goto label_141918bac
                    
                    if (rbx_4 == 0xffffffff)
                        goto label_141918bac
                    
                    if (var_820_1 == var_7f4_1)
                    label_141918d91:
                        _Str1 = nullptr
                        _Str1_1 = nullptr
                    else
                        void* _Str1_34 = &var_7f0
                        int64_t rdx_25 =
                            sx.q(var_7e0_1 - 1) & sx.q(sub_140b21160(buffer2, count, 0))
                        
                        if (_Str1_12 != 0)
                            _Str1_34 = _Str1_12
                        
                        int32_t rbx_6 = *(_Str1_34 + (rdx_25 << 2))
                        
                        if (rbx_6 == 0xffffffff)
                            goto label_141918d91
                        
                        void* _Str1_45 = _Str1_8
                        
                        while (true)
                            _Str1_1 = (sx.q(rbx_6) << 5) + _Str1_45
                            int64_t count_2 = sx.q(_Str1_1[1].d)
                            
                            if (count_2.d == count && memcmp(*_Str1_1, buffer2, count_2) == 0)
                                break
                            
                            rbx_6 = _Str1_1[3].d
                            
                            if (rbx_6 == 0xffffffff)
                                goto label_141918d91
                        
                        if (rbx_6 == 0xffffffff)
                            goto label_141918d91
                        
                        _Str1 = nullptr
                    
                    int32_t rax_38 = *r13_3
                    int32_t r14_3 = _Str1_1[2].d
                    
                    if (r14_3 != rax_38)
                        if (r14_3 s< 0 || rax_38 s< 0)
                            char* rdx_32 = *(r13_3 - 0x10)
                            int32_t* rcx_51 = &var_788
                            int16_t* _Str1_35
                            
                            if (rax_38 != 0xffffffff)
                                sub_1405eb940(rcx_51, rdx_32)
                                *r13_3
                                int32_t var_a00_3 = 0x8b31
                                var_a08 = 0x8b30
                                sub_140a2e390(&_Str1_5, 
                                    Separate Shader Object Binding Error: Input %s @ %d of stage 0x%x "
                                "written by stage 0x%x without location, can't be rewritten.", 
                                    var_680)
                                int64_t i_29 = sx.q(i_14)
                                int32_t i_25 = (i_29 + 1).d
                                i_14 = i_25
                                
                                if (i_25 s> var_9a4_1)
                                    sub_1405a4f90(&_Str1_6)
                                    i_14 = i_25
                                
                                int16_t** rcx_62 = (i_29 << 4) + _Str1_6
                                _Str1 = nullptr
                                *rcx_62 = nullptr
                                *rcx_62 = _Str1_5
                                _Str1_5 = nullptr
                                int64_t var_9b8
                                rcx_62[1].d = var_9b8.d
                                *(rcx_62 + 0xc) = var_9b8:4.d
                                _Str1_35 = _Str1_5
                                var_9b8 = 0
                            else
                                sub_1405eb940(rcx_51, rdx_32)
                                int32_t var_a00_2 = _Str1_1[2].d
                                var_a08 = 0x8b31
                                sub_140a2e390(&_Str1_3, 
                                    Separate Shader Object Binding Error: Input %s of stage 0x%x written "
                                "by stage 0x%x at location %d, can't be rewritten.", var_680)
                                int64_t i_28 = sx.q(i_14)
                                int32_t i_24 = (i_28 + 1).d
                                i_14 = i_24
                                
                                if (i_24 s> var_9a4_1)
                                    sub_1405a4f90(&_Str1_6)
                                    i_14 = i_24
                                
                                void** rcx_56 = (i_28 << 4) + _Str1_6
                                _Str1 = nullptr
                                *rcx_56 = nullptr
                                *rcx_56 = _Str1_3
                                _Str1_3 = nullptr
                                rcx_56[1].d = _Str1_4
                                *(rcx_56 + 0xc) = var_9e4
                                _Str1_35 = _Str1_3
                                _Str1_4.q = 0
                            
                            if (_Str1_35 != 0)
                                sub_140a74f90(_Str1_35)
                            
                            if (var_688 == 0)
                                var_9f8_1 = 0
                            else
                                sub_140a74f90(var_688)
                                var_9f8_1 = 0
                        else
                            var_950 = 0
                            int64_t rsi_5 = 0
                            int32_t var_944_1 = 0
                            
                            if (count != 0)
                                sub_1405da9e0(&var_950, count, 0)
                                rsi_5 = var_950
                                memcpy(rsi_5, buffer2, count)
                                r14_3 = _Str1_1[2].d
                            
                            int64_t i_27 = sx.q(i_16)
                            _Str1_1 = zx.q(*r13_3)
                            int32_t i_23 = (i_27 + 1).d
                            i_16 = i_23
                            
                            if (i_23 s> var_954_1)
                                sub_1405a4df0(&_Str1_7)
                                i_16 = i_23
                            
                            int64_t* rbx_7 = _Str1_7 + i_27 * 0x18
                            *rbx_7 = 0
                            rbx_7[1].d = count
                            
                            if (count != 0)
                                sub_1405da9e0(rbx_7, count, 0)
                                memcpy(*rbx_7, rsi_5, count)
                            else
                                *(rbx_7 + 0xc) = 0
                            
                            rbx_7[2].d = r14_3
                            *(rbx_7 + 0x14) = _Str1_1.d
                            
                            if (rsi_5 != 0)
                                sub_140a74f90(rsi_5)
                            
                            _Str1 = nullptr
                            var_9f8_1 = 0
                
                if (buffer2 != 0)
                    sub_140a74f90(buffer2)
                
                r13_3 = &r13_3[6]
                r14_2 = var_9a4_1
                r15_2 = &var_998[6]
                i = i_8
                i_8 -= 1
                var_998 = r15_2
            while (i != 1)
            r15 = var_9a0
            rdx_3 = zx.q(var_9f8_1)
            rax_15 = *(r15 + 0x50)
        
        var_9d8 = _Str1
        void* _Str1_30 = _Str1
        int32_t i_15 = _Str1.d
        int32_t rsi_4 = _Str1.d
        int32_t var_9cc_2 = _Str1.d
        int32_t i_1 = _Str1.d
        
        if (rax_15 s> 0)
            void* _Str1_28 = _Str1
            
            do
                int64_t* rax_32 = *(r15 + 0x48)
                
                if (*(rax_32 + _Str1_28 + 0x10) == 0xffffffff)
                    uint32_t count_7 = *(rax_32 + _Str1_28 + 8)
                    void* _Str1_27 = _Str1
                    _Str1_3 = _Str1
                    int64_t rbx_5 = *(rax_32 + _Str1_28)
                    
                    if (count_7 != 0)
                        sub_1405da9e0(&_Str1_3, count_7, 0)
                        _Str1_27 = _Str1_3
                        memcpy(_Str1_27, rbx_5, count_7)
                    else
                        var_9e4 = 0
                    
                    if (count_7 s>= 4)
                        int32_t rax_50 = strncmp(_Str1_27, "out_", 4)
                        int32_t rax_51
                        
                        if (rax_50 != 0)
                            rax_51 = strncmp(_Str1_27, "var_", 4)
                        
                        if (rax_50 == 0 || rax_51 == 0)
                            if (count_7 != 4)
                                memmove(_Str1_27, _Str1_27 + 4, count_7 - 4)
                            
                            sub_1405dac10(&_Str1_3)
                            count_7 -= 4
                            _Str1_27 = _Str1_3
                    
                    if (var_7d0_1 == var_7a4_1)
                        goto label_141919108
                    
                    void var_7a0
                    void* _Str1_36 = &var_7a0
                    int64_t rdx_40 = sx.q(var_790_1 - 1) & sx.q(sub_140b21160(_Str1_27, count_7, 0))
                    
                    if (_Str1_15 != 0)
                        _Str1_36 = _Str1_15
                    
                    int32_t rbx_8 = *(_Str1_36 + (rdx_40 << 2))
                    
                    if (rbx_8 == 0xffffffff)
                        goto label_141919108
                    
                    void* _Str1_51 = _Str1_13
                    
                    while (true)
                        _Str1_1 = (sx.q(rbx_8) << 5) + _Str1_51
                        uint64_t count_3 = sx.q(_Str1_1[1].d)
                        
                        if (count_3.d == count_7 && memcmp(*_Str1_1, _Str1_27, count_3) == 0)
                            break
                        
                        rbx_8 = _Str1_1[3].d
                        
                        if (rbx_8 == 0xffffffff)
                            goto label_141919104
                    
                    if (rbx_8 != 0xffffffff)
                        _Str1_30 = var_9d8
                        r15 = var_9a0
                    else
                    label_141919104:
                        r15 = var_9a0
                    label_141919108:
                        int64_t i_21 = sx.q(i_15)
                        _Str1_1 = *(r15 + 0x48)
                        int32_t i_30 = (i_21 + 1).d
                        i_15 = i_30
                        
                        if (i_30 s> var_9cc_2)
                            sub_1405a4df0(&var_9d8)
                            i_15 = i_30
                        
                        _Str1_30 = var_9d8
                        sub_14192b1e0(_Str1_30 + i_21 * 0x18, &_Str1_1[sx.q(i_1) * 3])
                        var_9f8_1 = 0
                    
                    if (_Str1_27 != 0)
                        sub_140a74f90(_Str1_27)
                    
                    _Str1 = nullptr
                
                i_1 += 1
                _Str1_28 += 0x18
            while (i_1 s< *(r15 + 0x50))
            
            rdx_3 = zx.q(var_9f8_1)
            rsi_4 = i_15
        
        void* r13_4
        
        if (rdx_3.b != 0)
            r13_4 = var_9d8
        else if (i_14 != 0)
            r13_4 = var_9d8
        label_141919998:
            _kbhit_nolock(&_Str1_3, r15)
            _kbhit_nolock(&var_950, arg3)
            int64_t rcx_133 = var_950
            
            if (rcx_133 != 0)
                sub_140a74f90(rcx_133)
            
            int16_t* _Str1_39 = _Str1_3
            
            if (_Str1_39 != 0)
                sub_140a74f90(_Str1_39)
        else
            char var_6d2_1 = rdx_3.b
            int64_t var_6e2_1 = -1
            int64_t var_6da_1 = -1
            void* _Str1_16 = _Str1
            int64_t var_778_1 = 0
            void* _Str1_17 = _Str1
            int64_t var_768_1 = 0
            void* _Str1_18 = _Str1
            int64_t var_758_1 = 0
            void* _Str1_19 = _Str1
            int32_t var_748_1 = 0
            int32_t var_740_1 = _Str1.d
            void* _Str1_20 = _Str1
            int64_t var_730_1 = 0
            void* _Str1_21 = _Str1
            int64_t var_720_1 = 0
            void* _Str1_22 = _Str1
            int64_t var_710_1 = 0
            void* _Str1_23 = _Str1
            int64_t var_700_1 = 0
            void* _Str1_24 = _Str1
            int64_t var_6f0_1 = 0
            int32_t var_6e8_1 = 0
            int16_t var_6e4_1 = 0
            void* _Str1_25 = _Str1
            int64_t var_6c8_1 = 0
            void* _Str1_26 = _Str1
            int64_t var_6b8_1 = 0
            __builtin_strncpy(&var_788, "LSLGSV", 6)
            sub_14192bc70(&_Str1_16, r15 + 0x18)
            
            if (&_Str1_26 != r15 + 0xd8)
                int64_t rbx_10 = sx.q(*(r15 + 0xe0))
                _Str1_1 = *(r15 + 0xd8)
                int32_t r8_18 = var_6b8_1:4.d
                var_6b8_1.d = rbx_10.d
                
                if (rbx_10.d != 0 || r8_18 != 0)
                    sub_1418ecac0(&_Str1_26, rbx_10.d, r8_18)
                    memcpy(_Str1_26, _Str1_1, (rbx_10.d + (rbx_10 << 2).d) * 2)
                    _Str1 = nullptr
                else
                    _Str1 = nullptr
                    var_6b8_1:4.d = 0
            
            _Str1_5 = _Str1
            int32_t i_17 = 0
            _kbhit_nolock(&var_950, r15)
            int512_t zmm1_1 = sub_140a2cec0(&var_950, &_Str1_5, 1)
            int16_t* _Str1_50 = &data_142d40450
            uint64_t _Str1_31 = _Str1_30
            _Str1_1.b = rsi_4 s> 0
            void** rcx_83 = sx.q(rsi_4) * 3
            char _Str1_2 = _Str1_1.b
            void* rax_61 = _Str1_30 + (rcx_83 << 3)
            var_848 = rax_61
            
            if (_Str1_30 != rax_61)
                while (true)
                    uint32_t count_6 = *(_Str1_30 + 8)
                    void* buffer1 = _Str1
                    void* var_910 = _Str1
                    int64_t rbx_11 = *_Str1_30
                    i_8.d = count_6
                    
                    if (count_6 != 0)
                        sub_1405da9e0(&var_910, count_6, 0)
                        buffer1 = var_910
                        rcx_83 = memcpy(buffer1, rbx_11, count_6)
                        i_8.d = count_6
                    
                    int32_t rax_64 = *(_Str1_30 + 0x10)
                    _Str1 = nullptr
                    int32_t r15_5 = 0
                    var_998.d = rax_64
                    
                    if (i_17 s> 0)
                        int64_t r12_1 = 0
                        
                        do
                            _Str1_3 = nullptr
                            int16_t* _Str1_49 = nullptr
                            _Str1_4.q = 0
                            uint32_t _Str1_40 = 0
                            int32_t rax_62 = 0
                            int16_t* _Str1_53
                            uint32_t r14_5
                            
                            if (buffer1 != 0 && *buffer1 != 0)
                                int64_t rbx_12 = -1
                                
                                do
                                    rbx_12 += 1
                                while (*(buffer1 + rbx_12) != 0)
                                
                                _Str1 = zx.q(rbx_12.d + 1)
                                
                                if (_Str1.d s> 0)
                                    sub_1405947f0(&_Str1_3, _Str1.d)
                                    rax_62 = var_9e4
                                    _Str1_40 = _Str1_4
                                    _Str1_49 = _Str1_3
                                
                                r14_5 = _Str1.d + _Str1_40
                                
                                if (r14_5 s> rax_62)
                                    sub_140594770(&_Str1_3)
                                    _Str1_49 = _Str1_3
                                
                                var_a08.w = 0x3f
                                sub_1405a7220(_Str1_49, _Str1.d, buffer1, _Str1.d, var_a08.w)
                                _Str1_53 = _Str1_49
                            
                            if (buffer1 == 0 || *buffer1 == 0 || r14_5 == 0)
                                _Str1_53 = &data_142d40450
                            
                            int32_t rax_63
                            rax_63, rcx_83, zmm1_1 =
                                sub_140a23cf0(&_Str1_5[sx.q(r15_5) * 8], _Str1_53, 1, 0, 0xffffffff)
                            _Str1.b = rax_63 != 0xffffffff
                            
                            if (_Str1_49 != 0)
                                rcx_83, zmm1_1 = sub_140a74f90(_Str1_49)
                            
                            if (_Str1.b == 0)
                                _Str1 = nullptr
                            else
                                _Str1 = nullptr
                                rcx_83 = _Str1_5 + r12_1
                                rcx_83[1].d = 0
                                
                                if (*(rcx_83 + 0xc) != 0)
                                    rcx_83 = sub_1405947f0(rcx_83, 0)
                            
                            r15_5 += 1
                            r12_1 += 0x10
                        while (r15_5 s< i_17)
                        
                        count_6 = i_8.d
                        _Str1_30 = _Str1_31
                        rax_64 = var_998.d
                    
                    int32_t rdi_8 = 0
                    
                    if (var_748_1 s> 0)
                        int64_t* _Str1_42 = _Str1_19
                        
                        while (true)
                            rcx_83 = &var_910
                            
                            if (&var_910 != _Str1_42)
                                if (rax_64 != _Str1_42[2].d || count_6 != _Str1_42[1].d)
                                    goto label_14191952b
                                
                                int32_t rax_65
                                rax_65, rcx_83 = memcmp(buffer1, *_Str1_42, sx.q(count_6))
                                
                                if (rax_65 != 0)
                                    rax_64 = var_998.d
                                label_14191952b:
                                    rdi_8 += 1
                                    _Str1_42 = &_Str1_42[3]
                                    
                                    if (rdi_8 s>= var_748_1)
                                        break
                                    
                                    continue
                            
                            rcx_83, zmm1_1 = sub_1418ec240(&_Str1_19, rdi_8, 1, 1)
                            break
                        
                        _Str1 = nullptr
                    
                    if (buffer1 != 0)
                        rcx_83, zmm1_1 = sub_140a74f90(buffer1)
                    
                    _Str1_30 += 0x18
                    _Str1_31 = _Str1_30
                    
                    if (_Str1_30 == var_848)
                        break
                
                rsi_4 = i_15
                _Str1_50 = &data_142d40450
                _Str1_1 = zx.q(_Str1_2)
            
            r13_4 = var_9d8
            void* rbx_13 = r13_4
            
            if (rsi_4 != 0)
                int32_t i_2
                
                do
                    rcx_83 = *rbx_13
                    
                    if (rcx_83 != 0)
                        rcx_83, zmm1_1 = sub_140a74f90(rcx_83)
                    
                    rbx_13 += 0x18
                    i_2 = rsi_4
                    rsi_4 -= 1
                while (i_2 != 1)
            
            i_15 = 0
            int32_t i_19 = 0
            
            if (var_9cc_2 == 0)
                if (i_16 == 0)
                    goto label_1419195e6
                
                rsi_4.b = 0
            else
                rcx_83 = sub_1405a5130(&var_9d8, 0)
                r13_4 = var_9d8
                i_15 = i_19
                
                if (i_19 != 0 || i_16 != 0)
                    rsi_4.b = 0
                else
                label_1419195e6:
                    int16_t* _Str1_37
                    
                    if (_Str1_1.b != 0)
                        int16_t* _Str1_46 = _Str1_5
                        void* r15_8 = &_Str1_46[sx.q(i_17) * 8]
                        _Str1_3 = nullptr
                        _Str1_4.q = 0
                        
                        if (_Str1_46 != r15_8)
                            do
                                int32_t rbx_14 = *(_Str1_46 + 8)
                                uint64_t _Str1_56 = 0
                                int64_t r14_6 = *_Str1_46
                                _Str1_31 = 0
                                
                                if (rbx_14 != 0)
                                    sub_1405a4c70(&_Str1_31, rbx_14, 0)
                                    _Str1_56 = _Str1_31
                                    rcx_83 = memcpy(_Str1_56, r14_6, rbx_14 * 2)
                                else
                                    int32_t var_96c_1 = 0
                                
                                if (rbx_14 s> 1)
                                    var_848 = nullptr
                                    sub_140596860(&var_848, _Str1_56, rbx_14, 0, 
                                        sbb.d(rcx_83.d, rcx_83.d, rbx_14 != 0) + 2)
                                    sub_140a20ba0(&var_848, &data_142d576a0, 1)
                                    int32_t rax_69 = var_840
                                    void* rbx_15 = var_848
                                    var_848 = nullptr
                                    var_840.q = 0
                                    int32_t r8_28 = rax_69 - 1
                                    
                                    if (rax_69 == 0)
                                        r8_28 = 0
                                    
                                    rcx_83 = sub_140a20ba0(&_Str1_3, rbx_15, r8_28)
                                    
                                    if (rbx_15 != 0)
                                        rcx_83, zmm1_1 = sub_140a74f90(rbx_15)
                                
                                if (_Str1_56 != 0)
                                    rcx_83, zmm1_1 = sub_140a74f90(_Str1_56)
                                
                                _Str1_46 = &_Str1_46[8]
                            while (_Str1_46 != r15_8)
                            
                            r13_4 = var_9d8
                        
                        var_998 = nullptr
                        int32_t var_990_1 = 0
                        _Str1_31 = 0
                        void** const var_8f8
                        memset(&var_8f8, 0, 0x90)
                        sub_140b4c2a0(&var_8f8)
                        int64_t var_868_1 = 0
                        var_8f8 = &data_142d6ad48
                        int32_t** var_860_1 = &var_998
                        uint64_t _Str1_52 = _Str1_31
                        sub_140b552b0(&var_8f8, 1)
                        var_8f8[0x1b](&var_8f8, 0)
                        sub_14192bee0(&var_8f8, &var_788, zmm1_1)
                        int16_t* _Str1_41 = &data_142d40450
                        var_9d8 = nullptr
                        
                        if (_Str1_4 != 0)
                            _Str1_41 = _Str1_3
                        
                        void* rdi_9 = nullptr
                        int32_t var_9cc_3 = 0
                        void var_668
                        sub_1408f2b40(&var_668, _Str1_41)
                        int64_t rcx_113 = -1
                        int64_t var_5e0
                        bool cond:5_1
                        
                        do
                            cond:5_1 = *(var_5e0 + rcx_113 + 1) != 0
                            rcx_113 += 1
                        while (cond:5_1)
                        int32_t count_5 = (rcx_113 + 1).d
                        int64_t var_5e8
                        
                        if (var_5e8 != 0)
                            sub_140a74f90(var_5e8)
                        
                        if (_Str1_4 != 0)
                            _Str1_50 = _Str1_3
                        
                        sub_1408f2b40(&var_668, _Str1_50)
                        rsi_4 = count_5
                        
                        if (count_5 s> 0)
                            sub_1405daba0(&var_9d8)
                            rsi_4 = count_5
                            rdi_9 = var_9d8
                        
                        memcpy(rdi_9, var_5e0, count_5)
                        
                        if (var_5e8 != 0)
                            sub_140a74f90(var_5e8)
                        
                        int512_t zmm1_2 = sub_14063a3c0(&var_8f8, rdi_9, sx.q(rsi_4))
                        var_9d8 = var_998
                        int32_t var_9d0_3 = var_990_1
                        var_9d8.o = var_9d8.o
                        __builtin_memset(&var_848, 0, 0x14)
                        int32_t* rax_75 = sub_141922570(&var_9d8, &var_848, nullptr, zmm1_2)
                        
                        if (rax_75 != 0)
                            rax_75[2] += 1
                        
                        sub_14192bc70(r14_1, &_Str1_16)
                        r14_1[0x16].d = rax_75[4]
                        int32_t temp12_1 = rax_75[2]
                        rax_75[2] -= 1
                        
                        if (temp12_1 == 1)
                            (**rax_75)(rax_75, 1)
                        
                        if (rdi_9 != 0)
                            sub_140a74f90(rdi_9)
                        
                        sub_140b4cb40(&var_8f8)
                        int32_t* rcx_125 = var_998
                        
                        if (rcx_125 != 0)
                            sub_140a74f90(rcx_125)
                        
                        _Str1_37 = _Str1_3
                    
                    if (_Str1_1.b == 0 || _Str1_37 == 0)
                        rsi_4.b = 1
                    else
                        sub_140a74f90(_Str1_37)
                        rsi_4.b = 1
            
            int64_t rcx_126 = var_950
            
            if (rcx_126 != 0)
                sub_140a74f90(rcx_126)
            
            int32_t i_10 = i_17
            int16_t* _Str1_43 = _Str1_5
            
            if (i_10 != 0)
                int32_t i_3
                
                do
                    int64_t rcx_127 = *_Str1_43
                    
                    if (rcx_127 != 0)
                        sub_140a74f90(rcx_127)
                    
                    _Str1_43 = &_Str1_43[8]
                    i_3 = i_10
                    i_10 -= 1
                while (i_3 != 1)
                _Str1_43 = _Str1_5
            
            if (_Str1_43 != 0)
                sub_140a74f90(_Str1_43)
            
            void* _Str1_38 = _Str1_26
            
            if (_Str1_38 != 0)
                sub_140a74f90(_Str1_38)
            
            if (_Str1_25 != 0)
                sub_140a74f90(_Str1_25)
            
            sub_14192b980(&_Str1_16)
            
            if (rsi_4.b == 0)
                r15 = var_9a0
                goto label_141919998
        
        sub_14193d390()
        sub_141926840(&data_1439c77f0, &var_518)
        int32_t i_11 = i_15
        void* rbx_17 = r13_4
        
        if (i_11 != 0)
            int32_t i_4
            
            do
                int64_t rcx_134 = *rbx_17
                
                if (rcx_134 != 0)
                    sub_140a74f90(rcx_134)
                
                rbx_17 += 0x18
                i_4 = i_11
                i_11 -= 1
            while (i_4 != 1)
        
        if (r13_4 != 0)
            sub_140a74f90(r13_4)
        
        void* _Str1_47 = _Str1_7
        int32_t i_12 = i_16
        void* _Str1_54 = _Str1_47
        
        if (i_12 != 0)
            int32_t i_5
            
            do
                int64_t rcx_136 = *_Str1_54
                
                if (rcx_136 != 0)
                    sub_140a74f90(rcx_136)
                
                _Str1_54 += 0x18
                i_5 = i_12
                i_12 -= 1
            while (i_5 != 1)
        
        if (_Str1_47 != 0)
            sub_140a74f90(_Str1_47)
        
        void* _Str1_48 = _Str1_6
        int32_t i_13 = i_14
        void* _Str1_55 = _Str1_48
        
        if (i_13 != 0)
            int32_t i_6
            
            do
                int64_t rcx_138 = *_Str1_55
                
                if (rcx_138 != 0)
                    sub_140a74f90(rcx_138)
                
                _Str1_55 += 0x10
                i_6 = i_13
                i_13 -= 1
            while (i_6 != 1)
        
        if (_Str1_48 != 0)
            sub_140a74f90(_Str1_48)
        
        int32_t var_790_2 = 0
        
        if (_Str1_15 != 0)
            sub_140a74f90(_Str1_15)
        
        sub_1405df330(&_Str1_13)
        int32_t var_7e0_2 = 0
        
        if (_Str1_12 != 0)
            sub_140a74f90(_Str1_12)
        
        sub_1405df330(&_Str1_8)
    else
        sub_14192bc70(r14_1, _Str1)
        r14_1[0x16].d = *(_Str1 + 0xb0)
    
    int64_t i_9 = 6
    int128_t* rdi_10 = &var_c8
    int64_t i_7
    
    do
        rdi_10 -= 0xb8
        sub_14192b980(rdi_10)
        i_7 = i_9
        i_9 -= 1
    while (i_7 != 1)
    rdi = arg1
    rsi = arg4

sub_14192bc70(r13_1, &var_5c8)
r13_1[0x16].d = rax_3
void* rcx_146 = rdi + r12 * 0x14
*(rcx_146 + 0x450) = *rsi
*(rcx_146 + 0x460) = rsi[1].d
int64_t result = sub_14192b980(&var_5c8)
__security_check_cookie(rax_1 ^ &var_a28)
return result
