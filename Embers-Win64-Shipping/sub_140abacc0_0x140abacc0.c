// 函数: sub_140abacc0
// 地址: 0x140abacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dba1d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dba1d0)
    
    if (data_143dba1d0 == 0xffffffff)
        sub_1405947f0(&data_143dba1c0, 0xf)
        int32_t rax_4 = data_143dba1c8 + 0xf
        bool cond:0_1 = rax_4 s<= data_143dba1cc
        data_143dba1c8 = rax_4
        
        if (not(cond:0_1))
            sub_140594770(&data_143dba1c0)
        
        UnDecorator::getReferenceType(data_143dba1c0, u"LOCGEN_PERCENT", 0x1e)
        atexit(sub_142cbdf80)
        _Init_thread_footer(&data_143dba1d0)

int16_t* result = sub_140abd420(arg2, &data_143dba1c0, arg1 + 0x10, arg1 + 0x40, arg1 + 0x60)

if (result == 0)
    return result

sub_140ab73d0(arg1, arg3)
return result
