// 函数: sub_1417eed30
// 地址: 0x1417eed30
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
int32_t result = (*(data_14399e720 + 8))(&data_14399e720, rbx)

if (result s<= 0)
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
int64_t* rcx

if (rax_3 == 0)
    rcx = nullptr
else
    rcx = rax_3 - 8

return (*(*rcx + 0x28))(rcx, zx.q(arg1), zx.q(arg2))
