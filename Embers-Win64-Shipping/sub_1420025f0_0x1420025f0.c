// 函数: sub_1420025f0
// 地址: 0x1420025f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16* arg_18 = arg3
arg3.b = 1
int64_t rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"REATTACHCOMPONENTS")

if (rax.b == 0)
    r8.b = 1
    int64_t r8_1
    rax, r8_1 = sub_140b0f6c0(&arg_18, u"REREGISTERCOMPONENTS")
    
    if (rax.b == 0)
        r8_1.b = 1
        char rax_1
        int64_t r8_2
        rax_1, r8_2 = sub_140b0f6c0(&arg_18, u"EXIT")
        char rax_2
        int64_t r8_3
        
        if (rax_1 == 0)
            r8_2.b = 1
            rax_2, r8_3 = sub_140b0f6c0(&arg_18, u"QUIT")
        
        int16_t* var_38
        int32_t var_30
        int16_t* rcx_42
        
        if (rax_1 != 0 || rax_2 != 0)
            sub_140b294d0(&var_38, &arg_18, 0)
            
            if (var_30 s> 1)
                int16_t* rcx_38 = &data_142d40450
                
                if (var_30 != 0)
                    rcx_38 = var_38
                
                sub_140a54510(rcx_38, u"background")
            
            sub_140b1f640(arg4, u"Closing by request")
            TEB* gsbase
            
            if (data_143f3f404 s>
                    *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                _Init_thread_header(&data_143f3f404)
                
                if (data_143f3f404 == 0xffffffff)
                    int128_t zmm0 = data_142e151c0
                    data_143a2df70 = zmm0
                    data_143a2df50 = 0
                    data_143a2df58 = 0
                    data_143a2df68 = 0
                    data_143a2df80 = 0
                    data_143a2df88 = 0
                    data_143a2df98 = 0
                    data_143a2dfa0 = zmm0
                    data_143a2dfb0 = 0
                    data_143a2dfb8 = 0
                    data_143a2dfc8 = 0
                    data_143a2dfd0 = zmm0
                    data_143a2dfe0 = 0
                    data_143a2dfe8 = 0
                    data_143a2dff8 = 0
                    data_143a2e000 = 0
                    data_143a2e008 = 0
                    data_143a2e010 = 0
                    data_143a2e018 = 0
                    data_143a2e020 = 0
                    data_143a2e028 = 0
                    data_143a2e030 = 0
                    data_143a2e038 = 0
                    data_143a2e040 = 0
                    data_143a2e048 = 0
                    data_143a2e050 = 0
                    data_143a2df60 = 2
                    data_143a2df90 = 2
                    data_143a2dfc0 = 2
                    data_143a2dff0 = 2
                    atexit(sub_142cfff80)
                    _Init_thread_footer(&data_143f3f404)
            
            sub_140599090(&data_143a2df50)
            sub_140b721f0(0)
            rcx_42 = var_38
        label_142002a80:
            
            if (rcx_42 != 0)
                sub_140a74f90(rcx_42)
        else
            r8_3.b = 1
            char rax_3
            int64_t r8_4
            rax_3, r8_4 = sub_140b0f6c0(&arg_18, u"GETMAXTICKRATE")
            
            if (rax_3 != 0)
                int512_t zmm1
                zmm1.o = zx.o(0)
                (*(*(arg1 - 0x28) + 0x2b0))(arg1 - 0x28, zmm1, 0)
                sub_140b1f700(arg4, u"%f", fconvert.d(arg5))
                wchar16 (* rax_5)[0x200]
                rax_5.b = 1
                return rax_5
            
            r8_4.b = 1
            char rax_6
            int64_t r8_6
            rax_6, r8_6 = sub_140b0f6c0(&arg_18, u"CANCEL")
            
            if (rax_6 != 0)
                (*(*(arg1 - 0x28) + 0x480))(arg1 - 0x28, sub_1423de4f0(arg1 - 0x28, arg2))
                int64_t rax_8
                rax_8.b = 1
                return rax_8
            
            r8_6.b = 1
            char rax_9
            int64_t r8_7
            rax_9, r8_7 = sub_140b0f6c0(&arg_18, u"TOGGLECVAR")
            
            if (rax_9 != 0)
                uint64_t var_78 = 0
                int32_t var_70_1 = 0
                sub_140b295a0(&arg_18, &var_78, 0)
                int32_t rcx_12 = var_70_1
                int16_t* const rdi_2 = &data_142d40450
                int64_t r12
                r12.b = 0
                uint64_t r8_11
                
                if (rcx_12 == 0)
                label_1420028da:
                    r8_11 = &data_142d40450
                label_1420028e8:
                    sub_140a2e390(&var_38, u"TOGGLECVAR: cvar '%s' was not found", r8_11)
                    
                    if (var_30 != 0)
                        rdi_2 = var_38
                    
                    sub_140b1f640(arg4, rdi_2)
                    int16_t* rcx_28 = var_38
                    
                    if (rcx_28 != 0)
                        sub_140a74f90(rcx_28)
                else
                    if (rcx_12 - 1 s<= 0)
                        goto label_1420028d2
                    
                    int64_t* r9 = data_143db18d0
                    
                    if (r9 == 0)
                        sub_140a53c40()
                        rcx_12 = var_70_1
                        r9 = data_143db18d0
                    
                    int16_t* const rdx_3 = &data_142d40450
                    int64_t r8_8
                    r8_8.b = 1
                    
                    if (rcx_12 != 0)
                        rdx_3 = var_78
                    
                    int64_t* rax_12 = (*(*r9 + 0xb0))(r9, rdx_3, r8_8)
                    
                    if (rax_12 == 0)
                        rcx_12 = var_70_1
                    label_1420028d2:
                        r8_11 = var_78
                        
                        if (rcx_12 != 0)
                            goto label_1420028e8
                        
                        goto label_1420028da
                    
                    uint64_t var_68 = 0
                    int32_t var_60_1 = 0
                    uint64_t var_58 = 0
                    int32_t var_50_1 = 0
                    
                    if (sub_140b295a0(&arg_18, &var_68, 0).b != 0
                            && sub_140b295a0(&arg_18, &var_58, 0).b != 0)
                        r12.b = 1
                        (*(*rax_12 + 0xa0))(rax_12, &var_38)
                        int16_t* const rdx_7 = &data_142d40450
                        int16_t* const rcx_17 = &data_142d40450
                        
                        if (var_60_1 != 0)
                            rdx_7 = var_68
                        
                        if (var_30 != 0)
                            rcx_17 = var_38
                        
                        sub_140a54510(rcx_17, rdx_7)
                        int16_t* const r8_9 = &data_142d40450
                        
                        if (var_70_1 != 0)
                            r8_9 = var_78
                        
                        int16_t* var_48
                        sub_140a2e390(&var_48, u"%s %s", r8_9)
                        int32_t var_40
                        
                        if (var_40 != 0)
                            rdi_2 = var_48
                        
                        int64_t rbx_1 = *(data_143f5b298 + 0x28)
                        sub_140b19e60()
                        (*(rbx_1 + 8))(data_143f5b298 + 0x28, arg2, rdi_2, &data_1439a8bd0)
                        int16_t* rcx_21 = var_48
                        
                        if (rcx_21 != 0)
                            sub_140a74f90(rcx_21)
                        
                        int16_t* rcx_22 = var_38
                        
                        if (rcx_22 != 0)
                            sub_140a74f90(rcx_22)
                    
                    uint64_t rcx_23 = var_58
                    
                    if (rcx_23 != 0)
                        sub_140a74f90(rcx_23)
                    
                    uint64_t rcx_24 = var_68
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    if (r12.b == 0)
                        sub_140b1f640(arg4, u"Usage: TOGGLECVAR CVarName Value1 Value2")
                rcx_42 = var_78
                goto label_142002a80
            
            if (arg2 == 0)
            label_14200296d:
                r8_7.b = 1
                char rax_17
                int64_t r8_14
                rax_17, r8_14 = sub_140b0f6c0(&arg_18, &data_142ea6100)
                char rax_18
                
                if (rax_17 == 0)
                    r8_14.b = 1
                    rax_18 = sub_140b0f6c0(&arg_18, u"SETNOPEC")
                
                if (rax_17 == 0 && rax_18 == 0)
                    goto label_1420029d9
                
                if (*(sub_1423de4f0(arg1 - 0x28, arg2) + 0x1a0) == 0 && sub_14243ac50(arg2).d == 0)
                    data_143f3f3c8 = 1
                label_1420029d9:
                    
                    if (sub_1423db790(arg1, arg2, arg_18, arg4).b == 0)
                        rax = sub_1422f5a40(arg_18)
                        
                        if (rax.b == 0)
                            return rax
            else
                rax, r8_7 = sub_142432bc0(arg2, arg2, arg_18, arg4)
                
                if (rax.b == 0)
                    int64_t* rcx_30 = *(arg2 + 0x128)
                    
                    if (rcx_30 == 0)
                        goto label_14200296d
                    
                    rax, r8_7 = (*(*rcx_30 + 0x228))(rcx_30, arg_18, arg4, 0)
                    
                    if (rax.b == 0)
                        goto label_14200296d

rax.b = 1
return rax
