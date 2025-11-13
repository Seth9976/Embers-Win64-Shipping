// 函数: sub_1428c4ef0
// 地址: 0x1428c4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x48)
char* rax = *arg1
int64_t rdi = sx.q(arg2)

if (arg3 == 0)
    *arg1 = &rax[rdi]
    return 1

int32_t rsi = 1
int32_t var_38_2
int32_t r8_2

if (arg2 s> 0)
    while (true)
        int32_t rbx_1
        
        if (rdi.d s>= 2 && *rax == 0 && rax[1] == 0)
            rax = &rax[2]
            int32_t temp0_1 = rsi
            rsi -= 1
            
            if (temp0_1 != 1)
                rbx_1 = -2
            label_1428c4fbe:
                rdi = zx.q(rdi.d + rbx_1)
                
                if (rdi.d s> 0)
                    continue
                else if (rsi != 0)
                    break
            
            *arg1 = rax
            return 1
        
        char* var_28 = rax
        int32_t rbx_2 = rax.d
        void arg_8
        int32_t arg_18
        void arg_20
        char rax_2 = sub_1428f2ef0(&var_28, &arg_18, &arg_20, &arg_8, rdi.d)
        
        if (rax_2 s< 0)
            sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
            r8_2 = 0x3a
            var_38_2 = 0x3b2
            goto label_1428c5045
        
        rax = var_28
        int32_t rcx_3
        
        if ((rax_2 & 1) == 0)
            rcx_3 = arg_18
        else
            rcx_3 = rbx_2 - rax.d + rdi.d
            arg_18 = rcx_3
        
        if ((rax_2 & 1) == 0)
            rax = &rax[sx.q(rcx_3)]
        else
            if (rsi == 0xffffffff)
                var_38_2 = 0x3b7
                r8_2 = 0x3a
                goto label_1428c5045
            
            rsi += 1
        
        rbx_1 = rbx_2 - rax.d
        goto label_1428c4fbe

var_38_2 = 0x3c1
r8_2 = 0x89
label_1428c5045:
sub_1428a5670(0xd, 0xbe, r8_2, "crypto\asn1\tasn_dec.c", var_38_2)
return 0
