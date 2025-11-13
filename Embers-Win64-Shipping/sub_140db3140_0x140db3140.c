// 函数: sub_140db3140
// 地址: 0x140db3140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f10 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f10)
    
    if (data_143e20f10 == 0xffffffff)
        data_143e20f00 = 0
        data_143e20f08 = 0
        sub_1405947f0(&data_143e20f00, 0x17)
        int32_t rax_2 = data_143e20f08.d + 0x17
        bool cond:1_1 = rax_2 s<= data_143e20f08:4.d
        data_143e20f08.d = rax_2
        
        if (not(cond:1_1))
            sub_140594770(&data_143e20f00)
        
        UnDecorator::getReferenceType(data_143e20f00, u"FExternalDragOperation", 0x2e)
        atexit(&data_142cca2d0)
        _Init_thread_footer(&data_143e20f10)

int16_t* const rcx_2 = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

if (data_143e20f08.d != 0)
    rcx_2 = data_143e20f00

int32_t result
result.b = sub_140a54510(rcx_2, rdx) == 0
return result
