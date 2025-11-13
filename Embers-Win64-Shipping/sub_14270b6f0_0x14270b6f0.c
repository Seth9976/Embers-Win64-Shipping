// 函数: sub_14270b6f0
// 地址: 0x14270b6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1426fbdd0(arg1)
uint64_t result_2 = result

if (result != 0 && arg2 != 0)
    int64_t r8_1 = *arg2
    char result_3
    (*(r8_1 + 0x260))(arg2, &result_3, r8_1)
    TEB* gsbase
    result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    
    if (data_143f724c4 s> result.d)
        result = _Init_thread_header(&data_143f724c4)
        
        if (data_143f724c4 == 0xffffffff)
            data_143f724b8 = 0xff
            sub_140b58260(&data_143f724bc, u"Invalid", 1)
            result = _Init_thread_footer(&data_143f724c4)
    
    char result_1 = result_3
    
    if (result_1 != data_143f724b8)
        result = zx.q(result_1)
        
        if (result.d s< *(result_2 + 0x90))
            result = *(result_2 + 0x88)
            int64_t* rcx_3 = *(result + (zx.q(result_1) << 3))
            
            if (rcx_3 != 0)
                return (*(*rcx_3 + 0x278))(rcx_3, arg2)

return result
