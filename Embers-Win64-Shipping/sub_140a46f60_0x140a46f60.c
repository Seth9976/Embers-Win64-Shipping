// 函数: sub_140a46f60
// 地址: 0x140a46f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db4828 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4828)
    
    if (data_143db4828 == 0xffffffff)
        atexit(sub_142cbcef0)
        _Init_thread_footer(&data_143db4828)

int32_t rcx_6 = data_143db4820

if (rcx_6 s<= 1)
    int64_t var_18
    int64_t* rax_2 = sub_140b17c60(&var_18)
    int16_t* const rcx_3
    
    if (rax_2[1].d == 0)
        rcx_3 = &data_142d40450
    else
        rcx_3 = *rax_2
    
    int16_t* const var_28 = rcx_3
    uint64_t var_38 = 0
    wchar16 const* const var_20_1 = u"CrashReportClient"
    int64_t var_30_1 = 0
    sub_140b0f5f0(&var_38, &var_28, 2)
    int64_t rcx_5 = data_143db4818
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    rcx_6 = var_30_1.d
    data_143db4818 = var_38
    data_143db4824 = var_30_1:4.d
    int64_t rax_5 = var_18
    var_38 = 0
    int64_t var_30_2 = 0
    data_143db4820 = rcx_6
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
        rcx_6 = data_143db4820

if (rcx_6 != 0)
    return data_143db4818

return &data_142d40450
