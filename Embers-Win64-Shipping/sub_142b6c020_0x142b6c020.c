// 函数: sub_142b6c020
// 地址: 0x142b6c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r8 = arg3 & 0xffffff
uint32_t count = arg3 u>> 0x18 & 0x1f
uint8_t var_67
char* rdx_2

if (count u> 3)
    rdx_2 = zx.q(r8) + sx.q(*(arg2 + 0x20)) + arg2
else
    char* rdx = &var_67
    
    if (count == 1)
        *rdx = r8.b
    else
        if (count == 2)
            goto label_142b6c09d
        
        if (count == 3)
            void var_66
            rdx = &var_66
            var_67 = (r8 u>> 0x10).b
        label_142b6c09d:
            *rdx = (r8 u>> 8).b
            rdx[1] = r8.b
    
    rdx_2 = &var_67

int32_t rax_8 = *(arg1 + 0x50)

if (rax_8 != 0)
    bool cond:0_1 = rax_8 != 1
    
    if (rax_8 s<= 1)
        goto label_142b6c0d4
    
    if (count != 1)
        cond:0_1 = rax_8 != 1
    label_142b6c0d4:
        
        if (not(cond:0_1) && count u> 1)
            rax_8.b = 0xe
            *(arg1 + 0x50) = 2
            goto label_142b6c0e4
    else
        rax_8.b = 0xf
        *(arg1 + 0x50) = count
    label_142b6c0e4:
        char var_68 = rax_8.b
        
        if (rdx_2 != &var_67)
            memcpy(&var_67, rdx_2, count)
        
        rdx_2 = &var_68
        count += 1

int64_t result = sub_142b6b510(arg1, rdx_2, count, arg4, arg5, arg6, arg7, arg8)
__security_check_cookie(rax_1 ^ &var_a8)
return result
