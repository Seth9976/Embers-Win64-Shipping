// 函数: sub_1405877e0
// 地址: 0x1405877e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* r14 = arg2
int32_t rax = arg1[4].d

if (rax == 1)
    sub_140587cf0(arg1)

arg2.b = 0x4d
sub_14058b2f0(r14)
int64_t rdx
rdx.b = 0x54
sub_14058b2f0(r14)
int64_t rdx_1
rdx_1.b = 0x68
sub_14058b2f0(r14)
int64_t rdx_2
rdx_2.b = 0x64
sub_14058b2f0(r14)
sub_14058b2f0(r14)
sub_14058b2f0(r14)
sub_14058b2f0(r14)
int64_t rdx_6
rdx_6.b = 6
sub_14058b2f0(r14)
int64_t rbx
rbx.b = ((arg1[1] - *arg1) s>> 3).d != 1
sub_14058b2f0(r14)
sub_14058b2f0(r14)
arg1[1] - *arg1
sub_14058b2f0(r14)
sub_14058b2f0(r14)
arg1[3].w
sub_14058b2f0(r14)
sub_14058b2f0(r14)
int128_t var_68
__builtin_memset(&var_68, 0, 0x18)
int32_t arg_8 = 0x2fff00
int32_t i = 0
int32_t i_1 = 0
int64_t* rdx_13 = *arg1
wchar16* _Str = var_68.q
int64_t var_58

