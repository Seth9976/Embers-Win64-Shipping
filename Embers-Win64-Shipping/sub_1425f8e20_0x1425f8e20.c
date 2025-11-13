// 函数: sub_1425f8e20
// 地址: 0x1425f8e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HRESULT result
int64_t var_48

if ((*(arg1 + 0x274) & 1) != 0)
    int64_t* ppv = nullptr
    int64_t* var_58 = nullptr
    int64_t* arg_20 = nullptr
    int64_t r15
    r15.b = 0
    uint64_t r12
    r12.b = 0
    HRESULT result_3 =
        CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, &ppv)
    HRESULT result_2 = result_3
    int64_t var_38
    
    if (result_3 s< 0)
        int64_t* rax_2 = sub_1425f7e60(&var_48, result_3)
        int16_t* const rax_3
        
        if (rax_2[1].d == 0)
            rax_3 = &data_142d40450
        else
            rax_3 = *rax_2
        
        int32_t var_60_1 = 0x227
        int16_t* const var_68_2 = rax_3
        sub_140a2e390(&var_38, u"%s -> 0x%X: %s (line: %d)", u"Result")
        int64_t rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        goto label_1425f90ff
    
    int64_t* ppv_1 = ppv
    HRESULT result_4 = (*(*ppv_1 + 0x18))(ppv_1, 0, 1, &var_58)
    result_2 = result_4
    int16_t* const rax_6
    
    if (result_4 s< 0)
        int64_t* rax_5 = sub_1425f7e60(&var_38, result_4)
        
        if (rax_5[1].d == 0)
            rax_6 = &data_142d40450
        else
            rax_6 = *rax_5
        
        int32_t var_60_2 = 0x22a
        goto label_1425f8ff5
    
    int64_t* rcx_16 = var_58
    HRESULT result_1
    HRESULT result_5 = (*(*rcx_16 + 0x18))(rcx_16, &result_1)
    result_2 = result_5
    
    if (result_5 s< 0)
        int64_t* rax_8 = sub_1425f7e60(&var_38, result_5)
        
        if (rax_8[1].d == 0)
            rax_6 = &data_142d40450
            int32_t var_60_4 = 0x22e
        else
            rax_6 = *rax_8
            int32_t var_60_3 = 0x22e
        
        goto label_1425f8ff5
    
    result = result_1
    
    if (result != 0)
        if (arg2 != 0xffffffff)
            if (arg2 u>= result)
                result_2 = 0x1
                goto label_1425f90ff
            
            int64_t* rcx_22 = var_58
            result = (*(*rcx_22 + 0x20))(rcx_22, zx.q(arg2), &arg_20)
            result_2 = result
            
            if (result s>= 0)
                goto label_1425f90e2
            
            int64_t* rax_14 = sub_1425f7e60(&var_38, result)
            
            if (rax_14[1].d == 0)
                rax_6 = &data_142d40450
                int32_t var_60_8 = 0x24b
            else
                rax_6 = *rax_14
                int32_t var_60_7 = 0x24b
            
            goto label_1425f8ff5
        
        int64_t* ppv_2 = ppv
        result = (*(*ppv_2 + 0x20))(ppv_2, 0, 1, &arg_20)
        result_2 = result
        
        if (result s< 0)
            int64_t* rax_10 = sub_1425f7e60(&var_38, result)
            
            if (rax_10[1].d == 0)
                rax_6 = &data_142d40450
                int32_t var_60_6 = 0x23d
            else
                rax_6 = *rax_10
                int32_t var_60_5 = 0x23d
            
        label_1425f8ff5:
            int16_t* const var_68_3 = rax_6
            sub_140a2e390(&var_48, u"%s -> 0x%X: %s (line: %d)", u"Result")
            int64_t rcx_14 = var_38
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            int64_t rcx_15 = var_48
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            goto label_1425f90ff
        
        r15.b = 1
    label_1425f90e2:
        int64_t* rcx_19 = arg_20
        
        if (rcx_19 != 0)
            result = sub_1425f8390(rcx_19, arg3)
            arg3[8].b &= 0xfe
            r12 = zx.q(result.b)
            arg3[8].b |= r15.b
            goto label_1425f90ff
    else
        result_2 = result + 1
    label_1425f90ff:
        int64_t* rcx_20 = arg_20
        
        if (rcx_20 != 0)
            int64_t rdx_8 = *rcx_20
            (*(rdx_8 + 0x10))(rcx_20, rdx_8)
            arg_20 = nullptr
    
    int64_t* rcx_21 = var_58
    
    if (rcx_21 != 0)
        (*(*rcx_21 + 0x10))(rcx_21)
        var_58 = nullptr
    
    int64_t* ppv_3 = ppv
    
    if (ppv_3 != 0)
        (*(*ppv_3 + 0x10))(ppv_3)
    
    if (r12.b != 0 && result_2 s>= 0)
        result.b = 1
        return result
else
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 0x1d)
    int32_t rax = var_40_1 + 0x1d
    var_40_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_48)
    
    int64_t rbx = var_48
    UnDecorator::getReferenceType(rbx, u"XAudio2 was not initialized.", 0x3a)
    var_48 = 0
    int32_t var_40_2 = 0
    sub_1405947f0(&var_48, 0x6a)
    int32_t rax_1 = var_40_2 + 0x6a
    var_40_2 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_48)
    
    int64_t rdi_1 = var_48
    sub_1405a7220(rdi_1, 0x6a, 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
    "cpp", 
        0x6a, 0x3f)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
result.b = 0
return result
