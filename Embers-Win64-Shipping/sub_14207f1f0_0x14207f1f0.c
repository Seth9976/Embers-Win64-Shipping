// 函数: sub_14207f1f0
// 地址: 0x14207f1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f47a18 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f47a18)
    
    if (data_143f47a18 == 0xffffffff)
        data_143f479e8 = sub_1424c72a0()
        data_143f479f0 = sub_1424c7540()
        data_143f479f8 = sub_1424c7e20()
        data_143f47a00 = sub_1424c7ef0()
        data_143f47a08 = sub_1424c7650()
        data_143f47a10 = sub_1424c8150()
        _Init_thread_footer(&data_143f47a18)

uint64_t result

if (arg1 == 0)
    result.b = 0
else
    void* rax_1 = sub_140bdf670()
    void* rdx = *(arg1 + 0x10)
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
        void* rax_3 = sub_14247bf70()
        void* rdx_1 = *(arg1 + 0x10)
        result = sx.q(*(rax_3 + 0x38))
        
        if (result.d s> *(rdx_1 + 0x38))
            result.b = 0
        else if (*(*(rdx_1 + 0x30) + (result << 3)) != rax_3 + 0x30)
            result.b = 0
        else
            result.b = 1
    else
        result.b = 1

if (result.b != 0)
    sub_14207f1f0(*(arg1 + 0x40), arg2)
    int32_t i = 0
    int64_t* rdi_1 = &data_143f479e8
    
    do
        result = sub_141ea2da0(arg1, *rdi_1)
        
        if (result != 0)
            int64_t r8_4 = *result
            result = (*(r8_4 + 0x278))(result, arg2, r8_4)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i u< 6)

return result
