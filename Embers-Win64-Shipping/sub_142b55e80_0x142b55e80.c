// 函数: sub_142b55e80
// 地址: 0x142b55e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_144016e40 s> result)
    result = _Init_thread_header(&data_144016e40)
    
    if (data_144016e40 == 0xffffffff)
        memset(&data_144016df0, 0, 0x50)
        _Mtx_init_in_situ(&data_144016df0, 2)
        atexit(sub_142d161b0)
        result = _Init_thread_footer(&data_144016e40)

if (*arg2 s> 0)
    return result

sub_142a860a0(&data_144016df0)

if (*(arg1 + 0x68) == 0)
    sub_142b557d0(arg1, arg2)

return sub_142a860d0(&data_144016df0)
