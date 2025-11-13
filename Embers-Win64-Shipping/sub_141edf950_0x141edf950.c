// 函数: sub_141edf950
// 地址: 0x141edf950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    sub_140b58260(arg2, u"SkeletalMeshComponentClothTick", 1)
else
    void* rcx = *(arg1 + 0x28)
    int16_t* var_28
    int32_t var_20
    
    if (rcx == 0 || *(rcx + 0x10) == 0)
        var_28 = nullptr
        var_20 = 0
        sub_1405947f0(&var_28, 5)
        int32_t rax_1 = var_20 + 5
        var_20 = rax_1
        
        if (rax_1 s> 0)
            sub_140594770(&var_28)
        
        UnDecorator::getReferenceType(var_28, u"None", 0xa)
    else
        sub_140d21830(rcx, &var_28, 0, 0)
    
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const r8 = &data_142d40450
    
    if (var_20 != 0)
        r8 = var_28
    
    int16_t* var_18
    sub_140a2e390(&var_18, u"SkeletalMeshComponentClothTick/%s", r8)
    int32_t var_10
    
    if (var_10 != 0)
        rbx_1 = var_18
    
    sub_140b58260(arg2, rbx_1, 1)
    int16_t* rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_28
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

return arg2
