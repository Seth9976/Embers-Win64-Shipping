// 函数: sub_140a94470
// 地址: 0x140a94470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
void* rdi = nullptr
wchar16* _String1 = arg1
int32_t rcx = rax - 1

if (rax == 0)
    rcx = 0

wchar16* _String2

if (rax == 0)
    _String2 = &data_142d40450
else
    _String2 = *arg2

if (wcsncmp(_String1, _String2, sx.q(rcx)) == 0)
    int32_t rax_2 = arg2[1].d
    int32_t rcx_2 = rax_2 - 1
    
    if (rax_2 == 0)
        rcx_2 = 0
    
    int64_t rax_3 = sx.q(rcx_2)
    void* rcx_3 = &_String1[rax_3]
    int16_t i = _String1[rax_3]
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = *(rcx_3 + 2)
            rcx_3 += 2
            
            if (i == 0)
                break
    
    if (*rcx_3 == 0x28)
        rdi = rcx_3
    
    void* rcx_4 = rdi + 2
    
    if (rdi == 0)
        rcx_4 = rdi
    
    if (rcx_4 == 0)
        return nullptr
    
    int16_t i_1 = *rcx_4
    
    if (i_1 != 0)
        while (i_1 == 9 || i_1 == 0x20)
            i_1 = *(rcx_4 + 2)
            rcx_4 += 2
            
            if (i_1 == 0)
                break
    
    void* arg_10 = rcx_4
    int16_t* rax_4 = (*arg4)(*(arg4 + 8), &arg_10, arg3)
    
    if (rax_4 == 0)
        return nullptr
    
    int16_t* _String1_1 = sub_140ac5870(rax_4, 0x29)
    _String1 = _String1_1
    
    if (_String1_1 == 0)
        return nullptr

return _String1
