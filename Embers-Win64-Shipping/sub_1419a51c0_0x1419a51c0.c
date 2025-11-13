// 函数: sub_1419a51c0
// 地址: 0x1419a51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f1b038 s> *rdi_1)
    _Init_thread_header(&data_143f1b038)
    
    if (data_143f1b038 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143f1b030 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.Mobile.EarlyZPassOnlyMaterialMasking", r8_1)
        _Init_thread_footer(&data_143f1b038)

if (data_143f1b048 s> *rdi_1)
    _Init_thread_header(&data_143f1b048)
    
    if (data_143f1b048 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f1b040 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.EarlyZPassOnlyMaterialMasking", r8_2)
        _Init_thread_footer(&data_143f1b048)

int64_t* rcx_2

if (rbx.d u> 0x1e)
    if ((*(&data_143f025fc + rbx * 0x14) & 1) == 0)
        rcx_2 = data_143f1b040
    else
        rcx_2 = data_143f1b030
else if (test_bit(0x6562c800, rbx.d) || (*(&data_143f025fc + rbx * 0x14) & 1) != 0)
    rcx_2 = data_143f1b030
else
    rcx_2 = data_143f1b040

int32_t result

if (rcx_2 != 0 && (*(*rcx_2 + 0x90))(rcx_2) != 0)
    result.b = 1
    return result

result.b = 0
return result
