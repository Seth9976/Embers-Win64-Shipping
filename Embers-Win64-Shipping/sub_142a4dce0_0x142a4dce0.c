// 函数: sub_142a4dce0
// 地址: 0x142a4dce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
char* string_2 = arg3
char* rbx = arg2
int16_t var_12c
void* _Source = &var_12c:1
bool cond:0 = *arg5 s<= 0
int32_t var_130 = 0x28
var_12c = 0
int32_t _Count_1 = 0
char var_167 = 0
char var_168 = 0x40
uint64_t result

if (not(cond:0))
    result = 0xffffffff
else if (arg1 == 0 || *arg1 == 0 || arg4 s<= 1)
    *arg5 = 1
    result = 0
else
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg3[rdi_1] != 0)
    
    int64_t var_150_1 = rdi_1
    
    if (arg4 s>= rdi_1.d)
        void var_f8
        int64_t r14_1 = sx.q(sub_142a4cb70(&var_f8, arg1, arg5))
        int32_t var_164_1 = r14_1.d
        
        if (*arg5 s<= 0)
            int32_t r13_1 = 0
            char var_b8[0x30]
            
            if (rbx != 0)
                char rax_3 = *rbx
                
                if (rax_3 != 0)
                    int64_t rdi_2 = 0
                    char* rsi = &var_b8 - rbx
                    
                    while (true)
                        char rax_4 = sub_142a86230(rax_3)
                        char rax_5
                        
                        if (rax_4 == 0)
                            rax_5 = *rbx - 0x2b
                        
                        if (rax_4 == 0
                            && (rax_5 u> 0x34 || not(test_bit(0x10000000007ff5, sx.q(rax_5)))))
                        label_142a4e21e:
                            bool cond:3_1 = var_12c.b == 0
                            *arg5 = 1
                            
                            if (not(cond:3_1))
                                sub_142a7dcd0(_Source)
                        else if (rdi_2 s>= 0x60)
                        label_142a4e1eb:
                            bool cond:2_1 = var_12c.b == 0
                            *arg5 = 5
                            
                            if (not(cond:2_1))
                                sub_142a7dcd0(_Source)
                                result = 0
                                goto label_142a4e1d7
                        else
                            r13_1 += 1
                            *(rsi + rbx) = *rbx
                            rdi_2 += 1
                            rax_3 = rbx[1]
                            rbx = &rbx[1]
                            
                            if (rax_3 != 0)
                                continue
                            
                            rdi_1 = var_150_1
                            string_2 = arg3
                            break
                        
                        result = 0
                        goto label_142a4e1d7
            
            int64_t rax_8 = sx.q(r13_1)
            
            if (rax_8 u>= 0x61)
                __report_rangecheckfailure()
                noreturn
            
            var_b8[rax_8] = 0
            char* _Destination = strchr(string_2, 0x40)
            void* _Destination_2 = _Destination
            int32_t result_1
            
            if (_Destination == 0)
                _Destination_2 = nullptr
            else if (_Destination[1] != 0)
                char* _Destination_1 = _Destination
                
                while (true)
                    void* string_1 = &_Destination_1[1]
                    char* string = strchr(string_1, 0x3d)
                    
                    if (string == 0)
                        goto label_142a4e21e
                    
                    while (*string_1 == 0x20)
                        string_1 += 1
                    
                    char* string_3 = string
                    
                    if (string u> string_1)
                        void* string_4
                        
                        do
                            string_4 = &string_3[-1]
                            
                            if (string_3[-1] != 0x20)
                                break
                            
                            string_3 = string_4
                        while (string_4 u> string_1)
                    
                    if (string_1 == string_3)
                        goto label_142a4e21e
                    
                    int32_t r12_1 = 0
                    uint64_t r14_2 = 0
                    char var_d8[0x20]
                    
                    if (string_1 u< string_3)
                        while (true)
                            if (sub_142a86230(*string_1) == 0 && *string_1 - 0x30 u> 9)
                                goto label_142a4e21e
                            
                            if (r14_2 s>= 0x18)
                                goto label_142a4e1eb
                            
                            var_d8[r14_2] = sub_142a86220(zx.d(*string_1))
                            r12_1 += 1
                            r14_2 += 1
                            string_1 += 1
                            
                            if (string_1 u>= string_3)
                                if (r14_2 u< 0x19)
                                    break
                                
                                __report_rangecheckfailure()
                                noreturn
                    
                    var_d8[r14_2] = 0
                    void* rsi_2 = &string[1]
                    _Destination_1 = strchr(string, 0x3b)
                    
                    while (*rsi_2 == 0x20)
                        rsi_2 += 1
                    
                    void* _Destination_3
                    
                    if (_Destination_1 == 0)
                        void* rdi_3 = -ffffffffffffffff
                        
                        do
                            rdi_3 += 1
                        while (*(rsi_2 + rdi_3) != 0)
                        
                        _Destination_3 = rdi_3 + rsi_2
                    else
                        _Destination_3 = _Destination_1
                    
                    bool cond:5_1 = rsi_2 == _Destination_3
                    
                    if (rsi_2 u< _Destination_3)
                        void* _Destination_4
                        
                        do
                            _Destination_4 = _Destination_3 - 1
                            
                            if (*(_Destination_3 - 1) != 0x20)
                                break
                            
                            _Destination_3 = _Destination_4
                        while (_Destination_4 u> rsi_2)
                        cond:5_1 = rsi_2 == _Destination_3
                    
                    if (cond:5_1)
                        goto label_142a4e21e
                    
                    void* rax_13 = &var_f8
                    int32_t rax_14
                    
                    while (true)
                        char rcx_8 = *rax_13
                        char temp0_1 = *(rax_13 + &var_d8 - &var_f8)
                        
                        if (rcx_8 != temp0_1)
                            rax_14 = sbb.d(rax_13.d, rax_13.d, rcx_8 u< temp0_1) | 1
                            break
                        
                        rax_13 += 1
                        
                        if (rcx_8 == 0)
                            rax_14 = 0
                            break
                    
                    if (rax_14 != 0)
                        r14_2 = zx.q(var_167)
                        
                        if (rax_14 s< 0 && r13_1 s> 0 && r14_2.b == 0)
                            sub_142a8cb30(&_Source, var_168, arg5)
                            var_168 = 0x3b
                            sub_142a8cbd0(&_Source, &var_f8, var_164_1, arg5)
                            sub_142a8cb30(&_Source, 0x3d, arg5)
                            sub_142a8cbd0(&_Source, &var_b8, r13_1, arg5)
                            r14_2.b = 1
                            var_167 = 1
                        
                        sub_142a8cb30(&_Source, var_168, arg5)
                        var_168 = 0x3b
                        sub_142a8cbd0(&_Source, &var_d8, r12_1, arg5)
                        sub_142a8cb30(&_Source, 0x3d, arg5)
                        sub_142a8cbd0(&_Source, rsi_2, _Destination_3.d - rsi_2.d, arg5)
                    else
                        if (r13_1 s> 0)
                            sub_142a8cb30(&_Source, var_168, arg5)
                            var_168 = 0x3b
                            sub_142a8cbd0(&_Source, &var_f8, var_164_1, arg5)
                            sub_142a8cb30(&_Source, 0x3d, arg5)
                            sub_142a8cbd0(&_Source, &var_b8, r13_1, arg5)
                        
                        r14_2.b = 1
                        var_167 = 1
                    
                    if (_Destination_1 == 0)
                        if (r13_1 s> 0 && r14_2.b == 0)
                            sub_142a8cb30(&_Source, var_168, arg5)
                            sub_142a8cbd0(&_Source, &var_f8, var_164_1, arg5)
                            sub_142a8cb30(&_Source, 0x3d, arg5)
                            sub_142a8cbd0(&_Source, &var_b8, r13_1, arg5)
                            r14_2.b = 1
                            var_167 = 1
                        
                        if (_Destination_1 == 0)
                            if (r14_2.b == 0 || *arg5 s> _Destination_1.d)
                                if (var_12c.b != 0)
                                    sub_142a7dcd0(_Source)
                                
                                result = zx.q(var_150_1.d)
                                goto label_142a4e1d7
                            
                            uint64_t _Count = sx.q(_Count_1)
                            result_1 = _Destination.d - arg3.d + _Count.d
                            
                            if (result_1 s>= arg4)
                                goto label_142a4e27a
                            
                            if (_Count.d s> 0)
                                strncpy(_Destination, _Source, _Count)
                            
                            *(sx.q(result_1) + arg3) = 0
                            break
                
                goto label_142a4e1aa
            
            if (r13_1 != 0)
                result_1 = (rdi_1 + 2).d + r14_1.d + r13_1
                
                if (_Destination_2 == 0)
                    _Destination_2 = &string_2[sx.q(rdi_1.d)]
                else
                    result_1 -= 1
                
                if (result_1 s< arg4)
                    *_Destination_2 = 0x40
                    void* rcx_33 = &var_f8
                    char i
                    
                    do
                        i = *rcx_33
                        *(_Destination_2 + 1 - &var_f8 + rcx_33) = i
                        rcx_33 += 1
                    while (i != 0)
                    void* r8_20 = _Destination_2 + 1 + r14_1
                    char (* rcx_34)[0x30] = &var_b8
                    *r8_20 = 0x3d
                    char i_1
                    
                    do
                        i_1 = *rcx_34
                        (*rcx_34)[r8_20 - &var_b8 + 1] = i_1
                        rcx_34 = &(*rcx_34)[1]
                    while (i_1 != 0)
                    goto label_142a4e1aa
                
            label_142a4e27a:
                *arg5 = 0xf
            label_142a4e1aa:
                
                if (var_12c.b != 0)
                    sub_142a7dcd0(_Source)
                
                result = zx.q(result_1)
            else
                if (var_12c.b != r13_1.b)
                    sub_142a7dcd0(_Source)
                
                result = zx.q(rdi_1.d)
        else
            if (var_12c.b != 0)
                sub_142a7dcd0(_Source)
            
            result = 0
    else
        *arg5 = 1
        result = 0

label_142a4e1d7:
__security_check_cookie(rax_1 ^ &var_188)
return result
