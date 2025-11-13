// 函数: sub_14202c980
// 地址: 0x14202c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int64_t* r13 = arg3
int64_t* var_4b8 = arg3
int64_t var_480 = arg2
int16_t _Destination[0x30]
int64_t result

if (sub_140b297e0(&var_480, &_Destination, 0x100, 1).b != 0)
    int32_t rdx_1 = 0
    int16_t* _Source_1
    _Source_1.b = 1
    int32_t rcx_1 = 0
    int16_t* _Source_6 = nullptr
    int16_t* var_4b0 = nullptr
    int64_t var_4a8_1 = 0
    
    if (_Destination[0] != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while (_Destination[rdi_1] != 0)
        
        if (rdi_1.d + 1 s> 0)
            sub_1405947f0(&var_4b0, rdi_1.d + 1)
            rcx_1 = var_4a8_1:4.d
            rdx_1 = var_4a8_1.d
        
        int32_t rax_2 = rdi_1.d + 1 + rdx_1
        var_4a8_1.d = rax_2
        
        if (rax_2 s> rcx_1)
            sub_140594770(&var_4b0)
        
        UnDecorator::getReferenceType(var_4b0, &_Destination, (rdi_1.d + 1) * 2)
    
    result = sub_140a23cf0(&var_4b0, &data_142d404c4, 1, 0, 0xffffffff)
    int32_t r12_1 = result.d
    
    if (result.d != 0xffffffff)
        int32_t rdi_3 = var_4a8_1.d
        int16_t* const _Source = &data_142d40450
        int32_t rdi_4
        int16_t* r15_1
        
        if (rdi_3 == 0)
            r15_1 = &data_142d40450
            rdi_4 = 0
        else
            r15_1 = var_4b0
            rdi_4 = rdi_3 - 1
        
        if (r12_1 s< 0)
            rdi_4 = 0
        else if (r12_1 s< rdi_4)
            rdi_4 = r12_1
        
        int16_t* _Source_2 = nullptr
        _Source_1 = nullptr
        int64_t var_498_1 = 0
        int32_t rdx_4 = 0
        int32_t rax_3 = 0
        int16_t* _Source_4
        int32_t r14_2
        
        if (r15_1 != 0 && *r15_1 != 0 && rdi_4 s> 0)
            if (rdi_4 + 1 s> 0)
                sub_1405947f0(&_Source_2, rdi_4 + 1)
                rax_3 = var_498_1:4.d
                rdx_4 = var_498_1.d
                _Source_1 = _Source_2
            
            r14_2 = rdx_4 + 1 + rdi_4
            var_498_1.d = r14_2
            
            if (r14_2 s> rax_3)
                sub_140594770(&_Source_2)
                r14_2 = var_498_1.d
                _Source_1 = _Source_2
            
            UnDecorator::getReferenceType(_Source_1, r15_1, rdi_4 * 2)
            _Source_4 = _Source_1
            _Source_1[sx.q(r14_2) - 1] = 0
        
        if (r15_1 == 0 || *r15_1 == 0 || rdi_4 s<= 0 || r14_2 == 0)
            _Source_4 = &data_142d40450
        
        int16_t* _Source_5 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, _Source_4, 0)
        _Source_2 = _Source_5
        _Source_6 = _Source_5
        
        if (_Source_1 != 0)
            sub_140a74f90(_Source_1)
        
        if (_Source_6 != 0)
            int32_t rax_6 = var_4a8_1.d
            int32_t rcx_13 = rax_6 - 1
            
            if (rax_6 == 0)
                rcx_13 = 0
            
            int32_t rcx_14 = rcx_13 - r12_1
            int32_t rdx_7
            int16_t* r8_5
            
            if (rax_6 == 0)
                rdx_7 = 0
                r8_5 = &data_142d40450
            else
                r8_5 = var_4b0
                rdx_7 = rax_6 - 1
            
            int32_t rax_7
            
            if (rcx_14 - 1 s>= 0)
                rax_7 = rdx_7
                
                if (rcx_14 s<= rdx_7)
                    rax_7 = rcx_14 - 1
            else
                rax_7 = 0
            
            _Source_1 = nullptr
            int32_t rdx_8 = 0
            int16_t* _Source_3 = nullptr
            int64_t var_488_1 = 0
            int32_t rax_9 = 0
            void* r14_3 = &r8_5[sx.q(rdx_7) - sx.q(rax_7)]
            
            if (r14_3 != 0 && *r14_3 != 0)
                int64_t rdi_5 = -1
                
                do
                    rdi_5 += 1
                while (*(r14_3 + (rdi_5 << 1)) != 0)
                
                if (rdi_5.d + 1 s> 0)
                    sub_1405947f0(&_Source_3, rdi_5.d + 1)
                    rax_9 = var_488_1:4.d
                    rdx_8 = var_488_1.d
                    _Source_1 = _Source_3
                
                int32_t r15_2 = rdi_5.d + 1 + rdx_8
                var_488_1.d = r15_2
                
                if (r15_2 s> rax_9)
                    sub_140594770(&_Source_3)
                    r15_2 = var_488_1.d
                    _Source_1 = _Source_3
                
                UnDecorator::getReferenceType(_Source_1, r14_3, (rdi_5.d + 1) * 2)
                
                if (r15_2 != 0)
                    _Source = _Source_1
            
            wcsncpy(&_Destination, _Source, 0xff)
            int16_t var_24a_1 = 0
            
            if (_Source_1 != 0)
                sub_140a74f90(_Source_1)
            
            result = -1
            
            do
                result += 1
            while (_Destination[result] != 0)
            
            _Source_6 = _Source_2
            r13 = var_4b8
            _Source_1.b = result.d s> 0
        else
            r13 = var_4b8
            sub_140b1f640(r13, u"Within class not found")
            _Source_1.b = 0
    
    int16_t* rcx_22 = var_4b0
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    if (_Source_1.b != 0)
        void var_248
        sub_140b297e0(&var_480, &var_248, 0x100, 1)
        void* rax_11 = sub_140d2ee50(sub_140bdf2e0(), -ffffffffffffffff, &_Destination, 0)
        
        if (rax_11 == 0)
            sub_140b1f640(r13, u"Object not found")
        else
            sub_140b58260(&var_4b8, &var_248, 0)
            int32_t rcx_26
            rcx_26.b = sub_140b5b8a0(var_4b8.d, 0) == 0
            void* rsi
            
            if ((var_4b8:4.d != 0 | rcx_26.b) == 0)
                rsi = nullptr
            else
                rsi = sub_140bd3220(rax_11, var_4b8)
            
            void var_470
            sub_1409aa070(&var_470, sub_140d41340(), 0, 0x10, 0)
            int32_t var_4c8_2
            void** i_1
            
            for (void** i = i_1; i != 0; i = i_1)
                void* rcx_29 = *i
                
                if (*(rcx_29 + 0xc) s> data_143e1d994)
                    break
                
                void* const rax_16
                
                rax_16 = i == 0 ? nullptr : rcx_29
                
                void* rax_17 = *(rax_16 + 0x10)
                int64_t rcx_30 = sx.q(*(rax_11 + 0x38))
                
                if (rcx_30.d s<= *(rax_17 + 0x38)
                        && *(*(rax_17 + 0x30) + (rcx_30 << 3)) == rax_11 + 0x30)
                    void* const rcx_31
                    
                    if (i == 0)
                        rcx_31 = nullptr
                    else
                        rcx_31 = *i
                    
                    if (sub_140d23dc0(rcx_31, 0x30).b == 0)
                        if (_Source_6 == 0)
                        label_14202ce31:
                            void* const rdx_18
                            
                            if (i == 0)
                                rdx_18 = nullptr
                            else
                                rdx_18 = *i
                            
                            int64_t rax_19
                            rax_19.b = rsi == 0
                            var_4c8_2.b = rax_19.b
                            sub_14201c450(arg1, rdx_18, 0, &var_4b8, var_4c8_2.b)
                        else
                            void* const rax_20
                            
                            if (i == 0)
                                rax_20 = nullptr
                            else
                                rax_20 = *i
                            
                            if (*(rax_20 + 0x20) != 0)
                                void* const rax_21
                                
                                if (i == 0)
                                    rax_21 = nullptr
                                else
                                    rax_21 = *i
                                
                                int64_t rcx_32 = sx.q(*(_Source_6 + 0x38))
                                int64_t* rax_24 = *(*(rax_21 + 0x20) + 0x10) + 0x30
                                
                                if (rcx_32.d s<= rax_24[1].d
                                        && *(*rax_24 + (rcx_32 << 3)) == &_Source_6[0x18])
                                    goto label_14202ce31
                
                sub_140cd6aa0(&var_470)
            
            int32_t rax_15
            rax_15.b = rsi == 0
            var_4c8_2.b = rax_15.b
            sub_14201c450(arg1, rax_11, _Source_6, &var_4b8, var_4c8_2.b)

result.b = 1
__security_check_cookie(rax_1 ^ &var_4e8)
return result
