// 函数: sub_140b09170
// 地址: 0x140b09170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t* var_1c0 = arg3
int32_t* r12 = arg3

if (arg3 != 0)
    *arg3 = 0

int16_t* r13 = arg1
void* rbx_1 = &arg1[1]
uint64_t result

if (*arg1 != 0x22)
    result.b = 0
else
    uint32_t rsi_1 = zx.d(*rbx_1)
    uint64_t rax_3 = zx.q(rsi_1) & 0x3f
    
    if (not(test_bit(sbb.q(rax_3, rax_3, rsi_1 u< 0x40) & 0x400002401, zx.q(rax_3.b))))
        uint64_t rax_73
        uint32_t i
        
        do
            if (rsi_1.w == 0x5c)
                int16_t rsi_2 = *(rbx_1 + 2)
                rbx_1 += 2
                
                if (rsi_2 == 0x5c)
                    int16_t* rcx_3 = arg2[1]
                    
                    if (&rcx_3[1] u>= arg2[2])
                        sub_140b38e20(arg2, 1)
                        rcx_3 = arg2[1]
                    
                    *rcx_3 = 0x5c
                    arg2[1] += 2
                    rbx_1 += 2
                else if (rsi_2 == 0x22)
                    int16_t* rcx_5 = arg2[1]
                    
                    if (&rcx_5[1] u>= arg2[2])
                        sub_140b38e20(arg2, 1)
                        rcx_5 = arg2[1]
                    
                    *rcx_5 = 0x22
                    arg2[1] += 2
                    rbx_1 += 2
                else if (rsi_2 == 0x27)
                    int16_t* rcx_7 = arg2[1]
                    
                    if (&rcx_7[1] u>= arg2[2])
                        sub_140b38e20(arg2, 1)
                        rcx_7 = arg2[1]
                    
                    *rcx_7 = 0x27
                    arg2[1] += 2
                    rbx_1 += 2
                else if (rsi_2 == 0x6e)
                    int16_t* rcx_9 = arg2[1]
                    
                    if (&rcx_9[1] u>= arg2[2])
                        sub_140b38e20(arg2, 1)
                        rcx_9 = arg2[1]
                    
                    *rcx_9 = 0xa
                    arg2[1] += 2
                    rbx_1 += 2
                else if (rsi_2 == 0x72)
                    sub_140b0dee0(arg2, 0xd)
                    rbx_1 += 2
                else if (rsi_2 != 0x74)
                    uint32_t r9_1 = zx.d(rsi_2)
                    void* _String
                    void var_188
                    void var_168
                    
                    if (r9_1 - 0x30 u>= 8)
                        if (rsi_2 != 0x78)
                            goto label_140b09576
                        
                        if (iswxdigit(*(rbx_1 + 2)) == 0)
                            rsi_2 = *rbx_1
                        label_140b09576:
                            
                            if (rsi_2 != 0x75)
                                goto label_140b096cb
                            
                            if (iswxdigit(*(rbx_1 + 2)) == 0)
                                rsi_2 = *rbx_1
                            label_140b096cb:
                                int32_t rax_55
                                
                                if (rsi_2 == 0x55)
                                    rax_55 = iswxdigit(*(rbx_1 + 2))
                                
                                if (rsi_2 != 0x55 || rax_55 == 0)
                                    sub_140b0dee0(arg2, 0x5c)
                                    sub_140b0dee0(arg2, *rbx_1)
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
                                    uint64_t rax_57 = zx.q(r9_4) & 0x3f
                                    
                                    if (not(test_bit(
                                            sbb.q(rax_57, rax_57, r9_4 u< 0x40) & 0x400002401, 
                                            zx.q(rax_57.b))))
                                        uint64_t rax_66
                                        uint32_t j
                                        
                                        do
                                            r8_7 = var_1a0_4
                                            
                                            if (iswxdigit(r9_4.w) == 0)
                                                break
                                            
                                            if (((r8_7 - _String) s>> 1).d s>= 8)
                                                break
                                            
                                            int16_t rsi_6 = *rbx_1
                                            
                                            if (r8_7 + 2 u>= var_198_4)
                                                sub_140b38e20(&_String, 1)
                                                r8_7 = var_1a0_4
                                            
                                            *r8_7 = rsi_6
                                            rbx_1 += 2
                                            r8_7 = var_1a0_4 + 2
                                            var_1a0_4 = r8_7
                                            j = zx.d(*rbx_1)
                                            r9_4 = zx.d(j.w)
                                            rax_66 = zx.q(j) & 0x3f
                                        while (not(test_bit(
                                            sbb.q(rax_66, rax_66, j u< 0x40) & 0x400002401, 
                                            zx.q(rax_66.b))))
                                    
                                    if (*r8_7 != 0)
                                        *r8_7 = 0
                                    
                                    uint32_t var_1c4 = wcstoul(_String, nullptr, 0x10)
                                    sub_140b09da0(&var_168, &var_1c4, 1)
                                    int32_t var_58
                                    int64_t rsi_7 = sx.q(var_58)
                                    int64_t rcx_41 = arg2[1]
                                    int64_t r14_2 = rsi_7 * 2
                                    
                                    if (rcx_41 + r14_2 u>= arg2[2])
                                        sub_140b38e20(arg2, rsi_7)
                                        rcx_41 = arg2[1]
                                    
                                    arg2[1] = rcx_41 + (rsi_7 << 1)
                                    int64_t var_60
                                    memcpy(rcx_41, var_60, r14_2.d)
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
                                uint64_t rax_40 = zx.q(r9_3) & 0x3f
                                
                                if (not(test_bit(sbb.q(rax_40, rax_40, r9_3 u< 0x40) & 0x400002401, 
                                        zx.q(rax_40.b))))
                                    uint64_t rax_49
                                    uint32_t j_1
                                    
                                    do
                                        r8_4 = var_1a0_3
                                        
                                        if (iswxdigit(r9_3.w) == 0)
                                            break
                                        
                                        if (((r8_4 - _String) s>> 1).d s>= 4)
                                            break
                                        
                                        int16_t rsi_4 = *rbx_1
                                        
                                        if (r8_4 + 2 u>= var_198_3)
                                            sub_140b38e20(&_String, 1)
                                            r8_4 = var_1a0_3
                                        
                                        *r8_4 = rsi_4
                                        rbx_1 += 2
                                        r8_4 = var_1a0_3 + 2
                                        var_1a0_3 = r8_4
                                        j_1 = zx.d(*rbx_1)
                                        r9_3 = zx.d(j_1.w)
                                        rax_49 = zx.q(j_1) & 0x3f
                                    while (not(test_bit(
                                        sbb.q(rax_49, rax_49, j_1 u< 0x40) & 0x400002401, 
                                        zx.q(rax_49.b))))
                                
                                if (*r8_4 != 0)
                                    *r8_4 = 0
                                
                                int16_t rax_52 = wcstoul(_String, nullptr, 0x10)
                                int64_t rcx_32 = arg2[1]
                                int16_t var_1c8 = rax_52
                                int64_t rdx_6
                                rdx_6.b = rax_52 != 0
                                int64_t rsi_5 = rdx_6 * 2
                                
                                if (rcx_32 + rsi_5 u>= arg2[2])
                                    sub_140b38e20(arg2, rdx_6)
                                    rcx_32 = arg2[1]
                                
                                arg2[1] = rcx_32 + rsi_5
                                memcpy(rcx_32, &var_1c8, rsi_5.d)
                                sub_140b301c0(&_String)
                        else
                            uint32_t r9_2 = zx.d(*(rbx_1 + 2))
                            _String = &var_188
                            void* r8_2 = &var_188
                            int16_t var_190_2 = 0x100
                            void* var_198_2 = &var_168
                            rbx_1 += 2
                            void* var_1a0_2 = &var_188
                            uint64_t rax_28 = zx.q(r9_2) & 0x3f
                            
                            if (not(test_bit(sbb.q(rax_28, rax_28, r9_2 u< 0x40) & 0x400002401, 
                                    zx.q(rax_28.b))))
                                uint64_t rax_34
                                uint32_t j_2
                                
                                do
                                    if (iswxdigit(r9_2.w) == 0)
                                        r8_2 = var_1a0_2
                                        break
                                    
                                    void* rcx_21 = var_1a0_2
                                    int16_t rsi_3 = *rbx_1
                                    
                                    if (rcx_21 + 2 u>= var_198_2)
                                        sub_140b38e20(&_String, 1)
                                        rcx_21 = var_1a0_2
                                    
                                    *rcx_21 = rsi_3
                                    rbx_1 += 2
                                    r8_2 = var_1a0_2 + 2
                                    var_1a0_2 = r8_2
                                    j_2 = zx.d(*rbx_1)
                                    r9_2 = zx.d(j_2.w)
                                    rax_34 = zx.q(j_2) & 0x3f
                                while (not(test_bit(
                                    sbb.q(rax_34, rax_34, j_2 u< 0x40) & 0x400002401, 
                                    zx.q(rax_34.b))))
                            
                            if (*r8_2 != 0)
                                *r8_2 = 0
                            
                            sub_140b0dee0(arg2, wcstoul(_String, nullptr, 0x10))
                            sub_140b301c0(&_String)
                    else
                        int16_t var_190_1 = 0x100
                        _String = &var_188
                        void* r8 = &var_188
                        void* var_1a0_1 = &var_188
                        uint64_t rax_12 = zx.q(r9_1) & 0x3f
                        void* rdx = &var_168
                        void* var_198_1 = &var_168
                        
                        if (not(test_bit(sbb.q(rax_12, rax_12, r9_1 u< 0x40) & 0x400002401, 
                                zx.q(rax_12.b))))
                            while (zx.d(rsi_2) - 0x30 u< 8)
                                if (((r8 - _String) s>> 1).d s>= 3)
                                    break
                                
                                if (r8 + 2 u>= rdx)
                                    sub_140b38e20(&_String, 1)
                                    r8 = var_1a0_1
                                
                                *r8 = rsi_2
                                rbx_1 += 2
                                r8 = var_1a0_1 + 2
                                var_1a0_1 = r8
                                uint32_t rdx_1 = zx.d(*rbx_1)
                                rsi_2 = rdx_1.w
                                uint64_t rax_22 = zx.q(rdx_1) & 0x3f
                                
                                if (test_bit(sbb.q(rax_22, rax_22, rdx_1 u< 0x40) & 0x400002401, 
                                        zx.q(rax_22.b)))
                                    break
                                
                                rdx = var_198_1
                        
                        if (*r8 != 0)
                            *r8 = 0
                        
                        sub_140b0dee0(arg2, wcstoul(_String, nullptr, 8))
                        sub_140b301c0(&_String)
                else
                    sub_140b0dee0(arg2, 9)
                    rbx_1 += 2
            else
                int16_t* rcx_1 = arg2[1]
                
                if (&rcx_1[1] u>= arg2[2])
                    sub_140b38e20(arg2, 1)
                    rcx_1 = arg2[1]
                
                *rcx_1 = rsi_1.w
                arg2[1] += 2
                rbx_1 += 2
            
            i = zx.d(*rbx_1)
            rsi_1 = zx.d(i.w)
            rax_73 = zx.q(i) & 0x3f
        while (not(test_bit(sbb.q(rax_73, rax_73, i u< 0x40) & 0x400002401, zx.q(rax_73.b))))
        r12 = var_1c0
        r13 = arg1
    
    if (rsi_1.w != 0x22)
        result.b = 0
    else
        if (r12 != 0)
            *r12 = ((rbx_1 - r13 + 2) s>> 1).d
        
        result.b = 1

__security_check_cookie(rax_1 ^ &var_1e8)
return result
