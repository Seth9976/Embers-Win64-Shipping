// 函数: sub_1419e4ce0
// 地址: 0x1419e4ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t var_58[0x4]
int32_t result = sub_1419e2ca0(arg1, arg3, &var_58)
int64_t r11 = sx.q(arg1[1].d)
int64_t rbx = 0
int64_t result_1 = sx.q(result)
int32_t r9 = 0
void* r14_1

if (r11.d s> 0)
    r14_1 = *arg1
    int64_t rdx_1 = 0
    int64_t* rcx = r14_1 + 0x18
    
    while (*rcx != *arg2)
        r9 += 1
        rdx_1 += 1
        rcx = &rcx[4]
        
        if (rdx_1 s>= r11)
            goto label_1419e4d4c

if (r11.d s<= 0 || r9 == 0xffffffff)
label_1419e4d4c:
    result.b = 0
else
    int32_t rax_4 = r11.d - r9 - 1
    
    if (rax_4 s>= 1)
        rax_4 = 1
    
    if (rax_4 != 0)
        memcpy((sx.q(r9) << 5) + r14_1, (sx.q(r11.d - rax_4) << 5) + r14_1, rax_4 << 5)
        r11 = zx.q(arg1[1].d)
    
    arg1[1].d = (r11 - 1).d
    result.b = 1

if (result_1 s> 0)
    while (result.b == 0)
        result = sub_1419e4ce0(var_58[rbx], arg2, arg3)
        rbx += 1
        
        if (rbx s>= result_1)
            break

__security_check_cookie(rax_1 ^ &var_78)
return result
