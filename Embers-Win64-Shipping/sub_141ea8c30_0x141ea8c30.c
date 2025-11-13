// 函数: sub_141ea8c30
// 地址: 0x141ea8c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1e].b != 1)
    return 

void* rax_1 = arg1[0x59]

if (rax_1 == 0 || *(rax_1 + 0x14f) != 2)
    void* rax_2 = arg1[0x26]
    int64_t var_38
    float var_30_1
    
    if (rax_2 == 0)
        float rax_3 = data_143dbb200
        var_38 = data_143dbb1f8.q
        var_30_1 = rax_3
    else
        float zmm1[0x4] = *(rax_2 + 0x1d0)
        var_38.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_30_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_38:4.d = temp0_1[0]
    
    int64_t var_48 = var_38
    sub_14200cc70(&var_38, &arg1[0xf], arg1)
    void* rax_5 = arg1[0x26]
    int128_t zmm0_1
    
    if (rax_5 == 0)
        zmm0_1 = data_142d3f660
    else
        zmm0_1 = *(rax_5 + 0x1c0)
    
    int128_t var_28 = zmm0_1
    void* rax_6 = arg1[0x51]
    var_28 = var_28
    *(rax_6 + 0x1f1) &= 0x7f
    int64_t* rcx
    
    if (var_48.d.d f!= var_38.d || var_48:4.d.d f!= var_38:4.d || var_30_1.d f!= var_30_1)
        rcx.b = 0x20
    else
        rcx.b = 0
    
    void* rax_7 = arg1[0x51]
    *(rax_7 + 0x387) |= rcx.b
    int64_t rbx_1 = *(arg1[0x51] + 0x140)
    float var_18[0x4]
    float (* rax_9)[0x4] = sub_140ade170(arg1 + 0x84, &var_18)
    (*(rbx_1 + 0x20))(arg1[0x51] + 0x140, &var_48, &var_28, &var_38, rax_9)
    (*(*arg1 + 0x870))(arg1, &var_48, &var_28)

void* rax = arg1[0x51]
*(rax + 0x387) |= 0x40
