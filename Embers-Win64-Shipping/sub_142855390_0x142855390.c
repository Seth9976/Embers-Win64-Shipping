// 函数: sub_142855390
// 地址: 0x142855390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r13 = -1
int32_t i = 0
int64_t* r12 = nullptr
int64_t* r14 = nullptr
int64_t* r15 = nullptr
char* rsi = nullptr

if (sub_1428b9160(*(arg1 + 0x7c0), *(arg1 + 0x7a8)) == 0)
label_142855531:
    sub_142856580(arg1, 0x50, 0x253, 0x44, "ssl\tls_srp.c", 0x126)
else
    int64_t* rax_1 = sub_1428b8e90(*(arg1 + 0x7c8), *(arg1 + 0x7c0), *(arg1 + 0x7a8))
    r12 = rax_1
    
    if (rax_1 == 0)
        goto label_142855531
    
    int64_t rax_2 = *(arg1 + 0x798)
    
    if (rax_2 == 0)
        goto label_142855531
    
    char* rax_3 = rax_2(arg1, *(arg1 + 0x780))
    rsi = rax_3
    
    if (rax_3 != 0)
        int64_t* rax_4 = sub_1428b8eb0(*(arg1 + 0x7b8), *(arg1 + 0x7a0), rax_3)
        r15 = rax_4
        int64_t* rax_5
        
        if (rax_4 != 0)
            int32_t var_30
            var_30.q = r12
            rax_5 = sub_1428b8b80(*(arg1 + 0x7a8), *(arg1 + 0x7c0), *(arg1 + 0x7b0), rax_4, 
                *(arg1 + 0x7d0), var_30)
            r14 = rax_5
        
        if (rax_4 == 0 || rax_5 == 0)
            sub_142856580(arg1, 0x50, 0x253, 0x44, "ssl\tls_srp.c", 0x136)
        else
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(sub_142890560(rax_5) + 7)
            uint64_t rax_11 = sx.q((temp1_1 + (temp0_1 & 7)) s>> 3)
            void* rax_12 = sub_1428a6730(rax_11)
            
            if (rax_12 != 0)
                sub_14288fba0(r14, rax_12)
                r13 = sub_142872ab0(arg1, rax_12, rax_11, 1)
            else
                sub_142856580(arg1, (rax_12 + 0x50).d, 0x253, (rax_12 + 0x41).d, "ssl\tls_srp.c", 
                    0x13d)
                r13 = -1
    else
        sub_142856580(arg1, 0x50, 0x253, 0xea, "ssl\tls_srp.c", 0x12e)

sub_14288fbf0(r14)
sub_14288fbf0(r15)

if (rsi != 0)
    char* rax_14 = rsi
    
    if (*rsi != 0)
        while (i u< 0x80000000)
            rax_14 = &rax_14[1]
            i += 1
            
            if (*rax_14 == 0)
                break
    
    sub_1428a6890(rsi, zx.q(i) & 0x7fffffff, "ssl\tls_srp.c", 0x147)

sub_14288fbf0(r12)
return zx.q(r13)
