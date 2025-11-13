// 函数: sub_142a3e770
// 地址: 0x142a3e770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t result

if (arg1 == 0 || arg2 s< 0 || ((arg3 - 4) & 0xfffffffffffffffb) != 0)
    result = -2
else
    char var_30[0x8]
    result = (**arg1)(arg1, arg2, arg3, &var_30)
    
    if (result s>= 0)
        int64_t i = 1
        double _Px
        float _Px_2[0x2]
        
        if (arg3.d != 4)
            uint64_t _Px_3 = zx.q(var_30[0])
            uint64_t _Px_1
            
            do
                uint64_t rcx_2 = zx.q(var_30[i])
                i += 1
                _Px_1 = rcx_2 | _Px_3 << 8
                _Px_3 = _Px_1
            while (i s< 8)
            
            _Px = _Px_1
            _Px_2 = _Px
        else
            uint32_t rax_4 = zx.d(var_30[0])
            uint32_t rcx_1
            
            do
                uint32_t rcx = zx.d(var_30[i])
                i += 1
                rcx_1 = rcx | rax_4 << 8
                rax_4 = rcx_1
            while (i s< 4)
            
            _Px.d = rcx_1
            _Px_2 = _mm_cvtps_pd(_Px.d)
        
        *arg4 = _Px_2
        _Px = _Px_2
        
        if (_dtest(&_Px) == 1)
            result = -2
        else
            _Px = *arg4
            
            if (_dtest(&_Px) == 2)
                result = -2
            else
                result = 0

__security_check_cookie(rax_1 ^ &var_58)
return result
