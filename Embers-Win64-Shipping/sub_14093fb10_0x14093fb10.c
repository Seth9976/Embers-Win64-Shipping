// 函数: sub_14093fb10
// 地址: 0x14093fb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cecf98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf98)
    
    if (data_143cecf98 == 0xffffffff)
        arg2 = sub_140b58260(&data_143cecf90, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf98)

if (arg1 == 0)
    j_sub_140b3db50()
    
    if (sub_140b404d0(&data_143de7d78, data_143cecf90, arg2) == 0)
        return 0

int64_t rbx = data_143cecf90
j_sub_140b3db50()
jump(*(*sub_140b3da90(&data_143de7d78, rbx) + 0x58))
