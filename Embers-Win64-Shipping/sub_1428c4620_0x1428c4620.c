// 函数: sub_1428c4620
// 地址: 0x1428c4620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int32_t rdi = arg5
int32_t r15 = 0
char var_78 = 0
int64_t var_58
__builtin_memset(&var_58, 0, 0x1c)
int64_t* r10 = arg2
int32_t r14 = rdi

if (arg1 == 0)
    sub_1428a5670(0xd, 0x6c, 0x7d, "crypto\asn1\tasn_dec.c", 0x28d)
    return 0

if (*arg4 != 5)
    r14 = *(arg4 + 4)
else
    rdi = -1

int32_t var_74
int32_t var_70
int32_t var_68
void* var_60

if (r14 == 0xfffffffc)
    if (rdi s>= 0)
        sub_1428a5670(r14 + 0x11, r14 + 0x70, r14 + 0x83, "crypto\asn1\tasn_dec.c", 0x29b)
        return 0
    
    if (arg7 != 0)
        sub_1428a5670(0xd, 0x6c, 0x7e, "crypto\asn1\tasn_dec.c", 0x2a0)
        return 0
    
    void* rsi_1 = *arg2
    var_60 = rsi_1
    int32_t rcx_1
    char rdx_1
    
    if (arg8 == 0 || *arg8 == 0)
        int32_t rax_5 = sub_1428f2ef0(&var_60, &var_68, &var_70, &var_74, arg3)
        rcx_1 = var_74
        rdx_1 = rax_5.b
        r14 = var_70
        
        if (arg8 != 0)
            int32_t r8_2 = var_68
            *(arg8 + 4) = rax_5
            int32_t rax_7 = var_60.d - rsi_1.d
            *(arg8 + 8) = r8_2
            *(arg8 + 0x10) = rcx_1
            *(arg8 + 0xc) = r14
            *(arg8 + 0x14) = rax_7
            *arg8 = 1
            
            if ((rdx_1 & 0x81) != 0 || rax_7 + r8_2 s<= arg3)
                goto label_1428c47d0
            
            sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
        label_1428c47fd:
            *arg8 = 0
            sub_1428a5670(0xd, 0x6c, 0x3a, "crypto\asn1\tasn_dec.c", 0x2a7)
            return 0
        
    label_1428c47d0:
        r10 = arg2
    else
        rcx_1 = *(arg8 + 0x10)
        r14 = *(arg8 + 0xc)
        rdx_1 = (*(arg8 + 4)).b
        var_68 = *(arg8 + 8)
        void* rsi_2 = rsi_1 + sx.q(*(arg8 + 0x14))
        var_74 = rcx_1
        var_60 = rsi_2
        var_70 = r14
    
    if (rdx_1 s< 0)
        sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
        
        if (arg8 != 0)
            goto label_1428c47fd
        
        sub_1428a5670(0xd, 0x6c, 0x3a, "crypto\asn1\tasn_dec.c", 0x2a7)
        return 0
    
    if (rcx_1.b != 0)
        r14 = -3

int32_t r12_1 = rdi
int32_t rax_9 = 0

if (rdi != 0xffffffff)
    rax_9 = arg6

if (rdi == 0xffffffff)
    r12_1 = r14

void* rdi_1 = *r10
var_68 = rax_9
var_60 = rdi_1
int32_t var_6c
int32_t rcx_3
char rdx_3
char* rsi_4
int32_t r8_3
int32_t r9_1

if (arg8 == 0 || *arg8 == 0)
    int32_t rax_10 = sub_1428f2ef0(&var_60, &var_70, &var_6c, &var_74, arg3)
    rcx_3 = var_70
    rdx_3 = rax_10.b
    r9_1 = var_74
    r8_3 = var_6c
    rsi_4 = var_60
    
    if (arg8 == 0)
    label_1428c4904:
        rax_9 = var_68
        r10 = arg2
        goto label_1428c490b
    
    *(arg8 + 4) = rax_10
    int32_t rax_12 = rsi_4.d - rdi_1.d
    *(arg8 + 8) = rcx_3
    *(arg8 + 0x10) = r9_1
    *(arg8 + 0xc) = r8_3
    *(arg8 + 0x14) = rax_12
    *arg8 = 1
    
    if ((rdx_3 & 0x81) != 0 || rax_12 + rcx_3 s<= arg3)
        goto label_1428c4904
    
    sub_1428a5670(0xd, 0x68, 0x9b, "crypto\asn1\tasn_dec.c", 0x456)
    *arg8 = 0
