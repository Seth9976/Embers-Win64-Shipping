// 函数: sub_1419553a0
// 地址: 0x1419553a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f01c48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f01c48)
    
    if (data_143f01c48 == 0xffffffff)
        int64_t* rcx_2 = data_143db18d0
        
        if (rcx_2 == 0)
            sub_140a53c40()
            rcx_2 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_4 = (*(*rcx_2 + 0xb0))(rcx_2, u"r.UniformBufferPooling", r8_1)
        
        if (rax_4 != 0)
            int64_t rdx_1 = *rax_4
            rax_4 = (*(rdx_1 + 0x58))(rax_4, rdx_1)
        
        data_143f01c40 = rax_4
        _Init_thread_footer(&data_143f01c48)

bool cond:0 = sub_140a80ed0() == 0
int32_t* result = data_143f01c40

if (not(cond:0))
    result = &result[1]

result.b = *result != 0
return result
