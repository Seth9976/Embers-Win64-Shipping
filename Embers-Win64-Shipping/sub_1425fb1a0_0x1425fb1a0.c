// 函数: sub_1425fb1a0
// 地址: 0x1425fb1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char rax_2 = (*(arg1 + 0x274)).b
uint8_t result
int64_t var_68
int32_t var_5c

if ((rax_2 & 1) == 0)
    var_68 = 0
    int32_t var_60_1 = 0
    sub_1405947f0(&var_68, 0x1d)
    int32_t rax_3 = var_60_1 + 0x1d
    var_60_1 = rax_3
    
    if (rax_3 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rdi_1 = var_68
    UnDecorator::getReferenceType(rdi_1, u"XAudio2 was not initialized.", 0x3a)
    var_68 = 0
    int32_t var_60_2 = 0
    sub_1405947f0(&var_68, 0x6a)
    int32_t rax_4 = var_60_2 + 0x6a
    var_60_2 = rax_4
    
    if (rax_4 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rbx_1 = var_68
    sub_1405a7220(rbx_1, 0x6a, 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
    "cpp", 
        0x6a, 0x3f)
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    if (rdi_1 == 0)
        result = 0
    else
        sub_140a74f90(rdi_1)
        result = 0
else if ((rax_2 & 2) == 0)
    uint128_t zmm0 = *arg2
    int64_t var_40
    __builtin_memset(&var_40, 0, 0x12)
    *(arg1 + 0x80) = zmm0
    *(arg1 + 0x90) = arg2[1]
    arg1[0x14] = arg2[2].q
    arg1[3].d = 0
    sub_141c48cb0(&arg1[4])
    arg1[0xd].d = 0
    arg1[0xe] = 0
    arg1[0xf] = 2
    enum WIN32_ERROR rsi_1 = NO_ERROR
    arg1[3].d = arg1[0x10].d
    *(arg1 + 0x7c) = *(arg1 + 0x84)
    arg1[0xf].d = arg1[0x11].d
    arg1[0xe] = arg1[0x12]
    int32_t var_58
    
    if ((*(*arg1 + 0x60))(arg1, &var_58) == 0 || var_58 u<= 0)
        *(arg1 + 0x7c) = *(arg1 + 0x84)
        var_68.d = 0
        var_68:4.d = 1
        arg1[0xb].d = 2
        sub_1405c4a90(&arg1[0xa], 2, *(arg1 + 0x5c))
        *arg1[0xa] = var_68
        *(arg1 + 0x44) = arg1[0x13].d
        arg1[8].d = 2
        arg1[9].d = 1
    label_1425fb603:
        *(arg1 + 0x274) |= 2
        arg1[0xd].d = 1
    label_1425fb611:
        
        if (rsi_1 s>= NO_ERROR)
            result = (rsi_1 u>> 0x1f).b ^ 1
        else
            int64_t rbx_3 = arg1[0x41]
            (*(*arg1 + 0x98))(arg1)
            
            if (rbx_3 != 0)
                result = (rsi_1 u>> 0x1f).b ^ 1
            else
                int64_t rcx_35 = *sub_1425f8980(&var_68, arg1[0x3d])
                arg1[0x3d] = rcx_35
                rcx_35.b = sub_140b5b8a0(rcx_35.d, 0) == 0
                
                if ((*(arg1 + 0x1ec) != rbx_3.d | rcx_35.b) == 0)
                    result = (rsi_1 u>> 0x1f).b ^ 1
                else
                    (*(*arg1 + 0x50))(arg1)
                    
                    if ((*(*arg1 + 0x38))(arg1) == 0)
                        result = (rsi_1 u>> 0x1f).b ^ 1
                    else
                        result = (*(*arg1 + 0x90))(arg1, arg2)
    else if ((*(*arg1 + 0x68))(arg1, zx.q(arg1[3].d), &arg1[4]) == 0)
        result = 0
    else
        if (*(arg2 + 0x1c) != 0)
            sub_140597df0(&arg1[0x49], &arg1[6])
        
        int64_t* rcx_20 = arg1[0x40]
        int16_t var_88
        var_88.d = 0
        enum WIN32_ERROR rax_15 = (*(*rcx_20 + 0x38))(rcx_20, &arg1[0x41], zx.q(arg1[8].d), 
            zx.q(*(arg1 + 0x44)), var_88, 0, 0, 6)
        rsi_1 = rax_15
        int64_t var_50
        
        if (rax_15 s< NO_ERROR)
            int64_t* rax_16 = sub_1425f7e60(&var_68, rax_15)
            int16_t* const rax_17
            
            if (rax_16[1].d == 0)
                rax_17 = &data_142d40450
            else
                rax_17 = *rax_16
            
            int64_t var_80_1
            var_80_1.d = 0x37f
            var_88.q = rax_17
            sub_140a2e390(&var_50, u"%s -> 0x%X: %s (line: %d)", u"Result")
            int64_t rcx_23 = var_68
            
            if (rcx_23 != 0)
                sub_140a74f90(rcx_23)
            
            int64_t rcx_24 = var_50
            
            if (rcx_24 != 0)
                sub_140a74f90(rcx_24)
            
            goto label_1425fb611
        
        int64_t* rcx_25 = arg1[0x40]
        (*(*rcx_25 + 0x40))(rcx_25)
        uint32_t rdx_9 = zx.d(arg1[8].w)
        int32_t rcx_26 = *(arg2 + 0x18)
        int512_t zmm0_1
        zmm0_1.o = 0x40000000
        var_40.w = 3
        int32_t rax_20 = rdx_9 * rcx_26
        var_40:2.w = rdx_9.w
        var_40:4.d = rcx_26
        rdx_9.w <<= 2
        int64_t var_38
        var_38.d = rax_20 << 2
        var_38:6.w = 0x20
        var_38:4.w = rdx_9.w
        int32_t var_70_1
        var_70_1.q = 0
        var_88.d = 0x40000000
        enum WIN32_ERROR rax_23 = (*(*arg1[0x40] + 0x28))(zmm0_1, &arg1[0x42], &var_40, 2, var_88, 
            &arg1[0x43], 0, var_70_1)
        rsi_1 = rax_23
        
        if (rax_23 s>= NO_ERROR)
            goto label_1425fb603
        
        int64_t* rax_24 = sub_1425f7e60(&var_50, rax_23)
        int16_t* const rax_25
        
        if (rax_24[1].d == 0)
            rax_25 = &data_142d40450
        else
            rax_25 = *rax_24
        
        void* var_80_2
        var_80_2.d = 0x38e
        var_88.q = rax_25
        sub_140a2e390(&var_68, u"%s -> 0x%X: %s (line: %d)", u"Result")
        int64_t rcx_30 = var_50
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)
        
        int64_t rcx_31 = var_68
        
        if (rcx_31 != 0)
            sub_140a74f90(rcx_31)
        
        result = 0
else
    var_68 = 0
    int32_t var_60_3 = 0
    sub_1405947f0(&var_68, 0x25)
    int32_t rax_5 = var_60_3 + 0x25
    var_60_3 = rax_5
    
    if (rax_5 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rdi_2 = var_68
    UnDecorator::getReferenceType(rdi_2, u"XAudio2 audio stream already opened.", 0x4a)
    var_68 = 0
    int32_t var_60_4 = 0
    sub_1405947f0(&var_68, 0x6a)
    int32_t rax_6 = var_60_4 + 0x6a
    var_60_4 = rax_6
    
    if (rax_6 s> var_5c)
        sub_140594770(&var_68)
    
    int64_t rbx_2 = var_68
    sub_1405a7220(rbx_2, 0x6a, 
        "D:"
    "/Build/++UE4/Sync/Engine/Source/Runtime/Windows/AudioMixerXAudio2/Private/AudioMixerPlatformXAudio2."
    "cpp", 
        0x6a, 0x3f)
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    if (rdi_2 == 0)
        result = 0
    else
        sub_140a74f90(rdi_2)
        result = 0
__security_check_cookie(rax_1 ^ &var_a8)
return result
