// 函数: sub_1426fc0e0
// 地址: 0x1426fc0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe8) == 0)
label_1426fc2d6:
    int32_t rax_16 = data_143dbb200
    *arg2 = data_143dbb1f8.q
    *(arg2 + 8) = rax_16
    arg2[1].q = 0
else
    void* rax_1 = *(arg1 + 0xa8)
    
    if (rax_1 == 0)
        rax_1 = sub_141ee69e0(arg1)
        
        if (rax_1 == 0)
            goto label_1426fc2d6
    
    void* r14_1 = *(rax_1 + 0x120)
    
    if (r14_1 == 0)
        goto label_1426fc2d6
    
    void* rax_2 = sub_14269bba0()
    void* rdx = *(r14_1 + 0x10)
    int64_t rax_3 = sx.q(*(rax_2 + 0x38))
    
    if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
        goto label_1426fc2d6
    
    void* rsi_1 = *(*(arg1 + 0xe8) + 0xa0)
    void* rax_7
    
    if (rsi_1 != 0)
        rax_7 = sub_140d21950(rsi_1, sub_142548ca0())
    
    uint64_t var_38
    uint64_t var_28
    int64_t* rax_8
    
    if (rsi_1 == 0 || rax_7 == 0)
        int32_t var_30_1 = data_143b58090
        rax_8 = &var_38
        var_38 = data_143b58088
    else
        int64_t r8_2 = *rax_7
        rax_8 = (*(r8_2 + 0x18))(rax_7, &var_28, r8_2)
    
    uint64_t var_48 = *rax_8
    uint128_t zmm0
    zmm0.d = var_48.d.d f- *(arg1 + 0x240)
    int32_t rax_10 = rax_8[1].d
    
    if (_mm_and_ps(zmm0, 0x7fffffff).d f> 1f)
        rax_10.b = 0
    else
        zmm0.d = var_48:4.d.d f- *(arg1 + 0x244)
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f> 1f)
            rax_10.b = 0
        else
            zmm0.d = rax_10.d f- *(arg1 + 0x248)
            
            if (_mm_and_ps(zmm0, 0x7fffffff).d f> 1f)
                rax_10.b = 0
            else
                rax_10.b = 1
    
    if (rax_10.b == 0)
        int64_t* rcx_3 = *(*(arg1 + 0xe8) + 0xa0)
        int32_t var_30_2
        
        if (rcx_3 == 0)
            int32_t rax_13 = data_143dbb200
            var_38 = data_143dbb1f8.q
            var_30_2 = rax_13
        else
            int32_t arg_8
            int32_t arg_18
            (*(*rcx_3 + 0x560))(rcx_3, &arg_8, &arg_18)
            zmm0 = arg_8
            var_38.d = zmm0.d
            var_38:4.d = zmm0.d
            var_30_2 = arg_18.d
        
        int32_t var_20_1 = var_30_2
        var_28 = var_38
        var_38.o = zx.o(0)
        sub_142663310(r14_1, &var_48, arg1 + 0x240, &var_28, *(arg1 + 0xf8), &var_38)
    
    int64_t zmm1 = *(arg1 + 0x250)
    *arg2 = *(arg1 + 0x240)
    arg2[1].q = zmm1

return arg2