if (((arg1[1] - rdx_13) s>> 3).d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        if (var_58 - _Str u< 0x1e240)
            sub_14058ac70(&var_68, 0x1e240)
            rdx_13 = *arg1
            _Str = var_68.q
        
        wchar16* _Str_2 = _Str
        var_68:8.q = _Str_2
        int32_t j = 0
        int64_t* rax_8 = *(rdx_13 + rsi_1)
        
        if (((rax_8[1] - *rax_8) s>> 3).d s> 0)
            int64_t* rdi = nullptr
            int64_t* rax_28
            
            do
                int64_t* r9_1 = *(rdi + **(rdx_13 + rsi_1))
                char* rax_10 = *r9_1
                int64_t rcx_19 = r9_1[1]
                
                if (rax_10 != rcx_19)
                    void* rcx_20 = rcx_19 - rax_10
                    
                    if (rcx_19 == rax_10 || *rax_10 != 0xff || rcx_20 u< 3 || rax_10[1] != 0x2f)
                        sub_140588c80(rcx_20, r9_1[3].d, &var_68)
                        rdx_13 = *arg1
                        int64_t* rax_12 = *(rdi + **(rdx_13 + rsi_1))
                        char* r8_2 = *rax_12
                        void* rcx_23 = rax_12[1] - r8_2
                        char rax_13
                        
                        if (rcx_23 u>= 1)
                            rax_13 = *r8_2
                        
                        if (rcx_23 u>= 1 && (rax_13 == 0xf0 || rax_13 == 0xf7))
                            char* rdx_15 = var_68:8.q
                            
                            if (rdx_15 == var_58)
                                sub_14058b5e0(&var_68, rdx_15, r8_2)
                            else
                                *rdx_15 = rax_13
                                var_68:8.q = &rdx_15[1]
                            
                            int64_t* rcx_26 = *(rdi + **(rsi_1 + *arg1))
                            sub_140588c80(rcx_26, (rcx_26[1]).d - (*rcx_26).d - 1, &var_68)
                            int32_t k = 1
                            int64_t r14_1 = 1
                            rdx_13 = *arg1
                            int64_t* rax_17 = *(rdi + **(rdx_13 + rsi_1))
                            
                            if ((rax_17[1]).d - (*rax_17).d s<= 1)
                                _Str_2 = var_68:8.q
                            else
                                _Str_2 = var_68:8.q
                                int64_t* rax_22
                                
                                do
                                    char* r8_5 = **(rdi + **(rdx_13 + rsi_1)) + r14_1
                                    
                                    if (_Str_2 == var_58)
                                        sub_14058b5e0(&var_68, _Str_2, r8_5)
                                        _Str_2 = var_68:8.q
                                    else
                                        *_Str_2 = *r8_5
                                        _Str_2 += 1
                                        var_68:8.q = _Str_2
                                    
                                    k += 1
                                    r14_1 += 1
                                    rdx_13 = *arg1
                                    rax_22 = *(rdi + **(rdx_13 + rsi_1))
                                while (k s< (rax_22[1]).d - (*rax_22).d)
                        else
                            int32_t k_1 = 0
                            int64_t r14_2 = 0
                            
                            if (rcx_23.d s<= 0)
                                _Str_2 = var_68:8.q
                            else
                                _Str_2 = var_68:8.q
                                int64_t* rax_27
                                
                                do
                                    char* r8_7 = **(rdi + **(rdx_13 + rsi_1)) + r14_2
                                    
                                    if (_Str_2 == var_58)
                                        sub_14058b5e0(&var_68, _Str_2, r8_7)
                                        _Str_2 = var_68:8.q
                                    else
                                        *_Str_2 = *r8_7
                                        _Str_2 += 1
                                        var_68:8.q = _Str_2
                                    
                                    k_1 += 1
                                    r14_2 += 1
                                    rdx_13 = *arg1
                                    rax_27 = *(rdi + **(rdx_13 + rsi_1))
                                while (k_1 s< (rax_27[1]).d - (*rax_27).d)
                
                j += 1
                rdi = &rdi[1]
                rax_28 = *(rdx_13 + rsi_1)
            while (j s< ((rax_28[1] - *rax_28) s>> 3).d)
            _Str = var_68.q
            r14 = arg_10
            i = i_1
        
        int32_t rax_30 = _Str_2.d - _Str.d
        int64_t rcx_43
        
        if (rax_30 s>= 3)
            rcx_43 = sx.q(rax_30)
        
        if (rax_30 s< 3 || *(_Str + rcx_43 - 3) != 0xff || *(_Str + rcx_43 - 2) != 0x2f)
            void* rbx_5
            
            if (_Str_2 == var_58)
                sub_14058b5e0(&var_68, _Str_2, &arg_8)
                rbx_5 = var_68:8.q
                _Str = var_68.q
            else
                *_Str_2 = 0
                rbx_5 = _Str_2 + 1
                var_68:8.q = rbx_5
            
            void* rbx_6
            
            if (rbx_5 == var_58)
                sub_14058b5e0(&var_68, rbx_5, &arg_8:1)
                rbx_6 = var_68:8.q
                _Str = var_68.q
            else
                *rbx_5 = 0xff
                rbx_6 = rbx_5 + 1
                var_68:8.q = rbx_6
            
            void* rbx_7
            
            if (rbx_6 == var_58)
                sub_14058b5e0(&var_68, rbx_6, &arg_8:2)
                rbx_7 = var_68:8.q
                _Str = var_68.q
            else
                *rbx_6 = 0x2f
                rbx_7 = rbx_6 + 1
                var_68:8.q = rbx_7
            
            if (rbx_7 == var_58)
                sub_14058b5e0(&var_68, rbx_7, &arg_8:3)
                _Str_2 = var_68:8.q
                _Str = var_68.q
            else
                *rbx_7 = 0
                _Str_2 = rbx_7 + 1
                var_68:8.q = _Str_2
        
        rdx_13.b = 0x4d
        sub_14058b2f0(r14)
        int64_t rdx_26
        rdx_26.b = 0x54
        sub_14058b2f0(r14)
        int64_t rdx_27
        rdx_27.b = 0x72
        sub_14058b2f0(r14)
        int64_t rdx_28
        rdx_28.b = 0x6b
        sub_14058b2f0(r14)
        int64_t _Count = _Str_2 - _Str
        i_1 = _Count.d
        sub_14058b2f0(r14)
        sub_14058b2f0(r14)
        sub_14058b2f0(r14)
        sub_14058b2f0(r14)
        std::ostream::write(r14, _Str, _Count)
        i += 1
        i_1 = i
        rsi_1 = &rsi_1[1]
        rdx_13 = *arg1
    while (i s< ((arg1[1] - rdx_13) s>> 3).d)

if (rax == 1)
    sub_140587ed0(arg1)

if (_Str != 0)
    wchar16* _Str_1 = _Str
    
    if (var_58 - _Str u>= 0x1000)
        _Str = *(_Str - 8)
        
        if (_Str_1 - _Str - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
    
    j_sub_140a74f90(_Str)

int32_t result
result.b = 1
return result
