// 函数: sub_141bb2040
// 地址: 0x141bb2040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f32118 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f32118)
    
    if (data_143f32118 == 0xffffffff)
        data_143f32108 = data_143de5458
        atexit(sub_142cf6650)
        _Init_thread_footer(&data_143f32118)

if (data_143f32114 != 0 && data_143f32108 == data_143de5458)
    int512_t zmm0
    zmm0.o = data_143f32110
    return zmm0

void* rax_3
int128_t zmm6_1
rax_3, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_3 != 0 && sub_14243ade0(rax_3) != 0)
    void* rax_5 = sub_142436920(rax_3)
    
    if (rax_5 != 0)
        float arg_10
        sub_14202bf60(rax_5, &arg_10)
        int32_t arg_1c = int.d(fconvert.t(arg2))
        zmm6_1 = sub_1424112d0(sub_141b71f80(), int.d(fconvert.t(arg_10)).q)

int64_t rax_9 = data_143de5458
data_143f32110 = zmm6_1.d
data_143f32108 = rax_9
data_143f32114 = 1
return zmm6_1
