// 函数: sub_1417f0970
// 地址: 0x1417f0970
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
    return 0xffffffff

if (data_143ef9900 s> *rdi_1)
    _Init_thread_header(&data_143ef9900)
    
    if (data_143ef9900 == 0xffffffff)
        sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
        _Init_thread_footer(&data_143ef9900)

int64_t rbx_1 = data_143ef98f8
sub_140a387e0()
void* r9_1 = data_14399e720
void* rax_4 = (*(r9_1 + 0x10))(&data_14399e720, rbx_1, 0, r9_1)

if (rax_4 == 0)
    jump(*(*nullptr + 0x10))

jump(*(*(rax_4 - 8) + 0x10))
