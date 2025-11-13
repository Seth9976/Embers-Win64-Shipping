// 函数: sub_14067b4a0
// 地址: 0x14067b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int16_t* _String = *(arg1 + 0x10)
    
    if (*_String != 0)
        int32_t rax = _wtoi(_String)
        *arg2 = rax.w
        
        if (rax.w == 0 && _finite((zx.o(0)).q) != 0)
            wint_t _C = *_String
            int64_t rsi
            rsi.b = 0
            
            while (_C != 0)
                if ((0xfffd & (_C - 0x2b)) != 0 && iswspace(_C) == 0)
                    while (_C != 0)
                        if (iswspace(_C) != 0)
                            break
                        
                        if (_C == 0x2e)
                            break
                        
                        if (rsi.b == 0 && _C != 0x30)
                            int32_t rax_3
                            rax_3.b = 0
                            return rax_3
                        
                        _C = _String[1]
                        _String = &_String[1]
                        rsi.b = 1
                    
                    break
                
                _C = _String[1]
                _String = &_String[1]
            
            return zx.d(rsi.b)
        
        rax.b = 1
        return rax

*arg2 = 0
return 0
