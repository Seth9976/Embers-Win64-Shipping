// 函数: sub_140abc7b0
// 地址: 0x140abc7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14
uint64_t var_30 = r14
wchar16* result_1 = arg1
TEB* gsbase
void* r13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
void arg_20
void* var_90 = &arg_20
int64_t (* var_98)(int64_t arg1, int64_t* arg2, char* arg3) = sub_140aa3960
wchar16* result

while (true)
    if (data_143dba0f8 s> *(0x14 + r13))
        _Init_thread_header(&data_143dba0f8)
        
        if (data_143dba0f8 == 0xffffffff)
            data_143dba0e8 = 0
            data_143dba0f0 = 0
            sub_1405947f0(&data_143dba0e8, 0xe)
            int32_t rax_2 = data_143dba0f0.d + 0xe
            bool cond:2_1 = rax_2 s<= data_143dba0f0:4.d
            data_143dba0f0.d = rax_2
            
            if (not(cond:2_1))
                sub_140594770(&data_143dba0e8)
            
            UnDecorator::getReferenceType(data_143dba0e8, u"SetAlwaysSign", 0x1c)
            atexit(sub_142cbdc70)
            _Init_thread_footer(&data_143dba0f8)
    
    wchar16* result_2 = &result_1[1]
    
    if (*result_1 != 0x2e)
        result_2 = result_1
    
    wchar16* rax_3 = sub_140a94470(result_2, &data_143dba0e8, arg2, &var_98)
    wchar16* rbx_1 = rax_3
    
    if (rax_3 == 0)
        return nullptr
    
    char rsi = 0
    
    if (rax_3 != result_2)
        rsi = 1
    
    if (data_143dba110 s> *(r13 + 0x14))
        _Init_thread_header(&data_143dba110)
        
        if (data_143dba110 == 0xffffffff)
            data_143dba100 = 0
            data_143dba108 = 0
            sub_1405947f0(&data_143dba100, 0xf)
            int32_t rax_4 = data_143dba108.d + 0xf
            bool cond:3_1 = rax_4 s<= data_143dba108:4.d
            data_143dba108.d = rax_4
            
            if (not(cond:3_1))
                sub_140594770(&data_143dba100)
            
            UnDecorator::getReferenceType(data_143dba100, u"SetUseGrouping", 0x1e)
            atexit(sub_142cbdd30)
            _Init_thread_footer(&data_143dba110)
    
    if (*rbx_1 == 0x2e)
        rbx_1 = &rbx_1[1]
    
    void* var_80_1 = &arg_20
    int64_t (* var_88)(int64_t arg1, int64_t* arg2, char* arg3) = sub_140aa3960
    wchar16* _String1_1 = sub_140a94470(rbx_1, &data_143dba100, arg2 + 1, &var_88)
    wchar16* _String1 = _String1_1
    
    if (_String1_1 == 0)
        return nullptr
    
    if (_String1_1 != rbx_1)
        rsi = 1
    
    if (data_143dba128 s> *(r13 + 0x14))
        _Init_thread_header(&data_143dba128)
        
        if (data_143dba128 == 0xffffffff)
            data_143dba118 = 0
            data_143dba120 = 0
            sub_1405947f0(&data_143dba118, 0x10)
            int32_t rax_5 = data_143dba120.d + 0x10
            bool cond:5_1 = rax_5 s<= data_143dba120:4.d
            data_143dba120.d = rax_5
            
            if (not(cond:5_1))
                sub_140594770(&data_143dba118)
            
            UnDecorator::getReferenceType(data_143dba118, u"SetRoundingMode", 0x20)
            atexit(sub_142cbdc90)
            _Init_thread_footer(&data_143dba128)
    
    if (*_String1 == 0x2e)
        _String1 = &_String1[1]
    
    int32_t rax_6 = data_143dba120.d
    wchar16* _String1_2 = _String1
    int32_t rax_7
    wchar16* _String2
    
    if (rax_6 == 0)
        rax_7 = 0
        _String2 = &data_142d40450
    else
        _String2 = data_143dba118
        rax_7 = rax_6 - 1
    
    if (wcsncmp(_String1, _String2, sx.q(rax_7)) == 0)
        int32_t rax_9 = data_143dba120.d
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0
        else
            rax_10 = rax_9 - 1
        
        int64_t rax_11 = sx.q(rax_10)
        void* rcx_8 = &_String1[rax_11]
        int16_t i = _String1[rax_11]
        
        if (i != 0)
            while (i == 9 || i == 0x20)
                i = *(rcx_8 + 2)
                rcx_8 += 2
                
                if (i == 0)
                    break
        
        void* rax_12 = nullptr
        
        if (*rcx_8 == 0x28)
            rax_12 = rcx_8
        
        void* rcx_9 = rax_12 + 2
        
        if (rax_12 == 0)
            rcx_9 = rax_12
        
        if (rcx_9 == 0)
            return nullptr
        
        int16_t i_1 = *rcx_9
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = *(rcx_9 + 2)
                rcx_9 += 2
                
                if (i_1 == 0)
                    break
        
        void* var_a0 = rcx_9
        void var_a8
        wchar16* _String1_6 = sub_140aa3c80(&var_a8, &var_a0, arg2 + 4)
        wchar16* _String1_5 = _String1_6
        
        if (_String1_6 == 0)
            return nullptr
        
        wchar16 i_2 = *_String1_6
        
        if (i_2 != 0)
            while (i_2 == 9 || i_2 == 0x20)
                i_2 = _String1_5[1]
                _String1_5 = &_String1_5[1]
                
                if (i_2 == 0)
                    break
        
        wchar16* _String1_3 = nullptr
        
        if (*_String1_5 == 0x29)
            _String1_3 = _String1_5
        
        _String1_2 = &_String1_3[1]
        
        if (_String1_3 == 0)
            _String1_2 = _String1_3
        
        if (_String1_2 == 0 || _String1_2 == 0)
            return nullptr
    else if (_String1_2 == 0)
        return nullptr
    
    if (_String1_2 != _String1)
        rsi = 1
    
    if (data_143dba140 s> *(r13 + 0x14))
        _Init_thread_header(&data_143dba140)
        
        if (data_143dba140 == 0xffffffff)
            data_143dba130 = 0
            data_143dba138 = 0
            sub_1405947f0(&data_143dba130, 0x19)
            int32_t rax_14 = data_143dba138.d + 0x19
            bool cond:11_1 = rax_14 s<= data_143dba138:4.d
            data_143dba138.d = rax_14
            
            if (not(cond:11_1))
                sub_140594770(&data_143dba130)
            
            UnDecorator::getReferenceType(data_143dba130, u"SetMinimumIntegralDigits", 0x32)
            atexit(sub_142cbdcb0)
            _Init_thread_footer(&data_143dba140)
    
    void arg_18
    void* var_70_1 = &arg_18
    wchar16* _String1_4 = &_String1_2[1]
    
    if (*_String1_2 != 0x2e)
        _String1_4 = _String1_2
    
    int64_t (* var_78)(int64_t arg1, int64_t* arg2, int32_t* arg3) = sub_140aa3a00
    wchar16* rax_15 = sub_140a94470(_String1_4, &data_143dba130, arg2 + 8, &var_78)
    wchar16* rbx_2 = rax_15
    
    if (rax_15 == 0)
        return nullptr
    
    if (rax_15 != _String1_4)
        rsi = 1
    
    if (data_143dba158 s> *(r13 + 0x14))
        _Init_thread_header(&data_143dba158)
        
        if (data_143dba158 == 0xffffffff)
            data_143dba148 = 0
            data_143dba150 = 0
            sub_1405947f0(&data_143dba148, 0x19)
            int32_t rax_16 = data_143dba150.d + 0x19
            bool cond:12_1 = rax_16 s<= data_143dba150:4.d
            data_143dba150.d = rax_16
            
            if (not(cond:12_1))
                sub_140594770(&data_143dba148)
            
            UnDecorator::getReferenceType(data_143dba148, u"SetMaximumIntegralDigits", 0x32)
            atexit(sub_142cbdcd0)
            _Init_thread_footer(&data_143dba158)
    
    if (*rbx_2 == 0x2e)
        rbx_2 = &rbx_2[1]
    
    void* var_60_1 = &arg_18
    int64_t (* var_68)(int64_t arg1, int64_t* arg2, int32_t* arg3) = sub_140aa3a00
    wchar16* rax_17 = sub_140a94470(rbx_2, &data_143dba148, arg2 + 0xc, &var_68)
    wchar16* rdi_1 = rax_17
    
    if (rax_17 == 0)
        return nullptr
    
    if (rax_17 != rbx_2)
        rsi = 1
    
    if (data_143dba170 s> *(r13 + 0x14))
        _Init_thread_header(&data_143dba170)
        
        if (data_143dba170 == 0xffffffff)
            data_143dba160 = 0
            data_143dba168 = 0
            sub_1405947f0(&data_143dba160, 0x1b)
            int32_t rax_18 = data_143dba168.d + 0x1b
            bool cond:16_1 = rax_18 s<= data_143dba168:4.d
            data_143dba168.d = rax_18
            
            if (not(cond:16_1))
                sub_140594770(&data_143dba160)
            
            UnDecorator::getReferenceType(data_143dba160, u"SetMinimumFractionalDigits", 0x36)
            atexit(sub_142cbdcf0)
            _Init_thread_footer(&data_143dba170)
    
    if (*rdi_1 == 0x2e)
        rdi_1 = &rdi_1[1]
    
    void* var_50_1 = &arg_18
    int64_t (* var_58)(int64_t arg1, int64_t* arg2, int32_t* arg3) = sub_140aa3a00
    wchar16* rax_19 = sub_140a94470(rdi_1, &data_143dba160, arg2 + 0x10, &var_58)
    wchar16* rbx_3 = rax_19
    
    if (rax_19 == 0)
        return nullptr
    
    r14 = zx.q(rsi)
    
    if (rax_19 != rdi_1)
        r14 = 1
    
    if (data_143dba188 s> *(0x14 + r13))
        _Init_thread_header(&data_143dba188)
        
        if (data_143dba188 == 0xffffffff)
            data_143dba178 = 0
            data_143dba180 = 0
            sub_1405947f0(&data_143dba178, 0x1b)
            int32_t rax_20 = data_143dba180.d + 0x1b
            bool cond:18_1 = rax_20 s<= data_143dba180:4.d
            data_143dba180.d = rax_20
            
            if (not(cond:18_1))
                sub_140594770(&data_143dba178)
            
            UnDecorator::getReferenceType(data_143dba178, u"SetMaximumFractionalDigits", 0x36)
            atexit(sub_142cbdd10)
            _Init_thread_footer(&data_143dba188)
    
    if (*rbx_3 == 0x2e)
        rbx_3 = &rbx_3[1]
    
    void* var_40_1 = &arg_18
    int64_t (* var_48)(int64_t arg1, int64_t* arg2, int32_t* arg3) = sub_140aa3a00
    result = sub_140a94470(rbx_3, &data_143dba178, arg2 + 0x14, &var_48)
    result_1 = result
    
    if (result == 0)
        return nullptr
    
    if (result == rbx_3)
        if (r14.b == 0)
            break

return result
