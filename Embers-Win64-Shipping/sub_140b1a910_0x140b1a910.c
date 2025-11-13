// 函数: sub_140b1a910
// 地址: 0x140b1a910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b17fe0(arg1, arg2, arg3)
int32_t arg_10
sub_140b161b0(&data_1439a49a0, &arg_10, arg1)
int64_t rcx = sx.q(arg_10)
void* const rcx_2

if (rcx.d == 0xffffffff)
    rcx_2 = nullptr
else
    rcx_2 = rcx * 0x58 + data_1439a49a0

int64_t* result = rcx_2 + 0x10

if (rcx_2 == 0)
    result = nullptr

TEB* gsbase

if (data_143de6894 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6894)
    
    if (data_143de6894 == 0xffffffff)
        atexit(sub_142cbf9e0)
        _Init_thread_footer(&data_143de6894)

if (result != 0)
    return result

return &data_1439a49f0
