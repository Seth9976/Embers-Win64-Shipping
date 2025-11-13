// 函数: sub_142867470
// 地址: 0x142867470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xe8)
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t result_1 = 0
int64_t* r12 = nullptr
int64_t var_e8 = 0
int64_t* r14 = nullptr
void* rax_2 = *(arg1 + 0x738)
int32_t rax_3 = sub_14287e510(*(arg1 + 0x508), nullptr)
int64_t r15 = sx.q(rax_3)
uint64_t result

if (rax_3 == 0 || r15.d s> 0xff00)
    sub_142856580(arg1, 0x50, 0x27d, 0x44, "ssl\statem\statem_srvr.c", 0xefc)
label_1428675ad:
    sub_1428a6780(var_e8)
    sub_1428921c0(r12)
    sub_1428be000(r14)
    result = zx.q(result_1)
else
    int64_t rax_4 = sub_1428a6730(r15)
    var_e8 = rax_4
    
    if (rax_4 == 0)
        sub_142856580(arg1, (rax_4 + 0x50).d, 0x27d, 0x41, "ssl\statem\statem_srvr.c", 0xf02)
        goto label_1428675ad
    
    r12 = sub_142892200()
    int64_t* rax_6 = sub_1428be080()
    int32_t var_100_2
    int32_t r9
    
    if (r12 == 0 || rax_6 == 0)
        var_100_2 = 0xf0a
        r9 = 0x41
    label_142867595:
        sub_142856580(arg1, 0x50, 0x27d, r9, "ssl\statem\statem_srvr.c", var_100_2)
        r14 = rax_6
        goto label_1428675ad
    
    int32_t* rcx_3 = *(arg1 + 0x508)
    int64_t var_d0 = var_e8
    
    if (sub_14287e510(rcx_3, &var_d0) == 0)
        var_100_2 = 0xf11
    label_14286757c:
        r9 = 0x44
        goto label_142867595
    
    int64_t var_a0 = var_e8
    void* rax_8 = sub_14287e0d0(nullptr, &var_a0, r15.d)
    
    if (rax_8 == 0)
        var_100_2 = 0xf1c
        goto label_14286757c
    
    int32_t rax_9 = sub_14287e510(rax_8, nullptr)
    int32_t var_100_3
    
    if (rax_9 == 0 || rax_9 s> r15.d)
        var_100_3 = 0xf24
    label_142867662:
        sub_142856580(arg1, 0x50, 0x27d, 0x44, "ssl\statem\statem_srvr.c", var_100_3)
        sub_1428574d0(rax_8)
        r14 = rax_6
        goto label_1428675ad
    
    var_d0 = var_e8
    int32_t rax_11
    int512_t zmm1_1
    rax_11, zmm1_1 = sub_14287e510(rax_8, &var_d0)
    
    if (rax_11 == 0)
        var_100_3 = 0xf2b
        goto label_142867662
    
    sub_1428574d0(rax_8)
    int64_t rax_12 = *(rax_2 + 0x218)
    void var_70
    int128_t var_60
    int32_t r14_3
    int64_t* r15_2
    
    if (rax_12 == 0)
        int32_t* var_98_1 = &data_1434e9880
        int32_t rax_17 = sub_140611e40(&data_1434e9880)
        r14_3 = rax_17
        
        if (sub_142897af0(&var_70, zx.q(rax_17)) s<= 0)
            var_100_2 = 0xf5a
            goto label_14286757c
        
        if (sub_142892d80(r12, var_98_1, nullptr, *(rax_2 + 0x210) + 0x20, &var_70) == 0)
            var_100_2 = 0xf5a
            goto label_14286757c
        
        r15_2 = rax_6
        int32_t rax_20
        rax_20, zmm1_1 = sub_1428be280(r15_2, *(rax_2 + 0x210), 0x20, &data_1434e91b0, nullptr)
        
        if (rax_20 == 0)
            var_100_2 = 0xf5a
            goto label_14286757c
        
        var_60 = *(rax_2 + 0x200)
        goto label_1428677f9
    
    r15_2 = rax_6
    int32_t rax_13 = rax_12(arg1, &var_60, &var_70, r12, r15_2, 1, rax_6)
    int32_t var_100_5
    int32_t r9_2
    
    if (rax_13 != 0)
        if (rax_13 s< 0)
            var_100_5 = 0xf4b
            r9_2 = 0xea
        label_142867728:
            sub_142856580(arg1, 0x50, 0x27d, r9_2, "ssl\statem\statem_srvr.c", var_100_5)
            r14 = r15_2
            goto label_1428675ad
        
        r14_3 = sub_142890ed0(r12)
    label_1428677f9:
        
        if (sub_142867a20(arg1, arg2, arg3, arg4) == 0)
            r14 = rax_6
            goto label_1428675ad
        
        int64_t var_c8
        int64_t var_80
        
        if (sub_142873850(arg2, &var_80) != 0 && sub_142873970(arg2, &var_60, 0x10) != 0
                && sub_142873970(arg2, &var_70, sx.q(r14_3)) != 0
                && sub_142873c80(arg2, sx.q(rax_9 + 0x20), &var_c8) != 0)
            int64_t* var_108_4
            var_108_4.d = rax_9
            int32_t var_f0
            int64_t var_c0
            
            if (sub_142892db0(r12, var_c8, &var_f0, var_e8, var_108_4.d) != 0
                    && sub_142873640(arg2, sx.q(var_f0), &var_c0) != 0)
                int64_t rax_29 = var_c8
                int32_t var_e0
                
                if (rax_29 == var_c0
                        && sub_142892c30(r12, sx.q(var_f0) + rax_29, &var_e0, zmm1_1) != 0
                        && sub_142873640(arg2, sx.q(var_e0), &var_c0) != 0)
                    int64_t rcx_35 = sx.q(var_f0)
                    int64_t var_88
                    
                    if (rcx_35 + var_c8 == var_c0 && rcx_35.d + var_e0 s<= rax_9 + 0x20
                            && sub_142873850(arg2, &var_88) != 0)
                        *(*(arg1 + 0x88) + 8)
                        int32_t var_d8
                        int64_t var_b0
                        
                        if (sub_1428be4d0(r15_2) != 0 && sub_142873c80(arg2, 0x40, &var_b0) != 0
                                && sub_1428be1d0(r15_2, var_b0, &var_d8) != 0)
                            int32_t rax_39 = var_d8
                            int64_t var_78
                            
                            if (rax_39 u<= 0x40 && sub_142873640(arg2, zx.q(rax_39), &var_78) != 0
                                    && var_b0 == var_78)
                                if (sub_1428736e0(arg2) == 0)
                                    var_100_2 = 0xf86
                                    goto label_14286757c
                                
                                result_1 = 1
                                r14 = rax_6
                                goto label_1428675ad
        
        var_100_2 = 0xf7f
        goto label_14286757c
    
    int32_t rax_14 = sub_142873b60(arg2, 0, zx.q(rax_13 + 4))
    int32_t rax_15
    
    if (rax_14 != 0)
        rax_15 = sub_142873b60(arg2, 0, 2)
    
    if (rax_14 == 0 || rax_15 == 0)
        var_100_5 = 0xf41
        r9_2 = 0x44
        goto label_142867728
    
    sub_1428a6780(var_e8)
    sub_1428921c0(r12)
    sub_1428be000(r15_2)
    result = 1

__security_check_cookie(rax_1 ^ &var_128)
return result
