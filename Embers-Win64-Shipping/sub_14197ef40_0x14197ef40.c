// 函数: sub_14197ef40
// 地址: 0x14197ef40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg1 u> 0x1f || not(test_bit(0xc8451800, arg1)))
        && *(&data_143f025f0 + sx.q(arg1) * 0x14) != data_143f025b0)
    return 0

int64_t rax_3

if (arg1 u> 0x1b || not(test_bit(0x857c041, arg1)))
    rax_3 = sx.q(arg1)

int32_t rcx_2

if ((arg1 u> 0x1b || not(test_bit(0x857c041, arg1)))
        && ((*(rax_3 * 0x14 + &data_143f025fc) u>> 2).b & 1) == 0)
    rcx_2 = data_1439c8294
    
    if (rcx_2 s< 0)
        void* rcx_3 = data_143ddb400
        data_1439c8294 = 2
        char rax_8 = sub_140af3c10(rcx_3, /Script/IOSRuntimeSettings.IOSRuntimeSettings", 
            MaxShaderLanguageVersion", &data_1439c8294, &data_143de5780)
        int32_t rcx_4 = data_1439c8294
        
        if (rax_8 == 0)
            rcx_4 = 0
        
        if (rcx_4 s<= 2)
            rcx_4 = 2
        
        data_1439c8294 = rcx_4
        return zx.q(rcx_4)
else
    rcx_2 = data_1439c8290
    
    if (rcx_2 s< 0)
        void* rcx_1 = data_143ddb400
        data_1439c8290 = 2
        char rax_6 = sub_140af3c10(rcx_1, /Script/MacTargetPlatform.MacTargetSettings", 
            MaxShaderLanguageVersion", &data_1439c8290, &data_143de5780)
        rcx_2 = data_1439c8290
        
        if (rax_6 == 0)
            rcx_2 = 3
        
        if (rcx_2 s<= 3)
            rcx_2 = 3
        
        data_1439c8290 = rcx_2

return zx.q(rcx_2)
