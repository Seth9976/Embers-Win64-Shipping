// 函数: sub_140afd9a0
// 地址: 0x140afd9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5d08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5d08)
    
    if (data_143de5d08 == 0xffffffff)
        data_143de5cf8 = 0
        data_143de5d00 = 0
        atexit(sub_142cbf4a0)
        _Init_thread_footer(&data_143de5d08)

void*** result = sub_140a84c80(0, 0x20, 0)
void*** result_1 = result

if (result != 0)
    result_1[1] = arg1
    *result_1 = &data_142e72110
    result_1[3] = sub_140a387b0()
    *result_1 = &data_142e72168
    result = sub_140aed350(result_1, &data_143de5cf8)
else if (data_143de5d00 != 0)
    int64_t* rcx_1 = data_143de5cf8
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = data_143de5cf8
        
        if (rcx_2 != 0)
            result = sub_140a84c80(rcx_2, 0, 0)
            data_143de5cf8 = result
        
        data_143de5d00 = 0

if (result_1 != 0)
    (*result_1)[7](result_1, 0)
    result = sub_140a84c80(result_1, 0, 0)
    
    if (result != 0)
        return sub_140a74f90(result)

return result
