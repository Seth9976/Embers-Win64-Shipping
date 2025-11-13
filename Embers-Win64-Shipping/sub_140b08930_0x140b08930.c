// 函数: sub_140b08930
// 地址: 0x140b08930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t* var_1c0 = arg3
int32_t* r15 = arg3

if (arg3 != 0)
    *arg3 = 0

int16_t* r12 = arg1
void* rbx_1 = &arg1[1]
uint64_t result

if (*arg1 != 0x22)
    result.b = 0
else
    uint32_t rsi_1 = zx.d(*rbx_1)
    uint64_t rax_3 = zx.q(rsi_1) & 0x3f
    
    if (not(test_bit(sbb.q(rax_3, rax_3, rsi_1 u< 0x40) & 0x400002401, zx.q(rax_3.b))))
        uint64_t rax_111
        uint32_t i
        
        do
            int64_t rcx_2
            
            if (rsi_1.w == 0x5c)
                int16_t rsi_2 = *(rbx_1 + 2)
                rbx_1 += 2
                
                if (rsi_2 == 0x5c)
                    int32_t rdx_1 = arg2[1].d
                    int32_t rax_9
                    rax_9.b = rdx_1 s<= 0
                    int32_t rsi_3 = rdx_1 - 1
                    
                    if (rdx_1 s<= 0)
                        rsi_3 = 0
                    
                    int32_t rax_11 = rax_9 + 1 + rdx_1
                    arg2[1].d = rax_11
                    
                    if (rax_11 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_4 = sx.q(rsi_3)
                    *(*arg2 + (rcx_4 << 1)) = 0x5c
                    *(*arg2 + (rcx_4 << 1) + 2) = 0
                    rbx_1 += 2
                else if (rsi_2 == 0x22)
                    int32_t rdx_2 = arg2[1].d
                    int32_t rax_14
                    rax_14.b = rdx_2 s<= 0
                    int32_t rsi_4 = rdx_2 - 1
                    
                    if (rdx_2 s<= 0)
                        rsi_4 = 0
                    
                    int32_t rax_16 = rax_14 + 1 + rdx_2
                    arg2[1].d = rax_16
                    
                    if (rax_16 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_6 = sx.q(rsi_4)
                    *(*arg2 + (rcx_6 << 1)) = 0x22
                    *(*arg2 + (rcx_6 << 1) + 2) = 0
                    rbx_1 += 2
                else if (rsi_2 == 0x27)
                    int32_t rdx_3 = arg2[1].d
                    int32_t rax_19
                    rax_19.b = rdx_3 s<= 0
                    int32_t rsi_5 = rdx_3 - 1
                    
                    if (rdx_3 s<= 0)
                        rsi_5 = 0
                    
                    int32_t rax_21 = rax_19 + 1 + rdx_3
                    arg2[1].d = rax_21
                    
                    if (rax_21 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_8 = sx.q(rsi_5)
                    *(*arg2 + (rcx_8 << 1)) = 0x27
                    *(*arg2 + (rcx_8 << 1) + 2) = 0
                    rbx_1 += 2
                else if (rsi_2 == 0x6e)
                    int32_t rdx_4 = arg2[1].d
                    int32_t rax_24
                    rax_24.b = rdx_4 s<= 0
                    int32_t rsi_6 = rdx_4 - 1
                    
                    if (rdx_4 s<= 0)
                        rsi_6 = 0
                    
                    int32_t rax_26 = rax_24 + 1 + rdx_4
                    arg2[1].d = rax_26
                    
                    if (rax_26 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_10 = sx.q(rsi_6)
                    *(*arg2 + (rcx_10 << 1)) = 0xa
                    *(*arg2 + (rcx_10 << 1) + 2) = 0
                    rbx_1 += 2
                else if (rsi_2 == 0x72)
                    int32_t rdx_5 = arg2[1].d
                    int32_t rax_29
                    rax_29.b = rdx_5 s<= 0
                    int32_t rsi_7 = rdx_5 - 1
                    
                    if (rdx_5 s<= 0)
                        rsi_7 = 0
                    
                    int32_t rax_31 = rax_29 + 1 + rdx_5
                    arg2[1].d = rax_31
                    
                    if (rax_31 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_12 = sx.q(rsi_7)
                    *(*arg2 + (rcx_12 << 1)) = 0xd
                    *(*arg2 + (rcx_12 << 1) + 2) = 0
                    rbx_1 += 2
                else if (rsi_2 != 0x74)
                    uint32_t r9_1 = zx.d(rsi_2)
                    void* _String
                    void var_188
                    void var_168
                    int32_t _Radix
                    
                    if (r9_1 - 0x30 u>= 8)
                        int32_t rax_54
                        
                        if (rsi_2 == 0x78)
                            rax_54 = iswxdigit(*(rbx_1 + 2))
                        
                        if (rsi_2 == 0x78 && rax_54 != 0)
                            uint32_t r9_2 = zx.d(*(rbx_1 + 2))
                            _String = &var_188
                            void* r8_2 = &var_188
                            int16_t var_190_2 = 0x100
                            void* var_198_2 = &var_168
                            rbx_1 += 2
                            void* var_1a0_2 = &var_188
                            uint64_t rax_56 = zx.q(r9_2) & 0x3f
                            
                            if (not(test_bit(sbb.q(rax_56, rax_56, r9_2 u< 0x40) & 0x400002401, 
                                    zx.q(rax_56.b))))
                                uint64_t rax_62
                                uint32_t j
                                
                                do
                                    if (iswxdigit(r9_2.w) == 0)
                                        r8_2 = var_1a0_2
                                        break
                                    
                                    void* rcx_20 = var_1a0_2
                                    int16_t rsi_10 = *rbx_1
                                    
                                    if (rcx_20 + 2 u>= var_198_2)
                                        sub_140b38e20(&_String, 1)
                                        rcx_20 = var_1a0_2
                                    
                                    *rcx_20 = rsi_10
                                    rbx_1 += 2
                                    r8_2 = var_1a0_2 + 2
                                    var_1a0_2 = r8_2
                                    j = zx.d(*rbx_1)
                                    r9_2 = zx.d(j.w)
                                    rax_62 = zx.q(j) & 0x3f
                                while (not(test_bit(sbb.q(rax_62, rax_62, j u< 0x40) & 0x400002401, 
                                    zx.q(rax_62.b))))
                            
                            if (*r8_2 != 0)
                                *r8_2 = 0
                            
                            _Radix = 0x10
                            goto label_140b08d96
                        
                        int32_t rax_70
                        
                        if (*rbx_1 == 0x75)
                            rax_70 = iswxdigit(*(rbx_1 + 2))
                        
                        if (*rbx_1 != 0x75 || rax_70 == 0)
                            int32_t rax_85
                            
                            if (*rbx_1 == 0x55)
                                rax_85 = iswxdigit(*(rbx_1 + 2))
                            
                            if (*rbx_1 != 0x55 || rax_85 == 0)
                                int32_t rdx_16 = arg2[1].d
                                int32_t rax_100
                                rax_100.b = rdx_16 s<= 0
                                int32_t rsi_16 = rdx_16 - 1
                                
                                if (rdx_16 s<= 0)
                                    rsi_16 = 0
                                
                                int32_t rax_102 = rax_100 + 1 + rdx_16
                                arg2[1].d = rax_102
                                
                                if (rax_102 s> *(arg2 + 0xc))
                                    sub_140594770(arg2)
                                
                                int64_t rcx_45 = sx.q(rsi_16)
                                *(*arg2 + (rcx_45 << 1)) = 0x5c
                                *(*arg2 + (rcx_45 << 1) + 2) = 0
                                int16_t r14_3 = *rbx_1
                                
                                if (r14_3 == 0)
                                    rbx_1 += 2
                                else
                                    int32_t rdx_17 = arg2[1].d
                                    int32_t rax_105
                                    rax_105.b = rdx_17 s<= 0
                                    int32_t rsi_17 = rdx_17 - 1
                                    
                                    if (rdx_17 s<= 0)
                                        rsi_17 = 0
                                    
                                    int32_t rax_107 = rax_105 + 1 + rdx_17
                                    arg2[1].d = rax_107
                                    
                                    if (rax_107 s> *(arg2 + 0xc))
                                        sub_140594770(arg2)
                                    
                                    rcx_2 = sx.q(rsi_17)
                                    *(*arg2 + (rcx_2 << 1)) = r14_3
                                    *(*arg2 + (rcx_2 << 1) + 2) = 0
                                    rbx_1 += 2
                            else
                                uint32_t r9_4 = zx.d(*(rbx_1 + 2))
                                _String = &var_188
                                void* r8_7 = &var_188
                                int16_t var_190_4 = 0x100
                                void var_178
                                void* var_198_4 = &var_178
                                rbx_1 += 2
                                void* var_1a0_4 = &var_188
                                uint64_t rax_87 = zx.q(r9_4) & 0x3f
                                
                                if (not(test_bit(sbb.q(rax_87, rax_87, r9_4 u< 0x40) & 0x400002401, 
                                        zx.q(rax_87.b))))
                                    uint64_t rax_96
                                    uint32_t j_1
                                    
                                    do
                                        r8_7 = var_1a0_4
                                        
                                        if (iswxdigit(r9_4.w) == 0)
                                            break
                                        
                                        if (((r8_7 - _String) s>> 1).d s>= 8)
                                            break
                                        
                                        int16_t rsi_15 = *rbx_1
                                        
                                        if (r8_7 + 2 u>= var_198_4)
                                            sub_140b38e20(&_String, 1)
                                            r8_7 = var_1a0_4
                                        
                                        *r8_7 = rsi_15
                                        rbx_1 += 2
                                        r8_7 = var_1a0_4 + 2
                                        var_1a0_4 = r8_7
                                        j_1 = zx.d(*rbx_1)
                                        r9_4 = zx.d(j_1.w)
                                        rax_96 = zx.q(j_1) & 0x3f
                                    while (not(test_bit(
                                        sbb.q(rax_96, rax_96, j_1 u< 0x40) & 0x400002401, 
                                        zx.q(rax_96.b))))
                                
                                if (*r8_7 != 0)
                                    *r8_7 = 0
                                
                                uint32_t var_1c4 = wcstoul(_String, nullptr, 0x10)
                                sub_140b09da0(&var_168, &var_1c4, 1)
                                int64_t var_60
                                int32_t var_58
                                sub_140a20ba0(arg2, var_60, var_58)
                                int64_t var_68
                                
                                if (var_68 != 0)
                                    sub_140a74f90(var_68)
                                
                                sub_140b301c0(&_String)
                        else
                            uint32_t r9_3 = zx.d(*(rbx_1 + 2))
                            _String = &var_188
                            void* r8_4 = &var_188
                            int16_t var_190_3 = 0x100
                            void var_180
                            void* var_198_3 = &var_180
                            rbx_1 += 2
                            void* var_1a0_3 = &var_188
                            uint64_t rax_72 = zx.q(r9_3) & 0x3f
                            
                            if (not(test_bit(sbb.q(rax_72, rax_72, r9_3 u< 0x40) & 0x400002401, 
                                    zx.q(rax_72.b))))
                                uint64_t rax_81
                                uint32_t j_2
                                
                                do
                                    r8_4 = var_1a0_3
                                    
                                    if (iswxdigit(r9_3.w) == 0)
                                        break
                                    
                                    if (((r8_4 - _String) s>> 1).d s>= 4)
                                        break
                                    
                                    int16_t rsi_13 = *rbx_1
                                    
                                    if (r8_4 + 2 u>= var_198_3)
                                        sub_140b38e20(&_String, 1)
                                        r8_4 = var_1a0_3
                                    
                                    *r8_4 = rsi_13
                                    rbx_1 += 2
                                    r8_4 = var_1a0_3 + 2
                                    var_1a0_3 = r8_4
                                    j_2 = zx.d(*rbx_1)
                                    r9_3 = zx.d(j_2.w)
                                    rax_81 = zx.q(j_2) & 0x3f
                                while (not(test_bit(
                                    sbb.q(rax_81, rax_81, j_2 u< 0x40) & 0x400002401, 
                                    zx.q(rax_81.b))))
                            
                            if (*r8_4 != 0)
                                *r8_4 = 0
                            
                            int16_t rax_84 = wcstoul(_String, nullptr, 0x10)
                            int16_t var_1c8 = rax_84
                            int32_t r8_6
                            r8_6.b = rax_84 != 0
                            sub_140a20ba0(arg2, &var_1c8, r8_6)
                            sub_140b301c0(&_String)
                    else
                        int16_t var_190_1 = 0x100
                        _String = &var_188
                        void* r8 = &var_188
                        void* var_1a0_1 = &var_188
                        uint64_t rax_41 = zx.q(r9_1) & 0x3f
                        void* rdx_7 = &var_168
                        void* var_198_1 = &var_168
                        
                        if (not(test_bit(sbb.q(rax_41, rax_41, r9_1 u< 0x40) & 0x400002401, 
                                zx.q(rax_41.b))))
                            while (zx.d(rsi_2) - 0x30 u< 8)
                                if (((r8 - _String) s>> 1).d s>= 3)
                                    break
                                
                                if (r8 + 2 u>= rdx_7)
                                    sub_140b38e20(&_String, 1)
                                    r8 = var_1a0_1
                                
                                *r8 = rsi_2
                                rbx_1 += 2
                                r8 = var_1a0_1 + 2
                                var_1a0_1 = r8
                                uint32_t rdx_8 = zx.d(*rbx_1)
                                rsi_2 = rdx_8.w
                                uint64_t rax_51 = zx.q(rdx_8) & 0x3f
                                
                                if (test_bit(sbb.q(rax_51, rax_51, rdx_8 u< 0x40) & 0x400002401, 
                                        zx.q(rax_51.b)))
                                    break
                                
                                rdx_7 = var_198_1
                        
                        if (*r8 != 0)
                            *r8 = 0
                        
                        _Radix = 8
                    label_140b08d96:
                        int16_t rax_65 = wcstoul(_String, nullptr, _Radix)
                        
                        if (rax_65 != 0)
                            int32_t rdx_10 = arg2[1].d
                            int32_t rcx_24
                            rcx_24.b = rdx_10 s<= 0
                            int32_t rsi_11 = rdx_10 - 1
                            
                            if (rdx_10 s<= 0)
                                rsi_11 = 0
                            
                            int32_t rax_67 = rcx_24 + 1 + rdx_10
                            arg2[1].d = rax_67
                            
                            if (rax_67 s> *(arg2 + 0xc))
                                sub_140594770(arg2)
                            
                            int64_t rcx_26 = sx.q(rsi_11)
                            *(*arg2 + (rcx_26 << 1)) = rax_65
                            *(*arg2 + (rcx_26 << 1) + 2) = 0
                        
                        sub_140b301c0(&_String)
                else
                    int32_t rdx_6 = arg2[1].d
                    int32_t rax_34
                    rax_34.b = rdx_6 s<= 0
                    int32_t rsi_8 = rdx_6 - 1
                    
                    if (rdx_6 s<= 0)
                        rsi_8 = 0
                    
                    int32_t rax_36 = rax_34 + 1 + rdx_6
                    arg2[1].d = rax_36
                    
                    if (rax_36 s> *(arg2 + 0xc))
                        sub_140594770(arg2)
                    
                    int64_t rcx_14 = sx.q(rsi_8)
                    *(*arg2 + (rcx_14 << 1)) = 9
                    *(*arg2 + (rcx_14 << 1) + 2) = 0
                    rbx_1 += 2
            else if (rsi_1.w == 0)
                rbx_1 += 2
            else
                int32_t rdx = arg2[1].d
                int32_t rax_5
                rax_5.b = rdx s<= 0
                int32_t r14_1 = rdx - 1
                
                if (rdx s<= 0)
                    r14_1 = 0
                
                int32_t rax_7 = rax_5 + 1 + rdx
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                rcx_2 = sx.q(r14_1)
                *(*arg2 + (rcx_2 << 1)) = rsi_1.w
                *(*arg2 + (rcx_2 << 1) + 2) = 0
                rbx_1 += 2
            i = zx.d(*rbx_1)
            rsi_1 = zx.d(i.w)
            rax_111 = zx.q(i) & 0x3f
        while (not(test_bit(sbb.q(rax_111, rax_111, i u< 0x40) & 0x400002401, zx.q(rax_111.b))))
        r15 = var_1c0
        r12 = arg1
    
    if (rsi_1.w != 0x22)
        result.b = 0
    else
        if (r15 != 0)
            *r15 = ((rbx_1 - r12 + 2) s>> 1).d
        
        result.b = 1

__security_check_cookie(rax_1 ^ &var_1e8)
return result
