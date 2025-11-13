// 函数: sub_140592ed0
// 地址: 0x140592ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
char* _Mid2 = arg2
uint16_t* _First1 = arg3
uint16_t const* _Mid1 = _First1
int64_t rax_2 = 0xf
int64_t var_80 = 0xf
char var_98 = 0
void* var_68 = nullptr
int64_t rbx = 0xf
int64_t var_60 = 0xf
char var_78 = 0
int64_t* _State = arg1 + 0x60

if (*(arg1 + 0x68) == 0)
    *_State = 0

void* r8 = 8
void* var_88 = 8
char* _First2_1 = nullptr
var_98.q = 0
char var_90 = 0
*(arg1 + 0x70) = 0

if (_First1 == arg4)
label_140593252:
    *arg2 = var_78.o
    *(arg2 + 0x10) = var_68.o
    
    if (rax_2 u>= 0x10)
        char* _First2_4 = _First2_1
        
        if (rax_2 + 1 u>= 0x1000)
            _First2_1 = *(_First2_1 - 8)
            
            if (_First2_4 - _First2_1 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(_First2_1)
else
    while (true)
        char* _First2 = &var_98
        
        if (rax_2 u>= 0x10)
            _First2 = _First2_1
        
        int32_t rax_4 = std::codecvt<wchar_t, char, struct _Mbstatet>::out(*(arg1 + 8), _State, 
            _First1, arg4, &_Mid1, _First2, r8 + _First2, &_Mid2)
        
        if (rax_4 s>= 0)
            if (rax_4 s<= 1)
                char* _Mid2_1 = _Mid2
                
                if (_First2 u>= _Mid2_1)
                    void* rcx_7 = var_88
                    
                    if (rcx_7 u>= 0x10)
                        if (*(arg1 + 0x69) == 0)
                            __scrt_throw_std_bad_array_new_length()
                            noreturn
                        
                        sub_140592d30(arg2, arg1 + 0x20)
                        
                        if (rbx u>= 0x10)
                            void* rcx_10 = var_78.q
                            void* rax_17 = rcx_10
                            
                            if (rbx + 1 u>= 0x1000)
                                rcx_10 = *(rcx_10 - 8)
                            
                            if (rbx + 1 u>= 0x1000 && rax_17 - rcx_10 - 8 u> 0x1f)
                                _invalid_parameter_noinfo_noreturn()
                                noreturn
                            
                            j_sub_140a74f90(rcx_10)
                        
                        if (var_80 u< 0x10)
                            goto label_14059319c
                        
                        _First2_1 = var_98.q
                        char* _First2_2 = _First2_1
                        
                        if (var_80 + 1 u< 0x1000)
                            break
                        
                        _First2_1 = *(_First2_1 - 8)
                        
                        if (_First2_2 - _First2_1 - 8 u<= 0x1f)
                            break
                        
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    if (var_80 - rcx_7 u< 8)
                        uint16_t** var_c8_1
                        var_c8_1.b = 0
                        sub_14058c4e0(&var_98, 8, 0, 8, var_c8_1.b)
                    else
                        var_88 = rcx_7 + 8
                        int64_t* rax_13 = &var_98
                        
                        if (var_80 u>= 0x10)
                            rax_13 = var_98.q
                        
                        *(rax_13 + rcx_7) = 0
                        *(rax_13 + rcx_7 + 8) = 0
                else
                    void* rdi_1 = _Mid2_1 - _First2
                    void* rcx_4 = var_68
                    
                    if (rdi_1 u> rbx - rcx_4)
                        sub_14058c670(&var_78, rdi_1, 0, _First2, rdi_1)
                        rbx = var_60
                    else
                        var_68 = rcx_4 + rdi_1
                        char* rax_9 = &var_78
                        
                        if (rbx u>= 0x10)
                            rax_9 = var_78.q
                        
                        char* rbx_1 = rax_9 + rcx_4
                        memmove(rbx_1, _First2, rdi_1.d)
                        *(rbx_1 + rdi_1) = 0
                        rbx = var_60
                
                _First1 = _Mid1
            label_1405930e4:
                *(arg1 + 0x70) = (_First1 - arg3) s>> 1
                rax_2 = var_80
                _First2_1 = var_98.q
                
                if (_First1 == arg4)
                    goto label_140593252
                
                r8 = var_88
                _State = arg1 + 0x60
                continue
            else if (rax_4 == 3)
                _First1 = _Mid1
                
                while (_First1 != arg4)
                    char r9_1 = *_First1
                    void* rax_5 = var_68
                    
                    if (rax_5 u>= rbx)
                        sub_14058b730(&var_78, 1, 0, r9_1)
                    else
                        var_68 = rax_5 + 1
                        char* rcx_2 = &var_78
                        
                        if (rbx u>= 0x10)
                            rcx_2 = var_78.q
                        
                        *(rcx_2 + rax_5) = r9_1
                        *(rcx_2 + rax_5 + 1) = 0
                    
                    _First1 = &_Mid1[1]
                    _Mid1 = _First1
                    rbx = var_60
                
                goto label_1405930e4
        
        if (*(arg1 + 0x69) == 0)
            __scrt_throw_std_bad_array_new_length()
            noreturn
        
        sub_140592d30(arg2, arg1 + 0x20)
        
        if (rbx u>= 0x10)
            void* rcx_14 = var_78.q
            void* rax_23 = rcx_14
            
            if (rbx + 1 u>= 0x1000)
                rcx_14 = *(rcx_14 - 8)
            
            if (rbx + 1 u>= 0x1000 && rax_23 - rcx_14 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
            
            j_sub_140a74f90(rcx_14)
        
        if (var_80 u< 0x10)
            goto label_14059319c
        
        _First2_1 = var_98.q
        char* _First2_3 = _First2_1
        
        if (var_80 + 1 u< 0x1000)
            break
        
        _First2_1 = *(_First2_1 - 8)
        
        if (_First2_3 - _First2_1 - 8 u<= 0x1f)
            break
        
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    j_sub_140a74f90(_First2_1)

label_14059319c:
__security_check_cookie(rax_1 ^ &var_e8)
return arg2
