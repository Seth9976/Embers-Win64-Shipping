// 函数: sub_1417f4fe0
// 地址: 0x1417f4fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(data_143f5b298 + 0xb08)

if (rcx != 0)
    int64_t* rax_2 = (*(*rcx + 0x100))(rcx)
    
    if (rax_2 != 0)
        int64_t rdx_1 = *rax_2
        int64_t* rax_3 = (*(rdx_1 + 0xb8))(rax_2, rdx_1)
        
        if (rax_3 != 0)
            jump(**rax_3)

TEB* gsbase

if (data_143ef98e8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef98e8)
    
    if (data_143ef98e8 == 0xffffffff)
        sub_140b58260(&data_143ef98e0, u"PSVR", 1)
        _Init_thread_footer(&data_143ef98e8)

void* result = data_143f5b298
int64_t* rcx_5 = *(result + 0xb08)

if (rcx_5 == 0)
    return result

void arg_10
return (**rcx_5)(rcx_5, &arg_10)
