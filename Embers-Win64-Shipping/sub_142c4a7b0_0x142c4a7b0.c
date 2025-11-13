// 函数: sub_142c4a7b0
// 地址: 0x142c4a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* _String1 = arg1
wchar16* rax = wcsrchr(arg1, 0x5c)

if (rax != 0)
    _String1 = &rax[1]

if (_wcsicmp(_String1, arg2) == 0)
    return 1

int64_t rcx_1 = -1
int64_t rax_3 = -1
bool cond:0_1

do
    cond:0_1 = *(_String1 + (rax_3 << 1) + 2) != 0
    rax_3 += 1
while (cond:0_1)
void* _String1_1 = _String1 + (rax_3 << 1)
void* _String1_3 = _String1_1

if (_String1 u< _String1_1)
    do
        int16_t rdx_1 = *_String1_3
        
        if (0x5c == rdx_1)
            break
        
        if (0x2e == rdx_1)
            break
        
        _String1_3 -= 2
    while (_String1 u< _String1_3)

if (0x2e == *_String1_3)
    _String1_1 = _String1_3

do
    rcx_1 += 1
while (arg2[rcx_1] != 0)

void* _String1_2 = &arg2[rcx_1]
void* _String1_4 = _String1_2

if (arg2 u< _String1_2)
    do
        int16_t rcx_2 = *_String1_4
        
        if (0x5c == rcx_2)
            break
        
        if (0x2e == rcx_2)
            break
        
        _String1_4 -= 2
    while (arg2 u< _String1_4)

if (0x2e == *_String1_4)
    _String1_2 = _String1_4

int64_t _MaxCount = (_String1_2 - arg2) s>> 1

if ((_String1_1 - _String1) s>> 1 == _MaxCount)
    int32_t rax_7
    
    if (*_String1_2 != 0)
        rax_7 = _wcsicmp(_String1_2, u".dll")
    
    if (*_String1_2 == 0 || rax_7 == 0)
        int32_t rax_8
        
        if (*_String1_1 != 0)
            rax_8 = _wcsicmp(_String1_1, u".dll")
        
        if (*_String1_1 == 0 || rax_8 == 0)
            int32_t rcx_6
            rcx_6.b = _wcsnicmp(_String1, arg2, _MaxCount) == 0
            return zx.q(rcx_6)

return 0
