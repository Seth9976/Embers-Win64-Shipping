// 函数: sub_1425efa50
// 地址: 0x1425efa50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x68) = *arg2
*(arg1 + 0x6c) = arg2[1]
*(arg1 + 0x70) = arg2[2]
*(arg1 + 0x74) = arg2[3]
*(arg1 + 0x78) = arg2[4]
*(arg1 + 0x7c) = arg2[5]
sub_142476260(arg1 + 0x80, &arg2[6])
int32_t arg_8 = 0x14
int32_t r13 = 2
int32_t arg_c = 2
*(arg1 + 0x90) = arg_8.q
sub_1425f1310(arg1 + 0x80, arg1 + 0x90)
HMODULE result = sub_140b67ab0(u"amfrt64.dll")
*(arg1 + 0x48) = result

if (result != 0)
    result = sub_140b67a40(result, u"AMFInit")
    
    if (result != 0)
        result = result(0x1000400090000, arg1 + 0x50)
        
        if (result.d == 0 || result.d == 0xc)
            result = sub_140b67a40(*(arg1 + 0x48), u"AMFQueryVersion")
            
            if (result != 0)
                int32_t rsi = 0
                int64_t arg_10 = 0
                result(&arg_10)
                int64_t* rcx_5 = data_143f0f180
                int16_t* rax_8 = (*(*rcx_5 + 0x20))(rcx_5)
                int16_t* rbx = nullptr
                int32_t var_80 = 0
                int16_t* var_88 = nullptr
                int16_t* const r12 = &data_142d40450
                int32_t rax_9 = 0
                int32_t var_7c = 0
                int32_t r14 = 0
                int16_t* rcx_9
                
                if (rax_8 != 0 && *rax_8 != 0)
                    int64_t rbx_1 = -1
                    
                    do
                        rbx_1 += 1
                    while (rax_8[rbx_1] != 0)
                    
                    if (rbx_1.d + 1 s> 0)
                        sub_1405947f0(&var_88, rbx_1.d + 1)
                        rax_9 = var_7c
                        r14 = var_80
                    
                    r14 += rbx_1.d + 1
                    
                    if (r14 s> rax_9)
                        sub_140594770(&var_88)
                    
                    rbx = var_88
                    UnDecorator::getReferenceType(rbx, rax_8, (rbx_1.d + 1) * 2)
                    rcx_9 = rbx
                
                if (rax_8 == 0 || *rax_8 == 0 || r14 == 0)
                    rcx_9 = &data_142d40450
                
                if (sub_140a54510(rcx_9, u"D3D11") != 0)
                    if (r14 != 0)
                        r12 = rbx
                    
                    sub_140af98a0("Unknown", 0x135, u"AMF not supported with a %s renderer", r12)
                    sub_140afbb40()
                
                int64_t* rcx_10 = data_143f0f180
                void* rax_12 = (*(*rcx_10 + 0x458))(rcx_10)
                int64_t* rcx_11 = *(arg1 + 0x58)
                
                if (rcx_11 != 0)
                    int64_t rdx_6 = *rcx_11
                    (*(rdx_6 + 8))(rcx_11, rdx_6)
                
                *(arg1 + 0x58) = 0
                int64_t* rcx_12 = *(arg1 + 0x50)
                int64_t r8_3 = *rcx_12
                int32_t rax_13 = (*r8_3)(rcx_12, arg1 + 0x58, r8_3)
                void* i
                
                if (rax_13 == 0 || rax_13 == 0xc)
                    int64_t* rcx_13 = *(arg1 + 0x58)
                    int32_t rax_15 = (*(*rcx_13 + 0x90))(rcx_13, rax_12, 0x6e)
                    
                    if (rax_15 == 0 || rax_15 == 0xc)
                        int64_t* rcx_14 = *(arg1 + 0x60)
                        
                        if (rcx_14 != 0)
                            (*(*rcx_14 + 8))(rcx_14)
                        
                        *(arg1 + 0x60) = 0
                        int64_t* rcx_15 = *(arg1 + 0x50)
                        int32_t rax_18 =
                            (*(*rcx_15 + 8))(rcx_15, *(arg1 + 0x58), AMFVideoEncoderVCE_AVC", 
                            arg1 + 0x60)
                        
                        if (rax_18 == 0 || rax_18 == 0xc)
                            int32_t* r8_4 = &arg_8
                            int64_t* rcx_16 = *(arg1 + 0x60)
                            uint64_t pv = 1
                            int32_t var_78
                            char var_70
                            int64_t var_68
                            int128_t var_58
                            
                            if (*(arg1 + 0x7c) != 0)
                                arg_8 = 0
                                int32_t rax_26 = sub_1425e8d00(rcx_16, u"Usage", r8_4)
                                
                                if (rax_26 == 0 || rax_26 == 0xc)
                                    int64_t* rcx_23 = *(arg1 + 0x60)
                                    arg_8 = 0x4d
                                    int32_t rax_27 = sub_1425e8d00(rcx_23, u"Profile", &arg_8)
                                    
                                    if (rax_27 == 0 || rax_27 == 0xc)
                                        int64_t* rcx_24 = *(arg1 + 0x60)
                                        arg_8 = 2
                                        int32_t rax_28 =
                                            sub_1425e8d00(rcx_24, QualityPreset", &arg_8)
                                        
                                        if (rax_28 == 0 || rax_28 == 0xc)
                                        label_1425efe3a:
                                            int32_t rax_29 =
                                                sub_1425e8dc0(*(arg1 + 0x60), TargetBitrate", 
                                                arg1 + 0x78)
                                            
                                            if (rax_29 == 0 || rax_29 == 0xc)
                                                int64_t* rcx_26 = *(arg1 + 0x60)
                                                arg_8 = *(arg1 + 0x68)
                                                arg_c = *(arg1 + 0x6c)
                                                arg_8.q = arg_8.q
                                                int32_t rax_33 =
                                                    sub_1425e9000(rcx_26, FrameSize", &arg_8)
                                                
                                                if (rax_33 == 0 || rax_33 == 0xc)
                                                    int64_t* rcx_27 = *(arg1 + 0x60)
                                                    arg_8 = *(arg1 + 0x68)
                                                    arg_c = *(arg1 + 0x6c)
                                                    arg_8.q = arg_8.q
                                                    int32_t rax_37 =
                                                        sub_1425e8f40(rcx_27, AspectRatio", &arg_8)
                                                    
                                                    if (rax_37 == 0 || rax_37 == 0xc)
                                                        int64_t* rcx_28 = *(arg1 + 0x60)
                                                        arg_8 = *(arg1 + 0x70)
                                                        arg_c = 1
                                                        arg_8.q = arg_8.q
                                                        int32_t rax_40 =
                                                            sub_1425e8e80(rcx_28, FrameRate", 
                                                            &arg_8)
                                                        
                                                        if (rax_40 == 0 || rax_40 == 0xc)
                                                            arg_8.q = zx.q(*(arg1 + 0x70))
                                                            int32_t rax_42 = sub_1425e90c0(
                                                                *(arg1 + 0x60), IDRPeriod", &arg_8)
                                                            
                                                            if (rax_42 == 0 || rax_42 == 0xc)
                                                                int32_t rax_43 = sub_1425e90c0(
                                                                    *(arg1 + 0x60), 
                                                                    HeaderInsertionSpacing", &arg_8)
                                                                
                                                                if (rax_43 == 0 || rax_43 == 0xc)
                                                                    int64_t* rcx_31 = *(arg1 + 0x60)
                                                                    int32_t rax_45 = (*(*rcx_31 + 0x88))(
                                                                        rcx_31, 5, zx.q(*(arg1 + 0x68)), 
                                                                        zx.q(*(arg1 + 0x6c)))
                                                                    
                                                                    if (rax_45 == 0 || rax_45 == 0xc)
                                                                        int32_t rcx_32 = *(arg1 + 0x94)
                                                                        
                                                                        if (rcx_32 == 0)
                                                                            pv = 0
                                                                        else if (rcx_32 == 1)
                                                                            pv = zx.q(rcx_32 + 2)
                                                                        
                                                                        int64_t* r15_4 = *(arg1 + 0x60)
                                                                        var_78 = 0
                                                                        
                                                                        if (sub_1425ec4c0(&var_78) != 0)
                                                                            pv = var_70.q
                                                                            r13 = var_78
                                                                        else
                                                                            var_78 = 2
                                                                            var_70.q = pv
                                                                        
                                                                        int64_t rax_47 = *r15_4
                                                                        var_58 = var_78.o
                                                                        int64_t var_48_2 = var_68
                                                                        int32_t rax_48 = (*(rax_47 + 0x18))(
                                                                            r15_4, RateControlMethod", &var_58)
                                                                        
                                                                        if (r13 == 0xa || r13 == 0xb)
                                                                            CoTaskMemFree(pv)
                                                                        else if (r13 == 0xc && pv != 0)
                                                                            (*(*pv + 8))(pv)
                                                                        
                                                                        if (rax_48 == 0 || rax_48 == 0xc)
                                                                            int32_t rax_50 =
                                                                                sub_1425e8d00(*(arg1 + 0x60), MinQP", 
                                                                                arg1 + 0x90)
                                                                            
                                                                            if (rax_50 == 0 || rax_50 == 0xc)
                                                                                int32_t rax_51 = sub_1425e8d00(
                                                                                    *(arg1 + 0x60), &data_14344a2f0, 
                                                                                    arg1 + 0x90)
                                                                                
                                                                                if (rax_51 == 0 || rax_51 == 0xc)
                                                                                    int32_t rax_52 = sub_1425e8d00(
                                                                                        *(arg1 + 0x60), &data_14344a2f8, 
                                                                                        arg1 + 0x90)
                                                                                    
                                                                                    if (rax_52 == 0 || rax_52 == 0xc)
                                                                                        int32_t rax_53 = sub_1425e8d00(
                                                                                            *(arg1 + 0x60), &data_14344a300, 
                                                                                            arg1 + 0x90)
                                                                                        
                                                                                        if (rax_53 == 0 || rax_53 == 0xc)
                                                                                            i = arg1 + 0xa0
                                                                                            
                                                                                            for (void* r14_1 = i + 0x120; 
                                                                                                    i != r14_1; i += 0x60)
                                                                                                *i = rsi
                                                                                                arg_8 = *(arg1 + 0x68)
                                                                                                rsi += 1
                                                                                                arg_c = *(arg1 + 0x6c)
                                                                                                sub_1425f1850(arg1, i, arg_8.q)
                                                                                            
                                                                                            *(arg1 + 0x40) = 1
                                                                                            i.b = 1
                                                                                        else
                                                                                            i.b = 0
                                                                                    else
                                                                                        i.b = 0
                                                                                else
                                                                                    i.b = 0
                                                                            else
                                                                                i.b = 0
                                                                        else
                                                                            i.b = 0
                                                                    else
                                                                        i.b = 0
                                                                else
                                                                    i.b = 0
                                                            else
                                                                i.b = 0
                                                        else
                                                            i.b = 0
                                                    else
                                                        i.b = 0
                                                else
                                                    i.b = 0
                                            else
                                                i.b = 0
                                        else
                                            i.b = 0
                                    else
                                        i.b = 0
                                else
                                    i.b = 0
                            else
                                arg_8 = 1
                                int32_t rax_19 = sub_1425e8d00(rcx_16, u"Usage", r8_4)
                                
                                if (rax_19 == 0 || rax_19 == 0xc)
                                    int64_t* r12_1 = *(arg1 + 0x60)
                                    var_78 = 0
                                    int32_t r15_1
                                    
                                    if (sub_1425ec4c0(&var_78) != 0)
                                        r15_1 = var_78
                                    else
                                        r15_1 = 1
                                        var_78 = 1
                                        var_70 = 1
                                    
                                    int64_t rax_21 = *r12_1
                                    var_58 = var_78.o
                                    int64_t var_48_1 = var_68
                                    int32_t rax_22 =
                                        (*(rax_21 + 0x18))(r12_1, LowLatencyInternal", &var_58)
                                    
                                    if (r15_1 == 0xa || r15_1 == 0xb)
                                        CoTaskMemFree(var_70.q)
                                    else if (r15_1 == 0xc)
                                        int64_t* rcx_19 = var_70.q
                                        
                                        if (rcx_19 != 0)
                                            (*(*rcx_19 + 8))(rcx_19)
                                    
                                    if (rax_22 == 0 || rax_22 == 0xc)
                                        int64_t* rcx_21 = *(arg1 + 0x60)
                                        arg_8 = 0x42
                                        int32_t rax_24 = sub_1425e8d00(rcx_21, u"Profile", &arg_8)
                                        
                                        if (rax_24 == 0 || rax_24 == 0xc)
                                            int64_t* rcx_22 = *(arg1 + 0x60)
                                            arg_8 = 0
                                            int32_t rax_25 =
                                                sub_1425e8d00(rcx_22, QualityPreset", &arg_8)
                                            
                                            if (rax_25 == 0 || rax_25 == 0xc)
                                                goto label_1425efe3a
                                            
                                            i.b = 0
                                        else
                                            i.b = 0
                                    else
                                        i.b = 0
                                else
                                    i.b = 0
                        else
                            i.b = 0
                    else
                        i.b = 0
                else
                    i.b = 0
                
                int16_t* rcx_43 = var_88
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                return zx.q(i.b)

result.b = 0
return result
