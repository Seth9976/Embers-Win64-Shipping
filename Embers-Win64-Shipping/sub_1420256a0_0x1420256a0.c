// 函数: sub_1420256a0
// 地址: 0x1420256a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4b8
int64_t rax_1 = __security_cookie ^ &var_4b8
int16_t* var_488 = arg3
arg3.b = 1
uint64_t result
int64_t r8
result, r8 = sub_140b0f6c0(&var_488, u"FORCEFULLSCREEN")

if (result.b == 0)
    r8.b = 1
    char rax_2
    int64_t r8_1
    rax_2, r8_1 = sub_140b0f6c0(&var_488, u"SHOW")
    
    if (rax_2 == 0)
        r8_1.b = 1
        char rax_3
        int64_t r8_3
        rax_3, r8_3 = sub_140b0f6c0(&var_488, u"SHOWLAYER")
        
        if (rax_3 == 0)
            r8_3.b = 1
            char rax_4
            int64_t r8_5
            rax_4, r8_5 = sub_140b0f6c0(&var_488, u"VIEWMODE")
            
            if (rax_4 == 0)
                r8_5.b = 1
                char rax_5
                int64_t r8_7
                rax_5, r8_7 = sub_140b0f6c0(&var_488, u"NEXTVIEWMODE")
                uint64_t* var_460
                int32_t var_458
                int32_t rcx_13
                
                if (rax_5 != 0)
                    sub_1423ddac0(*(arg1 - 0x18), &var_460, arg2)
                    uint64_t* r8_9 = var_460
                    int32_t rdx_4 = var_458
                    
                    while (true)
                        if (rdx_4 s< 0)
                            goto label_142026349_2
                        
                        if (rdx_4 s< r8_9[1].d && *(*r8_9 + (sx.q(rdx_4) << 3)) == 0)
                            rdx_4 += 1
                            int32_t var_458_1 = rdx_4
                            continue
                        
                        while (true)
                            if (rdx_4 s< 0)
                                goto label_142026349_2
                            
                            if (rdx_4 s>= r8_9[1].d)
                                goto label_142026349_2
                            
                            result = *(*(*r8_9 + (sx.q(rdx_4) << 3)) + 0x30)
                            
                            if (result != 0 && *(result + 0x338) != 0)
                                int32_t rbx_2 = *(arg1 + 0x70) + 1
                                *(arg1 + 0x70) = rbx_2
                                
                                if (rbx_2 == 0x1d)
                                    rbx_2 = 0
                                    *(arg1 + 0x70) = 0
                                
                                rcx_13 = rbx_2
                                break
                            
                            do
                                rdx_4 += 1
                                int32_t var_458_2 = rdx_4
                                
                                if (rdx_4 s< 0)
                                    goto label_142026349_2
                                
                                if (rdx_4 s>= r8_9[1].d)
                                    break
                            while (*(*r8_9 + (sx.q(rdx_4) << 3)) == 0)
                        
                        break
                    
                    goto label_14202593e
                
                r8_7.b = 1
                char rax_7
                int64_t r8_10
                rax_7, r8_10 = sub_140b0f6c0(&var_488, u"PREVVIEWMODE")
                
                if (rax_7 == 0)
                    r8_10.b = 1
                    char rax_10
                    int64_t r8_15
                    rax_10, r8_15 = sub_140b0f6c0(&var_488, u"PRECACHE")
                    
                    if (rax_10 == 0)
                        r8_15.b = 1
                        char rax_12
                        int64_t r8_16
                        rax_12, r8_16 = sub_140b0f6c0(&var_488, u"TOGGLE_FULLSCREEN")
                        char rax_13
                        int64_t r8_17
                        
                        if (rax_12 == 0)
                            r8_16.b = 1
                            rax_13, r8_17 = sub_140b0f6c0(&var_488, u"FULLSCREEN")
                        
                        if (rax_12 != 0 || rax_13 != 0)
                            result = sub_14202f1c0(arg1 - 0x38)
                        else
                            r8_17.b = 1
                            int64_t r8_18
                            result, r8_18 = sub_140b0f6c0(&var_488, u"SETRES")
                            
                            if (result.b == 0)
                                r8_18.b = 1
                                int64_t r8_20
                                result, r8_20 = sub_140b0f6c0(&var_488, u"HighResShot")
                                
                                if (result.b == 0)
                                    r8_20.b = 1
                                    int64_t r8_24
                                    result, r8_24 = sub_140b0f6c0(&var_488, u"HighResShotUI")
                                    
                                    if (result.b != 0)
                                    labelid_c:
                                        result.b = 1
                                    else
                                        r8_24.b = 1
                                        char rax_24
                                        int64_t r8_25
                                        rax_24, r8_25 = sub_140b0f6c0(&var_488, u"SHOT")
                                        char rax_25
                                        
                                        if (rax_24 == 0)
                                            r8_25.b = 1
                                            rax_25, r8_25 = sub_140b0f6c0(&var_488, u"SCREENSHOT")
                                        
                                        uint64_t var_480
                                        int64_t var_478
                                        int16_t* var_450
                                        
                                        if (rax_24 != 0 || rax_25 != 0)
                                            bool cond:4_1 = *(arg1 + 0x80) == 0
                                            var_480 = var_488
                                            
                                            if (cond:4_1)
                                            labelid_c:
                                                result.b = 1
                                            else
                                                r8_25.b = 1
                                                char rax_54 = sub_140b0f6c0(&var_480, u"SHOWUI")
                                                uint64_t rcx_100 = var_480
                                                char rsi_5 = rax_54
                                                var_478 = 0
                                                int64_t var_470_3 = 0
                                                
                                                if (sub_140b21a10(rcx_100, showui") != 0
                                                        || rsi_5 != 0)
                                                    rsi_5 = 1
                                                
                                                sub_140b2acc0(var_480, u"filename=", &var_478, 1)
                                                char r8_56 = 1
                                                
                                                if (sub_140b21a10(var_480, u"nosuffix") != 0)
                                                    r8_56 = 0
                                                
                                                sub_1423ee750(&var_478, rsi_5, r8_56)
                                                int64_t* rcx_104 = *(arg1 + 0x80)
                                                data_143de543c =
                                                    *(*(*rcx_104 + 0x18))(rcx_104, &var_460)
                                                int64_t* rcx_106 = *(arg1 + 0x80)
                                                data_143de5440 =
                                                    *((*(*rcx_106 + 0x18))(rcx_106, &var_450) + 4)
                                            label_14202633a:
                                                int64_t rcx_108 = var_478
                                                
                                                if (rcx_108 != 0)
                                                    sub_140a74f90(rcx_108)
                                                
                                            labelid_c:
                                                result.b = 1
                                        else
                                            r8_25.b = 1
                                            
                                            if (sub_140b0f6c0(&var_488, BUGSCREENSHOTWITHHUDINFO")
                                                    == 0)
                                                char rax_27
                                                int64_t r8_27
                                                rax_27, r8_27 =
                                                    sub_140b0f6c0(&var_488, BUGSCREENSHOT")
                                                
                                                if (rax_27 == 0)
                                                    r8_27.b = 1
                                                    char rax_28
                                                    int64_t r8_28
                                                    rax_28, r8_28 =
                                                        sub_140b0f6c0(&var_488, KILLPARTICLES")
                                                    
                                                    if (rax_28 == 0)
                                                        r8_28.b = 1
                                                        char rax_31
                                                        int64_t r8_31
                                                        rax_31, r8_31 =
                                                            sub_140b0f6c0(&var_488, FORCESKELLOD")
                                                        
                                                        if (rax_31 == 0)
                                                            r8_31.b = 1
                                                            char rax_37
                                                            int64_t r8_35
                                                            rax_37, r8_35 =
                                                                sub_140b0f6c0(&var_488, DISPLAY")
                                                            
                                                            if (rax_37 == 0)
                                                                r8_35.b = 1
                                                                char rax_44
                                                                int64_t r8_38
                                                                rax_44, r8_38 =
                                                                    sub_140b0f6c0(&var_488, DISPLAYALL")
                                                                
                                                                if (rax_44 == 0)
                                                                    r8_38.b = 1
                                                                    char rax_45
                                                                    int64_t r8_40
                                                                    rax_45, r8_40 = sub_140b0f6c0(&var_488, 
                                                                        DISPLAYALLLOCATION")
                                                                    
                                                                    if (rax_45 == 0)
                                                                        r8_40.b = 1
                                                                        char rax_46
                                                                        int64_t r8_42
                                                                        rax_46, r8_42 = sub_140b0f6c0(&var_488, 
                                                                            DISPLAYALLROTATION")
                                                                        
                                                                        if (rax_46 == 0)
                                                                            r8_42.b = 1
                                                                            int64_t r8_44
                                                                            result, r8_44 =
                                                                                sub_140b0f6c0(&var_488, DISPLAYCLEAR")
                                                                            
                                                                            if (result.b == 0)
                                                                                r8_44.b = 1
                                                                                char rax_47
                                                                                int64_t r8_45
                                                                                rax_47, r8_45 =
                                                                                    sub_140b0f6c0(&var_488, GETALLLOCATION")
                                                                                
                                                                                if (rax_47 == 0)
                                                                                    r8_45.b = 1
                                                                                    int64_t r8_47
                                                                                    result, r8_47 =
                                                                                        sub_140b0f6c0(&var_488, TEXTUREDEFRAG")
                                                                                    
                                                                                    if (result.b != 0)
                                                                                    labelid_c:
                                                                                        result.b = 1
                                                                                    else
                                                                                        r8_47.b = 1
                                                                                        char rax_48
                                                                                        int64_t r8_48
                                                                                        rax_48, r8_48 =
                                                                                            sub_140b0f6c0(&var_488, TOGGLEMIPFADE")
                                                                                        
                                                                                        if (rax_48 == 0)
                                                                                            r8_48.b = 1
                                                                                            
                                                                                            if (sub_140b0f6c0(&var_488, 
                                                                                                    PAUSERENDERCLOCK") == 0)
                                                                                                if ((*(*(arg1 - 0x38) + 0x228))(
                                                                                                    arg1 - 0x38, var_488, arg4, 0).b != 0)
                                                                                                labelid_c:
                                                                                                    result.b = 1
                                                                                                else
                                                                                                    void* rcx_94 = *(arg1 + 0x48)
                                                                                                    
                                                                                                    if (rcx_94 == 0)
                                                                                                    label_14202624e:
                                                                                                        int64_t* rcx_98 = data_143f5b298 + 0x28
                                                                                                        result = (*(*rcx_98 + 8))(rcx_98, arg2, 
                                                                                                            var_488, arg4)
                                                                                                        
                                                                                                        if (result.b != 0)
                                                                                                        labelid_c:
                                                                                                            result.b = 1
                                                                                                    else if ((*(*(rcx_94 + 0x28) + 8))(
                                                                                                        rcx_94 + 0x28, arg2, var_488, arg4).b
                                                                                                        != 0)
                                                                                                    labelid_c:
                                                                                                        result.b = 1
                                                                                                    else
                                                                                                        int64_t* rcx_96 = *(arg1 + 0x48)
                                                                                                        
                                                                                                        if ((*(*rcx_96 + 0x228))(rcx_96, 
                                                                                                                var_488, arg4, 0).b == 0)
                                                                                                            goto label_14202624e
                                                                                                        
                                                                                                    labelid_c:
                                                                                                        result.b = 1
                                                                                            else
                                                                                                bool cond:7_1 = data_143f0fdf0 == 0
                                                                                                wchar16 const* const r8_50 = u"RUNNING"
                                                                                                data_143f0fdf0 = cond:7_1
                                                                                                
                                                                                                if (cond:7_1 != 0)
                                                                                                    r8_50 = u"PAUSED"
                                                                                                
                                                                                                sub_140b1f700(arg4, 
                                                                                                    The global realtime rendering clock is "
                                                                                                "now: %s", r8_50)
                                                                                                result.b = 1
                                                                                        else
                                                                                            float zmm0
                                                                                            
                                                                                            if (data_1439c85b4 < 0f)
                                                                                                zmm0 = 1f
                                                                                            else
                                                                                                zmm0 = -1f
                                                                                            
                                                                                            wchar16 const* const r8_49 = u"DISABLED"
                                                                                            data_1439c85b4 = zmm0
                                                                                            
                                                                                            if (zmm0 >= 0f)
                                                                                                r8_49 = u"ENABLED"
                                                                                            
                                                                                            sub_140b1f700(arg4, 
                                                                                                Mip-fading is now: %s", r8_49)
                                                                                            result.b = 1
                                                                                else
                                                                                    result = sub_14202d310(arg1 - 0x38, 
                                                                                        var_488, arg4)
                                                                            else
                                                                                *(arg1 + 0x18) = 0
                                                                                
                                                                                if (*(arg1 + 0x1c) == 0)
                                                                                labelid_c:
                                                                                    result.b = 1
                                                                                else
                                                                                    sub_1405a51b0(arg1 + 0x10, 0)
                                                                                    result.b = 1
                                                                        else
                                                                            result = sub_14202d100(arg1 - 0x38, 
                                                                                var_488, arg4)
                                                                    else
                                                                        result = sub_14202cef0(arg1 - 0x38, 
                                                                            var_488, arg4)
                                                                else
                                                                    result = sub_14202c980(arg1 - 0x38, 
                                                                        var_488, arg4)
                                                            else
                                                                var_450 = var_488
                                                                int16_t var_248[0x100]
                                                                void var_448
                                                                
                                                                if (sub_140b297e0(&var_450, &var_248, 
                                                                    0x100, 1).b == 0)
                                                                labelid_c:
                                                                    result.b = 1
                                                                else if (sub_140b297e0(&var_450, 
                                                                    &var_448, 0x100, 1).b == 0)
                                                                labelid_c:
                                                                    result.b = 1
                                                                else
                                                                    void* rax_40 = sub_140d2ee50(
                                                                        sub_140d41340(), -ffffffffffffffff, 
                                                                        &var_248, 0)
                                                                    
                                                                    if (rax_40 == 0)
                                                                        sub_140b1f640(arg4, u"Object not found")
                                                                        result.b = 1
                                                                    else
                                                                        sub_140b58260(&var_480, &var_448, 0)
                                                                        int32_t rcx_72
                                                                        rcx_72.b =
                                                                            sub_140b5b8a0(var_480.d, 0) == 0
                                                                        
                                                                        if ((var_480:4.d != 0 | rcx_72.b) == 0)
                                                                        label_142025fc1:
                                                                            var_460 = *(rax_40 + 0x18)
                                                                            sub_140b63b70(&var_460, &var_478)
                                                                            sub_140b1f700(arg4, 
                                                                                Property '%s' not found on object '%s'", 
                                                                                &var_448)
                                                                            goto label_14202633a
                                                                        
                                                                        if (
                                                                                sub_140bd3220(*(rax_40 + 0x10), var_480)
                                                                                == 0)
                                                                            goto label_142025fc1
                                                                        
                                                                        sub_14201c450(arg1 - 0x38, rax_40, 0, 
                                                                            &var_480, 0)
                                                                        result.b = 1
                                                        else
                                                            var_480.d = 0
                                                            
                                                            if (sub_140b2ab20(var_488, LOD=", 
                                                                    &var_480) != 0)
                                                                var_480.d += 1
                                                            
                                                            var_478 = 0
                                                            int32_t var_468_2 = 0xffffffff
                                                            int32_t var_470_2 = 0
                                                            sub_140d3cc80(sub_142591550(), 
                                                                &var_478, 1, 0x10, 0)
                                                            int32_t r8_34 = var_470_2
                                                            int64_t rdx_23 = var_478
                                                            int32_t i = var_468_2 + 1
                                                            int32_t i_3 = i
                                                            
                                                            if (i s< r8_34)
                                                                while (*(rdx_23 + (sx.q(i) << 3)) == 0)
                                                                    result = zx.q(i + 1)
                                                                    i_3 = result.d
                                                                    i = result.d
                                                                    
                                                                    if (result.d s>= r8_34)
                                                                        break
                                                            
                                                            while (i s>= 0)
                                                                if (i s>= r8_34)
                                                                    break
                                                                
                                                                void* rbx_8 = *(rdx_23 + (sx.q(i) << 3))
                                                                
                                                                if (
                                                                        sub_141ee6400(rbx_8) == *(arg2 + 0x1b0)
                                                                        && sub_140d23dc0(rbx_8, 0x30) == 0)
                                                                    sub_141f70b70(rbx_8, zx.q(var_480.d))
                                                                
                                                                r8_34 = var_470_2
                                                                rdx_23 = var_478
                                                                i = i_3 + 1
                                                                i_3 = i
                                                                
                                                                if (i s< r8_34)
                                                                    while (*(rdx_23 + (sx.q(i) << 3)) == 0)
                                                                        result = zx.q(i + 1)
                                                                        i_3 = result.d
                                                                        i = result.d
                                                                        
                                                                        if (result.d s>= r8_34)
                                                                            break
                                                            
                                                            if (rdx_23 == 0)
                                                            labelid_c:
                                                                result.b = 1
                                                            else
                                                                sub_140a74f90(rdx_23)
                                                                result.b = 1
                                                    else
                                                        var_478 = 0
                                                        int32_t var_470_1 = 0
                                                        int32_t var_468_1 = 0xffffffff
                                                        float zmm0_1 = sub_140d3cc80(
                                                            sub_14255cbc0(), &var_478, 1, 0x10, 0)
                                                        int32_t r8_30 = var_470_1
                                                        int64_t rdx_21 = var_478
                                                        int32_t i_1 = var_468_1 + 1
                                                        int32_t i_2 = i_1
                                                        
                                                        if (i_1 s< r8_30)
                                                            while (*(rdx_21 + (sx.q(i_1) << 3))
                                                                    == 0)
                                                                result = zx.q(i_1 + 1)
                                                                i_2 = result.d
                                                                i_1 = result.d
                                                                
                                                                if (result.d s>= r8_30)
                                                                    break
                                                        
                                                        while (i_1 s>= 0)
                                                            if (i_1 s>= r8_30)
                                                                break
                                                            
                                                            int64_t* rbx_7 =
                                                                *(rdx_21 + (sx.q(i_1) << 3))
                                                            zmm0_1 = sub_142195610(rbx_7, 
                                                                sub_14218b3c0(rbx_7, zmm0_1))
                                                            r8_30 = var_470_1
                                                            rdx_21 = var_478
                                                            i_1 = i_2 + 1
                                                            i_2 = i_1
                                                            
                                                            if (i_1 s< r8_30)
                                                                while (*(rdx_21 + (sx.q(i_1) << 3))
                                                                        == 0)
                                                                    result = zx.q(i_1 + 1)
                                                                    i_2 = result.d
                                                                    i_1 = result.d
                                                                    
                                                                    if (result.d s>= r8_30)
                                                                        break
                                                        
                                                        if (rdx_21 != 0)
                                                            sub_140a74f90(rdx_21)
                                                        
                                                        data_143a2ed00 = 0
                                                        result.b = 1
                                                else
                                                    result = sub_14203a2c0(arg1 - 0x38, var_488, 0)
                                            else
                                                result = sub_14203a2c0(arg1 - 0x38, var_488, 1)
                                else
                                    int16_t* r15_2 = var_488
                                    
                                    if (*(arg1 + 0x80) == 0)
                                    labelid_c:
                                        result.b = 1
                                    else
                                        int32_t rbx_5 = 0
                                        var_460 = nullptr
                                        int32_t rcx_42 = 0
                                        var_458.q = 0
                                        
                                        if (r15_2 != 0 && *r15_2 != 0)
                                            int64_t rsi_2 = -1
                                            
                                            do
                                                rsi_2 += 1
                                            while (r15_2[rsi_2] != 0)
                                            
                                            if (rsi_2.d + 1 s> 0)
                                                sub_1405947f0(&var_460, rsi_2.d + 1)
                                                int32_t var_454
                                                rcx_42 = var_454
                                                rbx_5 = var_458
                                            
                                            int32_t rax_23 = rbx_5 + rsi_2.d + 1
                                            int32_t var_458_5 = rax_23
                                            
                                            if (rax_23 s> rcx_42)
                                                sub_140594770(&var_460)
                                            
                                            UnDecorator::getReferenceType(var_460, r15_2, 
                                                (rsi_2.d + 1) * 2)
                                        
                                        sub_142090dd0()
                                        result = sub_14209af70(&data_143a2e330, &var_460, arg4)
                                        uint64_t* rcx_46 = var_460
                                        
                                        if (rcx_46 != 0)
                                            sub_140a74f90(rcx_46)
                                        
                                        if (result.b == 0)
                                        label_142026349:
                                            result.b = 1
                                        else
                                            sub_1423f2400(*(arg1 + 0x80))
                                            result.b = 1
                            else
                                int16_t* rbx_3 = var_488
                                
                                if (*(arg1 + 0x80) == 0 || *(arg1 + 0x88) == 0)
                                label_142026349_1:
                                    result.b = 1
                                else
                                    int32_t rax_14 = _wtoi(rbx_3)
                                    void* rsi_1
                                    
                                    if (wcschr(rbx_3, 0x78) == 0)
                                        if (wcschr(rbx_3, 0x58) == 0)
                                            rsi_1 = &data_142d40450
                                        else
                                            rsi_1 = &wcschr(rbx_3, 0x58)[1]
                                    else
                                        rsi_1 = &wcschr(rbx_3, 0x78)[1]
                                    
                                    int32_t rax_19 = _wtoi(rsi_1)
                                    int64_t* rcx_33 = *(arg1 + 0x80)
                                    int64_t rdx_8 = *rcx_33
                                    int32_t rbx_4 = (*(rdx_8 + 0x100))(rcx_33, rdx_8)
                                    wchar16* rax_21 = wcschr(rsi_1, 0x77)
                                    wchar16* rax_22
                                    
                                    if (rax_21 == 0)
                                        rax_22 = wcschr(rsi_1, (rax_21 + 0x57).w)
                                    
                                    if (rax_21 != 0 || rax_22 != 0)
                                        result = wcschr(rsi_1, 0x66)
                                        
                                        if (result != 0)
                                            rbx_4 = 1
                                        else
                                            rbx_4 = 2
                                            
                                            if (wcschr(rsi_1, (result + 0x46).w) != 0)
                                                rbx_4 = 1
                                    else
                                        result = wcschr(rsi_1, (&rax_22[0x33]).w)
                                        
                                        if (result != 0)
                                            rbx_4 = 0
                                        else if (wcschr(rsi_1, (result + 0x46).w) != 0)
                                            rbx_4 = 0
                                    
                                    if (rax_14 == 0 || rax_19 == 0)
                                    label_142026349_2:
                                        result.b = 1
                                    else
                                        sub_1423ee5e0(rax_14, rax_19, rbx_4)
                                        result.b = 1
                    else
                        (*(*(arg1 - 0x10) + 8))(arg1 - 0x10)
                        result.b = 1
                else
                    sub_1423ddac0(*(arg1 - 0x18), &var_460, arg2)
                    uint64_t* r8_12 = var_460
                    int32_t rdx_6 = var_458
                    
                    while (true)
                        if (rdx_6 s< 0)
                            goto label_142026349_2
                        
                        if (rdx_6 s< r8_12[1].d && *(*r8_12 + (sx.q(rdx_6) << 3)) == 0)
                            rdx_6 += 1
                            int32_t var_458_3 = rdx_6
                            continue
                        
                        while (true)
                            if (rdx_6 s< 0)
                                goto label_142026349_2
                            
                            if (rdx_6 s>= r8_12[1].d)
                                goto label_142026349_2
                            
                            result = *(*(*r8_12 + (sx.q(rdx_6) << 3)) + 0x30)
                            
                            if (result != 0 && *(result + 0x338) != 0)
                                int32_t rcx_20 = *(arg1 + 0x70)
                                rcx_13 = rcx_20 - 1
                                *(arg1 + 0x70) = rcx_13
                                
                                if (rcx_20 - 1 s< 0)
                                    rcx_13 = 0x1c
                                    *(arg1 + 0x70) = 0x1c
                                
                                break
                            
                            do
                                rdx_6 += 1
                                int32_t var_458_4 = rdx_6
                                
                                if (rdx_6 s< 0)
                                    goto label_142026349_2
                                
                                if (rdx_6 s>= r8_12[1].d)
                                    break
                            while (*(*r8_12 + (sx.q(rdx_6) << 3)) == 0)
                        
                        break
                    
                label_14202593e:
                    sub_140b1f700(arg4, u"New view mode: %s", sub_142317220(rcx_13))
                    sub_14230a660(*(arg1 + 0x70), 1, arg1 + 0x74)
                    result.b = 1
            else
                result = sub_14202f4e0(arg1 - 0x38, var_488, arg4, arg2)
        else
            result = sub_14202e8f0(arg1 - 0x38, var_488, arg4, arg2)
    else
        result = sub_14202e420(arg1 - 0x38, var_488, arg4, arg2)
else
    result.b = 1
    data_143f4048c = data_143f4048c == 0

__security_check_cookie(rax_1 ^ &var_4b8)
return result
