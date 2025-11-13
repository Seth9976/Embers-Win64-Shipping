// 函数: sub_14287bf20
// 地址: 0x14287bf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
void* rcx = *(arg1 + 0xa8)
int64_t* arg_18 = nullptr
int64_t* r13 = nullptr
int32_t* arg_10 = nullptr
int128_t var_58 = *arg2
int32_t r14 = *(*(rcx + 0x238) + 0x1c)
sub_1428965a0(*(rcx + 0x408))
int32_t r15_1 = r14 & 0x1c8
int32_t arg_8 = r15_1
*(*(arg1 + 0xa8) + 0x408) = 0
int32_t var_70_1
int32_t rdx_1
int32_t r8_1
int32_t r9_1

if (r15_1 != 0)
    uint128_t zmm0_1 = *arg2
    int64_t rcx_2 = _mm_bsrli_si128(zmm0_1, 8).q
    uint128_t var_68_1
    char* rax_2
    uint64_t r15_4
    
    if (rcx_2 u>= 2)
        rax_2 = zmm0_1.q
        var_68_1:8.q = rcx_2 - 2
        r15_4 = zx.q(*rax_2) << 8 | zx.q(rax_2[1])
        var_68_1.q = &rax_2[2]
    
    if (rcx_2 u< 2 || rcx_2 - 2 u< r15_4)
        var_70_1 = 0x7d6
        r9_1 = 0x9f
        r8_1 = 0x1a5
    label_14287c480:
        rdx_1 = 0x32
    label_14287c48d:
        sub_142856580(arg1, rdx_1, r8_1, r9_1, "ssl\statem\statem_clnt.c", var_70_1)
        sub_142891ea0(r13)
        return 0
    
    var_68_1.q = &rax_2[2 + r15_4]
    var_68_1:8.q = rcx_2 - 2 - r15_4
    *arg2 = var_68_1
    
    if (r15_4 u> 0x80)
        rdx_1 = 0x28
        var_70_1 = 0x7e3
        r9_1 = 0x92
        r8_1 = 0x1a5
        goto label_14287c48d
    
    void* r12_1 = *(arg1 + 0x508)
    int64_t rcx_5 = *(r12_1 + 0xe0)
    
    if (r15_4 != 0)
        sub_1428a6780(rcx_5)
        char* rax_6 = sub_1428a6c10(&rax_2[2], r15_4, 
            "d:\dev\openssl\source\win64-release\ssl\packet_locl.h", 0x1c4)
        *(r12_1 + 0xe0) = rax_6
        
        if (rax_6 == 0)
            var_70_1 = 0x7ed
            rdx_1 = (&rax_6[0x50]).d
            r8_1 = 0x1a5
            r9_1 = (&rax_6[0x44]).d
            goto label_14287c48d
    else
        sub_1428a6780(rcx_5)
        *(*(arg1 + 0x508) + 0xe0) = 0
    
    r15_1 = arg_8

