// 函数: sub_1422dd780
// 地址: 0x1422dd780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f565e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f565e0)
    
    if (data_143f565e0 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143f565d8 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.MobileMSAA", r8_1)
        _Init_thread_footer(&data_143f565e0)

int64_t* rcx = data_143f565d8
int64_t rbx

if (rcx == 0)
    rbx.b = 0
else
    rbx.b = (*(*rcx + 0x90))(rcx) s> 1

uint64_t result

if (*(data_143f55af0 + 4) != 0)
    void* rax_4 = *(arg1 + 0x20)
    int32_t rcx_1
    
    if (rax_4 == 0)
        rcx_1 = data_1439c7a08
    else
        rcx_1 = *(rax_4 + 8)
    
    if (rcx_1 s> 1)
    label_1422dd803:
        result = zx.q(*(arg1 + 0x28))
        
        if ((result.b & 1) != 0 && test_bit(result.d, 0x11))
            result.b = 1
            return result
    else if (sub_1422eb710().b != 0 && rbx.b == 0)
        goto label_1422dd803

result.b = 0
return result
