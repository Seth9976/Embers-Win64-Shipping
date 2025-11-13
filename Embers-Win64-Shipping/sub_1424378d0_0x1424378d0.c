// 函数: sub_1424378d0
// 地址: 0x1424378d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f5ea50 != 0)
    return zx.q(data_143f5ea54)

TEB* gsbase

if (data_143f5ea68 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5ea68)
    
    if (data_143f5ea68 == 0xffffffff)
        atexit(&data_142d11750)
        _Init_thread_footer(&data_143f5ea68)

int32_t result

if (sub_140af5b90(data_143ddb400, /Script/Engine.AudioSettings", VoiPSampleRate", &data_143f5ea58, 
        &data_143de5780) == 0)
    result = 0x3e80
    data_143f5ea54 = 0x3e80
else
    int16_t* var_18 = nullptr
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0xb)
    int32_t rdi_1 = var_10_1 + 0xb
    
    if (rdi_1 s> 0)
        sub_140594770(&var_18)
    
    int16_t* rsi_1 = var_18
    UnDecorator::getReferenceType(rsi_1, u"Low16000Hz", 0x16)
    int16_t* const rbx_1 = &data_142d40450
    int16_t* const r8_1 = &data_142d40450
    int16_t* const rax_4 = &data_142d40450
    
    if (rdi_1 != 0)
        r8_1 = rsi_1
    
    if (data_143f5ea60 != 0)
        rax_4 = data_143f5ea58
    
    void* r8_2 = r8_1 - rax_4
    uint32_t i
    uint32_t rdi_2
    
    do
        rdi_2 = zx.d(*rax_4)
        i = zx.d(*(rax_4 + r8_2))
        
        if (rdi_2 != i)
            break
        
        rax_4 = &rax_4[1]
    while (i != 0)
    
    if (rsi_1 != 0)
        sub_140a74f90(rsi_1)
    
    if (rdi_2 - i != 0)
        var_18 = nullptr
        int32_t var_10_2 = 0
        sub_1405947f0(&var_18, 0xe)
        int32_t rdi_4 = var_10_2 + 0xe
        
        if (rdi_4 s> 0)
            sub_140594770(&var_18)
        
        int16_t* rsi_2 = var_18
        UnDecorator::getReferenceType(rsi_2, u"Normal24000Hz", 0x1c)
        int16_t* rdx_3 = &data_142d40450
        
        if (rdi_4 != 0)
            rdx_3 = rsi_2
        
        if (data_143f5ea60 != 0)
            rbx_1 = data_143f5ea58
        
        int64_t rdx_4 = rdx_3 - rbx_1
        uint32_t i_1
        uint32_t rdi_5
        
        do
            rdi_5 = zx.d(*rbx_1)
            i_1 = zx.d(*(rbx_1 + rdx_4))
            
            if (rdi_5 != i_1)
                break
            
            rbx_1 = &rbx_1[1]
        while (i_1 != 0)
        
        if (rsi_2 != 0)
            sub_140a74f90(rsi_2)
        
        if (rdi_5 - i_1 != 0)
            result = data_143f5ea54
            
            if (result s<= 0)
                result = 0x3e80
                data_143f5ea54 = 0x3e80
            else
                data_143f5ea50 = 1
        else
            result = 0x5dc0
            data_143f5ea50 = 1
            data_143f5ea54 = 0x5dc0
    else
        result = 0x3e80
        data_143f5ea50 = 1
        data_143f5ea54 = 0x3e80

return result
