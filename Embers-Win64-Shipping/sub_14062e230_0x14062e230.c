// 函数: sub_14062e230
// 地址: 0x14062e230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rax_11
int64_t var_28

if (arg2 == 0 || arg3 == 0)
    int32_t var_20_1 = data_143dbb210
    rax_11 = &var_28
    var_28 = data_143dbb208
else
    void* rbx_1 = *(arg3 + 0x130)
    int64_t var_48
    int32_t var_40_1
    float var_38[0x4]
    int32_t rcx_1
    float zmm1[0x4]
    
    if (rbx_1 == 0)
        zmm1 = zx.o(data_143dbb208)
        rcx_1 = data_143dbb210
        var_48 = zmm1.q
        var_40_1 = rcx_1
    else
        zmm1 = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
        var_38 = zmm1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1
            int32_t* rax_2 = sub_140adf5d0(&var_38, &var_28)
            *(rbx_1 + 0x190) = *rax_2
            *(rbx_1 + 0x198) = rax_2[2]
        
        int32_t rax_4 = *(rbx_1 + 0x198)
        rcx_1 = data_143dbb210
        zmm1 = zx.o(data_143dbb208)
        var_48 = *(rbx_1 + 0x190)
        var_40_1 = rax_4
    
    void* rbx_2 = *(arg2 + 0x130)
    var_38[0].q = var_48
    var_38[2] = var_40_1
    int32_t var_40_2
    
    if (rbx_2 == 0)
        var_48 = zmm1.q
        var_40_2 = rcx_1
    else
        float zmm2[0x4] = *(rbx_2 + 0x1c0)
        uint32_t temp0_4 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_2 + 0x180), zmm2, 4))
        var_48.o = zmm2
        
        if (temp0_4 != 0)
            *(rbx_2 + 0x180) = zmm2
            int32_t* rax_7 = sub_140adf5d0(&var_48, &var_28)
            *(rbx_2 + 0x190) = *rax_7
            *(rbx_2 + 0x198) = rax_7[2]
        
        int32_t rax_9 = *(rbx_2 + 0x198)
        var_48 = *(rbx_2 + 0x190)
        var_40_2 = rax_9
    
    var_28 = var_48
    int32_t var_20 = var_40_2
    float var_18[0x4]
    rax_11 = sub_1406305d0(&var_18, &var_28, &var_38)
int32_t rax_13 = rax_11[2]
*arg1 = *rax_11
arg1[1].d = rax_13
return arg1
