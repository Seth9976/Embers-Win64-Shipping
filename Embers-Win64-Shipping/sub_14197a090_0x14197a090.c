// 函数: sub_14197a090
// 地址: 0x14197a090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t result = __security_cookie ^ &var_68
uint64_t result_1 = result
int32_t rdi = 0
int64_t var_40 = 0
int32_t result_3 = 1
*arg1 = 0.o
arg1[1].q = 0
int16_t* _String = *arg2
int16_t* _String_2 = _String

while (true)
    int16_t result_2 = *_String_2
    
    if (result_2 u<= 0x3e)
        result = zx.q(result_2)
        
        if (test_bit(0x7000004200000001, result))
            break
    
    if (result_2 == 0x7c)
        break
    
    result = zx.q(result_3 + 1)
    _String_2 = &_String_2[1]
    
    if (result_2 != 0x2e)
        result = zx.q(result_3)
    
    result_3 = result.d

int32_t result_4 = 6

if (result_3 u<= 6)
    result_4 = result_3

if (result_4 == 0)
    *arg2 = _String
else
    int16_t* _String_1
    
    do
        *(arg1 + (zx.q(rdi - result_4 + 6) << 2)) = _wtoi(_String)
        
        while (true)
            result = zx.q(*_String)
            
            if (result.w u<= 0x3e && test_bit(0x7000004200000001, zx.q(result.w)))
                break
            
            if (result.w == 0x7c)
                break
            
            if (result.w == 0x2e)
                break
            
            _String = &_String[1]
        
        _String_1 = &_String[1]
        
        if (result.w != 0x2e)
            _String_1 = _String
        
        rdi += 1
        _String = _String_1
    while (rdi u< result_4)
    
    *arg2 = _String_1

__security_check_cookie(result_1 ^ &var_68)
return result
