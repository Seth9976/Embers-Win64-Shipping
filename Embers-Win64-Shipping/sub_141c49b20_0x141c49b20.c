// 函数: sub_141c49b20
// 地址: 0x141c49b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = arg1
*arg1 = 0xbb80
arg1[1] = 0x400
arg1[2] = 2
*(arg1 + 0xc) = 0x20
void* rcx = data_143ddb400
int32_t rsi = 0
uint64_t _String_5 = 0
int32_t var_10 = 0
int16_t* const _String_4 = &data_142d40450

if (sub_140af5b90(rcx, arg2, u"AudioSampleRate", &_String_5, &data_143de5780) != 0)
    int16_t* const _String = &data_142d40450
    
    if (var_10 != 0)
        _String = _String_5
    
    int32_t rax_1 = _wtoi(_String)
    int32_t rcx_1 = 0x1f40
    
    if (rax_1 s>= 0x1f40)
        rcx_1 = rax_1
    
    *result = rcx_1

if (sub_140af5b90(data_143ddb400, arg2, AudioCallbackBufferFrameSize", &_String_5, &data_143de5780)
        != 0)
    int16_t* const _String_1 = &data_142d40450
    
    if (var_10 != 0)
        _String_1 = _String_5
    
    int32_t rax_3 = _wtoi(_String_1)
    int32_t rcx_3 = 0x100
    
    if (rax_3 s>= 0x100)
        rcx_3 = rax_3
    
    result[1] = rcx_3

if (sub_140af5b90(data_143ddb400, arg2, AudioNumBuffersToEnqueue", &_String_5, &data_143de5780)
        != 0)
    int16_t* const _String_2 = &data_142d40450
    
    if (var_10 != 0)
        _String_2 = _String_5
    
    int32_t rax_5 = _wtoi(_String_2)
    int32_t rcx_5 = 1
    
    if (rax_5 s>= 1)
        rcx_5 = rax_5
    
    result[2] = rcx_5

if (sub_140af5b90(data_143ddb400, arg2, u"AudioMaxChannels", &_String_5, &data_143de5780) != 0)
    int16_t* const _String_3 = &data_142d40450
    
    if (var_10 != 0)
        _String_3 = _String_5
    
    int32_t rax_7 = _wtoi(_String_3)
    int32_t rcx_7 = 0
    
    if (rax_7 s>= 0)
        rcx_7 = rax_7
    
    result[3] = rcx_7

if (sub_140af5b90(data_143ddb400, arg2, u"AudioNumSourceWorkers", &_String_5, &data_143de5780) != 0)
    if (var_10 != 0)
        _String_4 = _String_5
    
    int32_t rax_9 = _wtoi(_String_4)
    
    if (rax_9 s>= 0)
        rsi = rax_9
    
    result[4] = rsi

uint64_t _String_6 = _String_5

if (_String_6 != 0)
    sub_140a74f90(_String_6)

return result
