// 函数: sub_14293b470
// 地址: 0x14293b470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
*(arg1 + 0x20) &= 0xfffffffe
char* rdi = arg3
int32_t rax_2 = *arg2
int64_t rbp = sx.q(arg4)
int64_t result

if (rax_2 s<= 0)
    result = 0
else if (rax_2 s<= 2)
    void var_48
    sub_1428b7080(&var_48, 0xd, "%d", zx.q(arg2[0xa]))
    void var_58
    sub_1428b7080(&var_58, 0xd, "%d", zx.q(arg2[0xb]))
    int32_t var_68_2
    int32_t r8
    
    if (rbp.d s>= arg2[0xa])
        if (rbp.d s> arg2[0xb])
            var_68_2 = 0x38e
            r8 = 0x64
            goto label_14293b57f
        
        int64_t rcx_6 = *(arg2 + 0x18)
        
        if (rcx_6 != 0)
            memcpy(rcx_6, rdi, rbp.d)
            
            if (rbp.d s<= arg2[0xb])
                *(rbp + *(arg2 + 0x18)) = 0
            
            *(arg2 + 0x20) = rbp
            result = 0
        else
            sub_1428a5670(0x28, 0x78, 0x69, "crypto\ui\ui_lib.c", 0x396)
            result = 0xffffffff
    else
        var_68_2 = 0x387
        r8 = 0x65
    label_14293b57f:
        *(arg1 + 0x20) |= 1
        sub_1428a5670(0x28, 0x78, r8, "crypto\ui\ui_lib.c", var_68_2)
        char const* const var_60_1 = " characters"
        var_68_2.q = &var_58
        sub_1428a4880(5)
        result = 0xffffffff
else if (rax_2 != 3)
    result = 0
else
    char* rax_3 = *(arg2 + 0x18)
    
    if (rax_3 != 0)
        *rax_3 = 0
        char i = *arg3
        
        while (i != 0)
            if (strchr(*(arg2 + 0x30), sx.d(i)) != 0)
                **(arg2 + 0x18) = **(arg2 + 0x30)
                break
            
            if (strchr(*(arg2 + 0x38), sx.d(*rdi)) != 0)
                **(arg2 + 0x18) = **(arg2 + 0x38)
                break
            
            i = rdi[1]
            rdi = &rdi[1]
        
        result = 0
    else
        sub_1428a5670(0x28, 0x78, 0x69, "crypto\ui\ui_lib.c", 0x3a4)
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_88)
return result
