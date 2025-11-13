// 函数: sub_142922db0
// 地址: 0x142922db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t* rax = *arg4
int64_t* rsi = nullptr
int32_t r15 = 0
int32_t arg_8 = 0

if (*(arg1 + 8) == 0 || *(arg1 + 0x10) == 0 || *(arg1 + 0x18) == 0)
    sub_1428a5670(0xa, 0x6b, 0x65, "crypto\dsa\dsa_ossl.c", 0xba)
    return 0

int64_t* rax_1 = sub_142890500()
int64_t* rax_2 = sub_142890500()
int64_t* rax_3 = sub_142890500()

if (rax_1 == 0 || rax_2 == 0 || rax_3 == 0)
    sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)
else if (arg2 != 0)
    rsi = arg2
label_142922e6d:
    int32_t rax_5 = sub_142890560(*(arg1 + 0x10))
    
    if (sub_142890810(rax_1, rax_5) == 0)
        sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)
    else if (sub_142890810(rax_2, rax_5) == 0)
        sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)
    else if (sub_142890810(rax_3, rax_5) == 0)
        sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)
    else
        int32_t var_68
        int32_t i
        
        do
            int64_t* rdx_3 = *(arg1 + 0x10)
            int32_t rax_9
            
            if (arg5 == 0)
                rax_9 = sub_1429198c0(rax_1, rdx_3)
            else
                var_68.q = sx.q(arg6)
                rax_9 = sub_142919640(rax_1, rdx_3, *(arg1 + 0x28), arg5, var_68, rsi)
            
            if (rax_9 == 0)
                goto label_14292302b
            
            i = sub_142890300(rax_1)
        while (i != 0)
        
        sub_1428908d0(rax_1, i + 4)
        int32_t* rax_10
        
        if ((*(arg1 + 0x30) & 1) != 0)
            rax_10 = sub_1428cc990(arg1 + 0x38, *(arg1 + 0x60), *(arg1 + 8), rsi)
        
        if ((*(arg1 + 0x30) & 1) != 0 && rax_10 == 0)
        label_14292302b:
            r15 = 0
            sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)
        else
            if (sub_1428d8f70(rax_2, rax_1, *(arg1 + 0x10)) == 0)
                goto label_14292302b
            
            if (sub_1428d8f70(rax_3, rax_2, *(arg1 + 0x10)) == 0)
                goto label_14292302b
            
            int64_t* rdx_8 = rax_3
            
            if (sub_142890560(rax_2) s> rax_5)
                rdx_8 = rax_2
            
            if (sub_142890040(rax_1, rdx_8) == 0)
                goto label_14292302b
            
            int64_t* r9_2 = *(arg1 + 8)
            int64_t* rdx_9 = *(arg1 + 0x18)
            int64_t r10_1 = *(*(arg1 + 0x50) + 0x28)
            int32_t* rax_16 = *(arg1 + 0x38)
            int32_t rax_17
            
            if (r10_1 == 0)
                var_68.q = rsi
                rax_17 = sub_1429060f0(rax, rdx_9, rax_1, r9_2, var_68, rax_16)
            else
                var_68.q = r9_2
                rax_17 = r10_1(arg1, rax, rdx_9, rax_1, var_68, rsi, rax_16)
            
            if (rax_17 == 0)
                goto label_14292302b
            
            var_68.q = rsi
            
            if (sub_14291a950(nullptr, rax, rax, *(arg1 + 0x10), var_68) == 0)
                goto label_14292302b
            
            int64_t* rax_19 = sub_1428da4f0(nullptr, rax_1, *(arg1 + 0x10), rsi)
            
            if (rax_19 == 0)
                goto label_14292302b
            
            sub_14288fbf0(*arg3)
            *arg3 = rax_19
            r15 = 1
else
    int64_t* rax_4 = sub_1428d8d60()
    rsi = rax_4
    
    if (rax_4 != 0)
        goto label_142922e6d
    
    sub_1428a5670(0xa, 0x6b, 3, "crypto\dsa\dsa_ossl.c", 0x10f)

if (rsi != arg2)
    sub_1428d8ae0(rsi)

sub_14288fbf0(rax_1)
sub_14288fbf0(rax_2)
sub_14288fbf0(rax_3)
return zx.q(r15)
