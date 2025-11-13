// 函数: sub_1428ef870
// 地址: 0x1428ef870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t arg_10 = *arg2
int32_t* rax_1 = sub_1428c41c0(nullptr, &arg_10, arg3, &data_1435157d0)

if (rax_1 == 0)
    sub_1428a5670(0x10, 0x92, 0x10, "crypto\ec\ec_asn1.c", 0x383)
    return 0

int64_t* result

if (arg1 != 0)
    result = *arg1

if (arg1 != 0 && result != 0)
label_1428ef918:
    
    if (*(rax_1 + 0x10) != 0)
        sub_1428be5f0(result[3])
        result[3] = sub_1428ef5a0(*(rax_1 + 0x10))
    
    if (result[3] != 0)
        result[2].d = *rax_1
        char* rbp_1 = *(rax_1 + 8)
        
        if (rbp_1 == 0)
            sub_1428a5670(0x10, 0x92, 0x7d, "crypto\ec\ec_asn1.c", 0x3a1)
        else
            int64_t rbx_1 = sx.q(sub_1406938b0(rbp_1))
            
            if (sub_1428c0e50(result, sub_14060aa50(rbp_1), rbx_1) != 0)
                sub_1428bf490(result[4])
                int64_t* rax_8 = sub_1428bfa80(result[3])
                result[4] = rax_8
                
                if (rax_8 != 0)
                    void* rcx_7 = *(rax_1 + 0x18)
                    
                    if (rcx_7 == 0)
                        int64_t rax_13 = *(*result[3] + 0x160)
                        
                        if (rax_13 != 0 && rax_13(result) != 0)
                            result[6].d |= 2
                        label_1428efa1b:
                            
                            if (arg1 != 0)
                                *arg1 = result
                            
                            sub_1428c3d60(rax_1, &data_1435157d0)
                            *arg2 = arg_10
                            return result
                    else
                        if (sub_1428c0db0(result, sub_14060aa50(rcx_7), 
                                sx.q(sub_1406938b0(*(rax_1 + 0x18))), 0) != 0)
                            goto label_1428efa1b
                        
                        sub_1428a5670(0x10, 0x92, 0x10, "crypto\ec\ec_asn1.c", 0x3b3)
                else
                    sub_1428a5670(0x10, 0x92, 0x10, "crypto\ec\ec_asn1.c", 0x3a8)
    else
        sub_1428a5670(0x10, 0x92, 0x10, "crypto\ec\ec_asn1.c", 0x395)
else
    int64_t* result_1 = sub_1428c0d20()
    result = result_1
    
    if (result_1 != 0)
        goto label_1428ef918
    
    sub_1428a5670(0x10, 0x92, (result_1 + 0x41).d, "crypto\ec\ec_asn1.c", 0x389)

if (arg1 == 0 || *arg1 != result)
    sub_1428c0b90(result)

sub_1428c3d60(rax_1, &data_1435157d0)
return nullptr
