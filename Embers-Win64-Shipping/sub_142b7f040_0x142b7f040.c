// 函数: sub_142b7f040
// 地址: 0x142b7f040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int64_t rbx = sx.q(arg3)
uint64_t result

if (*arg4 s> 0)
    result = 0
else if (rbx.d u> 0x1f)
    *arg4 = 1
    result = 0
else
    void* rcx = *(arg1 + 0x20)
    char rax_2
    
    if (rcx != 0)
        rax_2 = sub_142a95bd0(rcx)
    
    if (rcx == 0 || rax_2 != 0)
        *arg4 = 0x1b
        result = 0
    else if (rbx.d == 0)
        result = 0
    else if (rbx.d != 1)
        int64_t rcx_2
        int64_t rdx_1
        int32_t r8_2
        
        if (rbx.d == 2)
            rcx_2 = *arg2
            rdx_1 = arg2[1]
            r8_2 = (rcx_2 s>> 0x20).d
        
        if (rbx.d != 2 || (rcx_2 & 0xffffffffff00ff) != 0x5000000
                || (rdx_1 & 0xffffffff00ffffff) != 0x500 || r8_2 == 0)
            int64_t r8_3 = 0
            int32_t var_b8[0x20]
            
            if (rbx.d == 0)
            label_142b7f1a9:
                result = sub_142b7f200(arg1, &var_b8, rbx.d, arg4)
            else
                while (true)
                    int64_t rax_7 = arg2[r8_3]
                    uint32_t r9 = zx.d(rax_7.w)
                    int32_t rdx_4 = (rax_7 s>> 0x20).d
                    int32_t rax_11
                    
                    if ((0xffff00ff00ff & rax_7) != 0)
                        if ((rax_7 & 0xffffffffff) == 0x5000500)
                            rax_11 = rdx_4 | 0xc1
                            goto label_142b7f189
                        
                        if (rdx_4 == 0 && r9.b == 0)
                            rax_11 = rax_7.d | 0xc2
                            goto label_142b7f189
                    else
                        rax_11 = (rax_7.d u>> 8 | r9) u>> 8 | rdx_4
                    label_142b7f189:
                        
                        if (rax_11 != 1)
                            var_b8[r8_3] = rax_11
                            r8_3 += 1
                            
                            if (r8_3 == rbx)
                                goto label_142b7f1a9
                            
                            continue
                    result = sub_142b7f3c0(arg1, arg2, rbx.d, arg4)
                    break
        else
            result = zx.q((rcx_2.d & 0xff00) << 8) | zx.q((rdx_1 s>> 0x10).d) | zx.q(r8_2) | 0xc4
    else
        result = sub_142b7f570(arg1, *arg2, arg4)

__security_check_cookie(rax_1 ^ &var_d8)
return result
