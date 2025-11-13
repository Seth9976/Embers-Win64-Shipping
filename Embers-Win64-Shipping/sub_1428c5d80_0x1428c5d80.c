// 函数: sub_1428c5d80
// 地址: 0x1428c5d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x98)
int64_t arg_8
arg_8.d = arg3
int64_t* r12 = arg1

if (arg1 == 0)
    return 0

int32_t rax_1 = *arg4
void* r13 = *arg2
int32_t r15_1 = rax_1 & 0xc0
void* var_58 = r13

if (test_bit(rax_1, 0xc))
    int64_t* var_48 = arg1
    r12 = &var_48

int32_t rcx_1 = rax_1 & 8
int32_t var_98_2
void* rdi_8
int32_t r8_2

if ((rax_1.b & 6) == 0)
    int32_t rax_18
    
    if (rcx_1 == 0)
        rax_18 = sub_1428c5060(r12, &var_58, arg3, (*(arg4 + 0x18))(rcx_1), 0xffffffff, 0, arg5, 
            arg6, arg7)
        
        if (rax_18 == 0)
            var_98_2 = 0x273
        label_1428c61a0:
            r8_2 = 0x3a
        label_1428c61b5:
            sub_1428a5670(0xd, 0x83, r8_2, "crypto\asn1\tasn_dec.c", var_98_2)
            return 0
    else
        rax_18 = sub_1428c5060(r12, &var_58, arg3, (*(arg4 + 0x18))(rcx_1), arg4[1], r15_1, arg5, 
            arg6, arg7)
        
        if (rax_18 == 0)
            var_98_2 = 0x26a
            goto label_1428c61a0
    
    if (rax_18 == 0xffffffff)
        return 0xffffffff
    
label_1428c61ca:
    rdi_8 = var_58
label_1428c61d2:
    *arg2 = rdi_8
    return 1

uint32_t rdi_1

if (rcx_1 == 0)
    r15_1 = 0
    rdi_1 = ((zx.d(rax_1.b) & 2) | 0x20) u>> 1
else
    rdi_1 = arg4[1]

void* var_50 = r13
int32_t rax_2
void* rcx_3
int32_t rdx
int32_t i_1
int32_t r8
int32_t r9
int32_t i_2
int32_t var_60
int32_t var_5c

if (arg6 == 0 || *arg6 == 0)
    rax_2 = sub_1428f2ef0(&var_50, &i_2, &var_5c, &var_60, arg3)
    i_1 = i_2
    rdx = var_60
    r8 = var_5c
    rcx_3 = var_50
    
    if (arg6 == 0)
        r9 = arg_8.d
    else
        *(arg6 + 4) = rax_2
        int32_t r9_3 = rcx_3.d - r13.d
        *(arg6 + 8) = i_1
        *(arg6 + 0x10) = rdx
        *(arg6 + 0xc) = r8
        *(arg6 + 0x14) = r9_3
        *arg6 = 1
        
        if ((rax_2.b & 0x81) != 0)
            r9 = arg_8.d
        else
            r9 = arg_8.d
            
            if (r9_3 + i_1 s> r9)
                sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
                *arg6 = 0
                sub_1428a5670(0xd, 0x83, 0x3a, "crypto\asn1\tasn_dec.c", 0x229)
                return 0
else
    i_1 = *(arg6 + 8)
    rcx_3 = sx.q(*(arg6 + 0x14)) + r13
    rdx = *(arg6 + 0x10)
    r8 = *(arg6 + 0xc)
    rax_2 = *(arg6 + 4)
    var_50 = rcx_3
    i_2 = i_1
    var_60 = rdx
    var_5c = r8
    r9 = arg_8.d

if (rax_2.b s< 0)
    sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
    
    if (arg6 != 0)
        *arg6 = 0
    
    sub_1428a5670(0xd, 0x83, 0x3a, "crypto\asn1\tasn_dec.c", 0x229)
    return 0

if (rdi_1 s>= 0)
    if (rdi_1 != r8 || r15_1 != rdx)
        if (arg5 != 0)
            return 0xffffffff
        
        if (arg6 != 0)
            *arg6 = 0
        
        sub_1428a5670(0xd, 0x68, 0xa8, "crypto\asn1\tasn_dec.c", 0x46a)
        sub_1428a5670(0xd, 0x83, 0x3a, "crypto\asn1\tasn_dec.c", 0x229)
        return 0
    
    if (arg6 != 0)
        *arg6 = 0

if ((rax_2.b & 1) != 0)
    i_1 = r13.d - rcx_3.d + r9

int32_t* rdi_5 = *r12
rax_2.b &= 1
char var_68_2 = rax_2.b
var_58 = rcx_3

if (rdi_5 != 0)
    if (sub_142898c70(rdi_5) s> 0)
        int32_t i
        
        do
            arg_8 = sub_142898c80(rdi_5)
            sub_1428c3d40(&arg_8, (*(arg4 + 0x18))())
            i = sub_142898c70(rdi_5)
        while (i s> 0)
else
    *r12 = sub_142898ba0()

if (*r12 == 0)
    var_98_2 = 0x23c
    r8_2 = 0x41
    goto label_1428c61b5

while (i_1 s> 0)
    char* rdi_6 = var_58
    
    if (i_1 s>= 2 && *rdi_6 == 0 && rdi_6[1] == 0)
        rdi_8 = &rdi_6[2]
        var_58 = rdi_8
        
        if (var_68_2 != 0)
            goto label_1428c61d2
        
        var_98_2 = 0x248
        r8_2 = 0x9f
        goto label_1428c61b5
    
    arg_8 = 0
    int32_t var_98_3
    int32_t r8_4
    
    if (sub_1428c5060(&arg_8, &var_58, i_1, (*(arg4 + 0x18))(), 0xffffffff, 0, 0, arg6, arg7) == 0)
        var_98_3 = 0x254
        r8_4 = 0x3a
    label_1428c60ed:
        sub_1428a5670(0xd, 0x83, r8_4, "crypto\asn1\tasn_dec.c", var_98_3)
        char* rax_12 = (*(arg4 + 0x18))()
        sub_1428c3d60(arg_8, rax_12)
        return 0
    
    i_1 += rdi_6.d - var_58.d
    
    if (sub_142898d50(*r12, arg_8) == 0)
        var_98_3 = 0x25b
        r8_4 = 0x41
        goto label_1428c60ed

if (var_68_2 == 0)
    goto label_1428c61ca

var_98_2 = 0x261
r8_2 = 0x89
goto label_1428c61b5
