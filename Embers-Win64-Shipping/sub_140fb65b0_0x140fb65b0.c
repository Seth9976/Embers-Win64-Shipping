// 函数: sub_140fb65b0
// 地址: 0x140fb65b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e2b838 s> *rdi_1)
    _Init_thread_header(&data_143e2b838)
    
    if (data_143e2b838 == 0xffffffff)
        sub_140b58260(&data_143e2b830, u"TTableViewMetadata", 1)
        _Init_thread_footer(&data_143e2b838)

int64_t result

if (data_143e2b830 != *arg2)
    if (data_143e2a0b0 s> *rdi_1)
        _Init_thread_header(&data_143e2a0b0)
        
        if (data_143e2a0b0 == 0xffffffff)
            sub_140b58260(&data_143e2a0a8, u"ITableViewMetadata", 1)
            _Init_thread_footer(&data_143e2a0b0)
    
    if (data_143e2a0a8 != *arg2)
        result.b = 0
        return result

result.b = 1
return result
