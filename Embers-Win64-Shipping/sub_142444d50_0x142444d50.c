// 函数: sub_142444d50
// 地址: 0x142444d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5ea80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5ea80)
    
    if (data_143f5ea80 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f5ea78 = (*(*rcx_5 + 0xb0))(rcx_5, u"voice.SilenceDetectionThreshold", r8_2)
        _Init_thread_footer(&data_143f5ea80)

int64_t* rbx = data_143f5ea78
int16_t* var_28
sub_140a2e390(&var_28, u"%g", fconvert.d(arg1.d))
int16_t* const rdx = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx = var_28

int64_t result = (*(*rbx + 0x80))(rbx, rdx, 0x2000000)
int16_t* rcx_4 = var_28

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
