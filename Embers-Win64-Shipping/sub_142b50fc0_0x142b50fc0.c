// 函数: sub_142b50fc0
// 地址: 0x142b50fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
TEB* gsbase

if (data_144016c50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_144016c50)
    
    if (data_144016c50 == 0xffffffff)
        memset(&data_144016c00, 0, 0x50)
        _Mtx_init_in_situ(&data_144016c00, 2)
        atexit(sub_142d16150)
        _Init_thread_footer(&data_144016c50)

void* arg_8 = &data_144016c00
sub_142a860a0(&data_144016c00)

if (*(arg1 + 0x20) != 0)
    sub_142b4de50(arg1, arg5)

uint64_t result = sub_142a860d0(&data_144016c00)
int64_t* rdx_1 = *(arg1 + 0x10)

if (rdx_1 == 0)
    return result

return sub_142b50d70(arg1, rdx_1, arg2, arg3, arg3, arg4, arg5)
