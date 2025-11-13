// 函数: sub_140aba950
// 地址: 0x140aba950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba1e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba1e8)
    
    if (data_143dba1e8 == 0xffffffff)
        sub_1405947f0(&data_143dba1d8, 0xc)
        int32_t rax_4 = data_143dba1e0 + 0xc
        bool cond:0_1 = rax_4 s<= data_143dba1e4
        data_143dba1e0 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143dba1d8)
        
        UnDecorator::getReferenceType(data_143dba1d8, u"LOCGEN_DATE", 0x18)
        atexit(sub_142cbdf20)
        _Init_thread_footer(&data_143dba1e8)

int16_t* result = sub_140ab9f20(arg2, &data_143dba1d8, arg1 + 0x10, arg1 + 0x18, nullptr, 
    arg1 + 0x20, arg1 + 0x30)

if (result == 0)
    return result

sub_140ab73d0(arg1, arg3)
return result
