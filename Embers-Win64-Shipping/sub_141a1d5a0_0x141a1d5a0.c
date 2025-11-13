// 函数: sub_141a1d5a0
// 地址: 0x141a1d5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f29350 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f29350)
    
    if (data_143f29350 == 0xffffffff)
        sub_1405947f0(&data_143f29340, 0x20)
        int32_t rax_4 = data_143f29348 + 0x20
        bool cond:0_1 = rax_4 s<= data_143f2934c
        data_143f29348 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143f29340)
        
        UnDecorator::getReferenceType(data_143f29340, u"FLandscapeSubsystemTickFunction", 0x40)
        atexit(sub_142cf4a30)
        _Init_thread_footer(&data_143f29350)

*arg2 = 0
int32_t rdi = data_143f29348
int64_t rsi = data_143f29340
arg2[1].d = rdi

if (rdi == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405a4c70(arg2, rdi, 0)
memcpy(*arg2, rsi, rdi * 2)
return arg2
