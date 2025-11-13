// 函数: sub_141af28c0
// 地址: 0x141af28c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0xb8)

if (result == 0)
    return 0

uint64_t rdx = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
result[1].d = 1
*(result + 0xc) = 1
*result = &data_14305da48

if (data_143f2c800 s> *(0x14 + *(ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f2c800)
    
    if (data_143f2c800 == 0xffffffff)
        int64_t rax_5 = data_143f2c7f8
        
        if (rax_5 == 0)
            rax_5 = sub_141a54240(&data_143f2c7f8, 0)
        
        data_143f2c7f0 = rax_5
        _Init_thread_footer(&data_143f2c800)

int64_t rax_1 = data_143f2c7f0
void* rcx = &result[0xf]
__builtin_memset(&result[3], 0, 0x20)
result[7] = rax_1
result[2] = &data_143059b28
result[8].d = 0
__builtin_memset(&result[9], 0, 0x30)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
result[0x13].d = 0xffffffff
*(result + 0x9c) = 0
result[0x15] = 0
result[0x16].d = 0
return result
