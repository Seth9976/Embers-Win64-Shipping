// 函数: sub_142afa850
// 地址: 0x142afa850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5f) = 0
void* rdx = *(arg2 + 0x120)
char rax_3

if (rdx != 0)
    rax_3 = sub_142b6c890(arg1, rdx, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)

if (rdx == 0 || rax_3 == 0)
    if ((*(arg1 + 0x38) & 0x8000) == 0)
    label_142afa904:
        *arg11 = 0xa
        return zx.q(arg3)
    
    void* const rax_4 = &data_143663ee0
    int32_t rcx = 0
    
    while (*rax_4 u> arg3 || arg3 u> *(rax_4 + 4))
        rax_4 += 0x10
        rcx += 1
        
        if (rcx s>= 0xe)
            goto label_142afa904
    
    int32_t r8_1 = arg3 - 0x19beb2 + *(rax_4 + 8) - *rax_4
    int64_t var_58
    var_58.d = arg9
    uint32_t r9_1 = r8_1 u/ 0xa
    r8_1.b -= r9_1.b * 0xa
    r8_1.b += 0x30
    char arg_b = r8_1.b
    uint32_t r8_6 = r9_1 u/ 0x7e
    r9_1.b -= r8_6.b * 0x7e
    r9_1.b -= 0x7f
    uint8_t rdx_5 = (r8_6 u/ 0xa).b
    char arg_a = r9_1.b
    uint8_t arg_8 = rdx_5 - 0x7f
    r8_6.b -= rdx_5 * 0xa
    r8_6.b += 0x30
    char arg_9 = r8_6.b
    sub_142b6b510(arg1, &arg_8, 4, arg6, arg7, arg8, var_58.d, arg11)

return 0
