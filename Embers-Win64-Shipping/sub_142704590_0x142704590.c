// 函数: sub_142704590
// 地址: 0x142704590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f724a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724a0)
    
    if (data_143f724a0 == 0xffffffff)
        data_143f72498 = sub_14272ba40()
        _Init_thread_footer(&data_143f724a0)

int16_t rbx = *(arg1 + 0x160)
int64_t result = sub_1426bf170(arg1 + 0x160, arg2)

if (rbx != 0)
    return result

return (*(*(arg1 - 0xb0) + 0x428))(arg1 - 0xb0, zx.q(*(arg1 + 0x188)), 0)
