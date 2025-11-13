// 函数: sub_140eff960
// 地址: 0x140eff960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2a210 s> *(*(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14))
    arg3 = _Init_thread_header(&data_143e2a210)
    
    if (data_143e2a210 == 0xffffffff)
        int32_t zmm1 = data_14399f65c
        data_143e2a208 = data_14399f658.d
        data_143e2a20c = zmm1
        arg3 = _Init_thread_footer(&data_143e2a210)

float zmm0 = sub_140da85e0(arg1 + 0x660, arg3)
float zmm3 = (data_143e2a20c f- data_1439b39fc) * zmm0 f+ data_1439b39fc
*arg2 = (data_143e2a208 f- data_1439b39f8) * zmm0 f+ data_1439b39f8
arg2[1] = zmm3
return arg2
