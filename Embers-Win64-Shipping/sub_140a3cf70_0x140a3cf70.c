// 函数: sub_140a3cf70
// 地址: 0x140a3cf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const _Source_1 = &data_142d40450

if (arg2[4].b != 0)
    wchar16* _Source
    
    if (arg2[1].d == 0)
        _Source = &data_142d40450
    else
        _Source = *arg2
    
    wcsncpy(&data_143db2e30, _Source, 0x1ff)
    data_143db322e = 0

if (*(arg2 + 0x21) != 0)
    int16_t* _Source_6 = nullptr
    int64_t var_50_1 = 0
    sub_1405947f0(&_Source_6, 5)
    int32_t r8_1 = var_50_1:4.d
    int32_t rcx_1 = var_50_1.d + 5
    var_50_1.d = rcx_1
    
    if (rcx_1 s> r8_1)
        sub_140594770(&_Source_6)
        r8_1 = var_50_1:4.d
        rcx_1 = var_50_1.d
    
    int16_t* _Source_5 = _Source_6
    int32_t r15_1 = 1
    __builtin_wcscpy(_Source_5, u"UE4-")
    
    if ((*u"Embers")[0] != 0)
        int64_t rdi_1 = -1
        
        do
            rdi_1 += 1
        while ((*u"Embers")[rdi_1] != 0)
        
        int32_t rax_1
        
        if (rcx_1 == 0)
            rax_1 = 1
        
        if (rcx_1 != 0 || rdi_1.d == 0)
            rax_1 = 0
        
        _Source_6 = _Source_5
        int32_t rdx_2 = rax_1 + rcx_1 + rdi_1.d
        var_50_1.d = rcx_1
        var_50_1:4.d = r8_1
        
        if (rdx_2 s> r8_1)
            sub_1405947f0(&_Source_6, rdx_2)
        
        sub_140a20ba0(&_Source_6, u"Embers", rdi_1.d)
        rcx_1 = var_50_1.d
        r8_1 = var_50_1:4.d
        _Source_5 = _Source_6
        int64_t var_50_2 = 0
        _Source_6 = nullptr
    
    int32_t rdi_2 = arg2[3].d
    int16_t* _Source_2
    
    if (rcx_1 s> 1)
        int32_t r14_2 = rdi_2 - 1
        
        if (rdi_2 == 0)
            r14_2 = 0
        
        if (rcx_1 != 0 || r14_2 == 0)
            r15_1 = 0
        
        int16_t* _Source_3 = _Source_5
        int32_t rdx_6 = r15_1 + rcx_1 + r14_2
        int32_t var_3c_1 = r8_1
        _Source_5 = nullptr
        
        if (rdx_6 s> r8_1)
            sub_1405947f0(&_Source_3, rdx_6)
        
        sub_140a20ba0(&_Source_3, arg2[2], r14_2)
        _Source_2 = _Source_3
        rdi_2 = rcx_1
        _Source_3 = nullptr
        int32_t var_40_1
        var_40_1.q = 0
    else
        int64_t r14_1 = arg2[2]
        uint64_t _Source_4 = 0
        
        if (rdi_2 != 0)
            sub_1405a4c70(&_Source_4, rdi_2, 0)
            _Source_2 = _Source_4
            memcpy(_Source_2, r14_1, rdi_2 * 2)
        else
            _Source_2 = nullptr
    
    if (rdi_2 != 0)
        _Source_1 = _Source_2
    
    wcsncpy(&data_143db1930, _Source_1, 0x3f)
    data_143db19ae = 0
    
    if (_Source_2 != 0)
        sub_140a74f90(_Source_2)
    
    if (_Source_5 != 0)
        sub_140a74f90(_Source_5)

if (*(arg2 + 0x23) != 0)
    data_143db3541 = *(arg2 + 0x22)

if (*(arg2 + 0x25) != 0)
    data_143db3542 = *(arg2 + 0x24)

return sub_140a52b20() __tailcall
