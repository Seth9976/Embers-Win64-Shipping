// 函数: sub_140589a80
// 地址: 0x140589a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rcx = **(arg1 + 0x38)
int32_t* rdx_1
int64_t r8_1

if (rcx != 0)
    rdx_1 = *(arg1 + 0x50)
    r8_1 = sx.q(*rdx_1)

uint64_t result

if (rcx != 0 && rcx u< rcx + r8_1)
    *rdx_1 = (r8_1 - 1).d
    int64_t* rcx_1 = *(arg1 + 0x38)
    char* rdx_2 = *rcx_1
    *rcx_1 = &rdx_2[1]
    result = zx.q(*rdx_2)
else if (*(arg1 + 0x80) != 0)
    int64_t* r8_2 = *(arg1 + 0x18)
    
    if (*r8_2 == arg1 + 0x70)
        int32_t rdx_3 = (*(arg1 + 0x90)).d
        int64_t rcx_2 = *(arg1 + 0x88)
        *r8_2 = rcx_2
        **(arg1 + 0x38) = rcx_2
        **(arg1 + 0x50) = rdx_3 - rcx_2.d
    
    FILE* _Stream = *(arg1 + 0x80)
    uint32_t rbx_1
    
    if (*(arg1 + 0x68) != 0)
        void* var_20_1 = nullptr
        int64_t var_18_1 = 0xf
        char var_30 = 0
        int32_t rax_10 = fgetc(_Stream)
        char r8_3 = rax_10.b
        
        if (rax_10 == 0xffffffff)
        label_140589c76:
            rbx_1 = -1
        else
            while (true)
                void* rcx_3 = var_20_1
                
                if (rcx_3 u>= var_18_1)
                    sub_14058b730(&var_30, 1, 0, r8_3)
                else
                    var_20_1 = rcx_3 + 1
                    char* rax_12 = &var_30
                    
                    if (var_18_1 u>= 0x10)
                        rax_12 = var_30.q
                    
                    *(rax_12 + rcx_3) = r8_3
                    *(rax_12 + rcx_3 + 1) = 0
                
                char* rdx_6 = &var_30
                
                if (var_18_1 u>= 0x10)
                    rdx_6 = var_30.q
                
                char* _First1 = &var_30
                
                if (var_18_1 u>= 0x10)
                    _First1 = var_30.q
                
                char _First2
                wchar32 _Last2
                char const* _Mid1
                wchar32* _Mid2
                int32_t rax_13 = std::codecvt<char, char, struct _Mbstatet>::in(*(arg1 + 0x68), 
                    arg1 + 0x74, _First1, var_20_1 + rdx_6, &_Mid1, &_First2, &_Last2, &_Mid2)
                
                if (rax_13 s< 0)
                    goto label_140589c76
                
                if (rax_13 s> 1)
                    if (rax_13 != 3)
                        goto label_140589c76
                    
                    char* rax_19 = &var_30
                    
                    if (var_18_1 u>= 0x10)
                        rax_19 = var_30.q
                    
                    rbx_1 = sx.d(*rax_19)
                    break
                
                char* rax_14 = &var_30
                
                if (_Mid2 != &_First2)
                    if (var_18_1 u>= 0x10)
                        rax_14 = var_30.q
                    
                    char const* _Mid1_1 = _Mid1
                    void* rbx_4 = var_20_1 - _Mid1_1 + rax_14
                    
                    if (rbx_4 s> 0)
                        while (true)
                            rbx_4 -= 1
                            ungetc(sx.d(*(rbx_4 + _Mid1_1)), *(arg1 + 0x80))
                            
                            if (rbx_4 s<= 0)
                                break
                            
                            _Mid1_1 = _Mid1
                    
                    rbx_1 = zx.d(_First2)
                    break
                
                if (var_18_1 u>= 0x10)
                    rax_14 = var_30.q
                
                void* r10_2 = _Mid1 - rax_14
                
                if (var_20_1 u< r10_2)
                    r10_2 = var_20_1
                
                char* rcx_6 = &var_30
                
                if (var_18_1 u>= 0x10)
                    rcx_6 = var_30.q
                
                void* r8_5 = var_20_1 - r10_2
                var_20_1 = r8_5
                memmove(rcx_6, rcx_6 + r10_2, r8_5.d + 1)
                int32_t rax_15 = fgetc(*(arg1 + 0x80))
                r8_3 = rax_15.b
                
                if (rax_15 == 0xffffffff)
                    goto label_140589c76
        
        if (var_18_1 u>= 0x10)
            void* rcx_8 = var_30.q
            void* rax_16 = rcx_8
            
            if (var_18_1 + 1 u>= 0x1000)
                rcx_8 = *(rcx_8 - 8)
                
                if (rax_16 - rcx_8 - 8 u> 0x1f)
                    _invalid_parameter_noinfo_noreturn()
                    noreturn
            
            j_sub_140a74f90(rcx_8)
    else
        int32_t rax_9 = fgetc(_Stream)
        rbx_1 = -1
        
        if (rax_9 != 0xffffffff)
            rbx_1 = zx.d(rax_9.b)
    
    result = zx.q(rbx_1)
else
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_88)
return result
