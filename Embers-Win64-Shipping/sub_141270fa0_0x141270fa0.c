// 函数: sub_141270fa0
// 地址: 0x141270fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ea8d48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ea8d48)
    
    if (data_143ea8d48 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143ea8d40 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.DisableDistortion", r8_1)
        _Init_thread_footer(&data_143ea8d48)

int64_t* rcx = data_143ea8d40
int32_t rax_3 = (*(*rcx + 0x90))(rcx)
int32_t result

if (sub_1422e57b0() == 2 && (*(*arg1 + 0x2c) & 8) != 0 && *(arg1 + 0x321c) s> 0
        && sub_1411248a0() s> 0 && rax_3 == 0)
    result.b = 1
    return result

result.b = 0
return result
