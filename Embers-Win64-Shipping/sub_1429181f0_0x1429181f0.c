// 函数: sub_1429181f0
// 地址: 0x1429181f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x68)
int64_t* rdi = nullptr
int32_t var_54 = 0

if (arg4 != 0 && sub_1428bf8a0(arg1, arg4) != 0)
    return sub_1428bfd80(arg1, arg2) __tailcall

if (sub_142890300(arg1[2]) != 0)
    sub_1428a5670(0x10, 0x11c, 0x72, "crypto\ec\ec_mult.c", 0x9c)
    return 0

if (sub_142890300(arg1[3]) != 0)
    sub_1428a5670(0x10, 0x11c, 0xa4, "crypto\ec\ec_mult.c", 0xa0)
    return 0

sub_1428d8e50(arg5)
int64_t* rax_7 = sub_1428bfa80(arg1)
int64_t* rax_8

if (rax_7 != 0)
    rax_8 = sub_1428bfa80(arg1)
    rdi = rax_8

if (rax_7 == 0 || rax_8 == 0)
    sub_1428a5670(0x10, 0x11c, 0x41, "crypto\ec\ec_mult.c", 0xa8)
else if (arg4 != 0)
    if (sub_1428bf580(rax_7, arg4) != 0)
    label_142918350:
        sub_1428908d0(rax_7[2], 4)
        sub_1428908d0(rax_7[3], 4)
        sub_1428908d0(rax_7[4], 4)
        sub_1428908d0(arg2[2], 4)
        sub_1428908d0(arg2[3], 4)
        sub_1428908d0(arg2[4], 4)
        sub_1428908d0(rdi[2], 4)
        sub_1428908d0(rdi[3], 4)
        sub_1428908d0(rdi[4], 4)
        int64_t* rax_11 = sub_1428d8ba0(arg5)
        int64_t* rax_12 = sub_1428d8ba0(arg5)
        int64_t* rax_13 = sub_1428d8ba0(arg5)
        
        if (rax_13 != 0)
            int32_t rax_14 = sub_1428d9290(rax_11, arg1[2], arg1[3], arg5)
            
            if (rax_14 != 0)
                int32_t rax_15 = sub_142890560(rax_11)
                int32_t rax_17 = sub_140611e60(rax_11) + 1
                int64_t* rax_18 = sub_142890e60(rax_13, rax_17)
                int64_t* rax_19
                
                if (rax_18 != 0)
                    rax_19 = sub_142890e60(rax_12, rax_17)
                
                if (rax_18 == 0 || rax_19 == 0)
                    sub_1428a5670(0x10, 0x11c, 3, "crypto\ec\ec_mult.c", 0xd3)
                else
                    int64_t* rax_20 = sub_142890040(rax_13, arg3)
                    
                    if (rax_20 != 0)
                        sub_1428908d0(rax_13, 4)
                        int32_t rax_21 = sub_142890560(rax_13)
                        int32_t rax_22
                        
                        if (rax_21 s<= rax_15)
                            rax_22 = sub_142890280(rax_13)
                        
                        int32_t rax_23
                        
                        if (rax_21 s> rax_15 || rax_22 != 0)
                            rax_23 = sub_1429084c0(rax_13, rax_13, rax_11, arg5)
                        
                        if ((rax_21 s<= rax_15 && rax_22 == 0) || rax_23 != 0)
                            int32_t rax_24 = sub_1428d8f70(rax_12, rax_13, rax_11)
                            
                            if (rax_24 != 0)
                                sub_1428908d0(rax_12, 4)
                                int32_t rax_25 = sub_1428d8f70(rax_13, rax_12, rax_11)
                                
                                if (rax_25 != 0)
                                    sub_14288fd10(sx.q(sub_142890240(rax_12, rax_15)), rax_13, 
                                        rax_12, rax_17)
                                    int32_t rax_27 = sub_140611e60(arg1[8])
                                    
                                    if (sub_142890e60(rdi[2], rax_27) == 0)
                                    label_142918840:
                                        sub_1428a5670(0x10, 0x11c, 3, "crypto\ec\ec_mult.c", 0x103)
                                    else
                                        if (sub_142890e60(rdi[3], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(rdi[4], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(arg2[2], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(arg2[3], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(arg2[4], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(rax_7[2], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(rax_7[3], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_142890e60(rax_7[4], rax_27) == 0)
                                            goto label_142918840
                                        
                                        if (sub_1428c0220(arg1, rax_7, arg5) != 0)
                                            int64_t r10_2 = *(*arg1 + 0x190)
                                            
                                            if (r10_2 == 0)
                                                if (sub_1428bf580(rdi, rax_7) != 0)
                                                    if (sub_1428bf600(arg1, arg2, rdi, arg5) == 0)
                                                        goto label_14291866d
                                                    
                                                    goto label_1429186a4
                                                
                                            label_14291866d:
                                                sub_1428a5670(0x10, 0x11c, 0x99, 
                                                    "crypto\ec\ec_mult.c", 0x116)
                                            else
                                                int32_t var_68
                                                var_68.q = arg5
                                                
                                                if (r10_2(arg1, arg2, rdi, rax_7, var_68) == 0)
                                                    goto label_14291866d
                                                
                                            label_1429186a4:
                                                int32_t rbx_2 = 1
                                                int32_t r12_3 = rax_15 - 1
                                                int32_t arg_20 = 1
                                                
                                                if (rax_15 - 1 s< 0)
                                                label_1429187a7:
                                                    int64_t rbx_5 = sx.q(rbx_2)
                                                    sub_14288fd10(rbx_5, arg2[2], rdi[2], rax_27)
                                                    sub_14288fd10(rbx_5, arg2[3], rdi[3], rax_27)
                                                    sub_14288fd10(rbx_5, arg2[4], rdi[4], rax_27)
                                                    int32_t rcx_60 = arg2[5].d
                                                    int32_t rax_52 = (rcx_60 ^ rdi[5].d) & arg_20
                                                    arg2[5].d = rcx_60 ^ rax_52
                                                    rdi[5].d ^= rax_52
                                                    int64_t r10_4 = *(*arg1 + 0x1a0)
                                                    int32_t rax_54
                                                    
                                                    if (r10_4 != 0)
                                                        var_68.q = arg5
                                                        rax_54 =
                                                            r10_4(arg1, arg2, rdi, rax_7, var_68)
                                                    
                                                    if (r10_4 == 0 || rax_54 != 0)
                                                        var_54 = 1
                                                    else
                                                        sub_1428a5670(0x10, 0x11c, 0x88, 
                                                            "crypto\ec\ec_mult.c", 0x175)
                                                else
                                                    while (true)
                                                        int32_t var_50_1 = r12_3
                                                        int32_t rax_43 =
                                                            sub_142890240(rax_13, r12_3) ^ rbx_2
                                                        int64_t rbx_3 = sx.q(rax_43)
                                                        sub_14288fd10(rbx_3, arg2[2], rdi[2], 
                                                            rax_27)
                                                        sub_14288fd10(rbx_3, arg2[3], rdi[3], 
                                                            rax_27)
                                                        sub_14288fd10(rbx_3, arg2[4], rdi[4], 
                                                            rax_27)
                                                        int32_t rcx_53 = arg2[5].d
                                                        int32_t rax_46 =
                                                            (rcx_53 ^ rdi[5].d) & rax_43
                                                        var_68.q = arg5
                                                        arg2[5].d = rcx_53 ^ rax_46
                                                        rdi[5].d ^= rax_46
                                                        int64_t r10_3 = *(*arg1 + 0x198)
                                                        int32_t rax_48
                                                        
                                                        if (r10_3 == 0)
                                                            if (sub_1428bf3e0(arg1, rdi, arg2, rdi, 
                                                                    var_68) != 0)
                                                                rax_48 =
                                                                    sub_1428bf600(arg1, arg2, arg2, arg5)
                                                                goto label_142918774
                                                        else
                                                            rax_48 =
                                                                r10_3(arg1, arg2, rdi, rax_7, var_68)
                                                        label_142918774:
                                                            
                                                            if (rax_48 != 0)
                                                                r12_3 -= 1
                                                                rbx_2 = arg_20 ^ rax_43
                                                                arg_20 = rbx_2
                                                                
                                                                if (var_50_1 s<= 0)
                                                                    goto label_1429187a7
                                                                
                                                                continue
                                                        break
                                                    
                                                    sub_1428a5670(0x10, 0x11c, 0xa2, 
                                                        "crypto\ec\ec_mult.c", 0x166)
                                        else
                                            sub_1428a5670(0x10, 0x11c, 0xa3, "crypto\ec\ec_mult.c", 
                                                0x110)
                                else
                                    sub_1428a5670(0x10, 0x11c, rax_25 + 3, "crypto\ec\ec_mult.c", 
                                        0xef)
                            else
                                sub_1428a5670(0x10, 0x11c, rax_24 + 3, "crypto\ec\ec_mult.c", 0xea)
                        else
                            sub_1428a5670(0x10, 0x11c, rax_23 + 3, "crypto\ec\ec_mult.c", 0xe4)
                    else
                        sub_1428a5670(0x10, 0x11c, (rax_20 + 3).d, "crypto\ec\ec_mult.c", 0xd8)
            else
                sub_1428a5670(0x10, 0x11c, rax_14 + 3, "crypto\ec\ec_mult.c", 0xc5)
        else
            sub_1428a5670(0x10, 0x11c, 0x41, "crypto\ec\ec_mult.c", 0xc0)
    else
        sub_1428a5670(0x10, 0x11c, 0x10, "crypto\ec\ec_mult.c", 0xb3)
else
    if (sub_1428bf580(rax_7, arg1[1]) != 0)
        goto label_142918350
    
    sub_1428a5670(0x10, 0x11c, 0x10, "crypto\ec\ec_mult.c", 0xae)

sub_1428bf6a0(rax_7)
sub_1428bf6a0(rdi)
sub_1428d8a60(arg5)
return zx.q(var_54)
