// 函数: sub_141bb8960
// 地址: 0x141bb8960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141bb1400()
int16_t* const rbx = &data_142d40450
int16_t* rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

int16_t* const rcx

if (data_143f31928.d == 0)
    rcx = &data_142d40450
else
    rcx = data_143f31920

int32_t result

if (sub_140a54510(rcx, rdx) != 0)
    TEB* gsbase
    
    if (data_143e20f28
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e20f28)
        
        if (data_143e20f28 == 0xffffffff)
            data_143e20f18 = 0
            data_143e20f20 = 0
            sub_1405947f0(&data_143e20f18, 0x17)
            int32_t rax_2 = data_143e20f20.d + 0x17
            bool cond:1_1 = rax_2 s<= data_143e20f20:4.d
            data_143e20f20.d = rax_2
            
            if (not(cond:1_1))
                sub_140594770(&data_143e20f18)
            
            UnDecorator::getReferenceType(data_143e20f18, u"FGameDragDropOperation", 0x2e)
            atexit(sub_142cca2f0)
            _Init_thread_footer(&data_143e20f28)
    
    int16_t* rdx_1
    
    if (arg2[1].d == 0)
        rdx_1 = &data_142d40450
    else
        rdx_1 = *arg2
    
    if (data_143e20f20.d != 0)
        rbx = data_143e20f18
    
    if (sub_140a54510(rbx, rdx_1) != 0)
        result.b = 0
        return result

result.b = 1
return result
