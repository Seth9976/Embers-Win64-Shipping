// 函数: sub_14286ec80
// 地址: 0x14286ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* var_58 = arg7
int32_t r15 = arg2
int64_t r14 = 0
int32_t rax_2

if (*(arg1 + 0x820) == 0)
    rax_2, arg2 = sub_14285d870(arg1)

int32_t result

if (*(arg1 + 0x820) == 0 && rax_2 == 0)
label_14286ed29:
    result = -1
else
    if (r15 == 0)
        if (arg6 == 0 || r15 == 0x17)
            goto label_14286ed53
        
        goto label_14286ed03
    
    char const* const var_e8_1
    int32_t var_e0_1
    int32_t* rcx
    int32_t rdx
    int32_t r9
    
    if (r15 - 0x16 u> 1 || (arg6 != 0 && r15 != 0x17))
    label_14286ed03:
        var_e0_1 = 0x16a
        var_e8_1 = "ssl\record\rec_layer_d1.c"
        rdx = 0x50
    label_14286ed15:
        r9 = 0x44
    label_14286ed1b:
        rcx = arg1
    label_14286ed24:
        sub_142856580(rcx, rdx, 0x102, r9, var_e8_1, var_e0_1)
    label_14286ed29_1:
        result = -1
    else
    label_14286ed53:
        
        if (sub_1428565f0(arg1) != 0)
        label_14286ed93:
            
            while (true)
                arg1[0xa] = 1
                
                if (sub_142856420(arg1) != 0 && *(arg1 + 0xd50) == 0)
                    void* rax_7
                    rax_7, arg2 = sub_142885870(*(*(arg1 + 0x16b0) + 0x48))
                    
                    if (rax_7 != 0)
                        sub_14286e950(arg1, rax_7)
                        sub_1428a6780(*(rax_7 + 8))
                        arg2 = sub_142885600(rax_7)
                
                int32_t rax_8
                rax_8, arg2 = sub_14286fd40(arg1, arg2)
                
                if (rax_8 s<= 0)
                    if (sub_142856600(arg1) != 0)
                        goto label_14286ed29_2
                    
                    if (*(arg1 + 0xd50) == 0 || arg1[0x203] == 0xf1)
                        *(arg1 + 0x810) = 0
                        int32_t rax_10
                        rax_10, arg2 = sub_14287ef70(arg1)
                        
                        if (rax_10 s> 0)
                            *(arg1 + 0x810) = 1
                        else
                            result, arg2 = sub_142877130(arg1, rax_10)
                            
                            if (result s<= 0)
                                goto label_14286ed39
                            
                            continue
                    
                    int32_t rax_11 = arg1[0x353]
                    
                    if (rax_11 != 0x15 && *(arg1 + 0xd50) != 0)
                        arg1[0x5ab] = 0
                        rax_11 = arg1[0x353]
                    
                    if (((rax_11 - 0x14) & 0xfffffffd) != 0 && sub_142856410(arg1) == 0)
                        void* rax_14 = *(arg1 + 0xb0)
                        
                        if (*(rax_14 + 0x1f4) != 0 || *(rax_14 + 0x1f8) != 0)
                            arg2 = sub_142870300(arg1)
                    
                    if (*(*(arg1 + 0xa8) + 0xf0) == 0 || arg1[0x353] == 0x16)
                        char rcx_19 = (arg1[0x11]).b
                        
                        if ((rcx_19 & 2) != 0)
                            *(arg1 + 0xd50) = 0
                            result = 0
                            arg1[0x360] = 1
                            arg1[0xa] = 1
                            goto label_14286ed39
                        
                        int32_t rax_17 = arg1[0x353]
                        
                        if (r15 == rax_17)
                        label_14286f317:
                            
                            if (sub_142856410(arg1) != 0 && r15 == 0x17 && *(arg1 + 0x430) == 0)
                                var_e0_1 = 0x1f9
                                rdx = r15 - 0xd
                                var_e8_1 = "ssl\record\rec_layer_d1.c"
                                r9 = r15 + 0x4d
                                goto label_14286ed1b
                            
                            if (arg3 != 0)
                                *arg3 = arg1[0x353]
                            
                            int64_t rdi_3 = arg5
                            int64_t rax_38 = *(arg1 + 0xd50)
                            
                            if (rdi_3 != 0)
                                if (rdi_3 u> rax_38)
                                    rdi_3 = rax_38
                                
                                memcpy(arg4, *(arg1 + 0xd68) + *(arg1 + 0xd60), rdi_3.d)
                                int64_t rax_39 = *(arg1 + 0xd50)
                                
                                if (arg6 == 0)
                                    *(arg1 + 0xd60) += rdi_3
                                    int64_t rax_40 = rax_39 - rdi_3
                                    *(arg1 + 0xd50) = rax_40
                                    
                                    if (rax_40 == 0)
                                        arg1[0x203] = 0xf0
                                        *(arg1 + 0xd60) = 0
                                        arg1[0x360] = 1
                                else if (rax_39 == 0)
                                    arg1[0x360] = 1
                                
                                result = 1
                                *var_58 = rdi_3
                            else
                                if (rax_38 == 0)
                                    arg1[0x360] = 1
                                
                                result = 0
                            
                            goto label_14286ed39
                        
                        if (rax_17 != 0x14)
                            if (rax_17 != 0x15)
                                goto label_14286ef1f
                            
                            int64_t rcx_20 = *(arg1 + 0xd50)
                            char* r9_2 = *(arg1 + 0xd68) + *(arg1 + 0xd60)
                            
                            if (rcx_20 - 1 u<= 0x7ffffffffffffffe)
                                uint32_t rsi_1 = zx.d(*r9_2)
                                
                                if (rcx_20 != 1)
                                    uint32_t rdi_2 = zx.d(r9_2[1])
                                    
                                    if (rcx_20 == 2)
                                        int64_t r10_1 = *(arg1 + 0xb8)
                                        
                                        if (r10_1 != 0)
                                            int64_t var_d8_1 = *(arg1 + 0xc0)
                                            int32_t var_e0
                                            var_e0.q = arg1
                                            int64_t var_e8_2 = 2
                                            arg2 = r10_1(0, zx.q(*arg1), 0x15)
                                        
                                        int64_t rax_21 = *(arg1 + 0x568)
                                        
                                        if (rax_21 == 0)
                                            int64_t rcx_21 = *(*(arg1 + 0x598) + 0x108)
                                            
                                            if (rcx_21 != 0)
                                                r14 = rcx_21
                                        else
                                            r14 = rax_21
                                        
                                        if (r14 != 0)
                                            arg2 = r14(arg1, 0x4004, zx.q(rsi_1 << 8) | zx.q(rdi_2))
                                        
                                        if (rsi_1 == 1)
                                            *(*(arg1 + 0xa8) + 0xf4) = rdi_2
                                            arg1[0x360] = rsi_1
                                            arg1[0x5ab] += 1
                                            
                                            if (arg1[0x5ab] == 5)
                                                var_e0_1 = 0x257
                                                rdx = 0xa
                                                var_e8_1 = "ssl\record\rec_layer_d1.c"
                                                r9 = 0x199
                                                goto label_14286ed1b
                                            
                                            if (rdi_2 == 0)
                                                arg1[0x11] |= 2
                                                result = 0
                                                goto label_14286ed39
                                            
                                            continue
                                        
                                        rcx = arg1
                                        
                                        if (rsi_1 != 2)
                                            var_e0_1 = 0x27d
                                            rdx = 0x2f
                                            var_e8_1 = "ssl\record\rec_layer_d1.c"
                                            r9 = 0xf6
                                            break
                                        
                                        void* rax_31 = *(arg1 + 0xa8)
                                        arg1[0xa] = 1
                                        int32_t var_e0_2 = 0x274
                                        char const* const var_e8_3 = "ssl\record\rec_layer_d1.c"
                                        *(rax_31 + 0xf8) = rdi_2
                                        sub_142856580(rcx, rsi_1 - 3, 0x102, rdi_2 + 0x3e8, 
                                            var_e8_3, var_e0_2)
                                        sub_1428b7080(&var_58, zx.q(rsi_1 + 0xe), "%d", zx.q(rdi_2))
                                        sub_1428a4880(rsi_1)
                                        arg1[0x11] |= rsi_1
                                        arg1[0x360] = 1
                                        sub_1428574b0(*(arg1 + 0x738), *(arg1 + 0x508))
                                        result = 0
                                        goto label_14286ed39
                            
                            var_e0_1 = 0x23e
                            rdx = 0xa
                            var_e8_1 = "ssl\record\rec_layer_d1.c"
                            r9 = 0xcd
                            goto label_14286ed1b
                        
                        if (r15 == 0x16 && arg3 != 0)
                            goto label_14286f317
                        
                    label_14286ef1f:
                        
                        if ((rcx_19 & 1) != 0)
                            arg1[0xa] = 1
                            result = 0
                            *(arg1 + 0xd50) = 0
                            arg1[0x360] = 1
                            goto label_14286ed39
                        
                        if (rax_17 != 0x14)
                            int32_t rax_24
                            
                            if (rax_17 == 0x16)
                                rax_24 = sub_1428565f0(arg1)
                            
                            if (rax_17 != 0x16 || rax_24 != 0)
                                int32_t rax_32 = arg1[0x353]
                                
                                if (rax_32 s< 0x14)
                                    var_e0_1 = 0x2f7
                                else
                                    if (rax_32 s<= 0x16)
                                        var_e0_1 = 0x302
                                        rdx = 0xa
                                        var_e8_1 = "ssl\record\rec_layer_d1.c"
                                        goto label_14286ed15
                                    
                                    if (rax_32 != 0x17)
                                        var_e0_1 = 0x2f7
                                    else
                                        void* rax_33 = *(arg1 + 0xa8)
                                        
                                        if (*(rax_33 + 0x110) != 0 && *(rax_33 + 0x108) != 0
                                                && sub_142856460(arg1) != 0)
                                            *(*(arg1 + 0xa8) + 0x110) = 2
                                            goto label_14286ed29_2
                                        
                                        var_e0_1 = 0x313
                                
                                var_e8_1 = "ssl\record\rec_layer_d1.c"
                                rdx = 0xa
                                r9 = 0xf5
                                goto label_14286ed1b
                            
                            if (arg1[0x361] == zx.d(**(arg1 + 0x16b0)) && *(arg1 + 0xd50) u>= 0xc)
                                char var_b8
                                sub_142876b10(*(arg1 + 0xd68), &var_b8)
                                
                                if (var_b8 != 0x14)
                                    rcx = arg1
                                    
                                    if (sub_142856420(arg1) == 0)
                                        rdx = 0x50
                                        var_e0_1 = 0x2d2
                                        var_e8_1 = "ssl\record\rec_layer_d1.c"
                                        r9 = 0x44
                                        break
                                    
                                    sub_142856630(rcx, 1)
                                    result, arg2 = (*(arg1 + 0x30))(arg1)
                                    
                                    if (result s< 0)
                                        goto label_14286ed39
                                    
                                    if (result == 0)
                                        goto label_14286ed29_2
                                else
                                    if (sub_14286f5c0(arg1) s< 0)
                                        goto label_14286ed29_2
                                    
                                    int32_t rax_27
                                    rax_27, arg2 = sub_142877560(arg1)
                                    
                                    if (rax_27 s<= 0 && sub_142856600(arg1) != 0)
                                        goto label_14286ed29_2
                                    
                                    *(arg1 + 0xd50) = 0
                                    arg1[0x360] = 1
                                
                                if ((arg1[0x172].b & 4) != 0)
                                    continue
                                else
                                    if (*(arg1 + 0x840) != 0)
                                        continue
                                    
                                    arg1[0xa] = 3
                                    void* rax_29 = sub_14060aa60(arg1)
                                    sub_142899cc0(rax_29, 0xf)
                                    sub_14289a9a0(rax_29, 9)
                                    goto label_14286ed29_2
                    else
                        int32_t rax_16
                        rax_16, arg2 = sub_14286e730(arg1, *(arg1 + 0x16b0) + 0x40, &arg1[0x362])
                        
                        if (rax_16 s< 0)
                            goto label_14286ed29_2
                    
                    *(arg1 + 0xd50) = 0
                    arg1[0x360] = 1
            
            goto label_14286ed24
        
        if (sub_142856410(arg1) == 0)
            goto label_14286ed93
        
        result, arg2 = (*(arg1 + 0x30))(arg1)
        
        if (result s>= 0)
            if (result != 0)
                goto label_14286ed93
            
        label_14286ed29_2:
            result = -1

label_14286ed39:
__security_check_cookie(rax_1 ^ &var_108)
return result
