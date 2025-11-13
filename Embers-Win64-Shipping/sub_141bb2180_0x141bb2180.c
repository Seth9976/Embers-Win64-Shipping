// 函数: sub_141bb2180
// 地址: 0x141bb2180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f32138 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f32138)
    
    if (data_143f32138 == 0xffffffff)
        data_143f32120 = data_143de5458
        atexit(sub_142cf6660)
        _Init_thread_footer(&data_143f32138)

if (data_143f32130 != 0 && data_143f32120 == data_143de5458)
    *arg1 = data_143f32128
    return arg1

int64_t rcx = data_143f5b298
int32_t arg_8 = 0x3f800000
int32_t arg_c = 0x3f800000
void* rax_4 = sub_1423de540(rcx, arg2, 1)

if (rax_4 != 0 && sub_14243ade0(rax_4) != 0)
    void* rax_6 = sub_142436920(rax_4)
    
    if (rax_6 != 0)
        sub_14202bf60(rax_6, &arg_8)

int64_t zmm0_1 = arg_8.q
data_143f32120 = data_143de5458
*arg1 = zmm0_1
data_143f32128 = zmm0_1
data_143f32130 = 1
return arg1
