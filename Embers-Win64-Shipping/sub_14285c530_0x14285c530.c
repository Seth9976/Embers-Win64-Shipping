// 函数: sub_14285c530
// 地址: 0x14285c530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i_4 = 0
int64_t var_78 = arg4
int32_t* rcx = *(arg1 + 8)
int64_t r10 = arg4
int32_t* r11 = arg3
int64_t* var_58 = arg7
int64_t var_70 = 0
int64_t r15_1

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0)
    r15_1 = 0
else
    int32_t rax_3 = *rcx
    
    if (rax_3 s< 0x304)
        r15_1 = 0
    else
        r15_1 = 1
        
        if (rax_3 == 0x10000)
            r15_1 = 0

int64_t var_60 = r15_1

if (*(arg1 + 0x820) != 0)
    goto label_14285c5e5

int32_t result

if (sub_14285da40(arg1) == 0)
label_14285c630:
    result = -1
else
    r10 = var_78
    r11 = arg3
label_14285c5e5:
    int32_t var_90_1
    int32_t* rcx_2
    int32_t rdx
    int32_t r9
    
    if ((arg2 == 0 || arg2 - 0x16 u<= 1) && (arg6 == 0 || arg2 == 0x17))
        int64_t rax_6
        
        if (arg2 == 0x16)
            rax_6 = *(arg1 + 0x1668)
        
        if (arg2 != 0x16 || rax_6 == 0)
            if (sub_1428565f0(arg1) != 0)
            label_14285c712:
                int64_t rbp_1 = arg5
                
                while (true)
                    int64_t i = *(arg1 + 0x810)
                    arg1[0xa] = 1
                label_14285c730:
                    
                    if (i != 0)
                        goto label_14285c755
                    
                    int64_t rbx_1
                    
                    do
                        result = sub_142880070(arg1)
                        
                        if (result s<= 0)
                            goto label_14285cea3
                        
                        i = *(arg1 + 0x810)
                        
                        if (i == 0)
                            var_90_1 = 0x516
                            goto label_14285c60b
                        
                    label_14285c755:
                        rbx_1 = 0
                        
                        if (i != 0)
                            void* rax_12 = &arg1[0x360]
                        label_14285c764:
                            
                            if (*rax_12 != 0)
                                rbx_1 += 1
                                rax_12 += 0x48
                                
                                if (rbx_1 u< i)
                                    goto label_14285c764
                        
                        if (rbx_1 == i)
                            *(arg1 + 0x810) = 0
                            i = 0
                            goto label_14285c730
                    while (i == 0)
                    
                    int32_t* r14_3 = &arg1[(rbx_1 * 9 + 0x1a9) * 2]
                    
                    if (arg1[(rbx_1 * 9 + 0x1a9) * 2 + 1] != 0x15 && *(r14_3 + 8) != 0)
                        arg1[0x5ab] = 0
                    
                    if (*(*(arg1 + 0xa8) + 0xf0) != 0 && r14_3[1] != 0x16)
                        var_90_1 = 0x534
                        rdx = 0xa
                        r9 = 0x91
                        goto label_14285c616
                    
                    char r9_2 = (arg1[0x11]).b
                    
                    if ((r9_2 & 2) != 0)
                        *(r14_3 + 8) = 0
                        arg1[0xa] = 1
                    else
                        int32_t rax_14 = r14_3[1]
                        
                        if (arg2 == rax_14
                                || (rax_14 == 0x14 && arg2 == 0x16 && arg3 != 0 && r15_1 == 0))
                            if (sub_142856410(arg1) == 0 || arg2 != 0x17)
                                if (arg2 == 0x16 && r14_3[1] == 0x14 && *(arg1 + 0x1668) u> 0)
                                    rdx = 0xa
                                    var_90_1 = 0x55a
                                    r9 = 0x85
                                    goto label_14285c616
                            else if (*(arg1 + 0x430) == 0)
                                var_90_1 = 0x552
                                rdx = arg2 - 0xd
                                r9 = arg2 + 0x4d
                                goto label_14285c616
                            
                            if (arg3 != 0)
                                *arg3 = r14_3[1]
                            
                            if (rbp_1 != 0)
                                int64_t r15_2 = 0
                                void* r14_4 = &r14_3[6]
                            label_14285cbc7:
                                int64_t rbp_2 = *(r14_4 - 0x10)
                                int64_t rax_33 = rbp_1 - r15_2
                                
                                if (rax_33 u<= rbp_2)
                                    rbp_2 = rax_33
                                
                                memcpy(var_78, *(r14_4 + 8) + *r14_4, rbp_2.d)
                                var_78 += rbp_2
                                int64_t rax_34 = *(r14_4 - 0x10)
                                
                                if (arg6 != 0)
                                    if (rax_34 != 0)
                                        goto label_14285cc2d
                                    
                                    goto label_14285cc20
                                
                                *r14_4 += rbp_2
                                rax_34 -= rbp_2
                                *(r14_4 - 0x10) = rax_34
                                
                                if (rax_34 != 0)
                                label_14285cc2d:
                                    
                                    if (arg6 != 0 && rbp_2 == rax_34)
                                        rbx_1 += 1
                                        r14_4 += 0x48
                                else
                                    arg1[0x203] = 0xf0
                                    rax_34 = *(r14_4 - 0x10)
                                    *r14_4 = 0
                                label_14285cc20:
                                    *(r14_4 + 0x20) = 1
                                    
                                    if (rax_34 != 0)
                                        goto label_14285cc2d
                                    
                                    rbx_1 += 1
                                    r14_4 += 0x48
                                
                                r15_2 += rbp_2
                                rbp_1 = arg5
                                
                                if (arg2 == 0x17 && rbx_1 u< i && r15_2 u< rbp_1)
                                    goto label_14285cbc7
                                
                                if (r15_2 == 0)
                                    r15_1 = var_60
                                    continue
                                
                                if (arg6 == 0 && rbx_1 == i && (arg1[0x172].b & 0x10) != 0
                                        && *(arg1 + 0x840) == 0)
                                    sub_14285d790(arg1)
                                
                                *var_58 = r15_2
                                result = 1
                                goto label_14285cea3
                            else if (*(r14_3 + 8) == 0)
                                r14_3[0xe] = 1
                        else
                            int32_t r8 = *r14_3
                            
                            if (r8 == 2)
                                var_90_1 = 0x5a7
                                goto label_14285c60b
                            
                            int32_t* rcx_8 = *(arg1 + 8)
                            int32_t rdx_2 = *rcx_8
                            
                            if (rdx_2 != 0x10000)
                                if (rax_14 != 0x15)
                                    bool cond:3_1
                                    
                                    if ((r9_2 & 1) == 0)
                                        if (rax_14 == 0x16)
                                        label_14285ca12:
                                            void* rcx_15 = *(arg1 + 0x1668)
                                            void* rbx_4 = *(r14_3 + 8)
                                            
                                            if (rbx_4 u>= 4 - rcx_15)
                                                rbx_4 = 4 - rcx_15
                                            
                                            memcpy(rcx_15 + 0x1660 + arg1, 
                                                *(r14_3 + 0x20) + *(r14_3 + 0x18), rbx_4.d)
                                            *(r14_3 + 0x18) += rbx_4
                                            *(r14_3 + 8) -= rbx_4
                                            *(arg1 + 0x1668) += rbx_4
                                            int64_t rax_24 = *(arg1 + 0x1668)
                                            
                                            if (*(r14_3 + 8) == 0)
                                                r14_3[0xe] = 1
                                                rax_24 = *(arg1 + 0x1668)
                                            
                                            if (rax_24 u< 4)
                                                continue
                                            
                                            goto label_14285ca7b
                                        
                                    label_14285ca7b:
                                        
                                        if (r14_3[1] == 0x14)
                                            rdx = 0xa
                                            var_90_1 = 0x65b
                                            r9 = 0x85
                                            goto label_14285c616
                                        
                                        int32_t rax_25
                                        
                                        if (*(arg1 + 0x1668) u>= 4)
                                            rax_25 = sub_1428565f0(arg1)
                                        
                                        if (*(arg1 + 0x1668) u< 4 || rax_25 != 0)
                                            int32_t rax_26 = r14_3[1]
                                            
                                            if (rax_26 s>= 0x14)
                                                if (rax_26 s<= 0x16)
                                                    var_90_1 = 0x6a3
                                                    rdx = 0xa
                                                    goto label_14285c610
                                                
                                                if (rax_26 == 0x17)
                                                    if (sub_142856460(arg1) != 0)
                                                        *(*(arg1 + 0xa8) + 0x110) = 2
                                                        result = -1
                                                        goto label_14285cea3
                                                    
                                                    rcx_2 = arg1
                                                    
                                                    if (sub_142856650(arg1) == 0)
                                                        var_90_1 = 0x6c3
                                                        rdx = 0xa
                                                        r9 = 0xf5
                                                        break
                                                    
                                                    if (sub_14287f730(rcx_2, *(r14_3 + 8), 0x68, 0)
                                                            == 0)
                                                        goto label_14285c630_2
                                                    
                                                    r14_3[0xe] = 1
                                                    continue
                                            
                                            var_90_1 = 0x698
                                            rdx = 0xa
                                            r9 = 0xf5
                                            goto label_14285c616
                                        
                                        int32_t rbx_5 = arg1[0x21]
                                        sub_142856630(arg1, rax_25 + 1)
                                        result = (*(arg1 + 0x30))(arg1)
                                        
                                        if (result s< 0)
                                            goto label_14285cea3
                                        
                                        if (result == 0)
                                            goto label_14285c630_2
                                        
                                        if (rbx_5 == 0xb)
                                            goto label_14285c630_2
                                        
                                        if ((arg1[0x172].b & 4) != 0)
                                            continue
                                        else
                                            cond:3_1 = *(arg1 + 0x840) != 0
                                    else
                                        if (rax_14 != 0x16)
                                            *(r14_3 + 8) = 0
                                            rdx = -1
                                            r14_3[0xe] = 1
                                            r9 = 0x123
                                            var_90_1 = 0x638
                                            goto label_14285c616
                                        
                                        if ((*(*(rcx_8 + 0xc0) + 0x60) & 8) == 0 && rdx_2 s>= 0x304)
                                            goto label_14285ca12
                                        
                                        *(r14_3 + 8) = 0
                                        r14_3[0xe] = 1
                                        cond:3_1 = (arg1[0x172].b & 4) != 0
                                    
                                    if (cond:3_1)
                                        continue
                                    
                                    arg1[0xa] = 3
                                    void* rax_22 = sub_14060aa60(arg1)
                                    sub_142899cc0(rax_22, 0xf)
                                    sub_14289a9a0(rax_22, 9)
                                    result = -1
                                    goto label_14285cea3
                            else if (arg1[0xe] != 0 || rax_14 != 0x15)
                                *arg1 = r8
                                rdx = 0xa
                                var_90_1 = 0x5b5
                                r9 = 0xf4
                                goto label_14285c616
                            
                            int64_t rcx_9 = *(r14_3 + 8)
                            char* r9_4 = *(r14_3 + 0x20) + *(r14_3 + 0x18)
                            
                            if (rcx_9 - 1 u> 0x7ffffffffffffffe)
                            label_14285cd62:
                                var_90_1 = 0x5c9
                                rdx = 0xa
                                r9 = 0xcd
                                goto label_14285c616
                            
                            uint32_t rsi_1 = zx.d(*r9_4)
                            
                            if (rcx_9 == 1)
                                goto label_14285cd62
                            
                            uint32_t rbx_2 = zx.d(r9_4[1])
                            
                            if (rcx_9 != 2)
                                goto label_14285cd62
                            
                            int64_t r10_2 = *(arg1 + 0xb8)
                            
                            if (r10_2 != 0)
                                int64_t var_88_1 = *(arg1 + 0xc0)
                                int32_t var_90
                                var_90.q = arg1
                                int64_t var_98_2 = 2
                                r10_2(0, zx.q(*arg1), 0x15)
                            
                            int64_t rax_19 = *(arg1 + 0x568)
                            
                            if (rax_19 == 0)
                                int64_t rcx_10 = *(*(arg1 + 0x598) + 0x108)
                                rax_19 = var_70
                                
                                if (rcx_10 != 0)
                                    rax_19 = rcx_10
                            
                            var_70 = rax_19
                            
                            if (rax_19 != 0)
                                rax_19(arg1, 0x4004, zx.q(rsi_1 << 8) | zx.q(rbx_2))
                            
                            if (rsi_1 == 1)
                            label_14285c91a:
                                *(*(arg1 + 0xa8) + 0xf4) = rbx_2
                                r14_3[0xe] = 1
                                arg1[0x5ab] += 1
                                
                                if (arg1[0x5ab] != 5)
                                    goto label_14285c93b
                                
                                var_90_1 = 0x5e3
                                rdx = 0xa
                                r9 = 0x199
                                goto label_14285c616
                            
                            if (r15_1 != 0)
                                if (rbx_2 == 0x5a)
                                    goto label_14285c91a
                                
                            label_14285c93b:
                                
                                if (r15_1 != 0 && rbx_2 == 0x5a)
                                    continue
                            
                            if (rbx_2 != 0 || (r15_1 == 0 && rsi_1 != 1))
                                if (rsi_1 != 2 && r15_1 == 0)
                                    if (rbx_2 == 0x64)
                                        var_90_1 = 0x609
                                        rdx = 0x28
                                        r9 = 0x153
                                        goto label_14285c616
                                    
                                    if (rsi_1 == 1)
                                        continue
                                    
                                    var_90_1 = 0x611
                                    rdx = (r15_1 + 0x2f).d
                                    r9 = 0xf6
                                    goto label_14285c616
                                
                                void* rax_35 = *(arg1 + 0xa8)
                                arg1[0xa] = 1
                                int32_t var_90_2 = 0x5f8
                                *(rax_35 + 0xf8) = rbx_2
                                sub_142856580(arg1, 0xffffffff, 0x94, rbx_2 + 0x3e8, 
                                    "ssl\record\rec_layer_s3.c", var_90_2)
                                sub_1428b7080(&var_58, 0x10, "%d", zx.q(rbx_2))
                                sub_1428a4880(2)
                                arg1[0x11] |= 2
                                r14_3[0xe] = 1
                                sub_1428574b0(*(arg1 + 0x738), *(arg1 + 0x508))
                            else
                                arg1[0x11] |= 2
                    
                    result = 0
                    goto label_14285cea3
                
                goto label_14285c62b
            
            if (sub_142856410(arg1) == 0)
                goto label_14285c712
            
            result = (*(arg1 + 0x30))(arg1)
            
            if (result s>= 0)
                if (result != 0)
                    goto label_14285c712
                
            label_14285c630_1:
                result = -1
        else
            int64_t i_3 = arg5
            void* rcx_3 = &arg1[0x598]
            int64_t r9_1 = 0
            
            if (i_3 != 0)
                int64_t rdx_1 = rax_6
                char* r10_1 = r10 - rcx_3
                int64_t i_1
                
                do
                    rax_6 = rdx_1
                    
                    if (rdx_1 == 0)
                        break
                    
                    r9_1 += 1
                    *(r10_1 + rcx_3) = *rcx_3
                    rcx_3 += 1
                    rax_6 = *(arg1 + 0x1668) - 1
                    *(arg1 + 0x1668) = rax_6
                    rdx_1 = rax_6
                    i_1 = i_3
                    i_3 -= 1
                while (i_1 != 1)
            
            if (rax_6 != 0)
                uint64_t i_2 = 0
                
                do
                    char rax_9 = *rcx_3
                    rcx_3 += 1
                    i_4 += 1
                    *(i_2 + arg1 + 0x1660) = rax_9
                    i_2 = zx.q(i_4)
                while (i_2 u< *(arg1 + 0x1668))
            
            if (r11 != 0)
                *r11 = 0x16
            
            *arg7 = r9_1
            result = 1
    else
        var_90_1 = 0x4d2
    label_14285c60b:
        rdx = 0x50
    label_14285c610:
        r9 = 0x44
    label_14285c616:
        rcx_2 = arg1
    label_14285c62b:
        sub_142856580(rcx_2, rdx, 0x94, r9, "ssl\record\rec_layer_s3.c", var_90_1)
    label_14285c630_2:
        result = -1

label_14285cea3:
__security_check_cookie(rax_1 ^ &var_b8)
return result
