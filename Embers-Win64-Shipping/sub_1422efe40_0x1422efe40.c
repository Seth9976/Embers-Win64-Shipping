// 函数: sub_1422efe40
// 地址: 0x1422efe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int16_t* _String_1 = nullptr
int32_t var_60 = 0

if (sub_140b295a0(&arg_8, &_String_1, 1) == 0)
    goto label_1422f0045

int16_t* const _String = &data_142d40450
int16_t* const _String_2 = &data_142d40450

if (var_60 != 0)
    _String_2 = _String_1

char result
int32_t var_58

if (sub_140a54510(_String_2, u"auto") != 0)
    int16_t* _String_3 = &data_142d40450
    
    if (var_60 != 0)
        _String_3 = _String_1
    
    if (sub_140a54510(_String_3, u"reapply") == 0)
        sub_1422e5800(&var_58)
        sub_1422f2980(&var_58, 0)
        goto label_1422f0027
    
    int16_t* _String_4 = &data_142d40450
    
    if (var_60 != 0)
        _String_4 = _String_1
    
    if (sub_140a54510(_String_4, u"cine") == 0)
        sub_1422d89c0(&var_58)
        int32_t zmm0_1 = sub_1422e5930(0x7fffffff, 0)
        int64_t* rcx_5 = data_143f553c0
        var_58 = zmm0_1
        int32_t rax_5 = (*(*rcx_5 + 0x90))(rcx_5)
        int64_t* rcx_6 = data_143f553d8
        int32_t var_54_1 = rax_5 - 1
        int32_t rax_8 = (*(*rcx_6 + 0x90))(rcx_6)
        int64_t* rcx_7 = data_143f553f0
        int32_t var_50_1 = rax_8 - 1
        int32_t rax_11 = (*(*rcx_7 + 0x90))(rcx_7)
        int64_t* rcx_8 = data_143f55408
        int32_t var_4c_1 = rax_11 - 1
        int32_t rax_14 = (*(*rcx_8 + 0x90))(rcx_8)
        int64_t* rcx_9 = data_143f55420
        int32_t var_48_1 = rax_14 - 1
        int32_t rax_17 = (*(*rcx_9 + 0x90))(rcx_9)
        int64_t* rcx_10 = data_143f55438
        int32_t var_44_1 = rax_17 - 1
        int32_t rax_20 = (*(*rcx_10 + 0x90))(rcx_10)
        int64_t* rcx_11 = data_143f55450
        int32_t var_40_1 = rax_20 - 1
        int32_t rax_23 = (*(*rcx_11 + 0x90))(rcx_11)
        int64_t* rcx_12 = data_143f55468
        int32_t var_3c_1 = rax_23 - 1
        int32_t var_38_1 = (*(*rcx_12 + 0x90))(rcx_12) - 1
        goto label_1422f001b
    
    result = sub_140a24720(&_String_1)
    
    if (result != 0)
        sub_1422d89c0(&var_58)
        
        if (var_60 != 0)
            _String = _String_1
        
        sub_1422f2580(&var_58, _wtoi(_String))
        goto label_1422f001b
else
    int512_t zmm3
    zmm3.o = 0x3f800000
    sub_1422de670(&var_58)
label_1422f001b:
    sub_1422f1ad0(&data_143de5840, sub_1422f2980(&var_58, 0))
label_1422f0027:
    int64_t var_18
    
    if (var_18 != 0)
        sub_140a74f90(var_18)
    
    int64_t var_28
    
    if (var_28 == 0)
        goto label_1422f0045
    
    sub_140a74f90(var_28)
label_1422f0045:
    sub_1422ef7b0(u"ResolutionQuality", 0)
    sub_1422ef7b0(u"ViewDistanceQuality", 0)
    sub_1422ef7b0(u"AntiAliasingQuality", 0)
    sub_1422ef7b0(u"ShadowQuality", 0)
    sub_1422ef7b0(u"PostProcessQuality", 0)
    sub_1422ef7b0(u"TextureQuality", 0)
    sub_1422ef7b0(u"EffectsQuality", 0)
    sub_1422ef7b0(u"FoliageQuality", 0)
    result = sub_1422ef7b0(u"ShadingQuality", 0)
int16_t* _String_5 = _String_1

if (_String_5 == 0)
    return result

return sub_140a74f90(_String_5)
