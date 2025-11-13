// 函数: sub_141f61530
// 地址: 0x141f61530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* rax_2 = *(arg1 + 0x430)
int64_t rbx = arg4

if (rax_2 == 0)
label_141f61733:
    *arg2 = data_143dbb0c0
    arg2[1] = data_143dbb0d0
    arg2[2] = data_143dbb0e0
else
    int64_t var_118 = arg3
    int32_t rcx
    rcx.b = sub_140b5b8a0(arg3.d, 0) == 0
    uint32_t rax_5
    rax_5.b = (arg3 u>> 0x20).d != 0
    rcx.b |= rax_5.b
    
    if (rcx.b == 0)
        goto label_141f61733
    
    void* rcx_1 = *(arg1 + 0x430)
    
    if (rcx_1 == 0)
        goto label_141f61733
    
    int32_t rax_6 = sub_14078ee20(rcx_1 + 0x188, &var_118)
    
    if (rax_6 == 0xffffffff)
        goto label_141f61733
    
    float var_108[0x4]
    
    if ((*(arg1 + 0x88) & 1) != 0)
        sub_141f5e7d0(arg1, &var_108, rax_6, arg1 + 0x1c0)
    else
        int128_t zmm1 = data_143dbb0d0
        var_108 = data_143dbb0c0
        float var_e8_1[0x4] = data_143dbb0e0
        int128_t var_f8_1 = zmm1
    
    float var_d8[0x4]
    sub_141deaf60(&var_d8, rax_2 + 0x188, rax_6)
    int32_t rcx_5
    rcx_5.b = arg4:4.d == 0
    
    if ((rcx_5.b & sub_140b5b8a0(rbx.d, 0)) != 0)
        rbx = *sub_141f649e0(arg1, &var_118, arg3)
    
    int32_t rax_9 = sub_141f5e0e0(arg1, rbx)
    
    if (rax_9 != 0xffffffff)
        float var_a8[0x4]
        
        if ((*(arg1 + 0x88) & 1) != 0)
            sub_141f5e7d0(arg1, &var_a8, rax_9, arg1 + 0x1c0)
        else
            int128_t zmm1_1 = data_143dbb0d0
            var_a8 = data_143dbb0c0
            float var_88_1[0x4] = data_143dbb0e0
            int128_t var_98_1 = zmm1_1
        
        float var_78[0x4]
        float (* rax_10)[0x4] = sub_140ad7d70(&var_108, &var_78, &var_a8)
        var_108 = *rax_10
        int128_t var_f8_2 = rax_10[1]
        float var_e8_2[0x4] = rax_10[2]
        float (* rax_12)[0x4] =
            sub_140ad7d70(&var_d8, &var_a8, sub_141deaf60(&var_78, rax_2 + 0x188, rax_9))
        var_d8 = *rax_12
        int128_t var_c8_1 = rax_12[1]
        float var_b8_1[0x4] = rax_12[2]
    
    sub_140ad7d70(&var_108, arg2, &var_d8)

__security_check_cookie(rax_1 ^ &var_138)
return arg2
