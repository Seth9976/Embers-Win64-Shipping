// 函数: sub_140cf4460
// 地址: 0x140cf4460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = sub_140a82f30(0x78, 0)
void*** result_1 = result

if (result != 0)
    TEB* gsbase
    
    if (data_143e1bdd0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1bdd0)
        
        if (data_143e1bdd0 == 0xffffffff)
            sub_140d11c00()
            int64_t (* var_20_1)() = sub_140cf4460
            sub_140cacf60(&data_143e1bd90, u"FInt8Property", 2, 0x1008003, &data_143e1bd40)
            atexit(sub_142cc2640)
            _Init_thread_footer(&data_143e1bdd0)
    
    sub_140cacf30(result_1, 0, &data_143e1bd90)
    result_1[0xa] = 0
    *result_1 = &data_142ea7690
    int128_t var_18 = *arg1
    sub_140cd3ee0(result_1, &var_18, arg2, arg3)
    *result_1 = &data_142ea7690
    result = result_1
    *(result_1 + 0x3c) = 1

return result
