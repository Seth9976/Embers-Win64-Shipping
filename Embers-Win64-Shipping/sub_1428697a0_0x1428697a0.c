// 函数: sub_1428697a0
// 地址: 0x1428697a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* r13 = *(arg1 + 0x738)
int32_t r8 = 0
int32_t* rcx = *(arg1 + 8)
int32_t var_48 = 0

if ((*(*(rcx + 0xc0) + 0x60) & 8) != 0)
    goto label_142869ad8

int32_t rax_3 = *rcx

if (rax_3 s< 0x304 || rax_3 == 0x10000)
    goto label_142869ad8

void* rax_4 = sub_14285b130(arg1)
int32_t rax_5 = sub_1428916c0(rax_4)
int64_t result
int32_t var_70_1
int32_t r9_1

if (rax_5 s>= 0)
    int64_t rdi_1 = *(arg1 + 0x568)
    int64_t r14_1 = sx.q(rax_5)
    
    if (rdi_1 != 0)
    label_1428698ad:
        
        if (*(arg1 + 0x1720) != 0)
            sub_142856630(arg1, 0)
            rdi_1(arg1, 0x20, 1)
            sub_142856630(arg1, 1)
        
        rdi_1(arg1, 0x10, 1)
    else
        rdi_1 = *(*(arg1 + 0x598) + 0x108)
        
        if (rdi_1 != 0)
            goto label_1428698ad
    
    if (*(arg1 + 0x1720) == 0 && arg1[0x32] == 0)
        goto label_14286992c
    
    int128_t* rax_7 = sub_1428587a0(*(arg1 + 0x508), 0)
    
    if (rax_7 == 0)
        result = 0
    else
        sub_1428574d0(*(arg1 + 0x508))
        *(arg1 + 0x508) = rax_7
    label_14286992c:
        
        if (sub_142857d90(arg1, *(arg1 + 0x508)) == 0)
            result = 0
        else
            if (sub_142897af0(&var_48, 4) s<= 0)
                var_70_1 = 0xfeb
                goto label_14286983d
            
            int64_t var_58_1 = r14_1
            *(*(arg1 + 0x508) + 0x194) = var_48
            int64_t rax_11 = *(arg1 + 0x1728)
            char var_39_1 = rax_11.b
            uint64_t rax_12 = rax_11 u>> 8
            char var_3a_1 = rax_12.b
            uint64_t rax_13 = rax_12 u>> 8
            char var_3b_1 = rax_13.b
            uint64_t rax_14 = rax_13 u>> 8
            char var_3c_1 = rax_14.b
            uint64_t rax_15 = rax_14 u>> 8
            char var_3d_1 = rax_15.b
            uint64_t rax_16 = rax_15 u>> 8
            char var_3e_1 = rax_16.b
            uint64_t rax_17 = rax_16 u>> 8
            char var_3f_1 = rax_17.b
            uint8_t var_40 = (rax_17 u>> 8).b
            int32_t var_70
            var_70.q = &var_40
            
            if (sub_1428628c0(arg1, rax_4, &arg1[0x7b], "resumption", 0xa, var_70, 8, 
                    *(arg1 + 0x508) + 0x50) == 0)
                result = 0
            else
                *(*(arg1 + 0x508) + 8) = r14_1
                *(*(arg1 + 0x508) + 0x11c) = _time64(nullptr)
                
                if (*(*(arg1 + 0xa8) + 0x3e0) == 0)
                    goto label_142869acd
                
                sub_1428a6780(*(*(arg1 + 0x508) + 0x1a0))
                void* rcx_19 = *(arg1 + 0xa8)
                *(*(arg1 + 0x508) + 0x1a0) = sub_1428a6af0(*(rcx_19 + 0x3e0), *(rcx_19 + 0x3e8), 
                    "ssl\statem\statem_srvr.c", 0x1006)
                void* rdx_4 = *(arg1 + 0x508)
                
                if (*(rdx_4 + 0x1a0) == 0)
                    var_70_1 = 0x100a
                    r9_1 = 0x41
                    goto label_142869843
                
                *(rdx_4 + 0x1a8) = *(*(arg1 + 0xa8) + 0x3e8)
            label_142869acd:
                *(*(arg1 + 0x508) + 0x19c) = arg1[0x5b8]
                r8 = var_48
            label_142869ad8:
                int64_t rax_30 = *(r13 + 0x3a8)
                
                if (rax_30 == 0)
                    goto label_142869afd
                
                if (rax_30(arg1, *(r13 + 0x3b8), r8) == 0)
                    result = 0
                else
                    r8 = var_48
                label_142869afd:
                    int32_t* rcx_25 = *(arg1 + 8)
                    
                    if ((*(*(rcx_25 + 0xc0) + 0x60) & 8) != 0)
                    label_142869baa:
                        
                        if (sub_142867470(arg1, arg2, r8, &var_40) == 0)
                            result = 0
                        else
                        label_142869bb7:
                            int32_t* rcx_30 = *(arg1 + 8)
                            
                            if ((*(*(rcx_30 + 0xc0) + 0x60) & 8) != 0)
                                result = 1
                            else
                                int32_t rax_40 = *rcx_30
                                
                                if (rax_40 s< 0x304 || rax_40 == 0x10000)
                                    result = 1
                                else if (sub_142875910(arg1, arg2, 0x2000, 0, 0) == 0)
                                    result = 0
                                else
                                    *(arg1 + 0x1720) += 1
                                    *(arg1 + 0x1728) += 1
                                    sub_142852680(arg1, 2)
                                    result = 1
                    else
                        int32_t rax_33 = *rcx_25
                        
                        if (rax_33 s< 0x304 || rax_33 == 0x10000)
                            goto label_142869baa
                        
                        int32_t rax_34 = arg1[0x171]
                        
                        if (not(test_bit(rax_34, 0xe))
                                && (arg1[0x5b8] u<= 0 || test_bit(rax_34, 0x18)))
                            goto label_142869baa
                        
                        if (sub_142867a20(arg1, arg2, r8, &var_40) == 0)
                            result = 0
                        else
                            void* r8_4 = *(arg1 + 0x508)
                            int32_t rax_36 = sub_142873970(arg2, r8_4 + 0x98, *(r8_4 + 0x90))
                            int32_t rax_37
                            
                            if (rax_36 != 0)
                                rax_37 = sub_1428736e0(arg2)
                            
                            if (rax_36 != 0 && rax_37 != 0)
                                goto label_142869bb7
                            
                            sub_142856580(arg1, 0x50, 0x27c, 0x44, "ssl\statem\statem_srvr.c", 
                                0xf9e)
                            result = 0
else
    var_70_1 = 0xfbc
label_14286983d:
    r9_1 = 0x44
label_142869843:
    sub_142856580(arg1, 0x50, 0x1ac, r9_1, "ssl\statem\statem_srvr.c", var_70_1)
    result = 0
__security_check_cookie(rax_1 ^ &var_98)
return result
