// 函数: sub_141bc9be0
// 地址: 0x141bc9be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141ea8a30(arg1)
void* rcx = arg1[0x65]

if (rcx != 0)
    *(rcx + 8) &= 0xfffbffff

int64_t result = sub_140cdd6a0(arg1)

if (result.d s< 0x1a0)
    TEB* gsbase
    int32_t* rdi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143f320f0 s> *rdi_2)
        _Init_thread_header(&data_143f320f0)
        
        if (data_143f320f0 == 0xffffffff)
            sub_140b58260(&data_143f320e8, u"Visiblity", 1)
            _Init_thread_footer(&data_143f320f0)
    
    if (data_143f32100 s> *rdi_2)
        _Init_thread_header(&data_143f32100)
        
        if (data_143f32100 == 0xffffffff)
            sub_140b58260(&data_143f320f8, u"Visibility", 1)
            _Init_thread_footer(&data_143f32100)
    
    void* i = arg1[0x67]
    result = sx.q(arg1[0x68].d)
    
    for (void* rdx_3 = result * 0x50 + i; i != rdx_3; i += 0x50)
        result = data_143f320e8
        
        if (*(i + 0x10) == result)
            result = data_143f320f8
            *(i + 0x10) = result

return result
