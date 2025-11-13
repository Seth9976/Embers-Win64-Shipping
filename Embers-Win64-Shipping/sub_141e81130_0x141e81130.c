// 函数: sub_141e81130
// 地址: 0x141e81130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af2b60()
char rax = sub_140b21a10(&data_143dbb3f0, u"AudioMixer")
sub_140af2b60()
char rax_1 = sub_140b21a10(&data_143dbb3f0, u"NoAudioMixer")
sub_140af2b60()
char rax_2 = sub_140b21a10(&data_143dbb3f0, u"DeterministicAudio")
*(arg1 + 0x178) = rax

if (rax != 0)
    if (rax_1 == 0)
        sub_140af5b90(data_143ddb400, Audio", AudioMixerModuleName", arg1 + 0x78, &data_143de5780)
    else
        sub_140af5b90(data_143ddb400, Audio", AudioDeviceModuleName", arg1 + 0x68, &data_143de5780)
        *(arg1 + 0x178) = 0
else if (rax_1 != 0)
    sub_140af5b90(data_143ddb400, u"Audio", u"AudioDeviceModuleName", arg1 + 0x68, &data_143de5780)
    *(arg1 + 0x178) = 0
else
    sub_140af2fd0(data_143ddb400, u"Audio", u"UseAudioMixer", arg1 + 0x178, &data_143de5780)
    sub_140af5b90(data_143ddb400, u"Audio", u"AudioDeviceModuleName", arg1 + 0x68, &data_143de5780)
    sub_140af5b90(data_143ddb400, u"Audio", u"AudioMixerModuleName", arg1 + 0x78, &data_143de5780)

sub_140af2fd0(data_143ddb400, u"Audio", u"OnlyToggleAudioMixerOnce", arg1 + 0x17a, &data_143de5780)
uint64_t result
bool cond:2
void arg_8
TEB* gsbase

if (rax_2 == 0)
    uint64_t r14_1 = zx.q(data_14401b1a0)
    
    if (*(arg1 + 0x178) != 0)
        result = zx.q(*(arg1 + 0x80))
        
        if (result.d != 0 && result.d - 1 s> 0)
            int64_t rbx_3 = *sub_140b58260(&arg_8, *(arg1 + 0x78), 1)
            j_sub_140b3db50()
            result = sub_140b407e0(&data_143de7d78, rbx_3)
            *(arg1 + 0x60) = result
            
            if (result == 0)
                *(arg1 + 0x178) = 0
            else
                if (data_143f3a060 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                    _Init_thread_header(&data_143f3a060)
                    
                    if (data_143f3a060 == 0xffffffff)
                        int64_t* rcx_18 = data_143db18d0
                        
                        if (rcx_18 == 0)
                            sub_140a53c40()
                            rcx_18 = data_143db18d0
                        
                        int64_t r8_3
                        r8_3.b = 1
                        data_143f3a058 = (*(*rcx_18 + 0xb0))(rcx_18, u"au.IsUsingAudioMixer", r8_3)
                        _Init_thread_footer(&data_143f3a060)
                
                sub_1405a55d0(data_143f3a058, 1, 0)
    
    int64_t rcx_15 = *(arg1 + 0x60)
    cond:2 = rcx_15 != 0
    
    if (rcx_15 == 0)
        int32_t rdx_6 = *(arg1 + 0x70)
        result = zx.q(rdx_6 - 1)
        
        if (rdx_6 == 0)
            result = zx.q(rcx_15.d)
        
        if (result.d s> 0)
            int16_t* rdx_7
            
            if (rdx_6 == 0)
                rdx_7 = &data_142d40450
            else
                rdx_7 = *(arg1 + 0x68)
            
            int64_t rbx_4 = *sub_140b58260(&arg_8, rdx_7, 1)
            j_sub_140b3db50()
            *(arg1 + 0x60) = sub_140b407e0(&data_143de7d78, rbx_4)
            
            if (data_143f3a070 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (r14_1 << 3))))
                _Init_thread_header(&data_143f3a070)
                
                if (data_143f3a070 == 0xffffffff)
                    int64_t* rcx_16 = data_143db18d0
                    
                    if (rcx_16 == 0)
                        sub_140a53c40()
                        rcx_16 = data_143db18d0
                    
                    int64_t r8_1
                    r8_1.b = 1
                    data_143f3a068 = (*(*rcx_16 + 0xb0))(rcx_16, u"au.IsUsingAudioMixer", r8_1)
                    _Init_thread_footer(&data_143f3a070)
            
            sub_1405a55d0(data_143f3a068, 0, 0)
            rcx_15 = *(arg1 + 0x60)
        
        cond:2 = rcx_15 != 0
else
    int64_t rbx_1 = *sub_140b58260(&arg_8, u"NonRealtimeAudioRenderer", 1)
    j_sub_140b3db50()
    int64_t rax_4 = sub_140b407e0(&data_143de7d78, rbx_1)
    uint64_t rdx_2 = zx.q(data_14401b1a0)
    *(arg1 + 0x60) = rax_4
    
    if (data_143f3a050 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx_2 << 3))))
        _Init_thread_header(&data_143f3a050)
        
        if (data_143f3a050 == 0xffffffff)
            int64_t* rcx_17 = data_143db18d0
            
            if (rcx_17 == 0)
                sub_140a53c40()
                rcx_17 = data_143db18d0
            
            int64_t r8_2
            r8_2.b = 1
            data_143f3a048 = (*(*rcx_17 + 0xb0))(rcx_17, u"au.IsUsingAudioMixer", r8_2)
            _Init_thread_footer(&data_143f3a050)
    
    int64_t* rbx_2 = data_143f3a048
    int16_t* var_28
    sub_140a2e390(&var_28, u"%d", 2)
    int16_t* const rdx_3 = &data_142d40450
    int32_t var_20
    
    if (var_20 != 0)
        rdx_3 = var_28
    
    (*(*rbx_2 + 0x80))(rbx_2, rdx_3, 0)
    int16_t* rcx_8 = var_28
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    cond:2 = *(arg1 + 0x60) != 0
    *(arg1 + 0x178) = 1
result.b = cond:2
return result
