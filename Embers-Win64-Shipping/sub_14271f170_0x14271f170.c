// 函数: sub_14271f170
// 地址: 0x14271f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
uint32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143f72558 s> result)
    result = _Init_thread_header(&data_143f72558)
    
    if (data_143f72558 == 0xffffffff)
        data_143f72550 = sub_14254a2d0()
        result = _Init_thread_footer(&data_143f72558)

if (arg3 != 0)
    if (arg3 s<= 0)
        return result
    
    if (arg3 s<= 3)
        if (arg2 == 0)
            return result
        
        result = *(arg2 + 0x98) u>> 2
        
        if ((result.b & 1) == 0)
            return result
        
        result = arg1[0x16].d u>> 3
        
        if ((result.b & 1) != 0)
            return result
        
        if ((arg1[0x16].b & 2) != 0)
            arg1[0x12]
        
        arg1[0xd]
    else
        if (arg3 == 4)
            return sub_14271c4c0(arg1) __tailcall
        
        if (arg3 != 5)
            return result

return sub_14271cf20(arg1, 3)
