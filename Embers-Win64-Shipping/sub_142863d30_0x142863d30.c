// 函数: sub_142863d30
// 地址: 0x142863d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* r15 = arg3
int32_t result = sub_1406938b0(arg3)
int32_t result_1 = result

if (result == 0xffffffff)
    return result

int32_t* rcx_1 = *(arg1 + 8)
int32_t rdx_1 = *(*(rcx_1 + 0xc0) + 0x60) & 8

if (rdx_1 == 0)
    int32_t rax_1 = *rcx_1
    
    if (rax_1 s>= 0x304 && rax_1 != 0x10000)
        if (result_1 == 0x74)
            sub_142856580(arg1, result_1 - 0x45, 0x14d, 0x172, "ssl\t1_lib.c", 0x3c9)
            return 0
        
        if (result_1 == 6)
            result_1 = 0x390

char const (** const rsi)[0x17] = &data_1434dc750
char* r14 = nullptr
int64_t rax_3 = 0
int32_t var_30_1
int32_t rdx_6
int32_t r9_1

while (true)
    if (rsi[1].w != arg2)
        rax_3 += 1
        rsi = &rsi[5]
        
        if (rax_3 u< 0x1a)
            continue
        else
            var_30_1 = 0x3da
        
        r9_1 = 0x172
    else if (rdx_1 != 0)
    label_142863e34:
        int32_t rax_6 = *(rsi + 0x14)
        int32_t var_28
        
        if (result_1 == rax_6 || (rax_6 == 0x390 && result_1 == 6))
            if (sub_142854200(sub_1406938b0(r15), &var_28) == 0 || rsi[3].d != var_28)
                var_30_1 = 0x3e1
                r9_1 = 0x172
            else
                if (result_1 != 0x198)
                    if ((*(*(arg1 + 0x488) + 0x1c) & 0x30000) == 0)
                        goto label_142863fd7
                    
                    var_30_1 = 0x40f
                    rdx_6 = 0x28
                    r9_1 = 0x172
                    break
                
                if (sub_142864fb0(arg1, r15) != 0)
                    int32_t* rcx_6 = *(arg1 + 8)
                    int32_t rax_12
                    
                    if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0)
                        rax_12 = *rcx_6
                    
                    if ((*(*(rcx_6 + 0xc0) + 0x60) & 8) == 0 && rax_12 s>= 0x304)
                        if (rax_12 != 0x10000 || (*(*(arg1 + 0x488) + 0x1c) & 0x30000) != 0)
                            goto label_142863eed
                        
                        goto label_142863f10
                    
                    if ((*(*(arg1 + 0x488) + 0x1c) & 0x30000) == 0)
                    label_142863f10:
                        int32_t* rcx_11 = *(arg1 + 8)
                        int32_t rax_18
                        
                        if ((*(*(rcx_11 + 0xc0) + 0x60) & 8) == 0)
                            rax_18 = *rcx_11
                        
                        if ((*(*(rcx_11 + 0xc0) + 0x60) & 8) == 0 && rax_18 s>= 0x304
                            && rax_18 != 0x10000)
                        label_142863fd7:
                            int16_t* var_20
                            int64_t rax_24 = sub_142864260(arg1, 1, &var_20)
                            int64_t rcx_15 = 0
                            
                            if (rax_24 != 0)
                                int16_t* rdx_7 = var_20
                                
                                while (arg2 != *rdx_7)
                                    rcx_15 += 1
                                    rdx_7 = &rdx_7[1]
                                    
                                    if (rcx_15 u>= rax_24)
                                        break
                            
                            if (rcx_15 != rax_24 || (*(rsi + 0xc) == 0x40
                                    && (*(*(arg1 + 0x488) + 0x1c) & 0x30001) == 0))
                                char* rax_26
                                
                                if (*(rsi + 0xc) != 0)
                                    rax_26 = sub_14285b4c0((rsi[2].d).b)
                                    r14 = rax_26
                                
                                if (*(rsi + 0xc) == 0 || rax_26 != 0)
                                    int32_t rax_31
                                    
                                    if (r14 != 0)
                                        char arg_21 = arg2.b
                                        char arg_20 = (arg2 u>> 8).b
                                        int32_t rax_28 = sub_1406938b0(r14)
                                        rax_31 = sub_1428546e0(arg1, 0x5000d, 
                                            sub_1428916c0(r14) << 2, rax_28, &arg_20)
                                    
                                    if (r14 == 0 || rax_31 != 0)
                                        *(*(arg1 + 0xa8) + 0x308) = rsi
                                        return 1
                                    
                                    var_30_1 = 0x431
                                    rdx_6 = rax_31 + 0x28
                                    r9_1 = 0x172
                                else
                                    var_30_1 = 0x423
                                    rdx_6 = (&rax_26[0x28]).d
                                    r9_1 = 0x170
                            else
                                var_30_1 = 0x41e
                                rdx_6 = 0x28
                                r9_1 = 0x172
                            
                            break
                        
                        if (sub_142864e30(arg1, sub_142865230(r15), 1) != 0)
                            if ((*(*(arg1 + 0x488) + 0x1c) & 0x30000) == 0
                                    || (0xfeff & (arg2 - 0x403)) == 0)
                                goto label_142863fd7
                            
                            var_30_1 = 0x408
                            rdx_6 = 0x28
                            r9_1 = 0x172
                            break
                        
                        var_30_1 = 0x3ff
                        r9_1 = 0x17a
                    else
                    label_142863eed:
                        int32_t rax_16 = sub_140611e80(sub_142891590(sub_142896700(r15)))
                        int32_t rcx_10 = rsi[4].d
                        
                        if (rcx_10 == 0 || rax_16 == rcx_10)
                            goto label_142863f10
                        
                        var_30_1 = 0x3f7
                        r9_1 = 0x17a
                else
                    var_30_1 = 0x3ec
                    r9_1 = 0xa2
        else
            var_30_1 = 0x3da
            r9_1 = 0x172
    else
        int32_t rax_4 = *rcx_1
        
        if (rax_4 s< 0x304 || rax_4 == 0x10000)
            goto label_142863e34
        
        int32_t rax_5 = *(rsi + 0xc)
        
        if (rax_5 != 0x40 && rax_5 != 0x2a3)
            goto label_142863e34
        
        var_30_1 = 0x3da
        r9_1 = 0x172
    
    rdx_6 = 0x2f
    break

sub_142856580(arg1, rdx_6, 0x14d, r9_1, "ssl\t1_lib.c", var_30_1)
return 0
