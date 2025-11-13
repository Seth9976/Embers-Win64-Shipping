// 函数: sub_140b24690
// 地址: 0x140b24690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t _Radix = 0
int32_t r9 = arg1[1].d

if (r9 s> 1)
    int16_t* r8_1 = *arg1
    int32_t rax_1 = r9 - 1
    int16_t* const _String = &data_142d40450
    int16_t* const rcx = &data_142d40450
    
    if (r9 == 0)
        rax_1 = 0
    
    if (r9 != 0)
        rcx = r8_1
    
    if (sub_140b1ddd0(rcx, &r8_1[sx.q(rax_1)], &_Radix) != 0)
        char rax_3 = sub_140b1b940(arg1)
        int64_t var_48
        int64_t var_38
        int64_t* rax_4
        int16_t* _String_1
        int32_t rsi
        
        if (rax_3 == 0)
            int32_t var_40_1 = 0
            rax_4 = &var_48
            rsi = 2
            _String_1 = nullptr
        else
            rax_4 = sub_140b26200(&var_38, arg1)
            rsi = 1
            _String_1 = *rax_4
        
        *rax_4 = 0
        int32_t r15 = rax_4[1].d
        rax_4[1] = 0
        
        if ((rsi.b & 2) != 0)
            int64_t rcx_3 = var_48
            rsi &= 0xfffffffd
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
        
        if ((rsi.b & 1) != 0)
            int64_t rcx_4 = var_38
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
        
        if (rax_3 == 0)
            if (arg1[1].d != 0)
                _String = *arg1
        else if (r15 != 0)
            _String = _String_1
        
        *arg2 = wcstoul(_String, nullptr, _Radix)
        
        if (_String_1 != 0)
            sub_140a74f90(_String_1)
        
        uint32_t result
        result.b = 1
        return result

return 0