if ((r14.b & 0x48) == 0)
    int32_t rax_7
    
    if ((r14.b & 0x20) == 0)
        if ((r14 & 0x102) != 0)
            rax_7 = sub_14287d880(arg1, arg2, &arg_10)
            goto label_14287c135
        
        if ((r14.b & 0x84) != 0)
            rax_7 = sub_14287dc70(arg1, arg2, &arg_10)
            goto label_14287c135
        
        if (r14 != 0)
            r9_1 = 0xf4
            var_70_1 = 0x901
            rdx_1 = 0xa
            r8_1 = 0x16d
            goto label_14287c48d
    else
        rax_7 = sub_14287de50(arg1, arg2, &arg_10)
    label_14287c135:
        
        if (rax_7 == 0)
            sub_142891ea0(r13)
            return 0
        
        int32_t* r14_1 = arg_10
        
        if (r14_1 != 0)
            int64_t rdx_8 = *(arg2 + 8)
            int64_t rcx_11 = var_58:8.q - rdx_8
            arg_8.q = 0
            int64_t r12_2
            int64_t r15_5
            
            if (var_58:8.q u>= rcx_11)
                if (rcx_11 u> 0x7fffffffffffffff)
                    r15_5 = arg_8.q
                    r12_2 = arg_8.q
                else
                    r15_5 = var_58.q
                    r12_2 = rcx_11
            
            if (var_58:8.q u< rcx_11 || rcx_11 u> 0x7fffffffffffffff)
                var_70_1 = 0x916
                r9_1 = 0x44
                r8_1 = 0x16d
                goto label_14287c480
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 2) != 0)
                if (rdx_8 u< 2)
                    var_70_1 = 0x91f
                    r9_1 = 0xa0
                    r8_1 = 0x16d
                    goto label_14287c480
                
                char* rax_9 = *arg2
                uint16_t rcx_13 = zx.w(*rax_9)
                uint16_t r8_7 = zx.w(rax_9[1])
                *arg2 = &rax_9[2]
                *(arg2 + 8) = rdx_8 - 2
                
                if (sub_142863d30(arg1, rcx_13 << 8 | r8_7, r14_1) s> 0)
                    goto label_14287c1ea
                
                sub_142891ea0(r13)
                return 0
            
            if (sub_142865be0(arg1, r14_1) != 0)
            label_14287c1ea:
                
                if (sub_1428654d0(*(*(arg1 + 0xa8) + 0x308), &arg_8) != 0)
                    if (sub_1428673b0(arg2, &var_58) == 0 || *(arg2 + 8) != 0)
                        var_70_1 = 0x939
                        r9_1 = 0x9f
                        r8_1 = 0x16d
                        goto label_14287c480
                    
                    int32_t rax_16 = sub_142896de0(r14_1)
                    
                    if (rax_16 s>= 0)
                        int64_t rbx_1 = var_58:8.q
                        
                        if (rbx_1 u> sx.q(rax_16))
                            var_70_1 = 0x949
                            r9_1 = 0x108
                            r8_1 = 0x16d
                            goto label_14287c480
                        
                        int64_t* rax_18 = sub_142891ee0()
                        r13 = rax_18
                        
                        if (rax_18 == 0)
                            var_70_1 = 0x950
                            r9_1 = (rax_18 + 0x41).d
                            rdx_1 = (&rax_18[0xa]).d
                            r8_1 = 0x16d
                            goto label_14287c48d
                        
                        if (sub_1428935d0(r13, &arg_18, arg_8.q, nullptr, r14_1) s<= 0)
                            r9_1 = 6
                            var_70_1 = 0x956
                            r8_1 = 0x16d
                            rdx_1 = 0x50
                            goto label_14287c48d
                        
                        void* rcx_21 = *(*(arg1 + 0xa8) + 0x308)
                        int32_t rax_21
                        int32_t rax_22
                        
                        if (rcx_21 != 0 && *(rcx_21 + 0x14) == 0x390)
                            rax_21 = sub_1428973a0(arg_18, 0xffffffff, 0x1001, 6, 0)
                            
                            if (rax_21 s> 0)
                                rax_22 = sub_1428973a0(arg_18, 0x18, 0x1002, 0xffffffff, 0)
                        
                        if (rcx_21 != 0 && *(rcx_21 + 0x14) == 0x390
                                && (rax_21 s<= 0 || rax_22 s<= 0))
                            r9_1 = 6
                            var_70_1 = 0x95e
                            r8_1 = 0x16d
                            rdx_1 = 0x50
                            goto label_14287c48d
                        
                        int64_t rax_23 = sub_14285df40(arg1, &arg_10, r15_5, r12_2)
                        
                        if (rax_23 == 0)
                            sub_142891ea0(r13)
                            return 0
                        
                        int32_t rax_24 = sub_142893300(r13, var_58.q, rbx_1, arg_10, rax_23)
                        sub_1428a6780(arg_10)
                        
                        if (rax_24 s> 0)
                            sub_142891ea0(r13)
                            return 3
                        
                        rdx_1 = 0x33
                        var_70_1 = 0x96e
                        r8_1 = 0x16d
                        r9_1 = 0x7b
                        goto label_14287c48d
                    
                    var_70_1 = 0x93f
                else
                    var_70_1 = 0x92e
            else
                var_70_1 = 0x928
            
            r9_1 = 0x44
            r8_1 = 0x16d
            rdx_1 = 0x50
            goto label_14287c48d

if ((*(*(*(arg1 + 0xa8) + 0x238) + 0x20) & 0x44) != 0 || r15_1 != 0)
    if (*(arg2 + 8) == 0)
        return 3
    
    var_70_1 = 0x982
    r9_1 = 0x99
    r8_1 = 0x16d
    goto label_14287c480

if (sub_142879cf0(arg1) == 0)
    sub_142891ea0(r13)
    return 0

var_70_1 = 0x97a
r9_1 = 0x186
r8_1 = 0x16d
goto label_14287c480
