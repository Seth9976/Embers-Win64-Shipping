// 函数: sub_142432bc0
// 地址: 0x142432bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* arg_18 = arg3
arg3.b = 1
char rax
int64_t r8
rax, r8 = sub_140b0f6c0(&arg_18, u"FLUSHPERSISTENTDEBUGLINES")

if (rax != 0)
    sub_141f124a0(*(arg1 + 0x48))
    int64_t rax_1
    rax_1.b = 1
    return rax_1

r8.b = 1
char rax_2
int64_t r8_1
rax_2, r8_1 = sub_140b0f6c0(&arg_18, u"LOGACTORCOUNTS")

if (rax_2 == 0)
    r8_1.b = 1
    char rax_5
    int64_t r8_3
    rax_5, r8_3 = sub_140b0f6c0(&arg_18, u"DEMOREC")
    
    if (rax_5 != 0)
        return sub_142438270(arg1, arg_18, arg4, arg2)
    
    r8_3.b = 1
    char rax_7
    int64_t r8_5
    rax_7, r8_5 = sub_140b0f6c0(&arg_18, u"DEMOPLAY")
    
    if (rax_7 != 0)
        return sub_142437ee0(arg1, arg_18, arg4, arg2)
    
    r8_5.b = 1
    int64_t rax_9
    int64_t r8_7
    rax_9, r8_7 = sub_140b0f6c0(&arg_18, u"DEMOSTOP")
    
    if (rax_9.b != 0)
        if (arg2 != 0)
            int64_t* rcx_10 = *(arg2 + 0x188)
            
            if (rcx_10 != 0)
                (*(*rcx_10 + 0x2f8))(rcx_10)
                int64_t rax_11
                rax_11.b = 1
                return rax_11
        
        rax_9.b = 1
        return rax_9
    
    r8_7.b = 1
    char rax_12
    int64_t r8_8
    rax_12, r8_8 = sub_140b0f6c0(&arg_18, u"DEMOSCRUB")
    int16_t* var_48
    uint64_t _String_2
    int512_t zmm1
    
    if (rax_12 != 0)
        var_48 = arg_18
        _String_2 = 0
        int32_t var_28_1 = 0
        
        if (sub_140b295a0(&var_48, &_String_2, 0) != 0)
            rax_9 = *(arg1 + 0xf0)
            
            if (rax_9 != 0 && *(rax_9 + 0x770) != 0)
                void* rcx_14 = *(rax_9 + 0x88)
                
                if (rcx_14 != 0)
                    void* rsi_1 = *(rcx_14 + 0x98)
                    
                    if (rsi_1 != 0)
                        void* rax_15 = sub_14256a090()
                        void* rdx_3 = *(rsi_1 + 0x10)
                        rax_9 = sx.q(*(rax_15 + 0x38))
                        
                        if (rax_9.d s<= *(rdx_3 + 0x38)
                                && *(*(rdx_3 + 0x30) + (rax_9 << 3)) == rax_15 + 0x30)
                            void* rcx_16 = *(arg1 + 0x30)
                            int64_t* rax_16 = nullptr
                            
                            if (rcx_16 != 0)
                                rdx_3.b = 1
                                rax_16 = sub_1420e4e60(rcx_16)
                            
                            int64_t r8_10 = *rax_16
                            (*(r8_10 + 0x660))(rax_16, *(rsi_1 + 0x228), r8_10)
                            int16_t* const _String = &data_142d40450
                            
                            if (var_28_1 != 0)
                                _String = _String_2
                            
                            int32_t rax_17 = _wtoi(_String)
                            void* rcx_18 = *(arg1 + 0xf0)
                            zmm1.o = zx.o(0)
                            int64_t var_40 = nullptr
                            int32_t var_38_1 = 0
                            zmm1.d = float.s(zx.q(rax_17))
                            sub_141fb6490(rcx_18, zmm1, &var_40)
                            
                            if (var_38_1 == 0)
                                rax_9 = var_40
                            label_142432e57:
                                
                                if (rax_9 != 0)
                                    sub_140a74f90(rax_9)
                            else
                                int64_t* rcx_19 = var_40
                                
                                if (rcx_19 != 0)
                                    (*(*rcx_19 + 0x38))(rcx_19, 0)
                                    rax_9 = var_40
                                    
                                    if (rax_9 != 0)
                                        rax_9 = sub_140a84c80(rax_9, 0, 0)
                                        var_40 = rax_9
                                    
                                    int32_t var_38_2 = 0
                                    goto label_142432e57
        else
            sub_140b1f640(arg4, u"You must specify a time")
        
        goto label_142432fd8
    
    r8_8.b = 1
    char rax_20
    int64_t rdx_5
    int64_t r8_12
    rax_20, rdx_5, r8_12 = sub_140b0f6c0(&arg_18, u"DEMOPAUSE")
    
    if (rax_20 != 0)
        void* rcx_23 = *(arg1 + 0x30)
        int64_t* rbx_1 = nullptr
        
        if (rcx_23 != 0)
            rdx_5.b = 1
            rbx_1 = sub_1420e4e60(rcx_23)
        
        if (rbx_1[0x6e] != 0)
            (*(*rbx_1 + 0x660))(rbx_1, 0)
            int64_t rax_26
            rax_26.b = 1
            return rax_26
        
        rax_9 = *(arg1 + 0xf0)
        
        if (rax_9 != 0)
            void* rdi_1 = *(rax_9 + 0x88)
            
            if (rdi_1 != 0)
                void* rdi_2 = *(rdi_1 + 0x98)
                
                if (rdi_2 != 0)
                    void* rax_22 = sub_14256a090()
                    void* rdx_6 = *(rdi_2 + 0x10)
                    rax_9 = sx.q(*(rax_22 + 0x38))
                    
                    if (rax_9.d s<= *(rdx_6 + 0x38)
                            && *(*(rdx_6 + 0x30) + (rax_9 << 3)) == rax_22 + 0x30)
                        (*(*rbx_1 + 0x660))(rbx_1, *(rdi_2 + 0x228))
                        int64_t rax_24
                        rax_24.b = 1
                        return rax_24
        
        rax_9.b = 1
        return rax_9
    
    r8_12.b = 1
    char rax_27
    int64_t rdx_8
    rax_27, rdx_8 = sub_140b0f6c0(&arg_18, u"DEMOSPEED")
    
    if (rax_27 != 0)
        void* rcx_28 = *(arg1 + 0x30)
        void* r14_1 = nullptr
        var_48 = arg_18
        
        if (rcx_28 != 0)
            rdx_8.b = 1
            r14_1 = sub_1420e4e60(rcx_28)
        
        _String_2 = 0
        int32_t var_28_2 = 0
        char rax_30
        int64_t zmm0_1
        rax_30, zmm0_1 = sub_140b295a0(&var_48, &_String_2, 0)
        
        if (rax_30 != 0)
            wchar16* _String_1 = &data_142d40450
            
            if (var_28_2 != 0)
                _String_1 = _String_2
            
            _wtof(_String_1)
            zmm1.o = zx.o(0)
            zmm1.d = fconvert.s(zmm0_1)
            *(r14_1 + 0x2f0) = zmm1.d
        else
            sub_140b1f640(arg4, u"You must specify a speed in the form of a float")
        
    label_142432fd8:
        uint64_t _String_3 = _String_2
        
        if (_String_3 != 0)
            sub_140a74f90(_String_3)
        
        rax_9.b = 1
        return rax_9
    
    char rax_31 = sub_1422694e0(arg_18, arg4, arg2)
    
    if (rax_31 == 0)
        return rax_31

sub_140b1f700(arg4, u"Num Actors: %i", zx.q(sub_1424359e0(arg2)))
wchar16 (* rax_4)[0x200]
rax_4.b = 1
return rax_4
