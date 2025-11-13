// 函数: sub_140a12b30
// 地址: 0x140a12b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceffc0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceffc0)
    
    if (data_143ceffc0 == 0xffffffff)
        sub_1405947f0(&data_143ceffb0, 8)
        int32_t rax_4 = data_143ceffb8 + 8
        bool cond:0_1 = rax_4 s<= data_143ceffbc
        data_143ceffb8 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143ceffb0)
        
        UnDecorator::getReferenceType(data_143ceffb0, u"Default", 0x10)
        atexit(sub_142cbab70)
        _Init_thread_footer(&data_143ceffc0)

*arg2 = 0
int32_t rdi = data_143ceffb8
int64_t rsi = data_143ceffb0
arg2[1].d = rdi

if (rdi == 0)
    *(arg2 + 0xc) = 0
    return arg2

sub_1405a4c70(arg2, rdi, 0)
memcpy(*arg2, rsi, rdi * 2)
return arg2
