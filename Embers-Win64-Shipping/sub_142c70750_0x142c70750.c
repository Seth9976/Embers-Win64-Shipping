// 函数: sub_142c70750
// 地址: 0x142c70750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15
int64_t var_38 = r15
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t i_4 = -1
int32_t r12 = 0
int32_t var_90 = 0xffffffff
char* _String = arg1
int32_t var_8c = 0xffffffff
int32_t r9 = -1
int32_t var_9c = 0xffffffff
int32_t rdi = -1
int32_t r13 = -1
int32_t i_6 = 0xffffffff
char i = *_String
int32_t rcx = 0
int32_t i_5 = 0xffffffff
int64_t* r14 = arg2
int32_t var_a8 = 0xffffffff
int32_t var_a4 = 0xffffffff
int32_t var_94 = 0
int32_t var_84 = 0
int64_t result
char var_68
int32_t rax_8
int32_t rcx_10

if (i == 0)
label_142c70bda:
    rax_8 = 0
    var_9c = 0
    rcx_10 = 0
label_142c70be4:
    
    if (r9 == 0xffffffff || i_4 == 0xffffffff || rdi == 0xffffffff)
    labelid_1:
        result = 0xffffffff
    else if (rdi s< 0x7b2)
        *r14 = 0
        result = 2
    else if (r9 s> 0x1f || i_4 s> 0xb || rax_8 s> 0x17 || rcx_10 s> 0x3b)
    label_142c7091c:
        result = 0xffffffff
    else
        int32_t rdx_14 = var_9c
        
        if (rdx_14 s> 0x3c)
        label_142c7091c_1:
            result = 0xffffffff
        else
            int64_t var_67
            var_67:7.d = rax_8
            var_67:3.d = rcx_10
            int64_t var_57
            var_57:3.d = rdi - 0x76c
            var_68.d = rdx_14
            int64_t var_5f
            var_5f:3.d = r9
            var_5f:7.d = i_4
            int64_t rax_36 = sub_142c70620(&var_68)
            
            if (rax_36.d == 0xffffffff)
                *r14 = rax_36
                result = 0
            else
                if (r13 != 0xffffffff)
                    r12 = r13
                
                if (r12 s<= 0 || rax_36 s<= sx.q(0x7fffffff - r12))
                    *r14 = rax_36 + sx.q(r12)
                    result = 0
                else
                    *r14 = 0x7fffffff
                    result = 1
