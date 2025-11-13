// 函数: sub_140a46e10
// 地址: 0x140a46e10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int64_t rax_2 = -1

do
    rax_2 += 1
while ((&data_143db32b0)[rax_2] != 0)

if (rax_2.d == 0)
    int16_t* var_28 = sub_140a46f60()
    void* var_20_1 = &data_143db24b0
    wchar16 const* const var_18_1 = u"CrashReportClient.ini"
    uint64_t _Source_1 = 0
    int32_t var_30_1 = 0
    sub_140b0f5f0(&_Source_1, &var_28, 3)
    sub_140a464c0()
    int16_t* const _Source = &data_142d40450
    int16_t* const _Source_4 = &data_142d40450
    
    if (var_30_1 != 0)
        _Source_4 = _Source_1
    
    char const (* r9_1)[0x4] = data_14399ea08
    int64_t* rax_4 = (*(r9_1 + 0xf8))(&data_14399ea08, &var_28, _Source_4, r9_1)
    
    if (&_Source_1 != rax_4)
        uint64_t _Source_2 = _Source_1
        
        if (_Source_2 != 0)
            sub_140a74f90(_Source_2)
        
        _Source_1 = *rax_4
        *rax_4 = 0
        var_30_1 = rax_4[1].d
        var_30_1 = *(rax_4 + 0xc)
        rax_4[1] = 0
    
    int16_t* rcx_3 = var_28
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    if (var_30_1 != 0)
        _Source = _Source_1
    
    wcsncpy(&data_143db32b0, _Source, 0xff)
    uint64_t _Source_3 = _Source_1
    data_143db34ae = 0
    
    if (_Source_3 != 0)
        sub_140a74f90(_Source_3)

__security_check_cookie(rax_1 ^ &var_58)
return &data_143db32b0
