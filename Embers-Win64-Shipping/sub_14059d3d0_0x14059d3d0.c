// 函数: sub_14059d3d0
// 地址: 0x14059d3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int32_t result
int64_t rcx_36
int64_t var_c8
int16_t* _Source_7

if (data_143cefff1 == 0)
    var_c8 = 0
    int32_t var_c0_3 = 0
    _Source_7 = nullptr
    int32_t var_a0_1 = 0
    char rax_20
    int64_t r9_3
    rax_20, r9_3 = sub_14059e570(arg1, &var_c8, &_Source_7)
    int16_t* _Source_4 = _Source_7
    
    if (rax_20 == 1)
        int16_t* _Source_2 = &data_142d40450
        int16_t* _Source_10 = &data_142d40450
        
        if (var_a0_1 != 0)
            _Source_10 = _Source_4
        
        int32_t rax_21
        int64_t r9_4
        rax_21, r9_4 = sub_140a54510(_Source_10, u"Embers")
        
        if (rax_21 != 0)
            sub_140af98a0("Unknown", 0x26f, 
                Non-agnostic games cannot load projects on cooked platforms - try running UE4Game.", 
                r9_4)
            sub_140afbb40()
        
        if (var_a0_1 != 0)
            _Source_2 = _Source_4
        
        wcsncpy(u"Embers", _Source_2, 0x3f)
        data_14399e17e = 0
        
        if (arg2 != &var_c8)
            int64_t r15_1 = var_c8
            int32_t r8_13 = *(arg2 + 0xc)
            arg2[1].d = var_c0_3
            
            if (var_c0_3 != 0 || r8_13 != 0)
                sub_1405a4c70(arg2, var_c0_3, r8_13)
                memcpy(*arg2, r15_1, var_c0_3 * 2)
            else
                *(arg2 + 0xc) = 0
        
        r9_3 = sub_140b27db0(&var_c8)
    
    if ((*u"Embers")[0] != 0)
        result, r9_3 = sub_140a54510(u"Embers", u"None")
    
    if ((*u"Embers")[0] == 0 || result == 0)
        sub_140af98a0("Unknown", 0x27e, u"Could not set game name!", r9_3)
        sub_140afbb40()
    
    if (_Source_4 != 0)
        sub_140a74f90(_Source_4)
    
    rcx_36 = var_c8
