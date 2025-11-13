// 函数: sub_1423de110
// 地址: 0x1423de110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = data_143a30280

if (not(data_143f5b294 <= 0f))
    void var_a8
    uint64_t rcx_3 = sub_140b6c480(&var_a8)[8] u>> 0x14
    float zmm0 = float.s(rcx_3)
    
    if (rcx_3 s< 0)
        zmm0 = zmm0 + 1.84467441e+19f
    
    if (not(zmm0 f> data_143f5b294))
        zmm0 = data_143a3028c
        float temp0[0x4] = _mm_min_ss(data_143a30288[0], zmm7.d)
        
        if (not(zmm0 >= temp0[0]) && sub_142437330() s> 0)
            return data_143a3028c
        
        return temp0[0]

return zmm7.d
