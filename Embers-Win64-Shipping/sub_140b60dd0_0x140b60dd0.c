// 函数: sub_140b60dd0
// 地址: 0x140b60dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
*arg1 = 0
int64_t rsi
rsi.b = 0
arg1[1] = 0
wchar16** r14
r14.b = 0
int32_t rax_2 = arg2[1].d
wchar16* _String2
_String2.b = 0
char var_e8 = 0
char var_e7 = 0

if (rax_2 s> 0)
    sub_1405947f0(arg1, rax_2)
    rax_2 = arg2[1].d

int32_t i_1 = 0

if (rax_2 s> 0)
    uint64_t rbp
    uint64_t arg_18 = rbp
    int16_t* rcx = nullptr
    int16_t* var_d8_1 = nullptr
    int32_t i
    
    do
        wint_t _C = *(rcx + *arg2)
        rbp.b = iswlower(_C) != 0
        uint64_t rbx
        rbx.b = iswupper(_C) != 0
        int32_t rax_6
        rax_6.b = iswdigit(_C) != 0
        char var_e6_1 = rax_6.b
        
        if (i_1 != 0 || arg3 == 0 || _C != 0x62 || arg2[1].d s<= 1)
            goto label_140b60ed3
        
        if (iswupper(*(*arg2 + 2)) == 0)
            rax_6 = zx.d(var_e6_1)
        label_140b60ed3:
            char rax_9
            
            if (rbx.b != 0 || (rax_6.b != 0 && _String2.b == 0))
                rax_9 = var_e8
                
                if (rax_9 == 0 && r14.b == 0 && var_e7 == r14.b)
                    if (rsi.b == 0)
                        int32_t rdx_1 = arg1[1].d
                        rbx = zx.q(rdx_1 - 1)
                        
                        if (rdx_1 == 0)
                            rbx = 0xffffffff
                        
                        int32_t rax_10 = rdx_1 - 1
                        
                        if (rdx_1 == 0)
                            rax_10 = 0
                        
                        if (rax_10 s> 0)
                            int32_t rax_11
                            rax_11.b = rdx_1 s<= 0
                            
                            if (rdx_1 s<= 0)
                                rbx = 0
                            
                            int32_t rax_13 = rax_11 + 1 + rdx_1
                            arg1[1].d = rax_13
                            
                            if (rax_13 s> *(arg1 + 0xc))
                                sub_140594770(arg1)
                            
                            int64_t rcx_6 = sx.q(rbx.d)
                            rsi.b = 1
                            *(*arg1 + (rcx_6 << 1)) = 0x20
                            *(*arg1 + (rcx_6 << 1) + 2) = 0
                    
                    rax_9 = 1
            else
                rax_9 = var_e8
            
            char rcx_7 = 0
            
            if (rbp.b == 0)
                rcx_7 = rax_9
            
            var_e8 = rcx_7
            
            if (_C == 0x5f)
                _C = 0x20
                var_e8 = 1
            
            int32_t rax_17 = arg1[1].d
            int32_t rcx_8 = rax_17 - 1
            
            if (rax_17 == 0)
                rcx_8 = 0
            
            if (rcx_8 == 0)
                int32_t rax_19
                rax_19.w = sbb.w(_C - 0x61, _C - 0x61, zx.d(_C) - 0x61 u< 0x1a)
                rax_19.w &= 0x20
                _C -= rax_19.w
            else if (var_e6_1 == 0 && (rsi.b != 0 || r14.b != 0))
                char var_e5_1 = 0
                wchar16* var_c8 = &data_142d57334
                r14 = &var_c8
                rbp = 0
                void* const var_c0_1 = &data_142e7bb4c
                void* const var_b8_1 = &data_142e7bb54
                void* const var_b0_1 = &data_142e7bb5c
                void* const var_a8_1 = &data_142e7bb64
                void* const var_a0_1 = &data_142e657e0
                void* const var_98_1 = &data_142e7bb6c
                void* const var_90_1 = &data_142e7bb74
                void* const var_88_1 = &data_142e7bb7c
                void* const var_80_1 = &data_142e7bb88
                void* const var_78_1 = &data_142e7bb90
                void* const var_70_1 = &data_142e7bb98
                wchar16 const* const var_68_1 = u"With"
                wchar16 const* const var_60_1 = u"When"
                wchar16 const* const var_58_1 = u"From"
                
                do
                    _String2 = *r14
                    rbx = -1
                    
                    do
                        rbx += 1
                    while (_String2[rbx] != 0)
                    
                    if (arg2[1].d - i_1 s> rbx.d)
                        rsi = sx.q(rbx.d + i_1) * 2
                        int32_t rax_24 = iswlower(*(rsi + *arg2))
                        
                        if (rax_24 == 0)
                            int16_t* rcx_12 = *arg2
                            
                            if (*(rcx_12 + rsi) != rax_24.w
                                    && wcsncmp(&rcx_12[sx.q(i_1)], _String2, sx.q(rbx.d)) == 0)
                                var_e5_1 = 1
                                break
                    
                    rbp = zx.q(rbp.d + 1)
                    r14 = &r14[1]
                while (rbp.d u< 0xf)
                
                uint32_t _C_1 = zx.d(_C)
                
                if (var_e5_1 == 0)
                    int32_t rax_28
                    rax_28.w = sbb.w((_C_1 - 0x61).w, (_C_1 - 0x61).w, _C_1 - 0x61 u< 0x1a)
                    rax_28.w &= 0x20
                    _C -= rax_28.w
                else
                    int32_t rax_27
                    rax_27.w = sbb.w((_C_1 - 0x41).w, (_C_1 - 0x41).w, _C_1 - 0x41 u< 0x1a)
                    rax_27.w &= 0x20
                    _C += rax_27.w
            
            rsi.b = _C == 0x20
            r14.b = _C == 0x28
            _String2.b = _C == 0x2d
            int16_t rax_29
            rax_29.b = _C - 0x2d u<= 1
            
            if (var_e6_1 != 0 || (var_e7 != 0 && rax_29.b != 0))
                var_e7 = 1
            else
                var_e7 = 0
            
            if (_C != 0)
                int32_t rdx_3 = arg1[1].d
                int32_t rax_30
                rax_30.b = rdx_3 s<= 0
                rbx = zx.q(rdx_3 - 1)
                
                if (rdx_3 s<= 0)
                    rbx = 0
                
                int32_t rax_32 = rax_30 + 1 + rdx_3
                arg1[1].d = rax_32
                
                if (rax_32 s> *(arg1 + 0xc))
                    sub_140594770(arg1)
                
                int64_t rdx_4 = sx.q(rbx.d)
                *(*arg1 + (rdx_4 << 1)) = _C
                *(*arg1 + (rdx_4 << 1) + 2) = 0
        
        i = i_1 + 1
        rcx = &var_d8_1[1]
        i_1 = i
        var_d8_1 = rcx
    while (i s< arg2[1].d)

__security_check_cookie(rax_1 ^ &var_108)
return arg1