else
    int16_t* const _Source_1 = &data_142d40450
    wcsncpy(u"Embers", &data_142d40450, 0x3f)
    data_14399e17e = 0
    int64_t var_b8 = 0
    int32_t var_b0_1 = 0
    int16_t* _Source_6 = nullptr
    int64_t var_d0_1 = 0
    int64_t r9_2
    int16_t* _Source_5
    int64_t r14_1
    
    if (sub_14059e570(arg1, &var_b8, &_Source_6) != 1)
        void* rax_3 = sub_140b66930(1)
        _Source_5 = _Source_6
        int32_t r14_2
        
        if (_Source_5 == rax_3)
            r14_2 = var_d0_1.d
        else
            int32_t rdi_3
            
            if (rax_3 == 0 || *rax_3 == 0)
                rdi_3 = 0
            else
                int64_t rdi_2 = -1
                
                do
                    rdi_2 += 1
                while (*(rax_3 + (rdi_2 << 1)) != 0)
                
                rdi_3 = rdi_2.d + 1
            
            int32_t rax_4 = var_d0_1:4.d
            int32_t rdx_3 = 0
            var_d0_1.d = 0
            
            if (rax_4 != rdi_3)
                sub_1405947f0(&_Source_6, rdi_3)
                rax_4 = var_d0_1:4.d
                rdx_3 = var_d0_1.d
                _Source_5 = _Source_6
            
            r14_2 = rdx_3 + rdi_3
            var_d0_1.d = r14_2
            
            if (r14_2 s> rax_4)
                sub_140594770(&_Source_6)
                r14_2 = var_d0_1.d
                _Source_5 = _Source_6
            
            if (rdi_3 != 0)
                memcpy(_Source_5, rax_3, rdi_3 * 2)
        
        int16_t* _Source_8 = _Source_5
        void* rdx_6 = &_Source_5[sx.q(r14_2)]
        
        if (_Source_5 != rdx_6)
            do
                if (*_Source_8 == 0x2d)
                    int32_t rcx_7 = ((_Source_8 - _Source_5) s>> 1).d
                    
                    if (rcx_7 != 0xffffffff)
                        int32_t rdx_7 = r14_2 - 1
                        
                        if (r14_2 == 0)
                            rdx_7 = 0
                        
                        int32_t r9_1
                        
                        if (rcx_7 s>= 0)
                            r9_1 = rdx_7
                            
                            if (rcx_7 s< rdx_7)
                                r9_1 = rcx_7
                        else
                            r9_1 = 0
                        
                        int32_t rdx_8 = rdx_7 - r9_1
                        int32_t rax_6 = r14_2 - 1
                        
                        if (r14_2 == 0)
                            rax_6 = 0
                        
                        int32_t rax_7 = rax_6 - r9_1
                        
                        if (rdx_8 s>= 0)
                            if (rdx_8 s< rax_7)
                                rax_7 = rdx_8
                            
                            if (rax_7 != 0)
                                r14_2 -= rax_7
                                
                                if (r14_2 != r9_1)
                                    memmove(&_Source_5[sx.q(r9_1)], &_Source_5[sx.q(rax_7 + r9_1)], 
                                        (r14_2 - r9_1) * 2)
                    
                    break
                
                _Source_8 = &_Source_8[1]
            while (_Source_8 != rdx_6)
        
        int16_t* _Source = &data_142d40450
        
        if (r14_2 != 0)
            _Source = _Source_5
        
        wcsncpy(u"Embers", _Source, 0x3f)
        data_14399e17e = 0
        int16_t* _Source_9 = &data_142d40450
        
        if (r14_2 != 0)
            _Source_9 = _Source_5
        
        int32_t rcx_12
        result, rcx_12, r9_2 = sub_140a54510(_Source_9, u"UE4Game")
        
        if (result != 0)
            int16_t* _Source_11 = nullptr
            sub_1405a4c70(&_Source_11, sbb.d(rcx_12, rcx_12, r14_2 != 0) + 2 + r14_2, 0)
            memcpy(_Source_11, _Source_5, r14_2 * 2)
            sub_140a20ba0(&_Source_11, &data_142d404c4, 1)
            _Source_6 = _Source_11
            int32_t var_90_1
            var_90_1.q = 0
            _Source_11 = nullptr
            int64_t var_80
            int16_t** rax_14 = sub_140b7d8f0(&var_80)
            int32_t rcx_20
            int16_t* _Source_13
            
            if (r14_2 s> 1)
                int32_t rax_15 = rax_14[1].d
                int32_t r12_2 = rax_15 - 1
                
                if (rax_15 == 0)
                    r12_2 = 0
                
                int32_t rdx_13
                
                if (r14_2 == 0)
                    rdx_13 = r14_2 + 1
                
                if (r14_2 != 0 || r12_2 == 0)
                    rdx_13 = 0
                
                _Source_7 = _Source_6
                int32_t rdx_15 = rdx_13 + r14_2 + r12_2
                _Source_6 = nullptr
                int32_t var_a0 = r14_2
                int32_t var_8c
                
                if (rdx_15 s> var_8c)
                    sub_1405947f0(&_Source_7, rdx_15)
                
                sub_140a20ba0(&_Source_7, *rax_14, r12_2)
                rcx_20 = var_8c
                _Source_13 = _Source_7
            else
                _Source_13 = *rax_14
                *rax_14 = nullptr
                rcx_20 = rax_14[1].d
                rax_14[1] = 0
            
            var_c8 = 0
            int64_t var_c0_1 = 0
            int16_t* _Source_14 = &data_142d40450
            int16_t* const var_70 = &data_142d409b8
            
            if (rcx_20 != 0)
                _Source_14 = _Source_13
            
            int16_t* const var_68_1 = &data_142d409b8
            int16_t* const var_60_1 = &data_142d409b8
            int16_t* _Source_15 = _Source_14
            
            if (r14_2 != 0)
                _Source_1 = _Source_5
            
            int16_t* const _Source_3 = _Source_1
            sub_140b0f5f0(&var_c8, &var_70, 5)
            int64_t rcx_24 = var_b8
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            int32_t rdi_5 = var_c0_1.d
            var_b8 = var_c8
            var_b0_1 = var_c0_1:4.d
            int64_t var_c0_2 = 0
            var_c8 = 0
            var_b0_1 = rdi_5
            
            if (_Source_13 != 0)
                sub_140a74f90(_Source_13)
                rdi_5 = var_b0_1
            
            int16_t* _Source_12 = _Source_6
            
            if (_Source_12 != 0)
                sub_140a74f90(_Source_12)
                rdi_5 = var_b0_1
            
            int64_t rcx_27 = var_80
            
            if (rcx_27 != 0)
                sub_140a74f90(rcx_27)
                rdi_5 = var_b0_1
            
            if (arg2 == &var_b8)
                result, r9_2 = sub_140b27db0(&var_b8)
            else
                r14_1 = var_b8
                int32_t r8_10 = *(arg2 + 0xc)
                arg2[1].d = rdi_5
                
                if (rdi_5 != 0 || r8_10 != 0)
                    sub_1405a4c70(arg2, rdi_5, r8_10)
                    memcpy(*arg2, r14_1, rdi_5 * 2)
                    result, r9_2 = sub_140b27db0(&var_b8)
                else
                    *(arg2 + 0xc) = 0
                    result, r9_2 = sub_140b27db0(&var_b8)
    else
        _Source_5 = _Source_6
        
        if (var_d0_1.d != 0)
            _Source_1 = _Source_5
        
        wcsncpy(u"Embers", _Source_1, 0x3f)
        data_14399e17e = 0
        
        if (arg2 == &var_b8)
            result, r9_2 = sub_140b27db0(&var_b8)
        else
            r14_1 = var_b8
            int32_t r8_1 = *(arg2 + 0xc)
            arg2[1].d = var_b0_1
            
            if (var_b0_1 != 0 || r8_1 != 0)
                sub_1405a4c70(arg2, var_b0_1, r8_1)
                memcpy(*arg2, r14_1, var_b0_1 * 2)
                result, r9_2 = sub_140b27db0(&var_b8)
            else
                *(arg2 + 0xc) = 0
                result, r9_2 = sub_140b27db0(&var_b8)
    
    if (data_143cd5b64 == 0)
        data_143cd5b64 = 1
        
        if ((*u"Embers")[0] != 0)
            result, r9_2 = sub_140a54510(u"Embers", u"None")
        
        if ((*u"Embers")[0] == 0 || result == 0)
            sub_140af98a0("Unknown", 0x25b, 
                Non-agnostic games on cooked platforms require a uproject file be specified.", r9_2)
            sub_140afbb40()
    
    if (_Source_5 != 0)
        sub_140a74f90(_Source_5)
    
    rcx_36 = var_b8

if (rcx_36 != 0)
    sub_140a74f90(rcx_36)

result.b = 1
__security_check_cookie(rax_1 ^ &var_f8)
return result
