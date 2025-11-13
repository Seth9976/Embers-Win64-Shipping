// 函数: sub_140b7d8f0
// 地址: 0x140b7d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e19fc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e19fc8)
    
    if (data_143e19fc8 == 0xffffffff)
        sub_1405947f0(&data_143e19fb8, 9)
        int32_t rax_4 = data_143e19fc0 + 9
        bool cond:0_1 = rax_4 s<= data_143e19fc4
        data_143e19fc0 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143e19fb8)
        
        UnDecorator::getReferenceType(data_143e19fb8, u"uproject", 0x12)
        atexit(&data_142cc0e60)
        _Init_thread_footer(&data_143e19fc8)

*arg1 = 0
int32_t rdi = data_143e19fc0
int64_t rsi = data_143e19fb8
arg1[1].d = rdi

if (rdi == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_1405a4c70(arg1, rdi, 0)
memcpy(*arg1, rsi, rdi * 2)
return arg1
