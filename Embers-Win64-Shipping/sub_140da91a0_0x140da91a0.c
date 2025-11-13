// 函数: sub_140da91a0
// 地址: 0x140da91a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f48)
    
    if (data_143e20f48 == 0xffffffff)
        sub_1405947f0(&data_143e20f38, 0x17)
        int32_t rax_4 = data_143e20f40 + 0x17
        bool cond:0_1 = rax_4 s<= data_143e20f44
        data_143e20f40 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143e20f38)
        
        UnDecorator::getReferenceType(data_143e20f38, u"FSlateInvalidationRoot", 0x2e)
        atexit(&data_142cca2b0)
        _Init_thread_footer(&data_143e20f48)

*arg2 = 0
int32_t rdi = data_143e20f40
int64_t rsi = data_143e20f38
arg2[1].d = rdi

if (rdi == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405a4c70(arg2, rdi, 0)
memcpy(*arg2, rsi, rdi * 2)
return arg2
