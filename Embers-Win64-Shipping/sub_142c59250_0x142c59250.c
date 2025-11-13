// 函数: sub_142c59250
// 地址: 0x142c59250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = -1
char* _MaxCount = -ffffffffffffffff

do
    _MaxCount = &_MaxCount[1]
while (*(_MaxCount + arg1) != 0)

if (_MaxCount == 1)
    return zx.q(_MaxCount.b)

uint64_t string = data_143ccb8b0(arg2)
uint64_t _Str2 = string

if (string != 0)
    char* rax_1 = strchr(string, 0x3f)
    
    if (rax_1 != 0)
        *rax_1 = 0
    
    int64_t rax_2 = -1
    
    do
        rax_2 += 1
    while (*(_Str2 + rax_2) != 0)
    
    if (rax_2 != 0 && *_Str2 == 0x2f)
    label_142c592fe:
        
        do
            rsi += 1
        while (*(_Str2 + rsi) != 0)
        
        int32_t rax_3
        
        if (rsi u>= _MaxCount)
            rax_3 = strncmp(arg1, _Str2, _MaxCount)
        
        if (rsi u< _MaxCount || rax_3 != 0)
            _MaxCount.b = 0
        else if (_MaxCount != rsi)
            _MaxCount.b = _MaxCount[_Str2] == 0x2f
        else
            _MaxCount.b = 1
        
        data_143ccb8a0(_Str2)
        return zx.q(_MaxCount.b)
    
    data_143ccb8a0(_Str2)
    string = data_143ccb8b0(&data_14363dfe8)
    _Str2 = string
    
    if (string != 0)
        goto label_142c592fe

string.b = 0
return string
