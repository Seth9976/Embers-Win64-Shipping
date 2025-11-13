// 函数: sub_140abd420
// 地址: 0x140abd420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg2[1].d
int32_t arg_10 = 0
int32_t r9 = rax - 1

if (rax == 0)
    r9 = 0

wchar16* _String2

if (rax == 0)
    _String2 = &data_142d40450
else
    _String2 = *arg2

if (wcsncmp(arg1, _String2, sx.q(r9)) == 0)
    int32_t rax_2 = arg2[1].d
    int32_t rcx = rax_2 - 1
    
    if (rax_2 == 0)
        rcx = 0
    
    wchar16* _String1 = &arg1[sx.q(rcx)]
    int32_t rax_4 = wcsncmp(_String1, u"_CUSTOM", 7)
    wchar16* rsi
    rsi.b = rax_4 == 0
    
    if (rax_4 != 0)
        int128_t* rax_6
        
        if (wcsncmp(_String1, u"_GROUPED", 8) != 0)
            if (wcsncmp(_String1, u"_UNGROUPED", 0xa) == 0)
                _String1 = &_String1[0xa]
                rax_6 = sub_140aa6020()
                goto label_140abd4f6
            
            if (*(arg4 + 0x18) != 0)
                *(arg4 + 0x18) = 0
        else
            _String1 = &_String1[8]
            rax_6 = sub_140aa60c0()
        label_140abd4f6:
            
            if (rax_6 != arg4)
                if (*(arg4 + 0x18) != 0)
                    *(arg4 + 0x18) = 0
                
                *arg4 = *rax_6
                arg4[1].q = rax_6[1].q
                *(arg4 + 0x18) = 1
    else
        _String1 = &_String1[7]
    
    wchar16 i = *_String1
    
    if (i != 0)
        while (i == 9 || i == 0x20)
            i = _String1[1]
            _String1 = &_String1[1]
            
            if (i == 0)
                break
    
    wchar16* _String1_1 = nullptr
    
    if (*_String1 == 0x28)
        _String1_1 = _String1
    
    wchar16* _String1_2 = &_String1_1[1]
    
    if (_String1_1 == 0)
        _String1_2 = _String1_1
    
    if (_String1_2 != 0)
        wchar16 i_1 = *_String1_2
        
        if (i_1 != 0)
            while (i_1 == 9 || i_1 == 0x20)
                i_1 = _String1_2[1]
                _String1_2 = &_String1_2[1]
                
                if (i_1 == 0)
                    break
        
        int16_t* rax_8 = sub_140abcf90(_String1_2, arg3)
        
        if (rax_8 != 0)
            if (rsi.b == 0)
            label_140abd636:
                int16_t* rax_10 = sub_140ac5870(rax_8, 0x2c)
                int16_t* rcx_7 = rax_10
                
                if (rax_10 != 0)
                    int64_t var_68 = 0
                    int32_t var_60_1 = 0
                    int16_t i_2 = *rax_10
                    
                    if (i_2 != 0)
                        while (i_2 == 9 || i_2 == 0x20)
                            i_2 = rcx_7[1]
                            rcx_7 = &rcx_7[1]
                            
                            if (i_2 == 0)
                                break
                    
                    void* rax_11 = sub_140abd7c0(rcx_7, &var_68)
                    int16_t* result_1
                    int16_t* result
                    
                    if (rax_11 != 0)
                        int128_t var_58
                        int128_t* rax_12
                        int32_t rsi_1
                        
                        if (var_60_1 s> 1)
                            void var_48
                            rax_12 = sub_140a783a0(sub_140a752e0(), &var_48, &var_68)
                            rsi_1 = 2
                        else
                            rax_12 = &var_58
                            var_58 = zx.o(0)
                            rsi_1 = 1
                        
                        if (arg5 != rax_12)
                            *arg5 = *rax_12
                            *rax_12 = 0
                            sub_1405aeff0(&arg5[1], rax_12 + 8)
                        
                        if ((rsi_1.b & 2) != 0)
                            rsi_1 &= 0xfffffffd
                            int64_t* var_40
                            
                            if (var_40 != 0)
                                var_40[1].d -= 1
                                
                                if (var_40[1].d == 1)
                                    (**var_40)(var_40)
                                    int32_t rax_16 = *(var_40 + 0xc)
                                    *(var_40 + 0xc) -= 1
                                    
                                    if (rax_16 == 1)
                                        (*(*var_40 + 8))(var_40, 1)
                        
                        if ((rsi_1.b & 1) != 0)
                            void* rcx_13 = var_58:8.q
                            
                            if (rcx_13 != 0)
                                int32_t rax_18 = *(rcx_13 + 8)
                                *(rcx_13 + 8) -= 1
                                
                                if (rax_18 == 1)
                                    int64_t* rbx_2 = var_58:8.q
                                    (**rbx_2)(rbx_2)
                                    int32_t rdi_1 = *(rbx_2 + 0xc)
                                    *(rbx_2 + 0xc) -= 1
                                    
                                    if (rdi_1 == 1)
                                        int64_t* rcx_15 = var_58:8.q
                                        (*(*rcx_15 + 8))(rcx_15, zx.q(rdi_1))
                        
                        result_1 = sub_140ac5870(rax_11, 0x29)
                        result = result_1
                    
                    if (rax_11 == 0 || result_1 == 0)
                        result = nullptr
                    
                    int64_t rcx_17 = var_68
                    
                    if (rcx_17 != 0)
                        sub_140a74f90(rcx_17)
                    
                    return result
            else
                int16_t* rax_9 = sub_140ac5870(rax_8, 0x2c)
                int16_t* rcx_5 = rax_9
                
                if (rax_9 != 0)
                    int128_t var_34
                    __builtin_memcpy(&var_34, 
                        "\x00\x00\x00\x00\x01\x00\x00\x00\x44\x01\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00", 
                        0x14)
                    int16_t var_38 = 0x100
                    int16_t i_3 = *rax_9
                    
                    if (i_3 != 0)
                        while (i_3 == 9 || i_3 == 0x20)
                            i_3 = rcx_5[1]
                            rcx_5 = &rcx_5[1]
                            
                            if (i_3 == 0)
                                break
                    
                    rax_8 = sub_140abc7b0(rcx_5, &var_38)
                    
                    if (rax_8 != 0)
                        if (&var_38 != arg4)
                            int64_t zmm1_2 = var_34:0xc.q
                            *arg4 = var_38.o
                            arg4[1].q = zmm1_2
                            *(arg4 + 0x18) = 1
                        
                        goto label_140abd636

return nullptr
