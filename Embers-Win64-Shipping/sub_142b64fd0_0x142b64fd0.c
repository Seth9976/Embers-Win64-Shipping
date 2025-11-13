// 函数: sub_142b64fd0
// 地址: 0x142b64fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int16_t var_168[0x28]
int16_t (* r10)[0x28] = &var_168
int16_t var_1b8[0x28]
int16_t (* r11)[0x28] = &var_1b8
int32_t rbx = arg3
void* rsi_1 = zx.q(arg1[2]) + arg1 + (sx.q(zx.d(*(arg2 + 2)) << 0x10) | zx.q(*(arg2 + 4)))
int16_t i = 0
int16_t r9 = 0
uint32_t result_3 = 0
uint16_t result

do
    char result_1 = *rsi_1
    rsi_1 += 1
    result = zx.w(result_1)
    uint16_t r8_1
    
    if (result_3.w u>= 0xc)
        result.b u>>= 4
        result_3.w &= 3
        result_3.w <<= 4
        r8_1 = (zx.w(result.b) | result_3.w) + 0xc
        result_1 &= 0xf
    else if (result_1 u< 0xc0)
        result.b u>>= 4
        r8_1 = zx.w(result.b)
        result_1 &= 0xf
    else
        result.b &= 0x3f
        r8_1 = zx.w(result.b) + 0xc
    
    *r11 = r9
    i += 1
    *r10 = r8_1
    r11 = &(*r11)[1]
    r10 = &(*r10)[1]
    r9 += r8_1
    
    if ((result_1 & 0xf0) != 0)
        result_3 = 0
    else
        result_3 = zx.d(result_1)
        
        if (result_3 u< 0xc)
            *r11 = r9
            r11 = &(*r11)[1]
            *r10 = result_3.w
            r9 += result_3.w
            r10 = &(*r10)[1]
            i += 1
while (i u< 0x20)

if (arg5 == 0)
    char* rdi_1 = *arg6
    
    if (rbx s> arg4)
    label_142b65195:
        result.b = 1
    else
        while (true)
            uint64_t rax_10 = zx.q(rbx) & 0x1f
            
            if (sub_142b64c40(arg1, zx.q(var_1b8[rax_10]) + rsi_1, var_168[rax_10], arg7, rdi_1).b
                    != 0)
                arg6[1].d = rbx
                break
            
            rbx += 1
            
            if (rbx s> arg4)
                goto label_142b65195_1
        
        result.b = 0
else if (rbx s> arg4)
label_142b65195_1:
    result.b = 1
else
    while (true)
        uint64_t rax_7 = zx.q(rbx) & 0x1f
        char var_118[0xd0]
        result =
            sub_142b65500(arg1, zx.q(var_1b8[rax_7]) + rsi_1, var_168[rax_7], arg7, &var_118, 0xc8)
        
        if (result != 0)
        label_142b65177:
            char* var_1c8_1
            var_1c8_1.d = zx.d(result)
            
            if (arg5(arg6, zx.q(rbx), zx.q(arg7), &var_118, var_1c8_1).b == 0)
                break
        else if (arg7 == 2)
            result = sub_142b65b80(rbx, &var_118, 0xc8)
            uint64_t result_2 = zx.q(result)
            
            if (result_2 u>= 0xc8)
                __report_rangecheckfailure()
                noreturn
            
            var_118[result_2] = 0
            
            if (result != 0)
                goto label_142b65177
        
        rbx += 1
        
        if (rbx s> arg4)
            goto label_142b65195_1
    
    result.b = 0

__security_check_cookie(rax_1 ^ &var_1e8)
return result
