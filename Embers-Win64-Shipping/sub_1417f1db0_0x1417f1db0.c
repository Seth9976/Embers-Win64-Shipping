// 函数: sub_1417f1db0
// 地址: 0x1417f1db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143ef9900 s> *rdi_1)
    _Init_thread_header(&data_143ef9900)
    
    if (data_143ef9900 == 0xffffffff)
        sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
        _Init_thread_footer(&data_143ef9900)

int64_t rbx = data_143ef98f8
sub_140a387e0()

if ((*(data_14399e720 + 8))(&data_14399e720, rbx) s<= 0)
    int32_t result
    result.b = 1
    return result

if (data_143ef9900 s> *rdi_1)
    _Init_thread_header(&data_143ef9900)
    
    if (data_143ef9900 == 0xffffffff)
        sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
        _Init_thread_footer(&data_143ef9900)

int64_t rbx_1 = data_143ef98f8
sub_140a387e0()
void* r9_1 = data_14399e720
void* rax_3 = (*(r9_1 + 0x10))(&data_14399e720, rbx_1, 0, r9_1)

if (rax_3 == 0)
    return (*(*nullptr + 0x18))(0, zx.q(arg1), zx.q(arg2))

return (*(*(rax_3 - 8) + 0x18))(rax_3 - 8, zx.q(arg1), zx.q(arg2))
