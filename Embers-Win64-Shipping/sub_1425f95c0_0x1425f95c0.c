// 函数: sub_1425f95c0
// 地址: 0x1425f95c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_48 = zmm6
void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t i = 0
int32_t var_108 = 0
int32_t result

if ((*(*arg1 + 0x60))(arg1, &var_108).b == 0)
    result.b = 0
else
    bool z_1
    
    if (0 == arg1[0x3b].d)
        arg1[0x3b].d = 0
        z_1 = true
    else
        arg1[0x3b].d
        z_1 = false
    
    if (z_1 || var_108 != 0)
        bool z_2
        
        if (0 == arg1[0x3b].d)
            arg1[0x3b].d = 0
            z_2 = true
        else
            arg1[0x3b].d
            z_2 = false
        
        if (z_2)
            if ((*(arg1 + 0x274) & 1) != 0)
                EnterCriticalSection(&arg1[0x21])
                arg1[0x26].d
                arg1[0x26].d = 1
                int64_t* rcx_2 = arg1[0x42]
                
                if (rcx_2 != 0)
                    (*(*rcx_2 + 0xb0))(rcx_2)
                    int64_t* rcx_3 = arg1[0x42]
                    
                    if (rcx_3 != 0)
                        (*(*rcx_3 + 0x90))(rcx_3)
                        arg1[0x42] = 0
                
                int64_t* rcx_4 = arg1[0x41]
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x90))(rcx_4)
                    arg1[0x41] = 0
                
                arg1[0x26].d
                arg1[0x26].d = 0
                
                if (arg1 != -0x108)
                    LeaveCriticalSection(&arg1[0x21])
                
                goto label_1425f96cb
            
            result.b = 1
        else
            sub_141c494b0(arg1)
        label_1425f96cb:
            
            if (var_108 u<= 0)
                sub_141c49140(arg1)
                result.b = 1
            else
                int64_t* rcx_6 = arg1[0x40]
                
                if (rcx_6 != 0)
                    (*(*rcx_6 + 0x10))(rcx_6)
                    arg1[0x40] = 0
                
                int32_t r13_1 = -1
                
                if (Ordinal_XAudio2_9Redist_1(&arg1[0x40], 0, 0xffffffff) s>= 0)
                    int16_t* const r14_1 = &data_142d40450
                    
                    if (arg2[1].d s> 1)
                        int64_t var_f8 = 0
                        int64_t var_f0
                        __builtin_memset(&var_f0, 0, 0x14)
                        int64_t var_c8_1 = 0
                        int64_t var_c0_1 = 0
                        sub_141c48cb0(&var_f8)
                        int32_t rbx_2 = 0
                        int16_t* var_e8
                        
                        if (var_108 u> 0)
                            do
                                (*(*arg1 + 0x68))(arg1, zx.q(rbx_2), &var_f8)
                                int16_t* rdx_2
                                
                                if (arg2[1].d == 0)
                                    rdx_2 = &data_142d40450
                                else
                                    rdx_2 = *arg2
                                
                                int16_t* const rcx_11 = &data_142d40450
                                int32_t var_e0
                                
                                if (var_e0 != 0)
                                    rcx_11 = var_e8
                                
                                if (sub_140a54510(rcx_11, rdx_2) == 0)
                                    r13_1 = rbx_2
                                    break
                                
                                rbx_2 += 1
                            while (rbx_2 u< var_108)
                        
                        if (var_c8_1 != 0)
                            sub_140a74f90(var_c8_1)
                        
                        if (var_e8 != 0)
                            sub_140a74f90(var_e8)
                        
                        int64_t rcx_14 = var_f8
                        
                        if (rcx_14 != 0)
                            sub_140a74f90(rcx_14)
                    
                    arg1[3].d = r13_1
                    (*(*arg1 + 0x68))(arg1, zx.q(r13_1), &arg1[4])
                    int64_t* rcx_16 = arg1[0x40]
                    int32_t rax_14 = (*(*rcx_16 + 0x38))(rcx_16, &arg1[0x41], zx.q(arg1[8].d), 
                        zx.q(*(arg1 + 0x44)), 0, 0, 0, 6)
                    int64_t* r10_1 = arg1[0x40]
                    int64_t rcx_22
                    
                    if (rax_14 s< 0)
                        int64_t var_a8
                        int16_t** rax_17 = sub_1425f7e60(&var_a8, 
                            (*(*r10_1 + 0x38))(r10_1, &arg1[0x41], zx.q(arg1[8].d), 
                                zx.q(*(arg1 + 0x44)), 0, 0, 0, 6))
                        
                        if (rax_17[1].d != 0)
                            r14_1 = *rax_17
                        
                        int64_t* rcx_19 = arg1[0x40]
                        (*(*rcx_19 + 0x38))(rcx_19, &arg1[0x41], zx.q(arg1[8].d), 
                            zx.q(*(arg1 + 0x44)), 0, 0, 0, 6)
                        int64_t var_120_3
                        var_120_3.d = 0x49b
                        int32_t var_128_3
                        var_128_3.q = r14_1
                        int64_t var_98
                        sub_140a2e390(&var_98, %s -> 0x%X: %s (line: %d)", 
                        "XAudio2System->CreateMasteringVoice( &OutputAudioStreamMasteringVoice, "
                        "AudioStreamInfo.DeviceInfo.NumChannels, AudioStreamInfo.DeviceInfo."
                        "SampleRate, 0, nullptr, nullp")
                        int64_t rcx_21 = var_a8
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        rcx_22 = var_98
                        goto label_1425f98c8
                    
                    uint32_t rdx_8 = zx.d(arg1[8].w)
                    int32_t rcx_25 = arg1[0x13].d
                    int16_t var_68 = 3
                    int16_t var_66_1 = rdx_8.w
                    int32_t rax_21 = rdx_8 * rcx_25
                    rdx_8.w <<= 2
                    int32_t var_64_1 = rcx_25
                    int16_t var_5c_1 = rdx_8.w
                    int32_t var_110_1
                    var_110_1.q = 0
                    int32_t var_60_1 = rax_21 << 2
                    int32_t var_5a_1 = 0x20
                    
                    if ((*(*r10_1 + 0x28))(r10_1, &arg1[0x42], &var_68, 2, 0x40000000, &arg1[0x43], 
                            0, var_110_1) s>= 0)
                        int32_t rbx_5 = *(arg1 + 0x84) * arg1[8].d
                        
                        if (arg1[0x16].d s<= 0)
                            result.b = 1
                        else
                            do
                                sub_141c48d90(sx.q(i) * 0x38 + arg1[0x15], rbx_5)
                                i += 1
                            while (i s< arg1[0x16].d)
                            
                            result.b = 1
                    else
                        int64_t* rcx_27 = arg1[0x40]
                        var_110_1.q = 0
                        int64_t var_88
                        int16_t** rax_26 = sub_1425f7e60(&var_88, 
                            (*(*rcx_27 + 0x28))(rcx_27, &arg1[0x42], &var_68, 2, 0x40000000, 
                                &arg1[0x43], 0, var_110_1))
                        
                        if (rax_26[1].d != 0)
                            r14_1 = *rax_26
                        
                        int64_t* rcx_29 = arg1[0x40]
                        var_110_1.q = 0
                        (*(*rcx_29 + 0x28))(rcx_29, &arg1[0x42], &var_68, 2, 0x40000000, 
                            &arg1[0x43], 0, var_110_1)
                        void* var_120_6
                        var_120_6.d = 0x4a8
                        int32_t var_128_6
                        var_128_6.q = r14_1
                        int64_t var_78
                        sub_140a2e390(&var_78, %s -> 0x%X: %s (line: %d)", 
                        "XAudio2System->CreateSourceVoice(&OutputAudioStreamSourceVoice, &Format, "
                        "XAUDIO2_VOICE_NOPITCH,")
                        int64_t rcx_31 = var_88
                        
                        if (rcx_31 != 0)
                            sub_140a74f90(rcx_31)
                        
                        rcx_22 = var_78
                    label_1425f98c8:
                        
                        if (rcx_22 == 0)
                            result.b = 0
                        else
                            sub_140a74f90(rcx_22)
                            result.b = 0
                else
                    arg1[0x40] = 0
                    sub_141c49140(arg1)
                    result.b = 1
    else
        result.b = 1

__security_check_cookie(rax_1 ^ &var_148)
return result
