// 函数: sub_1422d17b0
// 地址: 0x1422d17b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143f54438 s> result)
    result, arg5 = _Init_thread_header(&data_143f54438)
    
    if (data_143f54438 == 0xffffffff)
        void*** rax_3 = j_sub_140a82f30(0xc0)
        void*** rax_2
        
        if (rax_3 == 0)
            rax_2 = nullptr
        else
            rax_2 = sub_140bd5be0(rax_3, 0)
        
        data_143f54428 = rax_2
        data_143f54430 = 0
        atexit(sub_142d0b7d0)
        result, arg5 = _Init_thread_footer(&data_143f54438)

int32_t i = 0

if (*(arg1 + 0x30) s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t rax_1 = *(arg1 + 0x28)
        result, arg5 = sub_1422d1b10(arg1, arg3, arg4, zx.d(*(rax_1 + rsi_1 + 0x1c)), arg5, arg2, 
            zx.d(*(rax_1 + rsi_1 + 0x1e)), arg6, arg7, 0, 0, &data_143f54418, 0)
        
        if ((*(arg3 + 0x29) & 1) != 0)
            break
        
        i += 1
        rsi_1 += 0x30
    while (i s< *(arg1 + 0x30))

return result
