// 函数: sub_14294ccb0
// 地址: 0x14294ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rax = sub_142896660(arg1)
int64_t* rax_1 = sub_142891590(arg1)
int64_t* rax_2 = sub_14060aa60(rax_1)
int64_t* result = nullptr
int64_t* rdi = nullptr
int64_t* r15 = nullptr
int64_t* rax_3 = sub_1428bfa80(rax_1)
int64_t* rax_4 = sub_1428d8d60()
int32_t rax_9
int32_t r8_10

if (rax_3 == 0 || rax_4 == 0)
    rax_9 = 0xca
label_14294cf48:
    r8_10 = 0x41
else
    sub_1428d8e50(rax_4)
    int64_t* rax_5 = sub_1428d8ba0(rax_4)
    int64_t* rax_6 = sub_1428d8ba0(rax_4)
    int64_t* rax_7 = sub_1428d8ba0(rax_4)
    int64_t* rax_8 = sub_1428d8ba0(rax_4)
    
    if (rax_8 != 0)
        rdi = sub_142890500()
        int64_t* rax_11 = sub_142890500()
        r15 = rax_11
        
        if (rdi == 0 || rax_11 == 0)
            rax_9 = 0xe0
        label_14294cf48_1:
            r8_10 = 0x41
        else
            while (true)
                if (sub_1429198c0(rax_5, rax_2) == 0)
                    rax_9 = 0xe6
                    r8_10 = 0x44
                    goto label_14294cf61
                
                int64_t* var_50_1 = rax_4
                int32_t var_58
                var_58.q = 0
                
                if (sub_1428bfa20(rax_1, rax_3, rax_5, 0, nullptr) != 0)
                    var_58.q = rax_4
                    
                    if (sub_1428bf6e0(rax_1, rax_3, rax_7, 0, var_58) != 0)
                        var_58.q = rax_4
                        
                        if (sub_1429080f0(rdi, arg2, rax_7, rax_2, var_58) != 0)
                            if (sub_142890300(rdi) != 0)
                                continue
                            else
                                if (sub_1428d8f70(rax_6, rdi, rax_5) == 0)
                                    rax_9 = 0xf7
                                    r8_10 = 0x44
                                    goto label_14294cf61
                                
                                if (sub_14288fc80(rax_6, rax_2) == 0)
                                    continue
                                
                                if (sub_1428d8f70(r15, rax, &data_1434e8ea8) != 0
                                        && sub_1428c00d0(rax_1, r15, r15, rax_4) != 0)
                                    var_58.q = rax_4
                                    
                                    if (sub_1429082e0(rax_8, rax, rdi, rax_2, var_58) != 0
                                            && sub_1428d9010(rax_8, rax_5, rax_8) != 0)
                                        var_58.q = rax_4
                                        
                                        if (sub_1429082e0(r15, r15, rax_8, rax_2, var_58) != 0)
                                            int64_t* result_1 = sub_1428eea30()
                                            result = result_1
                                            
                                            if (result_1 != 0)
                                                sub_1428eea90(result_1, rdi, r15)
                                                goto label_14294cf79
                                            
                                            rax_9 = 0x109
                                            goto label_14294cf48_2
                                
                                rax_9 = 0x103
                                r8_10 = 3
                                break
                
                rax_9 = 0xee
                r8_10 = 0x44
                goto label_14294cf61
    else
        rax_9 = 0xd4
    label_14294cf48_2:
        r8_10 = 0x41

label_14294cf61:
sub_1428a5670(0x35, 0x6a, r8_10, "crypto\sm2\sm2_sign.c", rax_9)
sub_1428901a0(rdi)
sub_1428901a0(r15)
label_14294cf79:
sub_1428d8ae0(rax_4)
sub_1428bf6a0(rax_3)
return result
