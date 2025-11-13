// 函数: sub_141fbea90
// 地址: 0x141fbea90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x219].b = 0
int32_t rsi = arg3.d
int64_t* result
int16_t* rcx_1
int16_t* var_18

if (*(arg2 + 8) != 0)
    int64_t* rbx_2 = *(arg1[0x28] + 0x188)
    sub_140a2e390(&var_18, UDemoNetDriver::OnDownloadHeaderComplete: Downloading header failed.", 
        arg3)
    result = (*(*rbx_2 + 0x2e0))(rbx_2, 2, &var_18)
    rcx_1 = var_18
else
    int16_t* var_28 = nullptr
    int32_t var_20_1 = 0
    int64_t* rbx_1
    
    if (sub_141fc18a0(arg1, &var_28) == 0)
        int16_t* const r8_1 = &data_142d40450
        
        if (var_20_1 != 0)
            r8_1 = var_28
        
        rbx_1 = *(arg1[0x28] + 0x188)
        sub_140a2e390(&var_18, 
            UDemoNetDriver::OnDownloadHeaderComplete: ReadPlaybackDemoHeader header failed with error "
        "r8_1)
        goto label_141fbeb5c
    
    if (rsi s< 0 || rsi s>= arg1[0x187].d)
        arg1[0x187].d
        rbx_1 = *(arg1[0x28] + 0x188)
        sub_140a2e390(&var_18, 
            UDemoNetDriver::OnDownloadHeaderComplete: LevelIndex %d not in range of level names of size: "
        "zx.q(rsi))
    label_141fbeb5c:
        result = (*(*rbx_1 + 0x2e0))(rbx_1, 2, &var_18)
        int16_t* rcx_5 = var_18
        
        if (rcx_5 != 0)
            result = sub_140a74f90(rcx_5)
        
        rcx_1 = var_28
    else
        result = sub_141fc00f0(arg1, rsi)
        rcx_1 = var_28

if (rcx_1 == 0)
    return result

return sub_140a74f90(rcx_1)
