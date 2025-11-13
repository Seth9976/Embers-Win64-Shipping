// 函数: sub_14292f500
// 地址: 0x14292f500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rsi = arg3
int32_t* rbx = arg2
void** result = sub_1428db530(&data_143537f90)
int32_t var_58_1
int32_t r8

if (result == 0)
label_14292f6cf:
    var_58_1 = 0x16e
    r8 = 0x41
else
    void* rax = sub_1428a9570(0xa5)
    *result = rax
    
    if (rax != 0)
        int64_t* rax_1 = sub_1428db530(&data_143538000)
        
        if (rax_1 == 0)
            goto label_14292f6cf
        
        result[1] = rax_1
        int32_t r12_1 = 0
        
        if (sub_142898c70(rbx) s> 0)
            while (true)
                int64_t* rax_3 = sub_142898ea0(rbx, r12_1)
                char* _Str1 = rax_3[1]
                char* rbx_1 = rax_3[2]
                int32_t rax_4 = strcmp(_Str1, "explicitText")
                
                if (rax_4 != 0)
                    if (strcmp(_Str1, "organization") != 0)
                        if (strcmp(_Str1, "noticeNumbers") != 0)
                            int32_t var_58_4 = 0x15e
                            sub_1428a5670(0x22, 0x84, 0x8a, "crypto\x509v3\v3_cpols.c", 0x15e)
                            *rax_3
                            int64_t var_48_2 = rax_3[2]
                            char const* const var_50_2 = ",value:"
                            var_58_4.q = rax_3[1]
                            sub_1428a4880(6)
                            goto label_14292f6fb
                        
                        void* rdi_1 = *rax_1
                        
                        if (rdi_1 == 0)
                            void* rax_19 = sub_1428db530(&data_143538070)
                            rdi_1 = rax_19
                            
                            if (rax_19 == 0)
                                goto label_14292f6cf
                            
                            *rax_1 = rax_19
                            rbx_1 = rax_3[2]
                        
                        int32_t* rax_20 = sub_1428e91e0(rbx_1)
                        int32_t rax_21
                        
                        if (rax_20 != 0)
                            rax_21 = sub_142898c70(rax_20)
                        
                        if (rax_20 == 0 || rax_21 == 0)
                            int32_t var_58_3 = 0x154
                            sub_1428a5670(0x22, 0x84, 0x8d, "crypto\x509v3\v3_cpols.c", 0x154)
                            *rax_3
                            int64_t var_48_1 = rax_3[2]
                            char const* const var_50_1 = ",value:"
                            var_58_3.q = rax_3[1]
                            sub_1428a4880(6)
                            sub_142898cb0(rax_20, sub_1428e8d70)
                            goto label_14292f6fb
                        
                        int32_t* rbp_1 = *(rdi_1 + 8)
                        int32_t rbx_2 = 0
                        int32_t rbx_3
                        
                        if (sub_142898c70(rax_20) s<= 0)
                        label_14292f845:
                            rbx_3 = 1
                        else
                            while (true)
                                void* rax_24 = sub_1428ea640(0, *(sub_142898ea0(rax_20, rbx_2) + 8))
                                int32_t rax_29
                                int32_t r8_3
                                
                                if (rax_24 == 0)
                                    rax_29 = 0x17f
                                    r8_3 = 0x8c
                                else if (sub_142898d50(rbp_1, rax_24) == 0)
                                    sub_1428c3460(rax_24)
                                    rax_29 = 0x189
                                    r8_3 = 0x41
                                else
                                    rbx_2 += 1
                                    
                                    if (rbx_2 s>= sub_142898c70(rax_20))
                                        goto label_14292f845
                                    
                                    continue
                                
                                sub_1428a5670(0x22, 0x85, r8_3, "crypto\x509v3\v3_cpols.c", rax_29)
                                rbx_3 = 0
                                break
                        
                        sub_142898cb0(rax_20, sub_1428e8d70)
                        
                        if (rbx_3 == 0)
                            goto label_14292f6fb
                        
                        rsi = arg3
                    else
                        int64_t* r9_2 = *rax_1
                        
                        if (r9_2 == 0)
                            int64_t* rax_15 = sub_1428db530(&data_143538070)
                            r9_2 = rax_15
                            
                            if (rax_15 == 0)
                                goto label_14292f6cf
                            
                            *rax_1 = rax_15
                        
                        int32_t rcx_12 = 0x16
                        int64_t r8_2 = -1
                        
                        if (rsi == 0)
                            rcx_12 = 0x1a
                        
                        *(*r9_2 + 4) = rcx_12
                        char* rdx_4 = rax_3[2]
                        
                        do
                            r8_2 += 1
                        while (rdx_4[r8_2] != 0)
                        
                        if (sub_1428f2d50(*r9_2, rdx_4, r8_2.d) == 0)
                            goto label_14292f6cf
                else
                    int32_t _MaxCount_2 = 0
                    char* rax_5 = strchr(rbx_1, rax_4 + 0x3a)
                    int32_t rcx_5
                    
                    if (rax_5 == 0)
                        rcx_5 = 0x1a
                    else
                        int32_t _MaxCount_1 = rax_5.d - rbx_1.d
                        
                        if (_MaxCount_1 == 0xffffffff)
                            rcx_5 = 0x1a
                        else
                            _MaxCount_2 = _MaxCount_1
                            char const* const _Str2
                            uint64_t _MaxCount
                            
                            if (_MaxCount_1 != 4)
                                _MaxCount = sx.q(_MaxCount_1)
                                
                                if (_MaxCount_1 == 0xa)
                                    _Str2 = "UTF8String"
                                    goto label_14292f602
                                
                                char* _Str2_1
                                
                                if (_MaxCount_1 != 3)
                                    if (_MaxCount_1 == 9)
                                        _Str2_1 = "BMPSTRING"
                                        goto label_14292f631
                                    
                                    if (_MaxCount_1 == 7)
                                        if (strncmp(rbx_1, "VISIBLE", _MaxCount) != 0)
                                            _MaxCount_2 = 0
                                            rcx_5 = 0x1a
                                        else
                                            rcx_5 = 0x1a
                                    else if (_MaxCount_1 != 0xd)
                                        _MaxCount_2 = 0
                                        rcx_5 = 0x1a
                                    else if (strncmp(rbx_1, "VISIBLESTRING", _MaxCount) == 0)
                                        rcx_5 = 0x1a
                                    else
                                        _MaxCount_2 = 0
                                        rcx_5 = 0x1a
                                else
                                    _Str2_1 = &data_1435381dc
                                label_14292f631:
                                    int32_t rax_7 = strncmp(rbx_1, _Str2_1, _MaxCount)
                                    
                                    if (rax_7 != 0)
                                        _MaxCount_2 = 0
                                        rcx_5 = 0x1a
                                    else
                                        rcx_5 = rax_7 + 0x1e
                            else
                                _MaxCount = zx.q(_MaxCount_1)
                                _Str2 = "UTF8"
                            label_14292f602:
                                int32_t rax_6 = strncmp(rbx_1, _Str2, _MaxCount)
                                
                                if (rax_6 != 0)
                                    _MaxCount_2 = 0
                                    rcx_5 = 0x1a
                                else
                                    rcx_5 = rax_6 + 0xc
                    
                    int32_t* rax_10 = sub_1428f2e90(rcx_5)
                    rax_1[1] = rax_10
                    
                    if (rax_10 == 0)
                        goto label_14292f6cf
                    
                    if (_MaxCount_2 != 0)
                        rbx_1 = &rbx_1[zx.q(_MaxCount_2 + 1)]
                    
                    int64_t rax_11 = -1
                    
                    do
                        rax_11 += 1
                    while (rbx_1[rax_11] != 0)
                    
                    if (sub_1428f2d50(rax_10, rbx_1, rax_11.d) == 0)
                        goto label_14292f6cf
                
                rbx = arg2
                r12_1 += 1
                
                if (r12_1 s>= sub_142898c70(rbx))
                    break
        
        int64_t* rax_28 = *rax_1
        
        if (rax_28 == 0)
            return result
        
        if (rax_28[1] != 0 && *rax_28 != 0)
            return result
        
        var_58_1 = 0x167
        r8 = 0x8e
    else
        var_58_1 = 0x128
        r8 = (rax + 0x44).d

sub_1428a5670(0x22, 0x84, r8, "crypto\x509v3\v3_cpols.c", var_58_1)
label_14292f6fb:
sub_1428c3d60(result, &data_143537f90)
return nullptr