else
    rcx_3 = *(arg8 + 8)
    rsi_4 = sx.q(*(arg8 + 0x14)) + rdi_1
    r9_1 = *(arg8 + 0x10)
    r8_3 = *(arg8 + 0xc)
    rdx_3 = (*(arg8 + 4)).b
    var_60 = rsi_4
    var_70 = rcx_3
    var_74 = r9_1
    var_6c = r8_3
label_1428c490b:
    
    if (rdx_3 s>= 0)
        if (r12_1 s< 0)
        label_1428c4962:
            
            if ((rdx_3 & 1) != 0)
                rcx_3 = rdi_1.d - rsi_4.d + arg3
            
            var_60 = rsi_4
            char r8_5 = rdx_3 & 1
            rdx_3 &= 0x20
            int32_t rdi_2 = rsi_4.d
            char* var_50
            void* rbx_1
            int64_t rdi_3
            
            if (r14 == 0x10 || r14 == 0x11)
                if (r14 != 0xfffffffd)
                    if (rdx_3 != 0)
                        goto label_1428c4ad7
                    
                    sub_1428a5670(0xd, 0x6c, 0x9c, "crypto\asn1\tasn_dec.c", 0x2c8)
                    return 0
                
            label_1428c4acf:
                
                if (arg8 == 0)
                    goto label_1428c4ad7
                
                *arg8 = 0
            label_1428c4ad7:
                char* rax_18 = rsi_4
                rsi_4 = *r10
                
                if (r8_5 == 0)
                    rdi_3 = zx.q(rdi_2 - rsi_4.d + rcx_3)
                    rbx_1 = &rax_18[sx.q(rcx_3)]
                    goto label_1428c4b47
                
                if (sub_1428c4ef0(&var_60, rcx_3, r8_5) != 0)
                    rbx_1 = var_60
                    rdi_3 = zx.q(rbx_1.d - rsi_4.d)
                    goto label_1428c4b47
            else
                if (r14 == 0xfffffffd)
                    goto label_1428c4acf
                
                int32_t var_98
                
                if (rdx_3 == 0)
                    rdi_3 = sx.q(rcx_3)
                    rbx_1 = &rsi_4[rdi_3]
                label_1428c4b47:
                    var_98.q = &var_78
                    
                    if (sub_1428c4bb0(arg1, rsi_4, rdi_3.d, r14, var_98, arg4) != 0)
                        r15 = 1
                        *arg2 = rbx_1
                else
                    if (r14 u<= 0xa && test_bit(0x466, r14))
                        sub_1428a5670(0xd, 0x6c, 0xc3, "crypto\asn1\tasn_dec.c", 0x2da)
                        return 0
                    
                    var_78 = 1
                    var_98 = 0xffffffff
                    
                    if (sub_1428c4300(&var_58, &var_60, rcx_3, r8_5, 0xffffffff, 0, 0) != 0)
                        rdi_3 = sx.q(var_58.d)
                        int64_t rax_16 = sub_1428a73a0(&var_58, sx.q((rdi_3 + 1).d))
                        
                        if (rax_16 != 0)
                            rbx_1 = var_60
                            var_50[rdi_3] = 0
                            rsi_4 = var_50
                            goto label_1428c4b47
                        
                        sub_1428a5670((rax_16 + 0xd).d, (rax_16 + 0x6c).d, (rax_16 + 0x41).d, 
                            "crypto\asn1\tasn_dec.c", 0x2ec)
            
            if (var_78 != 0)
                sub_1428a6780(var_50)
            
            return zx.q(r15)
        
        if (r12_1 == r8_3 && rax_9 == r9_1)
            if (arg8 != 0)
                *arg8 = 0
            
            goto label_1428c4962
        
        if (arg7 != 0)
            return 0xffffffff
        
        if (arg8 != 0)
            *arg8 = 0
        
        sub_1428a5670(0xd, 0x68, 0xa8, "crypto\asn1\tasn_dec.c", 0x46a)
    else
        sub_1428a5670(0xd, 0x68, 0x66, "crypto\asn1\tasn_dec.c", 0x45e)
        
        if (arg8 != 0)
            *arg8 = 0
sub_1428a5670(0xd, 0x6c, 0x3a, "crypto\asn1\tasn_dec.c", 0x2b6)
return 0
