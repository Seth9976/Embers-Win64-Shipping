// 函数: sub_1409b92e0
// 地址: 0x1409b92e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rbx_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cef068 s> *rbx_1)
    _Init_thread_header(&data_143cef068)
    
    if (data_143cef068 == 0xffffffff)
        atexit(sub_142cb9f20)
        _Init_thread_footer(&data_143cef068)

if (data_143cef080 s> *rbx_1)
    _Init_thread_header(&data_143cef080)
    
    if (data_143cef080 == 0xffffffff)
        atexit(sub_142cb9f00)
        _Init_thread_footer(&data_143cef080)

sub_1409b4ab0(arg3, arg1 + 8, &data_143cef058, &data_143cef070)
sub_1409cb7b0(arg3, arg2)
return arg2
