// 函数: sub_14089b0c0
// 地址: 0x14089b0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_143cea690 = 0
char const* const rax_1

if (arg2 s<= 0x8878001e)
    if (arg2 == 0x8878001e)
        rax_1 = "Control requested is not available"
        goto label_14089b1ce
    
    if (arg2 == 0x80004001)
        rax_1 = "Function not supported"
        goto label_14089b1ce
    
    if (arg2 == 0x80004002)
        rax_1 = "Unsupported interface -- Is DirectX 8.0 or later installed?"
        goto label_14089b1ce
    
    if (arg2 == 0x8007000e)
        rax_1 = "Out of memory"
        goto label_14089b1ce
    
    if (arg2 == 0x80070057)
        rax_1 = "Invalid parameter"
        goto label_14089b1ce
    
    if (arg2 != 0x8878000a)
        goto label_14089b172
    
    rax_1 = "Audio device in use"
    goto label_14089b1ce

char const* const var_18_1

if (arg2 == 0x88780032)
    rax_1 = "Invalid call for the current state"
label_14089b1ce:
    data_143cea680 = rax_1
    var_18_1 = rax_1
    _snprintf(&data_143cea690, 0x400, "%s: %s", arg1)
else
    if (arg2 == 0x88780046)
        rax_1 = "Caller doesn't have priority"
        goto label_14089b1ce
    
    if (arg2 == 0x88780064)
        rax_1 = "Unsupported audio format"
        goto label_14089b1ce
    
    if (arg2 == 0x88780078)
        rax_1 = "No audio device found"
        goto label_14089b1ce
    
    if (arg2 == 0x88780096)
        rax_1 = "Mixing buffer was lost"
        goto label_14089b1ce
    
label_14089b172:
    int64_t var_18
    var_18.d = arg2
    _snprintf(&data_143cea690, 0x400, "%s: Unknown DirectSound error: 0x%x", arg1)
    
    if (data_143cea690 == 0)
        var_18_1 = data_143cea680
        _snprintf(&data_143cea690, 0x400, "%s: %s", arg1)
return sub_14089b010() __tailcall
