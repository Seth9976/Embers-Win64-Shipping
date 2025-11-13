// 函数: sub_1423db790
// 地址: 0x1423db790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* result_1 = arg3
int32_t rdi = 0
int32_t var_68 = 0

if (data_143f5b268 == 0)
    int64_t rax_1 = *(arg1 + 0x760)
    
    if (rax_1 == 0)
        data_143f5b268 = 0
    else
        data_143f5b268 = rax_1 + 0x28

int64_t result = sub_140cea3f0(arg2, arg3, arg4)

if (result.b == 1)
    result.b = 1
else
    int64_t* rcx_1 = data_143de5448
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 8))(rcx_1, arg2, result_1, arg4)
    
    if (rcx_1 != 0 && result.b == 1)
        result.b = 1
    else
        int64_t* rcx_2 = data_143ddb3f0
        
        if (rcx_2 != 0)
            result = (*(*rcx_2 + 8))(rcx_2, arg2, result_1, arg4)
        
        if (rcx_2 != 0 && result.b == 1)
            result.b = 1
        else if (sub_1405949a0().b == 1)
            result.b = 1
        else
            int64_t* rsi_1
            
            if (arg2 == 0)
                int16_t* var_48
                
                if (*(arg1 + 0xa50) != 0)
                    if (sub_141e80b60(arg1 + 0xa58) == 0)
                        goto label_1423db8e8
                    
                    sub_141e70c80(&var_48, *(arg1 + 0xa50) + 0x88)
                    rsi_1 = sub_1405948a0(&var_48)
                    sub_141e71cd0(&var_48)
                    goto label_1423db8c8
                
            label_1423db8e8:
                int16_t* result_2 = result_1
                int16_t* var_58 = nullptr
                int64_t var_50_1 = 0
                int16_t* rcx_57
                
                if (sub_140b2acc0(result_2, u"CULTURE=", &var_58, 1) == 0)
                    int16_t* rcx_11 = var_58
                    
                    if (rcx_11 != 0)
                        sub_140a74f90(rcx_11)
                    
                    int16_t* result_3 = result_1
                    var_58 = nullptr
                    int64_t var_50_2 = 0
                    
                    if (sub_140b2acc0(result_3, u"LANGUAGE=", &var_58, 1) != 0)
                        sub_140a8bf80(sub_140a752e0(), &var_58)
                        goto label_1423dc16b
                    
                    int16_t* rcx_13 = var_58
                    
                    if (rcx_13 != 0)
                        sub_140a74f90(rcx_13)
                    
                    int16_t* result_4 = result_1
                    var_58 = nullptr
                    int32_t var_50_3 = 0
                    char rax_13
                    int64_t r8_8
                    rax_13, r8_8 = sub_140b2acc0(result_4, u"LOCALE=", &var_58, 1)
                    
                    if (rax_13 != 0)
                        __std_fs_get_file_id(sub_140a752e0(), &var_58)
                        goto label_1423dc16b
                    
                    int16_t* rcx_15 = var_58
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                    
                    r8_8.b = 1
                    char rax_15
                    int64_t r8_9
                    rax_15, r8_9 = sub_140b0f6c0(&result_1, u"FLUSHLOG")
                    
                    if (rax_15 == 0)
                        r8_9.b = 1
                        char rax_16
                        int64_t r8_10
                        rax_16, r8_10 = sub_140b0f6c0(&result_1, u"GAMEVER")
                        char rax_17
                        int64_t r8_11
                        
                        if (rax_16 == 0)
                            r8_10.b = 1
                            rax_17, r8_11 = sub_140b0f6c0(&result_1, u"GAMEVERSION")
                        
                        if (rax_16 != 0 || rax_17 != 0)
                            int16_t* result_6 = result_1
                            int64_t* rax_51 = sub_140af30a0(&var_48)
                            int16_t* r14_3 = &data_142d40450
                            int16_t* const r12_1
                            
                            if (rax_51[1].d == 0)
                                r12_1 = &data_142d40450
                            else
                                r12_1 = *rax_51
                            
                            sub_140af2b60()
                            j_sub_140a1b080()
                            int16_t* var_70_1 = &data_143dbb3f0
                            wchar16 const* const var_78_1 = u"++UE4+Release-4.25-CL-14469661"
                            sub_140a2e390(&var_58, 
                                GameVersion Branch: %s, Configuration: %s, Build: %s, CommandLine: %s", 
                                r12_1)
                            int16_t* rcx_73 = var_48
                            
                            if (rcx_73 != 0)
                                sub_140a74f90(rcx_73)
                            
                            int16_t* r8_45 = &data_142d40450
                            
                            if (var_50_3 != 0)
                                r8_45 = var_58
                            
                            sub_140b1f700(arg4, u"%s", r8_45)
                            
                            if (var_50_3 != 0)
                                r14_3 = var_58
                            
                            sub_140d77020(r14_3)
                            
                            if (result_6 != 0)
                                int64_t rbx_4 = -1
                                
                                do
                                    rbx_4 += 1
                                while ((*u"-display")[rbx_4] != 0)
                                
                                int16_t i = *result_6
                                void* rdi_1 = &result_6[1]
                                
                                while (i != 0)
                                    result = zx.q(zx.d(i) - 0x61)
                                    result.w = sbb.w(result.w, result.w, result.d u< 0x1a)
                                    result.w &= 0x20
                                    
                                    if (
                                            i - result.w == 0x2d
                                                && sub_140a546e0(rdi_1, &(*-display")[1], 
                                            sx.q(rbx_4.d - 1)).d == 0)
                                        break
                                    
                                    i = *rdi_1
                                    rdi_1 += 2
                            
                            goto label_1423dc16b
                        
                        r8_11.b = 1
                        char rax_18
                        int64_t r8_12
                        rax_18, r8_12 = sub_140b0f6c0(&result_1, u"STAT")
                        
                        if (rax_18 == 0)
                            r8_12.b = 1
                            sub_140b0f6c0(&result_1, u"STOPMOVIECAPTURE")
                            int64_t r8_14
                            r8_14.b = 1
                            char rax_20
                            int64_t r8_15
                            rax_20, r8_15 = sub_140b0f6c0(&result_1, u"CRACKURL")
                            
                            if (rax_20 != 0)
                                return sub_1423dec40(arg1 - 0x28, result_1, arg4)
                            
                            r8_15.b = 1
                            char rax_21
                            int64_t r8_17
                            rax_21, r8_17 = sub_140b0f6c0(&result_1, u"DEFER")
                            
                            if (rax_21 == 0)
                                r8_17.b = 1
                                char rax_24
                                int64_t r8_20
                                rax_24, r8_20 = sub_140b0f6c0(&result_1, u"OPEN")
                                
                                if (rax_24 != 0)
                                    return (*(*(arg1 - 0x28) + 0x408))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_20.b = 1
                                char rax_26
                                int64_t r8_22
                                rax_26, r8_22 = sub_140b0f6c0(&result_1, u"STREAMMAP")
                                
                                if (rax_26 != 0)
                                    return (*(*(arg1 - 0x28) + 0x418))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_22.b = 1
                                char rax_28
                                int64_t r8_24
                                rax_28, r8_24 = sub_140b0f6c0(&result_1, u"SERVERTRAVEL")
                                
                                if (rax_28 != 0)
                                    return (*(*(arg1 - 0x28) + 0x420))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_24.b = 1
                                char rax_30
                                int64_t r8_26
                                rax_30, r8_26 = sub_140b0f6c0(&result_1, u"DISCONNECT")
                                
                                if (rax_30 != 0)
                                    return (*(*(arg1 - 0x28) + 0x430))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_26.b = 1
                                char rax_32
                                int64_t r8_28
                                rax_32, r8_28 = sub_140b0f6c0(&result_1, u"RECONNECT")
                                
                                if (rax_32 != 0)
                                    return (*(*(arg1 - 0x28) + 0x438))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_28.b = 1
                                char rax_34
                                int64_t r8_30
                                rax_34, r8_30 = sub_140b0f6c0(&result_1, u"TRAVEL")
                                
                                if (rax_34 != 0)
                                    return (*(*(arg1 - 0x28) + 0x410))(arg1 - 0x28, result_1, arg4, 
                                        arg2)
                                
                                r8_30.b = 1
                                char rax_36
                                int64_t r8_32
                                rax_36, r8_32 = sub_140b0f6c0(&result_1, &data_143341afc)
                                int64_t var_78
                                
                                if (rax_36 == 0)
                                    r8_32.b = 1
                                    char rax_40
                                    int64_t r8_35
                                    rax_40, r8_35 = sub_140b0f6c0(&result_1, u"GAMMA")
                                    
                                    if (rax_40 == 0)
                                        r8_35.b = 1
                                        
                                        if (sub_140b0f6c0(&result_1, u"SCALABILITY") == 0)
                                            int64_t* rcx_63 = data_143db18d0
                                            
                                            if (rcx_63 == 0)
                                                sub_140a53c40()
                                                rcx_63 = data_143db18d0
                                            
                                            int64_t r8_37
                                            result, r8_37 =
                                                (*(*rcx_63 + 0xd0))(rcx_63, result_1, arg4, arg2)
                                            
                                            if (result.b != 0)
                                                result.b = 1
                                            else
                                                char rax_44 = sub_141f8cba0()
                                                
                                                if (rax_44 == 0)
                                                    void*** rax_45 = sub_141f88540()
                                                    result, r8_37 =
                                                        (*rax_45)[8](rax_45, arg2, result_1, arg4)
                                                
                                                if (rax_44 == 0 && result.b != 0)
                                                    result.b = 1
                                                else
                                                    r8_37.b = 1
                                                    char rax_46
                                                    int64_t r8_39
                                                    rax_46, r8_39 =
                                                        sub_140b0f6c0(&result_1, DUMPTICKS")
                                                    
                                                    if (rax_46 == 0)
                                                        r8_39.b = 1
                                                        
                                                        if (sub_140b0f6c0(&result_1, 
                                                            CANCELASYNCLOAD").b == 0)
                                                        label_1423dbaa7:
                                                            result.b = 0
                                                        else
                                                            sub_140bc3750()
                                                            result.b = 1
                                                    else
                                                        void* const rbx
                                                        rbx.b = 1
                                                        var_68.q = result_1
                                                        char rsi_7 = 1
                                                        int64_t r14
                                                        r14.b = 0
                                                        char rax_48
                                                        int64_t r8_41
                                                        rax_48, r8_41 =
                                                            sub_140b0f6c0(&var_68, GROUPED")
                                                        
                                                        if (rax_48 == 0)
                                                            r8_41.b = 1
                                                            char rax_49
                                                            int64_t r8_42
                                                            rax_49, r8_42 =
                                                                sub_140b0f6c0(&var_68, ENABLED")
                                                            
                                                            if (rax_49 == 0)
                                                                r8_42.b = 1
                                                                rbx = 1
                                                                
                                                                if (sub_140b0f6c0(&var_68, DISABLED")
                                                                        != 0)
                                                                    rbx = nullptr
                                                            else
                                                                rsi_7 = 0
                                                        else
                                                            r14 = 1
                                                        
                                                        j_sub_1423c0390()
                                                        int64_t var_70
                                                        var_70.b = r14.b
                                                        var_78.b = rsi_7
                                                        (*(data_143f5b210 + 0x38))(&data_143f5b210, 
                                                            arg4, arg2, zx.q(rbx.b), var_78, var_70)
                                                        result.b = 1
                                        else
                                            sub_1422efe40(result_1)
                                            result.b = 1
                                    else
                                        result = result_1
                                        var_68.q = result
                                        int32_t zmm1_1
                                        
                                        if (*result == 0)
                                            zmm1_1 = 0x400ccccd
                                        else
                                            int64_t* rax_41
                                            double zmm0_1
                                            rax_41, zmm0_1 = sub_140b294d0(&var_48, &var_68, 0)
                                            wchar16* _String
                                            
                                            if (rax_41[1].d == 0)
                                                _String = &data_142d40450
                                            else
                                                _String = *rax_41
                                            
                                            _wtof(_String)
                                            zmm1_1 = 0x3f000000
                                            int32_t zmm2_1 = fconvert.s(zmm0_1)
                                            
                                            if (not(zmm2_1 f< 0.5f))
                                                zmm1_1 = __minss_xmmss_memss(zmm2_1, 0x40a00000)
                                            
                                            rdi = 1
                                        
                                        *(arg1 + 0x8f4) = zmm1_1
                                        
                                        if ((rdi.b & 1) != 0)
                                            rcx_57 = var_48
                                            goto label_1423dc16f
                                        
                                        result.b = 1
                                else
                                    int16_t* result_5 = result_1
                                    var_68.q = result_5
                                    var_58 = nullptr
                                    int64_t var_50_4 = 0
                                    sub_1405947f0(&var_58, 0x21)
                                    int32_t rax_37 = var_50_4.d + 0x21
                                    var_50_4.d = rax_37
                                    
                                    if (rax_37 s> 0)
                                        sub_140594770(&var_58)
                                    
                                    UnDecorator::getReferenceType(var_58, 
                                        No level found for CE processing", 0x42)
                                    int64_t r13
                                    r13.b = 0
                                    int64_t r14_1 = sub_141baa510(arg2)
                                    int32_t i_1 = 0
                                    
                                    while (i_1 s>= 0)
                                        if (i_1 s>= *(r14_1 + 8))
                                            break
                                        
                                        void* rsi_6 = *(*r14_1 + (sx.q(i_1) << 3))
                                        
                                        if (rsi_6 != 0 && sub_141d343b0(rsi_6) != 0)
                                            var_50_4.d = 0
                                            
                                            if (var_50_4:4.d != 0)
                                                sub_1405947f0(&var_58, 0)
                                            
                                            int64_t* rax_38 = sub_141d343b0(rsi_6)
                                            result_5 = var_68.q
                                            var_78.b = 1
                                            r13.b |=
                                                sub_140d195d0(rax_38, result_5, arg4, nullptr, 1).b
                                            i_1 += 1
                                            continue
                                        
                                        result_5 = var_68.q
                                        i_1 += 1
                                    
                                    int16_t* rbx_3
                                    
                                    if (r13.b != 0)
                                        rbx_3 = var_58
                                    else
                                        int64_t* rax_39 = sub_140d21e10(arg2, &var_48, 0)
                                        
                                        if (rax_39[1].d != 0)
                                            *rax_39
                                        
                                        sub_140a2e390(&var_68, 
                                            CE command '%s' wasn't processed for levels from world '%s'.", 
                                            result_5)
                                        int16_t* rcx_55 = var_58
                                        
                                        if (rcx_55 != 0)
                                            sub_140a74f90(rcx_55)
                                        
                                        int16_t* rcx_56 = var_48
                                        rbx_3 = var_68.q
                                        var_68.q = 0
                                        int64_t var_60_1 = 0
                                        
                                        if (rcx_56 != 0)
                                            sub_140a74f90(rcx_56)
                                    
                                    if (rbx_3 == 0)
                                        result.b = 1
                                    else
                                        sub_140a74f90(rbx_3)
                                        result.b = 1
                            else
                                int64_t rsi_3 = sx.q(*(arg1 + 0x770))
                                int16_t* result_7 = result_1
                                int32_t rax_22 = (rsi_3 + 1).d
                                *(arg1 + 0x770) = rax_22
                                
                                if (rax_22 s> *(arg1 + 0x774))
                                    sub_1405a4f90(arg1 + 0x768)
                                
                                result = *(arg1 + 0x768)
                                int64_t rsi_4 = rsi_3 << 4
                                int64_t rsi_5 = rsi_4 + result
                                
                                if (rsi_4 != neg.q(result))
                                    *rsi_5 = 0
                                    *(rsi_5 + 8) = 0
                                    
                                    if (result_7 != 0 && *result_7 != 0)
                                        int64_t rbx_1 = -1
                                        
                                        do
                                            rbx_1 += 1
                                        while (result_7[rbx_1] != 0)
                                        
                                        if (rbx_1.d + 1 s> 0)
                                            sub_1405947f0(rsi_5, rbx_1.d + 1)
                                            rdi = *(rsi_5 + 8)
                                        
                                        int32_t rax_23 = rbx_1.d + 1 + rdi
                                        *(rsi_5 + 8) = rax_23
                                        
                                        if (rax_23 s> *(rsi_5 + 0xc))
                                            sub_140594770(rsi_5)
                                        
                                        UnDecorator::getReferenceType(*rsi_5, result_7, 
                                            (rbx_1.d + 1) * 2)
                                
                                result.b = 1
                        else
                            int64_t r13_1 = data_143f5b268
                            var_68.q = result_1
                            
                            if (*(arg1 + 0xcf8) s<= 0)
                            label_1423dbaa7_1:
                                result.b = 0
                            else
                                int64_t rsi_2 = 0
                                int64_t r15_1
                                
                                while (true)
                                    r15_1 = *(arg1 + 0xcf0)
                                    int16_t* rdx_12
                                    
                                    if (*(rsi_2 + r15_1 + 0x10) == 0)
                                        rdx_12 = &data_142d40450
                                    else
                                        rdx_12 = *(rsi_2 + r15_1 + 8)
                                    
                                    r8_12.b = 1
                                    result, r8_12 = sub_140b0f6c0(&var_68, rdx_12)
                                    
                                    if (result.b != 0)
                                        break
                                    
                                    rdi += 1
                                    rsi_2 += 0x60
                                    
                                    if (rdi s>= *(arg1 + 0xcf8))
                                        goto label_1423dbaa7_2
                                
                                int64_t r10_1 = *(rsi_2 + r15_1 + 0x48)
                                
                                if (r10_1 == 0)
                                    result.b = 1
                                else
                                    if (r13_1 != 0)
                                        return r10_1(arg1 - 0x28 + sx.q(*(rsi_2 + r15_1 + 0x50)), 
                                            arg2, r13_1, var_68.q)
                                    
                                label_1423dbaa7_2:
                                    result.b = 0
                    else
                        sub_140b19e60()
                        void* rdx_10 = data_1439a8bd0
                        (*(rdx_10 + 0x48))(&data_1439a8bd0, rdx_10)
                        sub_140b19e60()
                        void* rdx_11 = data_1439a8bd0
                        (*(rdx_11 + 0x18))(&data_1439a8bd0, rdx_11)
                        result.b = 1
                else
                    sub_140a8bd30(sub_140a752e0(), &var_58)
                label_1423dc16b:
                    rcx_57 = var_58
                label_1423dc16f:
                    
                    if (rcx_57 == 0)
                        result.b = 1
                    else
                        sub_140a74f90(rcx_57)
                        result.b = 1
            else
                rsi_1 = sub_142435f50(arg2)
            label_1423db8c8:
                
                if (rsi_1 == 0)
                    goto label_1423db8e8
                
                if ((*(*rsi_1 + 8))(rsi_1, arg2, result_1, arg4).b != 1)
                    goto label_1423db8e8
                
                result.b = 1

return result
