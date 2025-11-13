// 函数: sub_140ababb0
// 地址: 0x140ababb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba1b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba1b8)
    
    if (data_143dba1b8 == 0xffffffff)
        sub_1405947f0(&data_143dba1a8, 0xe)
        int32_t rax_4 = data_143dba1b0 + 0xe
        bool cond:0_1 = rax_4 s<= data_143dba1b4
        data_143dba1b0 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143dba1a8)
        
        UnDecorator::getReferenceType(data_143dba1a8, u"LOCGEN_NUMBER", 0x1c)
        atexit(sub_142cbdf60)
        _Init_thread_footer(&data_143dba1b8)

int16_t* result = sub_140abd420(arg2, &data_143dba1a8, arg1 + 0x10, arg1 + 0x40, arg1 + 0x60)

if (result == 0)
    return result

sub_140ab73d0(arg1, arg3)
return result
