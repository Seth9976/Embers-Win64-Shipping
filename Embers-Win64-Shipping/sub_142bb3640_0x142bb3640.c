// 函数: sub_142bb3640
// 地址: 0x142bb3640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int32_t var_b8[0x20]
memset(&var_b8, 0, 0x74)
int64_t r15
r15.b = 0
int64_t r12
r12.b = 0
int64_t r13
r13.b = 0
int16_t rbp = 0
uint64_t result

if (0 u>= *(arg1 + 0xf4))
label_142bb37a5:
    result = &var_b8
    void* const i = &data_143683dbc
    
    do
        if (r15.b == 0 && *(i - 8) == 0)
            *result += 1
        
        if (r12.b == 0 && *i == 0)
            *result += 1
        
        if (r13.b == 0 && *(i + 8) == 0)
            *result += 1
        
        if (*result == 3)
            goto label_142bb37f4
        
        i += 0x18
        result += 4
    while (i s< &data_143684070:4)
    
    result.b = 0
else
    while (true)
        int32_t rcx_1 = 0
        uint64_t r14_2 = zx.q(rbp) * 2
        int32_t rdx_1 = *(*(arg1 + 0xf8) + (r14_2 << 3))
        int64_t rax_3
        
        if (rdx_1 == 0x63767420)
            rax_3 = 0
            r15.b = 1
        else if (rdx_1 == 0x6670676d)
            rax_3 = 1
            r12 = 1
        else if (rdx_1 != 0x70726570)
        label_142bb3795:
            rbp += 1
            
            if (rbp u>= *(arg1 + 0xf4))
                goto label_142bb37a5
            
            continue
        else
            rax_3 = 2
            r13.b = 1
        
        int64_t rbx_1 = 0
        void* rsi_1 = &data_143683db0 + (rax_3 << 3)
        
        while (true)
            int64_t rdx_2 = *(arg1 + 0xf8)
            
            if (*(rdx_2 + (r14_2 << 3) + 0xc) == *(rsi_1 + 4))
                if (rcx_1 == 0)
                    result = *(arg1 + 0x2a0)
                    
                    if (result != 0)
                        if (result(arg1, zx.q(*(rdx_2 + (r14_2 << 3))), *(arg1 + 0xa0), 0).d == 0)
                            rcx_1 = sub_142bb5d90(*(arg1 + 0xa0), 
                                *(*(arg1 + 0xf8) + (r14_2 << 3) + 0xc)).d
                        else
                            rcx_1 = 0
                    else
                        rcx_1 = 0
                
                if (*rsi_1 == rcx_1)
                    var_b8[rbx_1] += 1
                
                if (var_b8[rbx_1] == 3)
                label_142bb37f4:
                    result.b = 1
                    break
            
            rbx_1 += 1
            rsi_1 += 0x18
            
            if (rbx_1 s>= 0x1d)
                goto label_142bb3795
        
        break

__security_check_cookie(rax_1 ^ &var_d8)
return result
