// 函数: sub_14287b990
// 地址: 0x14287b990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int128_t* rsi = arg2
*(*(arg1 + 0xa8) + 0x310) = 0
*(*(arg1 + 0xa8) + 0x314) = 0
*(*(arg1 + 0xa8) + 0x318) = 0
*(*(arg1 + 0xa8) + 0x31c) = 0
*(*(arg1 + 0xa8) + 0x320) = 0
*(*(arg1 + 0xa8) + 0x324) = 0
*(*(arg1 + 0xa8) + 0x328) = 0
*(*(arg1 + 0xa8) + 0x32c) = 0
*(*(arg1 + 0xa8) + 0x330) = 0
int32_t* rcx = *(arg1 + 8)
int32_t rax_10

if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
    rax_10 = *rcx

int32_t var_50_1
uint128_t var_48

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0 || rax_10 s< 0x304 || rax_10 == 0x10000)
    uint128_t zmm0 = *arg2
    var_48 = zmm0
    int64_t rcx_14 = _mm_bsrli_si128(zmm0, 8).q
    char* rax_21
    uint64_t r14_1
    
    if (rcx_14 != 0)
        rax_21 = var_48.q
        var_48:8.q = rcx_14 - 1
        r14_1 = zx.q(*rax_21)
        var_48.q = &rax_21[1]
    
    if (rcx_14 == 0 || rcx_14 - 1 u< r14_1)
        var_50_1 = 0x9ce
    label_14287be11:
        sub_142856580(arg1, 0x32, 0x169, 0x9f, "ssl\statem\statem_clnt.c", var_50_1)
    else
        var_48:8.q = rcx_14 - 1 - r14_1
        var_48.q = &rax_21[1 + r14_1]
        *arg2 = var_48
        void* r15_1 = *(arg1 + 0xa8)
        sub_1428a6780(*(r15_1 + 0x250))
        *(r15_1 + 0x250) = 0
        *(r15_1 + 0x258) = 0
        
        if (r14_1 == 0)
            goto label_14287bcdc
        
        int64_t rax_23 = sub_1428a6af0(&rax_21[1], zx.q(r14_1.d), 
            "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1ad)
        *(r15_1 + 0x250) = rax_23
        
        if (rax_23 == 0)
            sub_142856580(arg1, 0x50, 0x169, 0x44, "ssl\statem\statem_clnt.c", 0x9d5)
        else
            *(r15_1 + 0x258) = r14_1
        label_14287bcdc:
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) == 0)
            label_14287bdd1:
                
                if (sub_14285e360(arg1, rsi) != 0)
                label_14287bdda:
                    
                    if (*(rsi + 8) == 0)
                        *(*(arg1 + 0xa8) + 0x248) = 1
                        return 2
                    
                    var_50_1 = 0x9ff
                    goto label_14287be11
            else
                uint128_t zmm0_2 = *rsi
                var_48 = zmm0_2
                int64_t rdx_10 = _mm_bsrli_si128(zmm0_2, 8).q
                char* rax_25
                uint64_t rcx_22
                
                if (rdx_10 u>= 2)
                    rax_25 = var_48.q
                    var_48.q = &rax_25[2]
                    var_48:8.q = rdx_10 - 2
                    rcx_22 = zx.q(*rax_25) << 8 | zx.q(rax_25[1])
                
                if (rdx_10 u< 2 || rdx_10 - 2 u< rcx_22)
                    var_50_1 = 0x9df
                    goto label_14287be11
                
                var_48:8.q = rdx_10 - 2 - rcx_22
                var_48.q = &rax_25[2 + rcx_22]
                var_48.q = &rax_25[2]
                var_48:8.q = rcx_22
                *rsi = var_48
                int32_t rax_28 = sub_142865660(arg1, &var_48, 0)
                
                if (rax_28 != 0)
                    int32_t rax_29 = sub_142865560(arg1)
                    
                    if (rax_29 != 0)
                        goto label_14287bdd1
                    
                    sub_142856580(arg1, rax_29 + 0x50, 0x169, rax_29 + 0x41, 
                        "ssl\statem\statem_clnt.c", 0x9f0)
                else
                    sub_142856580(arg1, rax_28 + 0x50, 0x169, 0x168, "ssl\statem\statem_clnt.c", 
                        0x9ea)
else
    bool cond:0_1 = (arg1[0x11].b & 1) == 0
    void* arg_8 = nullptr
    
    if (not(cond:0_1))
        return 1
    
    sub_1428a6780(*(*(arg1 + 0xa8) + 0x250))
    *(*(arg1 + 0xa8) + 0x250) = 0
    *(*(arg1 + 0xa8) + 0x258) = 0
    sub_1428a6780(*(arg1 + 0x760))
    *(arg1 + 0x760) = 0
    uint128_t zmm0_1 = *rsi
    var_48 = zmm0_1
    int64_t rcx_4 = _mm_bsrli_si128(zmm0_1, 8).q
    
    if (rcx_4 == 0)
    label_14287bc12:
        var_50_1 = 0x9ad
        goto label_14287be11
    
    char* rax_14 = var_48.q
    var_48:8.q = rcx_4 - 1
    uint64_t r8_3 = zx.q(*rax_14)
    var_48.q = &rax_14[1]
    
    if (rcx_4 - 1 u< r8_3)
        goto label_14287bc12
    
    var_48:8.q = rcx_4 - 1 - r8_3
    var_48.q = &rax_14[1 + r8_3]
    var_48:8.q = r8_3
    var_48.q = &rax_14[1]
    *rsi = var_48
    
    if (sub_142878170(&var_48, &arg1[0x1d8], &arg1[0x1da]) == 0)
        goto label_14287bc12
    
    void var_38
    
    if (sub_1428673b0(rsi, &var_38) != 0)
        int32_t rax_18 = sub_142875450(arg1, &var_38, 0x4000, &arg_8, nullptr, 1)
        int32_t rax_19
        
        if (rax_18 != 0)
            rax_19 = sub_142875b50(arg1, 0x4000, arg_8, 0, 0, 1)
        
        if (rax_18 == 0 || rax_19 == 0)
            sub_1428a6780(arg_8)
        else
            sub_1428a6780(arg_8)
            int32_t rax_20 = sub_142865560(arg1)
            
            if (rax_20 != 0)
                goto label_14287bdda
            
            sub_142856580(arg1, rax_20 + 0x50, 0x169, 0x10f, "ssl\statem\statem_clnt.c", 0x9c4)
    else
        sub_142856580(arg1, 0x32, 0x169, 0x10f, "ssl\statem\statem_clnt.c", 0x9b4)
return 0
