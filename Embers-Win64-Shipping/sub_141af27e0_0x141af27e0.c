// 函数: sub_141af27e0
// 地址: 0x141af27e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return 0

uint64_t rdx = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
result[1].d = 1
*(result + 0xc) = 1
*result = &data_14305d9e8

if (data_143f2c6d8 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f2c6d8)
    
    if (data_143f2c6d8 == 0xffffffff)
        int64_t rax_4 = data_143f2c6d0
        
        if (rax_4 == 0)
            rax_4 = sub_141a54240(&data_143f2c6d0, 0)
        
        data_143f2c6c8 = rax_4
        _Init_thread_footer(&data_143f2c6d8)

int64_t rax_1 = data_143f2c6c8
__builtin_memset(&result[3], 0, 0x20)
result[7] = rax_1
result[2] = &data_143053a68
return result
