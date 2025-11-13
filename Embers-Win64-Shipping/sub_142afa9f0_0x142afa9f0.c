// 函数: sub_142afa9f0
// 地址: 0x142afa9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r11 = arg2
int64_t rbp = *(arg1 + 0x18)
int32_t rsi = -1
int64_t rax_5 = sx.q(arg3)
int64_t r10_2 = (rax_5 << 0xa) + *(arg1 + 8)
int32_t r8_1 = arg5 << 8
int32_t rdx = sx.d(*(rax_5 + arg2))
int32_t var_f8 = arg4
int64_t var_c8 = r10_2
arg5 = r8_1
uint32_t rbx = (rdx & 0x38) << 2
int32_t var_b8[0x20]

if (rbx == 0 && rdx.b s>= 0x40)
    var_b8[0] = 0xffffffff
    rbx = 1

uint64_t rdi = zx.q(rbx)
uint64_t result = zx.q(((rdx & 7) + 1) << 5)
uint64_t result_1 = result

if (rdi u>= result)
label_142afac2f:
    result.b = 1
else
    while (true)
        int32_t rax_9 = *(r10_2 + (rdi << 2))
        
        if (rax_9 s< 0)
            int32_t rcx_8 = rax_9 u>> 0x14 & 0xf
            
            if (rcx_8 == 0)
                result = zx.q(rax_9.w)
            else if (rcx_8 == 4)
                result = zx.q(*(rbp + (sx.q(zx.d(rax_9.w) + arg4) << 1)))
                
                if (result.d u>= 0xfffe)
                    result = 0xffffffff
            else if (rcx_8 == 5)
                int32_t rcx_13 = zx.d(rax_9.w) + arg4
                result = zx.q(*(rbp + (sx.q(rcx_13) << 1)))
                
                if (result.d u>= 0xd800)
                    if (result.d u<= 0xdbff)
                        result = zx.q((((result.d & 0x3ff) + 9) << 0xa)
                            + zx.d(*(rbp + (sx.q(rcx_13 + 1) << 1))))
                    else if (result.d != 0xe000)
                        result = 0xffffffff
                    else
                        result = zx.q(*(rbp + (sx.q(rcx_13 + 1) << 1)))
            else if (rcx_8 != 1)
                result = 0xffffffff
            else
                result = zx.q((rax_9 & 0xfffff) + 0x10000)
            
            rsi &= result.d
            var_b8[zx.q(rbx) & 0x1f] = result.d
            goto label_142afab63
        
        uint64_t rcx_3 = zx.q(rax_9 u>> 0x18)
        
        if (*(rcx_3 + r11) s< 0)
            goto label_142afab1f
        
        if (sub_142afa9f0(arg1, r11, zx.q(rcx_3.d), zx.q(arg4 + (rax_9 & 0xffffff)), rbx | r8_1, 
                arg6, arg7, arg8, var_f8, arg7, arg6, arg8, arg1, result_1, var_c8, arg2).b != 0)
            r8_1 = arg5
        label_142afab1f:
            var_b8[zx.q(rbx) & 0x1f] = 0xffffffff
        label_142afab63:
            rbx += 1
            rdi += 1
            
            if ((rbx.b & 0x1f) != 0 || rsi s< 0)
                goto label_142afab93
            
            if (arg6(arg7, zx.q(rbx - 0x20) | zx.q(r8_1), &var_b8).b != 0)
                rsi = -1
            label_142afab93:
                
                if (rdi s>= result_1)
                    goto label_142afac2f
                
                arg4 = var_f8
                r8_1 = arg5
                r10_2 = var_c8
                r11 = arg2
                continue
        
        result.b = 0
        break

__security_check_cookie(rax_1 ^ &var_138)
return result
