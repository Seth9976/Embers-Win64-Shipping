// 函数: sub_1417f1b70
// 地址: 0x1417f1b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef9900 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef9900)
    
    if (data_143ef9900 == 0xffffffff)
        sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
        _Init_thread_footer(&data_143ef9900)

int64_t rbx = data_143ef98f8
sub_140a387e0()
void* r8 = data_14399e720
int32_t result
result.b = (*(r8 + 8))(&data_14399e720, rbx, r8) s> 0
return result
