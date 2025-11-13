// 函数: sub_140b1b940
// 地址: 0x140b1b940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int16_t* rsi = nullptr

while (true)
    int32_t result = arg1[1].d
    int32_t rcx = result - 1
    
    if (result == 0)
        rcx = 0
    
    if (rdi s>= rcx)
        result.b = 0
        return result
    
    wint_t _C = *(rsi + *arg1)
    
    if (iswspace(_C) != 0)
        result.b = 1
        return result
    
    int32_t rax_3
    rax_3.b = _C == 0x2029
    bool rdx_1 = zx.d(_C) - 0xa u<= 3 | rax_3.b
    
    if (_C == 0x2028)
        rdx_1 = true
    
    result.b = _C == 0x85
    
    if ((rdx_1 | result.b) != 0 || 0xd == _C)
        result.b = 1
        return result
    
    rdi += 1
    rsi = &rsi[1]
