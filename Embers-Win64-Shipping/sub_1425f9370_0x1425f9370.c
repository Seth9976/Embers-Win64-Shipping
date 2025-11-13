// 函数: sub_1425f9370
// 地址: 0x1425f9370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if ((*(arg1 + 0x274) & 1) == 0)
    int64_t var_48
    int64_t* rax_2 = sub_140b5e690(arg1 + 0x1e8, &var_48)
    int16_t* rcx_9
    
    if (rax_2[1].d == 0)
        rcx_9 = &data_142d40450
    else
        rcx_9 = *rax_2
    
    HMODULE rax_3 = sub_140b67ab0(rcx_9)
    int64_t rcx_10 = var_48
    *(arg1 + 0x1f0) = rax_3
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* rdi_2
    
    if (*(arg1 + 0x1f0) != 0)
        int32_t rax_5
        
        if (*(arg1 + 0x200) == 0)
            rax_5 = Ordinal_XAudio2_9Redist_1(arg1 + 0x200, 0, 0xffffffff)
        
        if (*(arg1 + 0x200) == 0 && rax_5 s< 0)
            void var_20
            sub_140b21610(0, 
                _vfprintf_p_l(&var_20, 
                    Failed to initialize audio. This may be an issue with your installation", 
                Audio"), nullptr)
            int64_t* var_18
            rdi_2 = var_18
            goto label_1425f951a
        
        sub_14243b4c0()
        *(arg1 + 0x274) |= 1
        result.b = 1
    else
        void var_38
        sub_140b21610(0, 
            _vfprintf_p_l(&var_38, 
                XAudio2.7 is not installed. Make sure you have XAudio 2.7 installed. XAudio 2.7 is available "
        "in the Dir", 
            Audio"), nullptr)
        int64_t* var_30
        rdi_2 = var_30
    label_1425f951a:
        
        if (rdi_2 == 0)
            result.b = 0
        else
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t rbx_2 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rbx_2 == 1)
                    (*(*rdi_2 + 8))(rdi_2, zx.q(rbx_2))
            
            result.b = 0
else
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x1d)
    int32_t rax = var_60_1 + 0x1d
    var_60_1 = rax
    int32_t var_5c
    
    if (rax s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rbx_1 = var_68
    UnDecorator::getReferenceType(rbx_1, u"XAudio2 already initialized.", 0x3a)
    int64_t var_58 = 0
    int32_t var_50_1 = 0
    sub_1405947f0(&var_58, 0x6a)
    int32_t rax_1 = var_50_1 + 0x6a
    var_50_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_58)
    
    int64_t rdi_1 = var_58
    sub_1405a7220(rdi_1, 0x6a, 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
    "cpp", 
        0x6a, 0x3f)
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    if (rbx_1 == 0)
        result.b = 0
    else
        sub_140a74f90(rbx_1)
        result.b = 0

return result
