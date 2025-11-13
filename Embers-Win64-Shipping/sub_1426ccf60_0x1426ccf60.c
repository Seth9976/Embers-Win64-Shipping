// 函数: sub_1426ccf60
// 地址: 0x1426ccf60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f72310 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f72310)
    
    if (data_143f72310 == 0xffffffff)
        int32_t rax_5 = data_143dbb200
        data_143f72300 = data_143dbb1f8.q
        data_143f72308 = rax_5
        _Init_thread_footer(&data_143f72310)

uint128_t zmm1 = data_143f7230c
int32_t rax_2 = data_143f72308
uint64_t var_2c = data_143f72300
int32_t var_24 = rax_2
uint64_t var_20 = (_mm_unpacklo_ps(zmm1, zmm1.q)).q
int32_t var_14 = zmm1.d
int32_t var_18 = zmm1.d
sub_140ae2e90(&var_2c, arg2, arg3)
return arg2
