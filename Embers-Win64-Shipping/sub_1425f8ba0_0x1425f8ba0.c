// 函数: sub_1425f8ba0
// 地址: 0x1425f8ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
int64_t var_38

if ((*(arg1 + 0x274) & 1) == 0)
    var_38 = 0
    int32_t var_30 = 0
    sub_1405947f0(&var_38, 0x1d)
    int32_t rax = var_30 + 0x1d
    var_30 = rax
    
    if (rax s> 0)
        sub_140594770(&var_38)
    
    int64_t rbx = var_38
    UnDecorator::getReferenceType(rbx, u"XAudio2 was not initialized.", 0x3a)
    var_38 = 0
    int32_t var_30_1 = 0
    sub_1405947f0(&var_38, 0x6a)
    int32_t rax_1 = var_30_1 + 0x6a
    var_30_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_38)
    
    int64_t rdi_1 = var_38
    sub_1405a7220(rdi_1, 0x6a, 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
    "cpp", 
        0x6a, 0x3f)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx != 0)
        sub_140a74f90(rbx)
    
    int64_t result
    result.b = 0
    return result

int64_t* ppv = nullptr
int64_t* arg_10 = nullptr
HRESULT rax_2 = CoCreateInstance(&data_142e33000, 0, CLSCTX_INPROC_SERVER, &data_142e33010, &ppv)
HRESULT rbx_1 = rax_2
int64_t var_28

if (rax_2 s>= 0)
    int64_t* ppv_1 = ppv
    HRESULT rax_6 = (*(*ppv_1 + 0x18))(ppv_1, 0, 1, &arg_10)
    rbx_1 = rax_6
    int16_t* const rax_8
    
    if (rax_6 s< 0)
        int64_t* rax_7 = sub_1425f7e60(&var_28, rax_6)
        
        if (rax_7[1].d == 0)
            rax_8 = &data_142d40450
        else
            rax_8 = *rax_7
        
        int32_t var_40_2 = 0x169
        goto label_1425f8d60
    
    int64_t* rcx_16 = arg_10
    int32_t arg_8
    HRESULT rax_10 = (*(*rcx_16 + 0x18))(rcx_16, &arg_8)
    rbx_1 = rax_10
    
    if (rax_10 s>= 0)
        *arg2 = arg_8
    else
        int64_t* rax_11 = sub_1425f7e60(&var_28, rax_10)
        
        if (rax_11[1].d == 0)
            rax_8 = &data_142d40450
            int32_t var_40_4 = 0x16d
        else
            rax_8 = *rax_11
            int32_t var_40_3 = 0x16d
        
    label_1425f8d60:
        int16_t* const var_48_2 = rax_8
        sub_140a2e390(&var_38, u"%s -> 0x%X: %s (line: %d)", u"Result")
        int64_t rcx_14 = var_28
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = var_38
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
else
    int64_t* rax_3 = sub_1425f7e60(&var_38, rax_2)
    int16_t* const rax_4
    
    if (rax_3[1].d == 0)
        rax_4 = &data_142d40450
    else
        rax_4 = *rax_3
    
    int32_t var_40_1 = 0x166
    int16_t* const var_48_1 = rax_4
    sub_140a2e390(&var_28, u"%s -> 0x%X: %s (line: %d)", u"Result")
    int64_t rcx_10 = var_38
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
int64_t* rcx_18 = arg_10

if (rcx_18 != 0)
    (*(*rcx_18 + 0x10))(rcx_18)
    arg_10 = nullptr

int64_t* ppv_2 = ppv

if (ppv_2 != 0)
    (*(*ppv_2 + 0x10))(ppv_2)

return zx.q((rbx_1 u>> 0x1f).b) ^ 1
