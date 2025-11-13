// 函数: sub_142af4e80
// 地址: 0x142af4e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
char* rdi = arg1
int16_t r12 = *data_1440168d0

if (r12 == 0)
    goto label_142af4f00

int64_t rax_3 = -1

do
    rax_3 += 1
while (arg1[rax_3] != 0)

uint64_t result

if (rax_3 u< 0x3c)
    void var_80
    sub_142af5540(&var_80, arg1)
    rdi = &var_80
label_142af4f00:
    int32_t rbp_1 = 0
    int32_t rsi_1 = data_1440168f4
    int64_t r15_1 = data_1440168b0
    uint64_t rbx_2 = zx.q(rsi_1 u>> 1)
    
    while (true)
        uint64_t rcx_1 = zx.q(*(r15_1 + (rbx_2 << 1)))
        int32_t r14_1 = rbx_2.d
        int32_t rax_5
        
        if (r12 != 0)
            char* rax_7 = rdi
            
            while (true)
                char rcx_3 = *rax_7
                char temp0_1 = *(rax_7 + data_1440168e0 + (rcx_1 << 1) - rdi)
                
                if (rcx_3 != temp0_1)
                    rax_5 = sbb.d(rax_7.d, rax_7.d, rcx_3 u< temp0_1) | 1
                    break
                
                rax_7 = &rax_7[1]
                
                if (rcx_3 == 0)
                    rax_5 = 0
                    break
        else
            rax_5 = sub_142af52e0(rdi, data_1440168d8 + (rcx_1 << 1))
        
        if (rax_5 s>= 0)
            if (rax_5 s<= 0)
                int64_t rcx_4 = data_1440168b8
                uint64_t rdx_4 = rbx_2 * 2
                
                if (*(rdx_4 + rcx_4) s< 0)
                    *arg3 = 0xffffff86
                    rcx_4 = data_1440168b8
                
                if (arg2 != 0)
                    void* const rax_9
                    
                    if (*(data_1440168d0 + 2) == 0 || (*(rdx_4 + rcx_4) & 0x4000) != 0)
                        rax_9.b = 1
                    else
                        rax_9 = nullptr
                    
                    *arg2 = rax_9.b
                    rcx_4 = data_1440168b8
                
                result = zx.q(*(rdx_4 + rcx_4)) & 0xfff
                break
            
            rbp_1 = rbx_2.d
        else
            rsi_1 = rbx_2.d
        
        rbx_2 = zx.q((rsi_1 + rbp_1) u>> 1)
        
        if (r14_1 == rbx_2.d)
            result = 0xffffffff
            break
else
    *arg3 = 0xf
    result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_a8)
return result
