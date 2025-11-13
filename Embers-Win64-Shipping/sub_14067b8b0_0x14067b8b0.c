// 函数: sub_14067b8b0
// 地址: 0x14067b8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x18) != 0)
    int16_t* _String = *(arg1 + 0x10)
    
    if (*_String != 0)
        wcstod(_String, nullptr)
        *arg2 = arg3
        
        if (not(arg3 != 0.0))
            arg3.d = fconvert.s(arg3)
            
            if (_finite(fconvert.d(arg3.d)) != 0)
                wint_t _C = *_String
                int64_t rsi
                rsi.b = 0
                
                while (_C != 0)
                    if ((0xfffd & (_C - 0x2b)) != 0 && iswspace(_C) == 0)
                        while (_C != 0)
                            int32_t rax_4 = iswspace(_C)
                            
                            if (rax_4 != 0)
                                break
                            
                            if (rsi.b != 0 || _C == 0x30)
                                rsi.b = 1
                            else if (_C != 0x2e)
                                return rax_4
                            
                            _C = _String[1]
                            _String = &_String[1]
                        
                        break
                    
                    _C = _String[1]
                    _String = &_String[1]
                
                return zx.d(rsi.b)
        
        int32_t rax_1
        rax_1.b = 1
        return rax_1

int64_t rax
rax.b = 0
*arg2 = 0
return rax
