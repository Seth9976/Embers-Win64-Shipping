// 函数: sub_1429e2860
// 地址: 0x1429e2860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg4)
int32_t rdi = *(arg2 + 0x5cc)
int32_t r11 = *(arg2 + 0x5d4)
int32_t count_1 = 1 << (arg6 - 1).b
int32_t result = count_1 s>> 1
int32_t rdx = result + arg3
int32_t r8 = result + rbp.d

if (arg3 s< rdi && rbp.d s< r11)
    int32_t rax
    rax.b = r8 s< r11
    int32_t r9
    r9.b = rdx s< rdi
    int32_t rax_1 = sub_1429e4920(arg1, arg3, rbp.d, r9, rax, arg6 - 1)
    int64_t r8_2 = sx.q(rax_1)
    int32_t rcx_4 = r8_2.d
    char rdi_1 = *(r8_2 * 0xd + zx.q(arg5) + 0x143604698)
    int32_t var_68_1
    char var_60_2
    int32_t var_58_1
    int32_t r8_9
    int32_t r9_6
    
    if (result != 0)
        if (rax_1 == 0)
            var_58_1 = arg6
            var_60_2 = arg6.b
            goto label_1429e2af4
        
        if (rcx_4 == 1)
            var_68_1.b = rdi_1
            sub_1429e2380(arg1, arg2, arg3, rbp.d, var_68_1.b, arg6.b, arg6 - 1)
            
            if (rdx s< rdi)
                r9_6 = rbp.d
                var_58_1 = arg6 - 1
                r8_9 = rdx
                var_60_2 = arg6.b
                goto label_1429e2b02
            
            r8_2 = zx.q(r8_2.d)
        else if (rcx_4 == 2)
            var_68_1.b = rdi_1
            sub_1429e2380(arg1, arg2, arg3, rbp.d, var_68_1.b, (arg6 - 1).b, arg6)
            
            if (r8 s< r11)
                r9_6 = r8
                var_58_1 = arg6
                var_60_2 = (arg6 - 1).b
                goto label_1429e2af7
            
            r8_2 = zx.q(r8_2.d)
        else if (rcx_4 == 3)
            var_68_1.b = rdi_1
            sub_1429e2860(arg1, arg2, zx.q(arg3), zx.q(rbp.d), var_68_1, arg6 - 1)
            var_68_1.b = rdi_1
            sub_1429e2860(arg1, arg2, zx.q(arg3), zx.q(r8), var_68_1, arg6 - 1)
            var_68_1.b = rdi_1
            sub_1429e2860(arg1, arg2, zx.q(rdx), zx.q(rbp.d), var_68_1, arg6 - 1)
            var_68_1.b = rdi_1
            sub_1429e2860(arg1, arg2, zx.q(rdx), zx.q(r8), var_68_1, arg6 - 1)
            r8_2 = zx.q(r8_2.d)
    else
        var_58_1 = 1
        *(arg1 + 0x3580) = (1 s>> ((rcx_4 u>> 1).b & 1)).b
        var_60_2 = 1
        *(arg1 + 0x3581) = (1 s>> (r8_2.b & 1)).b
    label_1429e2af4:
        r9_6 = rbp.d
    label_1429e2af7:
        r8_9 = arg3
    label_1429e2b02:
        var_68_1.b = rdi_1
        sub_1429e2380(arg1, arg2, r8_9, r9_6, var_68_1.b, var_60_2, var_58_1)
        r8_2 = zx.q(r8_2.d)
    result = zx.d(arg5)
    
    if (result.b u>= 3 && (result.b == 3 || r8_2.d != 3))
        int64_t count = sx.q(count_1)
        uint64_t rbx_1 = zx.q(rdi_1) * 2
        memset(rbp + *(arg1 + 0x3648), sx.d(*(rbx_1 + 0x1436047f0)), count)
        return memset((zx.q(arg3) & 7) + 0x3650 + arg1, sx.d(*(rbx_1 + 0x1436047f1)), count)

return result