else
    while (true)
        if (rcx s< 6)
            r15.b = 0
            
            do
                if (isalnum(zx.d(i)) != 0)
                    break
                
                i = _String[1]
                _String = &_String[1]
            while (i != 0)
            
            if (isalpha(zx.d(*_String)) == 0)
                if (isdigit(zx.d(*_String)) == 0)
                    r9 = var_a8
                else
                    bool cond:1_1 = var_9c != 0xffffffff
                    int32_t var_98 = 0
                    
                    if (cond:1_1)
                    label_142c70a19:
                        int32_t rdi_3 = *_errno()
                        *_errno() = 0
                        char* _EndPtr
                        int32_t rax_16 = strtol(_String, &_EndPtr, 0xa)
                        int32_t rsi_2 = *_errno()
                        
                        if (*_errno() != rdi_3)
                            *_errno() = rdi_3
                        
                        if (rsi_2 != 0)
                            break
                        
                        int32_t rax_20 = sub_142c56200(rax_16)
                        char* r10_1 = _EndPtr
                        
                        if (r13 == 0xffffffff && r10_1 - _String == 4 && rax_20 s<= 0x578
                                && arg1 u< _String)
                            char r9_1 = _String[-1]
                            
                            if (((r9_1 - 0x2b) & 0xfd) == 0)
                                r15.b = 1
                                r13 = (rax_20 - rax_20 s/ 0x64 * 0x28) * 0x3c
                                
                                if (r9_1 == 0x2b)
                                    r13 = neg.d(r13)
                        
                        i_4 = i_5
                        r9 = var_a8
                        
                        if (r10_1 - _String == 8 && var_a4 == 0xffffffff && i_4 == var_a4
                                && r9 == var_a4)
                            _String = r10_1
                            rdi = rax_20 s/ 0x2710
                            var_a4 = rdi
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = muls.dp.d(0x51eb851f, rax_20 s% 0x2710)
                            int32_t rdx_9 = temp2_1 s>> 5
                            i_4 = (rdx_9 u>> 0x1f) + rdx_9 - 1
                            i_5 = i_4
                            r9 = rax_20 s% 0x64
                            var_a8 = r9
                        else if (r15.b != 0)
                            rdi = var_a4
                            _String = r10_1
                        else
                            int32_t r14_3 = var_94
                            
                            if (r14_3 != 0)
                                if (r14_3 != 1)
                                    break
                                
                            label_142c70b96:
                                
                                if (var_a4 != 0xffffffff)
                                    break
                                
                                var_a4 = rax_20
                                rdi = rax_20
                                
                                if (rax_20 s< 0x76c)
                                    rdi = rax_20 + 0x76c
                                    
                                    if (rax_20 s<= 0x46)
                                        rdi = rax_20 + 0x7d0
                                    
                                    var_a4 = rdi
                                
                                _String = r10_1
                                
                                if (r9 == 0xffffffff)
                                    r14_3 = 0
                                
                                var_94 = r14_3
                            else
                                if (r9 != 0xffffffff)
                                    break
                                
                                if (rax_20 - 1 u<= 0x1e)
                                    r9 = rax_20
                                    var_a8 = rax_20
                                    r15.b = 1
                                
                                r14_3 = 1
                                var_94 = 1
                                
                                if (r15.b == 0)
                                    goto label_142c70b96
                                
                                rdi = var_a4
                                _String = r10_1
                    else
                        int32_t* var_b0_1 = &var_98
                        int32_t* var_b8_1 = &var_9c
                        
                        if (sub_1425f29b0(_String, "%02d:%02d:%02d%n", &var_90) != 3)
                            if (var_9c != 0xffffffff)
                                goto label_142c70a19
                            
                            int32_t* var_b8_2 = &var_98
                            
                            if (sub_1425f29b0(_String, "%02d:%02d%n", &var_90) != 2)
                                goto label_142c70a19
                            
                            _String = &_String[sx.q(var_98)]
                            var_9c = 0
                            r9 = var_a8
                        else
                            _String = &_String[sx.q(var_98)]
                            r9 = var_a8
            else
                __builtin_memset(&var_68, 0, 0x20)
                int64_t r14_1
                
                if (sub_1425f29b0(_String, 
                        "%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]", &var_68) == 0)
                    r14_1 = 0
                else
                    r14_1 = -1
                    
                    do
                        r14_1 += 1
                    while ((&var_68)[r14_1] != 0)
                
                if (i_6 != 0xffffffff)
                label_142c708a8:
                    
                    if (i_4 != 0xffffffff)
                    label_142c708f1:
                        
                        if (r13 != 0xffffffff)
                            break
                        
                        void* const rdi_2 = &data_1436b5380
                        int32_t rsi_1 = 0
                        
                        while (sub_142c70460(&var_68, rdi_2) == 0)
                            rdi_2 += 0xc
                            rsi_1 += 1
                            
                            if (rsi_1 u>= 0x44)
                                goto label_142c7091c_2
                        
                        r13 = *(rdi_2 + 8) * 0x3c
                        
                        if (r13 == 0xffffffff)
                            break
                        
                        i_4 = i_5
                    else
                        r15.b = 0
                        void** const rsi = &data_1436b5320
                        int32_t i_1
                        
                        for (i_1 = 0; i_1 s< 0xc; i_1 += 1)
                            if (sub_142c70460(&var_68, *rsi) != 0)
                                r15.b = 1
                                break
                            
                            rsi = &rsi[1]
                        
                        i_4 = -1
                        
                        if (r15.b != 0)
                            i_4 = i_1
                        
                        i_5 = i_4
                        
                        if (i_4 == 0xffffffff)
                            goto label_142c708f1
                else
                    r15.b = 0
                    char const (** const rdi_1)[0x7] = &data_1436b52e8
                    int32_t i_2 = 0
                    
                    if (r14_1 u<= 3)
                        rdi_1 = &data_1436b52b0
                    
                    do
                        if (sub_142c70460(&var_68, *rdi_1) != 0)
                            r15.b = 1
                            break
                        
                        rdi_1 = &rdi_1[1]
                        i_2 += 1
                    while (i_2 s< 7)
                    
                    int32_t i_3 = -1
                    
                    if (r15.b != 0)
                        i_3 = i_2
                    
                    i_4 = i_5
                    i_6 = i_3
                    
                    if (i_3 == 0xffffffff)
                        goto label_142c708a8
                
                rdi = var_a4
                _String = &_String[r14_1]
                r9 = var_a8
            
            i = *_String
            rcx = var_84 + 1
            var_84 = rcx
            
            if (i != 0)
                continue
        
        r14 = arg2
        
        if (var_9c == 0xffffffff)
            goto label_142c70bda
        
        rax_8 = var_90
        rcx_10 = var_8c
        goto label_142c70be4
    
label_142c7091c_2:
    result = 0xffffffff
__security_check_cookie(rax_1 ^ &var_d8)
return result
