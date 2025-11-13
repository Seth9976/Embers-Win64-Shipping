// 函数: sub_142a4cf10
// 地址: 0x142a4cf10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t i = 0
char* rax_2 = arg1
int32_t var_28 = 0
int32_t rcx = 0

if (rax_2 == 0)
    rax_2 = sub_142a46ef0()
    rcx = var_28

if (rcx s<= 0)
    if (rax_2 == 0)
        rax_2 = sub_142a46ef0()
    
    void var_20
    sub_142a8c3f0(&var_20, 0xc, sub_142a4e610(rax_2, &var_20, 0xc, nullptr), &var_28)
    
    if (var_28 s<= 0)
        void** const r9_2 = &data_14360fb40
        
        do
            void* r8_2 = *r9_2
            i += 1
            
            if (r8_2 != 0)
                while (true)
                    void* rax_4 = &var_20
                    uint32_t j
                    uint32_t rdx_2
                    
                    do
                        rdx_2 = zx.d(*rax_4)
                        j = zx.d(*(rax_4 + r8_2 - &var_20))
                        
                        if (rdx_2 != j)
                            break
                        
                        rax_4 += 1
                    while (j != 0)
                    
                    if (rdx_2 - j == 0)
                        int16_t r9_4 = ((r9_2 - &data_14360fb40) s>> 3).w
                        
                        if (r9_4 s< 0)
                            break
                        
                        int64_t result = (&data_1436117a0)[sx.q(r9_4)]
                        __security_check_cookie(rax_1 ^ &var_48)
                        return result
                    
                    r8_2 = r9_2[1]
                    r9_2 = &r9_2[1]
                    
                    if (r8_2 == 0)
                        goto label_142a4cfd4
                
                break
            
        label_142a4cfd4:
            r9_2 = &r9_2[1]
        while (i s< 2)

__security_check_cookie(rax_1 ^ &var_48)
return &data_1434cce10
