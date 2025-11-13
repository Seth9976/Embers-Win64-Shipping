// 函数: sub_142922680
// 地址: 0x142922680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rbp = nullptr
int64_t* arg_18 = nullptr
void** result = nullptr
int32_t r14 = arg2
int32_t r8_10

if (*(arg3 + 8) == 0 || *(arg3 + 0x10) == 0 || *(arg3 + 0x18) == 0)
    r8_10 = 0x65
else
    void** result_1 = sub_1428f06e0()
    result = result_1
    
    if (result_1 != 0)
        *result = sub_142890500()
        void* rax_2 = sub_142890500()
        result[1] = rax_2
        
        if (*result != 0 && rax_2 != 0)
            int64_t* rax_3 = sub_1428d8d60()
            rbp = rax_3
            
            if (rax_3 != 0)
                int64_t* rax_4 = sub_1428d8ba0(rax_3)
                int64_t* rax_5 = sub_1428d8ba0(rbp)
                int64_t* rax_6 = sub_1428d8ba0(rbp)
                int64_t* rax_7 = sub_1428d8ba0(rbp)
                
                if (rax_7 != 0)
                    int32_t var_48
                    var_48.q = arg1
                    
                    if (sub_142922db0(arg3, rbp, &arg_18, result, var_48, r14) != 0)
                        int32_t i
                        
                        do
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(sub_142890560(*(arg3 + 0x10)) + 7)
                            
                            if (r14 s> (temp1_1 + (temp0_1 & 7)) s>> 3)
                                int32_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(sub_142890560(*(arg3 + 0x10)) + 7)
                                r14 = ((temp2_1 & 7) + temp3_1) s>> 3
                            
                            if (sub_14288fa60(arg1, r14, rax_4) == 0)
                                break
                            
                            int32_t j
                            
                            do
                                if (sub_142919890(rax_5, sub_142890560(*(arg3 + 0x10)) - 1, 
                                        0xffffffff, 0) == 0)
                                    goto label_142922937
                                
                                j = sub_142890300(rax_5)
                            while (j != 0)
                            
                            sub_1428908d0(rax_5, j + 4)
                            sub_1428908d0(rax_6, 4)
                            sub_1428908d0(rax_7, 4)
                            var_48.q = rbp
                            
                            if (sub_1429082e0(rax_7, rax_5, *(arg3 + 0x28), *(arg3 + 0x10), var_48)
                                    == 0)
                                break
                            
                            var_48.q = rbp
                            
                            if (sub_1429082e0(rax_7, rax_7, *result, *(arg3 + 0x10), var_48) == 0)
                                break
                            
                            var_48.q = rbp
                            
                            if (sub_1429082e0(rax_6, rax_5, rax_4, *(arg3 + 0x10), var_48) == 0)
                                break
                            
                            if (sub_142908140(result[1], rax_7, rax_6, *(arg3 + 0x10)) == 0)
                                break
                            
                            int64_t* rcx_18 = result[1]
                            var_48.q = rbp
                            
                            if (sub_1429082e0(rcx_18, rcx_18, arg_18, *(arg3 + 0x10), var_48) == 0)
                                break
                            
                            if (sub_1428da4f0(rax_5, rax_5, *(arg3 + 0x10), rbp) == 0)
                                break
                            
                            int64_t* rcx_20 = result[1]
                            var_48.q = rbp
                            
                            if (sub_1429082e0(rcx_20, rcx_20, rax_5, *(arg3 + 0x10), var_48) == 0)
                                break
                            
                            if (sub_142890300(*result) == 0 && sub_142890300(result[1]) == 0)
                                goto label_142922966
                            
                            var_48.q = arg1
                            i = sub_142922db0(arg3, rbp, &arg_18, result, var_48, r14)
                        while (i != 0)
    
label_142922937:
    r8_10 = 3

sub_1428a5670(0xa, 0x70, r8_10, "crypto\dsa\dsa_ossl.c", 0xa0)
sub_1428f0690(result)
result = nullptr
label_142922966:
sub_1428d8ae0(rbp)
sub_14288fbf0(arg_18)
return result
