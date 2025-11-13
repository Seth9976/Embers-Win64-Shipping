// 函数: sub_1428332a4
// 地址: 0x1428332a4
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f89b70 == 0)
    sub_142831ee8()

int64_t* result
int64_t r8
result, r8 = malloc(0x1d0)

if (result != 0)
    memset(result, 0, 0x1d0)
    *result = arg1
    *(result + 0xc) = sub_142831210(arg1, "synth.reverb.active", "yes")
    *(result + 0xd) = sub_142831210(arg1, "synth.chorus.active", "yes")
    *(result + 0xe) = sub_142831210(arg1, "synth.verbose", "yes")
    *(result + 0xf) = sub_142831210(arg1, "synth.dump", "yes")
    sub_1428309fc(arg1, "synth.polyphony", &result[1])
    sub_142830a98(arg1, "synth.sample-rate", &result[2])
    sub_1428309fc(arg1, "synth.midi-channels", &result[3])
    sub_1428309fc(arg1, "synth.audio-channels", result + 0x1c)
    sub_1428309fc(arg1, "synth.audio-groups", &result[4])
    sub_1428309fc(arg1, "synth.effects-channels", result + 0x24)
    sub_142830a98(arg1, "synth.gain", &result[0xa])
    int32_t i_1
    sub_1428309fc(arg1, "synth.min-note-length", &i_1)
    result[0x39].d = (int.q(_mm_cvtepi32_pd(zx.q(i_1)) f* result[2] f/ 1000.0)).d
    sub_142830ca0(arg1, "synth.gain", 0x3fc99999a0000000, zx.o(0), 0x4024000000000000, 0, 
        sub_142833104, result)
    sub_142830b78(arg1, "synth.polyphony", result[1].d, 0x10, 0x1000, 0, sub_14283311c, result)
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(result[3].d)
    int32_t rdx_2 = temp0_2 & 0xf
    int32_t rax_7 = temp1_1 + rdx_2
    uint64_t r8_11 = zx.q(rax_7 s>> 4)
    
    if ((rax_7 & 0xf) != rdx_2)
        int32_t r8_13 = (r8_11.d + 1) << 4
        result[3].d = r8_13
        r8_11 = sub_142833a04(2, 
            "Requested number of MIDI channels is not a multiple of 16. I'll increase the number of "
        "channels to the next multiple.", 
            sub_142830fe8(arg1, "synth.midi-channels", r8_13))
    
    if (*(result + 0x1c) s< 1)
        r8_11 = sub_142833a04(2, 
            "Requested number of audio channels is smaller than 1. Changing this setting to 1.", 
            r8_11)
        *(result + 0x1c) = 1
    else if (*(result + 0x1c) s> 0x80)
        r8_11 = sub_142833a04(2, 
            "Requested number of audio channels is too big (%d). Limiting this setting to 128.", 
            zx.q(*(result + 0x1c)))
        *(result + 0x1c) = 0x80
    
    int32_t rcx_17 = result[4].d
    
    if (rcx_17 s< 1)
        sub_142833a04(2, 
            "Requested number of audio groups is smaller than 1. Changing this setting to 1.", 
            r8_11)
        rcx_17 = 1
        result[4].d = 1
    else if (rcx_17 s> 0x80)
        sub_142833a04(2, 
            "Requested number of audio groups is too big (%d). Limiting this setting to 128.", 
            zx.q(rcx_17))
        rcx_17 = 0x80
        result[4].d = 0x80
    
    if (*(result + 0x24) != 2)
        sub_142833a04(2, "Invalid number of effects channels (%d).Setting effects channels to 2.", 
            zx.q(*(result + 0x24)))
        rcx_17 = result[4].d
        *(result + 0x24) = 2
    
    int32_t rax_9 = *(result + 0x1c)
    result[5] = 1
    
    if (rcx_17 s> rax_9)
        rax_9 = rcx_17
    
    result[7] = 0
    result[0xe].d = 0
    result[0x37] = 0
    result[0xf].d = rax_9
    int64_t* rax_10
    int64_t r8_18
    rax_10, r8_18 = sub_14283727c()
    
    if (rax_10 != 0)
        sub_142831878(result, rax_10)
    else
        sub_142833a04(2, "Failed to create the default SoundFont loader", r8_18)
    
    int64_t rax_11
    int64_t r8_19
    rax_11, r8_19 = malloc(sx.q(result[3].d) << 3)
    result[0xb] = rax_11
    
    if (rax_11 == 0)
    label_1428338e5:
        sub_142833a04(1, "Out of memory", r8_19)
    else
        int32_t i = 0
        i_1 = 0
        
        if (result[3].d s> 0)
            do
                *(result[0xb] + (sx.q(i_1) << 3)) = sub_14283e328(result, i)
                int64_t i_4 = sx.q(i_1)
                
                if (*(result[0xb] + (i_4 << 3)) == 0)
                    goto label_1428338ed
                
                i = i_4.d + 1
                i_1 = i
            while (i s< result[3].d)
        
        int64_t rax_14 = sx.q(result[1].d)
        *(result + 0x64) = rax_14.d
        int64_t rax_15 = malloc(rax_14 << 3)
        result[0xd] = rax_15
        
        if (rax_15 != 0)
            i_1 = 0
            
            if (*(result + 0x64) s> 0)
                int64_t i_5
                
                do
                    *(result[0xd] + (sx.q(i_1) << 3)) = sub_14283af74(_mm_cvtpd_ps(zx.o(result[2])))
                    i_5 = sx.q(i_1)
                    
                    if (*(result[0xd] + (i_5 << 3)) == 0)
                        goto label_1428338ed
                    
                    i_1 = i_5.d + 1
                while (i_5.d + 1 s< *(result + 0x64))
            
            int64_t _Size = sx.q(result[0xf].d) << 3
            __builtin_memset(&result[0x10], 0, 0x20)
            int64_t rax_18 = malloc(_Size)
            int64_t _Size_1 = sx.q(result[0xf].d) << 3
            result[0x10] = rax_18
            int64_t rax_19
            rax_19, r8_19 = malloc(_Size_1)
            int64_t rcx_28 = result[0x10]
            result[0x11] = rax_19
            
            if (rcx_28 != 0 && rax_19 != 0)
                memset(rcx_28, 0, sx.q(result[0xf].d) << 3)
                memset(result[0x11], 0, sx.q(result[0xf].d) << 3)
                i_1 = 0
                
                if (result[0xf].d s> 0)
                    int64_t i_2
                    
                    do
                        *(result[0x10] + (sx.q(i_1) << 3)) = malloc(0x100)
                        int64_t rax_21
                        rax_21, r8_19 = malloc(0x100)
                        *(result[0x11] + (sx.q(i_1) << 3)) = rax_21
                        i_2 = sx.q(i_1)
                        
                        if (*(result[0x10] + (i_2 << 3)) == 0)
                            goto label_1428338e5_1
                        
                        if (*(result[0x11] + (i_2 << 3)) == 0)
                            goto label_1428338e5_1
                        
                        i_1 = i_2.d + 1
                    while (i_2.d + 1 s< result[0xf].d)
                
                int64_t rax_24 = malloc(sx.q(*(result + 0x24)) << 3)
                int64_t _Size_2 = sx.q(*(result + 0x24)) << 3
                result[0x12] = rax_24
                int64_t rax_25
                rax_25, r8_19 = malloc(_Size_2)
                int64_t rcx_36 = result[0x12]
                result[0x13] = rax_25
                
                if (rcx_36 != 0 && rax_25 != 0)
                    memset(rcx_36, 0, 0x10)
                    memset(result[0x13], 0, 0x10)
                    i_1 = 0
                    
                    if (*(result + 0x24) s> 0)
                        int64_t i_3
                        
                        do
                            *(result[0x12] + (sx.q(i_1) << 3)) = malloc(0x100)
                            int64_t rax_27
                            rax_27, r8_19 = malloc(0x100)
                            *(result[0x13] + (sx.q(i_1) << 3)) = rax_27
                            i_3 = sx.q(i_1)
                            
                            if (*(result[0x12] + (i_3 << 3)) == 0)
                                goto label_1428338e5_1
                            
                            if (*(result[0x13] + (i_3 << 3)) == 0)
                                goto label_1428338e5_1
                            
                            i_1 = i_3.d + 1
                        while (i_3.d + 1 s< *(result + 0x24))
                    
                    result[0x16] = 0x40
                    int32_t* rax_30
                    rax_30, r8_19 = sub_14283b6d0()
                    result[0x14] = rax_30
                    
                    if (rax_30 != 0)
                        sub_142832c48(result, 0x3fc99999a0000000, zx.o(0), 0x3fe0000000000000, 
                            0x3fecccccc0000000)
                        int32_t* rax_31
                        rax_31, r8_19 = sub_14283db70(_mm_cvtpd_ps(zx.o(result[2])))
                        result[0x15] = rax_31
                        
                        if (rax_31 != 0)
                            if (sub_142831210(arg1, "synth.drums-channel.active", "yes") != 0)
                                sub_142831b9c(result, 9, 0x80)
                            
                            return result
            
        label_1428338e5_1:
            sub_142833a04(1, "Out of memory", r8_19)
    
label_1428338ed:
    sub_142831534(result)
else
    sub_142833a04((result + 1).d, "Out of memory", r8)

return nullptr
