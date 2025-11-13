// 函数: sub_141c2ce60
// 地址: 0x141c2ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = arg1 + 0x10

if (arg1 == -8)
    rbx = 0

sub_140a387e0()
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f349a0 s> *r14_1)
    _Init_thread_header(&data_143f349a0)
    
    if (data_143f349a0 == 0xffffffff)
        sub_140b58260(&data_143f34998, u"AudioFFTAlgorithmFactory", 1)
        _Init_thread_footer(&data_143f349a0)

(*(data_14399e720 + 0x18))(&data_14399e720, data_143f34998, rbx)
int64_t rbx_1 = arg1 + 0x18

if (arg1 == -0x10)
    rbx_1 = 0

sub_140a387e0()

if (data_143f349a0 s> *r14_1)
    _Init_thread_header(&data_143f349a0)
    
    if (data_143f349a0 == 0xffffffff)
        sub_140b58260(&data_143f34998, u"AudioFFTAlgorithmFactory", 1)
        _Init_thread_footer(&data_143f349a0)

(*(data_14399e720 + 0x18))(&data_14399e720, data_143f34998, rbx_1)
sub_140a387e0()

if (data_143f34978 s> *r14_1)
    _Init_thread_header(&data_143f34978)
    
    if (data_143f34978 == 0xffffffff)
        sub_140b58260(&data_143f34970, u"AudioConvolutionAlgorithmFactory", 1)
        _Init_thread_footer(&data_143f34978)

data_143f34970
jump(*(data_14399e720 + 0x18))
