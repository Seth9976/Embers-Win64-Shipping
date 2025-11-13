// 函数: sub_1428c5a30
// 地址: 0x1428c5a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
__chkstk(0x70)
int64_t* r10 = arg1

if (arg1 == 0)
    return 0

int32_t rax_1 = *arg4
int64_t* r15 = *arg2

if ((rax_1.b & 0x10) == 0)
    return sub_1428c5d80(arg1, arg2, arg3, arg4, arg5, arg6, arg7)

int32_t rax_2 = arg4[1]
int64_t* var_38 = r15
char var_68
int32_t r8_2
int32_t var_48
int32_t var_44
int32_t var_40
char rcx
int32_t rdx
int64_t* rsi_2
int32_t rdi_1
int32_t r8

if (arg6 == 0 || *arg6 == 0)
    var_68.d = arg3
    int32_t rax_3 = sub_1428f2ef0(&var_38, &var_48, &var_40, &var_44, var_68)
    rdi_1 = var_48
    rcx = rax_3.b
    rdx = var_44
    r8 = var_40
    rsi_2 = var_38
    
    if (arg6 == 0)
    label_1428c5b73:
        r10 = arg_8
        goto label_1428c5b7f
    
    *(arg6 + 4) = rax_3
    int32_t rax_5 = rsi_2.d - r15.d
    *(arg6 + 8) = rdi_1
    *(arg6 + 0x10) = rdx
    *(arg6 + 0xc) = r8
    *(arg6 + 0x14) = rax_5
    *arg6 = 1
    
    if ((rcx & 0x81) != 0 || rax_5 + rdi_1 s<= arg3)
        goto label_1428c5b73
    
    var_68.d = 0x456
    sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
    *arg6 = 0
    var_68.d = 0x1d1
    r8_2 = 0x3a
else
    rdi_1 = *(arg6 + 8)
    rsi_2 = sx.q(*(arg6 + 0x14)) + r15
    rdx = *(arg6 + 0x10)
    r8 = *(arg6 + 0xc)
    rcx = (*(arg6 + 4)).b
    var_38 = rsi_2
    var_48 = rdi_1
    var_44 = rdx
    var_40 = r8
label_1428c5b7f:
    
    if (rcx s< 0)
        var_68.d = 0x45e
        sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
        
        if (arg6 == 0)
            var_68.d = 0x1d1
            r8_2 = 0x3a
        else
            *arg6 = 0
            var_68.d = 0x1d1
            r8_2 = 0x3a
    else if (rax_2 s< 0)
    label_1428c5bd8:
        
        if ((rcx & 1) != 0)
            rdi_1 = r15.d - rsi_2.d + arg3
        
        arg_8 = rsi_2
        
        if ((rcx & 0x20) != 0)
            var_68 = 0
            
            if (sub_1428c5d80(r10, &arg_8, rdi_1, arg4, 0, arg6, arg7) != 0)
                int64_t* rax_10 = arg_8
                int32_t rcx_3 = rsi_2.d - rax_10.d + rdi_1
                int32_t rax_11
                
                if ((rcx & 1) == 0)
                    if (rcx_3 == 0)
                        *arg2 = rax_10
                        return 1
                    
                    rax_11 = 0x1ee
                    r8_2 = 0x77
                else
                    if (rcx_3 s>= 2 && *rax_10 == 0 && *(rax_10 + 1) == 0)
                        *arg2 = rax_10 + 2
                        return 1
                    
                    rax_11 = 0x1e5
                    r8_2 = 0x89
                
                var_68.d = rax_11
            else
                var_68.d = 0x1dd
                r8_2 = 0x3a
        else
            var_68.d = 0x1d7
            r8_2 = 0x78
    else
        if (rax_2 == r8 && (rax_1 & 0xc0) == rdx)
            if (arg6 != 0)
                *arg6 = 0
            
            goto label_1428c5bd8
        
        if (arg5 != 0)
            return 0xffffffff
        
        if (arg6 != 0)
            *arg6 = 0
        
        var_68.d = 0x46a
        sub_1428a5670(0xd, 0x68, 0xa8, "crypto\asn1\tasn_dec.c", 0x46a)
        var_68.d = 0x1d1
        r8_2 = 0x3a
sub_1428a5670(0xd, 0x84, r8_2, "crypto\asn1\tasn_dec.c", var_68)
return 0
