// 函数: sub_140bbd8c0
// 地址: 0x140bbd8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e1a5b4 s> *rdi_1)
    _Init_thread_header(&data_143e1a5b4)
    
    if (data_143e1a5b4 == 0xffffffff)
        sub_140b0a030(&data_143e1a5b0, u"Kismet", u"bDeferDependencyLoads", &data_143de5780)
        _Init_thread_footer(&data_143e1a5b4)

char rbx = data_143e1a5b0

if (data_143e1a5bc s> *rdi_1)
    _Init_thread_header(&data_143e1a5bc)
    
    if (data_143e1a5bc == 0xffffffff)
        sub_140b0a030(&data_143e1a5b8, Kismet", bForceDisableCookedDependencyDeferring", 
            &data_143de5780)
        _Init_thread_footer(&data_143e1a5bc)

int32_t result
result.b = data_143e1a5b8 == 0
result.b &= rbx
return result
