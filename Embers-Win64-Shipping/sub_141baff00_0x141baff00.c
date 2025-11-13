// 函数: sub_141baff00
// 地址: 0x141baff00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f32138 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f32138)
    
    if (data_143f32138 == 0xffffffff)
        data_143f32120 = data_143de5458
        data_143f32130 = 0
        atexit(sub_142cf6660)
        _Init_thread_footer(&data_143f32138)

if (data_143f32130 == 0 || data_143f32120 != data_143de5458)
    int64_t rcx = data_143f5b298
    int32_t arg_18 = 0x3f800000
    int32_t arg_1c = 0x3f800000
    void* rax_3 = sub_1423de540(rcx, arg1, 1)
    
    if (rax_3 != 0 && sub_14243ade0(rax_3) != 0)
        void* rax_5 = sub_142436920(rax_3)
        
        if (rax_5 != 0)
            sub_14202bf60(rax_5, &arg_18)
    
    int64_t rax_6 = data_143de5458
    data_143f32128 = arg_18.q
    data_143f32120 = rax_6
    data_143f32130 = 1

int32_t zmm1 = data_143f32128:4.d
void* rcx_4 = data_143e29f28
int32_t arg_10 = data_143f32128.d.d
int128_t var_28 = zx.o(0)
int64_t result = sub_140da9b20(rcx_4, &var_28)
float zmm3[0x4] = var_28:8.d
float zmm0_1[0x4] = var_28.d
int128_t zmm1_1 = var_28:4.d
int64_t zmm2 = var_28:0xc.d
*(arg2 + 8) = zmm3[0]
float temp0[0x4] = _mm_max_ss(zmm3[0], zmm0_1[0])
*(arg2 + 0xc) = zmm2.d
int64_t temp0_1 = _mm_max_ss(zmm2.d, zmm1_1.d)
*arg2 = zmm0_1[0]
*(arg2 + 4) = zmm1_1.d
temp0[0] = temp0[0] f/ arg_10
zmm2.d = temp0_1.d f/ zmm1
*arg3 = (_mm_unpacklo_ps(temp0, zmm2)).q
*arg4 = *arg2
return result
