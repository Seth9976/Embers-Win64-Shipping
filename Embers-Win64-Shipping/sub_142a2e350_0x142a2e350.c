// 函数: sub_142a2e350
// 地址: 0x142a2e350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* r10 = arg1[1]
int32_t rbp = 0
int32_t r14 = arg1[3].d
uint64_t result = *arg1 - r10
int64_t r11 = arg1[4]
int32_t rbx = 0x30 - r14
int64_t rsi = arg1[2]
int64_t r12 = result << 3

if (r11 != 0)
    if (result u> 9)
        result = 9
    
    void var_48
    result = r11(arg1[5], r10, &var_48, zx.q(result.d))
    r10 = &var_48

if (rbx - r12.d + 8 s< 0)
    if (rbx s>= rbp)
        goto label_142a2e3e9
    
    arg1[3].d = r14
else
    r14 += 0x40000000
    rbp = rbx - r12.d + 8
    
    if (r12 == 0 || rbx s< rbp)
        arg1[3].d = r14
    else
    label_142a2e3e9:
        int64_t rdx_2 = arg1[1]
        int32_t r8_6 = r14 + ((((rbx - rbp) u>> 3) + 1) << 3)
        
        do
            uint64_t rax_3 = zx.q(*r10)
            r10 += 1
            rdx_2 += 1
            result = rax_3 << rbx.b
            rbx -= 8
            rsi |= result
            arg1[1] = rdx_2
        while (rbx s>= rbp)
        
        arg1[3].d = r8_6

arg1[2] = rsi
__security_check_cookie(rax_1 ^ &var_68)
return result
